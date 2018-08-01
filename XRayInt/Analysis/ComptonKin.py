import ROOT
import matplotlib.pyplot as plt
from ROOT import gROOT, TCanvas, TF1, gApplication
from ROOT import TFile, TColor
from ROOT import TH1F,TH2F,TGraph
from ROOT import kBlack, kBlue, kRed, kCyan, kMagenta, kGreen
from ROOT import TLegend
import os

m_e=511 #keV

def E_gamma_prime_cos_th(x,p):
    E_gamma=p[0]
    E_gamma_prime=E_gamma/(1+(E_gamma/m_e)*(1-x[0]))
    return E_gamma_prime

def E_electron_cos_th(x,p):
    E_gamma=p[0]
    E_electron=E_gamma*((1-x[0])/(m_e/E_gamma+1-x[0]))
    return E_electron

#F_EGammaVsCosteta= TF1("F_EGammaVsCosteta",E_gamma_prime_cos_th,-1.,1.,1)
#F_EElecVsCosteta= TF1("F_EElecVsCosteta",E_electron_cos_th,-1.,1.,1)
#F_EGammaVsCosteta.SetParameter(0,100)# 100 keV primary gamma
#F_EElecVsCosteta.SetParameter(0,100)# 100 keV primary gamma
#F_EElecVsCosteta.SetLineColor(kBlue)
#c1= TCanvas("c1","canvas")
#F_EGammaVsCosteta.Draw()
#F_EGammaVsCosteta.GetYaxis().SetRangeUser(0,99)
#F_EElecVsCosteta.Draw("same")
#c1.Update()

#ROOT.gApplication.Run()
#fGeff.append(ROOT.TF1 (name, Geff, 0.1 , 4, 5 ) )
