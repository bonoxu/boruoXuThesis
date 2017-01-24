{
//=========Macro generated from canvas: canvas1/
//=========  (Mon Jan 23 18:40:51 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,1600,900);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-435.8975,-3.885364,2128.205,8.285475);
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
   
   TH1F *THStack_stack_6 = new TH1F("THStack_stack_6","",40,0,2000);
   THStack_stack_6->SetMinimum(0.02020165);
   THStack_stack_6->SetMaximum(2.050256e+07);
   THStack_stack_6->SetDirectory(0);
   THStack_stack_6->SetStats(0);
   THStack_stack_6->SetLineWidth(2);
   THStack_stack_6->SetMarkerSize(1.2);
   THStack_stack_6->GetXaxis()->SetTitle("M_{HH} / GeV");
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
   
   
   TH1F *0 = new TH1F("0","HH#nu#nu#rightarrowbbWW*#nu#nu,hadronic",40,0,2000);
   0->SetBinContent(2,0.039596);
   0->SetBinContent(3,0.8711126);
   0->SetBinContent(4,4.177363);
   0->SetBinContent(5,11.7898);
   0->SetBinContent(6,19.91699);
   0->SetBinContent(7,22.82734);
   0->SetBinContent(8,23.64897);
   0->SetBinContent(9,22.54027);
   0->SetBinContent(10,19.32305);
   0->SetBinContent(11,18.6796);
   0->SetBinContent(12,14.58136);
   0->SetBinContent(13,13.03709);
   0->SetBinContent(14,10.78009);
   0->SetBinContent(15,9.354613);
   0->SetBinContent(16,8.038028);
   0->SetBinContent(17,5.969108);
   0->SetBinContent(18,5.107882);
   0->SetBinContent(19,3.959583);
   0->SetBinContent(20,3.197368);
   0->SetBinContent(21,2.682625);
   0->SetBinContent(22,2.18768);
   0->SetBinContent(23,1.653135);
   0->SetBinContent(24,1.583842);
   0->SetBinContent(25,1.257174);
   0->SetBinContent(26,1.128487);
   0->SetBinContent(27,0.6137381);
   0->SetBinContent(28,0.5246469);
   0->SetBinContent(29,0.5345459);
   0->SetBinContent(30,0.6335361);
   0->SetBinContent(31,0.29697);
   0->SetBinContent(32,0.19798);
   0->SetBinContent(33,0.3662629);
   0->SetBinContent(34,0.267273);
   0->SetBinContent(35,0.207879);
   0->SetBinContent(36,0.188081);
   0->SetBinContent(37,0.178182);
   0->SetBinContent(38,0.128687);
   0->SetBinContent(39,0.178182);
   0->SetBinContent(40,0.108889);
   0->SetBinContent(41,1.425458);
   0->SetEntries(23657);
   0->SetStats(0);

   ci = TColor::GetColor("#63c1e5");
   0->SetFillColor(ci);

   ci = TColor::GetColor("#63c1e5");
   0->SetLineColor(ci);
   0->SetLineWidth(2);
   0->SetMarkerSize(1.2);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",40,0,2000);
   1->SetBinContent(1,0.06929299);
   1->SetBinContent(2,0.326667);
   1->SetBinContent(3,3.434942);
   1->SetBinContent(4,11.91849);
   1->SetBinContent(5,27.31165);
   1->SetBinContent(6,48.64429);
   1->SetBinContent(7,58.58303);
   1->SetBinContent(8,60.18669);
   1->SetBinContent(9,56.6626);
   1->SetBinContent(10,51.41605);
   1->SetBinContent(11,44.65494);
   1->SetBinContent(12,38.55707);
   1->SetBinContent(13,32.66708);
   1->SetBinContent(14,26.85629);
   1->SetBinContent(15,22.65906);
   1->SetBinContent(16,19.36264);
   1->SetBinContent(17,15.39309);
   1->SetBinContent(18,12.26496);
   1->SetBinContent(19,10.7009);
   1->SetBinContent(20,8.760665);
   1->SetBinContent(21,7.166903);
   1->SetBinContent(22,6.0582);
   1->SetBinContent(23,4.405044);
   1->SetBinContent(24,3.959583);
   1->SetBinContent(25,3.078581);
   1->SetBinContent(26,2.573737);
   1->SetBinContent(27,2.019399);
   1->SetBinContent(28,1.732327);
   1->SetBinContent(29,1.366064);
   1->SetBinContent(30,1.247275);
   1->SetBinContent(31,0.8414155);
   1->SetBinContent(32,0.8909106);
   1->SetBinContent(33,0.6929302);
   1->SetBinContent(34,0.5345459);
   1->SetBinContent(35,0.4256569);
   1->SetBinContent(36,0.4454549);
   1->SetBinContent(37,0.4157579);
   1->SetBinContent(38,0.316768);
   1->SetBinContent(39,0.287071);
   1->SetBinContent(40,0.287071);
   1->SetBinContent(41,3.26666);
   1->SetEntries(59848);
   1->SetStats(0);

   ci = TColor::GetColor("#f0916e");
   1->SetFillColor(ci);

   ci = TColor::GetColor("#f0916e");
   1->SetLineColor(ci);
   1->SetLineWidth(2);
   1->SetMarkerSize(1.2);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",40,0,2000);
   2->SetBinContent(1,0.09898999);
   2->SetBinContent(2,1.70263);
   2->SetBinContent(3,10.691);
   2->SetBinContent(4,22.25319);
   2->SetBinContent(5,35.04288);
   2->SetBinContent(6,47.21882);
   2->SetBinContent(7,50.13906);
   2->SetBinContent(8,48.19883);
   2->SetBinContent(9,44.47676);
   2->SetBinContent(10,38.94314);
   2->SetBinContent(11,33.40952);
   2->SetBinContent(12,28.15308);
   2->SetBinContent(13,23.22331);
   2->SetBinContent(14,19.8972);
   2->SetBinContent(15,16.23451);
   2->SetBinContent(16,13.15588);
   2->SetBinContent(17,10.6316);
   2->SetBinContent(18,9.39421);
   2->SetBinContent(19,7.444079);
   2->SetBinContent(20,5.959208);
   2->SetBinContent(21,4.969295);
   2->SetBinContent(22,3.870493);
   2->SetBinContent(23,3.08848);
   2->SetBinContent(24,2.534142);
   2->SetBinContent(25,2.256972);
   2->SetBinContent(26,1.91051);
   2->SetBinContent(27,1.445256);
   2->SetBinContent(28,1.19778);
   2->SetBinContent(29,1.118588);
   2->SetBinContent(30,0.7028292);
   2->SetBinContent(31,0.7721224);
   2->SetBinContent(32,0.6533341);
   2->SetBinContent(33,0.584041);
   2->SetBinContent(34,0.4850508);
   2->SetBinContent(35,0.4355559);
   2->SetBinContent(36,0.257374);
   2->SetBinContent(37,0.3860609);
   2->SetBinContent(38,0.29697);
   2->SetBinContent(39,0.188081);
   2->SetBinContent(40,0.217778);
   2->SetBinContent(41,2.138186);
   2->SetEntries(50083);
   2->SetStats(0);

   ci = TColor::GetColor("#62eee3");
   2->SetFillColor(ci);

   ci = TColor::GetColor("#62eee3");
   2->SetLineColor(ci);
   2->SetLineWidth(2);
   2->SetMarkerSize(1.2);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",40,0,2000);
   3->SetBinContent(1,1.08048);
   3->SetBinContent(2,7.900995);
   3->SetBinContent(3,51.39001);
   3->SetBinContent(4,145.5667);
   3->SetBinContent(5,310.1598);
   3->SetBinContent(6,365.6488);
   3->SetBinContent(7,326.0572);
   3->SetBinContent(8,294.4986);
   3->SetBinContent(9,251.1921);
   3->SetBinContent(10,214.6892);
   3->SetBinContent(11,176.0589);
   3->SetBinContent(12,151.2397);
   3->SetBinContent(13,125.5087);
   3->SetBinContent(14,106.8352);
   3->SetBinContent(15,87.38496);
   3->SetBinContent(16,75.16105);
   3->SetBinContent(17,60.67508);
   3->SetBinContent(18,52.3354);
   3->SetBinContent(19,42.6114);
   3->SetBinContent(20,35.65604);
   3->SetBinContent(21,31.77318);
   3->SetBinContent(22,25.8304);
   3->SetBinContent(23,20.96813);
   3->SetBinContent(24,19.4149);
   3->SetBinContent(25,14.18126);
   3->SetBinContent(26,12.45925);
   3->SetBinContent(27,10.36583);
   3->SetBinContent(28,8.171114);
   3->SetBinContent(29,6.75299);
   3->SetBinContent(30,5.807575);
   3->SetBinContent(31,4.760865);
   3->SetBinContent(32,4.153098);
   3->SetBinContent(33,3.444032);
   3->SetBinContent(34,3.038851);
   3->SetBinContent(35,2.262254);
   3->SetBinContent(36,1.519425);
   3->SetBinContent(37,1.586954);
   3->SetBinContent(38,1.586954);
   3->SetBinContent(39,0.9791852);
   3->SetBinContent(40,0.8103601);
   3->SetBinContent(41,4.119333);
   3->SetEntries(90793);
   3->SetStats(0);

   ci = TColor::GetColor("#f67ea6");
   3->SetFillColor(ci);

   ci = TColor::GetColor("#f67ea6");
   3->SetLineColor(ci);
   3->SetLineWidth(2);
   3->SetMarkerSize(1.2);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",40,0,2000);
   4->SetBinContent(1,4.176411);
   4->SetBinContent(2,41.39208);
   4->SetBinContent(3,244.2634);
   4->SetBinContent(4,254.2124);
   4->SetBinContent(5,303.3998);
   4->SetBinContent(6,317.0974);
   4->SetBinContent(7,280.1183);
   4->SetBinContent(8,239.5185);
   4->SetBinContent(9,204.3582);
   4->SetBinContent(10,170.1163);
   4->SetBinContent(11,138.5639);
   4->SetBinContent(12,116.6325);
   4->SetBinContent(13,102.2885);
   4->SetBinContent(14,82.82786);
   4->SetBinContent(15,67.91535);
   4->SetBinContent(16,55.93287);
   4->SetBinContent(17,47.38332);
   4->SetBinContent(18,41.21716);
   4->SetBinContent(19,32.44895);
   4->SetBinContent(20,29.05974);
   4->SetBinContent(21,24.07433);
   4->SetBinContent(22,19.59183);
   4->SetBinContent(23,16.04957);
   4->SetBinContent(24,14.71575);
   4->SetBinContent(25,10.91109);
   4->SetBinContent(26,10.34258);
   4->SetBinContent(27,7.806141);
   4->SetBinContent(28,6.559788);
   4->SetBinContent(29,5.335301);
   4->SetBinContent(30,5.051045);
   4->SetBinContent(31,4.088948);
   4->SetBinContent(32,3.345502);
   4->SetBinContent(33,2.252198);
   4->SetBinContent(34,2.427126);
   4->SetBinContent(35,1.967939);
   4->SetBinContent(36,1.574351);
   4->SetBinContent(37,1.224496);
   4->SetBinContent(38,1.180764);
   4->SetBinContent(39,0.9839704);
   4->SetBinContent(40,0.7871762);
   4->SetBinContent(41,3.607895);
   4->SetEntries(133391);
   4->SetStats(0);

   ci = TColor::GetColor("#48c9a8");
   4->SetFillColor(ci);

   ci = TColor::GetColor("#48c9a8");
   4->SetLineColor(ci);
   4->SetLineWidth(2);
   4->SetMarkerSize(1.2);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",40,0,2000);
   5->SetBinContent(1,0.8723099);
   5->SetBinContent(2,15.46899);
   5->SetBinContent(3,108.0484);
   5->SetBinContent(4,291.6412);
   5->SetBinContent(5,680.2516);
   5->SetBinContent(6,851.0285);
   5->SetBinContent(7,798.8531);
   5->SetBinContent(8,702.6458);
   5->SetBinContent(9,605.275);
   5->SetBinContent(10,524.6562);
   5->SetBinContent(11,430.0775);
   5->SetBinContent(12,367.6067);
   5->SetBinContent(13,309.382);
   5->SetBinContent(14,259.5333);
   5->SetBinContent(15,214.2326);
   5->SetBinContent(16,182.0168);
   5->SetBinContent(17,151.4292);
   5->SetBinContent(18,127.2965);
   5->SetBinContent(19,105.199);
   5->SetBinContent(20,90.83565);
   5->SetBinContent(21,76.18153);
   5->SetBinContent(22,65.19095);
   5->SetBinContent(23,53.38555);
   5->SetBinContent(24,44.31336);
   5->SetBinContent(25,36.63689);
   5->SetBinContent(26,28.84422);
   5->SetBinContent(27,26.69255);
   5->SetBinContent(28,20.76093);
   5->SetBinContent(29,17.3299);
   5->SetBinContent(30,13.84067);
   5->SetBinContent(31,12.96836);
   5->SetBinContent(32,9.653577);
   5->SetBinContent(33,9.537269);
   5->SetBinContent(34,7.792646);
   5->SetBinContent(35,6.455101);
   5->SetBinContent(36,4.768632);
   5->SetBinContent(37,4.59417);
   5->SetBinContent(38,3.024009);
   5->SetBinContent(39,3.372934);
   5->SetBinContent(40,2.907701);
   5->SetBinContent(41,10.6422);
   5->SetEntries(125094);
   5->SetStats(0);

   ci = TColor::GetColor("#e2a0e3");
   5->SetFillColor(ci);

   ci = TColor::GetColor("#e2a0e3");
   5->SetLineColor(ci);
   5->SetLineWidth(2);
   5->SetMarkerSize(1.2);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",40,0,2000);
   6->SetBinContent(1,77.16489);
   6->SetBinContent(2,1211.838);
   6->SetBinContent(3,7324.085);
   6->SetBinContent(4,15809.48);
   6->SetBinContent(5,23887.1);
   6->SetBinContent(6,26632.84);
   6->SetBinContent(7,25718.18);
   6->SetBinContent(8,23052.24);
   6->SetBinContent(9,20014.47);
   6->SetBinContent(10,16648.73);
   6->SetBinContent(11,14035.41);
   6->SetBinContent(12,11658.86);
   6->SetBinContent(13,9699.751);
   6->SetBinContent(14,8051.079);
   6->SetBinContent(15,6653.216);
   6->SetBinContent(16,5330.771);
   6->SetBinContent(17,4354.722);
   6->SetBinContent(18,3648.774);
   6->SetBinContent(19,3114.71);
   6->SetBinContent(20,2577.138);
   6->SetBinContent(21,2148.308);
   6->SetBinContent(22,1724.784);
   6->SetBinContent(23,1432.8);
   6->SetBinContent(24,1223.237);
   6->SetBinContent(25,1049.624);
   6->SetBinContent(26,865.4789);
   6->SetBinContent(27,714.6534);
   6->SetBinContent(28,619.9491);
   6->SetBinContent(29,578.7352);
   6->SetBinContent(30,454.2185);
   6->SetBinContent(31,372.6703);
   6->SetBinContent(32,336.719);
   6->SetBinContent(33,256.0478);
   6->SetBinContent(34,257.8015);
   6->SetBinContent(35,224.4802);
   6->SetBinContent(36,178.0057);
   6->SetBinContent(37,169.237);
   6->SetBinContent(38,129.7775);
   6->SetBinContent(39,135.0388);
   6->SetBinContent(40,104.3481);
   6->SetBinContent(41,740.9602);
   6->SetEntries(277350);
   6->SetStats(0);

   ci = TColor::GetColor("#a6c973");
   6->SetFillColor(ci);

   ci = TColor::GetColor("#a6c973");
   6->SetLineColor(ci);
   6->SetLineWidth(2);
   6->SetMarkerSize(1.2);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",40,0,2000);
   7->SetBinContent(1,26.10372);
   7->SetBinContent(2,387.7029);
   7->SetBinContent(3,2776.125);
   7->SetBinContent(4,11498.43);
   7->SetBinContent(5,18516.63);
   7->SetBinContent(6,18460.75);
   7->SetBinContent(7,16385.8);
   7->SetBinContent(8,14121.25);
   7->SetBinContent(9,11864.15);
   7->SetBinContent(10,10065.85);
   7->SetBinContent(11,8559.877);
   7->SetBinContent(12,7317.943);
   7->SetBinContent(13,6168.118);
   7->SetBinContent(14,5329.896);
   7->SetBinContent(15,4523.042);
   7->SetBinContent(16,3936.453);
   7->SetBinContent(17,3365.893);
   7->SetBinContent(18,2907.814);
   7->SetBinContent(19,2536.791);
   7->SetBinContent(20,2192.3);
   7->SetBinContent(21,1936.62);
   7->SetBinContent(22,1679.688);
   7->SetBinContent(23,1461.551);
   7->SetBinContent(24,1289.94);
   7->SetBinContent(25,1139.315);
   7->SetBinContent(26,1004.144);
   7->SetBinContent(27,877.0712);
   7->SetBinContent(28,757.8714);
   7->SetBinContent(29,667.4011);
   7->SetBinContent(30,606.7653);
   7->SetBinContent(31,544.0577);
   7->SetBinContent(32,480.1069);
   7->SetBinContent(33,401.7914);
   7->SetBinContent(34,380.5206);
   7->SetBinContent(35,327.4815);
   7->SetBinContent(36,299.5807);
   7->SetBinContent(37,252.6191);
   7->SetBinContent(38,226.0996);
   7->SetBinContent(39,196.4032);
   7->SetBinContent(40,184.2484);
   7->SetBinContent(41,1346.545);
   7->SetEntries(1209695);
   7->SetStats(0);

   ci = TColor::GetColor("#b196e4");
   7->SetFillColor(ci);

   ci = TColor::GetColor("#b196e4");
   7->SetLineColor(ci);
   7->SetLineWidth(2);
   7->SetMarkerSize(1.2);
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
   
   TH1F *8 = new TH1F("8","qqqqll",40,0,2000);
   8->SetBinContent(1,36.9552);
   8->SetBinContent(2,666.1208);
   8->SetBinContent(3,2804.807);
   8->SetBinContent(4,5405.383);
   8->SetBinContent(5,6170.312);
   8->SetBinContent(6,5583.682);
   8->SetBinContent(7,5165.188);
   8->SetBinContent(8,4689.416);
   8->SetBinContent(9,4506.498);
   8->SetBinContent(10,4092.623);
   8->SetBinContent(11,3860.742);
   8->SetBinContent(12,3601.146);
   8->SetBinContent(13,3372.037);
   8->SetBinContent(14,3229.768);
   8->SetBinContent(15,3026.525);
   8->SetBinContent(16,2901.809);
   8->SetBinContent(17,2690.252);
   8->SetBinContent(18,2637.594);
   8->SetBinContent(19,2455.6);
   8->SetBinContent(20,2198.775);
   8->SetBinContent(21,2091.611);
   8->SetBinContent(22,1980.752);
   8->SetBinContent(23,1884.674);
   8->SetBinContent(24,1779.357);
   8->SetBinContent(25,1601.982);
   8->SetBinContent(26,1545.629);
   8->SetBinContent(27,1399.664);
   8->SetBinContent(28,1306.357);
   8->SetBinContent(29,1210.279);
   8->SetBinContent(30,1076.324);
   8->SetBinContent(31,1003.34);
   8->SetBinContent(32,957.1459);
   8->SetBinContent(33,884.1587);
   8->SetBinContent(34,839.812);
   8->SetBinContent(35,841.6598);
   8->SetBinContent(36,735.4125);
   8->SetBinContent(37,661.5014);
   8->SetBinContent(38,577.4275);
   8->SetBinContent(39,546.0153);
   8->SetBinContent(40,519.2225);
   8->SetBinContent(41,6860.412);
   8->SetEntries(107591);
   8->SetStats(0);

   ci = TColor::GetColor("#77bd7d");
   8->SetFillColor(ci);

   ci = TColor::GetColor("#77bd7d");
   8->SetLineColor(ci);
   8->SetLineWidth(2);
   8->SetMarkerSize(1.2);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",40,0,2000);
   9->SetBinContent(1,11.42866);
   9->SetBinContent(2,243.5179);
   9->SetBinContent(3,1234.32);
   9->SetBinContent(4,2946.655);
   9->SetBinContent(5,4370.044);
   9->SetBinContent(6,4472.876);
   9->SetBinContent(7,4212.72);
   9->SetBinContent(8,3974.536);
   9->SetBinContent(9,3614.624);
   9->SetBinContent(10,3260.425);
   9->SetBinContent(11,3027.954);
   9->SetBinContent(12,2824.927);
   9->SetBinContent(13,2631.128);
   9->SetBinContent(14,2445.679);
   9->SetBinContent(15,2258.032);
   9->SetBinContent(16,2093.237);
   9->SetBinContent(17,1988.631);
   9->SetBinContent(18,1838.296);
   9->SetBinContent(19,1766.646);
   9->SetBinContent(20,1720.49);
   9->SetBinContent(21,1588.178);
   9->SetBinContent(22,1518.725);
   9->SetBinContent(23,1480.482);
   9->SetBinContent(24,1382.457);
   9->SetBinContent(25,1350.368);
   9->SetBinContent(26,1358.72);
   9->SetBinContent(27,1314.323);
   9->SetBinContent(28,1154.317);
   9->SetBinContent(29,1168.384);
   9->SetBinContent(30,1182.45);
   9->SetBinContent(31,1117.393);
   9->SetBinContent(32,1089.26);
   9->SetBinContent(33,1060.248);
   9->SetBinContent(34,1036.951);
   9->SetBinContent(35,1014.093);
   9->SetBinContent(36,950.7939);
   9->SetBinContent(37,963.9812);
   9->SetBinContent(38,936.288);
   9->SetBinContent(39,872.9891);
   9->SetBinContent(40,895.847);
   9->SetBinContent(41,9723.462);
   9->SetEntries(191327);
   9->SetStats(0);

   ci = TColor::GetColor("#e798b9");
   9->SetFillColor(ci);

   ci = TColor::GetColor("#e798b9");
   9->SetLineColor(ci);
   9->SetLineWidth(2);
   9->SetMarkerSize(1.2);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",40,0,2000);
   10->SetBinContent(1,260.2386);
   10->SetBinContent(2,6024.148);
   10->SetBinContent(3,33792.01);
   10->SetBinContent(4,110699.2);
   10->SetBinContent(5,136356.4);
   10->SetBinContent(6,125165.3);
   10->SetBinContent(7,109348.1);
   10->SetBinContent(8,93580.61);
   10->SetBinContent(9,79700.7);
   10->SetBinContent(10,67551.11);
   10->SetBinContent(11,56936.84);
   10->SetBinContent(12,48461.84);
   10->SetBinContent(13,41143.18);
   10->SetBinContent(14,34956.27);
   10->SetBinContent(15,29683.03);
   10->SetBinContent(16,25255.81);
   10->SetBinContent(17,21476.39);
   10->SetBinContent(18,18399.77);
   10->SetBinContent(19,15665.31);
   10->SetBinContent(20,13570.56);
   10->SetBinContent(21,11482.82);
   10->SetBinContent(22,9901.386);
   10->SetBinContent(23,8467.704);
   10->SetBinContent(24,7295.98);
   10->SetBinContent(25,6221.497);
   10->SetBinContent(26,5424.816);
   10->SetBinContent(27,4651.748);
   10->SetBinContent(28,4014.161);
   10->SetBinContent(29,3447.586);
   10->SetBinContent(30,3007.046);
   10->SetBinContent(31,2612.895);
   10->SetBinContent(32,2225.745);
   10->SetBinContent(33,1943.041);
   10->SetBinContent(34,1662.963);
   10->SetBinContent(35,1433.649);
   10->SetBinContent(36,1234.385);
   10->SetBinContent(37,1120.895);
   10->SetBinContent(38,970.3533);
   10->SetBinContent(39,808.1414);
   10->SetBinContent(40,685.6072);
   10->SetBinContent(41,3869.162);
   10->SetEntries(3949198);
   10->SetStats(0);

   ci = TColor::GetColor("#9aebb2");
   10->SetFillColor(ci);

   ci = TColor::GetColor("#9aebb2");
   10->SetLineColor(ci);
   10->SetLineWidth(2);
   10->SetMarkerSize(1.2);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",40,0,2000);
   11->SetBinContent(1,3330.987);
   11->SetBinContent(2,35540.16);
   11->SetBinContent(3,131166.4);
   11->SetBinContent(4,228660.8);
   11->SetBinContent(5,237279.4);
   11->SetBinContent(6,203171.6);
   11->SetBinContent(7,171478.3);
   11->SetBinContent(8,136514.8);
   11->SetBinContent(9,113593);
   11->SetBinContent(10,90273.77);
   11->SetBinContent(11,75603.77);
   11->SetBinContent(12,64204.12);
   11->SetBinContent(13,56136.66);
   11->SetBinContent(14,47641.37);
   11->SetBinContent(15,40337.86);
   11->SetBinContent(16,37312.56);
   11->SetBinContent(17,33095.48);
   11->SetBinContent(18,30375.76);
   11->SetBinContent(19,26708.73);
   11->SetBinContent(20,24722.42);
   11->SetBinContent(21,24325.16);
   11->SetBinContent(22,21513.77);
   11->SetBinContent(23,19038.52);
   11->SetBinContent(24,18977.4);
   11->SetBinContent(25,17877.29);
   11->SetBinContent(26,15004.74);
   11->SetBinContent(27,15615.93);
   11->SetBinContent(28,14913.06);
   11->SetBinContent(29,14576.91);
   11->SetBinContent(30,12498.86);
   11->SetBinContent(31,13476.76);
   11->SetBinContent(32,12376.62);
   11->SetBinContent(33,12040.46);
   11->SetBinContent(34,11337.59);
   11->SetBinContent(35,9901.294);
   11->SetBinContent(36,9931.854);
   11->SetBinContent(37,9992.973);
   11->SetBinContent(38,9840.175);
   11->SetBinContent(39,8373.315);
   11->SetBinContent(40,8678.911);
   11->SetBinContent(41,79515.77);
   11->SetEntries(70253);
   11->SetStats(0);

   ci = TColor::GetColor("#ea908f");
   11->SetFillColor(ci);

   ci = TColor::GetColor("#ea908f");
   11->SetLineColor(ci);
   11->SetLineWidth(2);
   11->SetMarkerSize(1.2);
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
   
   TH1F *12 = new TH1F("12","qqqq",40,0,2000);
   12->SetBinContent(1,17313.72);
   12->SetBinContent(2,74225.27);
   12->SetBinContent(3,101669.3);
   12->SetBinContent(4,94972.7);
   12->SetBinContent(5,80809.02);
   12->SetBinContent(6,64415.42);
   12->SetBinContent(7,50584.62);
   12->SetBinContent(8,40294.45);
   12->SetBinContent(9,32896.53);
   12->SetBinContent(10,27384);
   12->SetBinContent(11,23298.97);
   12->SetBinContent(12,20565.11);
   12->SetBinContent(13,18411.13);
   12->SetBinContent(14,16704.44);
   12->SetBinContent(15,15442.73);
   12->SetBinContent(16,14437);
   12->SetBinContent(17,13691.83);
   12->SetBinContent(18,12960.26);
   12->SetBinContent(19,12221.54);
   12->SetBinContent(20,11771.29);
   12->SetBinContent(21,11116.31);
   12->SetBinContent(22,10434.13);
   12->SetBinContent(23,10074.79);
   12->SetBinContent(24,9611.656);
   12->SetBinContent(25,9341.076);
   12->SetBinContent(26,9008.936);
   12->SetBinContent(27,8545.8);
   12->SetBinContent(28,8151.383);
   12->SetBinContent(29,7960.975);
   12->SetBinContent(30,7751.239);
   12->SetBinContent(31,7431.983);
   12->SetBinContent(32,7189.32);
   12->SetBinContent(33,6999.628);
   12->SetBinContent(34,6850.737);
   12->SetBinContent(35,6809.936);
   12->SetBinContent(36,6618.096);
   12->SetBinContent(37,6522.892);
   12->SetBinContent(38,6342.505);
   12->SetBinContent(39,6311.009);
   12->SetBinContent(40,6200.772);
   12->SetBinContent(41,158446.2);
   12->SetEntries(1482311);
   12->SetStats(0);

   ci = TColor::GetColor("#4ac7d0");
   12->SetFillColor(ci);

   ci = TColor::GetColor("#4ac7d0");
   12->SetLineColor(ci);
   12->SetLineWidth(2);
   12->SetMarkerSize(1.2);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",40,0,2000);
   13->SetBinContent(1,65419.53);
   13->SetBinContent(2,532242.6);
   13->SetBinContent(3,1805036);
   13->SetBinContent(4,3117002);
   13->SetBinContent(5,3305630);
   13->SetBinContent(6,2813850);
   13->SetBinContent(7,2285224);
   13->SetBinContent(8,1863151);
   13->SetBinContent(9,1479218);
   13->SetBinContent(10,1206754);
   13->SetBinContent(11,984980.2);
   13->SetBinContent(12,804361.9);
   13->SetBinContent(13,664364.5);
   13->SetBinContent(14,548356.3);
   13->SetBinContent(15,448306.4);
   13->SetBinContent(16,380432);
   13->SetBinContent(17,318360.6);
   13->SetBinContent(18,271211.2);
   13->SetBinContent(19,231583.9);
   13->SetBinContent(20,204338.8);
   13->SetBinContent(21,177559.8);
   13->SetBinContent(22,156115.9);
   13->SetBinContent(23,137676.2);
   13->SetBinContent(24,122033.5);
   13->SetBinContent(25,104785.2);
   13->SetBinContent(26,92250.31);
   13->SetBinContent(27,85257.73);
   13->SetBinContent(28,77384.61);
   13->SetBinContent(29,68993.52);
   13->SetBinContent(30,65005.16);
   13->SetBinContent(31,57960.78);
   13->SetBinContent(32,52988.28);
   13->SetBinContent(33,50502.03);
   13->SetBinContent(34,43664.84);
   13->SetBinContent(35,39210.31);
   13->SetBinContent(36,36931.25);
   13->SetBinContent(37,34341.41);
   13->SetBinContent(38,31337.19);
   13->SetBinContent(39,26675.47);
   13->SetBinContent(40,26209.3);
   13->SetBinContent(41,189110.5);
   13->SetEntries(482881);
   13->SetStats(0);

   ci = TColor::GetColor("#ccac60");
   13->SetFillColor(ci);

   ci = TColor::GetColor("#ccac60");
   13->SetLineColor(ci);
   13->SetLineWidth(2);
   13->SetMarkerSize(1.2);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",40,0,2000);
   14->SetBinContent(1,52850.45);
   14->SetBinContent(2,782070.1);
   14->SetBinContent(3,1659275);
   14->SetBinContent(4,664049.4);
   14->SetBinContent(5,264264.4);
   14->SetBinContent(6,123334.1);
   14->SetBinContent(7,65333.96);
   14->SetBinContent(8,39321.23);
   14->SetBinContent(9,25283.06);
   14->SetBinContent(10,17824.41);
   14->SetBinContent(11,12789.9);
   14->SetBinContent(12,10217.05);
   14->SetBinContent(13,7560.928);
   14->SetBinContent(14,5996.936);
   14->SetBinContent(15,4692.066);
   14->SetBinContent(16,4118.293);
   14->SetBinContent(17,3331.65);
   14->SetBinContent(18,3081.774);
   14->SetBinContent(19,2489.478);
   14->SetBinContent(20,2026.746);
   14->SetBinContent(21,1591.784);
   14->SetBinContent(22,1554.766);
   14->SetBinContent(23,1675.074);
   14->SetBinContent(24,1064.276);
   14->SetBinContent(25,990.2397);
   14->SetBinContent(26,851.4211);
   14->SetBinContent(27,768.1299);
   14->SetBinContent(28,610.8021);
   14->SetBinContent(29,555.2746);
   14->SetBinContent(30,397.9468);
   14->SetBinContent(31,370.1831);
   14->SetBinContent(32,397.9468);
   14->SetBinContent(33,342.4193);
   14->SetBinContent(34,286.8919);
   14->SetBinContent(35,314.6556);
   14->SetBinContent(36,203.6007);
   14->SetBinContent(37,101.8003);
   14->SetBinContent(38,120.3095);
   14->SetBinContent(39,138.8186);
   14->SetBinContent(40,74.03661);
   14->SetBinContent(41,888.4394);
   14->SetEntries(406775);
   14->SetStats(0);

   ci = TColor::GetColor("#79a9eb");
   14->SetFillColor(ci);

   ci = TColor::GetColor("#79a9eb");
   14->SetLineColor(ci);
   14->SetLineWidth(2);
   14->SetMarkerSize(1.2);
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
   
   TH1F *15 = new TH1F("15","qqll",40,0,2000);
   15->SetBinContent(1,2300754);
   15->SetBinContent(2,1993314);
   15->SetBinContent(3,404973.3);
   15->SetBinContent(4,125537.8);
   15->SetBinContent(5,57299.75);
   15->SetBinContent(6,34890.3);
   15->SetBinContent(7,21399.76);
   15->SetBinContent(8,16800.07);
   15->SetBinContent(9,15033.12);
   15->SetBinContent(10,12032.1);
   15->SetBinContent(11,10377.33);
   15->SetBinContent(12,9676.163);
   15->SetBinContent(13,8694.522);
   15->SetBinContent(14,8414.054);
   15->SetBinContent(15,6647.101);
   15->SetBinContent(16,5917.882);
   15->SetBinContent(17,6002.022);
   15->SetBinContent(18,4543.585);
   15->SetBinContent(19,4038.741);
   15->SetBinContent(20,4263.116);
   15->SetBinContent(21,2944.913);
   15->SetBinContent(22,2552.257);
   15->SetBinContent(23,2524.21);
   15->SetBinContent(24,2047.413);
   15->SetBinContent(25,1907.179);
   15->SetBinContent(26,2075.46);
   15->SetBinContent(27,1626.712);
   15->SetBinContent(28,1318.198);
   15->SetBinContent(29,1458.431);
   15->SetBinContent(30,1206.01);
   15->SetBinContent(31,1009.683);
   15->SetBinContent(32,701.1689);
   15->SetBinContent(33,673.1221);
   15->SetBinContent(34,925.5429);
   15->SetBinContent(35,757.2624);
   15->SetBinContent(36,476.7948);
   15->SetBinContent(37,336.5611);
   15->SetBinContent(38,617.0286);
   15->SetBinContent(39,532.8884);
   15->SetBinContent(40,504.8416);
   15->SetBinContent(41,9704.21);
   15->SetEntries(181481);
   15->SetStats(0);

   ci = TColor::GetColor("#e2d689");
   15->SetFillColor(ci);

   ci = TColor::GetColor("#e2d689");
   15->SetLineColor(ci);
   15->SetLineWidth(2);
   15->SetMarkerSize(1.2);
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
   
   TH1F *16 = new TH1F("16","qql#nu",40,0,2000);
   16->SetBinContent(1,168977.2);
   16->SetBinContent(2,1593067);
   16->SetBinContent(3,1872855);
   16->SetBinContent(4,687466.6);
   16->SetBinContent(5,316271.6);
   16->SetBinContent(6,193680.3);
   16->SetBinContent(7,139811.6);
   16->SetBinContent(8,114621.2);
   16->SetBinContent(9,97315.19);
   16->SetBinContent(10,86570.59);
   16->SetBinContent(11,77121.3);
   16->SetBinContent(12,71547.27);
   16->SetBinContent(13,63976.65);
   16->SetBinContent(14,60259.27);
   16->SetBinContent(15,55777.16);
   16->SetBinContent(16,50519.72);
   16->SetBinContent(17,46643.02);
   16->SetBinContent(18,44348.87);
   16->SetBinContent(19,41162.54);
   16->SetBinContent(20,39356.95);
   16->SetBinContent(21,36181.25);
   16->SetBinContent(22,33749.02);
   16->SetBinContent(23,31497.58);
   16->SetBinContent(24,28917.12);
   16->SetBinContent(25,28173.79);
   16->SetBinContent(26,25975.62);
   16->SetBinContent(27,24393.37);
   16->SetBinContent(28,21207.63);
   16->SetBinContent(29,20358.1);
   16->SetBinContent(30,19381.14);
   16->SetBinContent(31,17278.55);
   16->SetBinContent(32,16556.45);
   16->SetBinContent(33,15590.03);
   16->SetBinContent(34,13646.55);
   16->SetBinContent(35,13104.92);
   16->SetBinContent(36,11118.96);
   16->SetBinContent(37,11341.98);
   16->SetBinContent(38,9982.608);
   16->SetBinContent(39,9132.999);
   16->SetBinContent(40,8591.373);
   16->SetBinContent(41,69816.67);
   16->SetEntries(591862);
   16->SetStats(0);

   ci = TColor::GetColor("#c2b0e8");
   16->SetFillColor(ci);

   ci = TColor::GetColor("#c2b0e8");
   16->SetLineColor(ci);
   16->SetLineWidth(2);
   16->SetMarkerSize(1.2);
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
   
   TH1F *17 = new TH1F("17","qq",40,0,2000);
   17->SetBinContent(1,1162538);
   17->SetBinContent(2,2759995);
   17->SetBinContent(3,1923293);
   17->SetBinContent(4,536173.6);
   17->SetBinContent(5,194815.7);
   17->SetBinContent(6,95427.12);
   17->SetBinContent(7,61246.11);
   17->SetBinContent(8,42270.17);
   17->SetBinContent(9,36917.98);
   17->SetBinContent(10,32599.74);
   17->SetBinContent(11,30957.59);
   17->SetBinContent(12,22321.11);
   17->SetBinContent(13,25605.4);
   17->SetBinContent(14,19097.63);
   17->SetBinContent(15,20800.6);
   17->SetBinContent(16,18063.68);
   17->SetBinContent(17,17820.4);
   17->SetBinContent(18,17090.56);
   17->SetBinContent(19,16482.36);
   17->SetBinContent(20,13745.44);
   17->SetBinContent(21,13927.9);
   17->SetBinContent(22,13623.8);
   17->SetBinContent(23,12164.11);
   17->SetBinContent(24,11495.09);
   17->SetBinContent(25,11616.73);
   17->SetBinContent(26,10035.4);
   17->SetBinContent(27,8332.433);
   17->SetBinContent(28,8514.894);
   17->SetBinContent(29,7298.48);
   17->SetBinContent(30,10217.86);
   17->SetBinContent(31,9305.558);
   17->SetBinContent(32,8089.15);
   17->SetBinContent(33,6811.914);
   17->SetBinContent(34,6264.526);
   17->SetBinContent(35,6203.706);
   17->SetBinContent(36,8332.433);
   17->SetBinContent(37,5352.214);
   17->SetBinContent(38,7176.838);
   17->SetBinContent(39,5534.677);
   17->SetBinContent(40,6386.168);
   17->SetBinContent(41,182285.1);
   17->SetEntries(121759);
   17->SetStats(0);

   ci = TColor::GetColor("#aec48b");
   17->SetFillColor(ci);

   ci = TColor::GetColor("#aec48b");
   17->SetLineColor(ci);
   17->SetLineWidth(2);
   17->SetMarkerSize(1.2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
