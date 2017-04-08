{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:04:38 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-26.98413,-3.127174,131.746,5.504068);
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
   
   TH1F *THStack_stack_26 = new TH1F("THStack_stack_26","",50,0,100);
   THStack_stack_26->SetMinimum(0.02669624);
   THStack_stack_26->SetMaximum(65098.17);
   THStack_stack_26->SetDirectory(0);
   THStack_stack_26->SetStats(0);
   THStack_stack_26->SetLineWidth(2);
   THStack_stack_26->SetMarkerSize(1.2);
   THStack_stack_26->GetXaxis()->SetTitle("N_{PFO,H#rightarrowbb}");
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
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,100);
   0->SetBinContent(4,0.001882);
   0->SetBinContent(5,0.001882);
   0->SetBinContent(6,0.016938);
   0->SetBinContent(7,0.015056);
   0->SetBinContent(8,0.04705001);
   0->SetBinContent(9,0.08657205);
   0->SetBinContent(10,0.1204481);
   0->SetBinContent(11,0.2051382);
   0->SetBinContent(12,0.3349956);
   0->SetBinContent(13,0.4422688);
   0->SetBinContent(14,0.6492898);
   0->SetBinContent(15,0.7753849);
   0->SetBinContent(16,0.9993449);
   0->SetBinContent(17,1.06145);
   0->SetBinContent(18,1.193187);
   0->SetBinContent(19,1.270347);
   0->SetBinContent(20,1.264701);
   0->SetBinContent(21,1.19695);
   0->SetBinContent(22,1.166839);
   0->SetBinContent(23,1.050158);
   0->SetBinContent(24,0.8845419);
   0->SetBinContent(25,0.8111432);
   0->SetBinContent(26,0.6643459);
   0->SetBinContent(27,0.5853012);
   0->SetBinContent(28,0.425331);
   0->SetBinContent(29,0.4065111);
   0->SetBinContent(30,0.2521882);
   0->SetBinContent(31,0.2032562);
   0->SetBinContent(32,0.1430321);
   0->SetBinContent(33,0.1449141);
   0->SetBinContent(34,0.07716204);
   0->SetBinContent(35,0.05646002);
   0->SetBinContent(36,0.04140401);
   0->SetBinContent(37,0.026348);
   0->SetBinContent(38,0.013174);
   0->SetBinContent(39,0.015056);
   0->SetBinContent(40,0.005646);
   0->SetBinContent(41,0.007528);
   0->SetBinContent(42,0.007528);
   0->SetBinContent(43,0.003764);
   0->SetBinContent(45,0.001882);
   0->SetBinContent(46,0.003764);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,100);
   1->SetBinContent(5,0.005646);
   1->SetBinContent(6,0.015056);
   1->SetBinContent(7,0.03858102);
   1->SetBinContent(8,0.05834204);
   1->SetBinContent(9,0.09315907);
   1->SetBinContent(10,0.137386);
   1->SetBinContent(11,0.2041965);
   1->SetBinContent(12,0.3114708);
   1->SetBinContent(13,0.4592091);
   1->SetBinContent(14,0.5523673);
   1->SetBinContent(15,0.6436422);
   1->SetBinContent(16,0.7565596);
   1->SetBinContent(17,0.7753792);
   1->SetBinContent(18,0.8591263);
   1->SetBinContent(19,0.7998446);
   1->SetBinContent(20,0.7509137);
   1->SetBinContent(21,0.7123336);
   1->SetBinContent(22,0.6314095);
   1->SetBinContent(23,0.5363706);
   1->SetBinContent(24,0.448858);
   1->SetBinContent(25,0.3923975);
   1->SetBinContent(26,0.2907686);
   1->SetBinContent(27,0.2408953);
   1->SetBinContent(28,0.2051375);
   1->SetBinContent(29,0.135504);
   1->SetBinContent(30,0.09692308);
   1->SetBinContent(31,0.07433905);
   1->SetBinContent(32,0.05740104);
   1->SetBinContent(33,0.02728901);
   1->SetBinContent(34,0.03387602);
   1->SetBinContent(35,0.01882);
   1->SetBinContent(36,0.015997);
   1->SetBinContent(37,0.004705);
   1->SetBinContent(38,0.007528);
   1->SetBinContent(39,0.007528);
   1->SetBinContent(40,0.002823);
   1->SetBinContent(41,0.000941);
   1->SetBinContent(42,0.002823);
   1->SetBinContent(43,0.000941);
   1->SetBinContent(50,0.000941);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,100);
   2->SetBinContent(2,0.002823);
   2->SetBinContent(3,0.014115);
   2->SetBinContent(4,0.05081403);
   2->SetBinContent(5,0.09504107);
   2->SetBinContent(6,0.1289171);
   2->SetBinContent(7,0.1665568);
   2->SetBinContent(8,0.2352493);
   2->SetBinContent(9,0.3171168);
   2->SetBinContent(10,0.5024954);
   2->SetBinContent(11,0.6662257);
   2->SetBinContent(12,0.8167822);
   2->SetBinContent(13,1.004978);
   2->SetBinContent(14,1.263764);
   2->SetBinContent(15,1.443502);
   2->SetBinContent(16,1.609125);
   2->SetBinContent(17,1.794509);
   2->SetBinContent(18,1.841561);
   2->SetBinContent(19,1.919667);
   2->SetBinContent(20,1.918726);
   2->SetBinContent(21,1.647707);
   2->SetBinContent(22,1.540429);
   2->SetBinContent(23,1.435033);
   2->SetBinContent(24,1.158368);
   2->SetBinContent(25,0.9842764);
   2->SetBinContent(26,0.870418);
   2->SetBinContent(27,0.6859862);
   2->SetBinContent(28,0.5457804);
   2->SetBinContent(29,0.3735773);
   2->SetBinContent(30,0.3105298);
   2->SetBinContent(31,0.2559513);
   2->SetBinContent(32,0.1599699);
   2->SetBinContent(33,0.1119791);
   2->SetBinContent(34,0.07810306);
   2->SetBinContent(35,0.06587005);
   2->SetBinContent(36,0.05269603);
   2->SetBinContent(37,0.03387602);
   2->SetBinContent(38,0.02634801);
   2->SetBinContent(39,0.02917101);
   2->SetBinContent(40,0.012233);
   2->SetBinContent(41,0.007528);
   2->SetBinContent(42,0.003764);
   2->SetBinContent(43,0.003764);
   2->SetBinContent(44,0.003764);
   2->SetBinContent(45,0.002823);
   2->SetBinContent(46,0.001882);
   2->SetBinContent(51,0.000941);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,100);
   3->SetBinContent(3,0.020487);
   3->SetBinContent(4,0.109264);
   3->SetBinContent(5,0.143409);
   3->SetBinContent(6,0.2663309);
   3->SetBinContent(7,0.4029108);
   3->SetBinContent(8,0.7443615);
   3->SetBinContent(9,1.365803);
   3->SetBinContent(10,1.816518);
   3->SetBinContent(11,2.881846);
   3->SetBinContent(12,4.083751);
   3->SetBinContent(13,4.98515);
   3->SetBinContent(14,6.214332);
   3->SetBinContent(15,7.265965);
   3->SetBinContent(16,7.778123);
   3->SetBinContent(17,9.615179);
   3->SetBinContent(18,9.034692);
   3->SetBinContent(19,9.123472);
   3->SetBinContent(20,7.79861);
   3->SetBinContent(21,7.709836);
   3->SetBinContent(22,6.808436);
   3->SetBinContent(23,5.920694);
   3->SetBinContent(24,4.739314);
   3->SetBinContent(25,3.612551);
   3->SetBinContent(26,3.066229);
   3->SetBinContent(27,2.513078);
   3->SetBinContent(28,1.925783);
   3->SetBinContent(29,1.317999);
   3->SetBinContent(30,0.887771);
   3->SetBinContent(31,0.7511905);
   3->SetBinContent(32,0.587294);
   3->SetBinContent(33,0.3687658);
   3->SetBinContent(34,0.2185279);
   3->SetBinContent(35,0.157067);
   3->SetBinContent(36,0.109264);
   3->SetBinContent(37,0.027316);
   3->SetBinContent(38,0.054632);
   3->SetBinContent(39,0.040974);
   3->SetBinContent(40,0.020487);
   3->SetBinContent(41,0.013658);
   3->SetBinContent(42,0.013658);
   3->SetBinContent(43,0.013658);
   3->SetBinContent(44,0.006829);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,100);
   4->SetBinContent(2,0.005261);
   4->SetBinContent(3,0.042088);
   4->SetBinContent(4,0.168352);
   4->SetBinContent(5,0.4156192);
   4->SetBinContent(6,0.6839303);
   4->SetBinContent(7,1.16268);
   4->SetBinContent(8,1.962343);
   4->SetBinContent(9,2.883009);
   4->SetBinContent(10,4.298203);
   4->SetBinContent(11,5.713397);
   4->SetBinContent(12,7.602076);
   4->SetBinContent(13,9.380401);
   4->SetBinContent(14,10.90095);
   4->SetBinContent(15,12.66353);
   4->SetBinContent(16,13.8263);
   4->SetBinContent(17,13.67898);
   4->SetBinContent(18,13.48957);
   4->SetBinContent(19,12.73719);
   4->SetBinContent(20,11.26925);
   4->SetBinContent(21,10.20118);
   4->SetBinContent(22,8.806906);
   4->SetBinContent(23,7.275898);
   4->SetBinContent(24,5.692353);
   4->SetBinContent(25,4.745383);
   4->SetBinContent(26,3.751065);
   4->SetBinContent(27,2.735702);
   4->SetBinContent(28,1.930778);
   4->SetBinContent(29,1.462554);
   4->SetBinContent(30,1.078505);
   4->SetBinContent(31,0.6365813);
   4->SetBinContent(32,0.4787512);
   4->SetBinContent(33,0.4314022);
   4->SetBinContent(34,0.205179);
   4->SetBinContent(35,0.121003);
   4->SetBinContent(36,0.09469797);
   4->SetBinContent(37,0.06839299);
   4->SetBinContent(38,0.07365399);
   4->SetBinContent(39,0.021044);
   4->SetBinContent(40,0.026305);
   4->SetBinContent(41,0.021044);
   4->SetBinContent(42,0.005261);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,100);
   5->SetBinContent(3,0.086807);
   5->SetBinContent(4,0.3348269);
   5->SetBinContent(5,0.5952476);
   5->SetBinContent(6,1.426114);
   5->SetBinContent(7,2.67862);
   5->SetBinContent(8,4.117147);
   5->SetBinContent(9,6.299742);
   5->SetBinContent(10,9.771983);
   5->SetBinContent(11,13.76499);
   5->SetBinContent(12,17.6093);
   5->SetBinContent(13,23.45045);
   5->SetBinContent(14,28.99395);
   5->SetBinContent(15,33.21049);
   5->SetBinContent(16,35.77762);
   5->SetBinContent(17,38.15872);
   5->SetBinContent(18,40.20498);
   5->SetBinContent(19,40.01896);
   5->SetBinContent(20,38.03471);
   5->SetBinContent(21,34.01659);
   5->SetBinContent(22,29.52722);
   5->SetBinContent(23,25.4595);
   5->SetBinContent(24,21.75143);
   5->SetBinContent(25,17.08844);
   5->SetBinContent(26,14.65783);
   5->SetBinContent(27,10.40442);
   5->SetBinContent(28,8.147501);
   5->SetBinContent(29,5.890505);
   5->SetBinContent(30,4.563587);
   5->SetBinContent(31,3.001048);
   5->SetBinContent(32,1.946955);
   5->SetBinContent(33,1.289703);
   5->SetBinContent(34,1.029282);
   5->SetBinContent(35,0.6944554);
   5->SetBinContent(36,0.4092328);
   5->SetBinContent(37,0.4340348);
   5->SetBinContent(38,0.223218);
   5->SetBinContent(39,0.186015);
   5->SetBinContent(40,0.024802);
   5->SetBinContent(41,0.074406);
   5->SetBinContent(42,0.074406);
   5->SetBinContent(43,0.024802);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,100);
   6->SetBinContent(2,0.455436);
   6->SetBinContent(3,2.27718);
   6->SetBinContent(4,10.09548);
   6->SetBinContent(5,26.11173);
   6->SetBinContent(6,47.66886);
   6->SetBinContent(7,87.3671);
   6->SetBinContent(8,139.0594);
   6->SetBinContent(9,222.5631);
   6->SetBinContent(10,313.9501);
   6->SetBinContent(11,434.3231);
   6->SetBinContent(12,568.9877);
   6->SetBinContent(13,689.7887);
   6->SetBinContent(14,813.7787);
   6->SetBinContent(15,897.9825);
   6->SetBinContent(16,959.6359);
   6->SetBinContent(17,983.0216);
   6->SetBinContent(18,963.5082);
   6->SetBinContent(19,906.5624);
   6->SetBinContent(20,837.2404);
   6->SetBinContent(21,738.838);
   6->SetBinContent(22,641.0431);
   6->SetBinContent(23,528.2904);
   6->SetBinContent(24,430.3005);
   6->SetBinContent(25,342.1839);
   6->SetBinContent(26,262.7954);
   6->SetBinContent(27,191.2872);
   6->SetBinContent(28,139.1353);
   6->SetBinContent(29,103.383);
   6->SetBinContent(30,73.47651);
   6->SetBinContent(31,48.73153);
   6->SetBinContent(32,36.28313);
   6->SetBinContent(33,22.84774);
   6->SetBinContent(34,13.96668);
   6->SetBinContent(35,10.09548);
   6->SetBinContent(36,6.376099);
   6->SetBinContent(37,4.098925);
   6->SetBinContent(38,2.27718);
   6->SetBinContent(39,1.821744);
   6->SetBinContent(40,1.290402);
   6->SetBinContent(41,0.75906);
   6->SetBinContent(42,0.37953);
   6->SetBinContent(43,0.227718);
   6->SetBinContent(44,0.227718);
   6->SetBinContent(45,0.151812);
   6->SetBinContent(46,0.075906);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,100);
   7->SetBinContent(2,0.146466);
   7->SetBinContent(3,1.708771);
   7->SetBinContent(4,5.956279);
   7->SetBinContent(5,16.89248);
   7->SetBinContent(6,39.44814);
   7->SetBinContent(7,71.23028);
   7->SetBinContent(8,123.8588);
   7->SetBinContent(9,190.3132);
   7->SetBinContent(10,255.4499);
   7->SetBinContent(11,329.3269);
   7->SetBinContent(12,392.4128);
   7->SetBinContent(13,441.2409);
   7->SetBinContent(14,465.4597);
   7->SetBinContent(15,481.0847);
   7->SetBinContent(16,471.8562);
   7->SetBinContent(17,442.8034);
   7->SetBinContent(18,394.5124);
   7->SetBinContent(19,340.7038);
   7->SetBinContent(20,289.9226);
   7->SetBinContent(21,231.2312);
   7->SetBinContent(22,191.7292);
   7->SetBinContent(23,153.3991);
   7->SetBinContent(24,117.2192);
   7->SetBinContent(25,84.02125);
   7->SetBinContent(26,61.90556);
   7->SetBinContent(27,45.84362);
   7->SetBinContent(28,32.17388);
   7->SetBinContent(29,22.26294);
   7->SetBinContent(30,16.16014);
   7->SetBinContent(31,10.93614);
   7->SetBinContent(32,7.274471);
   7->SetBinContent(33,5.663347);
   7->SetBinContent(34,3.417539);
   7->SetBinContent(35,2.538744);
   7->SetBinContent(36,1.513482);
   7->SetBinContent(37,0.8787959);
   7->SetBinContent(38,0.537042);
   7->SetBinContent(39,0.390576);
   7->SetBinContent(40,0.195288);
   7->SetBinContent(41,0.24411);
   7->SetBinContent(42,0.048822);
   7->SetBinContent(43,0.146466);
   7->SetBinContent(44,0.048822);
   7->SetBinContent(45,0.048822);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,100);
   8->SetBinContent(3,1.46753);
   8->SetBinContent(4,2.494801);
   8->SetBinContent(5,4.842849);
   8->SetBinContent(6,9.392191);
   8->SetBinContent(7,11.59349);
   8->SetBinContent(8,14.82206);
   8->SetBinContent(9,20.25194);
   8->SetBinContent(10,23.04025);
   8->SetBinContent(11,25.68181);
   8->SetBinContent(12,23.62726);
   8->SetBinContent(13,22.8935);
   8->SetBinContent(14,23.48051);
   8->SetBinContent(15,18.7844);
   8->SetBinContent(16,16.5831);
   8->SetBinContent(17,16.5831);
   8->SetBinContent(18,11.15323);
   8->SetBinContent(19,10.56622);
   8->SetBinContent(20,7.4844);
   8->SetBinContent(21,6.750636);
   8->SetBinContent(22,4.40259);
   8->SetBinContent(23,4.109085);
   8->SetBinContent(24,2.054542);
   8->SetBinContent(25,2.054542);
   8->SetBinContent(26,1.46753);
   8->SetBinContent(27,1.174024);
   8->SetBinContent(28,0.733765);
   8->SetBinContent(29,0.587012);
   8->SetBinContent(30,0.293506);
   8->SetBinContent(31,0.146753);
   8->SetBinContent(32,0.587012);
   8->SetBinContent(35,0.293506);
   8->SetBinContent(37,0.293506);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,100);
   9->SetBinContent(2,1.028634);
   9->SetBinContent(3,8.571954);
   9->SetBinContent(4,18.51541);
   9->SetBinContent(5,35.14495);
   9->SetBinContent(6,60.17521);
   9->SetBinContent(7,114.6932);
   9->SetBinContent(8,181.8953);
   9->SetBinContent(9,277.0422);
   9->SetBinContent(10,420.8869);
   9->SetBinContent(11,563.1885);
   9->SetBinContent(12,718.3487);
   9->SetBinContent(13,849.8491);
   9->SetBinContent(14,941.7451);
   9->SetBinContent(15,1035.694);
   9->SetBinContent(16,1066.544);
   9->SetBinContent(17,1083.683);
   9->SetBinContent(18,1053.519);
   9->SetBinContent(19,1002.781);
   9->SetBinContent(20,955.4609);
   9->SetBinContent(21,858.593);
   9->SetBinContent(22,787.6136);
   9->SetBinContent(23,702.4041);
   9->SetBinContent(24,598.5067);
   9->SetBinContent(25,509.3539);
   9->SetBinContent(26,437.8602);
   9->SetBinContent(27,364.9949);
   9->SetBinContent(28,309.9602);
   9->SetBinContent(29,246.6968);
   9->SetBinContent(30,201.61);
   9->SetBinContent(31,170.4093);
   9->SetBinContent(32,127.8941);
   9->SetBinContent(33,105.4354);
   9->SetBinContent(34,81.77666);
   9->SetBinContent(35,64.46121);
   9->SetBinContent(36,49.88881);
   9->SetBinContent(37,45.94568);
   9->SetBinContent(38,35.48783);
   9->SetBinContent(39,29.31602);
   9->SetBinContent(40,21.08698);
   9->SetBinContent(41,15.25808);
   9->SetBinContent(42,10.9721);
   9->SetBinContent(43,8.571954);
   9->SetBinContent(44,8.057636);
   9->SetBinContent(45,5.657488);
   9->SetBinContent(46,3.42878);
   9->SetBinContent(47,3.257341);
   9->SetBinContent(48,3.085902);
   9->SetBinContent(49,1.371512);
   9->SetBinContent(50,1.542951);
   9->SetBinContent(51,3.42878);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,100);
   10->SetBinContent(2,1.198672);
   10->SetBinContent(3,9.337027);
   10->SetBinContent(4,34.38285);
   10->SetBinContent(5,104.5361);
   10->SetBinContent(6,235.5187);
   10->SetBinContent(7,473.7131);
   10->SetBinContent(8,834.3702);
   10->SetBinContent(9,1324.359);
   10->SetBinContent(10,1930.913);
   10->SetBinContent(11,2596.232);
   10->SetBinContent(12,3236.193);
   10->SetBinContent(13,3795.214);
   10->SetBinContent(14,4162.688);
   10->SetBinContent(15,4387.178);
   10->SetBinContent(16,4367.4);
   10->SetBinContent(17,4163.444);
   10->SetBinContent(18,3826.457);
   10->SetBinContent(19,3399.711);
   10->SetBinContent(20,2880.499);
   10->SetBinContent(21,2398.953);
   10->SetBinContent(22,1921.067);
   10->SetBinContent(23,1482.892);
   10->SetBinContent(24,1123.857);
   10->SetBinContent(25,837.7782);
   10->SetBinContent(26,611.5276);
   10->SetBinContent(27,428.9264);
   10->SetBinContent(28,306.7408);
   10->SetBinContent(29,209.4604);
   10->SetBinContent(30,146.176);
   10->SetBinContent(31,99.67838);
   10->SetBinContent(32,63.97087);
   10->SetBinContent(33,44.22449);
   10->SetBinContent(34,27.5694);
   10->SetBinContent(35,19.30495);
   10->SetBinContent(36,12.7438);
   10->SetBinContent(37,6.813498);
   10->SetBinContent(38,4.983948);
   10->SetBinContent(39,2.586607);
   10->SetBinContent(40,1.955727);
   10->SetBinContent(41,1.766463);
   10->SetBinContent(42,0.883232);
   10->SetBinContent(43,0.63088);
   10->SetBinContent(44,0.504704);
   10->SetBinContent(45,0.126176);
   10->SetBinContent(46,0.189264);
   10->SetBinContent(48,0.063088);
   10->SetBinContent(49,0.063088);
   10->SetBinContent(51,0.126176);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,100);
   11->SetBinContent(2,29.26772);
   11->SetBinContent(3,29.26772);
   11->SetBinContent(4,160.9725);
   11->SetBinContent(5,234.1418);
   11->SetBinContent(6,278.0434);
   11->SetBinContent(7,585.3542);
   11->SetBinContent(8,556.0865);
   11->SetBinContent(9,643.8896);
   11->SetBinContent(10,892.6651);
   11->SetBinContent(11,965.8344);
   11->SetBinContent(12,951.2005);
   11->SetBinContent(13,863.3974);
   11->SetBinContent(14,878.0312);
   11->SetBinContent(15,804.862);
   11->SetBinContent(16,673.1573);
   11->SetBinContent(17,599.9881);
   11->SetBinContent(18,453.6496);
   11->SetBinContent(19,365.8465);
   11->SetBinContent(20,307.3111);
   11->SetBinContent(21,263.4095);
   11->SetBinContent(22,146.3386);
   11->SetBinContent(23,204.8741);
   11->SetBinContent(24,73.1693);
   11->SetBinContent(25,117.0709);
   11->SetBinContent(26,43.90158);
   11->SetBinContent(27,43.90158);
   11->SetBinContent(29,14.63386);
   11->SetBinContent(30,29.26772);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,100);
   12->SetBinContent(2,12.68696);
   12->SetBinContent(3,164.9304);
   12->SetBinContent(4,570.9131);
   12->SetBinContent(5,1338.477);
   12->SetBinContent(6,2937.041);
   12->SetBinContent(7,4053.498);
   12->SetBinContent(8,5201.63);
   12->SetBinContent(9,6026.254);
   12->SetBinContent(10,6413.193);
   12->SetBinContent(11,6191.179);
   12->SetBinContent(12,5410.958);
   12->SetBinContent(13,4440.438);
   12->SetBinContent(14,3742.666);
   12->SetBinContent(15,2860.919);
   12->SetBinContent(16,2638.896);
   12->SetBinContent(17,1985.515);
   12->SetBinContent(18,1801.553);
   12->SetBinContent(19,1300.416);
   12->SetBinContent(20,1091.081);
   12->SetBinContent(21,983.241);
   12->SetBinContent(22,697.7833);
   12->SetBinContent(23,463.0738);
   12->SetBinContent(24,405.9825);
   12->SetBinContent(25,386.9521);
   12->SetBinContent(26,228.3652);
   12->SetBinContent(27,202.9913);
   12->SetBinContent(28,139.5565);
   12->SetBinContent(29,158.5869);
   12->SetBinContent(30,101.4956);
   12->SetBinContent(31,120.5261);
   12->SetBinContent(32,57.09131);
   12->SetBinContent(33,69.77827);
   12->SetBinContent(34,25.37391);
   12->SetBinContent(35,25.37391);
   12->SetBinContent(36,19.03043);
   12->SetBinContent(37,6.343478);
   12->SetBinContent(38,38.06087);
   12->SetBinContent(39,19.03043);
   12->SetBinContent(40,19.03043);
   12->SetBinContent(41,6.343478);
   12->SetBinContent(42,6.343478);
   12->SetBinContent(43,6.343478);
   12->SetBinContent(45,6.343478);
   12->SetBinContent(49,6.343478);
   12->SetBinContent(51,12.68696);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,100);
   13->SetBinContent(3,163.149);
   13->SetBinContent(4,734.1704);
   13->SetBinContent(5,1794.638);
   13->SetBinContent(6,3262.979);
   13->SetBinContent(7,5302.344);
   13->SetBinContent(8,6689.114);
   13->SetBinContent(9,5954.941);
   13->SetBinContent(10,6036.516);
   13->SetBinContent(11,5791.792);
   13->SetBinContent(12,7586.436);
   13->SetBinContent(13,7015.413);
   13->SetBinContent(14,6607.539);
   13->SetBinContent(15,6689.114);
   13->SetBinContent(16,5547.068);
   13->SetBinContent(17,3507.702);
   13->SetBinContent(18,3344.553);
   13->SetBinContent(19,1631.49);
   13->SetBinContent(20,2610.383);
   13->SetBinContent(21,1060.468);
   13->SetBinContent(22,1223.617);
   13->SetBinContent(23,1223.617);
   13->SetBinContent(24,571.0215);
   13->SetBinContent(25,244.7235);
   13->SetBinContent(26,407.8725);
   13->SetBinContent(27,407.8725);
   13->SetBinContent(28,244.7235);
   13->SetBinContent(29,81.57449);
   13->SetBinContent(30,81.57449);
   13->SetBinContent(31,163.149);
   13->SetBinContent(32,81.57449);
   13->SetBinContent(33,81.57449);
   13->SetBinContent(35,81.57449);
   13->SetBinContent(36,81.57449);
   13->SetBinContent(38,81.57449);
   13->SetBinContent(39,81.57449);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,100);
   14->SetBinContent(2,32.23584);
   14->SetBinContent(3,128.9433);
   14->SetBinContent(4,511.7439);
   14->SetBinContent(5,1051.694);
   14->SetBinContent(6,1551.342);
   14->SetBinContent(7,2248.437);
   14->SetBinContent(8,3034.198);
   14->SetBinContent(9,3566.097);
   14->SetBinContent(10,4021.435);
   14->SetBinContent(11,4259.168);
   14->SetBinContent(12,4303.491);
   14->SetBinContent(13,3916.667);
   14->SetBinContent(14,3578.186);
   14->SetBinContent(15,3247.763);
   14->SetBinContent(16,2607.066);
   14->SetBinContent(17,2183.965);
   14->SetBinContent(18,1744.754);
   14->SetBinContent(19,1515.077);
   14->SetBinContent(20,1063.782);
   14->SetBinContent(21,672.9231);
   14->SetBinContent(22,604.4219);
   14->SetBinContent(23,370.7121);
   14->SetBinContent(24,245.7983);
   14->SetBinContent(25,189.3855);
   14->SetBinContent(26,157.1497);
   14->SetBinContent(27,80.58959);
   14->SetBinContent(28,64.47167);
   14->SetBinContent(29,60.4422);
   14->SetBinContent(30,28.20636);
   14->SetBinContent(31,12.08844);
   14->SetBinContent(32,4.029479);
   14->SetBinContent(34,4.029479);
   14->SetBinContent(35,4.029479);
   14->SetBinContent(36,8.058958);
   14->SetBinContent(38,4.029479);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,100);
   15->SetBinContent(2,11.58854);
   15->SetBinContent(3,77.25694);
   15->SetBinContent(4,139.0625);
   15->SetBinContent(5,254.9481);
   15->SetBinContent(6,258.811);
   15->SetBinContent(7,278.1252);
   15->SetBinContent(8,281.9881);
   15->SetBinContent(9,297.4395);
   15->SetBinContent(10,231.771);
   15->SetBinContent(11,243.3596);
   15->SetBinContent(12,254.9481);
   15->SetBinContent(13,166.1025);
   15->SetBinContent(14,169.9653);
   15->SetBinContent(15,146.7882);
   15->SetBinContent(16,135.1996);
   15->SetBinContent(17,92.70832);
   15->SetBinContent(18,81.11978);
   15->SetBinContent(19,69.53124);
   15->SetBinContent(20,34.76562);
   15->SetBinContent(21,38.62847);
   15->SetBinContent(22,27.03993);
   15->SetBinContent(23,23.17708);
   15->SetBinContent(24,19.31424);
   15->SetBinContent(25,11.58854);
   15->SetBinContent(26,11.58854);
   15->SetBinContent(27,3.862847);
   15->SetBinContent(28,3.862847);
   15->SetBinContent(29,3.862847);
   15->SetBinContent(31,7.725694);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,100);
   16->SetBinContent(2,234.2384);
   16->SetBinContent(3,1134.209);
   16->SetBinContent(4,2669.079);
   16->SetBinContent(5,4370.36);
   16->SetBinContent(6,5751.11);
   16->SetBinContent(7,6373.681);
   16->SetBinContent(8,5701.798);
   16->SetBinContent(9,5720.29);
   16->SetBinContent(10,5276.478);
   16->SetBinContent(11,4450.493);
   16->SetBinContent(12,4524.462);
   16->SetBinContent(13,3168.368);
   16->SetBinContent(14,2404.024);
   16->SetBinContent(15,1960.21);
   16->SetBinContent(16,1522.553);
   16->SetBinContent(17,961.6122);
   16->SetBinContent(18,776.6866);
   16->SetBinContent(19,480.8058);
   16->SetBinContent(20,339.0295);
   16->SetBinContent(21,191.0893);
   16->SetBinContent(22,123.2834);
   16->SetBinContent(23,123.2834);
   16->SetBinContent(24,49.31336);
   16->SetBinContent(25,43.14919);
   16->SetBinContent(26,18.49251);
   16->SetBinContent(27,18.49251);
   16->SetBinContent(28,18.49251);
   16->SetBinContent(29,12.32834);
   16->SetBinContent(31,6.16417);
   16->SetBinContent(34,6.16417);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,100);
   17->SetBinContent(2,23.42518);
   17->SetBinContent(3,374.8028);
   17->SetBinContent(4,702.7552);
   17->SetBinContent(5,1241.534);
   17->SetBinContent(6,2037.99);
   17->SetBinContent(7,1991.14);
   17->SetBinContent(8,2811.025);
   17->SetBinContent(9,2811.025);
   17->SetBinContent(10,3209.255);
   17->SetBinContent(11,2483.071);
   17->SetBinContent(12,3021.852);
   17->SetBinContent(13,2787.599);
   17->SetBinContent(14,2412.795);
   17->SetBinContent(15,2295.668);
   17->SetBinContent(16,1967.714);
   17->SetBinContent(17,2389.369);
   17->SetBinContent(18,1663.187);
   17->SetBinContent(19,1897.439);
   17->SetBinContent(20,1874.014);
   17->SetBinContent(21,1452.361);
   17->SetBinContent(22,1710.038);
   17->SetBinContent(23,1241.534);
   17->SetBinContent(24,960.4321);
   17->SetBinContent(25,1054.133);
   17->SetBinContent(26,679.33);
   17->SetBinContent(27,585.6293);
   17->SetBinContent(28,585.6293);
   17->SetBinContent(29,609.0545);
   17->SetBinContent(30,327.9524);
   17->SetBinContent(31,421.6531);
   17->SetBinContent(32,327.9524);
   17->SetBinContent(33,234.2517);
   17->SetBinContent(34,210.8266);
   17->SetBinContent(35,117.1259);
   17->SetBinContent(36,46.85035);
   17->SetBinContent(37,46.85035);
   17->SetBinContent(38,93.70071);
   17->SetBinContent(39,23.42518);
   17->SetBinContent(40,93.70071);
   17->SetBinContent(41,46.85035);
   17->SetBinContent(42,117.1259);
   17->SetBinContent(45,23.42518);
   17->SetBinContent(47,23.42518);
   17->SetBinContent(48,23.42518);
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
