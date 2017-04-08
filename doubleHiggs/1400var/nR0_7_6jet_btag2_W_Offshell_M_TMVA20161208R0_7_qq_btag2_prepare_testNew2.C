{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 00:56:58 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-134.9206,-3.331943,658.7302,6.240446);
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
   
   TH1F *THStack_stack_5 = new TH1F("THStack_stack_5","",50,0,500);
   THStack_stack_5->SetMinimum(0.02460861);
   THStack_stack_5->SetMaximum(298301.2);
   THStack_stack_5->SetDirectory(0);
   THStack_stack_5->SetStats(0);
   THStack_stack_5->SetLineWidth(2);
   THStack_stack_5->SetMarkerSize(1.2);
   THStack_stack_5->GetXaxis()->SetTitle("E_{W*} / GeV");
   THStack_stack_5->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_5->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_5->GetXaxis()->SetLabelColor(ci);
   THStack_stack_5->GetXaxis()->SetLabelFont(42);
   THStack_stack_5->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_5->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_5->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_5->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_5->GetXaxis()->SetTitleColor(ci);
   THStack_stack_5->GetXaxis()->SetTitleFont(42);
   THStack_stack_5->GetYaxis()->SetTitle("Number of events");
   THStack_stack_5->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_5->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_5->GetYaxis()->SetLabelColor(ci);
   THStack_stack_5->GetYaxis()->SetLabelFont(42);
   THStack_stack_5->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_5->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_5->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_5->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_5->GetYaxis()->SetTitleColor(ci);
   THStack_stack_5->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_5->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_5->GetZaxis()->SetLabelColor(ci);
   THStack_stack_5->GetZaxis()->SetLabelFont(42);
   THStack_stack_5->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_5->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_5->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_5->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_5->GetZaxis()->SetTitleColor(ci);
   THStack_stack_5->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_5);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,500);
   0->SetBinContent(1,0.4479148);
   0->SetBinContent(2,2.519999);
   0->SetBinContent(3,3.564552);
   0->SetBinContent(4,3.660537);
   0->SetBinContent(5,2.775962);
   0->SetBinContent(6,1.328687);
   0->SetBinContent(7,0.6191775);
   0->SetBinContent(8,0.2540702);
   0->SetBinContent(9,0.2333682);
   0->SetBinContent(10,0.27289);
   0->SetBinContent(11,0.2107842);
   0->SetBinContent(12,0.1467961);
   0->SetBinContent(13,0.1129201);
   0->SetBinContent(14,0.1185661);
   0->SetBinContent(15,0.07339804);
   0->SetBinContent(16,0.06398803);
   0->SetBinContent(17,0.05646002);
   0->SetBinContent(18,0.04328601);
   0->SetBinContent(19,0.033876);
   0->SetBinContent(20,0.04516801);
   0->SetBinContent(21,0.01882);
   0->SetBinContent(22,0.013174);
   0->SetBinContent(23,0.011292);
   0->SetBinContent(24,0.003764);
   0->SetBinContent(25,0.005646);
   0->SetBinContent(26,0.007528);
   0->SetBinContent(27,0.005646);
   0->SetBinContent(28,0.00941);
   0->SetBinContent(29,0.00941);
   0->SetBinContent(30,0.001882);
   0->SetBinContent(32,0.001882);
   0->SetBinContent(33,0.001882);
   0->SetBinContent(34,0.001882);
   0->SetBinContent(41,0.001882);
   0->SetBinContent(42,0.001882);
   0->SetBinContent(43,0.001882);
   0->SetEntries(8863);
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
   1->SetBinContent(1,1.044502);
   1->SetBinContent(2,2.397715);
   1->SetBinContent(3,2.105993);
   1->SetBinContent(4,1.617594);
   1->SetBinContent(5,1.148016);
   1->SetBinContent(6,0.6643437);
   1->SetBinContent(7,0.3745183);
   1->SetBinContent(8,0.140209);
   1->SetBinContent(9,0.137386);
   1->SetBinContent(10,0.1957276);
   1->SetBinContent(11,0.1778487);
   1->SetBinContent(12,0.08845407);
   1->SetBinContent(13,0.05740104);
   1->SetBinContent(14,0.04893203);
   1->SetBinContent(15,0.03575802);
   1->SetBinContent(16,0.03669902);
   1->SetBinContent(17,0.03199401);
   1->SetBinContent(18,0.020702);
   1->SetBinContent(19,0.013174);
   1->SetBinContent(20,0.013174);
   1->SetBinContent(21,0.011292);
   1->SetBinContent(22,0.004705);
   1->SetBinContent(23,0.005646);
   1->SetBinContent(24,0.003764);
   1->SetBinContent(25,0.005646);
   1->SetBinContent(26,0.001882);
   1->SetBinContent(27,0.005646);
   1->SetBinContent(28,0.001882);
   1->SetBinContent(29,0.002823);
   1->SetBinContent(30,0.002823);
   1->SetBinContent(31,0.002823);
   1->SetBinContent(32,0.000941);
   1->SetBinContent(33,0.000941);
   1->SetBinContent(34,0.000941);
   1->SetBinContent(35,0.000941);
   1->SetBinContent(36,0.001882);
   1->SetBinContent(37,0.000941);
   1->SetBinContent(38,0.000941);
   1->SetBinContent(51,0.000941);
   1->SetEntries(11060);
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
   2->SetBinContent(1,2.100347);
   2->SetBinContent(2,5.371047);
   2->SetBinContent(3,5.351291);
   2->SetBinContent(4,4.446241);
   2->SetBinContent(5,3.021623);
   2->SetBinContent(6,1.77663);
   2->SetBinContent(7,0.9353455);
   2->SetBinContent(8,0.3255859);
   2->SetBinContent(9,0.3302909);
   2->SetBinContent(10,0.5288428);
   2->SetBinContent(11,0.4328609);
   2->SetBinContent(12,0.3265269);
   2->SetBinContent(13,0.2305444);
   2->SetBinContent(14,0.1872587);
   2->SetBinContent(15,0.1562059);
   2->SetBinContent(16,0.1185661);
   2->SetBinContent(17,0.09504107);
   2->SetBinContent(18,0.07339805);
   2->SetBinContent(19,0.06398804);
   2->SetBinContent(20,0.05363704);
   2->SetBinContent(21,0.04516803);
   2->SetBinContent(22,0.03387602);
   2->SetBinContent(23,0.03199401);
   2->SetBinContent(24,0.03011201);
   2->SetBinContent(25,0.017879);
   2->SetBinContent(26,0.015056);
   2->SetBinContent(27,0.012233);
   2->SetBinContent(28,0.013174);
   2->SetBinContent(29,0.015997);
   2->SetBinContent(30,0.012233);
   2->SetBinContent(31,0.007528);
   2->SetBinContent(32,0.002823);
   2->SetBinContent(33,0.006587);
   2->SetBinContent(34,0.005646);
   2->SetBinContent(35,0.002823);
   2->SetBinContent(37,0.000941);
   2->SetBinContent(38,0.001882);
   2->SetBinContent(39,0.002823);
   2->SetBinContent(40,0.000941);
   2->SetBinContent(42,0.000941);
   2->SetBinContent(43,0.001882);
   2->SetBinContent(44,0.000941);
   2->SetBinContent(45,0.001882);
   2->SetBinContent(49,0.000941);
   2->SetBinContent(50,0.000941);
   2->SetBinContent(51,0.001882);
   2->SetEntries(27837);
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
   3->SetBinContent(1,10.78981);
   3->SetBinContent(2,27.12385);
   3->SetBinContent(3,26.20203);
   3->SetBinContent(4,20.47308);
   3->SetBinContent(5,13.52835);
   3->SetBinContent(6,7.054272);
   3->SetBinContent(7,2.868188);
   3->SetBinContent(8,0.8672839);
   3->SetBinContent(9,0.8536259);
   3->SetBinContent(10,1.133616);
   3->SetBinContent(11,1.010693);
   3->SetBinContent(12,0.6419262);
   3->SetBinContent(13,0.4780297);
   3->SetBinContent(14,0.3824238);
   3->SetBinContent(15,0.2595019);
   3->SetBinContent(16,0.2458439);
   3->SetBinContent(17,0.150238);
   3->SetBinContent(18,0.081948);
   3->SetBinContent(19,0.081948);
   3->SetBinContent(20,0.06146101);
   3->SetBinContent(21,0.06829);
   3->SetBinContent(22,0.054632);
   3->SetBinContent(23,0.020487);
   3->SetBinContent(24,0.034145);
   3->SetBinContent(25,0.006829);
   3->SetBinContent(26,0.034145);
   3->SetBinContent(27,0.013658);
   3->SetBinContent(28,0.006829);
   3->SetBinContent(38,0.006829);
   3->SetEntries(16772);
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
   4->SetBinContent(1,29.58706);
   4->SetBinContent(2,50.61315);
   4->SetBinContent(3,34.17945);
   4->SetBinContent(4,22.28027);
   4->SetBinContent(5,14.22091);
   4->SetBinContent(6,8.196581);
   4->SetBinContent(7,4.640164);
   4->SetBinContent(8,1.22055);
   4->SetBinContent(9,0.9995906);
   4->SetBinContent(10,1.578295);
   4->SetBinContent(11,1.241594);
   4->SetBinContent(12,0.9995906);
   4->SetBinContent(13,0.7365404);
   4->SetBinContent(14,0.4682292);
   4->SetBinContent(15,0.3630091);
   4->SetBinContent(16,0.2472671);
   4->SetBinContent(17,0.231484);
   4->SetBinContent(18,0.26305);
   4->SetBinContent(19,0.199918);
   4->SetBinContent(20,0.08943698);
   4->SetBinContent(21,0.08943698);
   4->SetBinContent(22,0.07365399);
   4->SetBinContent(23,0.047349);
   4->SetBinContent(24,0.05261);
   4->SetBinContent(25,0.015783);
   4->SetBinContent(26,0.031566);
   4->SetBinContent(27,0.010522);
   4->SetBinContent(28,0.015783);
   4->SetBinContent(29,0.015783);
   4->SetBinContent(30,0.010522);
   4->SetBinContent(31,0.005261);
   4->SetBinContent(33,0.005261);
   4->SetBinContent(34,0.005261);
   4->SetBinContent(39,0.005261);
   4->SetEntries(32835);
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
   5->SetBinContent(1,61.23806);
   5->SetBinContent(2,136.1636);
   5->SetBinContent(3,106.9123);
   5->SetBinContent(4,74.55412);
   5->SetBinContent(5,47.28629);
   5->SetBinContent(6,29.44041);
   5->SetBinContent(7,17.22485);
   5->SetBinContent(8,5.295252);
   5->SetBinContent(9,4.687598);
   5->SetBinContent(10,7.490248);
   5->SetBinContent(11,5.692088);
   5->SetBinContent(12,4.575988);
   5->SetBinContent(13,3.509494);
   5->SetBinContent(14,2.306587);
   5->SetBinContent(15,2.108169);
   5->SetBinContent(16,1.723737);
   5->SetBinContent(17,1.00448);
   5->SetBinContent(18,0.7564604);
   5->SetBinContent(19,0.7068564);
   5->SetBinContent(20,0.5208417);
   5->SetBinContent(21,0.3968318);
   5->SetBinContent(22,0.3844308);
   5->SetBinContent(23,0.3472279);
   5->SetBinContent(24,0.161213);
   5->SetBinContent(25,0.12401);
   5->SetBinContent(26,0.24802);
   5->SetBinContent(27,0.136411);
   5->SetBinContent(28,0.062005);
   5->SetBinContent(29,0.099208);
   5->SetBinContent(30,0.062005);
   5->SetBinContent(31,0.012401);
   5->SetBinContent(32,0.024802);
   5->SetBinContent(33,0.024802);
   5->SetBinContent(35,0.037203);
   5->SetBinContent(36,0.037203);
   5->SetBinContent(37,0.024802);
   5->SetBinContent(41,0.012401);
   5->SetBinContent(42,0.012401);
   5->SetBinContent(45,0.012401);
   5->SetBinContent(47,0.012401);
   5->SetEntries(41565);
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
   6->SetBinContent(1,1774.72);
   6->SetBinContent(2,3521.893);
   6->SetBinContent(3,2593.069);
   6->SetBinContent(4,1735.465);
   6->SetBinContent(5,1116.958);
   6->SetBinContent(6,684.5497);
   6->SetBinContent(7,345.1439);
   6->SetBinContent(8,86.91167);
   6->SetBinContent(9,67.1005);
   6->SetBinContent(10,125.6231);
   6->SetBinContent(11,113.0229);
   6->SetBinContent(12,79.32118);
   6->SetBinContent(13,62.09078);
   6->SetBinContent(14,46.37848);
   6->SetBinContent(15,37.57351);
   6->SetBinContent(16,25.80811);
   6->SetBinContent(17,21.40552);
   6->SetBinContent(18,17.45836);
   6->SetBinContent(19,11.68951);
   6->SetBinContent(20,8.046027);
   6->SetBinContent(21,6.983346);
   6->SetBinContent(22,6.831534);
   6->SetBinContent(23,4.857983);
   6->SetBinContent(24,2.808523);
   6->SetBinContent(25,1.745838);
   6->SetBinContent(26,2.201274);
   6->SetBinContent(27,1.973556);
   6->SetBinContent(28,1.062684);
   6->SetBinContent(29,1.214496);
   6->SetBinContent(30,0.151812);
   6->SetBinContent(31,0.607248);
   6->SetBinContent(32,0.531342);
   6->SetBinContent(34,0.227718);
   6->SetBinContent(35,0.151812);
   6->SetBinContent(36,0.075906);
   6->SetBinContent(37,0.075906);
   6->SetBinContent(38,0.151812);
   6->SetBinContent(39,0.151812);
   6->SetBinContent(40,0.075906);
   6->SetBinContent(42,0.075906);
   6->SetBinContent(50,0.075906);
   6->SetEntries(164730);
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
   7->SetBinContent(1,653.6432);
   7->SetBinContent(2,1640.02);
   7->SetBinContent(3,1213.214);
   7->SetBinContent(4,789.1413);
   7->SetBinContent(5,490.3132);
   7->SetBinContent(6,310.3327);
   7->SetBinContent(7,170.782);
   7->SetBinContent(8,50.72567);
   7->SetBinContent(9,38.52055);
   7->SetBinContent(10,64.98125);
   7->SetBinContent(11,60.58741);
   7->SetBinContent(12,45.74598);
   7->SetBinContent(13,37.00711);
   7->SetBinContent(14,31.39273);
   7->SetBinContent(15,22.50705);
   7->SetBinContent(16,21.38414);
   7->SetBinContent(17,16.99012);
   7->SetBinContent(18,13.91431);
   7->SetBinContent(19,12.30317);
   7->SetBinContent(20,9.666761);
   7->SetBinContent(21,8.934425);
   7->SetBinContent(22,6.590964);
   7->SetBinContent(23,5.22395);
   7->SetBinContent(24,4.97984);
   7->SetBinContent(25,4.052224);
   7->SetBinContent(26,3.856936);
   7->SetBinContent(27,2.929319);
   7->SetBinContent(28,2.929319);
   7->SetBinContent(29,2.001703);
   7->SetBinContent(30,1.46466);
   7->SetBinContent(31,1.367016);
   7->SetBinContent(32,1.415838);
   7->SetBinContent(33,1.171728);
   7->SetBinContent(34,0.9764398);
   7->SetBinContent(35,0.8299739);
   7->SetBinContent(36,0.6835079);
   7->SetBinContent(37,0.390576);
   7->SetBinContent(38,0.146466);
   7->SetBinContent(39,0.097644);
   7->SetBinContent(40,0.195288);
   7->SetBinContent(41,0.292932);
   7->SetBinContent(42,0.097644);
   7->SetBinContent(43,0.24411);
   7->SetBinContent(44,0.048822);
   7->SetBinContent(45,0.097644);
   7->SetBinContent(46,0.048822);
   7->SetBinContent(47,0.048822);
   7->SetBinContent(51,0.048822);
   7->SetEntries(117648);
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
   8->SetBinContent(1,19.07791);
   8->SetBinContent(2,57.9672);
   8->SetBinContent(3,49.16212);
   8->SetBinContent(4,34.19347);
   8->SetBinContent(5,29.7909);
   8->SetBinContent(6,21.86622);
   8->SetBinContent(7,14.96882);
   8->SetBinContent(8,4.40259);
   8->SetBinContent(9,5.576613);
   8->SetBinContent(10,7.924658);
   8->SetBinContent(11,7.337647);
   8->SetBinContent(12,4.549343);
   8->SetBinContent(13,3.522073);
   8->SetBinContent(14,4.40259);
   8->SetBinContent(15,3.522073);
   8->SetBinContent(16,2.054542);
   8->SetBinContent(17,4.40259);
   8->SetBinContent(18,2.788307);
   8->SetBinContent(19,1.907789);
   8->SetBinContent(20,1.46753);
   8->SetBinContent(21,1.174024);
   8->SetBinContent(22,0.587012);
   8->SetBinContent(23,1.027271);
   8->SetBinContent(24,1.174024);
   8->SetBinContent(25,0.293506);
   8->SetBinContent(26,0.440259);
   8->SetBinContent(27,0.440259);
   8->SetBinContent(28,0.587012);
   8->SetBinContent(29,0.733765);
   8->SetBinContent(30,0.293506);
   8->SetBinContent(31,0.587012);
   8->SetBinContent(33,0.293506);
   8->SetBinContent(34,0.440259);
   8->SetBinContent(38,0.293506);
   8->SetBinContent(41,0.146753);
   8->SetBinContent(42,0.146753);
   8->SetBinContent(43,0.146753);
   8->SetEntries(1974);
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
   9->SetBinContent(1,543.472);
   9->SetBinContent(2,1736.666);
   9->SetBinContent(3,1981.749);
   9->SetBinContent(4,1934.104);
   9->SetBinContent(5,1859.55);
   9->SetBinContent(6,1684.222);
   9->SetBinContent(7,1249.414);
   9->SetBinContent(8,457.2338);
   9->SetBinContent(9,434.4312);
   9->SetBinContent(10,639.1398);
   9->SetBinContent(11,547.7582);
   9->SetBinContent(12,462.3772);
   9->SetBinContent(13,384.0256);
   9->SetBinContent(14,336.706);
   9->SetBinContent(15,274.4705);
   9->SetBinContent(16,240.5252);
   9->SetBinContent(17,185.4954);
   9->SetBinContent(18,160.6377);
   9->SetBinContent(19,148.2945);
   9->SetBinContent(20,133.3799);
   9->SetBinContent(21,113.3216);
   9->SetBinContent(22,96.69196);
   9->SetBinContent(23,95.83475);
   9->SetBinContent(24,77.6621);
   9->SetBinContent(25,67.89001);
   9->SetBinContent(26,53.66049);
   9->SetBinContent(27,45.94568);
   9->SetBinContent(28,42.34544);
   9->SetBinContent(29,39.25952);
   9->SetBinContent(30,30.34465);
   9->SetBinContent(31,24.17287);
   9->SetBinContent(32,24.51575);
   9->SetBinContent(33,16.97247);
   9->SetBinContent(34,12.34362);
   9->SetBinContent(35,12.51505);
   9->SetBinContent(36,10.62922);
   9->SetBinContent(37,7.029002);
   9->SetBinContent(38,6.514684);
   9->SetBinContent(39,6.343245);
   9->SetBinContent(40,3.771658);
   9->SetBinContent(41,5.143171);
   9->SetBinContent(42,3.085902);
   9->SetBinContent(43,2.571585);
   9->SetBinContent(44,2.571585);
   9->SetBinContent(45,2.228707);
   9->SetBinContent(46,1.028634);
   9->SetBinContent(47,0.857195);
   9->SetBinContent(48,0.685756);
   9->SetBinContent(49,0.342878);
   9->SetBinContent(50,0.342878);
   9->SetBinContent(51,1.028634);
   9->SetEntries(94508);
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
   10->SetBinContent(1,7754.595);
   10->SetBinContent(2,16296.86);
   10->SetBinContent(3,10867.14);
   10->SetBinContent(4,6713.902);
   10->SetBinContent(5,4035.641);
   10->SetBinContent(6,2423.896);
   10->SetBinContent(7,1242.757);
   10->SetBinContent(8,315.3827);
   10->SetBinContent(9,222.8997);
   10->SetBinContent(10,384.0136);
   10->SetBinContent(11,316.8336);
   10->SetBinContent(12,235.8342);
   10->SetBinContent(13,181.32);
   10->SetBinContent(14,135.0713);
   10->SetBinContent(15,99.99381);
   10->SetBinContent(16,80.9414);
   10->SetBinContent(17,58.7977);
   10->SetBinContent(18,44.72919);
   10->SetBinContent(19,34.88755);
   10->SetBinContent(20,27.63249);
   10->SetBinContent(21,21.0714);
   10->SetBinContent(22,18.29555);
   10->SetBinContent(23,14.25792);
   10->SetBinContent(24,8.895408);
   10->SetBinContent(25,7.69673);
   10->SetBinContent(26,5.867179);
   10->SetBinContent(27,3.974541);
   10->SetBinContent(28,3.280574);
   10->SetBinContent(29,2.334255);
   10->SetBinContent(30,1.892639);
   10->SetBinContent(31,0.757056);
   10->SetBinContent(32,1.451024);
   10->SetBinContent(33,0.757056);
   10->SetBinContent(34,0.757056);
   10->SetBinContent(35,0.757056);
   10->SetBinContent(36,0.567792);
   10->SetBinContent(37,0.378528);
   10->SetBinContent(38,0.441616);
   10->SetBinContent(39,0.189264);
   10->SetBinContent(40,0.063088);
   10->SetBinContent(41,0.126176);
   10->SetBinContent(42,0.189264);
   10->SetBinContent(43,0.126176);
   10->SetBinContent(45,0.063088);
   10->SetBinContent(48,0.063088);
   10->SetEntries(816916);
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
   11->SetBinContent(1,1521.923);
   11->SetBinContent(2,3263.348);
   11->SetBinContent(3,2429.222);
   11->SetBinContent(4,1507.289);
   11->SetBinContent(5,760.9604);
   11->SetBinContent(6,541.4527);
   11->SetBinContent(7,380.4803);
   11->SetBinContent(8,102.437);
   11->SetBinContent(9,117.0709);
   11->SetBinContent(10,87.80315);
   11->SetBinContent(11,146.3386);
   11->SetBinContent(12,73.1693);
   11->SetBinContent(13,73.1693);
   11->SetBinContent(14,29.26772);
   11->SetBinContent(15,43.90158);
   11->SetBinContent(16,14.63386);
   11->SetBinContent(18,29.26772);
   11->SetBinContent(19,14.63386);
   11->SetBinContent(20,14.63386);
   11->SetBinContent(21,14.63386);
   11->SetBinContent(22,29.26772);
   11->SetBinContent(28,14.63386);
   11->SetEntries(766);
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
   12->SetBinContent(1,11881.37);
   12->SetBinContent(2,18783.37);
   12->SetBinContent(3,9927.493);
   12->SetBinContent(4,5874.016);
   12->SetBinContent(5,3526.987);
   12->SetBinContent(6,1972.828);
   12->SetBinContent(7,1110.111);
   12->SetBinContent(8,456.7303);
   12->SetBinContent(9,348.8912);
   12->SetBinContent(10,723.1573);
   12->SetBinContent(11,748.5313);
   12->SetBinContent(12,723.1573);
   12->SetBinContent(13,558.2261);
   12->SetBinContent(14,608.9742);
   12->SetBinContent(15,589.9437);
   12->SetBinContent(16,539.1956);
   12->SetBinContent(17,463.0738);
   12->SetBinContent(18,336.2043);
   12->SetBinContent(19,367.9216);
   12->SetBinContent(20,298.1434);
   12->SetBinContent(21,361.5782);
   12->SetBinContent(22,329.8608);
   12->SetBinContent(23,298.1434);
   12->SetBinContent(24,253.7391);
   12->SetBinContent(25,120.5261);
   12->SetBinContent(26,171.2739);
   12->SetBinContent(27,139.5565);
   12->SetBinContent(28,120.5261);
   12->SetBinContent(29,107.8391);
   12->SetBinContent(30,69.77827);
   12->SetBinContent(31,63.43479);
   12->SetBinContent(32,69.77827);
   12->SetBinContent(33,69.77827);
   12->SetBinContent(34,38.06087);
   12->SetBinContent(35,12.68696);
   12->SetBinContent(36,76.12174);
   12->SetBinContent(37,76.12174);
   12->SetBinContent(38,31.71739);
   12->SetBinContent(39,19.03043);
   12->SetBinContent(40,38.06087);
   12->SetBinContent(41,12.68696);
   12->SetBinContent(42,19.03043);
   12->SetBinContent(43,6.343478);
   12->SetBinContent(44,12.68696);
   12->SetBinContent(46,12.68696);
   12->SetBinContent(51,25.37391);
   12->SetEntries(9836);
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
   13->SetBinContent(1,13133.49);
   13->SetBinContent(2,30264.07);
   13->SetBinContent(3,16885.9);
   13->SetBinContent(4,9870.518);
   13->SetBinContent(5,5791.792);
   13->SetBinContent(6,3344.553);
   13->SetBinContent(7,1468.341);
   13->SetBinContent(8,734.1704);
   13->SetBinContent(9,571.0215);
   13->SetBinContent(10,1060.468);
   13->SetBinContent(11,734.1704);
   13->SetBinContent(12,489.447);
   13->SetBinContent(13,244.7235);
   13->SetBinContent(14,489.447);
   13->SetBinContent(15,163.149);
   13->SetBinContent(16,326.298);
   13->SetBinContent(17,81.57449);
   13->SetBinContent(18,326.298);
   13->SetBinContent(19,81.57449);
   13->SetBinContent(21,81.57449);
   13->SetBinContent(24,163.149);
   13->SetBinContent(25,81.57449);
   13->SetBinContent(37,81.57449);
   13->SetEntries(1060);
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
   14->SetBinContent(1,18337.53);
   14->SetBinContent(2,19348.89);
   14->SetBinContent(3,6104.586);
   14->SetBinContent(4,1982.49);
   14->SetBinContent(5,685.0115);
   14->SetBinContent(6,282.0636);
   14->SetBinContent(7,124.9139);
   14->SetBinContent(8,24.17688);
   14->SetBinContent(9,4.029479);
   14->SetBinContent(10,16.11792);
   14->SetBinContent(11,32.23584);
   14->SetBinContent(12,12.08844);
   14->SetBinContent(13,16.11792);
   14->SetBinContent(14,32.23584);
   14->SetBinContent(15,24.17688);
   14->SetBinContent(16,4.029479);
   14->SetBinContent(17,4.029479);
   14->SetBinContent(19,20.1474);
   14->SetBinContent(22,4.029479);
   14->SetBinContent(24,4.029479);
   14->SetBinContent(27,4.029479);
   14->SetBinContent(28,4.029479);
   14->SetBinContent(29,4.029479);
   14->SetEntries(11683);
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
   15->SetBinContent(1,1085.461);
   15->SetBinContent(2,1189.756);
   15->SetBinContent(3,521.485);
   15->SetBinContent(4,254.9481);
   15->SetBinContent(5,108.1597);
   15->SetBinContent(6,65.6684);
   15->SetBinContent(7,19.31424);
   15->SetBinContent(8,3.862847);
   15->SetBinContent(9,3.862847);
   15->SetBinContent(10,38.62847);
   15->SetBinContent(11,19.31424);
   15->SetBinContent(12,23.17708);
   15->SetBinContent(13,19.31424);
   15->SetBinContent(15,7.725694);
   15->SetBinContent(18,3.862847);
   15->SetBinContent(20,3.862847);
   15->SetBinContent(21,3.862847);
   15->SetBinContent(25,3.862847);
   15->SetEntries(874);
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
   16->SetBinContent(1,15638.27);
   16->SetBinContent(2,24150.84);
   16->SetBinContent(3,10361.83);
   16->SetBinContent(4,4327.212);
   16->SetBinContent(5,1904.732);
   16->SetBinContent(6,819.8359);
   16->SetBinContent(7,320.537);
   16->SetBinContent(8,98.62672);
   16->SetBinContent(9,73.97004);
   16->SetBinContent(10,98.62672);
   16->SetBinContent(11,135.6117);
   16->SetBinContent(12,92.46255);
   16->SetBinContent(13,80.13421);
   16->SetBinContent(14,55.47753);
   16->SetBinContent(15,30.82085);
   16->SetBinContent(16,49.31336);
   16->SetBinContent(17,18.49251);
   16->SetBinContent(18,30.82085);
   16->SetBinContent(19,12.32834);
   16->SetBinContent(20,6.16417);
   16->SetBinContent(21,12.32834);
   16->SetBinContent(22,6.16417);
   16->SetBinContent(23,18.49251);
   16->SetBinContent(24,18.49251);
   16->SetBinContent(25,6.16417);
   16->SetBinContent(26,12.32834);
   16->SetBinContent(27,12.32834);
   16->SetBinContent(28,6.16417);
   16->SetBinContent(29,6.16417);
   16->SetBinContent(30,6.16417);
   16->SetBinContent(33,6.16417);
   16->SetBinContent(44,6.16417);
   16->SetBinContent(51,6.16417);
   16->SetEntries(9479);
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
   17->SetBinContent(1,9018.71);
   17->SetBinContent(2,13563.12);
   17->SetBinContent(3,6512.221);
   17->SetBinContent(4,3677.76);
   17->SetBinContent(5,2693.898);
   17->SetBinContent(6,1874.014);
   17->SetBinContent(7,960.4321);
   17->SetBinContent(8,351.3776);
   17->SetBinContent(9,398.2279);
   17->SetBinContent(10,890.1566);
   17->SetBinContent(11,1054.133);
   17->SetBinContent(12,913.5817);
   17->SetBinContent(13,1007.282);
   17->SetBinContent(14,609.0545);
   17->SetBinContent(15,726.1804);
   17->SetBinContent(16,538.779);
   17->SetBinContent(17,468.5034);
   17->SetBinContent(18,515.3538);
   17->SetBinContent(19,304.5273);
   17->SetBinContent(20,327.9524);
   17->SetBinContent(21,234.2517);
   17->SetBinContent(22,234.2517);
   17->SetBinContent(23,187.4014);
   17->SetBinContent(24,374.8028);
   17->SetBinContent(25,210.8266);
   17->SetBinContent(26,234.2517);
   17->SetBinContent(27,163.9762);
   17->SetBinContent(28,163.9762);
   17->SetBinContent(29,70.27553);
   17->SetBinContent(30,93.70071);
   17->SetBinContent(31,70.27553);
   17->SetBinContent(32,117.1259);
   17->SetBinContent(33,117.1259);
   17->SetBinContent(34,46.85035);
   17->SetBinContent(35,93.70071);
   17->SetBinContent(36,46.85035);
   17->SetBinContent(37,23.42518);
   17->SetBinContent(38,46.85035);
   17->SetBinContent(39,46.85035);
   17->SetBinContent(42,23.42518);
   17->SetBinContent(43,23.42518);
   17->SetBinContent(46,23.42518);
   17->SetEntries(2094);
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
