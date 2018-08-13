import ROOT
import matplotlib.pyplot as plt
from ROOT import gROOT, TCanvas, TF1, gApplication
from ROOT import TFile, TColor
from ROOT import TH1F,TH2F,TGraph
from ROOT import kBlack, kBlue, kRed, kCyan, kMagenta, kGreen, kGray
from ROOT import TLegend
from ROOT import gStyle
import os


filename="/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/output/latenium.root"
if (not os.path.isfile(filename)):
    print "WARNING", filename, " does not exist, continue.."
    exit(0)
file=TFile(filename)

file.ls()
DepCharge_tree=file.Get("DepositedCharge")
print "-----------------"
#DepCharge_tree.GetEntry(0)
DepCharge_tree.Print()
print "DepCharge_tree.GetEntries():",DepCharge_tree.GetEntries()
#DepCharge_tree.detector1
#for entry in DepCharge_tree:   
#    print DepCharge_tree.detector1.charge
    
#exit(0)

branches = DepCharge_tree.GetListOfBranches()
#
print "branches.GetEntries():",branches.GetEntries()
for i in range(0,branches.GetEntries() ) :
    branch = branches.At(i)
    name = branch.GetName()
    print "branch_name:",name
    
    leaves=branch.GetListOfLeaves()
    print "leaves.GetEntries():",leaves.GetEntries()
    for j in range(0,leaves.GetEntries() ) :
        leaf=leaves.At(j)
        leaf_name = leaf.GetName()
        print "leaf_name:",leaf_name
        leaf.ls()
