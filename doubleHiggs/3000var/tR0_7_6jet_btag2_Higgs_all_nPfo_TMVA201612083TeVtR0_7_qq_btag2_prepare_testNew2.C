{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:45:24 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-53.96825,-3.272542,263.4921,6.025585);
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
   
   TH1F *THStack_stack_26 = new TH1F("THStack_stack_26","",50,0,200);
   THStack_stack_26->SetMinimum(0.02518377);
   THStack_stack_26->SetMaximum(191308.9);
   THStack_stack_26->SetDirectory(0);
   THStack_stack_26->SetStats(0);
   THStack_stack_26->SetLineWidth(2);
   THStack_stack_26->SetMarkerSize(1.2);
   THStack_stack_26->GetXaxis()->SetTitle("N_{PFO,visible}");
   THStack_stack_26->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_26->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_26->GetXaxis()->SetLabelColor(ci);
   THStack_stack_26->GetXaxis()->SetLabelFont(42);
   THStack_stack_26->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_26->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_26->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_26->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_26->GetXaxis()->SetTitleColor(ci);
   THStack_stack_26->GetXaxis()->SetTitleFont(42);
   THStack_stack_26->GetYaxis()->SetTitle("Number of events");
   THStack_stack_26->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_26->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_26->GetYaxis()->SetLabelColor(ci);
   THStack_stack_26->GetYaxis()->SetLabelFont(42);
   THStack_stack_26->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_26->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_26->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_26->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_26->GetYaxis()->SetTitleColor(ci);
   THStack_stack_26->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_26->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_26->GetZaxis()->SetLabelColor(ci);
   THStack_stack_26->GetZaxis()->SetLabelFont(42);
   THStack_stack_26->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_26->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_26->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_26->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_26->GetZaxis()->SetTitleColor(ci);
   THStack_stack_26->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_26);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,200);
   0->SetBinContent(7,0.009899);
   0->SetBinContent(9,0.049495);
   0->SetBinContent(10,0.158384);
   0->SetBinContent(11,0.277172);
   0->SetBinContent(12,0.4553539);
   0->SetBinContent(13,1.059194);
   0->SetBinContent(14,1.70263);
   0->SetBinContent(15,3.048884);
   0->SetBinContent(16,4.504035);
   0->SetBinContent(17,5.860217);
   0->SetBinContent(18,7.09761);
   0->SetBinContent(19,8.156817);
   0->SetBinContent(20,8.414195);
   0->SetBinContent(21,8.295405);
   0->SetBinContent(22,8.12712);
   0->SetBinContent(23,7.444079);
   0->SetBinContent(24,6.186889);
   0->SetBinContent(25,5.276168);
   0->SetBinContent(26,3.761605);
   0->SetBinContent(27,2.969693);
   0->SetBinContent(28,2.227276);
   0->SetBinContent(29,1.564044);
   0->SetBinContent(30,1.207679);
   0->SetBinContent(31,0.9404057);
   0->SetBinContent(32,0.5048488);
   0->SetBinContent(33,0.277172);
   0->SetBinContent(34,0.188081);
   0->SetBinContent(35,0.09898999);
   0->SetBinContent(36,0.049495);
   0->SetBinContent(37,0.05939399);
   0->SetBinContent(38,0.029697);
   0->SetBinContent(39,0.019798);
   0->SetBinContent(40,0.029697);
   0->SetBinContent(41,0.019798);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,200);
   1->SetBinContent(7,0.004949);
   1->SetBinContent(8,0.014847);
   1->SetBinContent(9,0.108878);
   1->SetBinContent(10,0.2326031);
   1->SetBinContent(11,0.4998493);
   1->SetBinContent(12,1.019492);
   1->SetBinContent(13,1.583675);
   1->SetBinContent(14,2.543788);
   1->SetBinContent(15,3.726622);
   1->SetBinContent(16,4.637255);
   1->SetBinContent(17,5.448906);
   1->SetBinContent(18,5.622124);
   1->SetBinContent(19,5.869579);
   1->SetBinContent(20,6.156626);
   1->SetBinContent(21,5.854732);
   1->SetBinContent(22,5.117317);
   1->SetBinContent(23,4.508578);
   1->SetBinContent(24,3.919636);
   1->SetBinContent(25,2.58833);
   1->SetBinContent(26,2.147861);
   1->SetBinContent(27,1.623266);
   1->SetBinContent(28,1.143216);
   1->SetBinContent(29,0.8116347);
   1->SetBinContent(30,0.554288);
   1->SetBinContent(31,0.3810732);
   1->SetBinContent(32,0.1534191);
   1->SetBinContent(33,0.1633171);
   1->SetBinContent(34,0.09403102);
   1->SetBinContent(35,0.069286);
   1->SetBinContent(36,0.024745);
   1->SetBinContent(39,0.009898);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,200);
   2->SetBinContent(5,0.004949);
   2->SetBinContent(6,0.029694);
   2->SetBinContent(7,0.064337);
   2->SetBinContent(8,0.2474501);
   2->SetBinContent(9,0.4850023);
   2->SetBinContent(10,1.078879);
   2->SetBinContent(11,1.821225);
   2->SetBinContent(12,3.093138);
   2->SetBinContent(13,4.419495);
   2->SetBinContent(14,6.013103);
   2->SetBinContent(15,7.092005);
   2->SetBinContent(16,8.571729);
   2->SetBinContent(17,9.690116);
   2->SetBinContent(18,10.41756);
   2->SetBinContent(19,10.70953);
   2->SetBinContent(20,10.74912);
   2->SetBinContent(21,10.25426);
   2->SetBinContent(22,9.432788);
   2->SetBinContent(23,8.487602);
   2->SetBinContent(24,7.329561);
   2->SetBinContent(25,6.121983);
   2->SetBinContent(26,4.958946);
   2->SetBinContent(27,3.870145);
   2->SetBinContent(28,2.989207);
   2->SetBinContent(29,2.083523);
   2->SetBinContent(30,1.638113);
   2->SetBinContent(31,1.039287);
   2->SetBinContent(32,0.6978083);
   2->SetBinContent(33,0.5047983);
   2->SetBinContent(34,0.2969401);
   2->SetBinContent(35,0.2227051);
   2->SetBinContent(36,0.09403102);
   2->SetBinContent(37,0.103929);
   2->SetBinContent(38,0.04949);
   2->SetBinContent(39,0.014847);
   2->SetBinContent(40,0.004949);
   2->SetBinContent(41,0.024745);
   2->SetBinContent(42,0.004949);
   2->SetBinContent(45,0.014847);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,200);
   3->SetBinContent(7,0.236355);
   3->SetBinContent(8,0.7765951);
   3->SetBinContent(9,1.41813);
   3->SetBinContent(10,3.072616);
   3->SetBinContent(11,4.389452);
   3->SetBinContent(12,9.251589);
   3->SetBinContent(13,14.6202);
   3->SetBinContent(14,20.5967);
   3->SetBinContent(15,27.24857);
   3->SetBinContent(16,35.18335);
   3->SetBinContent(17,42.07118);
   3->SetBinContent(18,46.96694);
   3->SetBinContent(19,49.9044);
   3->SetBinContent(20,50.68097);
   3->SetBinContent(21,49.83687);
   3->SetBinContent(22,44.13078);
   3->SetBinContent(23,38.45844);
   3->SetBinContent(24,32.65105);
   3->SetBinContent(25,26.70831);
   3->SetBinContent(26,20.7993);
   3->SetBinContent(27,14.85655);
   3->SetBinContent(28,11.17618);
   3->SetBinContent(29,7.529582);
   3->SetBinContent(30,5.233572);
   3->SetBinContent(31,3.714153);
   3->SetBinContent(32,2.29602);
   3->SetBinContent(33,1.41813);
   3->SetBinContent(34,0.9116551);
   3->SetBinContent(35,0.4727099);
   3->SetBinContent(36,0.27012);
   3->SetBinContent(37,0.33765);
   3->SetBinContent(38,0.13506);
   3->SetBinContent(39,0.101295);
   3->SetBinContent(40,0.033765);
   3->SetBinContent(41,0.06753);
   3->SetBinContent(46,0.033765);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,200);
   4->SetBinContent(5,0.043732);
   4->SetBinContent(6,0.043732);
   4->SetBinContent(7,0.153062);
   4->SetBinContent(8,0.7434441);
   4->SetBinContent(9,1.836743);
   4->SetBinContent(10,4.307606);
   4->SetBinContent(11,8.112264);
   4->SetBinContent(12,14.21283);
   4->SetBinContent(13,21.97521);
   4->SetBinContent(14,29.97811);
   4->SetBinContent(15,38.96497);
   4->SetBinContent(16,47.36146);
   4->SetBinContent(17,53.11217);
   4->SetBinContent(18,55.71421);
   4->SetBinContent(19,55.12383);
   4->SetBinContent(20,51.97515);
   4->SetBinContent(21,47.88624);
   4->SetBinContent(22,41.72007);
   4->SetBinContent(23,33.43291);
   4->SetBinContent(24,26.52331);
   4->SetBinContent(25,19.52624);
   4->SetBinContent(26,13.62246);
   4->SetBinContent(27,9.227422);
   4->SetBinContent(28,5.619557);
   4->SetBinContent(29,4.154545);
   4->SetBinContent(30,2.776984);
   4->SetBinContent(31,1.727413);
   4->SetBinContent(32,0.9621044);
   4->SetBinContent(33,0.4591859);
   4->SetBinContent(34,0.3279899);
   4->SetBinContent(35,0.196794);
   4->SetBinContent(36,0.10933);
   4->SetBinContent(37,0.043732);
   4->SetBinContent(38,0.021866);
   4->SetBinContent(39,0.021866);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,200);
   5->SetBinContent(7,0.29077);
   5->SetBinContent(8,1.16308);
   5->SetBinContent(9,3.256626);
   5->SetBinContent(10,7.327413);
   5->SetBinContent(11,19.83048);
   5->SetBinContent(12,33.67099);
   5->SetBinContent(13,68.56372);
   5->SetBinContent(14,106.5365);
   5->SetBinContent(15,142.8229);
   5->SetBinContent(16,175.2713);
   5->SetBinContent(17,205.161);
   5->SetBinContent(18,227.1422);
   5->SetBinContent(19,223.0134);
   5->SetBinContent(20,207.8941);
   5->SetBinContent(21,186.32);
   5->SetBinContent(22,161.0242);
   5->SetBinContent(23,121.9466);
   5->SetBinContent(24,95.13884);
   5->SetBinContent(25,68.56372);
   5->SetBinContent(26,50.41964);
   5->SetBinContent(27,35.24117);
   5->SetBinContent(28,23.08706);
   5->SetBinContent(29,16.74837);
   5->SetBinContent(30,8.316032);
   5->SetBinContent(31,5.408328);
   5->SetBinContent(32,3.082164);
   5->SetBinContent(33,1.45385);
   5->SetBinContent(34,0.8141559);
   5->SetBinContent(35,0.5233859);
   5->SetBinContent(36,0.29077);
   5->SetBinContent(37,0.232616);
   5->SetBinContent(38,0.116308);
   5->SetBinContent(39,0.058154);
   5->SetBinContent(43,0.058154);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,200);
   6->SetBinContent(6,5.262402);
   6->SetBinContent(7,14.91014);
   6->SetBinContent(8,79.81313);
   6->SetBinContent(9,237.6843);
   6->SetBinContent(10,557.8165);
   6->SetBinContent(11,1189.311);
   6->SetBinContent(12,2095.323);
   6->SetBinContent(13,3259.917);
   6->SetBinContent(14,4337.692);
   6->SetBinContent(15,5532.102);
   6->SetBinContent(16,6316.098);
   6->SetBinContent(17,6601.985);
   6->SetBinContent(18,6492.366);
   6->SetBinContent(19,5967.948);
   6->SetBinContent(20,5204.999);
   6->SetBinContent(21,4337.692);
   6->SetBinContent(22,3281.84);
   6->SetBinContent(23,2413.657);
   6->SetBinContent(24,1780.459);
   6->SetBinContent(25,1181.417);
   6->SetBinContent(26,852.5137);
   6->SetBinContent(27,533.2584);
   6->SetBinContent(28,341.1789);
   6->SetBinContent(29,217.512);
   6->SetBinContent(30,125.4206);
   6->SetBinContent(31,61.39471);
   6->SetBinContent(32,42.09923);
   6->SetBinContent(33,28.06615);
   6->SetBinContent(34,13.156);
   6->SetBinContent(35,6.139469);
   6->SetBinContent(36,7.893603);
   6->SetBinContent(38,0.877067);
   6->SetBinContent(40,0.877067);
   6->SetBinContent(46,0.877067);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,200);
   7->SetBinContent(6,0.27623);
   7->SetBinContent(7,1.243035);
   7->SetBinContent(8,5.248369);
   7->SetBinContent(9,16.15945);
   7->SetBinContent(10,42.26317);
   7->SetBinContent(11,107.0391);
   7->SetBinContent(12,232.8676);
   7->SetBinContent(13,414.0844);
   7->SetBinContent(14,655.7988);
   7->SetBinContent(15,904.2813);
   7->SetBinContent(16,1149.808);
   7->SetBinContent(17,1326.25);
   7->SetBinContent(18,1371.811);
   7->SetBinContent(19,1346.269);
   7->SetBinContent(20,1210.969);
   7->SetBinContent(21,1060.344);
   7->SetBinContent(22,843.6455);
   7->SetBinContent(23,653.4507);
   7->SetBinContent(24,487.8418);
   7->SetBinContent(25,348.338);
   7->SetBinContent(26,237.0112);
   7->SetBinContent(27,160.7676);
   7->SetBinContent(28,105.3817);
   7->SetBinContent(29,64.63779);
   7->SetBinContent(30,43.78244);
   7->SetBinContent(31,20.99347);
   7->SetBinContent(32,12.43035);
   7->SetBinContent(33,8.425013);
   7->SetBinContent(34,5.248369);
   7->SetBinContent(35,3.452875);
   7->SetBinContent(36,0.82869);
   7->SetBinContent(37,0.82869);
   7->SetBinContent(38,0.414345);
   7->SetBinContent(39,0.414345);
   7->SetBinContent(40,0.138115);
   7->SetBinContent(43,0.138115);
   7->SetBinContent(46,0.138115);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,200);
   8->SetBinContent(7,0.92388);
   8->SetBinContent(8,0.92388);
   8->SetBinContent(9,4.6194);
   8->SetBinContent(10,12.93432);
   8->SetBinContent(11,36.9552);
   8->SetBinContent(12,55.43283);
   8->SetBinContent(13,75.75822);
   8->SetBinContent(14,114.5612);
   8->SetBinContent(15,157.0596);
   8->SetBinContent(16,187.5474);
   8->SetBinContent(17,237.4366);
   8->SetBinContent(18,214.3397);
   8->SetBinContent(19,193.0906);
   8->SetBinContent(20,166.2983);
   8->SetBinContent(21,161.6789);
   8->SetBinContent(22,118.2568);
   8->SetBinContent(23,97.93138);
   8->SetBinContent(24,73.91046);
   8->SetBinContent(25,49.88954);
   8->SetBinContent(26,42.49849);
   8->SetBinContent(27,22.17311);
   8->SetBinContent(28,11.08656);
   8->SetBinContent(29,14.78208);
   8->SetBinContent(30,1.84776);
   8->SetBinContent(31,3.69552);
   8->SetBinContent(32,1.84776);
   8->SetBinContent(33,2.77164);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,200);
   9->SetBinContent(7,2.637384);
   9->SetBinContent(8,11.42866);
   9->SetBinContent(9,23.29688);
   9->SetBinContent(10,57.14329);
   9->SetBinContent(11,90.98994);
   9->SetBinContent(12,209.6718);
   9->SetBinContent(13,345.0593);
   9->SetBinContent(14,519.5707);
   9->SetBinContent(15,691.005);
   9->SetBinContent(16,851.45);
   9->SetBinContent(17,1004.422);
   9->SetBinContent(18,1104.206);
   9->SetBinContent(19,1109.481);
   9->SetBinContent(20,1102.008);
   9->SetBinContent(21,1019.807);
   9->SetBinContent(22,952.1127);
   9->SetBinContent(23,834.3065);
   9->SetBinContent(24,767.4911);
   9->SetBinContent(25,685.2905);
   9->SetBinContent(26,593.8589);
   9->SetBinContent(27,505.0647);
   9->SetBinContent(28,438.6888);
   9->SetBinContent(29,389.4564);
   9->SetBinContent(30,348.1364);
   9->SetBinContent(31,290.552);
   9->SetBinContent(32,237.364);
   9->SetBinContent(33,208.7926);
   9->SetBinContent(34,197.8036);
   9->SetBinContent(35,165.7158);
   9->SetBinContent(36,135.8257);
   9->SetBinContent(37,99.78129);
   9->SetBinContent(38,91.86907);
   9->SetBinContent(39,80.44032);
   9->SetBinContent(40,65.49502);
   9->SetBinContent(41,54.94547);
   9->SetBinContent(42,34.28598);
   9->SetBinContent(43,27.25296);
   9->SetBinContent(44,32.52772);
   9->SetBinContent(45,17.14299);
   9->SetBinContent(46,15.8243);
   9->SetBinContent(47,15.8243);
   9->SetBinContent(48,7.91215);
   9->SetBinContent(49,9.230842);
   9->SetBinContent(50,5.714332);
   9->SetBinContent(51,17.14299);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,200);
   10->SetBinContent(5,0.582286);
   10->SetBinContent(6,8.443147);
   10->SetBinContent(7,31.44348);
   10->SetBinContent(8,138.8754);
   10->SetBinContent(9,452.1396);
   10->SetBinContent(10,1163.971);
   10->SetBinContent(11,2510.386);
   10->SetBinContent(12,4698.988);
   10->SetBinContent(13,7473.24);
   10->SetBinContent(14,10335.67);
   10->SetBinContent(15,13171.62);
   10->SetBinContent(16,15084.46);
   10->SetBinContent(17,15897.27);
   10->SetBinContent(18,15657.18);
   10->SetBinContent(19,14386.61);
   10->SetBinContent(20,12447.86);
   10->SetBinContent(21,10246.62);
   10->SetBinContent(22,8027.916);
   10->SetBinContent(23,6028.93);
   10->SetBinContent(24,4352.68);
   10->SetBinContent(25,3092.905);
   10->SetBinContent(26,2118.641);
   10->SetBinContent(27,1449.577);
   10->SetBinContent(28,965.7065);
   10->SetBinContent(29,652.7335);
   10->SetBinContent(30,435.5447);
   10->SetBinContent(31,286.7733);
   10->SetBinContent(32,193.3181);
   10->SetBinContent(33,121.407);
   10->SetBinContent(34,84.4315);
   10->SetBinContent(35,54.44366);
   10->SetBinContent(36,46.29169);
   10->SetBinContent(37,28.2409);
   10->SetBinContent(38,17.17745);
   10->SetBinContent(39,14.55716);
   10->SetBinContent(40,10.77229);
   10->SetBinContent(41,7.278574);
   10->SetBinContent(42,5.822859);
   10->SetBinContent(43,4.94943);
   10->SetBinContent(44,3.202573);
   10->SetBinContent(45,1.164572);
   10->SetBinContent(46,1.455715);
   10->SetBinContent(47,1.455715);
   10->SetBinContent(48,0.582286);
   10->SetBinContent(49,0.291143);
   10->SetBinContent(51,1.164572);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,200);
   11->SetBinContent(8,30.52083);
   11->SetBinContent(9,183.125);
   11->SetBinContent(10,640.9374);
   11->SetBinContent(11,1403.958);
   11->SetBinContent(12,1831.251);
   11->SetBinContent(13,2319.584);
   11->SetBinContent(14,3052.082);
   11->SetBinContent(15,3204.686);
   11->SetBinContent(16,3693.018);
   11->SetBinContent(17,2807.916);
   11->SetBinContent(18,3357.289);
   11->SetBinContent(19,2716.354);
   11->SetBinContent(20,2350.104);
   11->SetBinContent(21,1465);
   11->SetBinContent(22,1068.229);
   11->SetBinContent(23,671.4583);
   11->SetBinContent(24,335.7292);
   11->SetBinContent(25,213.6458);
   11->SetBinContent(26,335.7292);
   11->SetBinContent(27,152.6042);
   11->SetBinContent(28,213.6458);
   11->SetBinContent(29,30.52083);
   11->SetBinContent(30,30.52083);
   11->SetBinContent(33,30.52083);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,200);
   12->SetBinContent(5,6.443604);
   12->SetBinContent(6,34.36588);
   12->SetBinContent(7,87.34675);
   12->SetBinContent(8,219.7989);
   12->SetBinContent(9,349.3853);
   12->SetBinContent(10,536.2462);
   12->SetBinContent(11,714.5159);
   12->SetBinContent(12,844.1014);
   12->SetBinContent(13,992.3015);
   12->SetBinContent(14,1146.945);
   12->SetBinContent(15,1186.322);
   12->SetBinContent(16,1242.165);
   12->SetBinContent(17,1192.049);
   12->SetBinContent(18,1086.806);
   12->SetBinContent(19,995.1653);
   12->SetBinContent(20,882.7623);
   12->SetBinContent(21,743.8695);
   12->SetBinContent(22,617.8636);
   12->SetBinContent(23,514.7679);
   12->SetBinContent(24,408.8085);
   12->SetBinContent(25,327.907);
   12->SetBinContent(26,251.301);
   12->SetBinContent(27,199.0361);
   12->SetBinContent(28,184.717);
   12->SetBinContent(29,133.884);
   12->SetBinContent(30,110.9734);
   12->SetBinContent(31,95.93824);
   12->SetBinContent(32,87.34675);
   12->SetBinContent(33,65.15206);
   12->SetBinContent(34,56.56057);
   12->SetBinContent(35,57.99249);
   12->SetBinContent(36,50.11695);
   12->SetBinContent(37,27.20632);
   12->SetBinContent(38,24.3425);
   12->SetBinContent(39,24.3425);
   12->SetBinContent(40,15.75103);
   12->SetBinContent(41,16.46698);
   12->SetBinContent(42,13.60316);
   12->SetBinContent(43,10.02338);
   12->SetBinContent(44,7.875515);
   12->SetBinContent(45,3.57978);
   12->SetBinContent(46,1.431912);
   12->SetBinContent(47,2.863824);
   12->SetBinContent(48,1.431912);
   12->SetBinContent(49,2.147868);
   12->SetBinContent(50,1.431912);
   12->SetBinContent(51,5.011692);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,200);
   13->SetBinContent(6,52.01103);
   13->SetBinContent(7,208.0441);
   13->SetBinContent(8,1144.243);
   13->SetBinContent(9,3588.759);
   13->SetBinContent(10,7905.689);
   13->SetBinContent(11,13834.92);
   13->SetBinContent(12,22260.77);
   13->SetBinContent(13,30634.65);
   13->SetBinContent(14,38488.42);
   13->SetBinContent(15,40984.98);
   13->SetBinContent(16,41713.15);
   13->SetBinContent(17,36095.88);
   13->SetBinContent(18,35003.64);
   13->SetBinContent(19,27305.9);
   13->SetBinContent(20,23509.05);
   13->SetBinContent(21,17943.79);
   13->SetBinContent(22,12638.67);
   13->SetBinContent(23,8685.853);
   13->SetBinContent(24,5773.229);
   13->SetBinContent(25,3744.792);
   13->SetBinContent(26,2600.55);
   13->SetBinContent(27,1248.265);
   13->SetBinContent(28,780.1655);
   13->SetBinContent(29,572.1213);
   13->SetBinContent(30,468.0992);
   13->SetBinContent(31,52.01103);
   13->SetBinContent(32,208.0441);
   13->SetBinContent(33,52.01103);
   13->SetBinContent(35,52.01103);
   13->SetBinContent(36,52.01103);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,200);
   14->SetBinContent(5,9.254577);
   14->SetBinContent(6,166.5824);
   14->SetBinContent(7,379.4377);
   14->SetBinContent(8,1258.621);
   14->SetBinContent(9,2748.607);
   14->SetBinContent(10,4756.847);
   14->SetBinContent(11,7755.271);
   14->SetBinContent(12,9708.027);
   14->SetBinContent(13,10096.73);
   14->SetBinContent(14,10522.46);
   14->SetBinContent(15,9328.577);
   14->SetBinContent(16,7801.542);
   14->SetBinContent(17,5839.611);
   14->SetBinContent(18,3960.965);
   14->SetBinContent(19,2933.7);
   14->SetBinContent(20,1869.419);
   14->SetBinContent(21,1360.421);
   14->SetBinContent(22,842.1665);
   14->SetBinContent(23,555.2746);
   14->SetBinContent(24,360.9285);
   14->SetBinContent(25,212.8553);
   14->SetBinContent(26,185.0915);
   14->SetBinContent(27,120.3095);
   14->SetBinContent(28,46.27288);
   14->SetBinContent(29,46.27288);
   14->SetBinContent(30,18.50915);
   14->SetBinContent(31,55.52746);
   14->SetBinContent(33,9.254577);
   14->SetBinContent(34,18.50915);
   14->SetBinContent(36,9.254577);
   14->SetBinContent(39,9.254577);
   14->SetBinContent(40,9.254577);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,200);
   15->SetBinContent(5,28.04676);
   15->SetBinContent(6,84.14027);
   15->SetBinContent(7,336.5611);
   15->SetBinContent(8,701.1689);
   15->SetBinContent(9,560.9351);
   15->SetBinContent(10,1486.478);
   15->SetBinContent(11,1458.431);
   15->SetBinContent(12,1794.992);
   15->SetBinContent(13,3281.476);
   15->SetBinContent(14,2804.679);
   15->SetBinContent(15,3253.429);
   15->SetBinContent(16,2215.694);
   15->SetBinContent(17,1907.179);
   15->SetBinContent(18,1907.179);
   15->SetBinContent(19,1206.01);
   15->SetBinContent(20,1037.73);
   15->SetBinContent(21,757.2624);
   15->SetBinContent(22,813.3559);
   15->SetBinContent(23,392.6546);
   15->SetBinContent(24,448.7481);
   15->SetBinContent(25,196.3273);
   15->SetBinContent(26,196.3273);
   15->SetBinContent(27,112.187);
   15->SetBinContent(28,168.2805);
   15->SetBinContent(29,112.187);
   15->SetBinContent(30,56.09351);
   15->SetBinContent(31,56.09351);
   15->SetBinContent(33,56.09351);
   15->SetBinContent(34,84.14027);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,200);
   16->SetBinContent(6,74.33852);
   16->SetBinContent(7,159.2968);
   16->SetBinContent(8,318.5935);
   16->SetBinContent(9,838.9637);
   16->SetBinContent(10,1231.896);
   16->SetBinContent(11,1295.614);
   16->SetBinContent(12,1731.024);
   16->SetBinContent(13,1762.883);
   16->SetBinContent(14,1359.333);
   16->SetBinContent(15,1242.515);
   16->SetBinContent(16,870.8232);
   16->SetBinContent(17,647.8071);
   16->SetBinContent(18,477.8903);
   16->SetBinContent(19,339.8331);
   16->SetBinContent(20,254.8748);
   16->SetBinContent(21,116.8177);
   16->SetBinContent(22,127.4375);
   16->SetBinContent(23,53.09894);
   16->SetBinContent(24,21.23957);
   16->SetBinContent(26,31.85936);
   16->SetBinContent(27,31.85936);
   16->SetBinContent(28,10.61979);
   16->SetBinContent(31,21.23957);
   16->SetBinContent(32,10.61979);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,200);
   17->SetBinContent(5,60.82056);
   17->SetBinContent(6,364.9234);
   17->SetBinContent(7,1581.335);
   17->SetBinContent(8,2128.72);
   17->SetBinContent(9,4865.648);
   17->SetBinContent(10,6021.243);
   17->SetBinContent(11,5717.139);
   17->SetBinContent(12,7420.122);
   17->SetBinContent(13,6021.243);
   17->SetBinContent(14,6507.81);
   17->SetBinContent(15,5352.214);
   17->SetBinContent(16,6021.243);
   17->SetBinContent(17,4196.619);
   17->SetBinContent(18,3345.131);
   17->SetBinContent(19,2858.566);
   17->SetBinContent(20,2493.643);
   17->SetBinContent(21,2007.078);
   17->SetBinContent(22,1520.514);
   17->SetBinContent(23,1642.155);
   17->SetBinContent(24,1033.95);
   17->SetBinContent(25,912.3084);
   17->SetBinContent(26,1094.77);
   17->SetBinContent(27,1033.95);
   17->SetBinContent(28,851.4879);
   17->SetBinContent(29,912.3084);
   17->SetBinContent(30,729.8467);
   17->SetBinContent(31,425.7439);
   17->SetBinContent(32,304.1028);
   17->SetBinContent(33,973.129);
   17->SetBinContent(34,243.2822);
   17->SetBinContent(35,364.9234);
   17->SetBinContent(36,364.9234);
   17->SetBinContent(37,243.2822);
   17->SetBinContent(38,60.82056);
   17->SetBinContent(39,121.6411);
   17->SetBinContent(40,243.2822);
   17->SetBinContent(42,60.82056);
   17->SetBinContent(43,243.2822);
   17->SetBinContent(44,243.2822);
   17->SetBinContent(45,60.82056);
   17->SetBinContent(46,60.82056);
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
