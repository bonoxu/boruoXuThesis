{
//=========Macro generated from canvas: canvas1/
//=========  (Mon Aug 14 14:39:16 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-539.6825,-3.950555,2634.921,8.530972);
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
   
   TH1F *THStack_stack_1 = new TH1F("THStack_stack_1","",40,0,2000);
   THStack_stack_1->SetMinimum(0.01977517);
   THStack_stack_1->SetMaximum(3.407611e+07);
   THStack_stack_1->SetDirectory(0);
   THStack_stack_1->SetStats(0);
   THStack_stack_1->SetLineWidth(2);
   THStack_stack_1->SetMarkerSize(1.2);
   THStack_stack_1->GetXaxis()->SetTitle("M_{HH} / GeV");
   THStack_stack_1->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetXaxis()->SetLabelColor(ci);
   THStack_stack_1->GetXaxis()->SetLabelFont(42);
   THStack_stack_1->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_1->GetXaxis()->SetLabelSize(0.03);
   THStack_stack_1->GetXaxis()->SetTitleSize(0.03);
   THStack_stack_1->GetXaxis()->SetTitleOffset(1.3);

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
   THStack_stack_1->GetYaxis()->SetLabelOffset(0.0015);
   THStack_stack_1->GetYaxis()->SetLabelSize(0.03);
   THStack_stack_1->GetYaxis()->SetTitleSize(0.03);
   THStack_stack_1->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   THStack_stack_1->GetYaxis()->SetTitleColor(ci);
   THStack_stack_1->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetZaxis()->SetLabelColor(ci);
   THStack_stack_1->GetZaxis()->SetLabelFont(42);
   THStack_stack_1->GetZaxis()->SetLabelOffset(0.0015);
   THStack_stack_1->GetZaxis()->SetLabelSize(0.03);
   THStack_stack_1->GetZaxis()->SetTitleSize(0.03);
   THStack_stack_1->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_1->GetZaxis()->SetTitleColor(ci);
   THStack_stack_1->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_1);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",40,0,2000);
   0->SetBinContent(2,0.007528);
   0->SetBinContent(3,0.1072741);
   0->SetBinContent(4,0.6229416);
   0->SetBinContent(5,2.614103);
   0->SetBinContent(6,5.834335);
   0->SetBinContent(7,6.805487);
   0->SetBinContent(8,6.575873);
   0->SetBinContent(9,5.587783);
   0->SetBinContent(10,4.567698);
   0->SetBinContent(11,3.493033);
   0->SetBinContent(12,2.546348);
   0->SetBinContent(13,2.068301);
   0->SetBinContent(14,1.507473);
   0->SetBinContent(15,1.106616);
   0->SetBinContent(16,0.7603288);
   0->SetBinContent(17,0.673756);
   0->SetBinContent(18,0.5420148);
   0->SetBinContent(19,0.427213);
   0->SetBinContent(20,0.4102751);
   0->SetBinContent(21,0.4008651);
   0->SetBinContent(22,0.3500515);
   0->SetBinContent(23,0.3161757);
   0->SetBinContent(24,0.2691261);
   0->SetBinContent(25,0.2107842);
   0->SetBinContent(26,0.08845405);
   0->SetBinContent(27,0.011292);
   0->SetBinContent(28,0.003764);
   0->SetEntries(25456);
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
   0->GetXaxis()->SetLabelSize(0.03);
   0->GetXaxis()->SetTitleSize(0.03);
   0->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   0->GetXaxis()->SetTitleColor(ci);
   0->GetXaxis()->SetTitleFont(42);
   0->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   0->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   0->GetYaxis()->SetLabelColor(ci);
   0->GetYaxis()->SetLabelFont(42);
   0->GetYaxis()->SetLabelOffset(0.0015);
   0->GetYaxis()->SetLabelSize(0.03);
   0->GetYaxis()->SetTitleSize(0.03);
   0->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   0->GetYaxis()->SetTitleColor(ci);
   0->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   0->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   0->GetZaxis()->SetLabelColor(ci);
   0->GetZaxis()->SetLabelFont(42);
   0->GetZaxis()->SetLabelOffset(0.0015);
   0->GetZaxis()->SetLabelSize(0.03);
   0->GetZaxis()->SetTitleSize(0.03);
   0->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   0->GetZaxis()->SetTitleColor(ci);
   0->GetZaxis()->SetTitleFont(42);
   THStack->Add(0,"");
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",40,0,2000);
   1->SetBinContent(1,0.001882);
   1->SetBinContent(2,0.020702);
   1->SetBinContent(3,0.4083931);
   1->SetBinContent(4,1.84058);
   1->SetBinContent(5,6.250274);
   1->SetBinContent(6,14.61631);
   1->SetBinContent(7,17.46203);
   1->SetBinContent(8,16.7523);
   1->SetBinContent(9,14.31525);
   1->SetBinContent(10,11.57564);
   1->SetBinContent(11,8.9828);
   1->SetBinContent(12,6.914647);
   1->SetBinContent(13,5.297944);
   1->SetBinContent(14,3.837453);
   1->SetBinContent(15,2.83807);
   1->SetBinContent(16,2.247098);
   1->SetBinContent(17,1.765301);
   1->SetBinContent(18,1.400202);
   1->SetBinContent(19,1.200714);
   1->SetBinContent(20,1.057686);
   1->SetBinContent(21,0.9918168);
   1->SetBinContent(22,0.9108901);
   1->SetBinContent(23,0.7697389);
   1->SetBinContent(24,0.6417617);
   1->SetBinContent(25,0.421567);
   1->SetBinContent(26,0.1900821);
   1->SetBinContent(27,0.035758);
   1->SetBinContent(28,0.003764);
   1->SetBinContent(29,0.001882);
   1->SetEntries(65227);
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
   1->GetXaxis()->SetLabelSize(0.03);
   1->GetXaxis()->SetTitleSize(0.03);
   1->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   1->GetXaxis()->SetTitleColor(ci);
   1->GetXaxis()->SetTitleFont(42);
   1->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   1->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   1->GetYaxis()->SetLabelColor(ci);
   1->GetYaxis()->SetLabelFont(42);
   1->GetYaxis()->SetLabelOffset(0.0015);
   1->GetYaxis()->SetLabelSize(0.03);
   1->GetYaxis()->SetTitleSize(0.03);
   1->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   1->GetYaxis()->SetTitleColor(ci);
   1->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   1->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   1->GetZaxis()->SetLabelColor(ci);
   1->GetZaxis()->SetLabelFont(42);
   1->GetZaxis()->SetLabelOffset(0.0015);
   1->GetZaxis()->SetLabelSize(0.03);
   1->GetZaxis()->SetTitleSize(0.03);
   1->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   1->GetZaxis()->SetTitleColor(ci);
   1->GetZaxis()->SetTitleFont(42);
   THStack->Add(1,"");
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",40,0,2000);
   2->SetBinContent(1,0.011292);
   2->SetBinContent(2,0.1524421);
   2->SetBinContent(3,1.793531);
   2->SetBinContent(4,4.119764);
   2->SetBinContent(5,7.784166);
   2->SetBinContent(6,12.40543);
   2->SetBinContent(7,12.49763);
   2->SetBinContent(8,11.37619);
   2->SetBinContent(9,9.7599);
   2->SetBinContent(10,7.690063);
   2->SetBinContent(11,5.826807);
   2->SetBinContent(12,4.452891);
   2->SetBinContent(13,3.329292);
   2->SetBinContent(14,2.392018);
   2->SetBinContent(15,1.872573);
   2->SetBinContent(16,1.48489);
   2->SetBinContent(17,1.025692);
   2->SetBinContent(18,0.8356094);
   2->SetBinContent(19,0.7283345);
   2->SetBinContent(20,0.6888121);
   2->SetBinContent(21,0.5250767);
   2->SetBinContent(22,0.5438969);
   2->SetBinContent(23,0.4686167);
   2->SetBinContent(24,0.3575794);
   2->SetBinContent(25,0.2653621);
   2->SetBinContent(26,0.1242121);
   2->SetBinContent(27,0.024466);
   2->SetBinContent(28,0.001882);
   2->SetBinContent(29,0.001882);
   2->SetBinContent(30,0.001882);
   2->SetEntries(49173);
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
   2->GetXaxis()->SetLabelSize(0.03);
   2->GetXaxis()->SetTitleSize(0.03);
   2->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   2->GetXaxis()->SetTitleColor(ci);
   2->GetXaxis()->SetTitleFont(42);
   2->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   2->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   2->GetYaxis()->SetLabelColor(ci);
   2->GetYaxis()->SetLabelFont(42);
   2->GetYaxis()->SetLabelOffset(0.0015);
   2->GetYaxis()->SetLabelSize(0.03);
   2->GetYaxis()->SetTitleSize(0.03);
   2->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   2->GetYaxis()->SetTitleColor(ci);
   2->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   2->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   2->GetZaxis()->SetLabelColor(ci);
   2->GetZaxis()->SetLabelFont(42);
   2->GetZaxis()->SetLabelOffset(0.0015);
   2->GetZaxis()->SetLabelSize(0.03);
   2->GetZaxis()->SetTitleSize(0.03);
   2->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   2->GetZaxis()->SetTitleColor(ci);
   2->GetZaxis()->SetTitleFont(42);
   THStack->Add(2,"");
   
   TH1F *3 = new TH1F("3","Hbb#nu",40,0,2000);
   3->SetBinContent(1,0.040974);
   3->SetBinContent(2,1.317999);
   3->SetBinContent(3,11.34298);
   3->SetBinContent(4,35.99382);
   3->SetBinContent(5,104.2018);
   3->SetBinContent(6,116.4586);
   3->SetBinContent(7,99.57903);
   3->SetBinContent(8,78.5137);
   3->SetBinContent(9,60.0841);
   3->SetBinContent(10,46.95326);
   3->SetBinContent(11,35.20174);
   3->SetBinContent(12,26.13375);
   3->SetBinContent(13,18.84111);
   3->SetBinContent(14,13.94493);
   3->SetBinContent(15,10.60542);
   3->SetBinContent(16,7.51863);
   3->SetBinContent(17,5.32659);
   3->SetBinContent(18,4.076922);
   3->SetBinContent(19,2.85453);
   3->SetBinContent(20,1.980415);
   3->SetBinContent(21,1.256538);
   3->SetBinContent(22,0.9628903);
   3->SetBinContent(23,0.6897293);
   3->SetBinContent(24,0.4507137);
   3->SetBinContent(25,0.2663309);
   3->SetBinContent(26,0.075119);
   3->SetBinContent(27,0.013658);
   3->SetBinContent(28,0.006829);
   3->SetEntries(100269);
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
   3->GetXaxis()->SetLabelSize(0.03);
   3->GetXaxis()->SetTitleSize(0.03);
   3->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   3->GetXaxis()->SetTitleColor(ci);
   3->GetXaxis()->SetTitleFont(42);
   3->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   3->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   3->GetYaxis()->SetLabelColor(ci);
   3->GetYaxis()->SetLabelFont(42);
   3->GetYaxis()->SetLabelOffset(0.0015);
   3->GetYaxis()->SetLabelSize(0.03);
   3->GetYaxis()->SetTitleSize(0.03);
   3->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   3->GetYaxis()->SetTitleColor(ci);
   3->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   3->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   3->GetZaxis()->SetLabelColor(ci);
   3->GetZaxis()->SetLabelFont(42);
   3->GetZaxis()->SetLabelOffset(0.0015);
   3->GetZaxis()->SetLabelSize(0.03);
   3->GetZaxis()->SetTitleSize(0.03);
   3->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   3->GetZaxis()->SetTitleColor(ci);
   3->GetZaxis()->SetTitleFont(42);
   THStack->Add(3,"");
   
   TH1F *4 = new TH1F("4","Hcc#nu",40,0,2000);
   4->SetBinContent(1,0.9048925);
   4->SetBinContent(2,10.0486);
   4->SetBinContent(3,94.31804);
   4->SetBinContent(4,89.84866);
   4->SetBinContent(5,100.7352);
   4->SetBinContent(6,104.7834);
   4->SetBinContent(7,82.09964);
   4->SetBinContent(8,64.76962);
   4->SetBinContent(9,49.22438);
   4->SetBinContent(10,37.05692);
   4->SetBinContent(11,27.425);
   4->SetBinContent(12,20.32337);
   4->SetBinContent(13,15.13113);
   4->SetBinContent(14,10.92726);
   4->SetBinContent(15,7.886167);
   4->SetBinContent(16,6.123751);
   4->SetBinContent(17,4.440248);
   4->SetBinContent(18,2.940879);
   4->SetBinContent(19,2.22013);
   4->SetBinContent(20,1.599338);
   4->SetBinContent(21,1.067983);
   4->SetBinContent(22,0.8259774);
   4->SetBinContent(23,0.4945342);
   4->SetBinContent(24,0.3577481);
   4->SetBinContent(25,0.21044);
   4->SetBinContent(26,0.07891499);
   4->SetBinContent(27,0.036827);
   4->SetEntries(139862);
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
   4->GetXaxis()->SetLabelSize(0.03);
   4->GetXaxis()->SetTitleSize(0.03);
   4->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   4->GetXaxis()->SetTitleColor(ci);
   4->GetXaxis()->SetTitleFont(42);
   4->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   4->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   4->GetYaxis()->SetLabelColor(ci);
   4->GetYaxis()->SetLabelFont(42);
   4->GetYaxis()->SetLabelOffset(0.0015);
   4->GetYaxis()->SetLabelSize(0.03);
   4->GetYaxis()->SetTitleSize(0.03);
   4->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   4->GetYaxis()->SetTitleColor(ci);
   4->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   4->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   4->GetZaxis()->SetLabelColor(ci);
   4->GetZaxis()->SetLabelFont(42);
   4->GetZaxis()->SetLabelOffset(0.0015);
   4->GetZaxis()->SetLabelSize(0.03);
   4->GetZaxis()->SetTitleSize(0.03);
   4->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   4->GetZaxis()->SetTitleColor(ci);
   4->GetZaxis()->SetTitleFont(42);
   THStack->Add(4,"");
   
   TH1F *5 = new TH1F("5","Hqq#nu",40,0,2000);
   5->SetBinContent(1,0.086807);
   5->SetBinContent(2,2.157773);
   5->SetBinContent(3,21.99946);
   5->SetBinContent(4,64.69789);
   5->SetBinContent(5,217.9152);
   5->SetBinContent(6,278.4383);
   5->SetBinContent(7,237.2056);
   5->SetBinContent(8,188.502);
   5->SetBinContent(9,144.1279);
   5->SetBinContent(10,111.2391);
   5->SetBinContent(11,85.61292);
   5->SetBinContent(12,63.42074);
   5->SetBinContent(13,47.08786);
   5->SetBinContent(14,33.88018);
   5->SetBinContent(15,24.20694);
   5->SetBinContent(16,18.45261);
   5->SetBinContent(17,13.54177);
   5->SetBinContent(18,9.536371);
   5->SetBinContent(19,7.081011);
   5->SetBinContent(20,4.575988);
   5->SetBinContent(21,3.087856);
   5->SetBinContent(22,2.517405);
   5->SetBinContent(23,1.872549);
   5->SetBinContent(24,1.029282);
   5->SetBinContent(25,0.7688614);
   5->SetBinContent(26,0.3968318);
   5->SetBinContent(27,0.086807);
   5->SetBinContent(28,0.012401);
   5->SetEntries(127691);
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
   5->GetXaxis()->SetLabelSize(0.03);
   5->GetXaxis()->SetTitleSize(0.03);
   5->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   5->GetXaxis()->SetTitleColor(ci);
   5->GetXaxis()->SetTitleFont(42);
   5->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   5->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   5->GetYaxis()->SetLabelColor(ci);
   5->GetYaxis()->SetLabelFont(42);
   5->GetYaxis()->SetLabelOffset(0.0015);
   5->GetYaxis()->SetLabelSize(0.03);
   5->GetYaxis()->SetTitleSize(0.03);
   5->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   5->GetYaxis()->SetTitleColor(ci);
   5->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   5->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   5->GetZaxis()->SetLabelColor(ci);
   5->GetZaxis()->SetLabelFont(42);
   5->GetZaxis()->SetLabelOffset(0.0015);
   5->GetZaxis()->SetLabelSize(0.03);
   5->GetZaxis()->SetTitleSize(0.03);
   5->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   5->GetZaxis()->SetTitleColor(ci);
   5->GetZaxis()->SetTitleFont(42);
   THStack->Add(5,"");
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",40,0,2000);
   6->SetBinContent(1,5.087244);
   6->SetBinContent(2,108.1977);
   6->SetBinContent(3,858.5915);
   6->SetBinContent(4,2694.372);
   6->SetBinContent(5,6378.184);
   6->SetBinContent(6,7994.475);
   6->SetBinContent(7,7444.209);
   6->SetBinContent(8,6238.484);
   6->SetBinContent(9,4889.785);
   6->SetBinContent(10,3736.48);
   6->SetBinContent(11,2797.482);
   6->SetBinContent(12,2038.433);
   6->SetBinContent(13,1464.495);
   6->SetBinContent(14,1026.468);
   6->SetBinContent(15,718.4289);
   6->SetBinContent(16,484.4196);
   6->SetBinContent(17,330.2104);
   6->SetBinContent(18,218.5207);
   6->SetBinContent(19,139.8595);
   6->SetBinContent(20,85.41935);
   6->SetBinContent(21,55.65567);
   6->SetBinContent(22,35.15519);
   6->SetBinContent(23,22.09537);
   6->SetBinContent(24,13.1357);
   6->SetBinContent(25,6.985473);
   6->SetBinContent(26,4.859457);
   6->SetBinContent(27,2.050083);
   6->SetBinContent(28,0.9870769);
   6->SetBinContent(29,0.227787);
   6->SetBinContent(30,0.075929);
   6->SetBinContent(32,0.075929);
   6->SetEntries(655267);
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
   6->GetXaxis()->SetLabelSize(0.03);
   6->GetXaxis()->SetTitleSize(0.03);
   6->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   6->GetXaxis()->SetTitleColor(ci);
   6->GetXaxis()->SetTitleFont(42);
   6->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   6->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   6->GetYaxis()->SetLabelColor(ci);
   6->GetYaxis()->SetLabelFont(42);
   6->GetYaxis()->SetLabelOffset(0.0015);
   6->GetYaxis()->SetLabelSize(0.03);
   6->GetYaxis()->SetTitleSize(0.03);
   6->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   6->GetYaxis()->SetTitleColor(ci);
   6->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   6->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   6->GetZaxis()->SetLabelColor(ci);
   6->GetZaxis()->SetLabelFont(42);
   6->GetZaxis()->SetLabelOffset(0.0015);
   6->GetZaxis()->SetLabelSize(0.03);
   6->GetZaxis()->SetTitleSize(0.03);
   6->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   6->GetZaxis()->SetTitleColor(ci);
   6->GetZaxis()->SetTitleFont(42);
   THStack->Add(6,"");
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",40,0,2000);
   7->SetBinContent(1,0.6346859);
   7->SetBinContent(2,30.75804);
   7->SetBinContent(3,465.8991);
   7->SetBinContent(4,3298.174);
   7->SetBinContent(5,5587.676);
   7->SetBinContent(6,5111.553);
   7->SetBinContent(7,4105.889);
   7->SetBinContent(8,3226.641);
   7->SetBinContent(9,2552.471);
   7->SetBinContent(10,2008.917);
   7->SetBinContent(11,1576.544);
   7->SetBinContent(12,1289.141);
   7->SetBinContent(13,1034.356);
   7->SetBinContent(14,850.03);
   7->SetBinContent(15,708.0378);
   7->SetBinContent(16,606.8171);
   7->SetBinContent(17,517.1686);
   7->SetBinContent(18,450.9577);
   7->SetBinContent(19,396.5632);
   7->SetBinContent(20,334.7468);
   7->SetBinContent(21,304.4734);
   7->SetBinContent(22,261.7976);
   7->SetBinContent(23,218.5847);
   7->SetBinContent(24,176.3972);
   7->SetBinContent(25,118.2444);
   7->SetBinContent(26,58.43931);
   7->SetBinContent(27,16.89248);
   7->SetBinContent(28,2.099347);
   7->SetBinContent(29,0.7323299);
   7->SetBinContent(30,0.341754);
   7->SetBinContent(32,0.195288);
   7->SetBinContent(33,0.097644);
   7->SetBinContent(34,0.048822);
   7->SetBinContent(37,0.048822);
   7->SetEntries(723186);
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
   7->GetXaxis()->SetLabelSize(0.03);
   7->GetXaxis()->SetTitleSize(0.03);
   7->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   7->GetXaxis()->SetTitleColor(ci);
   7->GetXaxis()->SetTitleFont(42);
   7->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   7->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   7->GetYaxis()->SetLabelColor(ci);
   7->GetYaxis()->SetLabelFont(42);
   7->GetYaxis()->SetLabelOffset(0.0015);
   7->GetYaxis()->SetLabelSize(0.03);
   7->GetYaxis()->SetTitleSize(0.03);
   7->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   7->GetYaxis()->SetTitleColor(ci);
   7->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   7->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   7->GetZaxis()->SetLabelColor(ci);
   7->GetZaxis()->SetLabelFont(42);
   7->GetZaxis()->SetLabelOffset(0.0015);
   7->GetZaxis()->SetLabelSize(0.03);
   7->GetZaxis()->SetTitleSize(0.03);
   7->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   7->GetZaxis()->SetTitleColor(ci);
   7->GetZaxis()->SetTitleFont(42);
   THStack->Add(7,"");
   
   TH1F *8 = new TH1F("8","qqqqll",40,0,2000);
   8->SetBinContent(1,2.054542);
   8->SetBinContent(2,26.85583);
   8->SetBinContent(3,208.3916);
   8->SetBinContent(4,660.9655);
   8->SetBinContent(5,855.0873);
   8->SetBinContent(6,834.9855);
   8->SetBinContent(7,792.8744);
   8->SetBinContent(8,709.0924);
   8->SetBinContent(9,647.9066);
   8->SetBinContent(10,579.5311);
   8->SetBinContent(11,517.1715);
   8->SetBinContent(12,462.5782);
   8->SetBinContent(13,406.076);
   8->SetBinContent(14,352.9492);
   8->SetBinContent(15,305.9863);
   8->SetBinContent(16,279.5697);
   8->SetBinContent(17,237.0096);
   8->SetBinContent(18,222.774);
   8->SetBinContent(19,182.8555);
   8->SetBinContent(20,163.7768);
   8->SetBinContent(21,153.6505);
   8->SetBinContent(22,133.9847);
   8->SetBinContent(23,127.9676);
   8->SetBinContent(24,104.7809);
   8->SetBinContent(25,90.39926);
   8->SetBinContent(26,84.52921);
   8->SetBinContent(27,65.59827);
   8->SetBinContent(28,51.65689);
   8->SetBinContent(29,23.77402);
   8->SetBinContent(30,5.576613);
   8->SetBinContent(31,1.614283);
   8->SetBinContent(32,0.733765);
   8->SetBinContent(33,0.587012);
   8->SetBinContent(34,1.027271);
   8->SetBinContent(37,0.146753);
   8->SetBinContent(38,0.146753);
   8->SetBinContent(39,0.293506);
   8->SetBinContent(40,0.146753);
   8->SetBinContent(41,0.146753);
   8->SetEntries(63340);
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
   8->GetXaxis()->SetLabelSize(0.03);
   8->GetXaxis()->SetTitleSize(0.03);
   8->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   8->GetXaxis()->SetTitleColor(ci);
   8->GetXaxis()->SetTitleFont(42);
   8->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   8->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   8->GetYaxis()->SetLabelColor(ci);
   8->GetYaxis()->SetLabelFont(42);
   8->GetYaxis()->SetLabelOffset(0.0015);
   8->GetYaxis()->SetLabelSize(0.03);
   8->GetYaxis()->SetTitleSize(0.03);
   8->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   8->GetYaxis()->SetTitleColor(ci);
   8->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   8->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   8->GetZaxis()->SetLabelColor(ci);
   8->GetZaxis()->SetLabelFont(42);
   8->GetZaxis()->SetLabelOffset(0.0015);
   8->GetZaxis()->SetLabelSize(0.03);
   8->GetZaxis()->SetTitleSize(0.03);
   8->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   8->GetZaxis()->SetTitleColor(ci);
   8->GetZaxis()->SetTitleFont(42);
   THStack->Add(8,"");
   
   TH1F *9 = new TH1F("9","qqqql#nu",40,0,2000);
   9->SetBinContent(1,0.857195);
   9->SetBinContent(2,18.17253);
   9->SetBinContent(3,181.2096);
   9->SetBinContent(4,761.2106);
   9->SetBinContent(5,1654.915);
   9->SetBinContent(6,2245.342);
   9->SetBinContent(7,2579.203);
   9->SetBinContent(8,2669.695);
   9->SetBinContent(9,2658.384);
   9->SetBinContent(10,2623.764);
   9->SetBinContent(11,2610.224);
   9->SetBinContent(12,2570.977);
   9->SetBinContent(13,2505.85);
   9->SetBinContent(14,2503.279);
   9->SetBinContent(15,2478.599);
   9->SetBinContent(16,2519.561);
   9->SetBinContent(17,2484.426);
   9->SetBinContent(18,2452.377);
   9->SetBinContent(19,2431.639);
   9->SetBinContent(20,2388.278);
   9->SetBinContent(21,2251.512);
   9->SetBinContent(22,2066.071);
   9->SetBinContent(23,1827.501);
   9->SetBinContent(24,1495.868);
   9->SetBinContent(25,1067.744);
   9->SetBinContent(26,638.2826);
   9->SetBinContent(27,281.6713);
   9->SetBinContent(28,90.00579);
   9->SetBinContent(29,18.85829);
   9->SetBinContent(30,2.400146);
   9->SetBinContent(31,3.085902);
   9->SetBinContent(32,1.028634);
   9->SetBinContent(33,0.342878);
   9->SetBinContent(34,0.171439);
   9->SetBinContent(35,0.171439);
   9->SetBinContent(36,0.342878);
   9->SetBinContent(38,0.171439);
   9->SetBinContent(39,0.171439);
   9->SetEntries(292178);
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
   9->GetXaxis()->SetLabelSize(0.03);
   9->GetXaxis()->SetTitleSize(0.03);
   9->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   9->GetXaxis()->SetTitleColor(ci);
   9->GetXaxis()->SetTitleFont(42);
   9->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   9->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   9->GetYaxis()->SetLabelColor(ci);
   9->GetYaxis()->SetLabelFont(42);
   9->GetYaxis()->SetLabelOffset(0.0015);
   9->GetYaxis()->SetLabelSize(0.03);
   9->GetYaxis()->SetTitleSize(0.03);
   9->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   9->GetYaxis()->SetTitleColor(ci);
   9->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   9->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   9->GetZaxis()->SetLabelColor(ci);
   9->GetZaxis()->SetLabelFont(42);
   9->GetZaxis()->SetLabelOffset(0.0015);
   9->GetZaxis()->SetLabelSize(0.03);
   9->GetZaxis()->SetTitleSize(0.03);
   9->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   9->GetZaxis()->SetTitleColor(ci);
   9->GetZaxis()->SetTitleFont(42);
   THStack->Add(9,"");
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",40,0,2000);
   10->SetBinContent(1,9.344139);
   10->SetBinContent(2,552.3245);
   10->SetBinContent(3,5422.671);
   10->SetBinContent(4,34812.42);
   10->SetBinContent(5,43696.42);
   10->SetBinContent(6,36173.48);
   10->SetBinContent(7,28681.48);
   10->SetBinContent(8,22290.73);
   10->SetBinContent(9,17186.79);
   10->SetBinContent(10,13024.67);
   10->SetBinContent(11,9811.745);
   10->SetBinContent(12,7307.028);
   10->SetBinContent(13,5410.829);
   10->SetBinContent(14,3972.961);
   10->SetBinContent(15,2863.043);
   10->SetBinContent(16,2040.214);
   10->SetBinContent(17,1439.972);
   10->SetBinContent(18,961.4689);
   10->SetBinContent(19,641.815);
   10->SetBinContent(20,416.4017);
   10->SetBinContent(21,264.9899);
   10->SetBinContent(22,160.3023);
   10->SetBinContent(23,92.17767);
   10->SetBinContent(24,56.19125);
   10->SetBinContent(25,30.87333);
   10->SetBinContent(26,11.86958);
   10->SetBinContent(27,6.881831);
   10->SetBinContent(28,2.967393);
   10->SetBinContent(29,0.7576318);
   10->SetBinContent(30,0.252544);
   10->SetBinContent(31,0.252544);
   10->SetBinContent(32,0.063136);
   10->SetBinContent(33,0.126272);
   10->SetBinContent(35,0.063136);
   10->SetBinContent(39,0.063136);
   10->SetBinContent(40,0.063136);
   10->SetEntries(3769110);
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
   10->GetXaxis()->SetLabelSize(0.03);
   10->GetXaxis()->SetTitleSize(0.03);
   10->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   10->GetXaxis()->SetTitleColor(ci);
   10->GetXaxis()->SetTitleFont(42);
   10->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   10->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   10->GetYaxis()->SetLabelColor(ci);
   10->GetYaxis()->SetLabelFont(42);
   10->GetYaxis()->SetLabelOffset(0.0015);
   10->GetYaxis()->SetLabelSize(0.03);
   10->GetYaxis()->SetTitleSize(0.03);
   10->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   10->GetYaxis()->SetTitleColor(ci);
   10->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   10->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   10->GetZaxis()->SetLabelColor(ci);
   10->GetZaxis()->SetLabelFont(42);
   10->GetZaxis()->SetLabelOffset(0.0015);
   10->GetZaxis()->SetLabelSize(0.03);
   10->GetZaxis()->SetTitleSize(0.03);
   10->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   10->GetZaxis()->SetTitleColor(ci);
   10->GetZaxis()->SetTitleFont(42);
   THStack->Add(10,"");
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",40,0,2000);
   11->SetBinContent(1,98420.15);
   11->SetBinContent(2,406531.2);
   11->SetBinContent(3,253431.5);
   11->SetBinContent(4,162165.1);
   11->SetBinContent(5,116100.9);
   11->SetBinContent(6,83992.54);
   11->SetBinContent(7,61903.82);
   11->SetBinContent(8,45784.59);
   11->SetBinContent(9,34414.91);
   11->SetBinContent(10,27632.77);
   11->SetBinContent(11,22721.14);
   11->SetBinContent(12,17500.5);
   11->SetBinContent(13,15678.92);
   11->SetBinContent(14,11254.94);
   11->SetBinContent(15,10653.15);
   11->SetBinContent(16,8489.95);
   11->SetBinContent(17,6359.336);
   11->SetBinContent(18,6034.053);
   11->SetBinContent(19,4960.618);
   11->SetBinContent(20,3838.387);
   11->SetBinContent(21,2927.581);
   11->SetBinContent(22,2309.533);
   11->SetBinContent(23,2146.889);
   11->SetBinContent(24,1463.788);
   11->SetBinContent(25,1219.824);
   11->SetBinContent(26,1138.503);
   11->SetBinContent(27,796.9521);
   11->SetBinContent(28,390.3437);
   11->SetBinContent(29,162.6433);
   11->SetBinContent(30,65.0573);
   11->SetBinContent(32,16.26433);
   11->SetBinContent(35,48.79298);
   11->SetEntries(86731);
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
   11->GetXaxis()->SetLabelSize(0.03);
   11->GetXaxis()->SetTitleSize(0.03);
   11->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   11->GetXaxis()->SetTitleColor(ci);
   11->GetXaxis()->SetTitleFont(42);
   11->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   11->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   11->GetYaxis()->SetLabelColor(ci);
   11->GetYaxis()->SetLabelFont(42);
   11->GetYaxis()->SetLabelOffset(0.0015);
   11->GetYaxis()->SetLabelSize(0.03);
   11->GetYaxis()->SetTitleSize(0.03);
   11->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   11->GetYaxis()->SetTitleColor(ci);
   11->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   11->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   11->GetZaxis()->SetLabelColor(ci);
   11->GetZaxis()->SetLabelFont(42);
   11->GetZaxis()->SetLabelOffset(0.0015);
   11->GetZaxis()->SetLabelSize(0.03);
   11->GetZaxis()->SetTitleSize(0.03);
   11->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   11->GetZaxis()->SetTitleColor(ci);
   11->GetZaxis()->SetTitleFont(42);
   THStack->Add(11,"");
   
   TH1F *12 = new TH1F("12","qqqq",40,0,2000);
   12->SetBinContent(1,2251.942);
   12->SetBinContent(2,28736.71);
   12->SetBinContent(3,66970.49);
   12->SetBinContent(4,94984.49);
   12->SetBinContent(5,103605.6);
   12->SetBinContent(6,104271.7);
   12->SetBinContent(7,99272.87);
   12->SetBinContent(8,94470.65);
   12->SetBinContent(9,88044.43);
   12->SetBinContent(10,82639.55);
   12->SetBinContent(11,77405.96);
   12->SetBinContent(12,69387.46);
   12->SetBinContent(13,65067.37);
   12->SetBinContent(14,59332.62);
   12->SetBinContent(15,55913.34);
   12->SetBinContent(16,52792.21);
   12->SetBinContent(17,49315.84);
   12->SetBinContent(18,47514.21);
   12->SetBinContent(19,46410.4);
   12->SetBinContent(20,45864.84);
   12->SetBinContent(21,46182.02);
   12->SetBinContent(22,46454.8);
   12->SetBinContent(23,48465.77);
   12->SetBinContent(24,50000.96);
   12->SetBinContent(25,55152.09);
   12->SetBinContent(26,63589.27);
   12->SetBinContent(27,71182.74);
   12->SetBinContent(28,67287.68);
   12->SetBinContent(29,31052.18);
   12->SetBinContent(30,6007.224);
   12->SetBinContent(31,926.1495);
   12->SetBinContent(32,355.2347);
   12->SetBinContent(33,145.9);
   12->SetBinContent(34,69.77827);
   12->SetBinContent(35,25.37391);
   12->SetBinContent(36,31.71739);
   12->SetBinContent(38,6.343478);
   12->SetEntries(287086);
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
   12->GetXaxis()->SetLabelSize(0.03);
   12->GetXaxis()->SetTitleSize(0.03);
   12->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   12->GetXaxis()->SetTitleColor(ci);
   12->GetXaxis()->SetTitleFont(42);
   12->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   12->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   12->GetYaxis()->SetLabelColor(ci);
   12->GetYaxis()->SetLabelFont(42);
   12->GetYaxis()->SetLabelOffset(0.0015);
   12->GetYaxis()->SetLabelSize(0.03);
   12->GetYaxis()->SetTitleSize(0.03);
   12->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   12->GetYaxis()->SetTitleColor(ci);
   12->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   12->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   12->GetZaxis()->SetLabelColor(ci);
   12->GetZaxis()->SetLabelFont(42);
   12->GetZaxis()->SetLabelOffset(0.0015);
   12->GetZaxis()->SetLabelSize(0.03);
   12->GetZaxis()->SetTitleSize(0.03);
   12->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   12->GetZaxis()->SetTitleColor(ci);
   12->GetZaxis()->SetTitleFont(42);
   THStack->Add(12,"");
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",40,0,2000);
   13->SetBinContent(1,2051051);
   13->SetBinContent(2,9145771);
   13->SetBinContent(3,5912092);
   13->SetBinContent(4,3754008);
   13->SetBinContent(5,2617572);
   13->SetBinContent(6,1767031);
   13->SetBinContent(7,1235132);
   13->SetBinContent(8,839676.6);
   13->SetBinContent(9,627297.5);
   13->SetBinContent(10,474696);
   13->SetBinContent(11,335773.9);
   13->SetBinContent(12,259771.8);
   13->SetBinContent(13,181277.7);
   13->SetBinContent(14,137046.9);
   13->SetBinContent(15,101290.4);
   13->SetBinContent(16,76248.62);
   13->SetBinContent(17,56688.35);
   13->SetBinContent(18,40616.26);
   13->SetBinContent(19,31770.38);
   13->SetBinContent(20,22799.91);
   13->SetBinContent(21,17567.14);
   13->SetBinContent(22,13081.9);
   13->SetBinContent(23,8222.899);
   13->SetBinContent(24,5232.754);
   13->SetBinContent(25,4485.218);
   13->SetBinContent(26,3488.503);
   13->SetBinContent(27,1245.894);
   13->SetBinContent(28,373.7683);
   13->SetBinContent(29,498.3577);
   13->SetBinContent(30,124.5894);
   13->SetBinContent(31,373.7683);
   13->SetBinContent(34,124.5894);
   13->SetBinContent(36,124.5894);
   13->SetBinContent(37,124.5894);
   13->SetEntries(238608);
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
   13->GetXaxis()->SetLabelSize(0.03);
   13->GetXaxis()->SetTitleSize(0.03);
   13->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   13->GetXaxis()->SetTitleColor(ci);
   13->GetXaxis()->SetTitleFont(42);
   13->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   13->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   13->GetYaxis()->SetLabelColor(ci);
   13->GetYaxis()->SetLabelFont(42);
   13->GetYaxis()->SetLabelOffset(0.0015);
   13->GetYaxis()->SetLabelSize(0.03);
   13->GetYaxis()->SetTitleSize(0.03);
   13->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   13->GetYaxis()->SetTitleColor(ci);
   13->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   13->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   13->GetZaxis()->SetLabelColor(ci);
   13->GetZaxis()->SetLabelFont(42);
   13->GetZaxis()->SetLabelOffset(0.0015);
   13->GetZaxis()->SetLabelSize(0.03);
   13->GetZaxis()->SetTitleSize(0.03);
   13->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   13->GetZaxis()->SetTitleColor(ci);
   13->GetZaxis()->SetTitleFont(42);
   THStack->Add(13,"");
   
   TH1F *14 = new TH1F("14","qq#nu#nu",40,0,2000);
   14->SetBinContent(1,18353.65);
   14->SetBinContent(2,352521.2);
   14->SetBinContent(3,757728.7);
   14->SetBinContent(4,188634.7);
   14->SetBinContent(5,50306.41);
   14->SetBinContent(6,18712.26);
   14->SetBinContent(7,10178.21);
   14->SetBinContent(8,6060.264);
   14->SetBinContent(9,4057.701);
   14->SetBinContent(10,2945.548);
   14->SetBinContent(11,2320.969);
   14->SetBinContent(12,1748.783);
   14->SetBinContent(13,1341.812);
   14->SetBinContent(14,987.2225);
   14->SetBinContent(15,785.7485);
   14->SetBinContent(16,608.4514);
   14->SetBinContent(17,435.1838);
   14->SetBinContent(18,419.0659);
   14->SetBinContent(19,415.0364);
   14->SetBinContent(20,290.1225);
   14->SetBinContent(21,261.9162);
   14->SetBinContent(22,213.5624);
   14->SetBinContent(23,157.1497);
   14->SetBinContent(24,181.3266);
   14->SetBinContent(25,112.8254);
   14->SetBinContent(26,80.58959);
   14->SetBinContent(27,28.20636);
   14->SetBinContent(28,4.029479);
   14->SetEntries(352697);
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
   14->GetXaxis()->SetLabelSize(0.03);
   14->GetXaxis()->SetTitleSize(0.03);
   14->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   14->GetXaxis()->SetTitleColor(ci);
   14->GetXaxis()->SetTitleFont(42);
   14->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   14->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   14->GetYaxis()->SetLabelColor(ci);
   14->GetYaxis()->SetLabelFont(42);
   14->GetYaxis()->SetLabelOffset(0.0015);
   14->GetYaxis()->SetLabelSize(0.03);
   14->GetYaxis()->SetTitleSize(0.03);
   14->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   14->GetYaxis()->SetTitleColor(ci);
   14->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   14->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   14->GetZaxis()->SetLabelColor(ci);
   14->GetZaxis()->SetLabelFont(42);
   14->GetZaxis()->SetLabelOffset(0.0015);
   14->GetZaxis()->SetLabelSize(0.03);
   14->GetZaxis()->SetTitleSize(0.03);
   14->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   14->GetZaxis()->SetTitleColor(ci);
   14->GetZaxis()->SetTitleFont(42);
   THStack->Add(14,"");
   
   TH1F *15 = new TH1F("15","qqll",40,0,2000);
   15->SetBinContent(1,517889.9);
   15->SetBinContent(2,375971.9);
   15->SetBinContent(3,79703.45);
   15->SetBinContent(4,32095.12);
   15->SetBinContent(5,16742.44);
   15->SetBinContent(6,10147.82);
   15->SetBinContent(7,6833.297);
   15->SetBinContent(8,4994.607);
   15->SetBinContent(9,3874.397);
   15->SetBinContent(10,2962.778);
   15->SetBinContent(11,2344.731);
   15->SetBinContent(12,1827.117);
   15->SetBinContent(13,1398.347);
   15->SetBinContent(14,1193.619);
   15->SetBinContent(15,1046.833);
   15->SetBinContent(16,938.6733);
   15->SetBinContent(17,811.1991);
   15->SetBinContent(18,695.3135);
   15->SetBinContent(19,637.3707);
   15->SetBinContent(20,637.3707);
   15->SetBinContent(21,471.2679);
   15->SetBinContent(22,467.4051);
   15->SetBinContent(23,436.5023);
   15->SetBinContent(24,478.9937);
   15->SetBinContent(25,521.485);
   15->SetBinContent(26,409.4623);
   15->SetBinContent(27,316.7538);
   15->SetBinContent(28,281.9881);
   15->SetBinContent(29,119.7482);
   15->SetBinContent(30,27.03993);
   15->SetBinContent(31,11.58854);
   15->SetBinContent(32,3.862847);
   15->SetBinContent(33,3.862847);
   15->SetBinContent(36,3.862847);
   15->SetBinContent(38,3.862847);
   15->SetEntries(275830);
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
   15->GetXaxis()->SetLabelSize(0.03);
   15->GetXaxis()->SetTitleSize(0.03);
   15->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   15->GetXaxis()->SetTitleColor(ci);
   15->GetXaxis()->SetTitleFont(42);
   15->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   15->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   15->GetYaxis()->SetLabelColor(ci);
   15->GetYaxis()->SetLabelFont(42);
   15->GetYaxis()->SetLabelOffset(0.0015);
   15->GetYaxis()->SetLabelSize(0.03);
   15->GetYaxis()->SetTitleSize(0.03);
   15->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   15->GetYaxis()->SetTitleColor(ci);
   15->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   15->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   15->GetZaxis()->SetLabelColor(ci);
   15->GetZaxis()->SetLabelFont(42);
   15->GetZaxis()->SetLabelOffset(0.0015);
   15->GetZaxis()->SetLabelSize(0.03);
   15->GetZaxis()->SetTitleSize(0.03);
   15->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   15->GetZaxis()->SetTitleColor(ci);
   15->GetZaxis()->SetTitleFont(42);
   THStack->Add(15,"");
   
   TH1F *16 = new TH1F("16","qql#nu",40,0,2000);
   16->SetBinContent(1,53158.92);
   16->SetBinContent(2,506338.6);
   16->SetBinContent(3,577082);
   16->SetBinContent(4,201407.4);
   16->SetBinContent(5,101232.4);
   16->SetBinContent(6,65406.91);
   16->SetBinContent(7,47315.39);
   16->SetBinContent(8,37748.76);
   16->SetBinContent(9,31646.34);
   16->SetBinContent(10,27202.05);
   16->SetBinContent(11,23460.46);
   16->SetBinContent(12,20347.61);
   16->SetBinContent(13,17832.67);
   16->SetBinContent(14,16057.42);
   16->SetBinContent(15,14177.38);
   16->SetBinContent(16,12654.86);
   16->SetBinContent(17,11662.45);
   16->SetBinContent(18,9856.376);
   16->SetBinContent(19,8235.228);
   16->SetBinContent(20,7501.704);
   16->SetBinContent(21,6694.212);
   16->SetBinContent(22,5794.259);
   16->SetBinContent(23,5091.556);
   16->SetBinContent(24,3945.04);
   16->SetBinContent(25,2946.462);
   16->SetBinContent(26,2299.235);
   16->SetBinContent(27,1282.15);
   16->SetBinContent(28,887.642);
   16->SetBinContent(29,295.8802);
   16->SetBinContent(30,123.2834);
   16->SetBinContent(31,49.31336);
   16->SetBinContent(32,30.82085);
   16->SetBinContent(33,30.82085);
   16->SetBinContent(34,6.16417);
   16->SetBinContent(35,6.16417);
   16->SetBinContent(36,6.16417);
   16->SetEntries(295233);
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
   16->GetXaxis()->SetLabelSize(0.03);
   16->GetXaxis()->SetTitleSize(0.03);
   16->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   16->GetXaxis()->SetTitleColor(ci);
   16->GetXaxis()->SetTitleFont(42);
   16->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   16->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   16->GetYaxis()->SetLabelColor(ci);
   16->GetYaxis()->SetLabelFont(42);
   16->GetYaxis()->SetLabelOffset(0.0015);
   16->GetYaxis()->SetLabelSize(0.03);
   16->GetYaxis()->SetTitleSize(0.03);
   16->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   16->GetYaxis()->SetTitleColor(ci);
   16->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   16->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   16->GetZaxis()->SetLabelColor(ci);
   16->GetZaxis()->SetLabelFont(42);
   16->GetZaxis()->SetLabelOffset(0.0015);
   16->GetZaxis()->SetLabelSize(0.03);
   16->GetZaxis()->SetTitleSize(0.03);
   16->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   16->GetZaxis()->SetTitleColor(ci);
   16->GetZaxis()->SetTitleFont(42);
   THStack->Add(16,"");
   
   TH1F *17 = new TH1F("17","qq",40,0,2000);
   17->SetBinContent(1,731671.4);
   17->SetBinContent(2,2175944);
   17->SetBinContent(3,1541993);
   17->SetBinContent(4,443484);
   17->SetBinContent(5,165275.2);
   17->SetBinContent(6,90770.17);
   17->SetBinContent(7,66458.27);
   17->SetBinContent(8,55471.73);
   17->SetBinContent(9,52145.27);
   17->SetBinContent(10,54019.33);
   17->SetBinContent(11,53667.94);
   17->SetBinContent(12,54722.1);
   17->SetBinContent(13,51606.47);
   17->SetBinContent(14,50060.37);
   17->SetBinContent(15,50224.35);
   17->SetBinContent(16,48373.71);
   17->SetBinContent(17,48373.71);
   17->SetBinContent(18,46077.99);
   17->SetBinContent(19,48467.42);
   17->SetBinContent(20,47741.22);
   17->SetBinContent(21,49755.84);
   17->SetBinContent(22,51465.92);
   17->SetBinContent(23,55752.84);
   17->SetBinContent(24,59899.2);
   17->SetBinContent(25,66036.67);
   17->SetBinContent(26,76740.47);
   17->SetBinContent(27,95946.41);
   17->SetBinContent(28,106626.8);
   17->SetBinContent(29,85359.72);
   17->SetBinContent(30,29328.55);
   17->SetBinContent(31,4005.715);
   17->SetBinContent(32,890.1566);
   17->SetBinContent(33,117.1259);
   17->SetBinContent(34,93.70071);
   17->SetBinContent(35,93.70071);
   17->SetBinContent(36,70.27553);
   17->SetBinContent(37,23.42518);
   17->SetBinContent(39,23.42518);
   17->SetEntries(280074);
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
   17->GetXaxis()->SetLabelSize(0.03);
   17->GetXaxis()->SetTitleSize(0.03);
   17->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   17->GetXaxis()->SetTitleColor(ci);
   17->GetXaxis()->SetTitleFont(42);
   17->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   17->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   17->GetYaxis()->SetLabelColor(ci);
   17->GetYaxis()->SetLabelFont(42);
   17->GetYaxis()->SetLabelOffset(0.0015);
   17->GetYaxis()->SetLabelSize(0.03);
   17->GetYaxis()->SetTitleSize(0.03);
   17->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   17->GetYaxis()->SetTitleColor(ci);
   17->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   17->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   17->GetZaxis()->SetLabelColor(ci);
   17->GetZaxis()->SetLabelFont(42);
   17->GetZaxis()->SetLabelOffset(0.0015);
   17->GetZaxis()->SetLabelSize(0.03);
   17->GetZaxis()->SetTitleSize(0.03);
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
