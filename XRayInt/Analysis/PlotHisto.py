import ROOT
import matplotlib.pyplot as plt
from ROOT import gROOT, TCanvas, TF1, gApplication
from ROOT import TFile, TColor
from ROOT import TH1F,TH2F,TGraph
from ROOT import kBlack, kBlue, kRed, kCyan, kMagenta, kGreen, kGray
from ROOT import TLegend
from ROOT import gStyle
import os
from ComptonKin import *
n_output_files=29

gStyle.SetOptStat(0)

rootfile=[]
rootfile_compt_phot=[]
rootfile_phot=[]
hPrimaryEnergy =[]


hLStep= []
hLStep_compt_phot= []

hSecEn= []
hSecEn_compt_phot= []
hSecEn_phot= []
hSecEn_neutral_phot= []# secondary photon from photo-electric effect

hSecCosTh= []
hSecCosTh_compt_phot= []
hSecCosTh_phot= []
hSecCosTh_neutral_phot= []# secondary photon vs costh from photo-electric effect

hCosThVsE_gamma_compt=[]# TH2 scattered gamma kinetic energy vs cos of scattering angle (Compton)
hCosThVsE_gamma_compt_phot=[]# TH2 scattered gamma kinetic energy vs cos of scattering angle (Compton+ phot)

hCosThVsE_electron_compt=[]# TH2 electron kinetic energy vs cos of scattering angle (Compton)
hCosThVsE_electron_compt_phot=[]# TH2 electron kinetic energy vs cos of scattering angle (Compton+ phot)

gComptonMFP= TGraph()
gComptonMFP.SetTitle("mean free path Compton only")
gComptonMassicCS= TGraph()
gComptonMassicCS.SetTitle("attenuation Compton only")

gComptonPhotMFP= TGraph()
gComptonPhotMFP.SetTitle("mean free path Compton+photo")
gComptonPhotMassicCS= TGraph()
gComptonPhotMassicCS.SetTitle("attenuation Compton+photo")

gComptonPhotMassicCS_NIST= TGraph()
gComptonPhotMassicCS_NIST.SetTitle("NIST attenuation Compton+photo")

gComptonMassicCS_NIST= TGraph()
gComptonMassicCS_NIST.SetTitle("NIST attenuation Compton only")

gComptonPhotMFP.SetMarkerColor(kRed)
gComptonPhotMassicCS.SetMarkerColor(kRed)


density=5.323 #Ge
for i in range(0,n_output_files):
    print "i:",i
    beam_energy=10*(i+1) # keV
    filename="../InputG4Mac/ComptonOnly/Output/compton-"+str(beam_energy)+"keV.root"
    if (not os.path.isfile(filename)):
        print "WARNING", filename, " does not exist, continue.."
        continue
    
    filename_compt_phot="../InputG4Mac/ComptonPhoto/Output/compton-photo-"+str(beam_energy)+"keV.root"
    if (not os.path.isfile(filename_compt_phot)) :
        print "WARNING", filename_compt_phot, " does not exist, continue.."
        continue

    filename_phot="../InputG4Mac/PhotoOnly/Output/photo-"+str(beam_energy)+"keV.root"
    if (not os.path.isfile(filename_phot)) :
        print "WARNING", filename_phot, " does not exist, continue.."
        continue

    
#    print filename
#    print filename_compt_phot
    rootfile.append(ROOT.TFile(filename))
    rootfile_compt_phot.append(ROOT.TFile(filename_compt_phot))
    rootfile_phot.append(ROOT.TFile(filename_phot))

    hLStep.append(rootfile[i].Get("8"))
    hLStep_compt_phot.append(rootfile_compt_phot[i].Get("8"))

    hSecEn.append(rootfile[i].Get("4"))
    hSecEn_compt_phot.append(rootfile_compt_phot[i].Get("4"))
    hSecEn_phot.append(rootfile_phot[i].Get("4"))
    hSecEn_neutral_phot.append(rootfile_phot[i].Get("6"))
    

    hSecCosTh.append(rootfile[i].Get("5"))
    hSecCosTh_compt_phot.append(rootfile_compt_phot[i].Get("5"))
    hSecCosTh_phot.append(rootfile_phot[i].Get("5"))
    hSecCosTh_neutral_phot.append(rootfile_phot[i].Get("7"))
    
    hPrimaryEnergy.append(rootfile[i].Get("1"))

    hCosThVsE_gamma_compt.append(rootfile[i].Get("hPhotonCosThVsE"))
    hCosThVsE_gamma_compt[i].SetStats(0)

    #        object_exist=rootfile[i].GetListOfKeys().Contains(object_name)
    hCosThVsE_electron_compt.append(rootfile[i].Get("hSecCosThVsE_charged"))
    hCosThVsE_electron_compt[i].SetStats(0)

    hCosThVsE_gamma_compt_phot.append(rootfile_compt_phot[i].Get("hPhotonCosThVsE"))
    hCosThVsE_gamma_compt_phot[i].SetStats(0)
    
    hCosThVsE_electron_compt_phot.append(rootfile_compt_phot[i].Get("hSecCosThVsE_charged"))
    hCosThVsE_electron_compt_phot[i].SetStats(0)
    
        
    MFPCompton=hLStep[i].GetMean()
    CrossSectionCompton = 1./MFPCompton
    massicMFPCompton =  MFPCompton*density
    massicCSCompton  = 1./massicMFPCompton 

    print "i:",i, " energy: ",hPrimaryEnergy[i].GetMean(), "keV  MFP Compton:",MFPCompton
    MFPComptonPhot=hLStep_compt_phot[i].GetMean()
    CrossSectionComptonPhot = 1./MFPComptonPhot
    massicMFPComptonPhot = MFPComptonPhot*density
    massicCSComptonPhot  = 1./massicMFPComptonPhot
#    print " energy: ",hPrimaryEnergy[i].GetMean(), "MFP ComptonPhot:",MFPComptonPhot

    hSecEn[i].SetStats(0)
    hSecEn[i].Rebin(4)

    hSecCosTh[i].SetStats(0)
    hSecCosTh_compt_phot[i].Rebin(4)
    
    hSecEn_compt_phot[i].SetStats(0)
    hSecEn_compt_phot[i].Rebin(4)
    
    hLStep[i].SetStats(0)
    hLStep[i].Rebin(4) # make sure to rebin after taking the mean for the x-section calculation
    
    hLStep[i].GetXaxis().SetTitle("length (cm)")
    hLStep[i].GetXaxis().SetRangeUser(0,10)
    hLStep[i].SetTitle("step length of primary photon (only compton process)")
    
#    hLStep_compt_phot[i].SetLineColor(i)
    hLStep_compt_phot[i].SetStats(0)
    hLStep_compt_phot[i].Rebin(4)
    hLStep_compt_phot[i].GetXaxis().SetTitle("length (cm)")
    hLStep_compt_phot[i].GetXaxis().SetRangeUser(0,10)
    hLStep_compt_phot[i].SetTitle("step length of primary photon (only compton process)")
    
    gComptonMFP.SetPoint(i,hPrimaryEnergy[i].GetMean(),MFPCompton)
    gComptonMassicCS.SetPoint(i,hPrimaryEnergy[i].GetMean(),massicCSCompton)

    gComptonPhotMFP.SetPoint(i,hPrimaryEnergy[i].GetMean(),MFPComptonPhot)
    gComptonPhotMassicCS.SetPoint(i,hPrimaryEnergy[i].GetMean(),massicCSComptonPhot)


# plot histograms
idx_1=3
idx_2=10
idx_3=28

leg = TLegend(.63,.62,.97,.93)
leg.SetBorderSize(0)
leg.SetFillColor(0)
leg.SetFillStyle(0)
leg.SetTextFont(42)
leg.SetTextSize(0.035)
leg.SetHeader("prim. photon energy","C")
leg.AddEntry(hLStep[idx_1],"40 keV")
leg.AddEntry(hLStep[idx_2],"110 keV")
leg.AddEntry(hLStep[idx_3],"290 keV")


#step length histo
c1= TCanvas("c1","c1",200, 10, 1200, 500)
c1.Divide(2)
c1.cd(1)
c1.cd(1).SetLogy()
hLStep[idx_1].Draw("hist")
hLStep[idx_2].Draw("hist,same")
hLStep[idx_2].SetLineColor(kBlue)
hLStep[idx_3].Draw("hist,same")
hLStep[idx_3].SetLineColor(kRed)
leg.Draw("same")

c1.cd(2)
c1.cd(2).SetLogy()
hLStep_compt_phot[idx_1].Draw("hist")
hLStep_compt_phot[idx_2].Draw("hist,same")
hLStep_compt_phot[idx_2].SetLineColor(kBlue)
hLStep_compt_phot[idx_3].Draw("hist,same")
hLStep_compt_phot[idx_3].SetLineColor(kRed)
leg.Draw()
c1.Update()

#sec energy histo
cSec= TCanvas("cSec","cSec",200, 10, 1200, 500)
cSec.Divide(2,2)

cSec.cd(1)
cSec.cd(1).SetLogy()
hSecEn[idx_1].Draw("hist")
hSecEn[idx_2].Draw("hist,same")
hSecEn[idx_2].SetLineColor(kBlue)
hSecEn[idx_3].Draw("hist,same")
hSecEn[idx_3].SetLineColor(kRed)
#leg.DrawClone()

cSec.cd(2)
cSec.cd(2).SetLogy()
hSecEn_compt_phot[idx_1].Draw("hist")
hSecEn_compt_phot[idx_2].Draw("hist,same")
hSecEn_compt_phot[idx_2].SetLineColor(kBlue)
hSecEn_compt_phot[idx_3].Draw("hist,same")
hSecEn_compt_phot[idx_3].SetLineColor(kRed)
#leg.DrawClone()

cSec.cd(3)
cSec.cd(3).SetLogy()
hSecEn_phot[idx_1].Draw("hist")
hSecEn_phot[idx_2].Draw("hist,same")
hSecEn_phot[idx_2].SetLineColor(kBlue)
hSecEn_phot[idx_3].Draw("hist,same")
hSecEn_phot[idx_3].SetLineColor(kRed)
#leg.DrawClone()

cSec.cd(4)
cSec.cd(4).SetLogy()
hSecEn_neutral_phot[idx_1].Draw("hist")
hSecEn_neutral_phot[idx_2].Draw("hist,same")
hSecEn_neutral_phot[idx_2].SetLineColor(kBlue)
hSecEn_neutral_phot[idx_3].Draw("hist,same")
hSecEn_neutral_phot[idx_3].SetLineColor(kRed)
#leg.DrawClone()

cSec.Update()


#sec energy histo
cSecCosTh= TCanvas("cSecCosTh","cSecCosTh",200, 10, 1200, 500)
cSecCosTh.Divide(2,2)
cSecCosTh.cd(1)
cSecCosTh.cd(1).SetLogy()
hSecCosTh[5].Draw("hist")
hSecCosTh[10].Draw("hist,same")
hSecCosTh[10].SetLineColor(kBlue)
hSecCosTh[28].Draw("hist,same")
hSecCosTh[28].SetLineColor(kRed)
#leg.Draw()

cSecCosTh.cd(2)
cSecCosTh.cd(2).SetLogy()
hSecCosTh_compt_phot[5].Draw("hist")
hSecCosTh_compt_phot[10].Draw("hist,same")
hSecCosTh_compt_phot[10].SetLineColor(kBlue)
hSecCosTh_compt_phot[28].Draw("hist,same")
hSecCosTh_compt_phot[28].SetLineColor(kRed)
#leg.Draw()
cSecCosTh.Update()





InputIdx_TH2=9 # 100 keV

F_EGammaVsCosteta= TF1("F_EGammaVsCosteta",E_gamma_prime_cos_th,-1.,1.,1)
F_EElecVsCosteta= TF1("F_EElecVsCosteta",E_electron_cos_th,-1.,1.,1)
F_EGammaVsCosteta.SetParameter(0,100)# 100 keV primary gamma
F_EElecVsCosteta.SetParameter(0,100)# 100 keV primary gamma

F_EGammaVsCosteta.SetLineColor(kRed)
#F_EGammaVsCosteta.SetLineStyle(2)

F_EElecVsCosteta.SetLineColor(kBlack)
#F_EElecVsCosteta.SetLineStyle(2)
#F_EElecVsCosteta.SetLineWidth(1)


#scattered  cos th vs energy electron and photon
cCosThVsE= TCanvas("cCosThVsE","cCosThVsE",200, 10, 1200, 500)
cCosThVsE.Divide(2)
cCosThVsE.cd(1)
hCosThVsE_gamma_compt[InputIdx_TH2].Draw("colz")
hCosThVsE_gamma_compt[InputIdx_TH2].GetXaxis().SetTitle("cos #theta")
hCosThVsE_gamma_compt[InputIdx_TH2].GetYaxis().SetTitle("primary photon energy (keV)")
hCosThVsE_gamma_compt[InputIdx_TH2].GetYaxis().SetTitleOffset(1.2)
F_EGammaVsCosteta.Draw("same")
hCosThVsE_electron_compt[InputIdx_TH2].Draw("same,col")
F_EElecVsCosteta.Draw("same")

cCosThVsE.cd(2)
hCosThVsE_gamma_compt_phot[InputIdx_TH2].Draw("colz")
hCosThVsE_electron_compt_phot[InputIdx_TH2].Draw("same")
cCosThVsE.Update()





#compare attenation with NIST data

file = open("NIST-Ge.txt","r")

#read from NIST text file
i=0
for line in file:
    fields = line.split()
    energy=float(fields[0])*1e3
    if energy>500: continue # don't bother with points above 500 keV
    gComptonPhotMassicCS_NIST.SetPoint(i,energy, float(fields[7]))
    gComptonMassicCS_NIST.SetPoint(i,energy, float(fields[2]))
    print energy
    i+=1
#    print line
#    print fields[6] # total x-section

c6= TCanvas("c6","c6",200, 10, 700, 500)
c6.cd()
#gComptonPhotoMFP.SetPointColor(kRed)
c6.SetLogy()
gComptonPhotMassicCS_NIST.GetYaxis().SetRangeUser(1e-2,1e3)
gComptonPhotMassicCS_NIST.GetXaxis().SetRangeUser(0,300)

gComptonPhotMassicCS.GetYaxis().SetRangeUser(1e-2,1e3)
gComptonPhotMassicCS.GetXaxis().SetRangeUser(0,300)
gComptonPhotMassicCS.GetYaxis().SetTitle("Atteunation (cm^{2}/g)")
gComptonPhotMassicCS.GetXaxis().SetTitle("Energy (keV)")

gComptonPhotMassicCS_NIST.Draw("Al")
gComptonPhotMassicCS_NIST.GetYaxis().SetTitle("Atteunation (cm^{2}/g)")
gComptonPhotMassicCS_NIST.GetXaxis().SetTitle("Energy (keV)")
gComptonPhotMassicCS_NIST.SetLineColor(kMagenta)

gComptonMassicCS_NIST.SetLineColor(kBlue)
gComptonMassicCS_NIST.Draw("same,l")

gComptonPhotMassicCS.Draw("same,*")
gComptonPhotMassicCS.SetMarkerColor(kMagenta)
gComptonMassicCS.Draw("same,*")
gComptonMassicCS.SetMarkerColor(kBlue)

leg_xsec = TLegend(.73,.72,.97,.93)
leg_xsec.SetBorderSize(0)
leg_xsec.SetFillColor(0)
leg_xsec.SetFillStyle(0)
leg_xsec.SetTextFont(42)
leg_xsec.SetTextSize(0.035)
leg_xsec.AddEntry(gComptonMassicCS,"compton only from geant")
leg_xsec.AddEntry(gComptonPhotMassicCS,"compton+photo from geant")
#leg_xsec.AddEntry(gComptonMassicCS_NIST,"compton only from NIST")
#leg_xsec.AddEntry(gComptonPhotMassicCS_NIST,"compton+photo from NIST")
leg_xsec.Draw()
c6.Update()

ROOT.gApplication.Run()
#h.Draw()

