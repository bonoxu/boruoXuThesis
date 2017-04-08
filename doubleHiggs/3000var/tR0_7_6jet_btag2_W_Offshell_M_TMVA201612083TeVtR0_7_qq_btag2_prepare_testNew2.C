{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:41:24 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-134.9206,-3.420219,658.7302,6.561545);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLogy();
   canvas1->SetTickx(1);
   canvas1->SetTicky(1);
   canvas1->SetLeftMargin(0.17);
   canvas1->SetRightMargin(0.2);
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
   
   TH1F *THStack_stack_6 = new TH1F("THStack_stack_6","",50,0,500);
   THStack_stack_6->SetMinimum(0.02379569);
   THStack_stack_6->SetMaximum(579433.8);
   THStack_stack_6->SetDirectory(0);
   THStack_stack_6->SetStats(0);
   THStack_stack_6->SetLineWidth(2);
   THStack_stack_6->SetMarkerSize(1.2);
   THStack_stack_6->GetXaxis()->SetTitle("M_{W*} / GeV");
   THStack_stack_6->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_6->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_6->GetXaxis()->SetLabelColor(ci);
   THStack_stack_6->GetXaxis()->SetLabelFont(42);
   THStack_stack_6->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_6->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_6->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_6->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_6->GetXaxis()->SetTitleColor(ci);
   THStack_stack_6->GetXaxis()->SetTitleFont(42);
   THStack_stack_6->GetYaxis()->SetTitle("Number of events");
   THStack_stack_6->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_6->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_6->GetYaxis()->SetLabelColor(ci);
   THStack_stack_6->GetYaxis()->SetLabelFont(42);
   THStack_stack_6->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_6->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_6->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_6->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_6->GetYaxis()->SetTitleColor(ci);
   THStack_stack_6->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_6->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_6->GetZaxis()->SetLabelColor(ci);
   THStack_stack_6->GetZaxis()->SetLabelFont(42);
   THStack_stack_6->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_6->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_6->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_6->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_6->GetZaxis()->SetTitleColor(ci);
   THStack_stack_6->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_6);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,500);
   0->SetBinContent(1,3.90019);
   0->SetBinContent(2,14.38338);
   0->SetBinContent(3,20.83761);
   0->SetBinContent(4,18.30343);
   0->SetBinContent(5,11.94819);
   0->SetBinContent(6,6.157191);
   0->SetBinContent(7,3.137975);
   0->SetBinContent(8,1.366064);
   0->SetBinContent(9,0.7523243);
   0->SetBinContent(10,1.544246);
   0->SetBinContent(11,1.207679);
   0->SetBinContent(12,0.9899008);
   0->SetBinContent(13,0.7721224);
   0->SetBinContent(14,0.6533341);
   0->SetBinContent(15,0.6533341);
   0->SetBinContent(16,0.5048488);
   0->SetBinContent(17,0.5147479);
   0->SetBinContent(18,0.4454549);
   0->SetBinContent(19,0.306869);
   0->SetBinContent(20,0.356364);
   0->SetBinContent(21,0.178182);
   0->SetBinContent(22,0.207879);
   0->SetBinContent(23,0.168283);
   0->SetBinContent(24,0.108889);
   0->SetBinContent(25,0.05939399);
   0->SetBinContent(26,0.07919199);
   0->SetBinContent(27,0.049495);
   0->SetBinContent(28,0.07919199);
   0->SetBinContent(29,0.029697);
   0->SetBinContent(30,0.029697);
   0->SetBinContent(31,0.039596);
   0->SetBinContent(32,0.049495);
   0->SetBinContent(34,0.019798);
   0->SetBinContent(35,0.009899);
   0->SetBinContent(36,0.039596);
   0->SetBinContent(37,0.019798);
   0->SetBinContent(38,0.049495);
   0->SetBinContent(39,0.019798);
   0->SetBinContent(40,0.019798);
   0->SetBinContent(41,0.009899);
   0->SetBinContent(42,0.029697);
   0->SetBinContent(43,0.019798);
   0->SetBinContent(46,0.009899);
   0->SetBinContent(49,0.009899);
   0->SetEntries(9099);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,500);
   1->SetBinContent(1,7.903656);
   1->SetBinContent(2,16.13324);
   1->SetBinContent(3,12.55042);
   1->SetBinContent(4,9.239792);
   1->SetBinContent(5,6.285303);
   1->SetBinContent(6,4.22648);
   1->SetBinContent(7,2.311181);
   1->SetBinContent(8,0.8809203);
   1->SetBinContent(9,0.6186247);
   1->SetBinContent(10,1.286736);
   1->SetBinContent(11,1.103624);
   1->SetBinContent(12,0.8264816);
   1->SetBinContent(13,0.4701553);
   1->SetBinContent(14,0.4800533);
   1->SetBinContent(15,0.2919911);
   1->SetBinContent(16,0.2870421);
   1->SetBinContent(17,0.2870421);
   1->SetBinContent(18,0.1930111);
   1->SetBinContent(19,0.2227051);
   1->SetBinContent(20,0.1633171);
   1->SetBinContent(21,0.1880621);
   1->SetBinContent(22,0.113827);
   1->SetBinContent(23,0.07918401);
   1->SetBinContent(24,0.123725);
   1->SetBinContent(25,0.039592);
   1->SetBinContent(26,0.029694);
   1->SetBinContent(27,0.044541);
   1->SetBinContent(28,0.034643);
   1->SetBinContent(29,0.009898);
   1->SetBinContent(30,0.039592);
   1->SetBinContent(31,0.014847);
   1->SetBinContent(32,0.029694);
   1->SetBinContent(33,0.014847);
   1->SetBinContent(34,0.014847);
   1->SetBinContent(35,0.004949);
   1->SetBinContent(36,0.004949);
   1->SetBinContent(37,0.009898);
   1->SetBinContent(38,0.004949);
   1->SetBinContent(39,0.019796);
   1->SetBinContent(40,0.009898);
   1->SetBinContent(43,0.009898);
   1->SetBinContent(45,0.004949);
   1->SetBinContent(47,0.004949);
   1->SetBinContent(48,0.004949);
   1->SetBinContent(50,0.004949);
   1->SetBinContent(51,0.009898);
   1->SetEntries(13464);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,500);
   2->SetBinContent(1,12.82754);
   2->SetBinContent(2,28.94273);
   2->SetBinContent(3,26.77481);
   2->SetBinContent(4,19.59794);
   2->SetBinContent(5,13.59952);
   2->SetBinContent(6,8.512345);
   2->SetBinContent(7,4.864913);
   2->SetBinContent(8,1.791531);
   2->SetBinContent(9,1.583675);
   2->SetBinContent(10,2.593279);
   2->SetBinContent(11,2.137963);
   2->SetBinContent(12,2.063726);
   2->SetBinContent(13,1.771736);
   2->SetBinContent(14,1.207553);
   2->SetBinContent(15,0.9254611);
   2->SetBinContent(16,0.742349);
   2->SetBinContent(17,0.6829613);
   2->SetBinContent(18,0.6037778);
   2->SetBinContent(19,0.4553083);
   2->SetBinContent(20,0.3513792);
   2->SetBinContent(21,0.3810732);
   2->SetBinContent(22,0.3315832);
   2->SetBinContent(23,0.2870421);
   2->SetBinContent(24,0.2177561);
   2->SetBinContent(25,0.1682661);
   2->SetBinContent(26,0.1979601);
   2->SetBinContent(27,0.1435211);
   2->SetBinContent(28,0.1435211);
   2->SetBinContent(29,0.09403102);
   2->SetBinContent(30,0.09403102);
   2->SetBinContent(31,0.07918401);
   2->SetBinContent(32,0.07918401);
   2->SetBinContent(33,0.059388);
   2->SetBinContent(34,0.039592);
   2->SetBinContent(35,0.04949);
   2->SetBinContent(36,0.044541);
   2->SetBinContent(37,0.054439);
   2->SetBinContent(38,0.024745);
   2->SetBinContent(39,0.019796);
   2->SetBinContent(40,0.04949);
   2->SetBinContent(41,0.009898);
   2->SetBinContent(42,0.034643);
   2->SetBinContent(43,0.004949);
   2->SetBinContent(44,0.024745);
   2->SetBinContent(46,0.014847);
   2->SetBinContent(47,0.004949);
   2->SetBinContent(49,0.004949);
   2->SetBinContent(50,0.009898);
   2->SetBinContent(51,0.029694);
   2->SetEntries(27223);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,500);
   3->SetBinContent(1,58.14279);
   3->SetBinContent(2,130.7089);
   3->SetBinContent(3,122.0644);
   3->SetBinContent(4,94.07096);
   3->SetBinContent(5,59.45958);
   3->SetBinContent(6,34.44054);
   3->SetBinContent(7,16.27468);
   3->SetBinContent(8,5.301102);
   3->SetBinContent(9,4.051803);
   3->SetBinContent(10,7.158168);
   3->SetBinContent(11,6.178988);
   3->SetBinContent(12,5.166043);
   3->SetBinContent(13,4.119333);
   3->SetBinContent(14,3.173912);
   3->SetBinContent(15,3.308972);
   3->SetBinContent(16,2.397315);
   3->SetBinContent(17,1.451895);
   3->SetBinContent(18,1.14801);
   3->SetBinContent(19,1.41813);
   3->SetBinContent(20,1.046715);
   3->SetBinContent(21,0.74283);
   3->SetBinContent(22,1.08048);
   3->SetBinContent(23,0.641535);
   3->SetBinContent(24,0.6753);
   3->SetBinContent(25,0.33765);
   3->SetBinContent(26,0.4051799);
   3->SetBinContent(27,0.27012);
   3->SetBinContent(28,0.236355);
   3->SetBinContent(29,0.303885);
   3->SetBinContent(30,0.13506);
   3->SetBinContent(31,0.4389449);
   3->SetBinContent(32,0.27012);
   3->SetBinContent(33,0.20259);
   3->SetBinContent(34,0.13506);
   3->SetBinContent(36,0.033765);
   3->SetBinContent(37,0.168825);
   3->SetBinContent(39,0.101295);
   3->SetBinContent(41,0.033765);
   3->SetBinContent(42,0.101295);
   3->SetBinContent(43,0.033765);
   3->SetBinContent(45,0.06753);
   3->SetBinContent(46,0.033765);
   3->SetBinContent(48,0.033765);
   3->SetBinContent(51,0.033765);
   3->SetEntries(16810);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,500);
   4->SetBinContent(1,93.06107);
   4->SetBinContent(2,157.6309);
   4->SetBinContent(3,112.8934);
   4->SetBinContent(4,73.25062);
   4->SetBinContent(5,48.21423);
   4->SetBinContent(6,30.13117);
   4->SetBinContent(7,17.42711);
   4->SetBinContent(8,6.07874);
   4->SetBinContent(9,4.854252);
   4->SetBinContent(10,9.074361);
   4->SetBinContent(11,6.406727);
   4->SetBinContent(12,5.728886);
   4->SetBinContent(13,4.854252);
   4->SetBinContent(14,3.170573);
   4->SetBinContent(15,2.492725);
   4->SetBinContent(16,2.361528);
   4->SetBinContent(17,1.946073);
   4->SetBinContent(18,1.661815);
   4->SetBinContent(19,1.355692);
   4->SetBinContent(20,1.377558);
   4->SetBinContent(21,0.9621044);
   4->SetBinContent(22,0.9621044);
   4->SetBinContent(23,0.9402384);
   4->SetBinContent(24,0.8527743);
   4->SetBinContent(25,0.590382);
   4->SetBinContent(26,0.612248);
   4->SetBinContent(27,0.4810519);
   4->SetBinContent(28,0.3279899);
   4->SetBinContent(29,0.3935879);
   4->SetBinContent(30,0.240526);
   4->SetBinContent(31,0.262392);
   4->SetBinContent(32,0.065598);
   4->SetBinContent(33,0.4154539);
   4->SetBinContent(34,0.196794);
   4->SetBinContent(35,0.087464);
   4->SetBinContent(36,0.087464);
   4->SetBinContent(37,0.065598);
   4->SetBinContent(38,0.065598);
   4->SetBinContent(39,0.021866);
   4->SetBinContent(40,0.087464);
   4->SetBinContent(41,0.087464);
   4->SetBinContent(42,0.087464);
   4->SetBinContent(43,0.043732);
   4->SetBinContent(46,0.043732);
   4->SetBinContent(48,0.021866);
   4->SetBinContent(51,0.043732);
   4->SetEntries(27075);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,500);
   5->SetBinContent(1,253.0776);
   5->SetBinContent(2,530.2402);
   5->SetBinContent(3,410.4754);
   5->SetBinContent(4,299.7845);
   5->SetBinContent(5,196.2639);
   5->SetBinContent(6,130.4948);
   5->SetBinContent(7,82.63632);
   5->SetBinContent(8,28.26269);
   5->SetBinContent(9,23.9012);
   5->SetBinContent(10,39.77727);
   5->SetBinContent(11,32.15895);
   5->SetBinContent(12,29.25129);
   5->SetBinContent(13,25.58764);
   5->SetBinContent(14,18.14404);
   5->SetBinContent(15,15.52714);
   5->SetBinContent(16,13.95698);
   5->SetBinContent(17,10.52589);
   5->SetBinContent(18,8.083416);
   5->SetBinContent(19,6.745872);
   5->SetBinContent(20,7.152951);
   5->SetBinContent(21,6.106177);
   5->SetBinContent(22,5.117557);
   5->SetBinContent(23,4.070783);
   5->SetBinContent(24,2.907701);
   5->SetBinContent(25,3.431088);
   5->SetBinContent(26,2.384314);
   5->SetBinContent(27,2.268006);
   5->SetBinContent(28,1.977236);
   5->SetBinContent(29,1.512004);
   5->SetBinContent(30,1.104926);
   5->SetBinContent(31,1.16308);
   5->SetBinContent(32,0.8723099);
   5->SetBinContent(33,1.046772);
   5->SetBinContent(34,0.6978479);
   5->SetBinContent(35,0.5815399);
   5->SetBinContent(36,0.6978479);
   5->SetBinContent(37,0.465232);
   5->SetBinContent(38,0.29077);
   5->SetBinContent(39,0.348924);
   5->SetBinContent(40,0.29077);
   5->SetBinContent(41,0.29077);
   5->SetBinContent(42,0.116308);
   5->SetBinContent(43,0.174462);
   5->SetBinContent(45,0.174462);
   5->SetBinContent(46,0.116308);
   5->SetBinContent(47,0.058154);
   5->SetBinContent(48,0.116308);
   5->SetBinContent(50,0.174462);
   5->SetBinContent(51,0.29077);
   5->SetEntries(37845);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,500);
   6->SetBinContent(1,9775.679);
   6->SetBinContent(2,16977.22);
   6->SetBinContent(3,11897.91);
   6->SetBinContent(4,7832.35);
   6->SetBinContent(5,5192.721);
   6->SetBinContent(6,3411.629);
   6->SetBinContent(7,1860.273);
   6->SetBinContent(8,543.7833);
   6->SetBinContent(9,354.335);
   6->SetBinContent(10,705.1651);
   6->SetBinContent(11,685.8694);
   6->SetBinContent(12,636.7532);
   6->SetBinContent(13,495.5441);
   6->SetBinContent(14,400.82);
   6->SetBinContent(15,340.3018);
   6->SetBinContent(16,286.8002);
   6->SetBinContent(17,240.3155);
   6->SetBinContent(18,224.5284);
   6->SetBinContent(19,177.1672);
   6->SetBinContent(20,160.5031);
   6->SetBinContent(21,114.8958);
   6->SetBinContent(22,114.8958);
   6->SetBinContent(23,98.23155);
   6->SetBinContent(24,85.07554);
   6->SetBinContent(25,71.04246);
   6->SetBinContent(26,60.51765);
   6->SetBinContent(27,64.90298);
   6->SetBinContent(28,49.11577);
   6->SetBinContent(29,29.82028);
   6->SetBinContent(30,35.08269);
   6->SetBinContent(31,31.57442);
   6->SetBinContent(32,18.41841);
   6->SetBinContent(33,18.41841);
   6->SetBinContent(34,18.41841);
   6->SetBinContent(35,12.27894);
   6->SetBinContent(36,13.156);
   6->SetBinContent(37,14.03307);
   6->SetBinContent(38,10.5248);
   6->SetBinContent(39,7.016536);
   6->SetBinContent(40,6.139469);
   6->SetBinContent(41,3.508268);
   6->SetBinContent(42,3.508268);
   6->SetBinContent(43,4.385335);
   6->SetBinContent(44,5.262402);
   6->SetBinContent(45,3.508268);
   6->SetBinContent(46,4.385335);
   6->SetBinContent(47,4.385335);
   6->SetBinContent(48,2.631201);
   6->SetBinContent(50,2.631201);
   6->SetBinContent(51,10.5248);
   6->SetEntries(71971);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,500);
   7->SetBinContent(1,1457.685);
   7->SetBinContent(2,3226.742);
   7->SetBinContent(3,2484.558);
   7->SetBinContent(4,1672.509);
   7->SetBinContent(5,1065.176);
   7->SetBinContent(6,740.0536);
   7->SetBinContent(7,482.5931);
   7->SetBinContent(8,167.95);
   7->SetBinContent(9,121.8174);
   7->SetBinContent(10,200.9613);
   7->SetBinContent(11,178.9998);
   7->SetBinContent(12,140.3255);
   7->SetBinContent(13,125.1321);
   7->SetBinContent(14,108.5583);
   7->SetBinContent(15,97.23292);
   7->SetBinContent(16,75.8251);
   7->SetBinContent(17,68.50501);
   7->SetBinContent(18,54.00294);
   7->SetBinContent(19,47.09719);
   7->SetBinContent(20,40.88202);
   7->SetBinContent(21,39.91522);
   7->SetBinContent(22,32.18078);
   7->SetBinContent(23,27.07053);
   7->SetBinContent(24,25.55126);
   7->SetBinContent(25,20.85536);
   7->SetBinContent(26,16.98814);
   7->SetBinContent(27,16.85002);
   7->SetBinContent(28,14.36395);
   7->SetBinContent(29,13.25904);
   7->SetBinContent(30,9.115587);
   7->SetBinContent(31,9.115587);
   7->SetBinContent(32,7.596323);
   7->SetBinContent(33,8.425013);
   7->SetBinContent(34,5.110254);
   7->SetBinContent(35,5.386484);
   7->SetBinContent(36,5.248369);
   7->SetBinContent(37,4.834024);
   7->SetBinContent(38,3.729105);
   7->SetBinContent(39,4.557794);
   7->SetBinContent(40,2.624185);
   7->SetBinContent(41,2.071725);
   7->SetBinContent(42,2.20984);
   7->SetBinContent(43,1.795495);
   7->SetBinContent(44,0.690575);
   7->SetBinContent(45,1.243035);
   7->SetBinContent(46,1.519265);
   7->SetBinContent(47,0.27623);
   7->SetBinContent(48,0.414345);
   7->SetBinContent(49,0.690575);
   7->SetBinContent(50,0.55246);
   7->SetBinContent(51,2.071725);
   7->SetEntries(92988);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,500);
   8->SetBinContent(1,156.1357);
   8->SetBinContent(2,440.6919);
   8->SetBinContent(3,316.8907);
   8->SetBinContent(4,197.71);
   8->SetBinContent(5,159.8312);
   8->SetBinContent(6,128.4195);
   8->SetBinContent(7,86.8448);
   8->SetBinContent(8,31.41191);
   8->SetBinContent(9,19.40148);
   8->SetBinContent(10,45.27013);
   8->SetBinContent(11,39.72684);
   8->SetBinContent(12,31.41191);
   8->SetBinContent(13,39.72684);
   8->SetBinContent(14,39.72684);
   8->SetBinContent(15,32.33579);
   8->SetBinContent(16,26.79251);
   8->SetBinContent(17,24.94475);
   8->SetBinContent(18,28.64027);
   8->SetBinContent(19,13.8582);
   8->SetBinContent(20,23.09699);
   8->SetBinContent(21,19.40148);
   8->SetBinContent(22,12.01044);
   8->SetBinContent(23,22.17311);
   8->SetBinContent(24,9.2388);
   8->SetBinContent(25,11.08656);
   8->SetBinContent(26,13.8582);
   8->SetBinContent(27,10.16268);
   8->SetBinContent(28,7.39104);
   8->SetBinContent(29,7.39104);
   8->SetBinContent(30,4.6194);
   8->SetBinContent(31,10.16268);
   8->SetBinContent(32,4.6194);
   8->SetBinContent(33,2.77164);
   8->SetBinContent(34,6.46716);
   8->SetBinContent(35,6.46716);
   8->SetBinContent(36,3.69552);
   8->SetBinContent(37,2.77164);
   8->SetBinContent(38,4.6194);
   8->SetBinContent(39,1.84776);
   8->SetBinContent(40,5.54328);
   8->SetBinContent(43,2.77164);
   8->SetBinContent(46,0.92388);
   8->SetBinContent(47,1.84776);
   8->SetBinContent(48,0.92388);
   8->SetBinContent(49,0.92388);
   8->SetBinContent(51,3.69552);
   8->SetEntries(2230);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,500);
   9->SetBinContent(1,816.7235);
   9->SetBinContent(2,1971.048);
   9->SetBinContent(3,1856.319);
   9->SetBinContent(4,1603.563);
   9->SetBinContent(5,1422.019);
   9->SetBinContent(6,1221.133);
   9->SetBinContent(7,912.1113);
   9->SetBinContent(8,364.8402);
   9->SetBinContent(9,309.8933);
   9->SetBinContent(10,464.6238);
   9->SetBinContent(11,449.6782);
   9->SetBinContent(12,413.6331);
   9->SetBinContent(13,338.4657);
   9->SetBinContent(14,314.7286);
   9->SetBinContent(15,272.0898);
   9->SetBinContent(16,224.6168);
   9->SetBinContent(17,218.0234);
   9->SetBinContent(18,182.4191);
   9->SetBinContent(19,160.0015);
   9->SetBinContent(20,168.7927);
   9->SetBinContent(21,152.529);
   9->SetBinContent(22,126.5949);
   9->SetBinContent(23,114.7266);
   9->SetBinContent(24,109.8913);
   9->SetBinContent(25,108.1331);
   9->SetBinContent(26,91.4295);
   9->SetBinContent(27,86.15469);
   9->SetBinContent(28,76.92377);
   9->SetBinContent(29,70.33026);
   9->SetBinContent(30,72.5281);
   9->SetBinContent(31,63.29718);
   9->SetBinContent(32,66.37415);
   9->SetBinContent(33,50.9894);
   9->SetBinContent(34,55.38504);
   9->SetBinContent(35,51.86853);
   9->SetBinContent(36,46.59376);
   9->SetBinContent(37,39.12118);
   9->SetBinContent(38,39.12118);
   9->SetBinContent(39,33.84641);
   9->SetBinContent(40,36.4838);
   9->SetBinContent(41,31.64859);
   9->SetBinContent(42,22.41776);
   9->SetBinContent(43,22.41776);
   9->SetBinContent(44,29.45078);
   9->SetBinContent(45,21.09906);
   9->SetBinContent(46,22.85732);
   9->SetBinContent(47,12.74735);
   9->SetBinContent(48,13.62648);
   9->SetBinContent(49,11.86822);
   9->SetBinContent(50,13.62648);
   9->SetBinContent(51,89.23167);
   9->SetEntries(35189);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,500);
   10->SetBinContent(1,22751.56);
   10->SetBinContent(2,42925.84);
   10->SetBinContent(3,29653.87);
   10->SetBinContent(4,18831.29);
   10->SetBinContent(5,12069.25);
   10->SetBinContent(6,8128.607);
   10->SetBinContent(7,4561.629);
   10->SetBinContent(8,1364.565);
   10->SetBinContent(9,861.188);
   10->SetBinContent(10,1526.729);
   10->SetBinContent(11,1415.514);
   10->SetBinContent(12,1150.288);
   10->SetBinContent(13,969.2001);
   10->SetBinContent(14,821.5933);
   10->SetBinContent(15,653.6069);
   10->SetBinContent(16,594.7971);
   10->SetBinContent(17,482.709);
   10->SetBinContent(18,411.9626);
   10->SetBinContent(19,357.5198);
   10->SetBinContent(20,306.8618);
   10->SetBinContent(21,259.9887);
   10->SetBinContent(22,235.8242);
   10->SetBinContent(23,183.7106);
   10->SetBinContent(24,158.0905);
   10->SetBinContent(25,145.2804);
   10->SetBinContent(26,136.5463);
   10->SetBinContent(27,108.3054);
   10->SetBinContent(28,87.92525);
   10->SetBinContent(29,71.91225);
   10->SetBinContent(30,71.32996);
   10->SetBinContent(31,62.59562);
   10->SetBinContent(32,58.2285);
   10->SetBinContent(33,43.38028);
   10->SetBinContent(34,39.3043);
   10->SetBinContent(35,32.3169);
   10->SetBinContent(36,27.07632);
   10->SetBinContent(37,24.45603);
   10->SetBinContent(38,23.00032);
   10->SetBinContent(39,20.67117);
   10->SetBinContent(40,19.5066);
   10->SetBinContent(41,18.34202);
   10->SetBinContent(42,18.34202);
   10->SetBinContent(43,11.35458);
   10->SetBinContent(44,11.06344);
   10->SetBinContent(45,6.987431);
   10->SetBinContent(46,9.898864);
   10->SetBinContent(47,5.240573);
   10->SetBinContent(48,6.987431);
   10->SetBinContent(49,3.202573);
   10->SetBinContent(50,4.94943);
   10->SetBinContent(51,21.5446);
   10->SetEntries(521191);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,500);
   11->SetBinContent(1,4059.267);
   11->SetBinContent(2,8179.601);
   11->SetBinContent(3,5646.358);
   11->SetBinContent(4,4272.913);
   11->SetBinContent(5,2502.708);
   11->SetBinContent(6,1739.688);
   11->SetBinContent(7,1159.792);
   11->SetBinContent(8,396.7708);
   11->SetBinContent(9,183.125);
   11->SetBinContent(10,305.2083);
   11->SetBinContent(11,518.8542);
   11->SetBinContent(12,427.2917);
   11->SetBinContent(13,213.6458);
   11->SetBinContent(14,244.1666);
   11->SetBinContent(15,305.2083);
   11->SetBinContent(16,213.6458);
   11->SetBinContent(17,183.125);
   11->SetBinContent(18,91.5625);
   11->SetBinContent(19,213.6458);
   11->SetBinContent(20,122.0833);
   11->SetBinContent(21,152.6042);
   11->SetBinContent(22,244.1666);
   11->SetBinContent(23,91.5625);
   11->SetBinContent(24,122.0833);
   11->SetBinContent(25,61.04166);
   11->SetBinContent(26,30.52083);
   11->SetBinContent(28,122.0833);
   11->SetBinContent(29,30.52083);
   11->SetBinContent(30,61.04166);
   11->SetBinContent(31,30.52083);
   11->SetBinContent(32,30.52083);
   11->SetBinContent(33,30.52083);
   11->SetBinContent(34,30.52083);
   11->SetBinContent(35,30.52083);
   11->SetBinContent(36,30.52083);
   11->SetBinContent(38,30.52083);
   11->SetBinContent(42,30.52083);
   11->SetEntries(1053);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,500);
   12->SetBinContent(1,2223.752);
   12->SetBinContent(2,3636.548);
   12->SetBinContent(3,2399.188);
   12->SetBinContent(4,1508.496);
   12->SetBinContent(5,943.6174);
   12->SetBinContent(6,640.0579);
   12->SetBinContent(7,428.1389);
   12->SetBinContent(8,169.6819);
   12->SetBinContent(9,120.2808);
   12->SetBinContent(10,230.5383);
   12->SetBinContent(11,243.4255);
   12->SetBinContent(12,217.651);
   12->SetBinContent(13,208.3436);
   12->SetBinContent(14,204.0478);
   12->SetBinContent(15,193.3085);
   12->SetBinContent(16,176.1255);
   12->SetBinContent(17,169.6819);
   12->SetBinContent(18,156.7946);
   12->SetBinContent(19,113.1212);
   12->SetBinContent(20,110.9734);
   12->SetBinContent(21,121.7127);
   12->SetBinContent(22,104.5297);
   12->SetBinContent(23,113.1212);
   12->SetBinContent(24,95.22228);
   12->SetBinContent(25,76.60738);
   12->SetBinContent(26,73.0276);
   12->SetBinContent(27,79.47121);
   12->SetBinContent(28,71.59568);
   12->SetBinContent(29,68.73185);
   12->SetBinContent(30,56.56057);
   12->SetBinContent(31,55.84461);
   12->SetBinContent(32,50.11695);
   12->SetBinContent(33,48.68504);
   12->SetBinContent(34,51.54887);
   12->SetBinContent(35,33.64993);
   12->SetBinContent(36,32.93397);
   12->SetBinContent(37,39.37759);
   12->SetBinContent(38,27.92228);
   12->SetBinContent(39,25.05845);
   12->SetBinContent(40,40.09354);
   12->SetBinContent(41,23.62654);
   12->SetBinContent(42,15.75103);
   12->SetBinContent(43,24.3425);
   12->SetBinContent(44,22.91059);
   12->SetBinContent(45,13.60316);
   12->SetBinContent(46,15.75103);
   12->SetBinContent(47,14.31912);
   12->SetBinContent(48,10.73934);
   12->SetBinContent(49,7.159559);
   12->SetBinContent(50,5.727648);
   12->SetBinContent(51,67.29993);
   12->SetEntries(21762);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,500);
   13->SetBinContent(1,49931);
   13->SetBinContent(2,109897.2);
   13->SetBinContent(3,74999.94);
   13->SetBinContent(4,46914.32);
   13->SetBinContent(5,31258.79);
   13->SetBinContent(6,17475.69);
   13->SetBinContent(7,11234.38);
   13->SetBinContent(8,3224.682);
   13->SetBinContent(9,1872.396);
   13->SetBinContent(10,3640.77);
   13->SetBinContent(11,2704.572);
   13->SetBinContent(12,3848.814);
   13->SetBinContent(13,2548.539);
   13->SetBinContent(14,2288.484);
   13->SetBinContent(15,1820.385);
   13->SetBinContent(16,1820.385);
   13->SetBinContent(17,1300.276);
   13->SetBinContent(18,676.1434);
   13->SetBinContent(19,1144.243);
   13->SetBinContent(20,1144.243);
   13->SetBinContent(21,832.1765);
   13->SetBinContent(22,884.1876);
   13->SetBinContent(23,676.1434);
   13->SetBinContent(24,416.0882);
   13->SetBinContent(25,468.0992);
   13->SetBinContent(26,572.1213);
   13->SetBinContent(27,364.0772);
   13->SetBinContent(28,624.1323);
   13->SetBinContent(29,208.0441);
   13->SetBinContent(30,312.0662);
   13->SetBinContent(31,260.0551);
   13->SetBinContent(32,52.01103);
   13->SetBinContent(33,208.0441);
   13->SetBinContent(35,208.0441);
   13->SetBinContent(36,104.0221);
   13->SetBinContent(37,156.0331);
   13->SetBinContent(38,156.0331);
   13->SetBinContent(39,104.0221);
   13->SetBinContent(40,156.0331);
   13->SetBinContent(42,156.0331);
   13->SetBinContent(43,260.0551);
   13->SetBinContent(44,104.0221);
   13->SetBinContent(45,104.0221);
   13->SetBinContent(46,104.0221);
   13->SetBinContent(47,52.01103);
   13->SetBinContent(48,52.01103);
   13->SetBinContent(51,260.0551);
   13->SetEntries(7260);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,500);
   14->SetBinContent(1,36868.95);
   14->SetBinContent(2,28984.62);
   14->SetBinContent(3,9680.263);
   14->SetBinContent(4,4183.074);
   14->SetBinContent(5,1564.02);
   14->SetBinContent(6,638.5658);
   14->SetBinContent(7,370.1831);
   14->SetBinContent(8,55.52746);
   14->SetBinContent(9,64.78204);
   14->SetBinContent(10,129.5641);
   14->SetBinContent(11,111.0549);
   14->SetBinContent(12,27.76373);
   14->SetBinContent(13,111.0549);
   14->SetBinContent(14,37.01831);
   14->SetBinContent(15,18.50915);
   14->SetBinContent(16,27.76373);
   14->SetBinContent(18,9.254577);
   14->SetBinContent(19,9.254577);
   14->SetBinContent(21,9.254577);
   14->SetBinContent(22,9.254577);
   14->SetBinContent(24,18.50915);
   14->SetBinContent(26,9.254577);
   14->SetBinContent(27,9.254577);
   14->SetBinContent(29,9.254577);
   14->SetBinContent(32,18.50915);
   14->SetBinContent(39,9.254577);
   14->SetBinContent(49,9.254577);
   14->SetEntries(8968);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,500);
   15->SetBinContent(1,10769.99);
   15->SetBinContent(2,8582.335);
   15->SetBinContent(3,3449.757);
   15->SetBinContent(4,1626.712);
   15->SetBinContent(5,1290.151);
   15->SetBinContent(6,420.7013);
   15->SetBinContent(7,308.5143);
   15->SetBinContent(8,84.14027);
   15->SetBinContent(9,84.14027);
   15->SetBinContent(10,56.09351);
   15->SetBinContent(11,112.187);
   15->SetBinContent(12,112.187);
   15->SetBinContent(13,112.187);
   15->SetBinContent(14,56.09351);
   15->SetBinContent(15,56.09351);
   15->SetBinContent(16,28.04676);
   15->SetBinContent(17,28.04676);
   15->SetBinContent(18,56.09351);
   15->SetBinContent(19,56.09351);
   15->SetBinContent(20,28.04676);
   15->SetBinContent(22,56.09351);
   15->SetBinContent(24,28.04676);
   15->SetBinContent(26,28.04676);
   15->SetBinContent(36,28.04676);
   15->SetBinContent(38,28.04676);
   15->SetBinContent(39,28.04676);
   15->SetEntries(981);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,500);
   16->SetBinContent(1,3419.58);
   16->SetBinContent(2,4608.994);
   16->SetBinContent(3,2177.055);
   16->SetBinContent(4,1178.797);
   16->SetBinContent(5,446.0309);
   16->SetBinContent(6,265.4946);
   16->SetBinContent(7,116.8177);
   16->SetBinContent(8,53.09894);
   16->SetBinContent(9,10.61979);
   16->SetBinContent(10,63.71873);
   16->SetBinContent(11,116.8177);
   16->SetBinContent(12,53.09894);
   16->SetBinContent(13,53.09894);
   16->SetBinContent(14,53.09894);
   16->SetBinContent(15,53.09894);
   16->SetBinContent(16,74.33852);
   16->SetBinContent(17,42.47915);
   16->SetBinContent(18,10.61979);
   16->SetBinContent(19,53.09894);
   16->SetBinContent(20,31.85936);
   16->SetBinContent(21,10.61979);
   16->SetBinContent(22,10.61979);
   16->SetBinContent(23,10.61979);
   16->SetBinContent(24,21.23957);
   16->SetBinContent(26,31.85936);
   16->SetBinContent(28,10.61979);
   16->SetBinContent(30,10.61979);
   16->SetBinContent(38,10.61979);
   16->SetBinContent(41,10.61979);
   16->SetBinContent(43,10.61979);
   16->SetBinContent(47,10.61979);
   16->SetEntries(1227);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,500);
   17->SetBinContent(1,27916.57);
   17->SetBinContent(2,23719.97);
   17->SetBinContent(3,9244.737);
   17->SetBinContent(4,3953.336);
   17->SetBinContent(5,2554.464);
   17->SetBinContent(6,2067.899);
   17->SetBinContent(7,790.6673);
   17->SetBinContent(8,304.1028);
   17->SetBinContent(9,182.4617);
   17->SetBinContent(10,973.129);
   17->SetBinContent(11,547.3851);
   17->SetBinContent(12,729.8467);
   17->SetBinContent(13,608.2056);
   17->SetBinContent(14,425.7439);
   17->SetBinContent(15,486.5645);
   17->SetBinContent(16,364.9234);
   17->SetBinContent(17,608.2056);
   17->SetBinContent(18,364.9234);
   17->SetBinContent(19,547.3851);
   17->SetBinContent(20,243.2822);
   17->SetBinContent(21,425.7439);
   17->SetBinContent(22,425.7439);
   17->SetBinContent(23,60.82056);
   17->SetBinContent(24,364.9234);
   17->SetBinContent(25,304.1028);
   17->SetBinContent(26,121.6411);
   17->SetBinContent(27,60.82056);
   17->SetBinContent(28,182.4617);
   17->SetBinContent(29,60.82056);
   17->SetBinContent(30,182.4617);
   17->SetBinContent(31,60.82056);
   17->SetBinContent(32,243.2822);
   17->SetBinContent(34,182.4617);
   17->SetBinContent(35,121.6411);
   17->SetBinContent(36,243.2822);
   17->SetBinContent(37,121.6411);
   17->SetBinContent(38,121.6411);
   17->SetBinContent(39,60.82056);
   17->SetBinContent(40,60.82056);
   17->SetBinContent(41,60.82056);
   17->SetBinContent(42,60.82056);
   17->SetBinContent(43,60.82056);
   17->SetBinContent(44,60.82056);
   17->SetBinContent(46,121.6411);
   17->SetBinContent(49,60.82056);
   17->SetBinContent(51,243.2822);
   17->SetEntries(1327);
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
   
   TLegend *leg = new TLegend(0.8,0.2,0.98,0.95,NULL,"brNDC");
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
   entry=leg->AddEntry("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}","f");

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
