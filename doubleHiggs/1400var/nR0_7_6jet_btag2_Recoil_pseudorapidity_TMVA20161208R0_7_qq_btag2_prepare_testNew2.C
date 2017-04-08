{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:08:16 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-1.539683,-2.787305,1.634921,4.311035);
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
   
   TH1F *THStack_stack_36 = new TH1F("THStack_stack_36","",50,-1,1);
   THStack_stack_36->SetMinimum(0.03093116);
   THStack_stack_36->SetMaximum(5535.637);
   THStack_stack_36->SetDirectory(0);
   THStack_stack_36->SetStats(0);
   THStack_stack_36->SetLineWidth(2);
   THStack_stack_36->SetMarkerSize(1.2);
   THStack_stack_36->GetXaxis()->SetTitle("PseudoRapidity_{recoil}");
   THStack_stack_36->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_36->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_36->GetXaxis()->SetLabelColor(ci);
   THStack_stack_36->GetXaxis()->SetLabelFont(42);
   THStack_stack_36->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_36->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_36->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_36->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_36->GetXaxis()->SetTitleColor(ci);
   THStack_stack_36->GetXaxis()->SetTitleFont(42);
   THStack_stack_36->GetYaxis()->SetTitle("Number of events");
   THStack_stack_36->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_36->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_36->GetYaxis()->SetLabelColor(ci);
   THStack_stack_36->GetYaxis()->SetLabelFont(42);
   THStack_stack_36->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_36->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_36->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_36->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_36->GetYaxis()->SetTitleColor(ci);
   THStack_stack_36->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_36->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_36->GetZaxis()->SetLabelColor(ci);
   THStack_stack_36->GetZaxis()->SetLabelFont(42);
   THStack_stack_36->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_36->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_36->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_36->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_36->GetZaxis()->SetTitleColor(ci);
   THStack_stack_36->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_36);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,-1,1);
   0->SetBinContent(0,4.778491);
   0->SetBinContent(1,0.1373861);
   0->SetBinContent(2,0.1674981);
   0->SetBinContent(3,0.1185661);
   0->SetBinContent(4,0.1373861);
   0->SetBinContent(5,0.1580881);
   0->SetBinContent(6,0.1279761);
   0->SetBinContent(7,0.1223301);
   0->SetBinContent(8,0.1599701);
   0->SetBinContent(9,0.1298581);
   0->SetBinContent(10,0.1449141);
   0->SetBinContent(11,0.1373861);
   0->SetBinContent(12,0.1430321);
   0->SetBinContent(13,0.1618521);
   0->SetBinContent(14,0.1486781);
   0->SetBinContent(15,0.1731441);
   0->SetBinContent(16,0.1580881);
   0->SetBinContent(17,0.1373861);
   0->SetBinContent(18,0.1712621);
   0->SetBinContent(19,0.1599701);
   0->SetBinContent(20,0.1562061);
   0->SetBinContent(21,0.1543241);
   0->SetBinContent(22,0.1449141);
   0->SetBinContent(23,0.1449141);
   0->SetBinContent(24,0.1449141);
   0->SetBinContent(25,0.1524421);
   0->SetBinContent(26,0.1467961);
   0->SetBinContent(27,0.1449141);
   0->SetBinContent(28,0.1166841);
   0->SetBinContent(29,0.1543241);
   0->SetBinContent(30,0.1355041);
   0->SetBinContent(31,0.1769081);
   0->SetBinContent(32,0.1524421);
   0->SetBinContent(33,0.1618521);
   0->SetBinContent(34,0.1260941);
   0->SetBinContent(35,0.1505601);
   0->SetBinContent(36,0.1449141);
   0->SetBinContent(37,0.1430321);
   0->SetBinContent(38,0.1204481);
   0->SetBinContent(39,0.1637341);
   0->SetBinContent(40,0.1449141);
   0->SetBinContent(41,0.1392681);
   0->SetBinContent(42,0.1392681);
   0->SetBinContent(43,0.1279761);
   0->SetBinContent(44,0.1204481);
   0->SetBinContent(45,0.1467961);
   0->SetBinContent(46,0.1449141);
   0->SetBinContent(47,0.1618521);
   0->SetBinContent(48,0.1373861);
   0->SetBinContent(49,0.1355041);
   0->SetBinContent(50,0.1411501);
   0->SetBinContent(51,4.631689);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,-1,1);
   1->SetBinContent(0,2.977394);
   1->SetBinContent(1,0.09504107);
   1->SetBinContent(2,0.1016281);
   1->SetBinContent(3,0.1044511);
   1->SetBinContent(4,0.08939507);
   1->SetBinContent(5,0.1025691);
   1->SetBinContent(6,0.09504107);
   1->SetBinContent(7,0.08374906);
   1->SetBinContent(8,0.08751307);
   1->SetBinContent(9,0.1025691);
   1->SetBinContent(10,0.09692308);
   1->SetBinContent(11,0.08374906);
   1->SetBinContent(12,0.09315907);
   1->SetBinContent(13,0.1053921);
   1->SetBinContent(14,0.09692308);
   1->SetBinContent(15,0.06398804);
   1->SetBinContent(16,0.09127707);
   1->SetBinContent(17,0.1053921);
   1->SetBinContent(18,0.09598207);
   1->SetBinContent(19,0.1082151);
   1->SetBinContent(20,0.08092606);
   1->SetBinContent(21,0.07904406);
   1->SetBinContent(22,0.1016281);
   1->SetBinContent(23,0.09221807);
   1->SetBinContent(24,0.07998506);
   1->SetBinContent(25,0.07716206);
   1->SetBinContent(26,0.08657207);
   1->SetBinContent(27,0.09504107);
   1->SetBinContent(28,0.08280806);
   1->SetBinContent(29,0.08469006);
   1->SetBinContent(30,0.08751307);
   1->SetBinContent(31,0.08092606);
   1->SetBinContent(32,0.07433905);
   1->SetBinContent(33,0.08845407);
   1->SetBinContent(34,0.07433905);
   1->SetBinContent(35,0.07904406);
   1->SetBinContent(36,0.08374906);
   1->SetBinContent(37,0.09598207);
   1->SetBinContent(38,0.09598207);
   1->SetBinContent(39,0.09974608);
   1->SetBinContent(40,0.1044511);
   1->SetBinContent(41,0.07339805);
   1->SetBinContent(42,0.09033607);
   1->SetBinContent(43,0.08280806);
   1->SetBinContent(44,0.09880508);
   1->SetBinContent(45,0.08469006);
   1->SetBinContent(46,0.1091561);
   1->SetBinContent(47,0.08939507);
   1->SetBinContent(48,0.1072741);
   1->SetBinContent(49,0.07433905);
   1->SetBinContent(50,0.07433905);
   1->SetBinContent(51,2.918109);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,-1,1);
   2->SetBinContent(0,7.343904);
   2->SetBinContent(1,0.2239574);
   2->SetBinContent(2,0.2465412);
   2->SetBinContent(3,0.2427773);
   2->SetBinContent(4,0.2089015);
   2->SetBinContent(5,0.2418363);
   2->SetBinContent(6,0.2211344);
   2->SetBinContent(7,0.2371313);
   2->SetBinContent(8,0.2305444);
   2->SetBinContent(9,0.2408953);
   2->SetBinContent(10,0.2343083);
   2->SetBinContent(11,0.1994916);
   2->SetBinContent(12,0.2089015);
   2->SetBinContent(13,0.2474822);
   2->SetBinContent(14,0.2164295);
   2->SetBinContent(15,0.2380723);
   2->SetBinContent(16,0.2484232);
   2->SetBinContent(17,0.1976096);
   2->SetBinContent(18,0.2136065);
   2->SetBinContent(19,0.2060785);
   2->SetBinContent(20,0.2361903);
   2->SetBinContent(21,0.2390133);
   2->SetBinContent(22,0.2136065);
   2->SetBinContent(23,0.2107835);
   2->SetBinContent(24,0.2493642);
   2->SetBinContent(25,0.2183114);
   2->SetBinContent(26,0.2192524);
   2->SetBinContent(27,0.2484232);
   2->SetBinContent(28,0.2418363);
   2->SetBinContent(29,0.2474822);
   2->SetBinContent(30,0.2164295);
   2->SetBinContent(31,0.2023146);
   2->SetBinContent(32,0.2314854);
   2->SetBinContent(33,0.2380723);
   2->SetBinContent(34,0.2550103);
   2->SetBinContent(35,0.2230164);
   2->SetBinContent(36,0.2437183);
   2->SetBinContent(37,0.2145475);
   2->SetBinContent(38,0.2512462);
   2->SetBinContent(39,0.2248984);
   2->SetBinContent(40,0.2296034);
   2->SetBinContent(41,0.2380723);
   2->SetBinContent(42,0.2286624);
   2->SetBinContent(43,0.2371313);
   2->SetBinContent(44,0.2201934);
   2->SetBinContent(45,0.2343083);
   2->SetBinContent(46,0.2700664);
   2->SetBinContent(47,0.2399543);
   2->SetBinContent(48,0.2201934);
   2->SetBinContent(49,0.2230164);
   2->SetBinContent(50,0.2371313);
   2->SetBinContent(51,7.342023);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,-1,1);
   3->SetBinContent(0,30.16245);
   3->SetBinContent(1,1.133616);
   3->SetBinContent(2,1.133616);
   3->SetBinContent(3,1.010693);
   3->SetBinContent(4,1.160932);
   3->SetBinContent(5,1.044839);
   3->SetBinContent(6,1.17459);
   3->SetBinContent(7,1.085813);
   3->SetBinContent(8,1.126787);
   3->SetBinContent(9,1.010693);
   3->SetBinContent(10,1.222393);
   3->SetBinContent(11,0.9970354);
   3->SetBinContent(12,1.044839);
   3->SetBinContent(13,1.133616);
   3->SetBinContent(14,1.078984);
   3->SetBinContent(15,0.9560612);
   3->SetBinContent(16,1.147274);
   3->SetBinContent(17,1.072155);
   3->SetBinContent(18,0.9287452);
   3->SetBinContent(19,0.9765483);
   3->SetBinContent(20,0.9082581);
   3->SetBinContent(21,1.167761);
   3->SetBinContent(22,1.092642);
   3->SetBinContent(23,0.9833773);
   3->SetBinContent(24,0.9833773);
   3->SetBinContent(25,1.092642);
   3->SetBinContent(26,1.078984);
   3->SetBinContent(27,1.1063);
   3->SetBinContent(28,0.9970354);
   3->SetBinContent(29,1.044839);
   3->SetBinContent(30,1.051668);
   3->SetBinContent(31,1.044839);
   3->SetBinContent(32,1.078984);
   3->SetBinContent(33,1.031181);
   3->SetBinContent(34,1.215564);
   3->SetBinContent(35,1.03801);
   3->SetBinContent(36,1.058497);
   3->SetBinContent(37,0.9697193);
   3->SetBinContent(38,0.9970354);
   3->SetBinContent(39,1.119958);
   3->SetBinContent(40,1.010693);
   3->SetBinContent(41,1.099471);
   3->SetBinContent(42,1.147274);
   3->SetBinContent(43,1.092642);
   3->SetBinContent(44,1.092642);
   3->SetBinContent(45,1.010693);
   3->SetBinContent(46,1.044839);
   3->SetBinContent(47,1.208735);
   3->SetBinContent(48,1.126787);
   3->SetBinContent(49,1.181419);
   3->SetBinContent(50,1.092642);
   3->SetBinContent(51,30.76334);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,-1,1);
   4->SetBinContent(0,45.34742);
   4->SetBinContent(1,1.736123);
   4->SetBinContent(2,1.699296);
   4->SetBinContent(3,1.541468);
   4->SetBinContent(4,1.604599);
   4->SetBinContent(5,1.694035);
   4->SetBinContent(6,1.651948);
   4->SetBinContent(7,1.546729);
   4->SetBinContent(8,1.678252);
   4->SetBinContent(9,1.725601);
   4->SetBinContent(10,1.557251);
   4->SetBinContent(11,1.567773);
   4->SetBinContent(12,1.694035);
   4->SetBinContent(13,1.636165);
   4->SetBinContent(14,1.49938);
   4->SetBinContent(15,1.651948);
   4->SetBinContent(16,1.636165);
   4->SetBinContent(17,1.567773);
   4->SetBinContent(18,1.667731);
   4->SetBinContent(19,1.515163);
   4->SetBinContent(20,1.599338);
   4->SetBinContent(21,1.594077);
   4->SetBinContent(22,1.520424);
   4->SetBinContent(23,1.746645);
   4->SetBinContent(24,1.630904);
   4->SetBinContent(25,1.678252);
   4->SetBinContent(26,1.525685);
   4->SetBinContent(27,1.751906);
   4->SetBinContent(28,1.446771);
   4->SetBinContent(29,1.625643);
   4->SetBinContent(30,1.578295);
   4->SetBinContent(31,1.599338);
   4->SetBinContent(32,1.599338);
   4->SetBinContent(33,1.636165);
   4->SetBinContent(34,1.452032);
   4->SetBinContent(35,1.651948);
   4->SetBinContent(36,1.636165);
   4->SetBinContent(37,1.683513);
   4->SetBinContent(38,1.541468);
   4->SetBinContent(39,1.615121);
   4->SetBinContent(40,1.804515);
   4->SetBinContent(41,1.615121);
   4->SetBinContent(42,1.862386);
   4->SetBinContent(43,1.60986);
   4->SetBinContent(44,1.672992);
   4->SetBinContent(45,1.541468);
   4->SetBinContent(46,1.694035);
   4->SetBinContent(47,1.651948);
   4->SetBinContent(48,1.757167);
   4->SetBinContent(49,1.530946);
   4->SetBinContent(50,1.525685);
   4->SetBinContent(51,46.14175);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,-1,1);
   5->SetBinContent(0,140.642);
   5->SetBinContent(1,4.762005);
   5->SetBinContent(2,4.613192);
   5->SetBinContent(3,4.861214);
   5->SetBinContent(4,4.625593);
   5->SetBinContent(5,4.749604);
   5->SetBinContent(6,4.538785);
   5->SetBinContent(7,4.749604);
   5->SetBinContent(8,5.109236);
   5->SetBinContent(9,4.786807);
   5->SetBinContent(10,4.749604);
   5->SetBinContent(11,4.625593);
   5->SetBinContent(12,4.451977);
   5->SetBinContent(13,4.774406);
   5->SetBinContent(14,4.861214);
   5->SetBinContent(15,4.960423);
   5->SetBinContent(16,4.93562);
   5->SetBinContent(17,4.575988);
   5->SetBinContent(18,4.910818);
   5->SetBinContent(19,4.575988);
   5->SetBinContent(20,4.513983);
   5->SetBinContent(21,4.476779);
   5->SetBinContent(22,4.960423);
   5->SetBinContent(23,4.575988);
   5->SetBinContent(24,4.613192);
   5->SetBinContent(25,4.960423);
   5->SetBinContent(26,4.377571);
   5->SetBinContent(27,4.910818);
   5->SetBinContent(28,4.414774);
   5->SetBinContent(29,4.687598);
   5->SetBinContent(30,4.774406);
   5->SetBinContent(31,4.327966);
   5->SetBinContent(32,4.352768);
   5->SetBinContent(33,4.414774);
   5->SetBinContent(34,4.675197);
   5->SetBinContent(35,4.873615);
   5->SetBinContent(36,4.799208);
   5->SetBinContent(37,4.600791);
   5->SetBinContent(38,4.861214);
   5->SetBinContent(39,4.613192);
   5->SetBinContent(40,4.762005);
   5->SetBinContent(41,4.662796);
   5->SetBinContent(42,5.034829);
   5->SetBinContent(43,4.650395);
   5->SetBinContent(44,4.675197);
   5->SetBinContent(45,4.786807);
   5->SetBinContent(46,5.369659);
   5->SetBinContent(47,4.575988);
   5->SetBinContent(48,4.762005);
   5->SetBinContent(49,4.402373);
   5->SetBinContent(50,4.675197);
   5->SetBinContent(51,139.4263);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,-1,1);
   6->SetBinContent(0,4274.748);
   6->SetBinContent(1,91.08643);
   6->SetBinContent(2,88.27795);
   6->SetBinContent(3,87.21529);
   6->SetBinContent(4,87.29119);
   6->SetBinContent(5,90.32738);
   6->SetBinContent(6,89.11291);
   6->SetBinContent(7,88.88519);
   6->SetBinContent(8,80.76337);
   6->SetBinContent(9,81.67423);
   6->SetBinContent(10,80.38385);
   6->SetBinContent(11,77.27175);
   6->SetBinContent(12,76.28499);
   6->SetBinContent(13,75.29823);
   6->SetBinContent(14,78.41032);
   6->SetBinContent(15,73.4006);
   6->SetBinContent(16,75.90546);
   6->SetBinContent(17,73.47651);
   6->SetBinContent(18,76.96813);
   6->SetBinContent(19,73.62832);
   6->SetBinContent(20,71.7307);
   6->SetBinContent(21,70.36441);
   6->SetBinContent(22,72.64156);
   6->SetBinContent(23,72.18613);
   6->SetBinContent(24,69.37765);
   6->SetBinContent(25,72.33794);
   6->SetBinContent(26,72.48975);
   6->SetBinContent(27,74.69099);
   6->SetBinContent(28,71.65479);
   6->SetBinContent(29,70.74393);
   6->SetBinContent(30,73.70422);
   6->SetBinContent(31,75.29823);
   6->SetBinContent(32,73.47651);
   6->SetBinContent(33,73.62832);
   6->SetBinContent(34,72.79337);
   6->SetBinContent(35,74.15965);
   6->SetBinContent(36,74.15965);
   6->SetBinContent(37,75.75365);
   6->SetBinContent(38,80.83928);
   6->SetBinContent(39,79.24528);
   6->SetBinContent(40,76.20908);
   6->SetBinContent(41,84.255);
   6->SetBinContent(42,81.44652);
   6->SetBinContent(43,84.40681);
   6->SetBinContent(44,80.68747);
   6->SetBinContent(45,88.27795);
   6->SetBinContent(46,87.13938);
   6->SetBinContent(47,92.68044);
   6->SetBinContent(48,91.31415);
   6->SetBinContent(49,89.79605);
   6->SetBinContent(50,93.05996);
   6->SetBinContent(51,4264);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,-1,1);
   7->SetBinContent(0,1574.102);
   7->SetBinContent(1,51.2627);
   7->SetBinContent(2,54.63131);
   7->SetBinContent(3,49.40752);
   7->SetBinContent(4,54.48485);
   7->SetBinContent(5,51.31152);
   7->SetBinContent(6,51.7509);
   7->SetBinContent(7,55.85182);
   7->SetBinContent(8,53.21552);
   7->SetBinContent(9,54.68013);
   7->SetBinContent(10,53.21552);
   7->SetBinContent(11,52.72731);
   7->SetBinContent(12,53.85018);
   7->SetBinContent(13,51.2627);
   7->SetBinContent(14,51.55562);
   7->SetBinContent(15,49.3587);
   7->SetBinContent(16,51.94618);
   7->SetBinContent(17,49.89572);
   7->SetBinContent(18,52.28793);
   7->SetBinContent(19,53.36198);
   7->SetBinContent(20,48.87049);
   7->SetBinContent(21,50.57921);
   7->SetBinContent(22,52.23911);
   7->SetBinContent(23,49.45634);
   7->SetBinContent(24,53.4108);
   7->SetBinContent(25,51.60444);
   7->SetBinContent(26,52.48321);
   7->SetBinContent(27,50.38393);
   7->SetBinContent(28,49.79808);
   7->SetBinContent(29,51.31152);
   7->SetBinContent(30,51.94618);
   7->SetBinContent(31,51.45798);
   7->SetBinContent(32,52.23911);
   7->SetBinContent(33,49.70044);
   7->SetBinContent(34,50.53039);
   7->SetBinContent(35,52.19028);
   7->SetBinContent(36,53.99664);
   7->SetBinContent(37,53.26434);
   7->SetBinContent(38,54.1431);
   7->SetBinContent(39,52.09264);
   7->SetBinContent(40,52.19028);
   7->SetBinContent(41,51.79972);
   7->SetBinContent(42,53.55726);
   7->SetBinContent(43,54.28957);
   7->SetBinContent(44,54.63131);
   7->SetBinContent(45,54.72895);
   7->SetBinContent(46,54.24075);
   7->SetBinContent(47,52.97141);
   7->SetBinContent(48,52.53203);
   7->SetBinContent(49,52.23911);
   7->SetBinContent(50,52.04382);
   7->SetBinContent(51,1557.061);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,-1,1);
   8->SetBinContent(0,118.7223);
   8->SetBinContent(1,1.907789);
   8->SetBinContent(2,0.880518);
   8->SetBinContent(3,1.761036);
   8->SetBinContent(4,0.880518);
   8->SetBinContent(5,1.46753);
   8->SetBinContent(6,1.320777);
   8->SetBinContent(7,0.880518);
   8->SetBinContent(8,1.174024);
   8->SetBinContent(9,0.880518);
   8->SetBinContent(10,1.320777);
   8->SetBinContent(11,0.440259);
   8->SetBinContent(12,1.174024);
   8->SetBinContent(13,1.027271);
   8->SetBinContent(14,0.880518);
   8->SetBinContent(15,1.174024);
   8->SetBinContent(16,0.880518);
   8->SetBinContent(17,0.733765);
   8->SetBinContent(18,1.320777);
   8->SetBinContent(19,1.320777);
   8->SetBinContent(20,1.320777);
   8->SetBinContent(21,0.733765);
   8->SetBinContent(22,0.440259);
   8->SetBinContent(23,1.027271);
   8->SetBinContent(24,0.733765);
   8->SetBinContent(25,0.880518);
   8->SetBinContent(26,1.614283);
   8->SetBinContent(27,1.027271);
   8->SetBinContent(28,0.587012);
   8->SetBinContent(29,1.174024);
   8->SetBinContent(30,0.880518);
   8->SetBinContent(31,0.880518);
   8->SetBinContent(32,1.027271);
   8->SetBinContent(33,0.880518);
   8->SetBinContent(34,1.614283);
   8->SetBinContent(35,1.761036);
   8->SetBinContent(36,1.174024);
   8->SetBinContent(37,0.587012);
   8->SetBinContent(38,0.880518);
   8->SetBinContent(39,1.761036);
   8->SetBinContent(40,1.027271);
   8->SetBinContent(41,0.733765);
   8->SetBinContent(42,1.907789);
   8->SetBinContent(43,0.880518);
   8->SetBinContent(44,1.320777);
   8->SetBinContent(45,1.027271);
   8->SetBinContent(46,0.880518);
   8->SetBinContent(47,1.174024);
   8->SetBinContent(48,1.027271);
   8->SetBinContent(49,1.46753);
   8->SetBinContent(50,1.174024);
   8->SetBinContent(51,115.934);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,-1,1);
   9->SetBinContent(0,4537.125);
   9->SetBinContent(1,138.5229);
   9->SetBinContent(2,137.6657);
   9->SetBinContent(3,139.0372);
   9->SetBinContent(4,134.2371);
   9->SetBinContent(5,133.8942);
   9->SetBinContent(6,132.8656);
   9->SetBinContent(7,140.2372);
   9->SetBinContent(8,135.9514);
   9->SetBinContent(9,152.7518);
   9->SetBinContent(10,140.5801);
   9->SetBinContent(11,152.2375);
   9->SetBinContent(12,143.6658);
   9->SetBinContent(13,145.8945);
   9->SetBinContent(14,150.1803);
   9->SetBinContent(15,150.1803);
   9->SetBinContent(16,145.2087);
   9->SetBinContent(17,151.3803);
   9->SetBinContent(18,145.723);
   9->SetBinContent(19,151.2089);
   9->SetBinContent(20,149.1517);
   9->SetBinContent(21,148.8088);
   9->SetBinContent(22,153.7804);
   9->SetBinContent(23,153.0946);
   9->SetBinContent(24,151.5517);
   9->SetBinContent(25,147.9517);
   9->SetBinContent(26,151.7232);
   9->SetBinContent(27,145.0373);
   9->SetBinContent(28,142.4658);
   9->SetBinContent(29,149.4946);
   9->SetBinContent(30,151.0374);
   9->SetBinContent(31,146.7516);
   9->SetBinContent(32,159.0948);
   9->SetBinContent(33,142.8087);
   9->SetBinContent(34,145.0373);
   9->SetBinContent(35,146.0659);
   9->SetBinContent(36,147.0945);
   9->SetBinContent(37,145.3802);
   9->SetBinContent(38,146.2373);
   9->SetBinContent(39,150.0089);
   9->SetBinContent(40,141.2658);
   9->SetBinContent(41,145.2087);
   9->SetBinContent(42,136.1228);
   9->SetBinContent(43,142.8087);
   9->SetBinContent(44,144.1801);
   9->SetBinContent(45,145.5516);
   9->SetBinContent(46,131.837);
   9->SetBinContent(47,131.1513);
   9->SetBinContent(48,141.2658);
   9->SetBinContent(49,132.0084);
   9->SetBinContent(50,131.4941);
   9->SetBinContent(51,4446.29);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,-1,1);
   10->SetBinContent(0,14901.01);
   10->SetBinContent(1,464.125);
   10->SetBinContent(2,465.6389);
   10->SetBinContent(3,459.2678);
   10->SetBinContent(4,446.5888);
   10->SetBinContent(5,466.3328);
   10->SetBinContent(6,442.1101);
   10->SetBinContent(7,454.5368);
   10->SetBinContent(8,433.9097);
   10->SetBinContent(9,444.6333);
   10->SetBinContent(10,443.3717);
   10->SetBinContent(11,450.9413);
   10->SetBinContent(12,449.8058);
   10->SetBinContent(13,431.8281);
   10->SetBinContent(14,435.1713);
   10->SetBinContent(15,429.3049);
   10->SetBinContent(16,434.162);
   10->SetBinContent(17,426.0247);
   10->SetBinContent(18,424.8262);
   10->SetBinContent(19,426.5294);
   10->SetBinContent(20,411.1379);
   10->SetBinContent(21,414.8596);
   10->SetBinContent(22,413.598);
   10->SetBinContent(23,412.5887);
   10->SetBinContent(24,414.6073);
   10->SetBinContent(25,422.303);
   10->SetBinContent(26,426.3401);
   10->SetBinContent(27,422.3661);
   10->SetBinContent(28,410.5071);
   10->SetBinContent(29,422.8077);
   10->SetBinContent(30,420.0322);
   10->SetBinContent(31,415.5535);
   10->SetBinContent(32,415.4904);
   10->SetBinContent(33,429.4941);
   10->SetBinContent(34,431.7019);
   10->SetBinContent(35,424.7001);
   10->SetBinContent(36,437.8838);
   10->SetBinContent(37,432.522);
   10->SetBinContent(38,431.5758);
   10->SetBinContent(39,434.5405);
   10->SetBinContent(40,433.4682);
   10->SetBinContent(41,439.7131);
   10->SetBinContent(42,445.5795);
   10->SetBinContent(43,459.2678);
   10->SetBinContent(44,459.1417);
   10->SetBinContent(45,454.1584);
   10->SetBinContent(46,448.2289);
   10->SetBinContent(47,455.1676);
   10->SetBinContent(48,465.1973);
   10->SetBinContent(49,459.4571);
   10->SetBinContent(50,452.2029);
   10->SetBinContent(51,14854.23);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,-1,1);
   11->SetBinContent(0,4551.122);
   11->SetBinContent(1,29.26772);
   11->SetBinContent(2,14.63386);
   11->SetBinContent(3,29.26772);
   11->SetBinContent(4,58.53543);
   11->SetBinContent(5,29.26772);
   11->SetBinContent(6,29.26772);
   11->SetBinContent(7,43.90158);
   11->SetBinContent(8,43.90158);
   11->SetBinContent(9,73.1693);
   11->SetBinContent(11,14.63386);
   11->SetBinContent(12,73.1693);
   11->SetBinContent(13,29.26772);
   11->SetBinContent(14,58.53543);
   11->SetBinContent(15,73.1693);
   11->SetBinContent(16,29.26772);
   11->SetBinContent(17,43.90158);
   11->SetBinContent(18,58.53543);
   11->SetBinContent(19,43.90158);
   11->SetBinContent(20,29.26772);
   11->SetBinContent(21,43.90158);
   11->SetBinContent(22,29.26772);
   11->SetBinContent(23,43.90158);
   11->SetBinContent(24,43.90158);
   11->SetBinContent(25,29.26772);
   11->SetBinContent(27,14.63386);
   11->SetBinContent(28,43.90158);
   11->SetBinContent(29,14.63386);
   11->SetBinContent(30,43.90158);
   11->SetBinContent(31,29.26772);
   11->SetBinContent(32,14.63386);
   11->SetBinContent(33,43.90158);
   11->SetBinContent(34,117.0709);
   11->SetBinContent(35,14.63386);
   11->SetBinContent(36,29.26772);
   11->SetBinContent(37,58.53543);
   11->SetBinContent(38,43.90158);
   11->SetBinContent(40,73.1693);
   11->SetBinContent(41,29.26772);
   11->SetBinContent(42,43.90158);
   11->SetBinContent(43,87.80315);
   11->SetBinContent(44,29.26772);
   11->SetBinContent(45,58.53543);
   11->SetBinContent(46,73.1693);
   11->SetBinContent(48,43.90158);
   11->SetBinContent(49,14.63386);
   11->SetBinContent(50,73.1693);
   11->SetBinContent(51,4668.192);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,-1,1);
   12->SetBinContent(0,24156.52);
   12->SetBinContent(1,253.7391);
   12->SetBinContent(2,336.2043);
   12->SetBinContent(3,431.3564);
   12->SetBinContent(4,342.5477);
   12->SetBinContent(5,323.5173);
   12->SetBinContent(6,241.0521);
   12->SetBinContent(7,348.8912);
   12->SetBinContent(8,361.5782);
   12->SetBinContent(9,298.1434);
   12->SetBinContent(10,336.2043);
   12->SetBinContent(11,310.8304);
   12->SetBinContent(12,298.1434);
   12->SetBinContent(13,336.2043);
   12->SetBinContent(14,291.7999);
   12->SetBinContent(15,260.0826);
   12->SetBinContent(16,247.3956);
   12->SetBinContent(17,228.3652);
   12->SetBinContent(18,247.3956);
   12->SetBinContent(19,253.7391);
   12->SetBinContent(20,336.2043);
   12->SetBinContent(21,253.7391);
   12->SetBinContent(22,183.9608);
   12->SetBinContent(23,183.9608);
   12->SetBinContent(24,247.3956);
   12->SetBinContent(25,272.7695);
   12->SetBinContent(26,323.5173);
   12->SetBinContent(27,139.5565);
   12->SetBinContent(28,183.9608);
   12->SetBinContent(29,310.8304);
   12->SetBinContent(30,190.3043);
   12->SetBinContent(31,291.7999);
   12->SetBinContent(32,285.4565);
   12->SetBinContent(33,228.3652);
   12->SetBinContent(34,272.7695);
   12->SetBinContent(35,196.6478);
   12->SetBinContent(36,215.6782);
   12->SetBinContent(37,234.7086);
   12->SetBinContent(38,291.7999);
   12->SetBinContent(39,272.7695);
   12->SetBinContent(40,228.3652);
   12->SetBinContent(41,285.4565);
   12->SetBinContent(42,291.7999);
   12->SetBinContent(43,348.8912);
   12->SetBinContent(44,291.7999);
   12->SetBinContent(45,291.7999);
   12->SetBinContent(46,291.7999);
   12->SetBinContent(47,336.2043);
   12->SetBinContent(48,342.5477);
   12->SetBinContent(49,310.8304);
   12->SetBinContent(50,279.113);
   12->SetBinContent(51,24277.05);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,-1,1);
   13->SetBinContent(0,33608.62);
   13->SetBinContent(1,407.8725);
   13->SetBinContent(2,407.8725);
   13->SetBinContent(3,652.5959);
   13->SetBinContent(4,407.8725);
   13->SetBinContent(5,652.5959);
   13->SetBinContent(6,652.5959);
   13->SetBinContent(7,407.8725);
   13->SetBinContent(8,326.298);
   13->SetBinContent(9,326.298);
   13->SetBinContent(10,81.57449);
   13->SetBinContent(11,163.149);
   13->SetBinContent(12,163.149);
   13->SetBinContent(13,407.8725);
   13->SetBinContent(14,163.149);
   13->SetBinContent(15,244.7235);
   13->SetBinContent(16,163.149);
   13->SetBinContent(17,244.7235);
   13->SetBinContent(18,407.8725);
   13->SetBinContent(19,815.7449);
   13->SetBinContent(20,326.298);
   13->SetBinContent(21,571.0215);
   13->SetBinContent(22,244.7235);
   13->SetBinContent(23,407.8725);
   13->SetBinContent(24,571.0215);
   13->SetBinContent(25,326.298);
   13->SetBinContent(26,407.8725);
   13->SetBinContent(27,407.8725);
   13->SetBinContent(28,163.149);
   13->SetBinContent(29,652.5959);
   13->SetBinContent(30,163.149);
   13->SetBinContent(31,244.7235);
   13->SetBinContent(32,407.8725);
   13->SetBinContent(33,326.298);
   13->SetBinContent(34,81.57449);
   13->SetBinContent(35,163.149);
   13->SetBinContent(36,326.298);
   13->SetBinContent(37,489.447);
   13->SetBinContent(38,489.447);
   13->SetBinContent(39,407.8725);
   13->SetBinContent(40,163.149);
   13->SetBinContent(41,489.447);
   13->SetBinContent(42,407.8725);
   13->SetBinContent(43,815.7449);
   13->SetBinContent(44,407.8725);
   13->SetBinContent(45,734.1704);
   13->SetBinContent(46,571.0215);
   13->SetBinContent(47,407.8725);
   13->SetBinContent(48,81.57449);
   13->SetBinContent(49,652.5959);
   13->SetBinContent(50,489.447);
   13->SetBinContent(51,33363.89);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,-1,1);
   14->SetBinContent(0,13296.88);
   14->SetBinContent(1,338.4763);
   14->SetBinContent(2,394.889);
   14->SetBinContent(3,390.8595);
   14->SetBinContent(4,483.5376);
   14->SetBinContent(5,406.9774);
   14->SetBinContent(6,443.2428);
   14->SetBinContent(7,390.8595);
   14->SetBinContent(8,419.0659);
   14->SetBinContent(9,419.0659);
   14->SetBinContent(10,402.948);
   14->SetBinContent(11,354.5942);
   14->SetBinContent(12,406.9774);
   14->SetBinContent(13,531.8913);
   14->SetBinContent(14,374.7416);
   14->SetBinContent(15,334.4468);
   14->SetBinContent(16,350.5647);
   14->SetBinContent(17,479.5081);
   14->SetBinContent(18,431.1543);
   14->SetBinContent(19,318.3289);
   14->SetBinContent(20,423.0954);
   14->SetBinContent(21,382.8006);
   14->SetBinContent(22,354.5942);
   14->SetBinContent(23,382.8006);
   14->SetBinContent(24,451.3017);
   14->SetBinContent(25,415.0364);
   14->SetBinContent(26,310.2699);
   14->SetBinContent(27,467.4196);
   14->SetBinContent(28,386.83);
   14->SetBinContent(29,342.5058);
   14->SetBinContent(30,386.83);
   14->SetBinContent(31,447.2722);
   14->SetBinContent(32,261.9162);
   14->SetBinContent(33,314.2994);
   14->SetBinContent(34,374.7416);
   14->SetBinContent(35,419.0659);
   14->SetBinContent(36,390.8595);
   14->SetBinContent(37,427.1248);
   14->SetBinContent(38,406.9774);
   14->SetBinContent(39,374.7416);
   14->SetBinContent(40,451.3017);
   14->SetBinContent(41,338.4763);
   14->SetBinContent(42,378.7711);
   14->SetBinContent(43,415.0364);
   14->SetBinContent(44,447.2722);
   14->SetBinContent(45,455.3312);
   14->SetBinContent(46,423.0954);
   14->SetBinContent(47,423.0954);
   14->SetBinContent(48,451.3017);
   14->SetBinContent(49,394.889);
   14->SetBinContent(50,475.4786);
   14->SetBinContent(51,13732.05);
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
   
   TH1F *15 = new TH1F("15","qqll",50,-1,1);
   15->SetBinContent(0,1421.524);
   15->SetBinContent(1,23.17708);
   15->SetBinContent(2,15.45139);
   15->SetBinContent(3,19.31424);
   15->SetBinContent(4,3.862847);
   15->SetBinContent(5,7.725694);
   15->SetBinContent(6,7.725694);
   15->SetBinContent(7,7.725694);
   15->SetBinContent(8,11.58854);
   15->SetBinContent(9,19.31424);
   15->SetBinContent(10,23.17708);
   15->SetBinContent(11,23.17708);
   15->SetBinContent(12,7.725694);
   15->SetBinContent(13,3.862847);
   15->SetBinContent(14,11.58854);
   15->SetBinContent(15,7.725694);
   15->SetBinContent(16,15.45139);
   15->SetBinContent(17,7.725694);
   15->SetBinContent(18,7.725694);
   15->SetBinContent(19,11.58854);
   15->SetBinContent(20,23.17708);
   15->SetBinContent(21,3.862847);
   15->SetBinContent(22,3.862847);
   15->SetBinContent(23,11.58854);
   15->SetBinContent(25,7.725694);
   15->SetBinContent(26,7.725694);
   15->SetBinContent(27,11.58854);
   15->SetBinContent(28,15.45139);
   15->SetBinContent(29,7.725694);
   15->SetBinContent(30,11.58854);
   15->SetBinContent(31,7.725694);
   15->SetBinContent(32,7.725694);
   15->SetBinContent(33,15.45139);
   15->SetBinContent(34,11.58854);
   15->SetBinContent(35,15.45139);
   15->SetBinContent(36,11.58854);
   15->SetBinContent(37,3.862847);
   15->SetBinContent(38,3.862847);
   15->SetBinContent(39,11.58854);
   15->SetBinContent(40,7.725694);
   15->SetBinContent(41,7.725694);
   15->SetBinContent(42,7.725694);
   15->SetBinContent(43,7.725694);
   15->SetBinContent(44,15.45139);
   15->SetBinContent(45,7.725694);
   15->SetBinContent(46,23.17708);
   15->SetBinContent(47,3.862847);
   15->SetBinContent(48,15.45139);
   15->SetBinContent(49,19.31424);
   15->SetBinContent(50,7.725694);
   15->SetBinContent(51,1402.21);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,-1,1);
   16->SetBinContent(0,23146.1);
   16->SetBinContent(1,154.1042);
   16->SetBinContent(2,277.3877);
   16->SetBinContent(3,252.731);
   16->SetBinContent(4,283.5519);
   16->SetBinContent(5,308.2086);
   16->SetBinContent(6,265.0593);
   16->SetBinContent(7,166.4326);
   16->SetBinContent(8,240.4026);
   16->SetBinContent(9,302.0444);
   16->SetBinContent(10,197.2534);
   16->SetBinContent(11,283.5519);
   16->SetBinContent(12,234.2384);
   16->SetBinContent(13,221.9101);
   16->SetBinContent(14,215.7459);
   16->SetBinContent(15,215.7459);
   16->SetBinContent(16,215.7459);
   16->SetBinContent(17,184.9251);
   16->SetBinContent(18,234.2384);
   16->SetBinContent(19,295.8802);
   16->SetBinContent(20,258.8951);
   16->SetBinContent(21,221.9101);
   16->SetBinContent(22,215.7459);
   16->SetBinContent(23,252.731);
   16->SetBinContent(24,215.7459);
   16->SetBinContent(25,252.731);
   16->SetBinContent(26,240.4026);
   16->SetBinContent(27,215.7459);
   16->SetBinContent(28,314.3728);
   16->SetBinContent(29,215.7459);
   16->SetBinContent(30,135.6117);
   16->SetBinContent(31,246.5668);
   16->SetBinContent(32,234.2384);
   16->SetBinContent(33,252.731);
   16->SetBinContent(34,209.5818);
   16->SetBinContent(35,203.4176);
   16->SetBinContent(36,203.4176);
   16->SetBinContent(37,265.0593);
   16->SetBinContent(38,326.7012);
   16->SetBinContent(39,295.8802);
   16->SetBinContent(40,252.731);
   16->SetBinContent(41,271.2235);
   16->SetBinContent(42,215.7459);
   16->SetBinContent(43,265.0593);
   16->SetBinContent(44,265.0593);
   16->SetBinContent(45,258.8951);
   16->SetBinContent(46,295.8802);
   16->SetBinContent(47,302.0444);
   16->SetBinContent(48,191.0893);
   16->SetBinContent(49,369.8505);
   16->SetBinContent(50,246.5668);
   16->SetBinContent(51,23022.81);
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
   
   TH1F *17 = new TH1F("17","qq",50,-1,1);
   17->SetBinContent(0,19536.58);
   17->SetBinContent(1,281.1021);
   17->SetBinContent(2,281.1021);
   17->SetBinContent(3,163.9762);
   17->SetBinContent(4,187.4014);
   17->SetBinContent(5,234.2517);
   17->SetBinContent(6,187.4014);
   17->SetBinContent(7,163.9762);
   17->SetBinContent(8,281.1021);
   17->SetBinContent(9,281.1021);
   17->SetBinContent(10,281.1021);
   17->SetBinContent(11,210.8266);
   17->SetBinContent(12,187.4014);
   17->SetBinContent(13,210.8266);
   17->SetBinContent(14,234.2517);
   17->SetBinContent(15,187.4014);
   17->SetBinContent(16,304.5273);
   17->SetBinContent(17,70.27553);
   17->SetBinContent(18,210.8266);
   17->SetBinContent(19,93.70071);
   17->SetBinContent(20,234.2517);
   17->SetBinContent(21,281.1021);
   17->SetBinContent(22,187.4014);
   17->SetBinContent(23,304.5273);
   17->SetBinContent(24,210.8266);
   17->SetBinContent(25,187.4014);
   17->SetBinContent(26,187.4014);
   17->SetBinContent(27,234.2517);
   17->SetBinContent(28,234.2517);
   17->SetBinContent(29,234.2517);
   17->SetBinContent(30,210.8266);
   17->SetBinContent(31,351.3776);
   17->SetBinContent(32,234.2517);
   17->SetBinContent(33,187.4014);
   17->SetBinContent(34,234.2517);
   17->SetBinContent(35,163.9762);
   17->SetBinContent(36,210.8266);
   17->SetBinContent(37,210.8266);
   17->SetBinContent(38,398.2279);
   17->SetBinContent(39,140.5511);
   17->SetBinContent(40,257.6769);
   17->SetBinContent(41,187.4014);
   17->SetBinContent(42,93.70071);
   17->SetBinContent(43,234.2517);
   17->SetBinContent(44,210.8266);
   17->SetBinContent(45,327.9524);
   17->SetBinContent(46,257.6769);
   17->SetBinContent(47,210.8266);
   17->SetBinContent(48,234.2517);
   17->SetBinContent(49,163.9762);
   17->SetBinContent(50,187.4014);
   17->SetBinContent(51,18458.99);
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
