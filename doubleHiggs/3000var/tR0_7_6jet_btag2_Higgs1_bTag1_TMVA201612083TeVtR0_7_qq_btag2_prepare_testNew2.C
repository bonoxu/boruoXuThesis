{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:43:01 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.408157,1.31746,6.517547);
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
   
   TH1F *THStack_stack_14 = new TH1F("THStack_stack_14","",50,0,1);
   THStack_stack_14->SetMinimum(0.02390394);
   THStack_stack_14->SetMaximum(529042.2);
   THStack_stack_14->SetDirectory(0);
   THStack_stack_14->SetStats(0);
   THStack_stack_14->SetLineWidth(2);
   THStack_stack_14->SetMarkerSize(1.2);
   THStack_stack_14->GetXaxis()->SetTitle("Highest B tag of H#rightarrowbb jets");
   THStack_stack_14->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_14->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_14->GetXaxis()->SetLabelColor(ci);
   THStack_stack_14->GetXaxis()->SetLabelFont(42);
   THStack_stack_14->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_14->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_14->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_14->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_14->GetXaxis()->SetTitleColor(ci);
   THStack_stack_14->GetXaxis()->SetTitleFont(42);
   THStack_stack_14->GetYaxis()->SetTitle("Number of events");
   THStack_stack_14->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_14->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_14->GetYaxis()->SetLabelColor(ci);
   THStack_stack_14->GetYaxis()->SetLabelFont(42);
   THStack_stack_14->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_14->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_14->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_14->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_14->GetYaxis()->SetTitleColor(ci);
   THStack_stack_14->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_14->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_14->GetZaxis()->SetLabelColor(ci);
   THStack_stack_14->GetZaxis()->SetLabelFont(42);
   THStack_stack_14->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_14->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_14->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_14->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_14->GetZaxis()->SetTitleColor(ci);
   THStack_stack_14->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_14);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(11,0.7424253);
   0->SetBinContent(12,0.7721224);
   0->SetBinContent(13,0.603839);
   0->SetBinContent(14,0.584041);
   0->SetBinContent(15,0.7424253);
   0->SetBinContent(16,0.5048488);
   0->SetBinContent(17,0.3860609);
   0->SetBinContent(18,0.267273);
   0->SetBinContent(19,0.3959599);
   0->SetBinContent(20,0.277172);
   0->SetBinContent(21,0.316768);
   0->SetBinContent(22,0.247475);
   0->SetBinContent(23,0.178182);
   0->SetBinContent(24,0.19798);
   0->SetBinContent(25,0.237576);
   0->SetBinContent(26,0.168283);
   0->SetBinContent(27,0.188081);
   0->SetBinContent(28,0.148485);
   0->SetBinContent(29,0.217778);
   0->SetBinContent(30,0.118788);
   0->SetBinContent(31,0.06929299);
   0->SetBinContent(32,0.19798);
   0->SetBinContent(33,0.19798);
   0->SetBinContent(34,0.188081);
   0->SetBinContent(35,0.118788);
   0->SetBinContent(36,0.7820214);
   0->SetBinContent(37,0.7820214);
   0->SetBinContent(38,0.6830312);
   0->SetBinContent(39,0.8612136);
   0->SetBinContent(40,0.6533341);
   0->SetBinContent(41,1.049295);
   0->SetBinContent(42,1.009699);
   0->SetBinContent(43,1.168083);
   0->SetBinContent(44,1.267073);
   0->SetBinContent(45,1.395761);
   0->SetBinContent(46,2.0095);
   0->SetBinContent(47,2.969693);
   0->SetBinContent(48,4.434741);
   0->SetBinContent(49,8.800261);
   0->SetBinContent(50,54.13832);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,1);
   1->SetBinContent(11,0.9007162);
   1->SetBinContent(12,0.9205121);
   1->SetBinContent(13,0.7324511);
   1->SetBinContent(14,0.747298);
   1->SetBinContent(15,0.6730634);
   1->SetBinContent(16,0.6384206);
   1->SetBinContent(17,0.6136757);
   1->SetBinContent(18,0.5097473);
   1->SetBinContent(19,0.6285226);
   1->SetBinContent(20,0.559237);
   1->SetBinContent(21,0.564186);
   1->SetBinContent(22,0.569135);
   1->SetBinContent(23,0.4899513);
   1->SetBinContent(24,0.554288);
   1->SetBinContent(25,0.4404612);
   1->SetBinContent(26,0.4800533);
   1->SetBinContent(27,0.4850023);
   1->SetBinContent(28,0.4899513);
   1->SetBinContent(29,0.3909712);
   1->SetBinContent(30,0.4701553);
   1->SetBinContent(31,0.5097473);
   1->SetBinContent(32,0.3959202);
   1->SetBinContent(33,0.4602573);
   1->SetBinContent(34,0.3959202);
   1->SetBinContent(35,0.4008692);
   1->SetBinContent(36,0.564186);
   1->SetBinContent(37,0.6631655);
   1->SetBinContent(38,0.6384206);
   1->SetBinContent(39,0.8809203);
   1->SetBinContent(40,0.7720429);
   1->SetBinContent(41,0.6780124);
   1->SetBinContent(42,0.7670939);
   1->SetBinContent(43,0.8957672);
   1->SetBinContent(44,1.014543);
   1->SetBinContent(45,1.07393);
   1->SetBinContent(46,1.707399);
   1->SetBinContent(47,2.47945);
   1->SetBinContent(48,3.563302);
   1->SetBinContent(49,6.067543);
   1->SetBinContent(50,30.84831);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,1);
   2->SetBinContent(11,2.103319);
   2->SetBinContent(12,2.964461);
   2->SetBinContent(13,1.746991);
   2->SetBinContent(14,1.70245);
   2->SetBinContent(15,1.915256);
   2->SetBinContent(16,1.257042);
   2->SetBinContent(17,0.8462775);
   2->SetBinContent(18,0.8611244);
   2->SetBinContent(19,0.8759713);
   2->SetBinContent(20,0.7720429);
   2->SetBinContent(21,0.6186247);
   2->SetBinContent(22,0.564186);
   2->SetBinContent(23,0.554288);
   2->SetBinContent(24,0.5245942);
   2->SetBinContent(25,0.5295432);
   2->SetBinContent(26,0.4553083);
   2->SetBinContent(27,0.4701553);
   2->SetBinContent(28,0.4701553);
   2->SetBinContent(29,0.3414812);
   2->SetBinContent(30,0.2820931);
   2->SetBinContent(31,0.2622971);
   2->SetBinContent(32,0.3216852);
   2->SetBinContent(33,0.3464302);
   2->SetBinContent(34,0.3365322);
   2->SetBinContent(35,0.2969401);
   2->SetBinContent(36,1.276838);
   2->SetBinContent(37,1.301583);
   2->SetBinContent(38,1.346124);
   2->SetBinContent(39,1.370869);
   2->SetBinContent(40,1.435205);
   2->SetBinContent(41,1.271889);
   2->SetBinContent(42,1.494593);
   2->SetBinContent(43,1.826174);
   2->SetBinContent(44,2.014235);
   2->SetBinContent(45,2.618025);
   2->SetBinContent(46,3.063443);
   2->SetBinContent(47,4.176989);
   2->SetBinContent(48,6.339743);
   2->SetBinContent(49,12.12484);
   2->SetBinContent(50,71.64317);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,1);
   3->SetBinContent(11,6.381577);
   3->SetBinContent(12,9.724297);
   3->SetBinContent(13,5.84134);
   3->SetBinContent(14,6.212753);
   3->SetBinContent(15,6.516636);
   3->SetBinContent(16,4.963454);
   3->SetBinContent(17,4.018038);
   3->SetBinContent(18,3.342737);
   3->SetBinContent(19,3.308972);
   3->SetBinContent(20,3.342737);
   3->SetBinContent(21,2.329785);
   3->SetBinContent(22,3.275207);
   3->SetBinContent(23,3.038851);
   3->SetBinContent(24,3.038851);
   3->SetBinContent(25,3.072616);
   3->SetBinContent(26,2.093429);
   3->SetBinContent(27,2.836261);
   3->SetBinContent(28,2.870026);
   3->SetBinContent(29,2.025899);
   3->SetBinContent(30,2.228489);
   3->SetBinContent(31,2.464845);
   3->SetBinContent(32,2.262254);
   3->SetBinContent(33,2.43108);
   3->SetBinContent(34,1.958369);
   3->SetBinContent(35,2.29602);
   3->SetBinContent(36,4.65957);
   3->SetBinContent(37,5.064748);
   3->SetBinContent(38,4.760865);
   3->SetBinContent(39,5.199808);
   3->SetBinContent(40,5.503691);
   3->SetBinContent(41,6.212753);
   3->SetBinContent(42,6.921814);
   3->SetBinContent(43,7.394522);
   3->SetBinContent(44,8.846411);
   3->SetBinContent(45,11.48007);
   3->SetBinContent(46,12.86443);
   3->SetBinContent(47,17.55778);
   3->SetBinContent(48,29.24075);
   3->SetBinContent(49,54.59758);
   3->SetBinContent(50,295.4099);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,1);
   4->SetBinContent(11,13.4694);
   4->SetBinContent(12,15.69971);
   4->SetBinContent(13,10.99856);
   4->SetBinContent(14,11.28281);
   4->SetBinContent(15,12.17931);
   4->SetBinContent(16,8.112264);
   4->SetBinContent(17,6.559788);
   4->SetBinContent(18,6.013142);
   4->SetBinContent(19,5.204106);
   4->SetBinContent(20,4.569996);
   4->SetBinContent(21,4.679326);
   4->SetBinContent(22,4.220143);
   4->SetBinContent(23,3.279904);
   4->SetBinContent(24,3.607895);
   4->SetBinContent(25,2.820716);
   4->SetBinContent(26,2.645787);
   4->SetBinContent(27,2.776984);
   4->SetBinContent(28,2.602055);
   4->SetBinContent(29,2.186599);
   4->SetBinContent(30,2.208466);
   4->SetBinContent(31,2.448992);
   4->SetBinContent(32,1.858609);
   4->SetBinContent(33,1.508754);
   4->SetBinContent(34,1.661815);
   4->SetBinContent(35,1.858609);
   4->SetBinContent(36,6.035008);
   4->SetBinContent(37,6.362996);
   4->SetBinContent(38,5.947545);
   4->SetBinContent(39,5.553959);
   4->SetBinContent(40,6.100605);
   4->SetBinContent(41,6.778447);
   4->SetBinContent(42,7.456288);
   4->SetBinContent(43,7.631215);
   4->SetBinContent(44,9.18369);
   4->SetBinContent(45,9.948995);
   4->SetBinContent(46,12.87902);
   4->SetBinContent(47,17.55831);
   4->SetBinContent(48,27.57287);
   4->SetBinContent(49,48.30169);
   4->SetBinContent(50,280.2715);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,1);
   5->SetBinContent(11,32.04264);
   5->SetBinContent(12,39.95173);
   5->SetBinContent(13,22.27291);
   5->SetBinContent(14,22.79629);
   5->SetBinContent(15,28.08823);
   5->SetBinContent(16,14.59668);
   5->SetBinContent(17,9.537269);
   5->SetBinContent(18,8.199724);
   5->SetBinContent(19,8.606803);
   5->SetBinContent(20,8.490495);
   5->SetBinContent(21,7.618184);
   5->SetBinContent(22,6.629564);
   5->SetBinContent(23,6.222485);
   5->SetBinContent(24,6.978488);
   5->SetBinContent(25,5.58279);
   5->SetBinContent(26,4.652324);
   5->SetBinContent(27,4.826787);
   5->SetBinContent(28,4.943095);
   5->SetBinContent(29,4.884941);
   5->SetBinContent(30,4.187091);
   5->SetBinContent(31,4.3034);
   5->SetBinContent(32,4.128937);
   5->SetBinContent(33,4.361554);
   5->SetBinContent(34,4.012629);
   5->SetBinContent(35,5.001249);
   5->SetBinContent(36,16.98098);
   5->SetBinContent(37,17.85328);
   5->SetBinContent(38,18.95819);
   5->SetBinContent(39,18.95819);
   5->SetBinContent(40,20.58647);
   5->SetBinContent(41,21.86584);
   5->SetBinContent(42,22.27291);
   5->SetBinContent(43,26.57625);
   5->SetBinContent(44,29.94913);
   5->SetBinContent(45,36.40427);
   5->SetBinContent(46,46.23248);
   5->SetBinContent(47,64.31868);
   5->SetBinContent(48,106.1876);
   5->SetBinContent(49,198.6481);
   5->SetBinContent(50,1282.062);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,1);
   6->SetBinContent(11,1242.812);
   6->SetBinContent(12,1653.283);
   6->SetBinContent(13,920.0485);
   6->SetBinContent(14,1046.347);
   6->SetBinContent(15,1063.889);
   6->SetBinContent(16,658.6801);
   6->SetBinContent(17,414.8532);
   6->SetBinContent(18,386.7868);
   6->SetBinContent(19,371.8765);
   6->SetBinContent(20,296.4481);
   6->SetBinContent(21,277.1524);
   6->SetBinContent(22,257.8568);
   6->SetBinContent(23,243.8238);
   6->SetBinContent(24,241.1926);
   6->SetBinContent(25,227.1596);
   6->SetBinContent(26,185.9378);
   6->SetBinContent(27,171.0278);
   6->SetBinContent(28,176.2901);
   6->SetBinContent(29,188.569);
   6->SetBinContent(30,160.5031);
   6->SetBinContent(31,171.9048);
   6->SetBinContent(32,188.569);
   6->SetBinContent(33,164.0113);
   6->SetBinContent(34,142.9619);
   6->SetBinContent(35,136.8224);
   6->SetBinContent(36,549.0457);
   6->SetBinContent(37,515.7169);
   6->SetBinContent(38,535.0125);
   6->SetBinContent(39,610.441);
   6->SetBinContent(40,596.4078);
   6->SetBinContent(41,627.9825);
   6->SetBinContent(42,645.524);
   6->SetBinContent(43,766.5604);
   6->SetBinContent(44,854.2679);
   6->SetBinContent(45,1032.314);
   6->SetBinContent(46,1382.267);
   6->SetBinContent(47,1925.177);
   6->SetBinContent(48,2945.09);
   6->SetBinContent(49,5606.643);
   6->SetBinContent(50,33539.32);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,1);
   7->SetBinContent(11,231.2101);
   7->SetBinContent(12,280.7961);
   7->SetBinContent(13,176.5136);
   7->SetBinContent(14,193.3645);
   7->SetBinContent(15,204.4143);
   7->SetBinContent(16,116.8452);
   7->SetBinContent(17,81.21159);
   7->SetBinContent(18,72.51035);
   7->SetBinContent(19,61.87549);
   7->SetBinContent(20,59.52754);
   7->SetBinContent(21,52.48368);
   7->SetBinContent(22,52.20745);
   7->SetBinContent(23,45.43982);
   7->SetBinContent(24,48.75457);
   7->SetBinContent(25,44.74924);
   7->SetBinContent(26,35.35743);
   7->SetBinContent(27,38.67218);
   7->SetBinContent(28,35.35743);
   7->SetBinContent(29,30.38529);
   7->SetBinContent(30,32.3189);
   7->SetBinContent(31,33.00947);
   7->SetBinContent(32,28.45168);
   7->SetBinContent(33,31.76644);
   7->SetBinContent(34,30.5234);
   7->SetBinContent(35,27.62299);
   7->SetBinContent(36,279.8292);
   7->SetBinContent(37,261.7352);
   7->SetBinContent(38,237.9781);
   7->SetBinContent(39,230.6576);
   7->SetBinContent(40,219.4697);
   7->SetBinContent(41,230.6576);
   7->SetBinContent(42,229.4145);
   7->SetBinContent(43,249.0279);
   7->SetBinContent(44,256.6246);
   7->SetBinContent(45,287.9785);
   7->SetBinContent(46,357.1779);
   7->SetBinContent(47,461.046);
   7->SetBinContent(48,629.8318);
   7->SetBinContent(49,1070.008);
   7->SetBinContent(50,5797.924);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,1);
   8->SetBinContent(11,60.05224);
   8->SetBinContent(12,86.8448);
   8->SetBinContent(13,24.94475);
   8->SetBinContent(14,39.72684);
   8->SetBinContent(15,55.43283);
   8->SetBinContent(16,24.02087);
   8->SetBinContent(17,12.01044);
   8->SetBinContent(18,10.16268);
   8->SetBinContent(19,10.16268);
   8->SetBinContent(20,2.77164);
   8->SetBinContent(21,4.6194);
   8->SetBinContent(22,14.78208);
   8->SetBinContent(23,8.31492);
   8->SetBinContent(24,3.69552);
   8->SetBinContent(25,3.69552);
   8->SetBinContent(26,5.54328);
   8->SetBinContent(27,4.6194);
   8->SetBinContent(28,5.54328);
   8->SetBinContent(29,5.54328);
   8->SetBinContent(30,3.69552);
   8->SetBinContent(31,1.84776);
   8->SetBinContent(32,6.46716);
   8->SetBinContent(33,0.92388);
   8->SetBinContent(34,5.54328);
   8->SetBinContent(35,2.77164);
   8->SetBinContent(36,134.8866);
   8->SetBinContent(37,126.5717);
   8->SetBinContent(38,116.409);
   8->SetBinContent(39,99.77914);
   8->SetBinContent(40,118.2568);
   8->SetBinContent(41,111.7896);
   8->SetBinContent(42,88.69257);
   8->SetBinContent(43,87.76868);
   8->SetBinContent(44,90.54033);
   8->SetBinContent(45,84.99704);
   8->SetBinContent(46,106.2463);
   8->SetBinContent(47,116.409);
   8->SetBinContent(48,119.1807);
   8->SetBinContent(49,116.409);
   8->SetBinContent(50,138.5821);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,1);
   9->SetBinContent(11,250.5508);
   9->SetBinContent(12,529.2413);
   9->SetBinContent(13,207.9135);
   9->SetBinContent(14,229.0124);
   9->SetBinContent(15,262.8588);
   9->SetBinContent(16,176.7048);
   9->SetBinContent(17,120.441);
   9->SetBinContent(18,117.8036);
   9->SetBinContent(19,117.8036);
   9->SetBinContent(20,111.6496);
   9->SetBinContent(21,100.6604);
   9->SetBinContent(22,87.91296);
   9->SetBinContent(23,84.83599);
   9->SetBinContent(24,90.98994);
   9->SetBinContent(25,87.4734);
   9->SetBinContent(26,83.51729);
   9->SetBinContent(27,90.1108);
   9->SetBinContent(28,84.83599);
   9->SetBinContent(29,80.44032);
   9->SetBinContent(30,83.95686);
   9->SetBinContent(31,76.04464);
   9->SetBinContent(32,84.83599);
   9->SetBinContent(33,74.28637);
   9->SetBinContent(34,75.60507);
   9->SetBinContent(35,82.63815);
   9->SetBinContent(36,189.8916);
   9->SetBinContent(37,199.5619);
   9->SetBinContent(38,198.2432);
   9->SetBinContent(39,190.7707);
   9->SetBinContent(40,197.8036);
   9->SetBinContent(41,218.0234);
   9->SetBinContent(42,231.2102);
   9->SetBinContent(43,268.1337);
   9->SetBinContent(44,300.6622);
   9->SetBinContent(45,312.0912);
   9->SetBinContent(46,412.7539);
   9->SetBinContent(47,527.9226);
   9->SetBinContent(48,818.0422);
   9->SetBinContent(49,1392.567);
   9->SetBinContent(50,6616.968);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,1);
   10->SetBinContent(11,2696.792);
   10->SetBinContent(12,3343.389);
   10->SetBinContent(13,2042.334);
   10->SetBinContent(14,2185.049);
   10->SetBinContent(15,2448.347);
   10->SetBinContent(16,1481.603);
   10->SetBinContent(17,1019.858);
   10->SetBinContent(18,900.7828);
   10->SetBinContent(19,814.3149);
   10->SetBinContent(20,778.5049);
   10->SetBinContent(21,706.5939);
   10->SetBinContent(22,680.9738);
   10->SetBinContent(23,614.3033);
   10->SetBinContent(24,564.8099);
   10->SetBinContent(25,531.9113);
   10->SetBinContent(26,526.0886);
   10->SetBinContent(27,493.19);
   10->SetBinContent(28,461.1648);
   10->SetBinContent(29,445.7345);
   10->SetBinContent(30,418.0764);
   10->SetBinContent(31,425.646);
   10->SetBinContent(32,427.3929);
   10->SetBinContent(33,416.3296);
   10->SetBinContent(34,422.1524);
   10->SetBinContent(35,373.5324);
   10->SetBinContent(36,2154.758);
   10->SetBinContent(37,2033.017);
   10->SetBinContent(38,1999.536);
   10->SetBinContent(39,1964.6);
   10->SetBinContent(40,1965.765);
   10->SetBinContent(41,2032.435);
   10->SetBinContent(42,2147.767);
   10->SetBinContent(43,2320.193);
   10->SetBinContent(44,2623.103);
   10->SetBinContent(45,3026.789);
   10->SetBinContent(46,3868.239);
   10->SetBinContent(47,5088.367);
   10->SetBinContent(48,7542.502);
   10->SetBinContent(49,13702.14);
   10->SetBinContent(50,74181.28);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,1);
   11->SetBinContent(11,854.5831);
   11->SetBinContent(12,2044.897);
   11->SetBinContent(13,915.6248);
   11->SetBinContent(14,854.5831);
   11->SetBinContent(15,1129.271);
   11->SetBinContent(16,579.8958);
   11->SetBinContent(17,427.2917);
   11->SetBinContent(18,183.125);
   11->SetBinContent(19,61.04166);
   11->SetBinContent(20,244.1666);
   11->SetBinContent(21,152.6042);
   11->SetBinContent(22,91.5625);
   11->SetBinContent(23,91.5625);
   11->SetBinContent(24,61.04166);
   11->SetBinContent(25,91.5625);
   11->SetBinContent(26,91.5625);
   11->SetBinContent(27,122.0833);
   11->SetBinContent(28,91.5625);
   11->SetBinContent(29,30.52083);
   11->SetBinContent(30,91.5625);
   11->SetBinContent(31,30.52083);
   11->SetBinContent(32,61.04166);
   11->SetBinContent(33,91.5625);
   11->SetBinContent(34,30.52083);
   11->SetBinContent(35,30.52083);
   11->SetBinContent(36,2624.791);
   11->SetBinContent(37,2136.459);
   11->SetBinContent(38,1220.833);
   11->SetBinContent(39,1220.833);
   11->SetBinContent(40,1495.521);
   11->SetBinContent(41,1251.354);
   11->SetBinContent(42,1556.563);
   11->SetBinContent(43,1342.917);
   11->SetBinContent(44,1129.271);
   11->SetBinContent(45,1648.125);
   11->SetBinContent(46,1190.312);
   11->SetBinContent(47,1617.605);
   11->SetBinContent(48,1587.084);
   11->SetBinContent(49,1800.73);
   11->SetBinContent(50,1861.772);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,1);
   12->SetBinContent(11,415.9679);
   12->SetBinContent(12,625.739);
   12->SetBinContent(13,307.1447);
   12->SetBinContent(14,380.8867);
   12->SetBinContent(15,389.478);
   12->SetBinContent(16,199.0361);
   12->SetBinContent(17,115.9851);
   12->SetBinContent(18,131.0202);
   12->SetBinContent(19,101.6659);
   12->SetBinContent(20,74.45951);
   12->SetBinContent(21,63.00419);
   12->SetBinContent(22,62.28823);
   12->SetBinContent(23,52.26482);
   12->SetBinContent(24,67.29993);
   12->SetBinContent(25,45.10525);
   12->SetBinContent(26,50.83291);
   12->SetBinContent(27,46.53716);
   12->SetBinContent(28,38.66163);
   12->SetBinContent(29,33.64993);
   12->SetBinContent(30,34.36588);
   12->SetBinContent(31,30.7861);
   12->SetBinContent(32,34.36588);
   12->SetBinContent(33,32.21801);
   12->SetBinContent(34,28.63823);
   12->SetBinContent(35,16.46698);
   12->SetBinContent(36,678.0028);
   12->SetBinContent(37,675.139);
   12->SetBinContent(38,543.4056);
   12->SetBinContent(39,557.7245);
   12->SetBinContent(40,479.6868);
   12->SetBinContent(41,486.1302);
   12->SetBinContent(42,448.9012);
   12->SetBinContent(43,488.2781);
   12->SetBinContent(44,451.765);
   12->SetBinContent(45,530.5187);
   12->SetBinContent(46,567.0317);
   12->SetBinContent(47,665.8318);
   12->SetBinContent(48,806.1565);
   12->SetBinContent(49,1169.139);
   12->SetBinContent(50,3655.165);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,1);
   13->SetBinContent(11,12274.59);
   13->SetBinContent(12,16487.46);
   13->SetBinContent(13,8789.874);
   13->SetBinContent(14,9986.121);
   13->SetBinContent(15,12794.7);
   13->SetBinContent(16,6553.397);
   13->SetBinContent(17,3692.781);
   13->SetBinContent(18,3224.682);
   13->SetBinContent(19,2548.539);
   13->SetBinContent(20,1768.375);
   13->SetBinContent(21,2028.429);
   13->SetBinContent(22,1612.342);
   13->SetBinContent(23,1196.254);
   13->SetBinContent(24,1196.254);
   13->SetBinContent(25,676.1434);
   13->SetBinContent(26,1092.232);
   13->SetBinContent(27,832.1765);
   13->SetBinContent(28,364.0772);
   13->SetBinContent(29,624.1323);
   13->SetBinContent(30,572.1213);
   13->SetBinContent(31,572.1213);
   13->SetBinContent(32,416.0882);
   13->SetBinContent(33,416.0882);
   13->SetBinContent(34,572.1213);
   13->SetBinContent(35,312.0662);
   13->SetBinContent(36,28294.12);
   13->SetBinContent(37,24601.29);
   13->SetBinContent(38,19400.12);
   13->SetBinContent(39,19608.17);
   13->SetBinContent(40,20076.27);
   13->SetBinContent(41,18099.83);
   13->SetBinContent(42,16383.44);
   13->SetBinContent(43,15135.18);
   13->SetBinContent(44,15863.33);
   13->SetBinContent(45,15811.32);
   13->SetBinContent(46,14667.09);
   13->SetBinContent(47,18515.92);
   13->SetBinContent(48,16695.51);
   13->SetBinContent(49,19296.1);
   13->SetBinContent(50,24549.28);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,1);
   14->SetBinContent(11,1601.038);
   14->SetBinContent(12,2637.552);
   14->SetBinContent(13,1332.657);
   14->SetBinContent(14,1582.529);
   14->SetBinContent(15,1980.473);
   14->SetBinContent(16,1018.003);
   14->SetBinContent(17,601.5475);
   14->SetBinContent(18,536.7654);
   14->SetBinContent(19,592.2929);
   14->SetBinContent(20,416.456);
   14->SetBinContent(21,388.6922);
   14->SetBinContent(22,370.1831);
   14->SetBinContent(23,379.4377);
   14->SetBinContent(24,453.4743);
   14->SetBinContent(25,434.9651);
   14->SetBinContent(26,453.4743);
   14->SetBinContent(27,388.6922);
   14->SetBinContent(28,333.1648);
   14->SetBinContent(29,453.4743);
   14->SetBinContent(30,333.1648);
   14->SetBinContent(31,277.6373);
   14->SetBinContent(32,351.6739);
   14->SetBinContent(33,342.4193);
   14->SetBinContent(34,259.1281);
   14->SetBinContent(35,231.3644);
   14->SetBinContent(36,1129.058);
   14->SetBinContent(37,1082.785);
   14->SetBinContent(38,999.4943);
   14->SetBinContent(39,953.2214);
   14->SetBinContent(40,980.9852);
   14->SetBinContent(41,1175.33);
   14->SetBinContent(42,1147.567);
   14->SetBinContent(43,1277.13);
   14->SetBinContent(44,1564.02);
   14->SetBinContent(45,1582.529);
   14->SetBinContent(46,2276.621);
   14->SetBinContent(47,2887.427);
   14->SetBinContent(48,4460.706);
   14->SetBinContent(49,7412.858);
   14->SetBinContent(50,36313.71);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,1);
   15->SetBinContent(11,336.5611);
   15->SetBinContent(12,729.2156);
   15->SetBinContent(13,308.5143);
   15->SetBinContent(14,420.7013);
   15->SetBinContent(15,420.7013);
   15->SetBinContent(16,84.14027);
   15->SetBinContent(17,168.2805);
   15->SetBinContent(18,112.187);
   15->SetBinContent(19,140.2338);
   15->SetBinContent(20,28.04676);
   15->SetBinContent(21,140.2338);
   15->SetBinContent(22,140.2338);
   15->SetBinContent(23,224.374);
   15->SetBinContent(24,196.3273);
   15->SetBinContent(25,140.2338);
   15->SetBinContent(26,84.14027);
   15->SetBinContent(27,140.2338);
   15->SetBinContent(28,56.09351);
   15->SetBinContent(29,56.09351);
   15->SetBinContent(30,112.187);
   15->SetBinContent(32,28.04676);
   15->SetBinContent(33,56.09351);
   15->SetBinContent(34,252.4208);
   15->SetBinContent(35,196.3273);
   15->SetBinContent(36,336.5611);
   15->SetBinContent(37,532.8884);
   15->SetBinContent(38,476.7948);
   15->SetBinContent(39,476.7948);
   15->SetBinContent(40,364.6078);
   15->SetBinContent(41,252.4208);
   15->SetBinContent(42,336.5611);
   15->SetBinContent(43,560.9351);
   15->SetBinContent(44,532.8884);
   15->SetBinContent(45,673.1221);
   15->SetBinContent(46,588.9819);
   15->SetBinContent(47,841.4026);
   15->SetBinContent(48,1458.431);
   15->SetBinContent(49,2383.976);
   15->SetBinContent(50,13125.93);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,1);
   16->SetBinContent(11,371.6924);
   16->SetBinContent(12,1178.797);
   16->SetBinContent(13,371.6924);
   16->SetBinContent(14,456.6507);
   16->SetBinContent(15,785.8647);
   16->SetBinContent(16,350.4529);
   16->SetBinContent(17,116.8177);
   16->SetBinContent(18,106.1979);
   16->SetBinContent(19,74.33852);
   16->SetBinContent(20,21.23957);
   16->SetBinContent(21,42.47915);
   16->SetBinContent(22,10.61979);
   16->SetBinContent(23,21.23957);
   16->SetBinContent(24,21.23957);
   16->SetBinContent(25,21.23957);
   16->SetBinContent(26,42.47915);
   16->SetBinContent(27,74.33852);
   16->SetBinContent(28,31.85936);
   16->SetBinContent(29,10.61979);
   16->SetBinContent(30,31.85936);
   16->SetBinContent(31,10.61979);
   16->SetBinContent(32,31.85936);
   16->SetBinContent(33,10.61979);
   16->SetBinContent(36,838.9637);
   16->SetBinContent(37,775.2449);
   16->SetBinContent(38,764.6251);
   16->SetBinContent(39,541.609);
   16->SetBinContent(40,552.2288);
   16->SetBinContent(41,499.1298);
   16->SetBinContent(42,371.6924);
   16->SetBinContent(43,350.4529);
   16->SetBinContent(44,414.1716);
   16->SetBinContent(45,382.3122);
   16->SetBinContent(46,414.1716);
   16->SetBinContent(47,573.4684);
   16->SetBinContent(48,690.2864);
   16->SetBinContent(49,732.7656);
   16->SetBinContent(50,934.5421);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,1);
   17->SetBinContent(11,1702.976);
   17->SetBinContent(12,3345.131);
   17->SetBinContent(13,1338.052);
   17->SetBinContent(14,1094.77);
   17->SetBinContent(15,2007.078);
   17->SetBinContent(16,912.3084);
   17->SetBinContent(17,547.3851);
   17->SetBinContent(18,486.5645);
   17->SetBinContent(19,304.1028);
   17->SetBinContent(20,790.6673);
   17->SetBinContent(21,425.7439);
   17->SetBinContent(22,243.2822);
   17->SetBinContent(23,425.7439);
   17->SetBinContent(24,669.0262);
   17->SetBinContent(25,425.7439);
   17->SetBinContent(26,182.4617);
   17->SetBinContent(27,304.1028);
   17->SetBinContent(28,729.8467);
   17->SetBinContent(29,182.4617);
   17->SetBinContent(30,243.2822);
   17->SetBinContent(31,243.2822);
   17->SetBinContent(32,304.1028);
   17->SetBinContent(33,121.6411);
   17->SetBinContent(34,425.7439);
   17->SetBinContent(35,486.5645);
   17->SetBinContent(36,1763.796);
   17->SetBinContent(37,1094.77);
   17->SetBinContent(38,1277.232);
   17->SetBinContent(39,1277.232);
   17->SetBinContent(40,912.3084);
   17->SetBinContent(41,2067.899);
   17->SetBinContent(42,1398.873);
   17->SetBinContent(43,1398.873);
   17->SetBinContent(44,1581.335);
   17->SetBinContent(45,2311.181);
   17->SetBinContent(46,2372.002);
   17->SetBinContent(47,3284.31);
   17->SetBinContent(48,4135.798);
   17->SetBinContent(49,7906.688);
   17->SetBinContent(50,29984.46);
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
