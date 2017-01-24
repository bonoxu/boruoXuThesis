{
//=========Macro generated from canvas: canvas1/
//=========  (Mon Jan 23 21:57:32 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,1600,900);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-108.9744,-3.955154,532.0513,8.548326);
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
   
   TH1F *THStack_stack_1 = new TH1F("THStack_stack_1","",50,0,500);
   THStack_stack_1->SetMinimum(0.01974569);
   THStack_stack_1->SetMaximum(3.53222e+07);
   THStack_stack_1->SetDirectory(0);
   THStack_stack_1->SetStats(0);
   THStack_stack_1->SetLineWidth(2);
   THStack_stack_1->SetMarkerSize(1.2);
   THStack_stack_1->GetXaxis()->SetTitle("P_{T,HH} / GeV");
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
   
   
   TH1F *0 = new TH1F("0","HH#nu#nu#rightarrowbbWW*#nu#nu,hadronic",50,0,500);
   0->SetBinContent(1,2.316366);
   0->SetBinContent(2,6.256183);
   0->SetBinContent(3,10.6712);
   0->SetBinContent(4,14.04681);
   0->SetBinContent(5,15.53168);
   0->SetBinContent(6,15.92764);
   0->SetBinContent(7,16.14542);
   0->SetBinContent(8,16.21472);
   0->SetBinContent(9,15.12581);
   0->SetBinContent(10,15.13571);
   0->SetBinContent(11,12.60153);
   0->SetBinContent(12,10.89888);
   0->SetBinContent(13,9.681285);
   0->SetBinContent(14,9.04774);
   0->SetBinContent(15,7.741054);
   0->SetBinContent(16,6.790736);
   0->SetBinContent(17,5.998805);
   0->SetBinContent(18,4.949496);
   0->SetBinContent(19,4.44464);
   0->SetBinContent(20,3.969482);
   0->SetBinContent(21,3.494335);
   0->SetBinContent(22,2.890502);
   0->SetBinContent(23,2.563838);
   0->SetBinContent(24,2.148084);
   0->SetBinContent(25,1.781822);
   0->SetBinContent(26,1.900611);
   0->SetBinContent(27,1.435357);
   0->SetBinContent(28,1.346266);
   0->SetBinContent(29,1.168083);
   0->SetBinContent(30,1.108689);
   0->SetBinContent(31,0.8117185);
   0->SetBinContent(32,0.8612136);
   0->SetBinContent(33,0.7721224);
   0->SetBinContent(34,0.584041);
   0->SetBinContent(35,0.5147479);
   0->SetBinContent(36,0.5345459);
   0->SetBinContent(37,0.4949498);
   0->SetBinContent(38,0.4949498);
   0->SetBinContent(39,0.277172);
   0->SetBinContent(40,0.346465);
   0->SetBinContent(41,0.3761619);
   0->SetBinContent(42,0.287071);
   0->SetBinContent(43,0.217778);
   0->SetBinContent(44,0.188081);
   0->SetBinContent(45,0.277172);
   0->SetBinContent(46,0.257374);
   0->SetBinContent(47,0.227677);
   0->SetBinContent(48,0.207879);
   0->SetBinContent(49,0.207879);
   0->SetBinContent(50,0.188081);
   0->SetBinContent(51,2.722221);
   0->SetEntries(23657);
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
   1->SetBinContent(1,6.186889);
   1->SetBinContent(2,16.70967);
   1->SetBinContent(3,26.31184);
   1->SetBinContent(4,35.61703);
   1->SetBinContent(5,40.67549);
   1->SetBinContent(6,42.52663);
   1->SetBinContent(7,42.77411);
   1->SetBinContent(8,40.98236);
   1->SetBinContent(9,40.06174);
   1->SetBinContent(10,34.96368);
   1->SetBinContent(11,32.36021);
   1->SetBinContent(12,28.93511);
   1->SetBinContent(13,25.5595);
   1->SetBinContent(14,22.02551);
   1->SetBinContent(15,19.17456);
   1->SetBinContent(16,16.46219);
   1->SetBinContent(17,14.25469);
   1->SetBinContent(18,11.71061);
   1->SetBinContent(19,10.6118);
   1->SetBinContent(20,9.710982);
   1->SetBinContent(21,7.919238);
   1->SetBinContent(22,7.305491);
   1->SetBinContent(23,5.721629);
   1->SetBinContent(24,5.533545);
   1->SetBinContent(25,4.830707);
   1->SetBinContent(26,4.167464);
   1->SetBinContent(27,3.761605);
   1->SetBinContent(28,2.930098);
   1->SetBinContent(29,2.702423);
   1->SetBinContent(30,2.623232);
   1->SetBinContent(31,2.058994);
   1->SetBinContent(32,2.049095);
   1->SetBinContent(33,1.682832);
   1->SetBinContent(34,1.534347);
   1->SetBinContent(35,1.524448);
   1->SetBinContent(36,1.425458);
   1->SetBinContent(37,1.118588);
   1->SetBinContent(38,1.257174);
   1->SetBinContent(39,1.029497);
   1->SetBinContent(40,0.7919204);
   1->SetBinContent(41,0.9107087);
   1->SetBinContent(42,0.9008096);
   1->SetBinContent(43,0.6533341);
   1->SetBinContent(44,0.6533341);
   1->SetBinContent(45,0.6929302);
   1->SetBinContent(46,0.5246469);
   1->SetBinContent(47,0.4949498);
   1->SetBinContent(48,0.5048488);
   1->SetBinContent(49,0.4652528);
   1->SetBinContent(50,0.4454549);
   1->SetBinContent(51,6.612552);
   1->SetEntries(59848);
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
   2->SetBinContent(1,5.810721);
   2->SetBinContent(2,14.70015);
   2->SetBinContent(3,23.51038);
   2->SetBinContent(4,31.07332);
   2->SetBinContent(5,33.70649);
   2->SetBinContent(6,37.0425);
   2->SetBinContent(7,36.36936);
   2->SetBinContent(8,35.57743);
   2->SetBinContent(9,31.73657);
   2->SetBinContent(10,30.12301);
   2->SetBinContent(11,27.11367);
   2->SetBinContent(12,23.64897);
   2->SetBinContent(13,21.32267);
   2->SetBinContent(14,18.18464);
   2->SetBinContent(15,16.08603);
   2->SetBinContent(16,12.83911);
   2->SetBinContent(17,11.8591);
   2->SetBinContent(18,9.879268);
   2->SetBinContent(19,8.433993);
   2->SetBinContent(20,7.473777);
   2->SetBinContent(21,6.295779);
   2->SetBinContent(22,5.533545);
   2->SetBinContent(23,5.177176);
   2->SetBinContent(24,4.484237);
   2->SetBinContent(25,3.524032);
   2->SetBinContent(26,3.167671);
   2->SetBinContent(27,2.900401);
   2->SetBinContent(28,2.870704);
   2->SetBinContent(29,2.27677);
   2->SetBinContent(30,1.791721);
   2->SetBinContent(31,1.692731);
   2->SetBinContent(32,1.455155);
   2->SetBinContent(33,1.395761);
   2->SetBinContent(34,1.138386);
   2->SetBinContent(35,1.128487);
   2->SetBinContent(36,0.9008096);
   2->SetBinContent(37,0.9899008);
   2->SetBinContent(38,0.8018194);
   2->SetBinContent(39,0.8513145);
   2->SetBinContent(40,0.7721224);
   2->SetBinContent(41,0.7028292);
   2->SetBinContent(42,0.5147479);
   2->SetBinContent(43,0.6632332);
   2->SetBinContent(44,0.4751518);
   2->SetBinContent(45,0.3662629);
   2->SetBinContent(46,0.3860609);
   2->SetBinContent(47,0.4256569);
   2->SetBinContent(48,0.4355559);
   2->SetBinContent(49,0.306869);
   2->SetBinContent(50,0.257374);
   2->SetBinContent(51,5.602839);
   2->SetEntries(50083);
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
   3->SetBinContent(1,17.28766);
   3->SetBinContent(2,49.33041);
   3->SetBinContent(3,79.61839);
   3->SetBinContent(4,109.908);
   3->SetBinContent(5,132.5999);
   3->SetBinContent(6,147.0862);
   3->SetBinContent(7,157.4867);
   3->SetBinContent(8,160.7284);
   3->SetBinContent(9,161.0998);
   3->SetBinContent(10,159.5803);
   3->SetBinContent(11,153.6709);
   3->SetBinContent(12,146.0057);
   3->SetBinContent(13,140.8055);
   3->SetBinContent(14,128.2439);
   3->SetBinContent(15,120.7137);
   3->SetBinContent(16,110.7184);
   3->SetBinContent(17,101.3648);
   3->SetBinContent(18,89.41102);
   3->SetBinContent(19,83.16399);
   3->SetBinContent(20,76.41045);
   3->SetBinContent(21,69.28547);
   3->SetBinContent(22,60.8439);
   3->SetBinContent(23,57.39998);
   3->SetBinContent(24,52.3354);
   3->SetBinContent(25,47.60846);
   3->SetBinContent(26,44.06325);
   3->SetBinContent(27,36.26379);
   3->SetBinContent(28,34.84571);
   3->SetBinContent(29,31.13163);
   3->SetBinContent(30,28.09271);
   3->SetBinContent(31,24.47977);
   3->SetBinContent(32,21.10319);
   3->SetBinContent(33,20.66424);
   3->SetBinContent(34,18.70582);
   3->SetBinContent(35,17.55778);
   3->SetBinContent(36,14.89032);
   3->SetBinContent(37,14.58643);
   3->SetBinContent(38,12.15536);
   3->SetBinContent(39,11.14242);
   3->SetBinContent(40,9.285354);
   3->SetBinContent(41,8.98147);
   3->SetBinContent(42,7.664641);
   3->SetBinContent(43,8.00229);
   3->SetBinContent(44,7.191933);
   3->SetBinContent(45,7.056874);
   3->SetBinContent(46,4.963454);
   3->SetBinContent(47,4.997219);
   3->SetBinContent(48,4.7271);
   3->SetBinContent(49,4.862159);
   3->SetBinContent(50,3.477797);
   3->SetBinContent(51,52.09905);
   3->SetEntries(90793);
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
   4->SetBinContent(1,20.09475);
   4->SetBinContent(2,55.93287);
   4->SetBinContent(3,88.14126);
   4->SetBinContent(4,111.9969);
   4->SetBinContent(5,134.9779);
   4->SetBinContent(6,146.7417);
   4->SetBinContent(7,156.1222);
   4->SetBinContent(8,161.851);
   4->SetBinContent(9,156.6032);
   4->SetBinContent(10,154.3073);
   4->SetBinContent(11,150.6776);
   4->SetBinContent(12,138.3452);
   4->SetBinContent(13,131.5012);
   4->SetBinContent(14,121.268);
   4->SetBinContent(15,109.4605);
   4->SetBinContent(16,101.5669);
   4->SetBinContent(17,91.94592);
   4->SetBinContent(18,88.14126);
   4->SetBinContent(19,75.41534);
   4->SetBinContent(20,72.11359);
   4->SetBinContent(21,62.62382);
   4->SetBinContent(22,55.10197);
   4->SetBinContent(23,49.65737);
   4->SetBinContent(24,47.88624);
   4->SetBinContent(25,40.71424);
   4->SetBinContent(26,37.3469);
   4->SetBinContent(27,32.84254);
   4->SetBinContent(28,30.74341);
   4->SetBinContent(29,27.70406);
   4->SetBinContent(30,24.27112);
   4->SetBinContent(31,20.96938);
   4->SetBinContent(32,20.379);
   4->SetBinContent(33,18.06122);
   4->SetBinContent(34,17.01166);
   4->SetBinContent(35,13.97231);
   4->SetBinContent(36,13.29447);
   4->SetBinContent(37,11.80759);
   4->SetBinContent(38,10.67057);
   4->SetBinContent(39,9.861531);
   4->SetBinContent(40,8.9213);
   4->SetBinContent(41,7.784276);
   4->SetBinContent(42,6.209935);
   4->SetBinContent(43,5.860081);
   4->SetBinContent(44,6.056874);
   4->SetBinContent(45,5.947545);
   4->SetBinContent(46,4.701191);
   4->SetBinContent(47,4.897984);
   4->SetBinContent(48,4.28574);
   4->SetBinContent(49,3.80469);
   4->SetBinContent(50,3.389234);
   4->SetBinContent(51,42.7259);
   4->SetEntries(133391);
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
   5->SetBinContent(1,39.42834);
   5->SetBinContent(2,116.5966);
   5->SetBinContent(3,187.0178);
   5->SetBinContent(4,258.2537);
   5->SetBinContent(5,297.5161);
   5->SetBinContent(6,341.3736);
   5->SetBinContent(7,367.7812);
   5->SetBinContent(8,385.9291);
   5->SetBinContent(9,392.0366);
   5->SetBinContent(10,375.5755);
   5->SetBinContent(11,363.535);
   5->SetBinContent(12,354.0539);
   5->SetBinContent(13,334.8589);
   5->SetBinContent(14,311.5342);
   5->SetBinContent(15,287.9186);
   5->SetBinContent(16,266.8041);
   5->SetBinContent(17,246.2739);
   5->SetBinContent(18,216.0934);
   5->SetBinContent(19,199.5785);
   5->SetBinContent(20,182.075);
   5->SetBinContent(21,163.1176);
   5->SetBinContent(22,146.6027);
   5->SetBinContent(23,136.4844);
   5->SetBinContent(24,120.8417);
   5->SetBinContent(25,111.1304);
   5->SetBinContent(26,95.4296);
   5->SetBinContent(27,84.96237);
   5->SetBinContent(28,83.8575);
   5->SetBinContent(29,71.06422);
   5->SetBinContent(30,64.02792);
   5->SetBinContent(31,55.88622);
   5->SetBinContent(32,57.04932);
   5->SetBinContent(33,47.04665);
   5->SetBinContent(34,42.74318);
   5->SetBinContent(35,37.8);
   5->SetBinContent(36,37.45107);
   5->SetBinContent(37,33.7873);
   5->SetBinContent(38,29.42575);
   5->SetBinContent(39,26.6344);
   5->SetBinContent(40,24.7735);
   5->SetBinContent(41,22.21476);
   5->SetBinContent(42,20.81909);
   5->SetBinContent(43,19.59787);
   5->SetBinContent(44,17.62066);
   5->SetBinContent(45,15.41083);
   5->SetBinContent(46,14.88745);
   5->SetBinContent(47,13.14282);
   5->SetBinContent(48,12.1542);
   5->SetBinContent(49,11.16558);
   5->SetBinContent(50,10.40958);
   5->SetBinContent(51,122.9933);
   5->SetEntries(125094);
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
   6->SetBinContent(1,5552.64);
   6->SetBinContent(2,15485.89);
   6->SetBinContent(3,22416.45);
   6->SetBinContent(4,25847.96);
   6->SetBinContent(5,26092.63);
   6->SetBinContent(6,24208.06);
   6->SetBinContent(7,21178.19);
   6->SetBinContent(8,17842.26);
   6->SetBinContent(9,14829.93);
   6->SetBinContent(10,12278.87);
   6->SetBinContent(11,9793.585);
   6->SetBinContent(12,7835.349);
   6->SetBinContent(13,6617.261);
   6->SetBinContent(14,5336.909);
   6->SetBinContent(15,4437.155);
   6->SetBinContent(16,3494.431);
   6->SetBinContent(17,2988.429);
   6->SetBinContent(18,2376.315);
   6->SetBinContent(19,2042.197);
   6->SetBinContent(20,1635.348);
   6->SetBinContent(21,1461.735);
   6->SetBinContent(22,1155.721);
   6->SetBinContent(23,1027.704);
   6->SetBinContent(24,897.047);
   6->SetBinContent(25,759.3749);
   6->SetBinContent(26,647.1328);
   6->SetBinContent(27,587.5041);
   6->SetBinContent(28,516.4758);
   6->SetBinContent(29,402.4836);
   6->SetBinContent(30,371.7935);
   6->SetBinContent(31,301.6446);
   6->SetBinContent(32,294.6297);
   6->SetBinContent(33,252.5403);
   6->SetBinContent(34,240.264);
   6->SetBinContent(35,192.9126);
   6->SetBinContent(36,177.1288);
   6->SetBinContent(37,166.6063);
   6->SetBinContent(38,142.9306);
   6->SetBinContent(39,128.9006);
   6->SetBinContent(40,117.5012);
   6->SetBinContent(41,112.24);
   6->SetBinContent(42,82.42615);
   6->SetBinContent(43,97.33305);
   6->SetBinContent(44,76.28801);
   6->SetBinContent(45,62.25798);
   6->SetBinContent(46,47.35114);
   6->SetBinContent(47,44.72052);
   6->SetBinContent(48,53.48925);
   6->SetBinContent(49,41.21303);
   6->SetBinContent(50,40.33616);
   6->SetBinContent(51,427.9126);
   6->SetEntries(277350);
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
   7->SetBinContent(1,845.7173);
   7->SetBinContent(2,2431.634);
   7->SetBinContent(3,3848.015);
   7->SetBinContent(4,5020.503);
   7->SetBinContent(5,5944.537);
   7->SetBinContent(6,6570.37);
   7->SetBinContent(7,6986.855);
   7->SetBinContent(8,7178.654);
   7->SetBinContent(9,7240.146);
   7->SetBinContent(10,7175.752);
   7->SetBinContent(11,7009.103);
   7->SetBinContent(12,6743.376);
   7->SetBinContent(13,6413.67);
   7->SetBinContent(14,6125.833);
   7->SetBinContent(15,5801.793);
   7->SetBinContent(16,5476.371);
   7->SetBinContent(17,5152.054);
   7->SetBinContent(18,4811.155);
   7->SetBinContent(19,4507.98);
   7->SetBinContent(20,4189.743);
   7->SetBinContent(21,3940.46);
   7->SetBinContent(22,3628.994);
   7->SetBinContent(23,3403.202);
   7->SetBinContent(24,3160.276);
   7->SetBinContent(25,2952.171);
   7->SetBinContent(26,2722.234);
   7->SetBinContent(27,2540.246);
   7->SetBinContent(28,2373.044);
   7->SetBinContent(29,2215.376);
   7->SetBinContent(30,2063.512);
   7->SetBinContent(31,1878.358);
   7->SetBinContent(32,1754.241);
   7->SetBinContent(33,1662.016);
   7->SetBinContent(34,1514.29);
   7->SetBinContent(35,1429.934);
   7->SetBinContent(36,1297.672);
   7->SetBinContent(37,1217.734);
   7->SetBinContent(38,1126.889);
   7->SetBinContent(39,1057.583);
   7->SetBinContent(40,997.6522);
   7->SetBinContent(41,930.939);
   7->SetBinContent(42,854.8334);
   7->SetBinContent(43,810.2198);
   7->SetBinContent(44,746.4072);
   7->SetBinContent(45,703.8655);
   7->SetBinContent(46,653.0364);
   7->SetBinContent(47,610.909);
   7->SetBinContent(48,573.754);
   7->SetBinContent(49,522.6487);
   7->SetBinContent(50,511.737);
   7->SetBinContent(51,7780.167);
   7->SetEntries(1209695);
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
   8->SetBinContent(1,17577.74);
   8->SetBinContent(2,27843.32);
   8->SetBinContent(3,18800.89);
   8->SetBinContent(4,11300.33);
   8->SetBinContent(5,7252.115);
   8->SetBinContent(6,4739.303);
   8->SetBinContent(7,2996.039);
   8->SetBinContent(8,1908.693);
   8->SetBinContent(9,1348.854);
   8->SetBinContent(10,1087.41);
   8->SetBinContent(11,954.3743);
   8->SetBinContent(12,817.6387);
   8->SetBinContent(13,676.2836);
   8->SetBinContent(14,538.6241);
   8->SetBinContent(15,388.0302);
   8->SetBinContent(16,268.8485);
   8->SetBinContent(17,207.8726);
   8->SetBinContent(18,138.5821);
   8->SetBinContent(19,119.1807);
   8->SetBinContent(20,76.68211);
   8->SetBinContent(21,59.12836);
   8->SetBinContent(22,46.19402);
   8->SetBinContent(23,36.03132);
   8->SetBinContent(24,26.79251);
   8->SetBinContent(25,29.56415);
   8->SetBinContent(26,15.70596);
   8->SetBinContent(27,19.40148);
   8->SetBinContent(28,16.62984);
   8->SetBinContent(29,15.70596);
   8->SetBinContent(30,16.62984);
   8->SetBinContent(31,8.31492);
   8->SetBinContent(32,7.39104);
   8->SetBinContent(33,2.77164);
   8->SetBinContent(34,3.69552);
   8->SetBinContent(35,4.6194);
   8->SetBinContent(36,6.46716);
   8->SetBinContent(37,4.6194);
   8->SetBinContent(38,1.84776);
   8->SetBinContent(39,1.84776);
   8->SetBinContent(40,2.77164);
   8->SetBinContent(41,3.69552);
   8->SetBinContent(43,0.92388);
   8->SetBinContent(44,4.6194);
   8->SetBinContent(45,0.92388);
   8->SetBinContent(46,1.84776);
   8->SetBinContent(47,0.92388);
   8->SetBinContent(48,1.84776);
   8->SetBinContent(49,1.84776);
   8->SetBinContent(51,12.93432);
   8->SetEntries(107591);
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
   9->SetBinContent(1,744.6332);
   9->SetBinContent(2,1993.906);
   9->SetBinContent(3,3090.356);
   9->SetBinContent(4,3733.716);
   9->SetBinContent(5,4096.265);
   9->SetBinContent(6,4236.89);
   9->SetBinContent(7,4154.712);
   9->SetBinContent(8,3967.065);
   9->SetBinContent(9,3804.028);
   9->SetBinContent(10,3516.187);
   9->SetBinContent(11,3269.214);
   9->SetBinContent(12,3045.532);
   9->SetBinContent(13,2804.272);
   9->SetBinContent(14,2603.882);
   9->SetBinContent(15,2480.835);
   9->SetBinContent(16,2257.153);
   9->SetBinContent(17,2079.614);
   9->SetBinContent(18,1980.279);
   9->SetBinContent(19,1831.263);
   9->SetBinContent(20,1716.094);
   9->SetBinContent(21,1597.849);
   9->SetBinContent(22,1460.262);
   9->SetBinContent(23,1370.149);
   9->SetBinContent(24,1275.2);
   9->SetBinContent(25,1222.012);
   9->SetBinContent(26,1112.558);
   9->SetBinContent(27,1046.621);
   9->SetBinContent(28,995.6306);
   9->SetBinContent(29,917.3862);
   9->SetBinContent(30,853.6478);
   9->SetBinContent(31,837.8231);
   9->SetBinContent(32,742.8749);
   9->SetBinContent(33,698.0382);
   9->SetBinContent(34,701.5548);
   9->SetBinContent(35,637.3768);
   9->SetBinContent(36,589.9027);
   9->SetBinContent(37,534.9558);
   9->SetBinContent(38,524.406);
   9->SetBinContent(39,498.4711);
   9->SetBinContent(40,459.7885);
   9->SetBinContent(41,452.3157);
   9->SetBinContent(42,422.4246);
   9->SetBinContent(43,397.3688);
   9->SetBinContent(44,360.884);
   9->SetBinContent(45,356.4883);
   9->SetBinContent(46,327.4763);
   9->SetBinContent(47,326.1576);
   9->SetBinContent(48,299.7831);
   9->SetBinContent(49,284.8375);
   9->SetBinContent(50,276.046);
   9->SetBinContent(51,5110.083);
   9->SetEntries(191327);
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
   10->SetBinContent(1,8407.846);
   10->SetBinContent(2,24686.29);
   10->SetBinContent(3,39629.71);
   10->SetBinContent(4,52176.68);
   10->SetBinContent(5,61639.57);
   10->SetBinContent(6,67030.51);
   10->SetBinContent(7,68980.23);
   10->SetBinContent(8,68278.68);
   10->SetBinContent(9,65586.64);
   10->SetBinContent(10,61579.22);
   10->SetBinContent(11,57216.33);
   10->SetBinContent(12,52581.56);
   10->SetBinContent(13,47599.92);
   10->SetBinContent(14,43521.21);
   10->SetBinContent(15,39335.27);
   10->SetBinContent(16,35391.33);
   10->SetBinContent(17,32201.48);
   10->SetBinContent(18,28854.51);
   10->SetBinContent(19,26331.11);
   10->SetBinContent(20,23684.32);
   10->SetBinContent(21,21424.29);
   10->SetBinContent(22,19367.69);
   10->SetBinContent(23,17544.18);
   10->SetBinContent(24,15842.84);
   10->SetBinContent(25,14366.53);
   10->SetBinContent(26,13218.71);
   10->SetBinContent(27,11834.96);
   10->SetBinContent(28,10761.89);
   10->SetBinContent(29,9798.021);
   10->SetBinContent(30,8931.096);
   10->SetBinContent(31,8221.263);
   10->SetBinContent(32,7503.822);
   10->SetBinContent(33,6733.086);
   10->SetBinContent(34,6173.981);
   10->SetBinContent(35,5767.917);
   10->SetBinContent(36,5243.501);
   10->SetBinContent(37,4761.062);
   10->SetBinContent(38,4407.176);
   10->SetBinContent(39,4084.764);
   10->SetBinContent(40,3784.263);
   10->SetBinContent(41,3414.327);
   10->SetBinContent(42,3148.836);
   10->SetBinContent(43,2917.48);
   10->SetBinContent(44,2635.359);
   10->SetBinContent(45,2496.487);
   10->SetBinContent(46,2291.972);
   10->SetBinContent(47,2186.359);
   10->SetBinContent(48,1964.047);
   10->SetBinContent(49,1841.513);
   10->SetBinContent(50,1714.894);
   10->SetBinContent(51,23536.49);
   10->SetEntries(3949198);
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
   11->SetBinContent(1,401980.7);
   11->SetBinContent(2,620777.6);
   11->SetBinContent(3,402530.8);
   11->SetBinContent(4,246203.6);
   11->SetBinContent(5,157236.2);
   11->SetBinContent(6,102132);
   11->SetBinContent(7,58000.73);
   11->SetBinContent(8,35601.28);
   11->SetBinContent(9,26097.56);
   11->SetBinContent(10,19833.04);
   11->SetBinContent(11,18121.76);
   11->SetBinContent(12,13629.56);
   11->SetBinContent(13,12865.57);
   11->SetBinContent(14,9381.781);
   11->SetBinContent(15,7823.244);
   11->SetBinContent(16,4247.774);
   11->SetBinContent(17,3086.51);
   11->SetBinContent(18,1589.093);
   11->SetBinContent(19,1100.142);
   11->SetBinContent(20,1191.82);
   11->SetBinContent(21,733.4281);
   11->SetBinContent(22,519.5115);
   11->SetBinContent(23,702.8686);
   11->SetBinContent(24,366.714);
   11->SetBinContent(25,244.476);
   11->SetBinContent(26,427.833);
   11->SetBinContent(27,213.9165);
   11->SetBinContent(28,91.67849);
   11->SetBinContent(29,30.5595);
   11->SetBinContent(30,61.11899);
   11->SetBinContent(31,61.11899);
   11->SetBinContent(33,30.5595);
   11->SetBinContent(34,30.5595);
   11->SetBinContent(36,61.11899);
   11->SetBinContent(43,30.5595);
   11->SetEntries(70253);
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
   12->SetBinContent(1,155842.9);
   12->SetBinContent(2,246636.1);
   12->SetBinContent(3,205868.6);
   12->SetBinContent(4,143983.5);
   12->SetBinContent(5,96219.02);
   12->SetBinContent(6,64467.61);
   12->SetBinContent(7,45332.67);
   12->SetBinContent(8,32569.31);
   12->SetBinContent(9,23317.61);
   12->SetBinContent(10,16083.39);
   12->SetBinContent(11,11036.85);
   12->SetBinContent(12,6786.313);
   12->SetBinContent(13,4121.314);
   12->SetBinContent(14,2524.5);
   12->SetBinContent(15,1695.357);
   12->SetBinContent(16,1186.322);
   12->SetBinContent(17,871.3073);
   12->SetBinContent(18,704.4927);
   12->SetBinContent(19,576.339);
   12->SetBinContent(20,474.6752);
   12->SetBinContent(21,389.478);
   12->SetBinContent(22,327.191);
   12->SetBinContent(23,264.1881);
   12->SetBinContent(24,244.8574);
   12->SetBinContent(25,211.2074);
   12->SetBinContent(26,156.0787);
   12->SetBinContent(27,143.1914);
   12->SetBinContent(28,130.3042);
   12->SetBinContent(29,90.21058);
   12->SetBinContent(30,90.92654);
   12->SetBinContent(31,73.74355);
   12->SetBinContent(32,73.0276);
   12->SetBinContent(33,56.56057);
   12->SetBinContent(34,42.24142);
   12->SetBinContent(35,47.96908);
   12->SetBinContent(36,39.37759);
   12->SetBinContent(37,35.08184);
   12->SetBinContent(38,35.7978);
   12->SetBinContent(39,27.92228);
   12->SetBinContent(40,31.50205);
   12->SetBinContent(41,28.63823);
   12->SetBinContent(42,25.05845);
   12->SetBinContent(43,23.62654);
   12->SetBinContent(44,19.33081);
   12->SetBinContent(45,20.76272);
   12->SetBinContent(46,13.60316);
   12->SetBinContent(47,12.88721);
   12->SetBinContent(48,16.46698);
   12->SetBinContent(49,9.307426);
   12->SetBinContent(50,10.02338);
   12->SetBinContent(51,121.7127);
   12->SetEntries(1482311);
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
   13->SetBinContent(1,7255990);
   13->SetBinContent(2,7642454);
   13->SetBinContent(3,4198650);
   13->SetBinContent(4,2446684);
   13->SetBinContent(5,1449876);
   13->SetBinContent(6,841822.3);
   13->SetBinContent(7,470896.6);
   13->SetBinContent(8,257793.1);
   13->SetBinContent(9,145342.1);
   13->SetBinContent(10,89919.45);
   13->SetBinContent(11,56924.84);
   13->SetBinContent(12,42732.5);
   13->SetBinContent(13,33719.84);
   13->SetBinContent(14,27711.41);
   13->SetBinContent(15,21288.59);
   13->SetBinContent(16,12793.91);
   13->SetBinContent(17,8753.749);
   13->SetBinContent(18,5283.331);
   13->SetBinContent(19,4299.181);
   13->SetBinContent(20,1968.3);
   13->SetBinContent(21,2589.868);
   13->SetBinContent(22,2175.489);
   13->SetBinContent(23,1450.326);
   13->SetBinContent(24,1346.731);
   13->SetBinContent(25,1553.921);
   13->SetBinContent(26,1139.542);
   13->SetBinContent(27,776.9604);
   13->SetBinContent(28,517.9736);
   13->SetBinContent(29,414.3788);
   13->SetBinContent(30,258.9868);
   13->SetBinContent(31,207.1894);
   13->SetBinContent(32,258.9868);
   13->SetBinContent(33,155.392);
   13->SetBinContent(34,155.392);
   13->SetBinContent(36,103.5947);
   13->SetBinContent(37,51.79735);
   13->SetBinContent(38,51.79735);
   13->SetBinContent(40,103.5947);
   13->SetBinContent(41,51.79735);
   13->SetBinContent(46,51.79735);
   13->SetBinContent(48,51.79735);
   13->SetBinContent(51,51.79735);
   13->SetEntries(482881);
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
   14->SetBinContent(1,69407.32);
   14->SetBinContent(2,142219.9);
   14->SetBinContent(3,188627.1);
   14->SetBinContent(4,215637.1);
   14->SetBinContent(5,227671.4);
   14->SetBinContent(6,230057.9);
   14->SetBinContent(7,221501.6);
   14->SetBinContent(8,211955.6);
   14->SetBinContent(9,198043.6);
   14->SetBinContent(10,181708.1);
   14->SetBinContent(11,165576.1);
   14->SetBinContent(12,150822.4);
   14->SetBinContent(13,138131.4);
   14->SetBinContent(14,125028.3);
   14->SetBinContent(15,114696.5);
   14->SetBinContent(16,102170.7);
   14->SetBinContent(17,93894.23);
   14->SetBinContent(18,84932.67);
   14->SetBinContent(19,76748.77);
   14->SetBinContent(20,69157.36);
   14->SetBinContent(21,62613.32);
   14->SetBinContent(22,57199.78);
   14->SetBinContent(23,53433.44);
   14->SetBinContent(24,47038.99);
   14->SetBinContent(25,43235.64);
   14->SetBinContent(26,38062.7);
   14->SetBinContent(27,35591.91);
   14->SetBinContent(28,33195.15);
   14->SetBinContent(29,29882.25);
   14->SetBinContent(30,28373.86);
   14->SetBinContent(31,24801.85);
   14->SetBinContent(32,22451.36);
   14->SetBinContent(33,20813.42);
   14->SetBinContent(34,18879.35);
   14->SetBinContent(35,17296.94);
   14->SetBinContent(36,15686.68);
   14->SetBinContent(37,15547.86);
   14->SetBinContent(38,13132.33);
   14->SetBinContent(39,12373.43);
   14->SetBinContent(40,11373.91);
   14->SetBinContent(41,10272.58);
   14->SetBinContent(42,9550.694);
   14->SetBinContent(43,9069.44);
   14->SetBinContent(44,8754.774);
   14->SetBinContent(45,8282.775);
   14->SetBinContent(46,6792.813);
   14->SetBinContent(47,6848.34);
   14->SetBinContent(48,6163.515);
   14->SetBinContent(49,5950.664);
   14->SetBinContent(50,5265.838);
   14->SetBinContent(51,78526.27);
   14->SetEntries(406775);
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
   15->SetBinContent(1,2475950);
   15->SetBinContent(2,1894810);
   15->SetBinContent(3,467987.6);
   15->SetBinContent(4,117965.1);
   15->SetBinContent(5,47819.91);
   15->SetBinContent(6,28523.66);
   15->SetBinContent(7,13939.29);
   15->SetBinContent(8,7348.272);
   15->SetBinContent(9,5525.226);
   15->SetBinContent(10,4487.491);
   15->SetBinContent(11,3674.132);
   15->SetBinContent(12,3954.601);
   15->SetBinContent(13,3926.554);
   15->SetBinContent(14,2552.257);
   15->SetBinContent(15,1991.32);
   15->SetBinContent(16,1486.478);
   15->SetBinContent(17,1037.73);
   15->SetBinContent(18,448.7481);
   15->SetBinContent(19,560.9351);
   15->SetBinContent(20,224.374);
   15->SetBinContent(21,224.374);
   15->SetBinContent(22,308.5143);
   15->SetBinContent(23,308.5143);
   15->SetBinContent(24,168.2805);
   15->SetBinContent(25,196.3273);
   15->SetBinContent(26,196.3273);
   15->SetBinContent(27,28.04676);
   15->SetBinContent(28,84.14027);
   15->SetBinContent(29,84.14027);
   15->SetBinContent(30,84.14027);
   15->SetBinContent(31,28.04676);
   15->SetBinContent(32,56.09351);
   15->SetBinContent(33,28.04676);
   15->SetBinContent(34,84.14027);
   15->SetBinContent(35,28.04676);
   15->SetBinContent(40,56.09351);
   15->SetBinContent(44,28.04676);
   15->SetBinContent(49,56.09351);
   15->SetBinContent(51,84.14027);
   15->SetEntries(181481);
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
   16->SetBinContent(1,222346.6);
   16->SetBinContent(2,442241.6);
   16->SetBinContent(3,519814.7);
   16->SetBinContent(4,528718.4);
   16->SetBinContent(5,502697.8);
   16->SetBinContent(6,463353.5);
   16->SetBinContent(7,414138.5);
   16->SetBinContent(8,362437.2);
   16->SetBinContent(9,321775.3);
   16->SetBinContent(10,280178.5);
   16->SetBinContent(11,244903.5);
   16->SetBinContent(12,215419.1);
   16->SetBinContent(13,190248.5);
   16->SetBinContent(14,162974.1);
   16->SetBinContent(15,144136);
   16->SetBinContent(16,129697.6);
   16->SetBinContent(17,111181.2);
   16->SetBinContent(18,102092.9);
   16->SetBinContent(19,89692.05);
   16->SetBinContent(20,81219.53);
   16->SetBinContent(21,70899.62);
   16->SetBinContent(22,63265.04);
   16->SetBinContent(23,57476.54);
   16->SetBinContent(24,51751.77);
   16->SetBinContent(25,47524.57);
   16->SetBinContent(26,41141.3);
   16->SetBinContent(27,38379.81);
   16->SetBinContent(28,34598.7);
   16->SetBinContent(29,31083.43);
   16->SetBinContent(30,29862.23);
   16->SetBinContent(31,26591.53);
   16->SetBinContent(32,24244.7);
   16->SetBinContent(33,22014.68);
   16->SetBinContent(34,20220.05);
   16->SetBinContent(35,17554.64);
   16->SetBinContent(36,16206);
   16->SetBinContent(37,14315.62);
   16->SetBinContent(38,13242.98);
   16->SetBinContent(39,11278.26);
   16->SetBinContent(40,10810.98);
   16->SetBinContent(41,9164.859);
   16->SetBinContent(42,8697.574);
   16->SetBinContent(43,8230.289);
   16->SetBinContent(44,7635.588);
   16->SetBinContent(45,7136.466);
   16->SetBinContent(46,5936.448);
   16->SetBinContent(47,5416.086);
   16->SetBinContent(48,4832.006);
   16->SetBinContent(49,4184.209);
   16->SetBinContent(50,4216.068);
   16->SetBinContent(51,49553.2);
   16->SetEntries(591862);
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
   17->SetBinContent(1,2837451);
   17->SetBinContent(2,2367914);
   17->SetBinContent(3,1214099);
   17->SetBinContent(4,510753.9);
   17->SetBinContent(5,180277.8);
   17->SetBinContent(6,83749.62);
   17->SetBinContent(7,51089.11);
   17->SetBinContent(8,36553.06);
   17->SetBinContent(9,28038.21);
   17->SetBinContent(10,20496.5);
   17->SetBinContent(11,15509.23);
   17->SetBinContent(12,11008.53);
   17->SetBinContent(13,8210.792);
   17->SetBinContent(14,7176.838);
   17->SetBinContent(15,4622.365);
   17->SetBinContent(16,3953.336);
   17->SetBinContent(17,3405.951);
   17->SetBinContent(18,2615.284);
   17->SetBinContent(19,2615.284);
   17->SetBinContent(20,1520.514);
   17->SetBinContent(21,1763.796);
   17->SetBinContent(22,1338.052);
   17->SetBinContent(23,1520.514);
   17->SetBinContent(24,1155.591);
   17->SetBinContent(25,973.129);
   17->SetBinContent(26,851.4879);
   17->SetBinContent(27,790.6673);
   17->SetBinContent(28,547.3851);
   17->SetBinContent(29,243.2822);
   17->SetBinContent(30,790.6673);
   17->SetBinContent(31,182.4617);
   17->SetBinContent(32,425.7439);
   17->SetBinContent(33,364.9234);
   17->SetBinContent(34,121.6411);
   17->SetBinContent(35,547.3851);
   17->SetBinContent(36,304.1028);
   17->SetBinContent(37,243.2822);
   17->SetBinContent(38,304.1028);
   17->SetBinContent(39,243.2822);
   17->SetBinContent(40,121.6411);
   17->SetBinContent(41,243.2822);
   17->SetBinContent(42,182.4617);
   17->SetBinContent(43,121.6411);
   17->SetBinContent(45,182.4617);
   17->SetBinContent(46,121.6411);
   17->SetBinContent(47,60.82056);
   17->SetBinContent(48,60.82056);
   17->SetBinContent(49,243.2822);
   17->SetBinContent(50,121.6411);
   17->SetBinContent(51,790.6673);
   17->SetEntries(121759);
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
