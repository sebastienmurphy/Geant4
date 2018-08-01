//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
/// \file electromagnetic/XRayInt/src/SteppingAction.cc
/// \brief Implementation of the SteppingAction class
//
// $Id: SteppingAction.cc 84208 2014-10-10 14:44:50Z gcosmo $
// 
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#include "G4UnitsTable.hh"
#include "G4SystemOfUnits.hh"
#include "SteppingAction.hh"
#include "Run.hh"
#include "HistoManager.hh"
#include "G4RunManager.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

SteppingAction::SteppingAction()
:G4UserSteppingAction()
{ }

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

SteppingAction::~SteppingAction()
{ }

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void SteppingAction::UserSteppingAction(const G4Step* aStep)
{
    G4AnalysisManager* analysisManager = G4AnalysisManager::Instance();
    const G4StepPoint* endPoint = aStep->GetPostStepPoint();
    const G4StepPoint* startPoint = aStep->GetPreStepPoint();
    G4String procName = endPoint->GetProcessDefinedStep()->GetProcessName();
    
    Run* run = static_cast<Run*>(
        G4RunManager::GetRunManager()->GetNonConstCurrentRun());
    
    G4bool transmit = (endPoint->GetStepStatus() <= fGeomBoundary);  
    if (transmit) { run->CountProcesses(procName); }
    else {                         
        //count real processes and sum track length
        G4double stepLength = aStep->GetStepLength();
        run->CountProcesses(procName);  
        run->SumTrack(stepLength);
        analysisManager->FillH1(8,stepLength);
    }
    
    G4int id = 1;
    G4double StartEnergy = startPoint->GetKineticEnergy(); // primary photon energy
    analysisManager->FillH1(id,StartEnergy);
    G4double EndEnergy = endPoint->GetKineticEnergy(); //scattered photon energy for compton
    G4ThreeVector direction_endpoint = endPoint->GetMomentumDirection();
    G4double costeta_photon = direction_endpoint.x();
    
    //plot final state
    if (aStep->GetTrack()->GetTrackStatus() == fAlive) {
    id = 2;
    analysisManager->FillH1(id,EndEnergy);
    
    id=3;
    analysisManager->FillH1(id,costeta_photon);
    analysisManager->FillH2(4,costeta_photon,EndEnergy*1e3);//scattered photon energy vs costeta
    }  
  
  //secondaries
  //
  const std::vector<const G4Track*>* secondary 
                                    = aStep->GetSecondaryInCurrentStep();
  for (size_t lp=0; lp<(*secondary).size(); lp++) {
    G4double charge = (*secondary)[lp]->GetDefinition()->GetPDGCharge();
    G4String particle_name = (*secondary)[lp]->GetDefinition()->GetParticleName();

    if (charge != 0.) { id = 4; } else { id = 6; }
    G4double energy = (*secondary)[lp]->GetKineticEnergy();
    
    analysisManager->FillH1(id,energy);


    ++id;
    G4ThreeVector direction = (*secondary)[lp]->GetMomentumDirection();      
    G4double costeta_secondary = direction.x();
    analysisManager->FillH1(id,costeta_secondary);//angle between electron and primary photon (for compton)
    
    if (charge != 0.) analysisManager->FillH2(2,costeta_photon,energy*1e3);
    else analysisManager->FillH2(3,costeta_photon,energy*1e3);
    
    //energy tranferred to charged secondaries
    if (charge != 0.) { run->SumeTransf(energy); }         
  }
         
  // kill event after first interaction
  //
  G4RunManager::GetRunManager()->AbortEvent();  
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......


