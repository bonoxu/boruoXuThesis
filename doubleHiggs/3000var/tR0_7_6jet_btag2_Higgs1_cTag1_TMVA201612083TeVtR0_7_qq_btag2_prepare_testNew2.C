{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:43:48 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.229547,1.31746,5.87069);
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
   
   TH1F *THStack_stack_18 = new TH1F("THStack_stack_18","",50,0,1);
   THStack_stack_18->SetMinimum(0.02561508);
   THStack_stack_18->SetMaximum(138890.1);
   THStack_stack_18->SetDirectory(0);
   THStack_stack_18->SetStats(0);
   THStack_stack_18->SetLineWidth(2);
   THStack_stack_18->SetMarkerSize(1.2);
   THStack_stack_18->GetXaxis()->SetTitle("Highest C tag of H#rightarrowbb jets");
   THStack_stack_18->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_18->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_18->GetXaxis()->SetLabelColor(ci);
   THStack_stack_18->GetXaxis()->SetLabelFont(42);
   THStack_stack_18->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_18->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_18->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_18->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_18->GetXaxis()->SetTitleColor(ci);
   THStack_stack_18->GetXaxis()->SetTitleFont(42);
   THStack_stack_18->GetYaxis()->SetTitle("Number of events");
   THStack_stack_18->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_18->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_18->GetYaxis()->SetLabelColor(ci);
   THStack_stack_18->GetYaxis()->SetLabelFont(42);
   THStack_stack_18->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_18->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_18->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_18->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_18->GetYaxis()->SetTitleColor(ci);
   THStack_stack_18->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_18->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_18->GetZaxis()->SetLabelColor(ci);
   THStack_stack_18->GetZaxis()->SetLabelFont(42);
   THStack_stack_18->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_18->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_18->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_18->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_18->GetZaxis()->SetTitleColor(ci);
   THStack_stack_18->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_18);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,10.55241);
   0->SetBinContent(2,3.90019);
   0->SetBinContent(3,2.633131);
   0->SetBinContent(4,1.445256);
   0->SetBinContent(5,1.554145);
   0->SetBinContent(6,1.276972);
   0->SetBinContent(7,1.742226);
   0->SetBinContent(8,2.0095);
   0->SetBinContent(9,2.256972);
   0->SetBinContent(10,2.870704);
   0->SetBinContent(11,2.633131);
   0->SetBinContent(12,2.742018);
   0->SetBinContent(13,3.029087);
   0->SetBinContent(14,3.365649);
   0->SetBinContent(15,3.999179);
   0->SetBinContent(16,3.573526);
   0->SetBinContent(17,3.731909);
   0->SetBinContent(18,3.187469);
   0->SetBinContent(19,3.108278);
   0->SetBinContent(20,2.088691);
   0->SetBinContent(21,1.70263);
   0->SetBinContent(22,1.940207);
   0->SetBinContent(23,1.841217);
   0->SetBinContent(24,1.50465);
   0->SetBinContent(25,1.465054);
   0->SetBinContent(26,1.346266);
   0->SetBinContent(27,1.316568);
   0->SetBinContent(28,1.465054);
   0->SetBinContent(29,1.336367);
   0->SetBinContent(30,1.326468);
   0->SetBinContent(31,1.267073);
   0->SetBinContent(32,1.276972);
   0->SetBinContent(33,0.9404057);
   0->SetBinContent(34,0.9404057);
   0->SetBinContent(35,0.8315165);
   0->SetBinContent(36,0.8513145);
   0->SetBinContent(37,0.8612136);
   0->SetBinContent(38,0.7325263);
   0->SetBinContent(39,0.8414155);
   0->SetBinContent(40,0.7820214);
   0->SetBinContent(41,0.6335361);
   0->SetBinContent(42,0.6236371);
   0->SetBinContent(43,0.6335361);
   0->SetBinContent(44,0.4058589);
   0->SetBinContent(45,0.4454549);
   0->SetBinContent(46,0.316768);
   0->SetBinContent(47,0.306869);
   0->SetBinContent(48,0.257374);
   0->SetBinContent(49,0.168283);
   0->SetBinContent(50,0.009899);
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
   1->SetBinContent(1,4.078007);
   1->SetBinContent(2,1.553981);
   1->SetBinContent(3,1.088777);
   1->SetBinContent(4,0.8017367);
   1->SetBinContent(5,0.6879103);
   1->SetBinContent(6,0.569135);
   1->SetBinContent(7,0.6087267);
   1->SetBinContent(8,1.024441);
   1->SetBinContent(9,1.306532);
   1->SetBinContent(10,1.336226);
   1->SetBinContent(11,1.65296);
   1->SetBinContent(12,1.648011);
   1->SetBinContent(13,1.959797);
   1->SetBinContent(14,2.820938);
   1->SetBinContent(15,2.999105);
   1->SetBinContent(16,2.578432);
   1->SetBinContent(17,2.791243);
   1->SetBinContent(18,2.657618);
   1->SetBinContent(19,2.375519);
   1->SetBinContent(20,2.053828);
   1->SetBinContent(21,1.643062);
   1->SetBinContent(22,1.667807);
   1->SetBinContent(23,1.628215);
   1->SetBinContent(24,1.435205);
   1->SetBinContent(25,1.400563);
   1->SetBinContent(26,1.370869);
   1->SetBinContent(27,1.291685);
   1->SetBinContent(28,1.573777);
   1->SetBinContent(29,1.385716);
   1->SetBinContent(30,1.143216);
   1->SetBinContent(31,1.21745);
   1->SetBinContent(32,1.271889);
   1->SetBinContent(33,1.118471);
   1->SetBinContent(34,1.202604);
   1->SetBinContent(35,1.103624);
   1->SetBinContent(36,1.133318);
   1->SetBinContent(37,0.9848487);
   1->SetBinContent(38,0.8957672);
   1->SetBinContent(39,0.9897977);
   1->SetBinContent(40,1.004645);
   1->SetBinContent(41,0.6384206);
   1->SetBinContent(42,0.7621449);
   1->SetBinContent(43,0.6483185);
   1->SetBinContent(44,0.5790329);
   1->SetBinContent(45,0.6186247);
   1->SetBinContent(46,0.4800533);
   1->SetBinContent(47,0.4503593);
   1->SetBinContent(48,0.2227051);
   1->SetBinContent(49,0.1583681);
   1->SetBinContent(50,0.019796);
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
   2->SetBinContent(1,13.80736);
   2->SetBinContent(2,5.473651);
   2->SetBinContent(3,3.013952);
   2->SetBinContent(4,2.296334);
   2->SetBinContent(5,1.915256);
   2->SetBinContent(6,1.677705);
   2->SetBinContent(7,1.905358);
   2->SetBinContent(8,2.672465);
   2->SetBinContent(9,3.370287);
   2->SetBinContent(10,3.696927);
   2->SetBinContent(11,3.68208);
   2->SetBinContent(12,4.285869);
   2->SetBinContent(13,4.394749);
   2->SetBinContent(14,6.285303);
   2->SetBinContent(15,6.636688);
   2->SetBinContent(16,5.250942);
   2->SetBinContent(17,5.325179);
   2->SetBinContent(18,4.676847);
   2->SetBinContent(19,5.181655);
   2->SetBinContent(20,3.652385);
   2->SetBinContent(21,2.885276);
   2->SetBinContent(22,2.781345);
   2->SetBinContent(23,2.662567);
   2->SetBinContent(24,2.613076);
   2->SetBinContent(25,2.231996);
   2->SetBinContent(26,2.321079);
   2->SetBinContent(27,2.202301);
   2->SetBinContent(28,2.142912);
   2->SetBinContent(29,1.885562);
   2->SetBinContent(30,1.826174);
   2->SetBinContent(31,1.771736);
   2->SetBinContent(32,1.875664);
   2->SetBinContent(33,1.50944);
   2->SetBinContent(34,1.484695);
   2->SetBinContent(35,1.41046);
   2->SetBinContent(36,1.286736);
   2->SetBinContent(37,1.351073);
   2->SetBinContent(38,1.356022);
   2->SetBinContent(39,1.281787);
   2->SetBinContent(40,1.158063);
   2->SetBinContent(41,0.9897977);
   2->SetBinContent(42,0.9254611);
   2->SetBinContent(43,0.9452569);
   2->SetBinContent(44,0.7918388);
   2->SetBinContent(45,0.8809203);
   2->SetBinContent(46,0.8165836);
   2->SetBinContent(47,0.8116347);
   2->SetBinContent(48,0.7720429);
   2->SetBinContent(49,0.4701553);
   2->SetBinContent(50,0.08413301);
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
   3->SetBinContent(1,47.43964);
   3->SetBinContent(2,16.47728);
   3->SetBinContent(3,11.24371);
   3->SetBinContent(4,8.069819);
   3->SetBinContent(5,5.942634);
   3->SetBinContent(6,6.88805);
   3->SetBinContent(7,8.103584);
   3->SetBinContent(8,11.14242);
   3->SetBinContent(9,15.16044);
   3->SetBinContent(10,17.35519);
   3->SetBinContent(11,17.62531);
   3->SetBinContent(12,17.72661);
   3->SetBinContent(13,18.73959);
   3->SetBinContent(14,24.446);
   3->SetBinContent(15,26.50572);
   3->SetBinContent(16,23.56809);
   3->SetBinContent(17,21.30579);
   3->SetBinContent(18,20.15775);
   3->SetBinContent(19,21.91357);
   3->SetBinContent(20,16.07209);
   3->SetBinContent(21,12.7969);
   3->SetBinContent(22,13.50596);
   3->SetBinContent(23,11.00736);
   3->SetBinContent(24,11.27748);
   3->SetBinContent(25,10.33206);
   3->SetBinContent(26,10.2983);
   3->SetBinContent(27,10.63595);
   3->SetBinContent(28,11.10865);
   3->SetBinContent(29,8.373703);
   3->SetBinContent(30,8.036055);
   3->SetBinContent(31,8.98147);
   3->SetBinContent(32,8.576292);
   3->SetBinContent(33,7.664641);
   3->SetBinContent(34,7.529582);
   3->SetBinContent(35,7.056874);
   3->SetBinContent(36,5.807575);
   3->SetBinContent(37,6.347812);
   3->SetBinContent(38,6.212753);
   3->SetBinContent(39,6.415342);
   3->SetBinContent(40,6.178988);
   3->SetBinContent(41,5.402397);
   3->SetBinContent(42,4.558276);
   3->SetBinContent(43,4.524511);
   3->SetBinContent(44,4.355687);
   3->SetBinContent(45,3.511562);
   3->SetBinContent(46,3.410267);
   3->SetBinContent(47,3.038851);
   3->SetBinContent(48,2.667435);
   3->SetBinContent(49,1.890839);
   3->SetBinContent(50,0.20259);
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
   4->SetBinContent(1,47.27399);
   4->SetBinContent(2,17.36152);
   4->SetBinContent(3,11.56707);
   4->SetBinContent(4,7.587483);
   4->SetBinContent(5,6.516057);
   4->SetBinContent(6,6.144337);
   4->SetBinContent(7,6.516057);
   4->SetBinContent(8,8.877568);
   4->SetBinContent(9,10.82363);
   4->SetBinContent(10,12.98835);
   4->SetBinContent(11,13.07581);
   4->SetBinContent(12,14.21283);
   4->SetBinContent(13,16.61808);
   4->SetBinContent(14,19.32944);
   4->SetBinContent(15,23.44022);
   4->SetBinContent(16,19.81049);
   4->SetBinContent(17,20.11661);
   4->SetBinContent(18,19.26385);
   4->SetBinContent(19,21.97521);
   4->SetBinContent(20,15.15307);
   4->SetBinContent(21,12.20118);
   4->SetBinContent(22,11.82946);
   4->SetBinContent(23,11.5452);
   4->SetBinContent(24,10.12392);
   4->SetBinContent(25,10.45191);
   4->SetBinContent(26,9.774068);
   4->SetBinContent(27,9.664739);
   4->SetBinContent(28,10.27698);
   4->SetBinContent(29,10.80176);
   4->SetBinContent(30,10.62684);
   4->SetBinContent(31,9.730336);
   4->SetBinContent(32,9.948995);
   4->SetBinContent(33,10.08019);
   4->SetBinContent(34,8.986897);
   4->SetBinContent(35,9.424214);
   4->SetBinContent(36,8.549581);
   4->SetBinContent(37,9.839665);
   4->SetBinContent(38,9.992726);
   4->SetBinContent(39,9.774068);
   4->SetBinContent(40,8.768239);
   4->SetBinContent(41,8.0248);
   4->SetBinContent(42,7.784276);
   4->SetBinContent(43,7.281361);
   4->SetBinContent(44,7.871739);
   4->SetBinContent(45,8.177861);
   4->SetBinContent(46,8.790105);
   4->SetBinContent(47,8.746373);
   4->SetBinContent(48,7.806141);
   4->SetBinContent(49,5.641423);
   4->SetBinContent(50,0.8527743);
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
   5->SetBinContent(1,272.8535);
   5->SetBinContent(2,96.18556);
   5->SetBinContent(3,61.17833);
   5->SetBinContent(4,43.73181);
   5->SetBinContent(5,36.57874);
   5->SetBinContent(6,32.85682);
   5->SetBinContent(7,40.70775);
   5->SetBinContent(8,57.3401);
   5->SetBinContent(9,76.06523);
   5->SetBinContent(10,76.29784);
   5->SetBinContent(11,77.92607);
   5->SetBinContent(12,74.90221);
   5->SetBinContent(13,81.99666);
   5->SetBinContent(14,102.4659);
   5->SetBinContent(15,105.4316);
   5->SetBinContent(16,93.1617);
   5->SetBinContent(17,86.2417);
   5->SetBinContent(18,78.50758);
   5->SetBinContent(19,86.70691);
   5->SetBinContent(20,58.15427);
   5->SetBinContent(21,43.44104);
   5->SetBinContent(22,43.03395);
   5->SetBinContent(23,35.53195);
   5->SetBinContent(24,33.84545);
   5->SetBinContent(25,30.82143);
   5->SetBinContent(26,28.84422);
   5->SetBinContent(27,30.93773);
   5->SetBinContent(28,27.91377);
   5->SetBinContent(29,26.6344);
   5->SetBinContent(30,25.41319);
   5->SetBinContent(31,23.37782);
   5->SetBinContent(32,21.69138);
   5->SetBinContent(33,19.53972);
   5->SetBinContent(34,18.08589);
   5->SetBinContent(35,17.91143);
   5->SetBinContent(36,15.35268);
   5->SetBinContent(37,15.46899);
   5->SetBinContent(38,14.65483);
   5->SetBinContent(39,13.5499);
   5->SetBinContent(40,11.74712);
   5->SetBinContent(41,11.68897);
   5->SetBinContent(42,9.304652);
   5->SetBinContent(43,8.606803);
   5->SetBinContent(44,9.188344);
   5->SetBinContent(45,7.734492);
   5->SetBinContent(46,5.989869);
   5->SetBinContent(47,5.408328);
   5->SetBinContent(48,3.780013);
   5->SetBinContent(49,1.802774);
   5->SetBinContent(50,0.232616);
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
   6->SetBinContent(1,6330.129);
   6->SetBinContent(2,2235.635);
   6->SetBinContent(3,1484.885);
   6->SetBinContent(4,1046.347);
   6->SetBinContent(5,846.3742);
   6->SetBinContent(6,769.1916);
   6->SetBinContent(7,865.6699);
   6->SetBinContent(8,1154.228);
   6->SetBinContent(9,1522.599);
   6->SetBinContent(10,1671.702);
   6->SetBinContent(11,1713.802);
   6->SetBinContent(12,1745.376);
   6->SetBinContent(13,2168.987);
   6->SetBinContent(14,3017.877);
   6->SetBinContent(15,3258.163);
   6->SetBinContent(16,3052.079);
   6->SetBinContent(17,2955.614);
   6->SetBinContent(18,2638.157);
   6->SetBinContent(19,2838.102);
   6->SetBinContent(20,1937.456);
   6->SetBinContent(21,1486.639);
   6->SetBinContent(22,1422.613);
   6->SetBinContent(23,1153.35);
   6->SetBinContent(24,1103.357);
   6->SetBinContent(25,1040.208);
   6->SetBinContent(26,975.3043);
   6->SetBinContent(27,997.2311);
   6->SetBinContent(28,979.6896);
   6->SetBinContent(29,884.0884);
   6->SetBinContent(30,839.3576);
   6->SetBinContent(31,785.856);
   6->SetBinContent(32,756.0355);
   6->SetBinContent(33,686.7465);
   6->SetBinContent(34,667.4509);
   6->SetBinContent(35,584.1287);
   6->SetBinContent(36,545.5374);
   6->SetBinContent(37,573.6038);
   6->SetBinContent(38,534.1354);
   6->SetBinContent(39,521.8564);
   6->SetBinContent(40,561.3248);
   6->SetBinContent(41,412.222);
   6->SetBinContent(42,338.5477);
   6->SetBinContent(43,363.9828);
   6->SetBinContent(44,330.654);
   6->SetBinContent(45,318.3749);
   6->SetBinContent(46,333.2852);
   6->SetBinContent(47,285.0461);
   6->SetBinContent(48,230.6679);
   6->SetBinContent(49,144.716);
   6->SetBinContent(50,14.03307);
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
   7->SetBinContent(1,1139.729);
   7->SetBinContent(2,399.3052);
   7->SetBinContent(3,254.6909);
   7->SetBinContent(4,190.8783);
   7->SetBinContent(5,158.2814);
   7->SetBinContent(6,176.9279);
   7->SetBinContent(7,217.3978);
   7->SetBinContent(8,332.7302);
   7->SetBinContent(9,457.3167);
   7->SetBinContent(10,496.2673);
   7->SetBinContent(11,497.2341);
   7->SetBinContent(12,516.7094);
   7->SetBinContent(13,570.4391);
   7->SetBinContent(14,640.4672);
   7->SetBinContent(15,662.2906);
   7->SetBinContent(16,510.9083);
   7->SetBinContent(17,495.991);
   7->SetBinContent(18,450.1343);
   7->SetBinContent(19,499.9966);
   7->SetBinContent(20,325.2715);
   7->SetBinContent(21,262.1495);
   7->SetBinContent(22,240.8787);
   7->SetBinContent(23,214.7735);
   7->SetBinContent(24,180.1048);
   7->SetBinContent(25,170.4362);
   7->SetBinContent(26,174.1655);
   7->SetBinContent(27,180.2429);
   7->SetBinContent(28,178.5854);
   7->SetBinContent(29,161.5963);
   7->SetBinContent(30,148.3366);
   7->SetBinContent(31,144.8835);
   7->SetBinContent(32,133.1431);
   7->SetBinContent(33,144.7454);
   7->SetBinContent(34,138.8061);
   7->SetBinContent(35,118.6407);
   7->SetBinContent(36,116.7071);
   7->SetBinContent(37,109.8014);
   7->SetBinContent(38,108.8346);
   7->SetBinContent(39,112.8399);
   7->SetBinContent(40,106.6247);
   7->SetBinContent(41,88.25545);
   7->SetBinContent(42,87.8411);
   7->SetBinContent(43,85.76938);
   7->SetBinContent(44,81.3497);
   7->SetBinContent(45,79.13986);
   7->SetBinContent(46,76.93002);
   7->SetBinContent(47,76.10133);
   7->SetBinContent(48,70.99108);
   7->SetBinContent(49,50.27384);
   7->SetBinContent(50,7.458208);
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
   8->SetBinContent(1,8.31492);
   8->SetBinContent(2,4.6194);
   8->SetBinContent(3,5.54328);
   8->SetBinContent(4,7.39104);
   8->SetBinContent(5,10.16268);
   8->SetBinContent(6,26.79251);
   8->SetBinContent(7,37.87908);
   8->SetBinContent(8,72.98658);
   8->SetBinContent(9,103.4747);
   8->SetBinContent(10,124.7239);
   8->SetBinContent(11,127.4956);
   8->SetBinContent(12,123.8001);
   8->SetBinContent(13,150.5924);
   8->SetBinContent(14,214.3397);
   8->SetBinContent(15,140.4298);
   8->SetBinContent(16,110.8657);
   8->SetBinContent(17,108.0941);
   8->SetBinContent(18,68.36717);
   8->SetBinContent(19,112.7135);
   8->SetBinContent(20,43.42237);
   8->SetBinContent(21,30.48803);
   8->SetBinContent(22,39.72684);
   8->SetBinContent(23,26.79251);
   8->SetBinContent(24,24.02087);
   8->SetBinContent(25,17.55372);
   8->SetBinContent(26,17.55372);
   8->SetBinContent(27,24.02087);
   8->SetBinContent(28,26.79251);
   8->SetBinContent(29,20.32536);
   8->SetBinContent(30,10.16268);
   8->SetBinContent(31,16.62984);
   8->SetBinContent(32,12.93432);
   8->SetBinContent(33,21.24924);
   8->SetBinContent(34,18.4776);
   8->SetBinContent(35,14.78208);
   8->SetBinContent(36,15.70596);
   8->SetBinContent(37,9.2388);
   8->SetBinContent(38,15.70596);
   8->SetBinContent(39,10.16268);
   8->SetBinContent(40,13.8582);
   8->SetBinContent(41,5.54328);
   8->SetBinContent(42,9.2388);
   8->SetBinContent(43,5.54328);
   8->SetBinContent(44,6.46716);
   8->SetBinContent(45,6.46716);
   8->SetBinContent(46,6.46716);
   8->SetBinContent(47,11.08656);
   8->SetBinContent(48,12.93432);
   8->SetBinContent(49,6.46716);
   8->SetBinContent(50,1.84776);
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
   9->SetBinContent(1,854.0874);
   9->SetBinContent(2,265.4962);
   9->SetBinContent(3,179.7817);
   9->SetBinContent(4,142.4191);
   9->SetBinContent(5,125.7158);
   9->SetBinContent(6,155.1663);
   9->SetBinContent(7,295.3873);
   9->SetBinContent(8,420.6663);
   9->SetBinContent(9,546.8243);
   9->SetBinContent(10,577.155);
   9->SetBinContent(11,589.4631);
   9->SetBinContent(12,632.1019);
   9->SetBinContent(13,700.6757);
   9->SetBinContent(14,966.6187);
   9->SetBinContent(15,824.6359);
   9->SetBinContent(16,661.993);
   9->SetBinContent(17,640.4539);
   9->SetBinContent(18,566.1656);
   9->SetBinContent(19,662.8722);
   9->SetBinContent(20,396.9292);
   9->SetBinContent(21,312.9703);
   9->SetBinContent(22,294.5082);
   9->SetBinContent(23,276.046);
   9->SetBinContent(24,255.386);
   9->SetBinContent(25,244.397);
   9->SetBinContent(26,236.0454);
   9->SetBinContent(27,242.6388);
   9->SetBinContent(28,241.3201);
   9->SetBinContent(29,214.0674);
   9->SetBinContent(30,254.5069);
   9->SetBinContent(31,214.0674);
   9->SetBinContent(32,214.0674);
   9->SetBinContent(33,197.8036);
   9->SetBinContent(34,190.3311);
   9->SetBinContent(35,192.0894);
   9->SetBinContent(36,182.4191);
   9->SetBinContent(37,156.485);
   9->SetBinContent(38,156.0455);
   9->SetBinContent(39,142.8587);
   9->SetBinContent(40,136.2653);
   9->SetBinContent(41,115.1662);
   9->SetBinContent(42,97.14388);
   9->SetBinContent(43,92.74821);
   9->SetBinContent(44,93.62734);
   9->SetBinContent(45,87.03383);
   9->SetBinContent(46,103.7374);
   9->SetBinContent(47,113.4079);
   9->SetBinContent(48,102.8583);
   9->SetBinContent(49,88.7921);
   9->SetBinContent(50,14.50561);
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
   10->SetBinContent(1,10408.42);
   10->SetBinContent(2,3489.019);
   10->SetBinContent(3,2303.3);
   10->SetBinContent(4,1675.791);
   10->SetBinContent(5,1500.818);
   10->SetBinContent(6,1738.968);
   10->SetBinContent(7,2543.298);
   10->SetBinContent(8,3834.744);
   10->SetBinContent(9,5296.152);
   10->SetBinContent(10,5756.539);
   10->SetBinContent(11,5947.154);
   10->SetBinContent(12,6100.52);
   10->SetBinContent(13,6727.367);
   10->SetBinContent(14,8261.311);
   10->SetBinContent(15,8531.373);
   10->SetBinContent(16,7335.881);
   10->SetBinContent(17,7106.27);
   10->SetBinContent(18,6321.691);
   10->SetBinContent(19,6812.053);
   10->SetBinContent(20,4394.586);
   10->SetBinContent(21,3304.651);
   10->SetBinContent(22,3100.478);
   10->SetBinContent(23,2539.512);
   10->SetBinContent(24,2336.212);
   10->SetBinContent(25,2175.146);
   10->SetBinContent(26,2065.05);
   10->SetBinContent(27,2058.351);
   10->SetBinContent(28,2070.583);
   10->SetBinContent(29,1915.107);
   10->SetBinContent(30,1826.31);
   10->SetBinContent(31,1724.994);
   10->SetBinContent(32,1629.5);
   10->SetBinContent(33,1586.412);
   10->SetBinContent(34,1559.045);
   10->SetBinContent(35,1432.983);
   10->SetBinContent(36,1364.274);
   10->SetBinContent(37,1324.97);
   10->SetBinContent(38,1288.578);
   10->SetBinContent(39,1333.122);
   10->SetBinContent(40,1224.819);
   10->SetBinContent(41,946.4914);
   10->SetBinContent(42,937.4661);
   10->SetBinContent(43,913.0106);
   10->SetBinContent(44,891.7575);
   10->SetBinContent(45,917.0865);
   10->SetBinContent(46,895.8334);
   10->SetBinContent(47,887.3904);
   10->SetBinContent(48,780.2518);
   10->SetBinContent(49,549.0884);
   10->SetBinContent(50,73.95027);
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
   11->SetBinContent(1,152.6042);
   11->SetBinContent(2,213.6458);
   11->SetBinContent(3,122.0833);
   11->SetBinContent(4,183.125);
   11->SetBinContent(5,122.0833);
   11->SetBinContent(6,335.7292);
   11->SetBinContent(7,152.6042);
   11->SetBinContent(8,518.8542);
   11->SetBinContent(9,1098.75);
   11->SetBinContent(10,1098.75);
   11->SetBinContent(11,1556.563);
   11->SetBinContent(12,1831.251);
   11->SetBinContent(13,2411.146);
   11->SetBinContent(14,3601.455);
   11->SetBinContent(15,3235.206);
   11->SetBinContent(16,2136.459);
   11->SetBinContent(17,1800.73);
   11->SetBinContent(18,1587.084);
   11->SetBinContent(19,1739.688);
   11->SetBinContent(20,1007.187);
   11->SetBinContent(21,915.6248);
   11->SetBinContent(22,366.25);
   11->SetBinContent(23,366.25);
   11->SetBinContent(24,335.7292);
   11->SetBinContent(25,457.8125);
   11->SetBinContent(26,366.25);
   11->SetBinContent(27,335.7292);
   11->SetBinContent(28,335.7292);
   11->SetBinContent(29,213.6458);
   11->SetBinContent(30,396.7708);
   11->SetBinContent(31,183.125);
   11->SetBinContent(32,305.2083);
   11->SetBinContent(33,183.125);
   11->SetBinContent(34,152.6042);
   11->SetBinContent(35,122.0833);
   11->SetBinContent(36,183.125);
   11->SetBinContent(37,183.125);
   11->SetBinContent(38,244.1666);
   11->SetBinContent(39,122.0833);
   11->SetBinContent(40,213.6458);
   11->SetBinContent(41,122.0833);
   11->SetBinContent(42,61.04166);
   11->SetBinContent(43,122.0833);
   11->SetBinContent(44,152.6042);
   11->SetBinContent(45,183.125);
   11->SetBinContent(46,213.6458);
   11->SetBinContent(47,213.6458);
   11->SetBinContent(48,122.0833);
   11->SetBinContent(49,30.52083);
   11->SetBinContent(50,30.52083);
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
   12->SetBinContent(1,683.0144);
   12->SetBinContent(2,255.5968);
   12->SetBinContent(3,165.3861);
   12->SetBinContent(4,142.4755);
   12->SetBinContent(5,133.884);
   12->SetBinContent(6,148.2031);
   12->SetBinContent(7,228.3904);
   12->SetBinContent(8,332.9186);
   12->SetBinContent(9,453.1969);
   12->SetBinContent(10,536.9622);
   12->SetBinContent(11,583.4984);
   12->SetBinContent(12,661.5361);
   12->SetBinContent(13,798.2811);
   12->SetBinContent(14,1144.081);
   12->SetBinContent(15,1186.322);
   12->SetBinContent(16,962.2319);
   12->SetBinContent(17,938.6058);
   12->SetBinContent(18,768.2115);
   12->SetBinContent(19,863.4319);
   12->SetBinContent(20,579.2028);
   12->SetBinContent(21,391.6259);
   12->SetBinContent(22,341.5099);
   12->SetBinContent(23,277.0751);
   12->SetBinContent(24,229.8223);
   12->SetBinContent(25,191.1606);
   12->SetBinContent(26,189.0127);
   12->SetBinContent(27,199.0361);
   12->SetBinContent(28,179.7053);
   12->SetBinContent(29,171.1138);
   12->SetBinContent(30,161.8063);
   12->SetBinContent(31,123.8606);
   12->SetBinContent(32,135.3159);
   12->SetBinContent(33,125.2925);
   12->SetBinContent(34,123.1446);
   12->SetBinContent(35,104.5297);
   12->SetBinContent(36,98.80207);
   12->SetBinContent(37,110.2574);
   12->SetBinContent(38,99.51803);
   12->SetBinContent(39,100.234);
   12->SetBinContent(40,105.9616);
   12->SetBinContent(41,83.051);
   12->SetBinContent(42,61.57227);
   12->SetBinContent(43,60.85632);
   12->SetBinContent(44,45.82121);
   12->SetBinContent(45,59.4244);
   12->SetBinContent(46,64.4361);
   12->SetBinContent(47,68.73185);
   12->SetBinContent(48,60.14036);
   12->SetBinContent(49,45.82121);
   12->SetBinContent(50,6.443604);
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
   13->SetBinContent(1,1664.353);
   13->SetBinContent(2,1300.276);
   13->SetBinContent(3,1300.276);
   13->SetBinContent(4,1352.287);
   13->SetBinContent(5,1248.265);
   13->SetBinContent(6,1976.418);
   13->SetBinContent(7,4680.993);
   13->SetBinContent(8,7801.667);
   13->SetBinContent(9,11702.48);
   13->SetBinContent(10,15967.36);
   13->SetBinContent(11,18255.86);
   13->SetBinContent(12,20700.41);
   13->SetBinContent(13,24549.28);
   13->SetBinContent(14,30738.68);
   13->SetBinContent(15,33079.2);
   13->SetBinContent(16,25589.52);
   13->SetBinContent(17,26213.66);
   13->SetBinContent(18,19244.09);
   13->SetBinContent(19,24913.36);
   13->SetBinContent(20,13106.77);
   13->SetBinContent(21,8945.906);
   13->SetBinContent(22,8321.777);
   13->SetBinContent(23,5357.139);
   13->SetBinContent(24,4524.959);
   13->SetBinContent(25,4837.026);
   13->SetBinContent(26,4160.88);
   13->SetBinContent(27,4108.869);
   13->SetBinContent(28,4004.847);
   13->SetBinContent(29,4316.914);
   13->SetBinContent(30,2548.539);
   13->SetBinContent(31,3848.814);
   13->SetBinContent(32,2600.55);
   13->SetBinContent(33,2132.451);
   13->SetBinContent(34,1924.407);
   13->SetBinContent(35,2600.55);
   13->SetBinContent(36,2184.462);
   13->SetBinContent(37,2704.572);
   13->SetBinContent(38,2288.484);
   13->SetBinContent(39,2184.462);
   13->SetBinContent(40,2236.473);
   13->SetBinContent(41,1872.396);
   13->SetBinContent(42,1976.418);
   13->SetBinContent(43,1196.254);
   13->SetBinContent(44,1872.396);
   13->SetBinContent(45,1872.396);
   13->SetBinContent(46,1716.364);
   13->SetBinContent(47,1872.396);
   13->SetBinContent(48,1924.407);
   13->SetBinContent(49,1976.418);
   13->SetBinContent(50,104.0221);
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
   14->SetBinContent(1,10309.59);
   14->SetBinContent(2,2174.82);
   14->SetBinContent(3,1610.293);
   14->SetBinContent(4,1055.022);
   14->SetBinContent(5,888.4394);
   14->SetBinContent(6,832.9119);
   14->SetBinContent(7,777.3845);
   14->SetBinContent(8,1156.821);
   14->SetBinContent(9,1499.238);
   14->SetBinContent(10,1850.91);
   14->SetBinContent(11,2248.857);
   14->SetBinContent(12,2285.875);
   14->SetBinContent(13,2748.607);
   14->SetBinContent(14,4303.381);
   14->SetBinContent(15,4340.399);
   14->SetBinContent(16,4729.083);
   14->SetBinContent(17,6154.26);
   14->SetBinContent(18,5210.312);
   14->SetBinContent(19,7162.989);
   14->SetBinContent(20,3285.376);
   14->SetBinContent(21,2110.037);
   14->SetBinContent(22,2119.292);
   14->SetBinContent(23,1508.493);
   14->SetBinContent(24,1101.294);
   14->SetBinContent(25,1008.749);
   14->SetBinContent(26,832.9119);
   14->SetBinContent(27,999.4943);
   14->SetBinContent(28,906.9485);
   14->SetBinContent(29,694.0933);
   14->SetBinContent(30,721.857);
   14->SetBinContent(31,592.2929);
   14->SetBinContent(32,657.075);
   14->SetBinContent(33,499.7472);
   14->SetBinContent(34,638.5658);
   14->SetBinContent(35,481.238);
   14->SetBinContent(36,379.4377);
   14->SetBinContent(37,370.1831);
   14->SetBinContent(38,407.2014);
   14->SetBinContent(39,314.6556);
   14->SetBinContent(40,240.619);
   14->SetBinContent(41,296.1465);
   14->SetBinContent(42,240.619);
   14->SetBinContent(43,157.3278);
   14->SetBinContent(44,286.8919);
   14->SetBinContent(45,175.837);
   14->SetBinContent(46,222.1098);
   14->SetBinContent(47,194.3461);
   14->SetBinContent(48,111.0549);
   14->SetBinContent(49,101.8003);
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
   15->SetBinContent(1,2159.601);
   15->SetBinContent(2,560.9351);
   15->SetBinContent(3,336.5611);
   15->SetBinContent(4,308.5143);
   15->SetBinContent(5,224.374);
   15->SetBinContent(6,196.3273);
   15->SetBinContent(7,392.6546);
   15->SetBinContent(8,757.2624);
   15->SetBinContent(9,757.2624);
   15->SetBinContent(10,701.1689);
   15->SetBinContent(11,1626.712);
   15->SetBinContent(12,1149.917);
   15->SetBinContent(13,1290.151);
   15->SetBinContent(14,1654.759);
   15->SetBinContent(15,1738.899);
   15->SetBinContent(16,1514.525);
   15->SetBinContent(17,1710.852);
   15->SetBinContent(18,1177.964);
   15->SetBinContent(19,1794.992);
   15->SetBinContent(20,1121.87);
   15->SetBinContent(21,532.8884);
   15->SetBinContent(22,588.9819);
   15->SetBinContent(23,729.2156);
   15->SetBinContent(24,336.5611);
   15->SetBinContent(25,476.7948);
   15->SetBinContent(26,308.5143);
   15->SetBinContent(27,252.4208);
   15->SetBinContent(28,252.4208);
   15->SetBinContent(29,364.6078);
   15->SetBinContent(30,280.4676);
   15->SetBinContent(31,84.14027);
   15->SetBinContent(32,420.7013);
   15->SetBinContent(33,56.09351);
   15->SetBinContent(34,196.3273);
   15->SetBinContent(35,84.14027);
   15->SetBinContent(36,196.3273);
   15->SetBinContent(37,168.2805);
   15->SetBinContent(38,196.3273);
   15->SetBinContent(39,196.3273);
   15->SetBinContent(40,112.187);
   15->SetBinContent(41,56.09351);
   15->SetBinContent(42,28.04676);
   15->SetBinContent(43,84.14027);
   15->SetBinContent(44,84.14027);
   15->SetBinContent(45,28.04676);
   15->SetBinContent(46,56.09351);
   15->SetBinContent(47,28.04676);
   15->SetBinContent(48,56.09351);
   15->SetBinContent(49,84.14027);
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
   16->SetBinContent(1,254.8748);
   16->SetBinContent(2,191.1562);
   16->SetBinContent(3,95.57809);
   16->SetBinContent(4,127.4375);
   16->SetBinContent(5,138.0573);
   16->SetBinContent(6,169.9166);
   16->SetBinContent(7,201.7759);
   16->SetBinContent(8,233.6353);
   16->SetBinContent(9,329.2133);
   16->SetBinContent(10,435.4111);
   16->SetBinContent(11,499.1298);
   16->SetBinContent(12,711.526);
   16->SetBinContent(13,722.1458);
   16->SetBinContent(14,1295.614);
   16->SetBinContent(15,945.1619);
   16->SetBinContent(16,966.4015);
   16->SetBinContent(17,1008.881);
   16->SetBinContent(18,945.1619);
   16->SetBinContent(19,1444.291);
   16->SetBinContent(20,499.1298);
   16->SetBinContent(21,318.5935);
   16->SetBinContent(22,286.7342);
   16->SetBinContent(23,201.7759);
   16->SetBinContent(24,106.1979);
   16->SetBinContent(25,106.1979);
   16->SetBinContent(26,106.1979);
   16->SetBinContent(27,10.61979);
   16->SetBinContent(28,84.95831);
   16->SetBinContent(29,31.85936);
   16->SetBinContent(30,127.4375);
   16->SetBinContent(31,31.85936);
   16->SetBinContent(33,63.71873);
   16->SetBinContent(34,31.85936);
   16->SetBinContent(35,31.85936);
   16->SetBinContent(36,21.23957);
   16->SetBinContent(37,21.23957);
   16->SetBinContent(38,21.23957);
   16->SetBinContent(39,42.47915);
   16->SetBinContent(41,10.61979);
   16->SetBinContent(42,10.61979);
   16->SetBinContent(44,42.47915);
   16->SetBinContent(45,21.23957);
   16->SetBinContent(46,31.85936);
   16->SetBinContent(47,31.85936);
   16->SetBinContent(48,10.61979);
   16->SetBinContent(49,10.61979);
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
   17->SetBinContent(1,6386.168);
   17->SetBinContent(2,1946.258);
   17->SetBinContent(3,1398.873);
   17->SetBinContent(4,1155.591);
   17->SetBinContent(5,1094.77);
   17->SetBinContent(6,851.4879);
   17->SetBinContent(7,1155.591);
   17->SetBinContent(8,1885.437);
   17->SetBinContent(9,1520.514);
   17->SetBinContent(10,2797.746);
   17->SetBinContent(11,2676.105);
   17->SetBinContent(12,2980.208);
   17->SetBinContent(13,2797.746);
   17->SetBinContent(14,4744.006);
   17->SetBinContent(15,6142.885);
   17->SetBinContent(16,5838.781);
   17->SetBinContent(17,5413.035);
   17->SetBinContent(18,3770.875);
   17->SetBinContent(19,6629.451);
   17->SetBinContent(20,3405.951);
   17->SetBinContent(21,1763.796);
   17->SetBinContent(22,1338.052);
   17->SetBinContent(23,1459.693);
   17->SetBinContent(24,1277.232);
   17->SetBinContent(25,973.129);
   17->SetBinContent(26,669.0262);
   17->SetBinContent(27,1459.693);
   17->SetBinContent(28,729.8467);
   17->SetBinContent(29,729.8467);
   17->SetBinContent(30,669.0262);
   17->SetBinContent(31,425.7439);
   17->SetBinContent(32,425.7439);
   17->SetBinContent(33,364.9234);
   17->SetBinContent(34,304.1028);
   17->SetBinContent(35,729.8467);
   17->SetBinContent(36,243.2822);
   17->SetBinContent(37,547.3851);
   17->SetBinContent(38,304.1028);
   17->SetBinContent(39,243.2822);
   17->SetBinContent(40,182.4617);
   17->SetBinContent(41,364.9234);
   17->SetBinContent(42,60.82056);
   17->SetBinContent(43,243.2822);
   17->SetBinContent(44,121.6411);
   17->SetBinContent(45,121.6411);
   17->SetBinContent(46,121.6411);
   17->SetBinContent(47,60.82056);
   17->SetBinContent(48,182.4617);
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
