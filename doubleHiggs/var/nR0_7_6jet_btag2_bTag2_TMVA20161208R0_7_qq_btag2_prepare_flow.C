{
//=========Macro generated from canvas: canvas1/
//=========  (Tue Feb 14 15:43:17 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,1600,900);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.768578,1.31746,7.847932);
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
   
   TH1F *THStack_stack_4 = new TH1F("THStack_stack_4","",40,0,1);
   THStack_stack_4->SetMinimum(0.02100845);
   THStack_stack_4->SetMaximum(8291079);
   THStack_stack_4->SetDirectory(0);
   THStack_stack_4->SetStats(0);
   THStack_stack_4->SetLineWidth(2);
   THStack_stack_4->SetMarkerSize(1.2);
   THStack_stack_4->GetXaxis()->SetTitle("2^{nd} highest b-tag");
   THStack_stack_4->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetXaxis()->SetLabelColor(ci);
   THStack_stack_4->GetXaxis()->SetLabelFont(42);
   THStack_stack_4->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_4->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_4->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_4->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_4->GetXaxis()->SetTitleColor(ci);
   THStack_stack_4->GetXaxis()->SetTitleFont(42);
   THStack_stack_4->GetYaxis()->SetTitle("Number of events");
   THStack_stack_4->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetYaxis()->SetLabelColor(ci);
   THStack_stack_4->GetYaxis()->SetLabelFont(42);
   THStack_stack_4->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_4->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_4->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_4->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_4->GetYaxis()->SetTitleColor(ci);
   THStack_stack_4->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetZaxis()->SetLabelColor(ci);
   THStack_stack_4->GetZaxis()->SetLabelFont(42);
   THStack_stack_4->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_4->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_4->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_4->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_4->GetZaxis()->SetTitleColor(ci);
   THStack_stack_4->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_4);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",40,0,1);
   0->SetBinContent(2,0.001882);
   0->SetBinContent(3,0.1129201);
   0->SetBinContent(4,0.5119026);
   0->SetBinContent(5,1.001227);
   0->SetBinContent(6,1.4943);
   0->SetBinContent(7,1.791649);
   0->SetBinContent(8,1.701315);
   0->SetBinContent(9,1.814232);
   0->SetBinContent(10,1.631683);
   0->SetBinContent(11,1.324924);
   0->SetBinContent(12,1.191305);
   0->SetBinContent(13,1.164957);
   0->SetBinContent(14,1.176249);
   0->SetBinContent(15,0.9993449);
   0->SetBinContent(16,0.9654686);
   0->SetBinContent(17,0.8807778);
   0->SetBinContent(18,0.7979691);
   0->SetBinContent(19,0.7640928);
   0->SetBinContent(20,0.7716209);
   0->SetBinContent(21,0.6906942);
   0->SetBinContent(22,0.786677);
   0->SetBinContent(23,0.6323516);
   0->SetBinContent(24,0.5909473);
   0->SetBinContent(25,0.6888121);
   0->SetBinContent(26,0.6530538);
   0->SetBinContent(27,0.6304696);
   0->SetBinContent(28,0.5288407);
   0->SetBinContent(29,0.6304696);
   0->SetBinContent(30,0.6530538);
   0->SetBinContent(31,0.6229416);
   0->SetBinContent(32,0.6417617);
   0->SetBinContent(33,0.66811);
   0->SetBinContent(34,0.6812841);
   0->SetBinContent(35,0.8901879);
   0->SetBinContent(36,0.9861708);
   0->SetBinContent(37,1.420903);
   0->SetBinContent(38,2.002428);
   0->SetBinContent(39,3.423396);
   0->SetBinContent(40,9.872796);
   0->SetEntries(25395);
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
   1->SetBinContent(2,0.001882);
   1->SetBinContent(3,0.003764);
   1->SetBinContent(4,0.01882);
   1->SetBinContent(5,0.02823);
   1->SetBinContent(6,0.1505601);
   1->SetBinContent(7,0.1693801);
   1->SetBinContent(8,0.2314862);
   1->SetBinContent(9,0.3255857);
   1->SetBinContent(10,0.4027471);
   1->SetBinContent(11,0.3651074);
   1->SetBinContent(12,0.5024925);
   1->SetBinContent(13,0.4855545);
   1->SetBinContent(14,0.4912005);
   1->SetBinContent(15,0.5137846);
   1->SetBinContent(16,0.555189);
   1->SetBinContent(17,0.6492898);
   1->SetBinContent(18,0.671874);
   1->SetBinContent(19,0.6906942);
   1->SetBinContent(20,0.6229416);
   1->SetBinContent(21,0.5871832);
   1->SetBinContent(22,0.7640928);
   1->SetBinContent(23,0.6549358);
   1->SetBinContent(24,0.7923231);
   1->SetBinContent(25,0.7358626);
   1->SetBinContent(26,0.8036152);
   1->SetBinContent(27,0.8581936);
   1->SetBinContent(28,0.8186713);
   1->SetBinContent(29,0.9278283);
   1->SetBinContent(30,0.8469015);
   1->SetBinContent(31,1.025692);
   1->SetBinContent(32,1.089679);
   1->SetBinContent(33,1.377618);
   1->SetBinContent(34,1.567696);
   1->SetBinContent(35,1.883865);
   1->SetBinContent(36,2.437188);
   1->SetBinContent(37,3.743349);
   1->SetBinContent(38,6.094062);
   1->SetBinContent(39,13.41961);
   1->SetBinContent(40,75.01108);
   1->SetEntries(64998);
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
   2->SetBinContent(1,0.003764);
   2->SetBinContent(2,0.016938);
   2->SetBinContent(3,0.4065111);
   2->SetBinContent(4,1.789767);
   2->SetBinContent(5,3.528792);
   2->SetBinContent(6,4.264684);
   2->SetBinContent(7,4.919646);
   2->SetBinContent(8,4.812368);
   2->SetBinContent(9,4.665566);
   2->SetBinContent(10,3.508089);
   2->SetBinContent(11,2.689386);
   2->SetBinContent(12,2.30356);
   2->SetBinContent(13,2.00431);
   2->SetBinContent(14,1.962907);
   2->SetBinContent(15,1.848108);
   2->SetBinContent(16,1.624155);
   2->SetBinContent(17,1.488654);
   2->SetBinContent(18,1.403966);
   2->SetBinContent(19,1.430313);
   2->SetBinContent(20,1.30234);
   2->SetBinContent(21,1.230826);
   2->SetBinContent(22,1.132964);
   2->SetBinContent(23,1.06145);
   2->SetBinContent(24,1.036984);
   2->SetBinContent(25,0.9146541);
   2->SetBinContent(26,0.9485304);
   2->SetBinContent(27,0.8920699);
   2->SetBinContent(28,0.8581936);
   2->SetBinContent(29,0.8694857);
   2->SetBinContent(30,0.903362);
   2->SetBinContent(31,0.9522945);
   2->SetBinContent(32,0.9598225);
   2->SetBinContent(33,1.055804);
   2->SetBinContent(34,1.146138);
   2->SetBinContent(35,1.323042);
   2->SetBinContent(36,1.674968);
   2->SetBinContent(37,2.213221);
   2->SetBinContent(38,3.035688);
   2->SetBinContent(39,5.621661);
   2->SetBinContent(40,16.78054);
   2->SetEntries(48133);
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
   3->SetBinContent(1,0.034145);
   3->SetBinContent(2,0.034145);
   3->SetBinContent(3,0.5394908);
   3->SetBinContent(4,2.690633);
   3->SetBinContent(5,5.285617);
   3->SetBinContent(6,7.532287);
   3->SetBinContent(7,9.307862);
   3->SetBinContent(8,10.45518);
   3->SetBinContent(9,10.79664);
   3->SetBinContent(10,9.997618);
   3->SetBinContent(11,8.372253);
   3->SetBinContent(12,7.764466);
   3->SetBinContent(13,7.757637);
   3->SetBinContent(14,7.163533);
   3->SetBinContent(15,7.033786);
   3->SetBinContent(16,6.767463);
   3->SetBinContent(17,6.781121);
   3->SetBinContent(18,6.364565);
   3->SetBinContent(19,6.378222);
   3->SetBinContent(20,6.699175);
   3->SetBinContent(21,6.159701);
   3->SetBinContent(22,6.289448);
   3->SetBinContent(23,6.159701);
   3->SetBinContent(24,6.118729);
   3->SetBinContent(25,5.83192);
   3->SetBinContent(26,5.825091);
   3->SetBinContent(27,6.125557);
   3->SetBinContent(28,5.722659);
   3->SetBinContent(29,6.139215);
   3->SetBinContent(30,6.050441);
   3->SetBinContent(31,6.241647);
   3->SetBinContent(32,6.569428);
   3->SetBinContent(33,7.68252);
   3->SetBinContent(34,8.665912);
   3->SetBinContent(35,10.74201);
   3->SetBinContent(36,14.14981);
   3->SetBinContent(37,19.3191);
   3->SetBinContent(38,30.9477);
   3->SetBinContent(39,65.30775);
   3->SetBinContent(40,314.4008);
   3->SetEntries(98409);
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
   4->SetBinContent(1,0.026305);
   4->SetBinContent(2,0.09995897);
   4->SetBinContent(3,1.72034);
   4->SetBinContent(4,8.001908);
   4->SetBinContent(5,17.41434);
   4->SetBinContent(6,25.72061);
   4->SetBinContent(7,32.76964);
   4->SetBinContent(8,36.74129);
   4->SetBinContent(9,38.69293);
   4->SetBinContent(10,29.97107);
   4->SetBinContent(11,21.25974);
   4->SetBinContent(12,18.75575);
   4->SetBinContent(13,16.70943);
   4->SetBinContent(14,15.86773);
   4->SetBinContent(15,13.76316);
   4->SetBinContent(16,12.71088);
   4->SetBinContent(17,11.78487);
   4->SetBinContent(18,11.28504);
   4->SetBinContent(19,10.22749);
   4->SetBinContent(20,9.801314);
   4->SetBinContent(21,8.791121);
   4->SetBinContent(22,8.622756);
   4->SetBinContent(23,8.401776);
   4->SetBinContent(24,7.433726);
   4->SetBinContent(25,6.95498);
   4->SetBinContent(26,6.802413);
   4->SetBinContent(27,6.5078);
   4->SetBinContent(28,6.576192);
   4->SetBinContent(29,6.044837);
   4->SetBinContent(30,6.339449);
   4->SetBinContent(31,6.423625);
   4->SetBinContent(32,6.349971);
   4->SetBinContent(33,7.112808);
   4->SetBinContent(34,7.723078);
   4->SetBinContent(35,9.127852);
   4->SetBinContent(36,11.10089);
   4->SetBinContent(37,13.91575);
   4->SetBinContent(38,20.33916);
   4->SetBinContent(39,36.9938);
   4->SetBinContent(40,105.6889);
   4->SetEntries(119855);
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
   5->SetBinContent(1,0.012401);
   5->SetBinContent(2,0.4836387);
   5->SetBinContent(3,8.668327);
   5->SetBinContent(4,39.88254);
   5->SetBinContent(5,69.73138);
   5->SetBinContent(6,83.07138);
   5->SetBinContent(7,97.21723);
   5->SetBinContent(8,88.94792);
   5->SetBinContent(9,93.82024);
   5->SetBinContent(10,63.99121);
   5->SetBinContent(11,42.61089);
   5->SetBinContent(12,36.19927);
   5->SetBinContent(13,31.46187);
   5->SetBinContent(14,28.16305);
   5->SetBinContent(15,26.29041);
   5->SetBinContent(16,25.4347);
   5->SetBinContent(17,24.05812);
   5->SetBinContent(18,22.2971);
   5->SetBinContent(19,21.23056);
   5->SetBinContent(20,19.60596);
   5->SetBinContent(21,19.1719);
   5->SetBinContent(22,18.16737);
   5->SetBinContent(23,17.01403);
   5->SetBinContent(24,17.46048);
   5->SetBinContent(25,16.33194);
   5->SetBinContent(26,14.54622);
   5->SetBinContent(27,15.11665);
   5->SetBinContent(28,13.9882);
   5->SetBinContent(29,14.49662);
   5->SetBinContent(30,14.84384);
   5->SetBinContent(31,14.65783);
   5->SetBinContent(32,15.47627);
   5->SetBinContent(33,16.90241);
   5->SetBinContent(34,18.75025);
   5->SetBinContent(35,22.48312);
   5->SetBinContent(36,27.30734);
   5->SetBinContent(37,35.20715);
   5->SetBinContent(38,52.27172);
   5->SetBinContent(39,94.19218);
   5->SetBinContent(40,277.6825);
   5->SetEntries(125736);
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
   6->SetBinContent(1,0.379665);
   6->SetBinContent(2,4.252247);
   6->SetBinContent(3,137.2878);
   6->SetBinContent(4,785.331);
   6->SetBinContent(5,1810.811);
   6->SetBinContent(6,2515.648);
   6->SetBinContent(7,3249.718);
   6->SetBinContent(8,3141.141);
   6->SetBinContent(9,3177.51);
   6->SetBinContent(10,2268.276);
   6->SetBinContent(11,1520.16);
   6->SetBinContent(12,1291.845);
   6->SetBinContent(13,1132.776);
   6->SetBinContent(14,1022.301);
   6->SetBinContent(15,941.7421);
   6->SetBinContent(16,885.2519);
   6->SetBinContent(17,823.7504);
   6->SetBinContent(18,763.1601);
   6->SetBinContent(19,716.8442);
   6->SetBinContent(20,673.7932);
   6->SetBinContent(21,615.2529);
   6->SetBinContent(22,593.5375);
   6->SetBinContent(23,561.7238);
   6->SetBinContent(24,538.1103);
   6->SetBinContent(25,515.5598);
   6->SetBinContent(26,485.1886);
   6->SetBinContent(27,466.1308);
   6->SetBinContent(28,449.123);
   6->SetBinContent(29,449.4267);
   6->SetBinContent(30,449.5785);
   6->SetBinContent(31,442.2135);
   6->SetBinContent(32,474.8625);
   6->SetBinContent(33,504.2465);
   6->SetBinContent(34,564.3054);
   6->SetBinContent(35,637.5756);
   6->SetBinContent(36,776.5234);
   6->SetBinContent(37,1056.013);
   6->SetBinContent(38,1533.979);
   6->SetBinContent(39,2733.257);
   6->SetBinContent(40,8085.663);
   6->SetEntries(642467);
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
   7->SetBinContent(1,0.048822);
   7->SetBinContent(2,27.29165);
   7->SetBinContent(3,631.9147);
   7->SetBinContent(4,2307.696);
   7->SetBinContent(5,3784.209);
   7->SetBinContent(6,4400.079);
   7->SetBinContent(7,5116.729);
   7->SetBinContent(8,4550.86);
   7->SetBinContent(9,4134.991);
   7->SetBinContent(10,2053.936);
   7->SetBinContent(11,973.9557);
   7->SetBinContent(12,673.9069);
   7->SetBinContent(13,512.0905);
   7->SetBinContent(14,402.6667);
   7->SetBinContent(15,323.9558);
   7->SetBinContent(16,264.0437);
   7->SetBinContent(17,231.7683);
   7->SetBinContent(18,190.3132);
   7->SetBinContent(19,162.3347);
   7->SetBinContent(20,145.6843);
   7->SetBinContent(21,127.3738);
   7->SetBinContent(22,117.5121);
   7->SetBinContent(23,103.1101);
   7->SetBinContent(24,99.1556);
   7->SetBinContent(25,90.61201);
   7->SetBinContent(26,85.24176);
   7->SetBinContent(27,79.1392);
   7->SetBinContent(28,74.89182);
   7->SetBinContent(29,72.69489);
   7->SetBinContent(30,71.13264);
   7->SetBinContent(31,71.2791);
   7->SetBinContent(32,76.55171);
   7->SetBinContent(33,82.70309);
   7->SetBinContent(34,89.92853);
   7->SetBinContent(35,104.2329);
   7->SetBinContent(36,128.9851);
   7->SetBinContent(37,170.5866);
   7->SetBinContent(38,252.862);
   7->SetBinContent(39,468.4382);
   7->SetBinContent(40,1558.965);
   7->SetEntries(713001);
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
   8->SetBinContent(2,8.658424);
   8->SetBinContent(3,175.6643);
   8->SetBinContent(4,617.974);
   8->SetBinContent(5,1049.356);
   8->SetBinContent(6,1244.945);
   8->SetBinContent(7,1676.914);
   8->SetBinContent(8,1437.159);
   8->SetBinContent(9,1275.905);
   8->SetBinContent(10,606.2357);
   8->SetBinContent(11,258.4364);
   8->SetBinContent(12,175.9578);
   8->SetBinContent(13,133.9847);
   8->SetBinContent(14,89.372);
   8->SetBinContent(15,68.97356);
   8->SetBinContent(16,49.60237);
   8->SetBinContent(17,44.02582);
   8->SetBinContent(18,29.49739);
   8->SetBinContent(19,22.45324);
   8->SetBinContent(20,18.63765);
   8->SetBinContent(21,13.79479);
   8->SetBinContent(22,10.56622);
   8->SetBinContent(23,8.218164);
   8->SetBinContent(24,6.897388);
   8->SetBinContent(25,4.842849);
   8->SetBinContent(26,4.989602);
   8->SetBinContent(27,2.93506);
   8->SetBinContent(28,1.907789);
   8->SetBinContent(29,1.907789);
   8->SetBinContent(30,0.880518);
   8->SetBinContent(31,0.880518);
   8->SetBinContent(32,1.027271);
   8->SetBinContent(33,1.027271);
   8->SetBinContent(34,0.880518);
   8->SetBinContent(35,1.174024);
   8->SetBinContent(36,1.761036);
   8->SetBinContent(37,0.880518);
   8->SetBinContent(38,1.761036);
   8->SetBinContent(39,2.641554);
   8->SetBinContent(40,4.696096);
   8->SetEntries(61723);
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
   9->SetBinContent(2,10.11491);
   9->SetBinContent(3,219.439);
   9->SetBinContent(4,779.5555);
   9->SetBinContent(5,1398.006);
   9->SetBinContent(6,1791.167);
   9->SetBinContent(7,2291.788);
   9->SetBinContent(8,2187.413);
   9->SetBinContent(9,2268.308);
   9->SetBinContent(10,1699.646);
   9->SetBinContent(11,1281.977);
   9->SetBinContent(12,1100.993);
   9->SetBinContent(13,1046.834);
   9->SetBinContent(14,985.9786);
   9->SetBinContent(15,957.3469);
   9->SetBinContent(16,900.7691);
   9->SetBinContent(17,852.7637);
   9->SetBinContent(18,801.3294);
   9->SetBinContent(19,781.7844);
   9->SetBinContent(20,739.0939);
   9->SetBinContent(21,714.9197);
   9->SetBinContent(22,673.9437);
   9->SetBinContent(23,664.1712);
   9->SetBinContent(24,637.4254);
   9->SetBinContent(25,605.0217);
   9->SetBinContent(26,607.7649);
   9->SetBinContent(27,588.2198);
   9->SetBinContent(28,575.5327);
   9->SetBinContent(29,591.4774);
   9->SetBinContent(30,612.394);
   9->SetBinContent(31,608.4507);
   9->SetBinContent(32,637.2539);
   9->SetBinContent(33,716.1199);
   9->SetBinContent(34,766.8684);
   9->SetBinContent(35,881.3955);
   9->SetBinContent(36,1071.171);
   9->SetBinContent(37,1389.265);
   9->SetBinContent(38,2034.022);
   9->SetBinContent(39,3466.129);
   9->SetBinContent(40,9954.868);
   9->SetEntries(291010);
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
   10->SetBinContent(1,1.767977);
   10->SetBinContent(2,115.9905);
   10->SetBinContent(3,2430.915);
   10->SetBinContent(4,10058.42);
   10->SetBinContent(5,18330.8);
   10->SetBinContent(6,22724.48);
   10->SetBinContent(7,27053.23);
   10->SetBinContent(8,25558.55);
   10->SetBinContent(9,24175.98);
   10->SetBinContent(10,13619.01);
   10->SetBinContent(11,7350.808);
   10->SetBinContent(12,5702.908);
   10->SetBinContent(13,4714.118);
   10->SetBinContent(14,3963.606);
   10->SetBinContent(15,3497.014);
   10->SetBinContent(16,3074.305);
   10->SetBinContent(17,2754.918);
   10->SetBinContent(18,2455.196);
   10->SetBinContent(19,2234.578);
   10->SetBinContent(20,2032.265);
   10->SetBinContent(21,1863.887);
   10->SetBinContent(22,1717.408);
   10->SetBinContent(23,1582.541);
   10->SetBinContent(24,1473.171);
   10->SetBinContent(25,1364.116);
   10->SetBinContent(26,1278.791);
   10->SetBinContent(27,1218.836);
   10->SetBinContent(28,1142.662);
   10->SetBinContent(29,1105.49);
   10->SetBinContent(30,1060.05);
   10->SetBinContent(31,1074.944);
   10->SetBinContent(32,1088.45);
   10->SetBinContent(33,1166.139);
   10->SetBinContent(34,1299.87);
   10->SetBinContent(35,1481.69);
   10->SetBinContent(36,1762.531);
   10->SetBinContent(37,2348.207);
   10->SetBinContent(38,3400.9);
   10->SetBinContent(39,6008.338);
   10->SetBinContent(40,16586.17);
   10->SetEntries(3674316);
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
   11->SetBinContent(1,80.12562);
   11->SetBinContent(2,192.3015);
   11->SetBinContent(3,4839.582);
   11->SetBinContent(4,21233.45);
   11->SetBinContent(5,50589.8);
   11->SetBinContent(6,77749.52);
   11->SetBinContent(7,118817.6);
   11->SetBinContent(8,106383.4);
   11->SetBinContent(9,100647);
   11->SetBinContent(10,50237.28);
   11->SetBinContent(11,21682.16);
   11->SetBinContent(12,15288.03);
   11->SetBinContent(13,11650.27);
   11->SetBinContent(14,9054.157);
   11->SetBinContent(15,7307.417);
   11->SetBinContent(16,5224.18);
   11->SetBinContent(17,5592.752);
   11->SetBinContent(18,3813.984);
   11->SetBinContent(19,2259.545);
   11->SetBinContent(20,2499.922);
   11->SetBinContent(21,1778.79);
   11->SetBinContent(22,1522.388);
   11->SetBinContent(23,1522.388);
   11->SetBinContent(24,1201.885);
   11->SetBinContent(25,1185.86);
   11->SetBinContent(26,801.2564);
   11->SetBinContent(27,897.4073);
   11->SetBinContent(28,705.1055);
   11->SetBinContent(29,673.0552);
   11->SetBinContent(30,673.0552);
   11->SetBinContent(31,673.0552);
   11->SetBinContent(32,496.7787);
   11->SetBinContent(33,705.1055);
   11->SetBinContent(34,512.8038);
   11->SetBinContent(35,769.2061);
   11->SetBinContent(36,1025.608);
   11->SetBinContent(37,1169.835);
   11->SetBinContent(38,1810.841);
   11->SetBinContent(39,2852.475);
   11->SetBinContent(40,6410.022);
   11->SetEntries(40097);
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
   12->SetBinContent(1,63.43479);
   12->SetBinContent(2,1243.325);
   12->SetBinContent(3,20496.18);
   12->SetBinContent(4,64426.65);
   12->SetBinContent(5,133954.1);
   12->SetBinContent(6,209844.4);
   12->SetBinContent(7,352375.8);
   12->SetBinContent(8,293543.8);
   12->SetBinContent(9,280475.7);
   12->SetBinContent(10,133966.8);
   12->SetBinContent(11,53585.18);
   12->SetBinContent(12,36939.18);
   12->SetBinContent(13,25057.34);
   12->SetBinContent(14,18650.15);
   12->SetBinContent(15,14475.96);
   12->SetBinContent(16,11069.37);
   12->SetBinContent(17,8398.649);
   12->SetBinContent(18,6603.491);
   12->SetBinContent(19,4579.99);
   12->SetBinContent(20,3780.727);
   12->SetBinContent(21,3203.468);
   12->SetBinContent(22,2334.408);
   12->SetBinContent(23,2112.385);
   12->SetBinContent(24,2036.263);
   12->SetBinContent(25,1598.561);
   12->SetBinContent(26,1617.592);
   12->SetBinContent(27,1338.477);
   12->SetBinContent(28,1211.607);
   12->SetBinContent(29,1053.02);
   12->SetBinContent(30,1198.92);
   12->SetBinContent(31,976.8975);
   12->SetBinContent(32,1160.859);
   12->SetBinContent(33,1198.92);
   12->SetBinContent(34,1268.699);
   12->SetBinContent(35,1332.134);
   12->SetBinContent(36,1528.782);
   12->SetBinContent(37,2207.538);
   12->SetBinContent(38,2886.293);
   12->SetBinContent(39,5106.481);
   12->SetBinContent(40,14330.06);
   12->SetEntries(271644);
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
   13->SetBinContent(1,1119.829);
   13->SetBinContent(2,5225.87);
   13->SetBinContent(3,85479.86);
   13->SetBinContent(4,406257.6);
   13->SetBinContent(5,1005797);
   13->SetBinContent(6,1551328);
   13->SetBinContent(7,2284706);
   13->SetBinContent(8,2167801);
   13->SetBinContent(9,2002311);
   13->SetBinContent(10,1018988);
   13->SetBinContent(11,443588.8);
   13->SetBinContent(12,309694.1);
   13->SetBinContent(13,229684.8);
   13->SetBinContent(14,165607.5);
   13->SetBinContent(15,143211.6);
   13->SetBinContent(16,113599.2);
   13->SetBinContent(17,84733.33);
   13->SetBinContent(18,63581.55);
   13->SetBinContent(19,52756.5);
   13->SetBinContent(20,45042.11);
   13->SetBinContent(21,36332.3);
   13->SetBinContent(22,30111.01);
   13->SetBinContent(23,27498.07);
   13->SetBinContent(24,23392.02);
   13->SetBinContent(25,16050.9);
   13->SetBinContent(26,16175.33);
   13->SetBinContent(27,14557.79);
   13->SetBinContent(28,12815.83);
   13->SetBinContent(29,9954.038);
   13->SetBinContent(30,8087.651);
   13->SetBinContent(31,9829.612);
   13->SetBinContent(32,10327.32);
   13->SetBinContent(33,9954.038);
   13->SetBinContent(34,9705.187);
   13->SetBinContent(35,12566.98);
   13->SetBinContent(36,13064.68);
   13->SetBinContent(37,14931.07);
   13->SetBinContent(38,22769.89);
   13->SetBinContent(39,36954.43);
   13->SetBinContent(40,81871.62);
   13->SetEntries(101252);
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
   14->SetBinContent(1,225.6509);
   14->SetBinContent(2,721.2769);
   14->SetBinContent(3,3868.313);
   14->SetBinContent(4,9787.364);
   14->SetBinContent(5,17148.89);
   14->SetBinContent(6,26142.28);
   14->SetBinContent(7,42497.88);
   14->SetBinContent(8,44557.85);
   14->SetBinContent(9,44195.04);
   14->SetBinContent(10,20170.86);
   14->SetBinContent(11,7236.819);
   14->SetBinContent(12,5399.459);
   14->SetBinContent(13,4267.227);
   14->SetBinContent(14,3674.895);
   14->SetBinContent(15,3138.966);
   14->SetBinContent(16,2736.012);
   14->SetBinContent(17,2377.383);
   14->SetBinContent(18,2179.935);
   14->SetBinContent(19,1821.313);
   14->SetBinContent(20,1833.401);
   14->SetBinContent(21,1587.607);
   14->SetBinContent(22,1386.136);
   14->SetBinContent(23,1329.724);
   14->SetBinContent(24,1394.194);
   14->SetBinContent(25,1172.576);
   14->SetBinContent(26,1212.871);
   14->SetBinContent(27,1015.429);
   14->SetBinContent(28,1035.576);
   14->SetBinContent(29,1100.047);
   14->SetBinContent(30,975.1341);
   14->SetBinContent(31,918.7214);
   14->SetBinContent(32,959.0162);
   14->SetBinContent(33,1164.518);
   14->SetBinContent(34,1241.077);
   14->SetBinContent(35,1321.665);
   14->SetBinContent(36,1543.283);
   14->SetBinContent(37,2063.078);
   14->SetBinContent(38,3497.595);
   14->SetBinContent(39,5911.18);
   14->SetBinContent(40,16411.53);
   14->SetEntries(72271);
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
   15->SetBinContent(1,579.4279);
   15->SetBinContent(2,197.0053);
   15->SetBinContent(3,637.3707);
   15->SetBinContent(4,1541.27);
   15->SetBinContent(5,3584.688);
   15->SetBinContent(6,6632.432);
   15->SetBinContent(7,14099.96);
   15->SetBinContent(8,15336.21);
   15->SetBinContent(9,15842.3);
   15->SetBinContent(10,7014.848);
   15->SetBinContent(11,2460.615);
   15->SetBinContent(12,1989.354);
   15->SetBinContent(13,1626.252);
   15->SetBinContent(14,1294.052);
   15->SetBinContent(15,1147.266);
   15->SetBinContent(16,915.4962);
   15->SetBinContent(17,764.8448);
   15->SetBinContent(18,710.7649);
   15->SetBinContent(19,614.1935);
   15->SetBinContent(20,594.8793);
   15->SetBinContent(21,440.3651);
   15->SetBinContent(22,513.7593);
   15->SetBinContent(23,428.7766);
   15->SetBinContent(24,467.4051);
   15->SetBinContent(25,382.4223);
   15->SetBinContent(26,285.851);
   15->SetBinContent(27,347.6566);
   15->SetBinContent(28,374.6966);
   15->SetBinContent(29,328.3423);
   15->SetBinContent(30,289.7138);
   15->SetBinContent(31,316.7538);
   15->SetBinContent(32,343.7938);
   15->SetBinContent(33,328.3423);
   15->SetBinContent(34,328.3423);
   15->SetBinContent(35,444.228);
   15->SetBinContent(36,459.6794);
   15->SetBinContent(37,621.9193);
   15->SetBinContent(38,1050.696);
   15->SetBinContent(39,1900.51);
   15->SetBinContent(40,5500.633);
   15->SetEntries(24007);
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
   16->SetBinContent(1,727.3732);
   16->SetBinContent(2,2083.493);
   16->SetBinContent(3,9369.415);
   16->SetBinContent(4,22350.93);
   16->SetBinContent(5,43641.61);
   16->SetBinContent(6,69882.02);
   16->SetBinContent(7,140639.1);
   16->SetBinContent(8,137651.9);
   16->SetBinContent(9,138053.1);
   16->SetBinContent(10,58490.83);
   16->SetBinContent(11,17117.64);
   16->SetBinContent(12,11360.41);
   16->SetBinContent(13,8278.376);
   16->SetBinContent(14,6127.118);
   16->SetBinContent(15,4247.079);
   16->SetBinContent(16,3507.392);
   16->SetBinContent(17,2508.813);
   16->SetBinContent(18,1744.464);
   16->SetBinContent(19,1288.314);
   16->SetBinContent(20,1004.761);
   16->SetBinContent(21,715.0448);
   16->SetBinContent(22,511.6267);
   16->SetBinContent(23,406.8356);
   16->SetBinContent(24,326.7012);
   16->SetBinContent(25,228.0743);
   16->SetBinContent(26,184.9251);
   16->SetBinContent(27,110.9551);
   16->SetBinContent(28,67.80587);
   16->SetBinContent(29,98.62672);
   16->SetBinContent(30,61.6417);
   16->SetBinContent(31,43.14919);
   16->SetBinContent(32,49.31336);
   16->SetBinContent(33,12.32834);
   16->SetBinContent(34,49.31336);
   16->SetBinContent(35,24.65668);
   16->SetBinContent(36,30.82085);
   16->SetBinContent(37,6.16417);
   16->SetBinContent(38,49.31336);
   16->SetBinContent(39,36.98502);
   16->SetBinContent(40,86.29838);
   16->SetEntries(110827);
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
   17->SetBinContent(1,4075.99);
   17->SetBinContent(2,5036.427);
   17->SetBinContent(3,38581.74);
   17->SetBinContent(4,97187.77);
   17->SetBinContent(5,149605.9);
   17->SetBinContent(6,186214.3);
   17->SetBinContent(7,318468.3);
   17->SetBinContent(8,295148);
   17->SetBinContent(9,287788.7);
   17->SetBinContent(10,134709.6);
   17->SetBinContent(11,55659.13);
   17->SetBinContent(12,41299.13);
   17->SetBinContent(13,33193.81);
   17->SetBinContent(14,27243.66);
   17->SetBinContent(15,24057.75);
   17->SetBinContent(16,21972.86);
   17->SetBinContent(17,18693.25);
   17->SetBinContent(18,16912.89);
   17->SetBinContent(19,14429.84);
   17->SetBinContent(20,13516.27);
   17->SetBinContent(21,12813.53);
   17->SetBinContent(22,12391.88);
   17->SetBinContent(23,10635.02);
   17->SetBinContent(24,10049.4);
   17->SetBinContent(25,9416.932);
   17->SetBinContent(26,8690.763);
   17->SetBinContent(27,8761.037);
   17->SetBinContent(28,7378.957);
   17->SetBinContent(29,8831.312);
   17->SetBinContent(30,8714.188);
   17->SetBinContent(31,7285.255);
   17->SetBinContent(32,7519.508);
   17->SetBinContent(33,9065.56);
   17->SetBinContent(34,9252.958);
   17->SetBinContent(35,10892.69);
   17->SetBinContent(36,11712.56);
   17->SetBinContent(37,16631.78);
   17->SetBinContent(38,22207.12);
   17->SetBinContent(39,39097.11);
   17->SetBinContent(40,93908.7);
   17->SetEntries(90036);
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
