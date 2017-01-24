{
//=========Macro generated from canvas: canvas1/
//=========  (Mon Jan 23 22:03:29 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,1600,900);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2179487,-3.809691,1.064103,8.001625);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLogy();
   canvas1->SetTickx(1);
   canvas1->SetTicky(1);
   canvas1->SetLeftMargin(0.17);
   canvas1->SetRightMargin(0.05);
   canvas1->SetTopMargin(0.08);
   canvas1->SetBottomMargin(0.18);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
   
   THStack *THStack = new THStack();
   THStack->SetName("THStack");
   THStack->SetTitle("");
   THStack->SetMinimum(0.1);
   
   TH1F *THStack_stack_1 = new TH1F("THStack_stack_1","",40,0,1);
   THStack_stack_1->SetMinimum(0.02071792);
   THStack_stack_1->SetMaximum(1.139513e+07);
   THStack_stack_1->SetDirectory(0);
   THStack_stack_1->SetStats(0);
   THStack_stack_1->SetLineWidth(2);
   THStack_stack_1->SetMarkerSize(1.2);
   THStack_stack_1->GetXaxis()->SetTitle("2^{nd} highest b-tag");
   THStack_stack_1->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetXaxis()->SetLabelColor(ci);
   THStack_stack_1->GetXaxis()->SetLabelFont(42);
   THStack_stack_1->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_1->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_1->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_1->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_1->GetXaxis()->SetTitleColor(ci);
   THStack_stack_1->GetXaxis()->SetTitleFont(42);
   THStack_stack_1->GetYaxis()->SetTitle("Number of events");
   THStack_stack_1->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetYaxis()->SetLabelColor(ci);
   THStack_stack_1->GetYaxis()->SetLabelFont(42);
   THStack_stack_1->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_1->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_1->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_1->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_1->GetYaxis()->SetTitleColor(ci);
   THStack_stack_1->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetZaxis()->SetLabelColor(ci);
   THStack_stack_1->GetZaxis()->SetLabelFont(42);
   THStack_stack_1->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_1->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_1->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_1->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_1->GetZaxis()->SetTitleColor(ci);
   THStack_stack_1->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_1);
   
   
   TH1F *0 = new TH1F("0","HH#nu#nu#rightarrowbbWW*#nu#nu,hadronic",40,0,1);
   0->SetBinContent(3,0.178182);
   0->SetBinContent(4,1.583842);
   0->SetBinContent(5,4.414943);
   0->SetBinContent(6,6.681846);
   0->SetBinContent(7,8.236011);
   0->SetBinContent(8,9.087337);
   0->SetBinContent(9,9.433806);
   0->SetBinContent(10,10.6118);
   0->SetBinContent(11,8.899253);
   0->SetBinContent(12,12.60153);
   0->SetBinContent(13,8.780463);
   0->SetBinContent(14,6.008704);
   0->SetBinContent(15,5.771125);
   0->SetBinContent(16,5.028689);
   0->SetBinContent(17,5.177176);
   0->SetBinContent(18,4.236758);
   0->SetBinContent(19,4.286254);
   0->SetBinContent(20,3.979381);
   0->SetBinContent(21,3.63292);
   0->SetBinContent(22,3.692313);
   0->SetBinContent(23,3.44484);
   0->SetBinContent(24,2.841007);
   0->SetBinContent(25,3.167671);
   0->SetBinContent(26,3.048884);
   0->SetBinContent(27,3.296357);
   0->SetBinContent(28,2.672726);
   0->SetBinContent(29,2.751917);
   0->SetBinContent(30,2.742018);
   0->SetBinContent(31,2.672726);
   0->SetBinContent(32,2.643029);
   0->SetBinContent(33,3.118177);
   0->SetBinContent(34,3.494335);
   0->SetBinContent(35,3.98928);
   0->SetBinContent(36,4.830707);
   0->SetBinContent(37,6.17699);
   0->SetBinContent(38,8.92895);
   0->SetBinContent(39,15.2446);
   0->SetBinContent(40,35.8843);
   0->SetEntries(23565);
   0->SetStats(0);

   ci = TColor::GetColor("#63c1e5");
   0->SetFillColor(ci);

   ci = TColor::GetColor("#63c1e5");
   0->SetLineColor(ci);
   0->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   0->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   0->GetXaxis()->SetLabelColor(ci);
   0->GetXaxis()->SetLabelFont(42);
   0->GetXaxis()->SetLabelOffset(0.0015);
   0->GetXaxis()->SetLabelSize(0.06);
   0->GetXaxis()->SetTitleSize(0.07);
   0->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   0->GetXaxis()->SetTitleColor(ci);
   0->GetXaxis()->SetTitleFont(42);
   0->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   0->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   0->GetYaxis()->SetLabelColor(ci);
   0->GetYaxis()->SetLabelFont(42);
   0->GetYaxis()->SetLabelOffset(0.02);
   0->GetYaxis()->SetLabelSize(0.06);
   0->GetYaxis()->SetTitleSize(0.07);
   0->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   0->GetYaxis()->SetTitleColor(ci);
   0->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   0->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   0->GetZaxis()->SetLabelColor(ci);
   0->GetZaxis()->SetLabelFont(42);
   0->GetZaxis()->SetLabelOffset(0.02);
   0->GetZaxis()->SetLabelSize(0.06);
   0->GetZaxis()->SetTitleSize(0.07);
   0->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   0->GetZaxis()->SetTitleColor(ci);
   0->GetZaxis()->SetTitleFont(42);
   THStack->Add(0,"");
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",40,0,1);
   1->SetBinContent(1,0.009899);
   1->SetBinContent(3,0.009899);
   1->SetBinContent(4,0.019798);
   1->SetBinContent(5,0.217778);
   1->SetBinContent(6,0.7226273);
   1->SetBinContent(7,0.9997998);
   1->SetBinContent(8,1.465054);
   1->SetBinContent(9,2.118388);
   1->SetBinContent(10,3.147873);
   1->SetBinContent(11,2.870704);
   1->SetBinContent(12,4.741614);
   1->SetBinContent(13,4.315951);
   1->SetBinContent(14,3.781403);
   1->SetBinContent(15,3.910089);
   1->SetBinContent(16,4.177363);
   1->SetBinContent(17,4.286254);
   1->SetBinContent(18,4.296153);
   1->SetBinContent(19,4.365447);
   1->SetBinContent(20,4.543632);
   1->SetBinContent(21,5.088084);
   1->SetBinContent(22,4.711917);
   1->SetBinContent(23,5.315764);
   1->SetBinContent(24,5.36526);
   1->SetBinContent(25,5.36526);
   1->SetBinContent(26,5.662234);
   1->SetBinContent(27,5.226672);
   1->SetBinContent(28,6.018603);
   1->SetBinContent(29,5.919612);
   1->SetBinContent(30,6.434367);
   1->SetBinContent(31,6.533359);
   1->SetBinContent(32,7.265895);
   1->SetBinContent(33,7.998431);
   1->SetBinContent(34,9.562495);
   1->SetBinContent(35,11.54232);
   1->SetBinContent(36,14.39328);
   1->SetBinContent(37,21.72854);
   1->SetBinContent(38,35.52794);
   1->SetBinContent(39,71.68653);
   1->SetBinContent(40,297.2381);
   1->SetEntries(59461);
   1->SetStats(0);

   ci = TColor::GetColor("#f0916e");
   1->SetFillColor(ci);

   ci = TColor::GetColor("#f0916e");
   1->SetLineColor(ci);
   1->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   1->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   1->GetXaxis()->SetLabelColor(ci);
   1->GetXaxis()->SetLabelFont(42);
   1->GetXaxis()->SetLabelOffset(0.0015);
   1->GetXaxis()->SetLabelSize(0.06);
   1->GetXaxis()->SetTitleSize(0.07);
   1->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   1->GetXaxis()->SetTitleColor(ci);
   1->GetXaxis()->SetTitleFont(42);
   1->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   1->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   1->GetYaxis()->SetLabelColor(ci);
   1->GetYaxis()->SetLabelFont(42);
   1->GetYaxis()->SetLabelOffset(0.02);
   1->GetYaxis()->SetLabelSize(0.06);
   1->GetYaxis()->SetTitleSize(0.07);
   1->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   1->GetYaxis()->SetTitleColor(ci);
   1->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   1->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   1->GetZaxis()->SetLabelColor(ci);
   1->GetZaxis()->SetLabelFont(42);
   1->GetZaxis()->SetLabelOffset(0.02);
   1->GetZaxis()->SetLabelSize(0.06);
   1->GetZaxis()->SetTitleSize(0.07);
   1->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   1->GetZaxis()->SetTitleColor(ci);
   1->GetZaxis()->SetTitleFont(42);
   THStack->Add(1,"");
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",40,0,1);
   2->SetBinContent(1,0.019798);
   2->SetBinContent(2,0.049495);
   2->SetBinContent(3,0.6929302);
   2->SetBinContent(4,5.642436);
   2->SetBinContent(5,14.95753);
   2->SetBinContent(6,21.89682);
   2->SetBinContent(7,25.51001);
   2->SetBinContent(8,25.609);
   2->SetBinContent(9,24.95566);
   2->SetBinContent(10,27.33145);
   2->SetBinContent(11,19.78831);
   2->SetBinContent(12,31.04363);
   2->SetBinContent(13,17.04624);
   2->SetBinContent(14,11.31464);
   2->SetBinContent(15,10.73059);
   2->SetBinContent(16,10.05745);
   2->SetBinContent(17,8.938849);
   2->SetBinContent(18,8.117221);
   2->SetBinContent(19,7.345088);
   2->SetBinContent(20,6.899627);
   2->SetBinContent(21,6.523459);
   2->SetBinContent(22,6.582854);
   2->SetBinContent(23,5.949309);
   2->SetBinContent(24,5.513747);
   2->SetBinContent(25,5.533545);
   2->SetBinContent(26,4.900001);
   2->SetBinContent(27,5.088084);
   2->SetBinContent(28,4.801009);
   2->SetBinContent(29,4.731715);
   2->SetBinContent(30,4.702018);
   2->SetBinContent(31,4.929698);
   2->SetBinContent(32,5.127681);
   2->SetBinContent(33,5.25637);
   2->SetBinContent(34,5.444453);
   2->SetBinContent(35,6.256183);
   2->SetBinContent(36,7.750953);
   2->SetBinContent(37,10.76029);
   2->SetBinContent(38,15.35349);
   2->SetBinContent(39,25.28233);
   2->SetBinContent(40,64.84886);
   2->SetEntries(48821);
   2->SetStats(0);

   ci = TColor::GetColor("#62eee3");
   2->SetFillColor(ci);

   ci = TColor::GetColor("#62eee3");
   2->SetLineColor(ci);
   2->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   2->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   2->GetXaxis()->SetLabelColor(ci);
   2->GetXaxis()->SetLabelFont(42);
   2->GetXaxis()->SetLabelOffset(0.0015);
   2->GetXaxis()->SetLabelSize(0.06);
   2->GetXaxis()->SetTitleSize(0.07);
   2->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   2->GetXaxis()->SetTitleColor(ci);
   2->GetXaxis()->SetTitleFont(42);
   2->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   2->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   2->GetYaxis()->SetLabelColor(ci);
   2->GetYaxis()->SetLabelFont(42);
   2->GetYaxis()->SetLabelOffset(0.02);
   2->GetYaxis()->SetLabelSize(0.06);
   2->GetYaxis()->SetTitleSize(0.07);
   2->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   2->GetYaxis()->SetTitleColor(ci);
   2->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   2->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   2->GetZaxis()->SetLabelColor(ci);
   2->GetZaxis()->SetLabelFont(42);
   2->GetZaxis()->SetLabelOffset(0.02);
   2->GetZaxis()->SetLabelSize(0.06);
   2->GetZaxis()->SetTitleSize(0.07);
   2->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   2->GetZaxis()->SetTitleColor(ci);
   2->GetZaxis()->SetTitleFont(42);
   THStack->Add(2,"");
   
   TH1F *3 = new TH1F("3","Hbb#nu",40,0,1);
   3->SetBinContent(1,0.236355);
   3->SetBinContent(2,0.033765);
   3->SetBinContent(3,1.14801);
   3->SetBinContent(4,8.069819);
   3->SetBinContent(5,20.25905);
   3->SetBinContent(6,29.8823);
   3->SetBinContent(7,38.15457);
   3->SetBinContent(8,43.0841);
   3->SetBinContent(9,45.58262);
   3->SetBinContent(10,55.5092);
   3->SetBinContent(11,49.66805);
   3->SetBinContent(12,76.34292);
   3->SetBinContent(13,53.1795);
   3->SetBinContent(14,40.14664);
   3->SetBinContent(15,34.98076);
   3->SetBinContent(16,36.23003);
   3->SetBinContent(17,35.89239);
   3->SetBinContent(18,34.74442);
   3->SetBinContent(19,35.28464);
   3->SetBinContent(20,34.91323);
   3->SetBinContent(21,33.02246);
   3->SetBinContent(22,33.02246);
   3->SetBinContent(23,30.99657);
   3->SetBinContent(24,30.89527);
   3->SetBinContent(25,31.94201);
   3->SetBinContent(26,30.42255);
   3->SetBinContent(27,31.09787);
   3->SetBinContent(28,33.59644);
   3->SetBinContent(29,32.27965);
   3->SetBinContent(30,35.75733);
   3->SetBinContent(31,34.17043);
   3->SetBinContent(32,39.13372);
   3->SetBinContent(33,41.0245);
   3->SetBinContent(34,47.102);
   3->SetBinContent(35,56.62341);
   3->SetBinContent(36,71.17646);
   3->SetBinContent(37,103.1545);
   3->SetBinContent(38,161.0323);
   3->SetBinContent(39,302.0592);
   3->SetBinContent(40,1153.327);
   3->SetEntries(89005);
   3->SetStats(0);

   ci = TColor::GetColor("#f67ea6");
   3->SetFillColor(ci);

   ci = TColor::GetColor("#f67ea6");
   3->SetLineColor(ci);
   3->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   3->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   3->GetXaxis()->SetLabelColor(ci);
   3->GetXaxis()->SetLabelFont(42);
   3->GetXaxis()->SetLabelOffset(0.0015);
   3->GetXaxis()->SetLabelSize(0.06);
   3->GetXaxis()->SetTitleSize(0.07);
   3->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   3->GetXaxis()->SetTitleColor(ci);
   3->GetXaxis()->SetTitleFont(42);
   3->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   3->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   3->GetYaxis()->SetLabelColor(ci);
   3->GetYaxis()->SetLabelFont(42);
   3->GetYaxis()->SetLabelOffset(0.02);
   3->GetYaxis()->SetLabelSize(0.06);
   3->GetYaxis()->SetTitleSize(0.07);
   3->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   3->GetYaxis()->SetTitleColor(ci);
   3->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   3->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   3->GetZaxis()->SetLabelColor(ci);
   3->GetZaxis()->SetLabelFont(42);
   3->GetZaxis()->SetLabelOffset(0.02);
   3->GetZaxis()->SetLabelSize(0.06);
   3->GetZaxis()->SetTitleSize(0.07);
   3->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   3->GetZaxis()->SetTitleColor(ci);
   3->GetZaxis()->SetTitleFont(42);
   THStack->Add(3,"");
   
   TH1F *4 = new TH1F("4","Hcc#nu",40,0,1);
   4->SetBinContent(1,0.262392);
   4->SetBinContent(2,0.131196);
   4->SetBinContent(3,3.126841);
   4->SetBinContent(4,21.60349);
   4->SetBinContent(5,55.9766);
   4->SetBinContent(6,93.06107);
   4->SetBinContent(7,120.1966);
   4->SetBinContent(8,131.2388);
   4->SetBinContent(9,137.6893);
   4->SetBinContent(10,154.1543);
   4->SetBinContent(11,116.5231);
   4->SetBinContent(12,177.3102);
   4->SetBinContent(13,104.4094);
   4->SetBinContent(14,69.94888);
   4->SetBinContent(15,63.52032);
   4->SetBinContent(16,58.05386);
   4->SetBinContent(17,55.25503);
   4->SetBinContent(18,49.52618);
   4->SetBinContent(19,47.33959);
   4->SetBinContent(20,40.62678);
   4->SetBinContent(21,38.98684);
   4->SetBinContent(22,37.2813);
   4->SetBinContent(23,34.87606);
   4->SetBinContent(24,34.5918);
   4->SetBinContent(25,32.1647);
   4->SetBinContent(26,31.18073);
   4->SetBinContent(27,29.67199);
   4->SetBinContent(28,27.31048);
   4->SetBinContent(29,27.50727);
   4->SetBinContent(30,27.87899);
   4->SetBinContent(31,27.66033);
   4->SetBinContent(32,28.95041);
   4->SetBinContent(33,29.10348);
   4->SetBinContent(34,31.29006);
   4->SetBinContent(35,35.77256);
   4->SetBinContent(36,43.688);
   4->SetBinContent(37,55.911);
   4->SetBinContent(38,83.39637);
   4->SetBinContent(39,133.6004);
   4->SetBinContent(40,336.1559);
   4->SetEntries(120136);
   4->SetStats(0);

   ci = TColor::GetColor("#48c9a8");
   4->SetFillColor(ci);

   ci = TColor::GetColor("#48c9a8");
   4->SetLineColor(ci);
   4->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   4->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   4->GetXaxis()->SetLabelColor(ci);
   4->GetXaxis()->SetLabelFont(42);
   4->GetXaxis()->SetLabelOffset(0.0015);
   4->GetXaxis()->SetLabelSize(0.06);
   4->GetXaxis()->SetTitleSize(0.07);
   4->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   4->GetXaxis()->SetTitleColor(ci);
   4->GetXaxis()->SetTitleFont(42);
   4->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   4->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   4->GetYaxis()->SetLabelColor(ci);
   4->GetYaxis()->SetLabelFont(42);
   4->GetYaxis()->SetLabelOffset(0.02);
   4->GetYaxis()->SetLabelSize(0.06);
   4->GetYaxis()->SetTitleSize(0.07);
   4->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   4->GetYaxis()->SetTitleColor(ci);
   4->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   4->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   4->GetZaxis()->SetLabelColor(ci);
   4->GetZaxis()->SetLabelFont(42);
   4->GetZaxis()->SetLabelOffset(0.02);
   4->GetZaxis()->SetLabelSize(0.06);
   4->GetZaxis()->SetTitleSize(0.07);
   4->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   4->GetZaxis()->SetTitleColor(ci);
   4->GetZaxis()->SetTitleFont(42);
   THStack->Add(4,"");
   
   TH1F *5 = new TH1F("5","Hqq#nu",40,0,1);
   5->SetBinContent(1,0.232616);
   5->SetBinContent(2,0.5815399);
   5->SetBinContent(3,17.73697);
   5->SetBinContent(4,119.2716);
   5->SetBinContent(5,278.6701);
   5->SetBinContent(6,387.965);
   5->SetBinContent(7,419.8984);
   5->SetBinContent(8,411.3479);
   5->SetBinContent(9,386.1618);
   5->SetBinContent(10,408.9049);
   5->SetBinContent(11,294.8986);
   5->SetBinContent(12,476.0872);
   5->SetBinContent(13,235.923);
   5->SetBinContent(14,146.6027);
   5->SetBinContent(15,130.5529);
   5->SetBinContent(16,121.9466);
   5->SetBinContent(17,109.444);
   5->SetBinContent(18,94.67363);
   5->SetBinContent(19,100.0817);
   5->SetBinContent(20,88.91666);
   5->SetBinContent(21,81.8222);
   5->SetBinContent(22,77.34456);
   5->SetBinContent(23,77.46086);
   5->SetBinContent(24,72.69246);
   5->SetBinContent(25,73.39027);
   5->SetBinContent(26,71.58759);
   5->SetBinContent(27,68.73817);
   5->SetBinContent(28,66.87733);
   5->SetBinContent(29,64.49313);
   5->SetBinContent(30,68.85448);
   5->SetBinContent(31,68.15666);
   5->SetBinContent(32,71.99464);
   5->SetBinContent(33,77.28641);
   5->SetBinContent(34,84.0901);
   5->SetBinContent(35,92.28943);
   5->SetBinContent(36,119.5624);
   5->SetBinContent(37,158.64);
   5->SetBinContent(38,227.7237);
   5->SetBinContent(39,364.233);
   5->SetBinContent(40,933.4504);
   5->SetEntries(122955);
   5->SetStats(0);

   ci = TColor::GetColor("#e2a0e3");
   5->SetFillColor(ci);

   ci = TColor::GetColor("#e2a0e3");
   5->SetLineColor(ci);
   5->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   5->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   5->GetXaxis()->SetLabelColor(ci);
   5->GetXaxis()->SetLabelFont(42);
   5->GetXaxis()->SetLabelOffset(0.0015);
   5->GetXaxis()->SetLabelSize(0.06);
   5->GetXaxis()->SetTitleSize(0.07);
   5->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   5->GetXaxis()->SetTitleColor(ci);
   5->GetXaxis()->SetTitleFont(42);
   5->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   5->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   5->GetYaxis()->SetLabelColor(ci);
   5->GetYaxis()->SetLabelFont(42);
   5->GetYaxis()->SetLabelOffset(0.02);
   5->GetYaxis()->SetLabelSize(0.06);
   5->GetYaxis()->SetTitleSize(0.07);
   5->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   5->GetYaxis()->SetTitleColor(ci);
   5->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   5->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   5->GetZaxis()->SetLabelColor(ci);
   5->GetZaxis()->SetLabelFont(42);
   5->GetZaxis()->SetLabelOffset(0.02);
   5->GetZaxis()->SetLabelSize(0.06);
   5->GetZaxis()->SetTitleSize(0.07);
   5->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   5->GetZaxis()->SetTitleColor(ci);
   5->GetZaxis()->SetTitleFont(42);
   THStack->Add(5,"");
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",40,0,1);
   6->SetBinContent(1,12.27579);
   6->SetBinContent(2,8.76842);
   6->SetBinContent(3,271.8212);
   6->SetBinContent(4,2173.685);
   6->SetBinContent(5,6636.5);
   6->SetBinContent(6,11116.85);
   6->SetBinContent(7,13436.39);
   6->SetBinContent(8,14020.44);
   6->SetBinContent(9,13697.73);
   6->SetBinContent(10,15397.26);
   6->SetBinContent(11,10832.72);
   6->SetBinContent(12,17917.62);
   6->SetBinContent(13,8967.44);
   6->SetBinContent(14,5515.753);
   6->SetBinContent(15,4836.992);
   6->SetBinContent(16,4352.914);
   6->SetBinContent(17,4095.09);
   6->SetBinContent(18,3648.72);
   6->SetBinContent(19,3404.051);
   6->SetBinContent(20,3160.258);
   6->SetBinContent(21,2977.851);
   6->SetBinContent(22,2791.937);
   6->SetBinContent(23,2675.302);
   6->SetBinContent(24,2597.254);
   6->SetBinContent(25,2526.22);
   6->SetBinContent(26,2427.125);
   6->SetBinContent(27,2321.013);
   6->SetBinContent(28,2176.316);
   6->SetBinContent(29,2110.545);
   6->SetBinContent(30,2192.101);
   6->SetBinContent(31,2209.64);
   6->SetBinContent(32,2213.148);
   6->SetBinContent(33,2306.105);
   6->SetBinContent(34,2574.453);
   6->SetBinContent(35,2869.986);
   6->SetBinContent(36,3478.592);
   6->SetBinContent(37,4680.017);
   6->SetBinContent(38,6889.062);
   6->SetBinContent(39,11226.47);
   6->SetBinContent(40,27852.62);
   6->SetEntries(267528);
   6->SetStats(0);

   ci = TColor::GetColor("#a6c973");
   6->SetFillColor(ci);

   ci = TColor::GetColor("#a6c973");
   6->SetLineColor(ci);
   6->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   6->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   6->GetXaxis()->SetLabelColor(ci);
   6->GetXaxis()->SetLabelFont(42);
   6->GetXaxis()->SetLabelOffset(0.0015);
   6->GetXaxis()->SetLabelSize(0.06);
   6->GetXaxis()->SetTitleSize(0.07);
   6->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   6->GetXaxis()->SetTitleColor(ci);
   6->GetXaxis()->SetTitleFont(42);
   6->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   6->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   6->GetYaxis()->SetLabelColor(ci);
   6->GetYaxis()->SetLabelFont(42);
   6->GetYaxis()->SetLabelOffset(0.02);
   6->GetYaxis()->SetLabelSize(0.06);
   6->GetYaxis()->SetTitleSize(0.07);
   6->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   6->GetYaxis()->SetTitleColor(ci);
   6->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   6->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   6->GetZaxis()->SetLabelColor(ci);
   6->GetZaxis()->SetLabelFont(42);
   6->GetZaxis()->SetLabelOffset(0.02);
   6->GetZaxis()->SetLabelSize(0.06);
   6->GetZaxis()->SetTitleSize(0.07);
   6->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   6->GetZaxis()->SetTitleColor(ci);
   6->GetZaxis()->SetTitleFont(42);
   THStack->Add(6,"");
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",40,0,1);
   7->SetBinContent(1,3.03853);
   7->SetBinContent(2,43.36809);
   7->SetBinContent(3,1370.844);
   7->SetBinContent(4,7253.273);
   7->SetBinContent(5,14225.08);
   7->SetBinContent(6,18391.97);
   7->SetBinContent(7,19475.97);
   7->SetBinContent(8,18319.72);
   7->SetBinContent(9,16351.78);
   7->SetBinContent(10,15375.11);
   7->SetBinContent(11,9205.393);
   7->SetBinContent(12,13010.74);
   7->SetBinContent(13,4347.411);
   7->SetBinContent(14,1978.453);
   7->SetBinContent(15,1485.711);
   7->SetBinContent(16,1248.384);
   7->SetBinContent(17,1049.989);
   7->SetBinContent(18,904.9719);
   7->SetBinContent(19,775.8273);
   7->SetBinContent(20,684.5283);
   7->SetBinContent(21,600.4117);
   7->SetBinContent(22,556.2125);
   7->SetBinContent(23,517.8144);
   7->SetBinContent(24,464.6372);
   7->SetBinContent(25,463.6703);
   7->SetBinContent(26,443.3663);
   7->SetBinContent(27,425.6866);
   7->SetBinContent(28,414.9131);
   7->SetBinContent(29,400.5483);
   7->SetBinContent(30,391.8466);
   7->SetBinContent(31,394.8853);
   7->SetBinContent(32,405.5208);
   7->SetBinContent(33,424.1673);
   7->SetBinContent(34,483.4219);
   7->SetBinContent(35,548.7538);
   7->SetBinContent(36,671.2686);
   7->SetBinContent(37,891.0215);
   7->SetBinContent(38,1263.432);
   7->SetBinContent(39,2183.041);
   7->SetBinContent(40,6337.393);
   7->SetEntries(1186599);
   7->SetStats(0);

   ci = TColor::GetColor("#b196e4");
   7->SetFillColor(ci);

   ci = TColor::GetColor("#b196e4");
   7->SetLineColor(ci);
   7->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   7->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   7->GetXaxis()->SetLabelColor(ci);
   7->GetXaxis()->SetLabelFont(42);
   7->GetXaxis()->SetLabelOffset(0.0015);
   7->GetXaxis()->SetLabelSize(0.06);
   7->GetXaxis()->SetTitleSize(0.07);
   7->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   7->GetXaxis()->SetTitleColor(ci);
   7->GetXaxis()->SetTitleFont(42);
   7->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   7->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   7->GetYaxis()->SetLabelColor(ci);
   7->GetYaxis()->SetLabelFont(42);
   7->GetYaxis()->SetLabelOffset(0.02);
   7->GetYaxis()->SetLabelSize(0.06);
   7->GetYaxis()->SetTitleSize(0.07);
   7->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   7->GetYaxis()->SetTitleColor(ci);
   7->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   7->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   7->GetZaxis()->SetLabelColor(ci);
   7->GetZaxis()->SetLabelFont(42);
   7->GetZaxis()->SetLabelOffset(0.02);
   7->GetZaxis()->SetLabelSize(0.06);
   7->GetZaxis()->SetTitleSize(0.07);
   7->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   7->GetZaxis()->SetTitleColor(ci);
   7->GetZaxis()->SetTitleFont(42);
   THStack->Add(7,"");
   
   TH1F *8 = new TH1F("8","qqqqll",40,0,1);
   8->SetBinContent(1,0.92388);
   8->SetBinContent(2,51.7373);
   8->SetBinContent(3,1550.248);
   8->SetBinContent(4,5951.365);
   8->SetBinContent(5,10091.96);
   8->SetBinContent(6,12412.62);
   8->SetBinContent(7,12893.01);
   8->SetBinContent(8,11749.31);
   8->SetBinContent(9,11198.71);
   8->SetBinContent(10,11050.9);
   8->SetBinContent(11,5387.83);
   8->SetBinContent(12,7771.307);
   8->SetBinContent(13,2373.379);
   8->SetBinContent(14,867.5287);
   8->SetBinContent(15,620.8503);
   8->SetBinContent(16,409.2797);
   8->SetBinContent(17,338.1402);
   8->SetBinContent(18,242.9798);
   8->SetBinContent(19,178.3087);
   8->SetBinContent(20,153.3641);
   8->SetBinContent(21,103.4747);
   8->SetBinContent(22,91.46421);
   8->SetBinContent(23,69.29105);
   8->SetBinContent(24,61.9);
   8->SetBinContent(25,43.42237);
   8->SetBinContent(26,38.80296);
   8->SetBinContent(27,25.86863);
   8->SetBinContent(28,29.56415);
   8->SetBinContent(29,18.4776);
   8->SetBinContent(30,18.4776);
   8->SetBinContent(31,12.01044);
   8->SetBinContent(32,11.08656);
   8->SetBinContent(33,12.93432);
   8->SetBinContent(34,10.16268);
   8->SetBinContent(35,9.2388);
   8->SetBinContent(36,8.31492);
   8->SetBinContent(37,3.69552);
   8->SetBinContent(38,9.2388);
   8->SetBinContent(39,9.2388);
   8->SetBinContent(40,8.31492);
   8->SetEntries(103794);
   8->SetStats(0);

   ci = TColor::GetColor("#77bd7d");
   8->SetFillColor(ci);

   ci = TColor::GetColor("#77bd7d");
   8->SetLineColor(ci);
   8->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   8->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   8->GetXaxis()->SetLabelColor(ci);
   8->GetXaxis()->SetLabelFont(42);
   8->GetXaxis()->SetLabelOffset(0.0015);
   8->GetXaxis()->SetLabelSize(0.06);
   8->GetXaxis()->SetTitleSize(0.07);
   8->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   8->GetXaxis()->SetTitleColor(ci);
   8->GetXaxis()->SetTitleFont(42);
   8->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   8->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   8->GetYaxis()->SetLabelColor(ci);
   8->GetYaxis()->SetLabelFont(42);
   8->GetYaxis()->SetLabelOffset(0.02);
   8->GetYaxis()->SetLabelSize(0.06);
   8->GetYaxis()->SetTitleSize(0.07);
   8->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   8->GetYaxis()->SetTitleColor(ci);
   8->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   8->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   8->GetZaxis()->SetLabelColor(ci);
   8->GetZaxis()->SetLabelFont(42);
   8->GetZaxis()->SetLabelOffset(0.02);
   8->GetZaxis()->SetLabelSize(0.06);
   8->GetZaxis()->SetTitleSize(0.07);
   8->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   8->GetZaxis()->SetTitleColor(ci);
   8->GetZaxis()->SetTitleFont(42);
   THStack->Add(8,"");
   
   TH1F *9 = new TH1F("9","qqqql#nu",40,0,1);
   9->SetBinContent(1,3.076948);
   9->SetBinContent(2,15.8243);
   9->SetBinContent(3,424.6224);
   9->SetBinContent(4,2063.354);
   9->SetBinContent(5,4167.017);
   9->SetBinContent(6,5620.728);
   9->SetBinContent(7,6108.96);
   9->SetBinContent(8,6007.446);
   9->SetBinContent(9,5843.53);
   9->SetBinContent(10,6558.96);
   9->SetBinContent(11,3642.31);
   9->SetBinContent(12,5328.491);
   9->SetBinContent(13,2505.005);
   9->SetBinContent(14,1562.243);
   9->SetBinContent(15,1382.896);
   9->SetBinContent(16,1293.663);
   9->SetBinContent(17,1123.107);
   9->SetBinContent(18,1034.313);
   9->SetBinContent(19,985.96);
   9->SetBinContent(20,898.9241);
   9->SetBinContent(21,880.4619);
   9->SetBinContent(22,834.3065);
   9->SetBinContent(23,767.0515);
   9->SetBinContent(24,755.6226);
   9->SetBinContent(25,753.8643);
   9->SetBinContent(26,712.5442);
   9->SetBinContent(27,694.082);
   9->SetBinContent(28,700.2361);
   9->SetBinContent(29,705.511);
   9->SetBinContent(30,671.6637);
   9->SetBinContent(31,692.3237);
   9->SetBinContent(32,689.2467);
   9->SetBinContent(33,759.1392);
   9->SetBinContent(34,827.2733);
   9->SetBinContent(35,976.7289);
   9->SetBinContent(36,1135.416);
   9->SetBinContent(37,1436.964);
   9->SetBinContent(38,1955.663);
   9->SetBinContent(39,3148.364);
   9->SetBinContent(40,6936.89);
   9->SetEntries(187939);
   9->SetStats(0);

   ci = TColor::GetColor("#e798b9");
   9->SetFillColor(ci);

   ci = TColor::GetColor("#e798b9");
   9->SetLineColor(ci);
   9->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   9->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   9->GetXaxis()->SetLabelColor(ci);
   9->GetXaxis()->SetLabelFont(42);
   9->GetXaxis()->SetLabelOffset(0.0015);
   9->GetXaxis()->SetLabelSize(0.06);
   9->GetXaxis()->SetTitleSize(0.07);
   9->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   9->GetXaxis()->SetTitleColor(ci);
   9->GetXaxis()->SetTitleFont(42);
   9->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   9->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   9->GetYaxis()->SetLabelColor(ci);
   9->GetYaxis()->SetLabelFont(42);
   9->GetYaxis()->SetLabelOffset(0.02);
   9->GetYaxis()->SetLabelSize(0.06);
   9->GetYaxis()->SetTitleSize(0.07);
   9->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   9->GetYaxis()->SetTitleColor(ci);
   9->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   9->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   9->GetZaxis()->SetLabelColor(ci);
   9->GetZaxis()->SetLabelFont(42);
   9->GetZaxis()->SetLabelOffset(0.02);
   9->GetZaxis()->SetLabelSize(0.06);
   9->GetZaxis()->SetTitleSize(0.07);
   9->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   9->GetZaxis()->SetTitleColor(ci);
   9->GetZaxis()->SetTitleFont(42);
   THStack->Add(9,"");
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",40,0,1);
   10->SetBinContent(1,21.00728);
   10->SetBinContent(2,163.39);
   10->SetBinContent(3,4879.601);
   10->SetBinContent(4,31350.15);
   10->SetBinContent(5,71923.66);
   10->SetBinContent(6,102755.9);
   10->SetBinContent(7,115536);
   10->SetBinContent(8,112912.4);
   10->SetBinContent(9,104048.3);
   10->SetBinContent(10,102289.4);
   10->SetBinContent(11,63288);
   10->SetBinContent(12,96030.89);
   10->SetBinContent(13,36617.59);
   10->SetBinContent(14,18410.14);
   10->SetBinContent(15,14825.44);
   10->SetBinContent(16,13074.95);
   10->SetBinContent(17,11369.42);
   10->SetBinContent(18,9915.882);
   10->SetBinContent(19,8784.412);
   10->SetBinContent(20,7995.741);
   10->SetBinContent(21,7307.224);
   10->SetBinContent(22,6791.273);
   10->SetBinContent(23,6286.711);
   10->SetBinContent(24,5835.291);
   10->SetBinContent(25,5614.545);
   10->SetBinContent(26,5291.894);
   10->SetBinContent(27,5094.799);
   10->SetBinContent(28,4848.357);
   10->SetBinContent(29,4694.77);
   10->SetBinContent(30,4540.89);
   10->SetBinContent(31,4552.277);
   10->SetBinContent(32,4591.404);
   10->SetBinContent(33,4775.943);
   10->SetBinContent(34,5228.823);
   10->SetBinContent(35,5994.719);
   10->SetBinContent(36,7101.077);
   10->SetBinContent(37,9188.237);
   10->SetBinContent(38,13317.01);
   10->SetBinContent(39,21519.35);
   10->SetBinContent(40,51912.32);
   10->SetEntries(3811711);
   10->SetStats(0);

   ci = TColor::GetColor("#9aebb2");
   10->SetFillColor(ci);

   ci = TColor::GetColor("#9aebb2");
   10->SetLineColor(ci);
   10->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   10->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   10->GetXaxis()->SetLabelColor(ci);
   10->GetXaxis()->SetLabelFont(42);
   10->GetXaxis()->SetLabelOffset(0.0015);
   10->GetXaxis()->SetLabelSize(0.06);
   10->GetXaxis()->SetTitleSize(0.07);
   10->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   10->GetXaxis()->SetTitleColor(ci);
   10->GetXaxis()->SetTitleFont(42);
   10->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   10->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   10->GetYaxis()->SetLabelColor(ci);
   10->GetYaxis()->SetLabelFont(42);
   10->GetYaxis()->SetLabelOffset(0.02);
   10->GetYaxis()->SetLabelSize(0.06);
   10->GetYaxis()->SetTitleSize(0.07);
   10->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   10->GetYaxis()->SetTitleColor(ci);
   10->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   10->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   10->GetZaxis()->SetLabelColor(ci);
   10->GetZaxis()->SetLabelFont(42);
   10->GetZaxis()->SetLabelOffset(0.02);
   10->GetZaxis()->SetLabelSize(0.06);
   10->GetZaxis()->SetTitleSize(0.07);
   10->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   10->GetZaxis()->SetTitleColor(ci);
   10->GetZaxis()->SetTitleFont(42);
   THStack->Add(10,"");
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",40,0,1);
   11->SetBinContent(1,91.76746);
   11->SetBinContent(2,275.3024);
   11->SetBinContent(3,8381.449);
   11->SetBinContent(4,60751);
   11->SetBinContent(5,155727.2);
   11->SetBinContent(6,238269.2);
   11->SetBinContent(7,279968.5);
   11->SetBinContent(8,274798.1);
   11->SetBinContent(9,260480.2);
   11->SetBinContent(10,259746);
   11->SetBinContent(11,129080.6);
   11->SetBinContent(12,189625.1);
   11->SetBinContent(13,55336.6);
   11->SetBinContent(14,18384.07);
   11->SetBinContent(15,12725.07);
   11->SetBinContent(16,10033.25);
   11->SetBinContent(17,6821.396);
   11->SetBinContent(18,4251.89);
   11->SetBinContent(19,3058.913);
   11->SetBinContent(20,2324.774);
   11->SetBinContent(21,2355.363);
   11->SetBinContent(22,1223.566);
   11->SetBinContent(23,795.3181);
   11->SetBinContent(24,795.3181);
   11->SetBinContent(25,703.5505);
   11->SetBinContent(26,611.783);
   11->SetBinContent(27,581.1938);
   11->SetBinContent(28,183.5349);
   11->SetBinContent(29,91.76746);
   11->SetBinContent(30,152.9458);
   11->SetBinContent(31,122.3566);
   11->SetBinContent(32,305.8915);
   11->SetBinContent(33,122.3566);
   11->SetBinContent(34,30.58915);
   11->SetBinContent(35,122.3566);
   11->SetBinContent(36,61.1783);
   11->SetBinContent(37,61.1783);
   11->SetBinContent(38,152.9458);
   11->SetBinContent(39,61.1783);
   11->SetBinContent(40,183.5349);
   11->SetEntries(64689);
   11->SetStats(0);

   ci = TColor::GetColor("#ea908f");
   11->SetFillColor(ci);

   ci = TColor::GetColor("#ea908f");
   11->SetLineColor(ci);
   11->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   11->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   11->GetXaxis()->SetLabelColor(ci);
   11->GetXaxis()->SetLabelFont(42);
   11->GetXaxis()->SetLabelOffset(0.0015);
   11->GetXaxis()->SetLabelSize(0.06);
   11->GetXaxis()->SetTitleSize(0.07);
   11->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   11->GetXaxis()->SetTitleColor(ci);
   11->GetXaxis()->SetTitleFont(42);
   11->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   11->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   11->GetYaxis()->SetLabelColor(ci);
   11->GetYaxis()->SetLabelFont(42);
   11->GetYaxis()->SetLabelOffset(0.02);
   11->GetYaxis()->SetLabelSize(0.06);
   11->GetYaxis()->SetTitleSize(0.07);
   11->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   11->GetYaxis()->SetTitleColor(ci);
   11->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   11->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   11->GetZaxis()->SetLabelColor(ci);
   11->GetZaxis()->SetLabelFont(42);
   11->GetZaxis()->SetLabelOffset(0.02);
   11->GetZaxis()->SetLabelSize(0.06);
   11->GetZaxis()->SetTitleSize(0.07);
   11->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   11->GetZaxis()->SetTitleColor(ci);
   11->GetZaxis()->SetTitleFont(42);
   THStack->Add(11,"");
   
   TH1F *12 = new TH1F("12","qqqq",40,0,1);
   12->SetBinContent(1,607.1245);
   12->SetBinContent(2,347.2374);
   12->SetBinContent(3,5946.656);
   12->SetBinContent(4,26235.69);
   12->SetBinContent(5,57768.8);
   12->SetBinContent(6,92565.61);
   12->SetBinContent(7,111455.1);
   12->SetBinContent(8,115354.3);
   12->SetBinContent(9,109811.3);
   12->SetBinContent(10,121712.4);
   12->SetBinContent(11,59562.35);
   12->SetBinContent(12,92788.42);
   12->SetBinContent(13,25642.18);
   12->SetBinContent(14,9323.896);
   12->SetBinContent(15,6374.717);
   12->SetBinContent(16,4992.468);
   12->SetBinContent(17,3668.054);
   12->SetBinContent(18,2748.628);
   12->SetBinContent(19,2132.096);
   12->SetBinContent(20,1726.858);
   12->SetBinContent(21,1396.093);
   12->SetBinContent(22,1136.206);
   12->SetBinContent(23,980.8464);
   12->SetBinContent(24,841.2377);
   12->SetBinContent(25,729.5507);
   12->SetBinContent(26,676.5709);
   12->SetBinContent(27,604.2607);
   12->SetBinContent(28,525.5071);
   12->SetBinContent(29,498.3013);
   12->SetBinContent(30,467.5157);
   12->SetBinContent(31,466.7998);
   12->SetBinContent(32,450.3331);
   12->SetBinContent(33,461.0723);
   12->SetBinContent(34,511.1882);
   12->SetBinContent(35,525.5071);
   12->SetBinContent(36,610.7042);
   12->SetBinContent(37,767.4956);
   12->SetBinContent(38,1049.577);
   12->SetBinContent(39,1628.774);
   12->SetBinContent(40,3817.712);
   12->SetEntries(1212598);
   12->SetStats(0);

   ci = TColor::GetColor("#4ac7d0");
   12->SetFillColor(ci);

   ci = TColor::GetColor("#4ac7d0");
   12->SetLineColor(ci);
   12->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   12->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   12->GetXaxis()->SetLabelColor(ci);
   12->GetXaxis()->SetLabelFont(42);
   12->GetXaxis()->SetLabelOffset(0.0015);
   12->GetXaxis()->SetLabelSize(0.06);
   12->GetXaxis()->SetTitleSize(0.07);
   12->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   12->GetXaxis()->SetTitleColor(ci);
   12->GetXaxis()->SetTitleFont(42);
   12->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   12->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   12->GetYaxis()->SetLabelColor(ci);
   12->GetYaxis()->SetLabelFont(42);
   12->GetYaxis()->SetLabelOffset(0.02);
   12->GetYaxis()->SetLabelSize(0.06);
   12->GetYaxis()->SetTitleSize(0.07);
   12->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   12->GetYaxis()->SetTitleColor(ci);
   12->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   12->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   12->GetZaxis()->SetLabelColor(ci);
   12->GetZaxis()->SetLabelFont(42);
   12->GetZaxis()->SetLabelOffset(0.02);
   12->GetZaxis()->SetLabelSize(0.06);
   12->GetZaxis()->SetTitleSize(0.07);
   12->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   12->GetZaxis()->SetTitleColor(ci);
   12->GetZaxis()->SetTitleFont(42);
   THStack->Add(12,"");
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",40,0,1);
   13->SetBinContent(1,934.2884);
   13->SetBinContent(2,3685.252);
   13->SetBinContent(3,79104.13);
   13->SetBinContent(4,618924);
   13->SetBinContent(5,1659692);
   13->SetBinContent(6,2687458);
   13->SetBinContent(7,3230078);
   13->SetBinContent(8,3262682);
   13->SetBinContent(9,2985782);
   13->SetBinContent(10,2870030);
   13->SetBinContent(11,1568496);
   13->SetBinContent(12,2288670);
   13->SetBinContent(13,636250.2);
   13->SetBinContent(14,220496.8);
   13->SetBinContent(15,144609.8);
   13->SetBinContent(16,101268.1);
   13->SetBinContent(17,77183.6);
   13->SetBinContent(18,52112.89);
   13->SetBinContent(19,40122.54);
   13->SetBinContent(20,29481.89);
   13->SetBinContent(21,22630.52);
   13->SetBinContent(22,13962.46);
   13->SetBinContent(23,11938.15);
   13->SetBinContent(24,9706.224);
   13->SetBinContent(25,7733.828);
   13->SetBinContent(26,6280.494);
   13->SetBinContent(27,5138.588);
   13->SetBinContent(28,3166.202);
   13->SetBinContent(29,3010.487);
   13->SetBinContent(30,1816.672);
   13->SetBinContent(31,2076.197);
   13->SetBinContent(32,1557.147);
   13->SetBinContent(33,1349.528);
   13->SetBinContent(34,1038.098);
   13->SetBinContent(35,1245.718);
   13->SetBinContent(36,830.4786);
   13->SetBinContent(37,1193.813);
   13->SetBinContent(38,1193.813);
   13->SetBinContent(39,1764.767);
   13->SetBinContent(40,3114.297);
   13->SetEntries(436487);
   13->SetStats(0);

   ci = TColor::GetColor("#ccac60");
   13->SetFillColor(ci);

   ci = TColor::GetColor("#ccac60");
   13->SetLineColor(ci);
   13->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   13->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   13->GetXaxis()->SetLabelColor(ci);
   13->GetXaxis()->SetLabelFont(42);
   13->GetXaxis()->SetLabelOffset(0.0015);
   13->GetXaxis()->SetLabelSize(0.06);
   13->GetXaxis()->SetTitleSize(0.07);
   13->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   13->GetXaxis()->SetTitleColor(ci);
   13->GetXaxis()->SetTitleFont(42);
   13->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   13->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   13->GetYaxis()->SetLabelColor(ci);
   13->GetYaxis()->SetLabelFont(42);
   13->GetYaxis()->SetLabelOffset(0.02);
   13->GetYaxis()->SetLabelSize(0.06);
   13->GetYaxis()->SetTitleSize(0.07);
   13->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   13->GetYaxis()->SetTitleColor(ci);
   13->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   13->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   13->GetZaxis()->SetLabelColor(ci);
   13->GetZaxis()->SetLabelFont(42);
   13->GetZaxis()->SetLabelOffset(0.02);
   13->GetZaxis()->SetLabelSize(0.06);
   13->GetZaxis()->SetTitleSize(0.07);
   13->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   13->GetZaxis()->SetTitleColor(ci);
   13->GetZaxis()->SetTitleFont(42);
   THStack->Add(13,"");
   
   TH1F *14 = new TH1F("14","qq#nu#nu",40,0,1);
   14->SetBinContent(1,2267.366);
   14->SetBinContent(2,1443.711);
   14->SetBinContent(3,10392.89);
   14->SetBinContent(4,32945.29);
   14->SetBinContent(5,63686.77);
   14->SetBinContent(6,95523.61);
   14->SetBinContent(7,124398.7);
   14->SetBinContent(8,138843.6);
   14->SetBinContent(9,143403.9);
   14->SetBinContent(10,144412.1);
   14->SetBinContent(11,90728.06);
   14->SetBinContent(12,158102.1);
   14->SetBinContent(13,42152.93);
   14->SetBinContent(14,14511.31);
   14->SetBinContent(15,11151.79);
   14->SetBinContent(16,9893.125);
   14->SetBinContent(17,8819.559);
   14->SetBinContent(18,7246.279);
   14->SetBinContent(19,6987.156);
   14->SetBinContent(20,6487.418);
   14->SetBinContent(21,5895.137);
   14->SetBinContent(22,5376.891);
   14->SetBinContent(23,5284.347);
   14->SetBinContent(24,4618.031);
   14->SetBinContent(25,4766.101);
   14->SetBinContent(26,4590.268);
   14->SetBinContent(27,4608.776);
   14->SetBinContent(28,4035.002);
   14->SetBinContent(29,4146.057);
   14->SetBinContent(30,4599.522);
   14->SetBinContent(31,4044.257);
   14->SetBinContent(32,4025.748);
   14->SetBinContent(33,4294.127);
   14->SetBinContent(34,4886.408);
   14->SetBinContent(35,5524.961);
   14->SetBinContent(36,5904.392);
   14->SetBinContent(37,7977.376);
   14->SetBinContent(38,11355.4);
   14->SetBinContent(39,17990.98);
   14->SetBinContent(40,42041.88);
   14->SetEntries(137153);
   14->SetStats(0);

   ci = TColor::GetColor("#79a9eb");
   14->SetFillColor(ci);

   ci = TColor::GetColor("#79a9eb");
   14->SetLineColor(ci);
   14->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   14->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   14->GetXaxis()->SetLabelColor(ci);
   14->GetXaxis()->SetLabelFont(42);
   14->GetXaxis()->SetLabelOffset(0.0015);
   14->GetXaxis()->SetLabelSize(0.06);
   14->GetXaxis()->SetTitleSize(0.07);
   14->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   14->GetXaxis()->SetTitleColor(ci);
   14->GetXaxis()->SetTitleFont(42);
   14->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   14->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   14->GetYaxis()->SetLabelColor(ci);
   14->GetYaxis()->SetLabelFont(42);
   14->GetYaxis()->SetLabelOffset(0.02);
   14->GetYaxis()->SetLabelSize(0.06);
   14->GetYaxis()->SetTitleSize(0.07);
   14->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   14->GetYaxis()->SetTitleColor(ci);
   14->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   14->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   14->GetZaxis()->SetLabelColor(ci);
   14->GetZaxis()->SetLabelFont(42);
   14->GetZaxis()->SetLabelOffset(0.02);
   14->GetZaxis()->SetLabelSize(0.06);
   14->GetZaxis()->SetTitleSize(0.07);
   14->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   14->GetZaxis()->SetTitleColor(ci);
   14->GetZaxis()->SetTitleFont(42);
   THStack->Add(14,"");
   
   TH1F *15 = new TH1F("15","qqll",40,0,1);
   15->SetBinContent(1,3758.272);
   15->SetBinContent(2,308.5143);
   15->SetBinContent(3,1570.618);
   15->SetBinContent(4,5581.319);
   15->SetBinContent(5,13266.16);
   15->SetBinContent(6,23727.65);
   15->SetBinContent(7,31664.91);
   15->SetBinContent(8,38087.64);
   15->SetBinContent(9,43388.5);
   15->SetBinContent(10,54186.55);
   15->SetBinContent(11,28776.08);
   15->SetBinContent(12,52223.27);
   15->SetBinContent(13,13883.19);
   15->SetBinContent(14,4431.397);
   15->SetBinContent(15,4543.585);
   15->SetBinContent(16,3561.944);
   15->SetBinContent(17,3085.147);
   15->SetBinContent(18,2608.351);
   15->SetBinContent(19,2440.069);
   15->SetBinContent(20,2019.366);
   15->SetBinContent(21,1682.805);
   15->SetBinContent(22,1682.805);
   15->SetBinContent(23,1514.525);
   15->SetBinContent(24,1262.104);
   15->SetBinContent(25,1374.291);
   15->SetBinContent(26,1093.823);
   15->SetBinContent(27,1486.478);
   15->SetBinContent(28,1290.151);
   15->SetBinContent(29,1402.338);
   15->SetBinContent(30,1290.151);
   15->SetBinContent(31,1486.478);
   15->SetBinContent(32,1206.01);
   15->SetBinContent(33,1234.057);
   15->SetBinContent(34,1851.086);
   15->SetBinContent(35,2299.835);
   15->SetBinContent(36,1879.133);
   15->SetBinContent(37,2636.397);
   15->SetBinContent(38,3982.647);
   15->SetBinContent(39,6562.96);
   15->SetBinContent(40,17136.63);
   15->SetEntries(13815);
   15->SetStats(0);

   ci = TColor::GetColor("#e2d689");
   15->SetFillColor(ci);

   ci = TColor::GetColor("#e2d689");
   15->SetLineColor(ci);
   15->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   15->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   15->GetXaxis()->SetLabelColor(ci);
   15->GetXaxis()->SetLabelFont(42);
   15->GetXaxis()->SetLabelOffset(0.0015);
   15->GetXaxis()->SetLabelSize(0.06);
   15->GetXaxis()->SetTitleSize(0.07);
   15->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   15->GetXaxis()->SetTitleColor(ci);
   15->GetXaxis()->SetTitleFont(42);
   15->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   15->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   15->GetYaxis()->SetLabelColor(ci);
   15->GetYaxis()->SetLabelFont(42);
   15->GetYaxis()->SetLabelOffset(0.02);
   15->GetYaxis()->SetLabelSize(0.06);
   15->GetYaxis()->SetTitleSize(0.07);
   15->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   15->GetYaxis()->SetTitleColor(ci);
   15->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   15->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   15->GetZaxis()->SetLabelColor(ci);
   15->GetZaxis()->SetLabelFont(42);
   15->GetZaxis()->SetLabelOffset(0.02);
   15->GetZaxis()->SetLabelSize(0.06);
   15->GetZaxis()->SetTitleSize(0.07);
   15->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   15->GetZaxis()->SetTitleColor(ci);
   15->GetZaxis()->SetTitleFont(42);
   THStack->Add(15,"");
   
   TH1F *16 = new TH1F("16","qql#nu",40,0,1);
   16->SetBinContent(1,3493.919);
   16->SetBinContent(2,4035.533);
   16->SetBinContent(3,25529.62);
   16->SetBinContent(4,83289.88);
   16->SetBinContent(5,157130.3);
   16->SetBinContent(6,238188.5);
   16->SetBinContent(7,306815.3);
   16->SetBinContent(8,334992.8);
   16->SetBinContent(9,386513.5);
   16->SetBinContent(10,442326.6);
   16->SetBinContent(11,199152.2);
   16->SetBinContent(12,335672.8);
   16->SetBinContent(13,77131.91);
   16->SetBinContent(14,19423.61);
   16->SetBinContent(15,11076.48);
   16->SetBinContent(16,7741.785);
   16->SetBinContent(17,5872.73);
   16->SetBinContent(18,3345.241);
   16->SetBinContent(19,2750.528);
   16->SetBinContent(20,1922.179);
   16->SetBinContent(21,1295.614);
   16->SetBinContent(22,1104.459);
   16->SetBinContent(23,764.6251);
   16->SetBinContent(24,679.6666);
   16->SetBinContent(25,562.8486);
   16->SetBinContent(26,318.5935);
   16->SetBinContent(27,286.7342);
   16->SetBinContent(28,254.8748);
   16->SetBinContent(29,116.8177);
   16->SetBinContent(30,95.57809);
   16->SetBinContent(31,106.1979);
   16->SetBinContent(32,106.1979);
   16->SetBinContent(33,84.95831);
   16->SetBinContent(34,84.95831);
   16->SetBinContent(35,53.09894);
   16->SetBinContent(36,95.57809);
   16->SetBinContent(37,42.47915);
   16->SetBinContent(38,74.33852);
   16->SetBinContent(39,74.33852);
   16->SetBinContent(40,53.09894);
   16->SetEntries(249732);
   16->SetStats(0);

   ci = TColor::GetColor("#c2b0e8");
   16->SetFillColor(ci);

   ci = TColor::GetColor("#c2b0e8");
   16->SetLineColor(ci);
   16->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   16->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   16->GetXaxis()->SetLabelColor(ci);
   16->GetXaxis()->SetLabelFont(42);
   16->GetXaxis()->SetLabelOffset(0.0015);
   16->GetXaxis()->SetLabelSize(0.06);
   16->GetXaxis()->SetTitleSize(0.07);
   16->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   16->GetXaxis()->SetTitleColor(ci);
   16->GetXaxis()->SetTitleFont(42);
   16->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   16->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   16->GetYaxis()->SetLabelColor(ci);
   16->GetYaxis()->SetLabelFont(42);
   16->GetYaxis()->SetLabelOffset(0.02);
   16->GetYaxis()->SetLabelSize(0.06);
   16->GetYaxis()->SetTitleSize(0.07);
   16->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   16->GetYaxis()->SetTitleColor(ci);
   16->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   16->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   16->GetZaxis()->SetLabelColor(ci);
   16->GetZaxis()->SetLabelFont(42);
   16->GetZaxis()->SetLabelOffset(0.02);
   16->GetZaxis()->SetLabelSize(0.06);
   16->GetZaxis()->SetTitleSize(0.07);
   16->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   16->GetZaxis()->SetTitleColor(ci);
   16->GetZaxis()->SetTitleFont(42);
   THStack->Add(16,"");
   
   TH1F *17 = new TH1F("17","qq",40,0,1);
   17->SetBinContent(1,5960.422);
   17->SetBinContent(2,1702.976);
   17->SetBinContent(3,15083.49);
   17->SetBinContent(4,45128.72);
   17->SetBinContent(5,88371.97);
   17->SetBinContent(6,126567.1);
   17->SetBinContent(7,156189.8);
   17->SetBinContent(8,174377.5);
   17->SetBinContent(9,181129.4);
   17->SetBinContent(10,198830.4);
   17->SetBinContent(11,106678.9);
   17->SetBinContent(12,185144);
   17->SetBinContent(13,46223.49);
   17->SetBinContent(14,18002.86);
   17->SetBinContent(15,13441.34);
   17->SetBinContent(16,13137.24);
   17->SetBinContent(17,10765.25);
   17->SetBinContent(18,9731.3);
   17->SetBinContent(19,8879.815);
   17->SetBinContent(20,6872.734);
   17->SetBinContent(21,5352.214);
   17->SetBinContent(22,6264.526);
   17->SetBinContent(23,4683.186);
   17->SetBinContent(24,4987.29);
   17->SetBinContent(25,4379.082);
   17->SetBinContent(26,4318.261);
   17->SetBinContent(27,4135.798);
   17->SetBinContent(28,4804.827);
   17->SetBinContent(29,3466.772);
   17->SetBinContent(30,4379.082);
   17->SetBinContent(31,4014.157);
   17->SetBinContent(32,4318.261);
   17->SetBinContent(33,4257.44);
   17->SetBinContent(34,5291.394);
   17->SetBinContent(35,6325.347);
   17->SetBinContent(36,7176.838);
   17->SetBinContent(37,8697.354);
   17->SetBinContent(38,11373.45);
   17->SetBinContent(39,15205.13);
   17->SetBinContent(40,34789.27);
   17->SetEntries(25656);
   17->SetStats(0);

   ci = TColor::GetColor("#aec48b");
   17->SetFillColor(ci);

   ci = TColor::GetColor("#aec48b");
   17->SetLineColor(ci);
   17->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   17->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   17->GetXaxis()->SetLabelColor(ci);
   17->GetXaxis()->SetLabelFont(42);
   17->GetXaxis()->SetLabelOffset(0.0015);
   17->GetXaxis()->SetLabelSize(0.06);
   17->GetXaxis()->SetTitleSize(0.07);
   17->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   17->GetXaxis()->SetTitleColor(ci);
   17->GetXaxis()->SetTitleFont(42);
   17->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   17->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   17->GetYaxis()->SetLabelColor(ci);
   17->GetYaxis()->SetLabelFont(42);
   17->GetYaxis()->SetLabelOffset(0.02);
   17->GetYaxis()->SetLabelSize(0.06);
   17->GetYaxis()->SetTitleSize(0.07);
   17->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   17->GetYaxis()->SetTitleColor(ci);
   17->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   17->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   17->GetZaxis()->SetLabelColor(ci);
   17->GetZaxis()->SetLabelFont(42);
   17->GetZaxis()->SetLabelOffset(0.02);
   17->GetZaxis()->SetLabelSize(0.06);
   17->GetZaxis()->SetTitleSize(0.07);
   17->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   17->GetZaxis()->SetTitleColor(ci);
   17->GetZaxis()->SetTitleFont(42);
   THStack->Add(17,"");
   THStack->Draw("");
   
   TLegend *leg = new TLegend(0.65,0.35,0.98,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);

   ci = TColor::GetColor("#616161");
   leg->SetTextColor(ci);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(10);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("17","qq","f");

   ci = TColor::GetColor("#aec48b");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#aec48b");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("16","qql#nu","f");

   ci = TColor::GetColor("#c2b0e8");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#c2b0e8");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("15","qqll","f");

   ci = TColor::GetColor("#e2d689");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#e2d689");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("14","qq#nu#nu","f");

   ci = TColor::GetColor("#79a9eb");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#79a9eb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("13","#gamma#gamma#rightarrowqqqq","f");

   ci = TColor::GetColor("#ccac60");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ccac60");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("12","qqqq","f");

   ci = TColor::GetColor("#4ac7d0");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#4ac7d0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("11","e^{#pm}#gamma#rightarrowqqqqe","f");

   ci = TColor::GetColor("#ea908f");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ea908f");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("10","e^{#pm}#gamma#rightarrowqqqq#nu","f");

   ci = TColor::GetColor("#9aebb2");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#9aebb2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("9","qqqql#nu","f");

   ci = TColor::GetColor("#e798b9");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#e798b9");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("8","qqqqll","f");

   ci = TColor::GetColor("#77bd7d");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#77bd7d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("7","qqqq#nu#nu","f");

   ci = TColor::GetColor("#b196e4");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#b196e4");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("6","e^{#pm}#gamma#rightarrowqqH#nu","f");

   ci = TColor::GetColor("#a6c973");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#a6c973");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("5","Hqq#nu","f");

   ci = TColor::GetColor("#e2a0e3");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#e2a0e3");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("4","Hcc#nu","f");

   ci = TColor::GetColor("#48c9a8");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#48c9a8");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("3","Hbb#nu","f");

   ci = TColor::GetColor("#f67ea6");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#f67ea6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("2","HH#nu#nu#rightarrowother","f");

   ci = TColor::GetColor("#62eee3");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#62eee3");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("1","HH#nu#nu#rightarrowbbbb#nu#nu","f");

   ci = TColor::GetColor("#f0916e");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#f0916e");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("0","HH#nu#nu#rightarrowbbWW*#nu#nu,hadronic","f");

   ci = TColor::GetColor("#63c1e5");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#63c1e5");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
