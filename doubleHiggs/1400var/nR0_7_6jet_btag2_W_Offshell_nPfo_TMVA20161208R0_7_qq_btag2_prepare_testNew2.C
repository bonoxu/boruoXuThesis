{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:05:43 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-13.49206,-3.099507,65.87302,5.405535);
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
   
   TH1F *THStack_stack_29 = new TH1F("THStack_stack_29","",50,0,50);
   THStack_stack_29->SetMinimum(0.02700227);
   THStack_stack_29->SetMaximum(53104.49);
   THStack_stack_29->SetDirectory(0);
   THStack_stack_29->SetStats(0);
   THStack_stack_29->SetLineWidth(2);
   THStack_stack_29->SetMarkerSize(1.2);
   THStack_stack_29->GetXaxis()->SetTitle("N_{PFO,W*}");
   THStack_stack_29->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_29->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_29->GetXaxis()->SetLabelColor(ci);
   THStack_stack_29->GetXaxis()->SetLabelFont(42);
   THStack_stack_29->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_29->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_29->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_29->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_29->GetXaxis()->SetTitleColor(ci);
   THStack_stack_29->GetXaxis()->SetTitleFont(42);
   THStack_stack_29->GetYaxis()->SetTitle("Number of events");
   THStack_stack_29->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_29->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_29->GetYaxis()->SetLabelColor(ci);
   THStack_stack_29->GetYaxis()->SetLabelFont(42);
   THStack_stack_29->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_29->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_29->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_29->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_29->GetYaxis()->SetTitleColor(ci);
   THStack_stack_29->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_29->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_29->GetZaxis()->SetLabelColor(ci);
   THStack_stack_29->GetZaxis()->SetLabelFont(42);
   THStack_stack_29->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_29->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_29->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_29->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_29->GetZaxis()->SetTitleColor(ci);
   THStack_stack_29->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_29);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,50);
   0->SetBinContent(5,0.001882);
   0->SetBinContent(6,0.011292);
   0->SetBinContent(7,0.00941);
   0->SetBinContent(8,0.022584);
   0->SetBinContent(9,0.035758);
   0->SetBinContent(10,0.07528004);
   0->SetBinContent(11,0.1166841);
   0->SetBinContent(12,0.1750261);
   0->SetBinContent(13,0.2051382);
   0->SetBinContent(14,0.3105298);
   0->SetBinContent(15,0.3406416);
   0->SetBinContent(16,0.4403869);
   0->SetBinContent(17,0.5438969);
   0->SetBinContent(18,0.5796552);
   0->SetBinContent(19,0.7057503);
   0->SetBinContent(20,0.7377446);
   0->SetBinContent(21,0.7584468);
   0->SetBinContent(22,0.7622108);
   0->SetBinContent(23,0.7735029);
   0->SetBinContent(24,0.9372383);
   0->SetBinContent(25,0.7716209);
   0->SetBinContent(26,0.7791489);
   0->SetBinContent(27,0.6982222);
   0->SetBinContent(28,0.7528007);
   0->SetBinContent(29,0.6417617);
   0->SetBinContent(30,0.6455258);
   0->SetBinContent(31,0.5890653);
   0->SetBinContent(32,0.5533069);
   0->SetBinContent(33,0.4422688);
   0->SetBinContent(34,0.4874365);
   0->SetBinContent(35,0.3876912);
   0->SetBinContent(36,0.3255857);
   0->SetBinContent(37,0.2823);
   0->SetBinContent(38,0.2333682);
   0->SetBinContent(39,0.2145482);
   0->SetBinContent(40,0.1806721);
   0->SetBinContent(41,0.1731441);
   0->SetBinContent(42,0.1392681);
   0->SetBinContent(43,0.1298581);
   0->SetBinContent(44,0.1110381);
   0->SetBinContent(45,0.1016281);
   0->SetBinContent(46,0.06775203);
   0->SetBinContent(47,0.08280805);
   0->SetBinContent(48,0.035758);
   0->SetBinContent(49,0.04705001);
   0->SetBinContent(50,0.04893202);
   0->SetBinContent(51,0.2145482);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,50);
   1->SetBinContent(4,0.000941);
   1->SetBinContent(5,0.007528);
   1->SetBinContent(6,0.015056);
   1->SetBinContent(7,0.03011201);
   1->SetBinContent(8,0.03858102);
   1->SetBinContent(9,0.08469006);
   1->SetBinContent(10,0.1148021);
   1->SetBinContent(11,0.1533829);
   1->SetBinContent(12,0.2004326);
   1->SetBinContent(13,0.2597153);
   1->SetBinContent(14,0.2606563);
   1->SetBinContent(15,0.2973557);
   1->SetBinContent(16,0.337819);
   1->SetBinContent(17,0.3556982);
   1->SetBinContent(18,0.4074536);
   1->SetBinContent(19,0.4215688);
   1->SetBinContent(20,0.453563);
   1->SetBinContent(21,0.4817933);
   1->SetBinContent(22,0.4601501);
   1->SetBinContent(23,0.4667372);
   1->SetBinContent(24,0.4385069);
   1->SetBinContent(25,0.4074536);
   1->SetBinContent(26,0.4206277);
   1->SetBinContent(27,0.4178047);
   1->SetBinContent(28,0.3773414);
   1->SetBinContent(29,0.3528751);
   1->SetBinContent(30,0.334055);
   1->SetBinContent(31,0.3199399);
   1->SetBinContent(32,0.2992377);
   1->SetBinContent(33,0.2757125);
   1->SetBinContent(34,0.2380723);
   1->SetBinContent(35,0.2060785);
   1->SetBinContent(36,0.1891406);
   1->SetBinContent(37,0.1712618);
   1->SetBinContent(38,0.1543239);
   1->SetBinContent(39,0.135504);
   1->SetBinContent(40,0.1157431);
   1->SetBinContent(41,0.1016281);
   1->SetBinContent(42,0.1072741);
   1->SetBinContent(43,0.07998506);
   1->SetBinContent(44,0.06775205);
   1->SetBinContent(45,0.05081403);
   1->SetBinContent(46,0.05269603);
   1->SetBinContent(47,0.03669902);
   1->SetBinContent(48,0.02634801);
   1->SetBinContent(49,0.02352501);
   1->SetBinContent(50,0.02728901);
   1->SetBinContent(51,0.13174);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,50);
   2->SetBinContent(3,0.002823);
   2->SetBinContent(4,0.013174);
   2->SetBinContent(5,0.03575802);
   2->SetBinContent(6,0.07998506);
   2->SetBinContent(7,0.1195071);
   2->SetBinContent(8,0.2023146);
   2->SetBinContent(9,0.2775945);
   2->SetBinContent(10,0.3472291);
   2->SetBinContent(11,0.4178047);
   2->SetBinContent(12,0.5693049);
   2->SetBinContent(13,0.6417602);
   2->SetBinContent(14,0.7226844);
   2->SetBinContent(15,0.8459526);
   2->SetBinContent(16,0.8920605);
   2->SetBinContent(17,0.9767486);
   2->SetBinContent(18,1.035092);
   2->SetBinContent(19,1.052971);
   2->SetBinContent(20,1.0605);
   2->SetBinContent(21,1.150839);
   2->SetBinContent(22,1.071792);
   2->SetBinContent(23,1.084026);
   2->SetBinContent(24,1.083084);
   2->SetBinContent(25,1.016271);
   2->SetBinContent(26,0.9673388);
   2->SetBinContent(27,0.960752);
   2->SetBinContent(28,0.9193489);
   2->SetBinContent(29,0.8760639);
   2->SetBinContent(30,0.7904348);
   2->SetBinContent(31,0.7292712);
   2->SetBinContent(32,0.7142156);
   2->SetBinContent(33,0.6295275);
   2->SetBinContent(34,0.5824786);
   2->SetBinContent(35,0.5288428);
   2->SetBinContent(36,0.454504);
   2->SetBinContent(37,0.4319198);
   2->SetBinContent(38,0.3679313);
   2->SetBinContent(39,0.3462881);
   2->SetBinContent(40,0.2832405);
   2->SetBinContent(41,0.2550103);
   2->SetBinContent(42,0.2314854);
   2->SetBinContent(43,0.1985506);
   2->SetBinContent(44,0.1599699);
   2->SetBinContent(45,0.1279761);
   2->SetBinContent(46,0.1204481);
   2->SetBinContent(47,0.1091561);
   2->SetBinContent(48,0.09974608);
   2->SetBinContent(49,0.08280806);
   2->SetBinContent(50,0.09315907);
   2->SetBinContent(51,0.4347429);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,50);
   3->SetBinContent(3,0.006829);
   3->SetBinContent(4,0.034145);
   3->SetBinContent(5,0.13658);
   3->SetBinContent(6,0.2458439);
   3->SetBinContent(7,0.3209628);
   3->SetBinContent(8,0.4916877);
   3->SetBinContent(9,1.003864);
   3->SetBinContent(10,1.352145);
   3->SetBinContent(11,1.796031);
   3->SetBinContent(12,2.417472);
   3->SetBinContent(13,2.929649);
   3->SetBinContent(14,3.2711);
   3->SetBinContent(15,3.851567);
   3->SetBinContent(16,4.336416);
   3->SetBinContent(17,4.800773);
   3->SetBinContent(18,4.896376);
   3->SetBinContent(19,4.923691);
   3->SetBinContent(20,5.142212);
   3->SetBinContent(21,5.10124);
   3->SetBinContent(22,5.353905);
   3->SetBinContent(23,5.258302);
   3->SetBinContent(24,5.032952);
   3->SetBinContent(25,5.244644);
   3->SetBinContent(26,4.834917);
   3->SetBinContent(27,4.923691);
   3->SetBinContent(28,3.947173);
   3->SetBinContent(29,3.83108);
   3->SetBinContent(30,3.346219);
   3->SetBinContent(31,3.298416);
   3->SetBinContent(32,2.875017);
   3->SetBinContent(33,2.915991);
   3->SetBinContent(34,2.226259);
   3->SetBinContent(35,2.198943);
   3->SetBinContent(36,1.570673);
   3->SetBinContent(37,1.618477);
   3->SetBinContent(38,1.188248);
   3->SetBinContent(39,1.208735);
   3->SetBinContent(40,1.017522);
   3->SetBinContent(41,0.9492322);
   3->SetBinContent(42,0.6965584);
   3->SetBinContent(43,0.580465);
   3->SetBinContent(44,0.5394908);
   3->SetBinContent(45,0.3687658);
   3->SetBinContent(46,0.3960818);
   3->SetBinContent(47,0.3209628);
   3->SetBinContent(48,0.3004759);
   3->SetBinContent(49,0.2185279);
   3->SetBinContent(50,0.2048699);
   3->SetBinContent(51,1.010693);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,50);
   4->SetBinContent(4,0.121003);
   4->SetBinContent(5,0.2893551);
   4->SetBinContent(6,0.6997133);
   4->SetBinContent(7,1.27316);
   4->SetBinContent(8,2.125433);
   4->SetBinContent(9,3.240753);
   4->SetBinContent(10,4.371856);
   4->SetBinContent(11,5.224129);
   4->SetBinContent(12,5.934357);
   4->SetBinContent(13,7.128591);
   4->SetBinContent(14,8.012431);
   4->SetBinContent(15,8.001908);
   4->SetBinContent(16,8.738507);
   4->SetBinContent(17,8.806906);
   4->SetBinContent(18,9.001578);
   4->SetBinContent(19,8.554358);
   4->SetBinContent(20,7.844079);
   4->SetBinContent(21,8.317594);
   4->SetBinContent(22,7.349551);
   4->SetBinContent(23,7.202244);
   4->SetBinContent(24,6.707716);
   4->SetBinContent(25,6.349971);
   4->SetBinContent(26,5.392479);
   4->SetBinContent(27,5.00843);
   4->SetBinContent(28,4.7296);
   4->SetBinContent(29,4.087765);
   4->SetBinContent(30,3.793152);
   4->SetBinContent(31,3.361755);
   4->SetBinContent(32,3.093446);
   4->SetBinContent(33,2.672571);
   4->SetBinContent(34,2.283261);
   4->SetBinContent(35,1.88869);
   4->SetBinContent(36,1.715079);
   4->SetBinContent(37,1.357335);
   4->SetBinContent(38,1.336291);
   4->SetBinContent(39,1.067983);
   4->SetBinContent(40,0.8628045);
   4->SetBinContent(41,0.8996315);
   4->SetBinContent(42,0.6839303);
   4->SetBinContent(43,0.5418832);
   4->SetBinContent(44,0.5050562);
   4->SetBinContent(45,0.3735311);
   4->SetBinContent(46,0.3524871);
   4->SetBinContent(47,0.2683111);
   4->SetBinContent(48,0.226223);
   4->SetBinContent(49,0.194657);
   4->SetBinContent(50,0.10522);
   4->SetBinContent(51,0.6471033);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,50);
   5->SetBinContent(3,0.037203);
   5->SetBinContent(4,0.099208);
   5->SetBinContent(5,0.4712377);
   5->SetBinContent(6,1.054084);
   5->SetBinContent(7,2.480202);
   5->SetBinContent(8,4.377571);
   5->SetBinContent(9,6.758583);
   5->SetBinContent(10,9.102349);
   5->SetBinContent(11,13.72778);
   5->SetBinContent(12,16.22033);
   5->SetBinContent(13,19.37033);
   5->SetBinContent(14,22.01186);
   5->SetBinContent(15,25.26108);
   5->SetBinContent(16,25.3975);
   5->SetBinContent(17,27.28254);
   5->SetBinContent(18,27.92742);
   5->SetBinContent(19,26.71206);
   5->SetBinContent(20,26.29041);
   5->SetBinContent(21,25.57112);
   5->SetBinContent(22,24.70301);
   5->SetBinContent(23,22.96679);
   5->SetBinContent(24,20.59808);
   5->SetBinContent(25,20.20123);
   5->SetBinContent(26,18.11777);
   5->SetBinContent(27,16.38155);
   5->SetBinContent(28,14.29821);
   5->SetBinContent(29,12.90934);
   5->SetBinContent(30,11.69408);
   5->SetBinContent(31,9.995194);
   5->SetBinContent(32,9.288359);
   5->SetBinContent(33,7.725869);
   5->SetBinContent(34,6.795786);
   5->SetBinContent(35,6.064121);
   5->SetBinContent(36,5.456467);
   5->SetBinContent(37,4.067543);
   5->SetBinContent(38,3.782318);
   5->SetBinContent(39,3.311076);
   5->SetBinContent(40,2.579411);
   5->SetBinContent(41,2.170174);
   5->SetBinContent(42,2.207378);
   5->SetBinContent(43,1.674133);
   5->SetBinContent(44,1.488119);
   5->SetBinContent(45,1.215297);
   5->SetBinContent(46,1.103688);
   5->SetBinContent(47,0.9672771);
   5->SetBinContent(48,0.7812623);
   5->SetBinContent(49,0.5208417);
   5->SetBinContent(50,0.4092328);
   5->SetBinContent(51,1.822945);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,50);
   6->SetBinContent(3,0.9867779);
   6->SetBinContent(4,4.782077);
   6->SetBinContent(5,13.28353);
   6->SetBinContent(6,36.58675);
   6->SetBinContent(7,70.36441);
   6->SetBinContent(8,122.8147);
   6->SetBinContent(9,183.4682);
   6->SetBinContent(10,272.8138);
   6->SetBinContent(11,364.6494);
   6->SetBinContent(12,447.6051);
   6->SetBinContent(13,524.7218);
   6->SetBinContent(14,585.6158);
   6->SetBinContent(15,652.0526);
   6->SetBinContent(16,653.799);
   6->SetBinContent(17,682.8033);
   6->SetBinContent(18,691.535);
   6->SetBinContent(19,663.5936);
   6->SetBinContent(20,636.0319);
   6->SetBinContent(21,622.1371);
   6->SetBinContent(22,590.0956);
   6->SetBinContent(23,538.8444);
   6->SetBinContent(24,498.9116);
   6->SetBinContent(25,448.5918);
   6->SetBinContent(26,418.3847);
   6->SetBinContent(27,365.6361);
   6->SetBinContent(28,322.8301);
   6->SetBinContent(29,294.9758);
   6->SetBinContent(30,255.5091);
   6->SetBinContent(31,231.4449);
   6->SetBinContent(32,198.0434);
   6->SetBinContent(33,173.7514);
   6->SetBinContent(34,147.4098);
   6->SetBinContent(35,124.8641);
   6->SetBinContent(36,106.1915);
   6->SetBinContent(37,95.56482);
   6->SetBinContent(38,75.52594);
   6->SetBinContent(39,66.56917);
   6->SetBinContent(40,58.21963);
   6->SetBinContent(41,46.15076);
   6->SetBinContent(42,38.25666);
   6->SetBinContent(43,31.50111);
   6->SetBinContent(44,26.56717);
   6->SetBinContent(45,23.68272);
   6->SetBinContent(46,18.59697);
   6->SetBinContent(47,14.2703);
   6->SetBinContent(48,12.06903);
   6->SetBinContent(49,10.70273);
   6->SetBinContent(50,8.046027);
   6->SetBinContent(51,33.24694);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,50);
   7->SetBinContent(3,0.146466);
   7->SetBinContent(4,1.318194);
   7->SetBinContent(5,4.735731);
   7->SetBinContent(6,12.40082);
   7->SetBinContent(7,25.19229);
   7->SetBinContent(8,42.27972);
   7->SetBinContent(9,74.69653);
   7->SetBinContent(10,109.9449);
   7->SetBinContent(11,152.3249);
   7->SetBinContent(12,202.4714);
   7->SetBinContent(13,234.6003);
   7->SetBinContent(14,282.0612);
   7->SetBinContent(15,312.4323);
   7->SetBinContent(16,327.7155);
   7->SetBinContent(17,333.1843);
   7->SetBinContent(18,343.1452);
   7->SetBinContent(19,333.8679);
   7->SetBinContent(20,319.8054);
   7->SetBinContent(21,307.7448);
   7->SetBinContent(22,283.7702);
   7->SetBinContent(23,262.4323);
   7->SetBinContent(24,245.5866);
   7->SetBinContent(25,211.5534);
   7->SetBinContent(26,185.528);
   7->SetBinContent(27,165.4597);
   7->SetBinContent(28,149.5417);
   7->SetBinContent(29,126.0557);
   7->SetBinContent(30,112.0442);
   7->SetBinContent(31,92.56483);
   7->SetBinContent(32,79.96915);
   7->SetBinContent(33,68.05695);
   7->SetBinContent(34,61.66146);
   7->SetBinContent(35,47.89408);
   7->SetBinContent(36,39.54578);
   7->SetBinContent(37,33.58968);
   7->SetBinContent(38,28.95161);
   7->SetBinContent(39,23.67879);
   7->SetBinContent(40,22.45823);
   7->SetBinContent(41,16.0625);
   7->SetBinContent(42,13.47491);
   7->SetBinContent(43,9.959696);
   7->SetBinContent(44,8.690313);
   7->SetBinContent(45,7.274471);
   7->SetBinContent(46,5.760991);
   7->SetBinContent(47,4.247511);
   7->SetBinContent(48,3.417539);
   7->SetBinContent(49,2.880497);
   7->SetBinContent(50,2.245812);
   7->SetBinContent(51,9.617939);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,50);
   8->SetBinContent(4,1.174024);
   8->SetBinContent(5,0.293506);
   8->SetBinContent(6,1.027271);
   8->SetBinContent(7,1.761036);
   8->SetBinContent(8,2.93506);
   8->SetBinContent(9,4.40259);
   8->SetBinContent(10,5.42986);
   8->SetBinContent(11,7.190894);
   8->SetBinContent(12,9.538944);
   8->SetBinContent(13,10.71297);
   8->SetBinContent(14,13.79479);
   8->SetBinContent(15,12.91427);
   8->SetBinContent(16,13.79479);
   8->SetBinContent(17,15.84934);
   8->SetBinContent(18,12.91427);
   8->SetBinContent(19,14.23505);
   8->SetBinContent(20,16.14284);
   8->SetBinContent(21,14.23505);
   8->SetBinContent(22,12.47401);
   8->SetBinContent(23,12.1805);
   8->SetBinContent(24,10.12596);
   8->SetBinContent(25,10.56622);
   8->SetBinContent(26,11.887);
   8->SetBinContent(27,9.832451);
   8->SetBinContent(28,8.658424);
   8->SetBinContent(29,8.071411);
   8->SetBinContent(30,6.163624);
   8->SetBinContent(31,4.696096);
   8->SetBinContent(32,4.549343);
   8->SetBinContent(33,3.081813);
   8->SetBinContent(34,3.522073);
   8->SetBinContent(35,2.641554);
   8->SetBinContent(36,1.761036);
   8->SetBinContent(37,2.641554);
   8->SetBinContent(38,3.228566);
   8->SetBinContent(39,2.201295);
   8->SetBinContent(40,2.641554);
   8->SetBinContent(41,0.880518);
   8->SetBinContent(42,1.761036);
   8->SetBinContent(43,0.880518);
   8->SetBinContent(44,1.761036);
   8->SetBinContent(45,0.440259);
   8->SetBinContent(46,0.880518);
   8->SetBinContent(47,0.733765);
   8->SetBinContent(48,0.733765);
   8->SetBinContent(49,0.587012);
   8->SetBinContent(51,1.761036);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,50);
   9->SetBinContent(3,0.685756);
   9->SetBinContent(4,2.743024);
   9->SetBinContent(5,10.9721);
   9->SetBinContent(6,20.05836);
   9->SetBinContent(7,36.34504);
   9->SetBinContent(8,55.88921);
   9->SetBinContent(9,95.14899);
   9->SetBinContent(10,130.9798);
   9->SetBinContent(11,168.1807);
   9->SetBinContent(12,212.7531);
   9->SetBinContent(13,259.2116);
   9->SetBinContent(14,298.8161);
   9->SetBinContent(15,347.1643);
   9->SetBinContent(16,391.5693);
   9->SetBinContent(17,413.5146);
   9->SetBinContent(18,451.0617);
   9->SetBinContent(19,489.8089);
   9->SetBinContent(20,504.8963);
   9->SetBinContent(21,531.2992);
   9->SetBinContent(22,527.6988);
   9->SetBinContent(23,545.8723);
   9->SetBinContent(24,540.9003);
   9->SetBinContent(25,544.3292);
   9->SetBinContent(26,572.6181);
   9->SetBinContent(27,542.9576);
   9->SetBinContent(28,547.2438);
   9->SetBinContent(29,536.7855);
   9->SetBinContent(30,510.0397);
   9->SetBinContent(31,501.6388);
   9->SetBinContent(32,469.2351);
   9->SetBinContent(33,446.7755);
   9->SetBinContent(34,420.544);
   9->SetBinContent(35,406.3138);
   9->SetBinContent(36,386.9402);
   9->SetBinContent(37,357.9655);
   9->SetBinContent(38,335.6773);
   9->SetBinContent(39,316.3037);
   9->SetBinContent(40,282.7);
   9->SetBinContent(41,266.4124);
   9->SetBinContent(42,240.1823);
   9->SetBinContent(43,228.0106);
   9->SetBinContent(44,212.9246);
   9->SetBinContent(45,198.0099);
   9->SetBinContent(46,179.3238);
   9->SetBinContent(47,161.4948);
   9->SetBinContent(48,143.8373);
   9->SetBinContent(49,136.1228);
   9->SetBinContent(50,120.865);
   9->SetBinContent(51,1101.678);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,50);
   10->SetBinContent(3,2.902046);
   10->SetBinContent(4,13.12233);
   10->SetBinContent(5,46.55873);
   10->SetBinContent(6,117.5321);
   10->SetBinContent(7,253.0591);
   10->SetBinContent(8,468.3513);
   10->SetBinContent(9,785.2704);
   10->SetBinContent(10,1147.966);
   10->SetBinContent(11,1586.519);
   10->SetBinContent(12,1993.96);
   10->SetBinContent(13,2375.333);
   10->SetBinContent(14,2695.502);
   10->SetBinContent(15,2924.086);
   10->SetBinContent(16,3029.529);
   10->SetBinContent(17,3116.831);
   10->SetBinContent(18,3037.843);
   10->SetBinContent(19,2962.761);
   10->SetBinContent(20,2817.195);
   10->SetBinContent(21,2636.293);
   10->SetBinContent(22,2427.424);
   10->SetBinContent(23,2189.958);
   10->SetBinContent(24,1999.324);
   10->SetBinContent(25,1794.847);
   10->SetBinContent(26,1569.29);
   10->SetBinContent(27,1409.684);
   10->SetBinContent(28,1211.455);
   10->SetBinContent(29,1060.684);
   10->SetBinContent(30,926.1958);
   10->SetBinContent(31,794.1689);
   10->SetBinContent(32,675.269);
   10->SetBinContent(33,571.2632);
   10->SetBinContent(34,479.4534);
   10->SetBinContent(35,408.1101);
   10->SetBinContent(36,344.7779);
   10->SetBinContent(37,292.7371);
   10->SetBinContent(38,237.9163);
   10->SetBinContent(39,203.0878);
   10->SetBinContent(40,161.8867);
   10->SetBinContent(41,135.5761);
   10->SetBinContent(42,115.5764);
   10->SetBinContent(43,95.19917);
   10->SetBinContent(44,74.82191);
   10->SetBinContent(45,62.70912);
   10->SetBinContent(46,51.66882);
   10->SetBinContent(47,43.53053);
   10->SetBinContent(48,33.56271);
   10->SetBinContent(49,29.90364);
   10->SetBinContent(50,22.27006);
   10->SetBinContent(51,101.6341);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,50);
   11->SetBinContent(3,14.63386);
   11->SetBinContent(5,29.26772);
   11->SetBinContent(6,14.63386);
   11->SetBinContent(7,43.90158);
   11->SetBinContent(8,43.90158);
   11->SetBinContent(9,278.0434);
   11->SetBinContent(10,292.6772);
   11->SetBinContent(11,380.4803);
   11->SetBinContent(12,468.2834);
   11->SetBinContent(13,556.0865);
   11->SetBinContent(14,687.7912);
   11->SetBinContent(15,526.8188);
   11->SetBinContent(16,746.3266);
   11->SetBinContent(17,643.8896);
   11->SetBinContent(18,439.0157);
   11->SetBinContent(19,541.4527);
   11->SetBinContent(20,599.9881);
   11->SetBinContent(21,556.0865);
   11->SetBinContent(22,556.0865);
   11->SetBinContent(23,541.4527);
   11->SetBinContent(24,321.9449);
   11->SetBinContent(25,380.4803);
   11->SetBinContent(26,263.4095);
   11->SetBinContent(27,278.0434);
   11->SetBinContent(28,292.6772);
   11->SetBinContent(29,263.4095);
   11->SetBinContent(30,160.9725);
   11->SetBinContent(31,204.8741);
   11->SetBinContent(32,160.9725);
   11->SetBinContent(33,190.2402);
   11->SetBinContent(34,146.3386);
   11->SetBinContent(35,131.7047);
   11->SetBinContent(36,73.1693);
   11->SetBinContent(37,87.80315);
   11->SetBinContent(38,43.90158);
   11->SetBinContent(39,73.1693);
   11->SetBinContent(40,14.63386);
   11->SetBinContent(41,14.63386);
   11->SetBinContent(42,29.26772);
   11->SetBinContent(43,14.63386);
   11->SetBinContent(44,14.63386);
   11->SetBinContent(45,14.63386);
   11->SetBinContent(49,14.63386);
   11->SetBinContent(51,58.53543);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,50);
   12->SetBinContent(3,6.343478);
   12->SetBinContent(4,82.46522);
   12->SetBinContent(5,304.4869);
   12->SetBinContent(6,520.1651);
   12->SetBinContent(7,957.867);
   12->SetBinContent(8,1528.782);
   12->SetBinContent(9,2226.568);
   12->SetBinContent(10,2924.354);
   12->SetBinContent(11,3285.934);
   12->SetBinContent(12,3945.658);
   12->SetBinContent(13,4135.962);
   12->SetBinContent(14,4224.768);
   12->SetBinContent(15,4231.111);
   12->SetBinContent(16,3812.445);
   12->SetBinContent(17,3742.666);
   12->SetBinContent(18,3412.804);
   12->SetBinContent(19,2886.293);
   12->SetBinContent(20,2613.522);
   12->SetBinContent(21,2372.469);
   12->SetBinContent(22,2163.133);
   12->SetBinContent(23,1858.645);
   12->SetBinContent(24,1566.844);
   12->SetBinContent(25,1217.951);
   12->SetBinContent(26,1256.012);
   12->SetBinContent(27,1014.959);
   12->SetBinContent(28,767.5618);
   12->SetBinContent(29,678.7527);
   12->SetBinContent(30,602.6307);
   12->SetBinContent(31,456.7303);
   12->SetBinContent(32,431.3564);
   12->SetBinContent(33,437.6999);
   12->SetBinContent(34,380.6086);
   12->SetBinContent(35,279.113);
   12->SetBinContent(36,329.8608);
   12->SetBinContent(37,177.6174);
   12->SetBinContent(38,145.9);
   12->SetBinContent(39,120.5261);
   12->SetBinContent(40,183.9608);
   12->SetBinContent(41,133.213);
   12->SetBinContent(42,126.8695);
   12->SetBinContent(43,101.4956);
   12->SetBinContent(44,88.80869);
   12->SetBinContent(45,82.46522);
   12->SetBinContent(46,76.12174);
   12->SetBinContent(47,31.71739);
   12->SetBinContent(48,38.06087);
   12->SetBinContent(49,31.71739);
   12->SetBinContent(50,38.06087);
   12->SetBinContent(51,361.5782);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,50);
   13->SetBinContent(5,81.57449);
   13->SetBinContent(6,244.7235);
   13->SetBinContent(7,326.298);
   13->SetBinContent(8,652.5959);
   13->SetBinContent(9,734.1704);
   13->SetBinContent(10,2528.809);
   13->SetBinContent(11,2936.681);
   13->SetBinContent(12,4078.723);
   13->SetBinContent(13,3181.404);
   13->SetBinContent(14,5628.643);
   13->SetBinContent(15,4894.47);
   13->SetBinContent(16,4649.746);
   13->SetBinContent(17,5302.344);
   13->SetBinContent(18,4731.321);
   13->SetBinContent(19,5139.194);
   13->SetBinContent(20,4894.47);
   13->SetBinContent(21,3589.277);
   13->SetBinContent(22,3752.426);
   13->SetBinContent(23,4405.022);
   13->SetBinContent(24,2610.383);
   13->SetBinContent(25,2447.234);
   13->SetBinContent(26,2773.532);
   13->SetBinContent(27,3589.277);
   13->SetBinContent(28,1876.213);
   13->SetBinContent(29,1223.617);
   13->SetBinContent(30,1223.617);
   13->SetBinContent(31,815.7449);
   13->SetBinContent(32,815.7449);
   13->SetBinContent(33,489.447);
   13->SetBinContent(34,1142.043);
   13->SetBinContent(35,652.5959);
   13->SetBinContent(36,734.1704);
   13->SetBinContent(37,897.3193);
   13->SetBinContent(38,571.0215);
   13->SetBinContent(39,244.7235);
   13->SetBinContent(40,244.7235);
   13->SetBinContent(41,244.7235);
   13->SetBinContent(42,326.298);
   13->SetBinContent(43,326.298);
   13->SetBinContent(44,244.7235);
   13->SetBinContent(45,163.149);
   13->SetBinContent(46,81.57449);
   13->SetBinContent(47,163.149);
   13->SetBinContent(48,244.7235);
   13->SetBinContent(49,81.57449);
   13->SetBinContent(51,489.447);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,50);
   14->SetBinContent(1,4.029479);
   14->SetBinContent(3,8.058958);
   14->SetBinContent(4,76.56011);
   14->SetBinContent(5,294.152);
   14->SetBinContent(6,539.9503);
   14->SetBinContent(7,1059.753);
   14->SetBinContent(8,1555.371);
   14->SetBinContent(9,2260.526);
   14->SetBinContent(10,2820.632);
   14->SetBinContent(11,3412.975);
   14->SetBinContent(12,3791.751);
   14->SetBinContent(13,3860.254);
   14->SetBinContent(14,3811.899);
   14->SetBinContent(15,3642.658);
   14->SetBinContent(16,3356.561);
   14->SetBinContent(17,3010.021);
   14->SetBinContent(18,2574.83);
   14->SetBinContent(19,2014.725);
   14->SetBinContent(20,1893.842);
   14->SetBinContent(21,1349.871);
   14->SetBinContent(22,1188.694);
   14->SetBinContent(23,866.3381);
   14->SetBinContent(24,656.8052);
   14->SetBinContent(25,664.8641);
   14->SetBinContent(26,483.5376);
   14->SetBinContent(27,406.9774);
   14->SetBinContent(28,269.9751);
   14->SetBinContent(29,314.2994);
   14->SetBinContent(30,165.2087);
   14->SetBinContent(31,116.8549);
   14->SetBinContent(32,120.8844);
   14->SetBinContent(33,92.67803);
   14->SetBinContent(34,76.56011);
   14->SetBinContent(35,68.50115);
   14->SetBinContent(36,48.35376);
   14->SetBinContent(37,36.26532);
   14->SetBinContent(38,16.11792);
   14->SetBinContent(39,16.11792);
   14->SetBinContent(40,16.11792);
   14->SetBinContent(41,20.1474);
   14->SetBinContent(42,8.058958);
   14->SetBinContent(43,12.08844);
   14->SetBinContent(44,8.058958);
   14->SetBinContent(45,4.029479);
   14->SetBinContent(46,12.08844);
   14->SetBinContent(47,4.029479);
   14->SetBinContent(51,44.32428);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,50);
   15->SetBinContent(3,3.862847);
   15->SetBinContent(4,11.58854);
   15->SetBinContent(5,23.17708);
   15->SetBinContent(6,54.07985);
   15->SetBinContent(7,96.57117);
   15->SetBinContent(8,139.0625);
   15->SetBinContent(9,177.691);
   15->SetBinContent(10,177.691);
   15->SetBinContent(11,208.5939);
   15->SetBinContent(12,254.9481);
   15->SetBinContent(13,235.6339);
   15->SetBinContent(14,243.3596);
   15->SetBinContent(15,227.9081);
   15->SetBinContent(16,208.5939);
   15->SetBinContent(17,224.0453);
   15->SetBinContent(18,146.7882);
   15->SetBinContent(19,150.6511);
   15->SetBinContent(20,119.7482);
   15->SetBinContent(21,108.1597);
   15->SetBinContent(22,119.7482);
   15->SetBinContent(23,73.39409);
   15->SetBinContent(24,50.21701);
   15->SetBinContent(25,65.6684);
   15->SetBinContent(26,77.25694);
   15->SetBinContent(27,30.90277);
   15->SetBinContent(28,30.90277);
   15->SetBinContent(29,11.58854);
   15->SetBinContent(30,3.862847);
   15->SetBinContent(31,3.862847);
   15->SetBinContent(32,15.45139);
   15->SetBinContent(33,3.862847);
   15->SetBinContent(34,19.31424);
   15->SetBinContent(35,7.725694);
   15->SetBinContent(36,15.45139);
   15->SetBinContent(37,7.725694);
   15->SetBinContent(39,3.862847);
   15->SetBinContent(41,3.862847);
   15->SetBinContent(42,3.862847);
   15->SetBinContent(44,3.862847);
   15->SetBinContent(51,11.58854);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,50);
   16->SetBinContent(4,67.80587);
   16->SetBinContent(5,215.7459);
   16->SetBinContent(6,388.343);
   16->SetBinContent(7,678.0597);
   16->SetBinContent(8,1386.941);
   16->SetBinContent(9,2034.18);
   16->SetBinContent(10,2927.97);
   16->SetBinContent(11,3421.095);
   16->SetBinContent(12,4364.196);
   16->SetBinContent(13,4647.743);
   16->SetBinContent(14,4641.579);
   16->SetBinContent(15,4438.165);
   16->SetBinContent(16,4203.931);
   16->SetBinContent(17,4222.423);
   16->SetBinContent(18,3507.392);
   16->SetBinContent(19,3100.563);
   16->SetBinContent(20,2718.392);
   16->SetBinContent(21,1991.031);
   16->SetBinContent(22,1855.419);
   16->SetBinContent(23,1448.583);
   16->SetBinContent(24,1220.508);
   16->SetBinContent(25,980.1047);
   16->SetBinContent(26,782.8508);
   16->SetBinContent(27,628.7462);
   16->SetBinContent(28,684.2239);
   16->SetBinContent(29,388.343);
   16->SetBinContent(30,295.8802);
   16->SetBinContent(31,221.9101);
   16->SetBinContent(32,234.2384);
   16->SetBinContent(33,135.6117);
   16->SetBinContent(34,104.7909);
   16->SetBinContent(35,86.29838);
   16->SetBinContent(36,43.14919);
   16->SetBinContent(37,86.29838);
   16->SetBinContent(38,61.6417);
   16->SetBinContent(39,61.6417);
   16->SetBinContent(40,24.65668);
   16->SetBinContent(41,24.65668);
   16->SetBinContent(42,18.49251);
   16->SetBinContent(44,30.82085);
   16->SetBinContent(48,12.32834);
   16->SetBinContent(49,6.16417);
   16->SetBinContent(50,6.16417);
   16->SetBinContent(51,30.82085);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,50);
   17->SetBinContent(4,117.1259);
   17->SetBinContent(5,140.5511);
   17->SetBinContent(6,281.1021);
   17->SetBinContent(7,585.6293);
   17->SetBinContent(8,655.9048);
   17->SetBinContent(9,1569.487);
   17->SetBinContent(10,1803.738);
   17->SetBinContent(11,1944.289);
   17->SetBinContent(12,2436.22);
   17->SetBinContent(13,2365.944);
   17->SetBinContent(14,2365.944);
   17->SetBinContent(15,2014.565);
   17->SetBinContent(16,2506.496);
   17->SetBinContent(17,1991.14);
   17->SetBinContent(18,1569.487);
   17->SetBinContent(19,2037.99);
   17->SetBinContent(20,1733.463);
   17->SetBinContent(21,1499.211);
   17->SetBinContent(22,1546.061);
   17->SetBinContent(23,1218.109);
   17->SetBinContent(24,1077.558);
   17->SetBinContent(25,1288.385);
   17->SetBinContent(26,913.5817);
   17->SetBinContent(27,890.1566);
   17->SetBinContent(28,773.0307);
   17->SetBinContent(29,1054.133);
   17->SetBinContent(30,679.33);
   17->SetBinContent(31,890.1566);
   17->SetBinContent(32,866.7314);
   17->SetBinContent(33,749.6055);
   17->SetBinContent(34,773.0307);
   17->SetBinContent(35,538.779);
   17->SetBinContent(36,327.9524);
   17->SetBinContent(37,609.0545);
   17->SetBinContent(38,726.1804);
   17->SetBinContent(39,679.33);
   17->SetBinContent(40,327.9524);
   17->SetBinContent(41,398.2279);
   17->SetBinContent(42,609.0545);
   17->SetBinContent(43,491.9286);
   17->SetBinContent(44,327.9524);
   17->SetBinContent(45,327.9524);
   17->SetBinContent(46,281.1021);
   17->SetBinContent(47,257.6769);
   17->SetBinContent(48,257.6769);
   17->SetBinContent(49,163.9762);
   17->SetBinContent(50,163.9762);
   17->SetBinContent(51,2225.392);
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
