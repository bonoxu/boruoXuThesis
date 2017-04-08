{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:00:37 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.25126,1.31746,5.948846);
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
   
   TH1F *THStack_stack_15 = new TH1F("THStack_stack_15","",50,0,1);
   THStack_stack_15->SetMinimum(0.02539565);
   THStack_stack_15->SetMaximum(163244.1);
   THStack_stack_15->SetDirectory(0);
   THStack_stack_15->SetStats(0);
   THStack_stack_15->SetLineWidth(2);
   THStack_stack_15->SetMarkerSize(1.2);
   THStack_stack_15->GetXaxis()->SetTitle("Highest B tag of H#rightarrowbb jets");
   THStack_stack_15->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_15->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_15->GetXaxis()->SetLabelColor(ci);
   THStack_stack_15->GetXaxis()->SetLabelFont(42);
   THStack_stack_15->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_15->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_15->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_15->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_15->GetXaxis()->SetTitleColor(ci);
   THStack_stack_15->GetXaxis()->SetTitleFont(42);
   THStack_stack_15->GetYaxis()->SetTitle("Number of events");
   THStack_stack_15->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_15->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_15->GetYaxis()->SetLabelColor(ci);
   THStack_stack_15->GetYaxis()->SetLabelFont(42);
   THStack_stack_15->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_15->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_15->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_15->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_15->GetYaxis()->SetTitleColor(ci);
   THStack_stack_15->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_15->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_15->GetZaxis()->SetLabelColor(ci);
   THStack_stack_15->GetZaxis()->SetLabelFont(42);
   THStack_stack_15->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_15->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_15->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_15->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_15->GetZaxis()->SetTitleColor(ci);
   THStack_stack_15->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_15);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(11,0.1524421);
   0->SetBinContent(12,0.1806721);
   0->SetBinContent(13,0.1505601);
   0->SetBinContent(14,0.1260941);
   0->SetBinContent(15,0.1355041);
   0->SetBinContent(16,0.1242121);
   0->SetBinContent(17,0.1148021);
   0->SetBinContent(18,0.09974606);
   0->SetBinContent(19,0.08280805);
   0->SetBinContent(20,0.09598206);
   0->SetBinContent(21,0.09786406);
   0->SetBinContent(22,0.07716204);
   0->SetBinContent(23,0.1129201);
   0->SetBinContent(24,0.08657205);
   0->SetBinContent(25,0.07904404);
   0->SetBinContent(26,0.07151604);
   0->SetBinContent(27,0.06587003);
   0->SetBinContent(28,0.06963404);
   0->SetBinContent(29,0.05081402);
   0->SetBinContent(30,0.05646002);
   0->SetBinContent(31,0.08657205);
   0->SetBinContent(32,0.06210603);
   0->SetBinContent(33,0.07339804);
   0->SetBinContent(34,0.09410006);
   0->SetBinContent(35,0.07151604);
   0->SetBinContent(36,0.09410006);
   0->SetBinContent(37,0.08469005);
   0->SetBinContent(38,0.09598206);
   0->SetBinContent(39,0.1053921);
   0->SetBinContent(40,0.1053921);
   0->SetBinContent(41,0.1204481);
   0->SetBinContent(42,0.1449141);
   0->SetBinContent(43,0.1467961);
   0->SetBinContent(44,0.1618521);
   0->SetBinContent(45,0.2070202);
   0->SetBinContent(46,0.2860639);
   0->SetBinContent(47,0.4573247);
   0->SetBinContent(48,0.6304696);
   0->SetBinContent(49,1.381382);
   0->SetBinContent(50,10.23971);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,1);
   1->SetBinContent(11,0.1232711);
   1->SetBinContent(12,0.1289171);
   1->SetBinContent(13,0.1176251);
   1->SetBinContent(14,0.1119791);
   1->SetBinContent(15,0.09221807);
   1->SetBinContent(16,0.1195071);
   1->SetBinContent(17,0.1063331);
   1->SetBinContent(18,0.08280806);
   1->SetBinContent(19,0.09504107);
   1->SetBinContent(20,0.08845407);
   1->SetBinContent(21,0.07716206);
   1->SetBinContent(22,0.1025691);
   1->SetBinContent(23,0.09692308);
   1->SetBinContent(24,0.07904406);
   1->SetBinContent(25,0.08751307);
   1->SetBinContent(26,0.07622106);
   1->SetBinContent(27,0.07057505);
   1->SetBinContent(28,0.1035101);
   1->SetBinContent(29,0.08939507);
   1->SetBinContent(30,0.09033607);
   1->SetBinContent(31,0.07339805);
   1->SetBinContent(32,0.07151605);
   1->SetBinContent(33,0.08092606);
   1->SetBinContent(34,0.07339805);
   1->SetBinContent(35,0.07998506);
   1->SetBinContent(36,0.09974608);
   1->SetBinContent(37,0.08469006);
   1->SetBinContent(38,0.09786408);
   1->SetBinContent(39,0.09315907);
   1->SetBinContent(40,0.08845407);
   1->SetBinContent(41,0.09410007);
   1->SetBinContent(42,0.1053921);
   1->SetBinContent(43,0.139268);
   1->SetBinContent(44,0.1260941);
   1->SetBinContent(45,0.1656158);
   1->SetBinContent(46,0.2230164);
   1->SetBinContent(47,0.3058247);
   1->SetBinContent(48,0.4620321);
   1->SetBinContent(49,0.916526);
   1->SetBinContent(50,5.086926);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,1);
   2->SetBinContent(11,0.7189205);
   2->SetBinContent(12,0.8149003);
   2->SetBinContent(13,0.5081413);
   2->SetBinContent(14,0.451681);
   2->SetBinContent(15,0.4215688);
   2->SetBinContent(16,0.3227629);
   2->SetBinContent(17,0.3472291);
   2->SetBinContent(18,0.3152348);
   2->SetBinContent(19,0.2973557);
   2->SetBinContent(20,0.2361903);
   2->SetBinContent(21,0.2446593);
   2->SetBinContent(22,0.2192524);
   2->SetBinContent(23,0.2183114);
   2->SetBinContent(24,0.2004326);
   2->SetBinContent(25,0.1947866);
   2->SetBinContent(26,0.1872587);
   2->SetBinContent(27,0.1966686);
   2->SetBinContent(28,0.1590289);
   2->SetBinContent(29,0.1627928);
   2->SetBinContent(30,0.1524419);
   2->SetBinContent(31,0.144914);
   2->SetBinContent(32,0.1609108);
   2->SetBinContent(33,0.133622);
   2->SetBinContent(34,0.144914);
   2->SetBinContent(35,0.144914);
   2->SetBinContent(36,0.143973);
   2->SetBinContent(37,0.1505599);
   2->SetBinContent(38,0.137386);
   2->SetBinContent(39,0.1684388);
   2->SetBinContent(40,0.1825537);
   2->SetBinContent(41,0.1853767);
   2->SetBinContent(42,0.2023146);
   2->SetBinContent(43,0.2446593);
   2->SetBinContent(44,0.2719484);
   2->SetBinContent(45,0.3472291);
   2->SetBinContent(46,0.4168637);
   2->SetBinContent(47,0.5448394);
   2->SetBinContent(48,0.8930015);
   2->SetBinContent(49,1.875439);
   2->SetBinContent(50,13.33197);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,1);
   3->SetBinContent(11,1.679938);
   3->SetBinContent(12,1.898466);
   3->SetBinContent(13,1.488725);
   3->SetBinContent(14,1.331658);
   3->SetBinContent(15,1.270196);
   3->SetBinContent(16,1.1063);
   3->SetBinContent(17,1.167761);
   3->SetBinContent(18,1.236051);
   3->SetBinContent(19,0.9902064);
   3->SetBinContent(20,0.8399678);
   3->SetBinContent(21,0.8536259);
   3->SetBinContent(22,0.9424032);
   3->SetBinContent(23,0.9492322);
   3->SetBinContent(24,0.8536259);
   3->SetBinContent(25,0.880942);
   3->SetBinContent(26,0.9287452);
   3->SetBinContent(27,0.9560612);
   3->SetBinContent(28,0.7853357);
   3->SetBinContent(29,0.8058227);
   3->SetBinContent(30,0.7102164);
   3->SetBinContent(31,0.7921647);
   3->SetBinContent(32,0.6897293);
   3->SetBinContent(33,0.7102164);
   3->SetBinContent(34,0.7511905);
   3->SetBinContent(35,0.7853357);
   3->SetBinContent(36,0.6555842);
   3->SetBinContent(37,0.8536259);
   3->SetBinContent(38,0.874113);
   3->SetBinContent(39,0.9424032);
   3->SetBinContent(40,0.8194808);
   3->SetBinContent(41,1.058497);
   3->SetBinContent(42,0.9833773);
   3->SetBinContent(43,1.195077);
   3->SetBinContent(44,1.461409);
   3->SetBinContent(45,1.509212);
   3->SetBinContent(46,2.000902);
   3->SetBinContent(47,3.018426);
   3->SetBinContent(48,4.554937);
   3->SetBinContent(49,9.164448);
   3->SetBinContent(50,60.0363);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,1);
   4->SetBinContent(11,6.791891);
   4->SetBinContent(12,7.475813);
   4->SetBinContent(13,5.33987);
   4->SetBinContent(14,4.477075);
   4->SetBinContent(15,3.919415);
   4->SetBinContent(16,3.509061);
   4->SetBinContent(17,3.377537);
   4->SetBinContent(18,3.188143);
   4->SetBinContent(19,2.672571);
   4->SetBinContent(20,2.604179);
   4->SetBinContent(21,2.05178);
   4->SetBinContent(22,2.104389);
   4->SetBinContent(23,2.135955);
   4->SetBinContent(24,1.757167);
   4->SetBinContent(25,1.557251);
   4->SetBinContent(26,1.615121);
   4->SetBinContent(27,1.515163);
   4->SetBinContent(28,1.494119);
   4->SetBinContent(29,1.346813);
   4->SetBinContent(30,1.199507);
   4->SetBinContent(31,1.062722);
   4->SetBinContent(32,0.9364585);
   4->SetBinContent(33,1.152158);
   4->SetBinContent(34,1.036417);
   4->SetBinContent(35,1.0522);
   4->SetBinContent(36,0.9364585);
   4->SetBinContent(37,1.031156);
   4->SetBinContent(38,1.041678);
   4->SetBinContent(39,1.115331);
   4->SetBinContent(40,1.004852);
   4->SetBinContent(41,1.178463);
   4->SetBinContent(42,1.16268);
   4->SetBinContent(43,1.430988);
   4->SetBinContent(44,1.60986);
   4->SetBinContent(45,1.914995);
   4->SetBinContent(46,2.451611);
   4->SetBinContent(47,3.367016);
   4->SetBinContent(48,5.460872);
   4->SetBinContent(49,10.9483);
   4->SetBinContent(50,72.71869);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,1);
   5->SetBinContent(11,12.78534);
   5->SetBinContent(12,16.24513);
   5->SetBinContent(13,7.936687);
   5->SetBinContent(14,6.287341);
   5->SetBinContent(15,5.568077);
   5->SetBinContent(16,5.121637);
   5->SetBinContent(17,4.625593);
   5->SetBinContent(18,4.315565);
   5->SetBinContent(19,4.092345);
   5->SetBinContent(20,3.955933);
   5->SetBinContent(21,3.47229);
   5->SetBinContent(22,3.633505);
   5->SetBinContent(23,3.69551);
   5->SetBinContent(24,3.13746);
   5->SetBinContent(25,3.100257);
   5->SetBinContent(26,3.025851);
   5->SetBinContent(27,2.815032);
   5->SetBinContent(28,2.34379);
   5->SetBinContent(29,2.641416);
   5->SetBinContent(30,2.703422);
   5->SetBinContent(31,2.318988);
   5->SetBinContent(32,2.467801);
   5->SetBinContent(33,2.740625);
   5->SetBinContent(34,2.827433);
   5->SetBinContent(35,2.554609);
   5->SetBinContent(36,2.492603);
   5->SetBinContent(37,2.616614);
   5->SetBinContent(38,2.765427);
   5->SetBinContent(39,2.653817);
   5->SetBinContent(40,3.47229);
   5->SetBinContent(41,3.075455);
   5->SetBinContent(42,3.645906);
   5->SetBinContent(43,4.600791);
   5->SetBinContent(44,4.749604);
   5->SetBinContent(45,6.088923);
   5->SetBinContent(46,7.341434);
   5->SetBinContent(47,11.52047);
   5->SetBinContent(48,17.13804);
   5->SetBinContent(49,37.76187);
   5->SetBinContent(50,291.1134);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,1);
   6->SetBinContent(11,392.2001);
   6->SetBinContent(12,503.769);
   6->SetBinContent(13,268.5636);
   6->SetBinContent(14,231.6726);
   6->SetBinContent(15,198.4989);
   6->SetBinContent(16,173.1441);
   6->SetBinContent(17,158.6448);
   6->SetBinContent(18,141.6404);
   6->SetBinContent(19,134.8842);
   6->SetBinContent(20,126.9135);
   6->SetBinContent(21,116.8941);
   6->SetBinContent(22,104.9011);
   6->SetBinContent(23,103.383);
   6->SetBinContent(24,96.09615);
   6->SetBinContent(25,88.42976);
   6->SetBinContent(26,86.98757);
   6->SetBinContent(27,78.56213);
   6->SetBinContent(28,78.18261);
   6->SetBinContent(29,74.38737);
   6->SetBinContent(30,75.37413);
   6->SetBinContent(31,70.51622);
   6->SetBinContent(32,75.52594);
   6->SetBinContent(33,70.97165);
   6->SetBinContent(34,64.89926);
   6->SetBinContent(35,65.20288);
   6->SetBinContent(36,67.17641);
   6->SetBinContent(37,68.31498);
   6->SetBinContent(38,65.5065);
   6->SetBinContent(39,67.85955);
   6->SetBinContent(40,73.55241);
   6->SetBinContent(41,77.9549);
   6->SetBinContent(42,84.55862);
   6->SetBinContent(43,95.94434);
   6->SetBinContent(44,115.9832);
   6->SetBinContent(45,142.7032);
   6->SetBinContent(46,184.7587);
   6->SetBinContent(47,261.2015);
   6->SetBinContent(48,409.8842);
   6->SetBinContent(49,860.0946);
   6->SetBinContent(50,6342.726);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,1);
   7->SetBinContent(11,558.9167);
   7->SetBinContent(12,800.1765);
   7->SetBinContent(13,358.0378);
   7->SetBinContent(14,288.5066);
   7->SetBinContent(15,236.407);
   7->SetBinContent(16,205.8894);
   7->SetBinContent(17,182.3054);
   7->SetBinContent(18,153.5945);
   7->SetBinContent(19,138.6042);
   7->SetBinContent(20,115.0223);
   7->SetBinContent(21,112.6789);
   7->SetBinContent(22,97.2516);
   7->SetBinContent(23,89.3915);
   7->SetBinContent(24,81.38494);
   7->SetBinContent(25,71.47438);
   7->SetBinContent(26,64.24895);
   7->SetBinContent(27,57.60936);
   7->SetBinContent(28,52.77613);
   7->SetBinContent(29,46.86885);
   7->SetBinContent(30,44.96485);
   7->SetBinContent(31,42.03562);
   7->SetBinContent(32,38.76465);
   7->SetBinContent(33,34.32198);
   7->SetBinContent(34,32.4668);
   7->SetBinContent(35,30.90451);
   7->SetBinContent(36,26.16873);
   7->SetBinContent(37,27.24283);
   7->SetBinContent(38,27.87752);
   7->SetBinContent(39,25.53404);
   7->SetBinContent(40,27.8287);
   7->SetBinContent(41,29.73277);
   7->SetBinContent(42,30.22099);
   7->SetBinContent(43,30.26982);
   7->SetBinContent(44,34.56609);
   7->SetBinContent(45,40.76629);
   7->SetBinContent(46,47.6988);
   7->SetBinContent(47,62.73551);
   7->SetBinContent(48,93.00422);
   7->SetBinContent(49,173.4187);
   7->SetBinContent(50,1132.452);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,1);
   8->SetBinContent(11,39.03627);
   8->SetBinContent(12,57.82045);
   8->SetBinContent(13,19.95843);
   8->SetBinContent(14,18.05064);
   8->SetBinContent(15,15.84934);
   8->SetBinContent(16,12.62076);
   8->SetBinContent(17,11.00648);
   8->SetBinContent(18,10.41946);
   8->SetBinContent(19,10.85972);
   8->SetBinContent(20,10.12596);
   8->SetBinContent(21,7.190894);
   8->SetBinContent(22,6.016871);
   8->SetBinContent(23,7.190894);
   8->SetBinContent(24,4.696096);
   8->SetBinContent(25,6.45713);
   8->SetBinContent(26,4.40259);
   8->SetBinContent(27,3.815579);
   8->SetBinContent(28,2.93506);
   8->SetBinContent(29,3.962332);
   8->SetBinContent(30,2.788307);
   8->SetBinContent(31,1.614283);
   8->SetBinContent(32,2.348048);
   8->SetBinContent(33,2.348048);
   8->SetBinContent(34,1.907789);
   8->SetBinContent(35,1.907789);
   8->SetBinContent(36,1.46753);
   8->SetBinContent(37,1.027271);
   8->SetBinContent(38,0.880518);
   8->SetBinContent(39,1.027271);
   8->SetBinContent(40,0.880518);
   8->SetBinContent(41,0.733765);
   8->SetBinContent(42,1.027271);
   8->SetBinContent(43,1.761036);
   8->SetBinContent(44,1.614283);
   8->SetBinContent(45,1.761036);
   8->SetBinContent(46,1.46753);
   8->SetBinContent(47,2.788307);
   8->SetBinContent(48,2.201295);
   8->SetBinContent(49,2.201295);
   8->SetBinContent(50,3.522073);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,1);
   9->SetBinContent(11,353.8508);
   9->SetBinContent(12,422.4299);
   9->SetBinContent(13,273.9561);
   9->SetBinContent(14,239.3252);
   9->SetBinContent(15,210.5245);
   9->SetBinContent(16,204.353);
   9->SetBinContent(17,194.2384);
   9->SetBinContent(18,185.3239);
   9->SetBinContent(19,183.6096);
   9->SetBinContent(20,165.7806);
   9->SetBinContent(21,162.5234);
   9->SetBinContent(22,149.666);
   9->SetBinContent(23,155.6661);
   9->SetBinContent(24,137.1514);
   9->SetBinContent(25,137.6657);
   9->SetBinContent(26,137.6657);
   9->SetBinContent(27,124.6367);
   9->SetBinContent(28,127.8941);
   9->SetBinContent(29,129.9512);
   9->SetBinContent(30,122.0651);
   9->SetBinContent(31,122.9223);
   9->SetBinContent(32,121.8937);
   9->SetBinContent(33,118.4649);
   9->SetBinContent(34,118.8077);
   9->SetBinContent(35,120.1793);
   9->SetBinContent(36,133.037);
   9->SetBinContent(37,132.8656);
   9->SetBinContent(38,128.7512);
   9->SetBinContent(39,141.2658);
   9->SetBinContent(40,142.8087);
   9->SetBinContent(41,168.0093);
   9->SetBinContent(42,172.2951);
   9->SetBinContent(43,186.8668);
   9->SetBinContent(44,220.9819);
   9->SetBinContent(45,269.4985);
   9->SetBinContent(46,325.0476);
   9->SetBinContent(47,451.4046);
   9->SetBinContent(48,682.3447);
   9->SetBinContent(49,1280.263);
   9->SetBinContent(50,7344.439);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,1);
   10->SetBinContent(11,3043.575);
   10->SetBinContent(12,4378.045);
   10->SetBinContent(13,2046.973);
   10->SetBinContent(14,1667.301);
   10->SetBinContent(15,1411.641);
   10->SetBinContent(16,1249.573);
   10->SetBinContent(17,1082.268);
   10->SetBinContent(18,983.5631);
   10->SetBinContent(19,887.0043);
   10->SetBinContent(20,823.3259);
   10->SetBinContent(21,746.3313);
   10->SetBinContent(22,676.0264);
   10->SetBinContent(23,613.5471);
   10->SetBinContent(24,568.9281);
   10->SetBinContent(25,532.1348);
   10->SetBinContent(26,493.394);
   10->SetBinContent(27,455.6092);
   10->SetBinContent(28,426.214);
   10->SetBinContent(29,396.4403);
   10->SetBinContent(30,372.7223);
   10->SetBinContent(31,353.0414);
   10->SetBinContent(32,332.982);
   10->SetBinContent(33,318.4106);
   10->SetBinContent(34,312.9857);
   10->SetBinContent(35,303.9022);
   10->SetBinContent(36,300.7482);
   10->SetBinContent(37,292.2324);
   10->SetBinContent(38,292.8632);
   10->SetBinContent(39,301.5052);
   10->SetBinContent(40,309.7686);
   10->SetBinContent(41,323.5831);
   10->SetBinContent(42,350.9597);
   10->SetBinContent(43,390.4477);
   10->SetBinContent(44,442.3624);
   10->SetBinContent(45,520.838);
   10->SetBinContent(46,667.822);
   10->SetBinContent(47,907.1996);
   10->SetBinContent(48,1399.65);
   10->SetBinContent(49,2763.277);
   10->SetBinContent(50,17823.52);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,1);
   11->SetBinContent(11,1726.797);
   11->SetBinContent(12,2282.884);
   11->SetBinContent(13,819.4958);
   11->SetBinContent(14,658.5235);
   11->SetBinContent(15,570.7204);
   11->SetBinContent(16,351.2126);
   11->SetBinContent(17,468.2834);
   11->SetBinContent(18,365.8465);
   11->SetBinContent(19,395.1142);
   11->SetBinContent(20,365.8465);
   11->SetBinContent(21,234.1418);
   11->SetBinContent(22,219.5079);
   11->SetBinContent(23,117.0709);
   11->SetBinContent(24,160.9725);
   11->SetBinContent(25,160.9725);
   11->SetBinContent(26,87.80315);
   11->SetBinContent(27,175.6063);
   11->SetBinContent(28,87.80315);
   11->SetBinContent(29,102.437);
   11->SetBinContent(30,131.7047);
   11->SetBinContent(31,87.80315);
   11->SetBinContent(32,29.26772);
   11->SetBinContent(33,43.90158);
   11->SetBinContent(34,73.1693);
   11->SetBinContent(36,14.63386);
   11->SetBinContent(37,43.90158);
   11->SetBinContent(38,29.26772);
   11->SetBinContent(39,58.53543);
   11->SetBinContent(40,29.26772);
   11->SetBinContent(41,43.90158);
   11->SetBinContent(42,58.53543);
   11->SetBinContent(43,43.90158);
   11->SetBinContent(44,29.26772);
   11->SetBinContent(45,43.90158);
   11->SetBinContent(46,14.63386);
   11->SetBinContent(47,43.90158);
   11->SetBinContent(48,58.53543);
   11->SetBinContent(49,160.9725);
   11->SetBinContent(50,819.4958);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,1);
   12->SetBinContent(11,8335.212);
   12->SetBinContent(12,14038.24);
   12->SetBinContent(13,4827.377);
   12->SetBinContent(14,3812.445);
   12->SetBinContent(15,3209.812);
   12->SetBinContent(16,2765.766);
   12->SetBinContent(17,2448.591);
   12->SetBinContent(18,1884.019);
   12->SetBinContent(19,1788.866);
   12->SetBinContent(20,1649.309);
   12->SetBinContent(21,1497.065);
   12->SetBinContent(22,1446.317);
   12->SetBinContent(23,1033.989);
   12->SetBinContent(24,894.4319);
   12->SetBinContent(25,938.8365);
   12->SetBinContent(26,640.6917);
   12->SetBinContent(27,621.6612);
   12->SetBinContent(28,501.1346);
   12->SetBinContent(29,539.1956);
   12->SetBinContent(30,532.8521);
   12->SetBinContent(31,463.0738);
   12->SetBinContent(32,418.6694);
   12->SetBinContent(33,272.7695);
   12->SetBinContent(34,285.4565);
   12->SetBinContent(35,215.6782);
   12->SetBinContent(36,234.7086);
   12->SetBinContent(37,202.9913);
   12->SetBinContent(38,266.426);
   12->SetBinContent(39,228.3652);
   12->SetBinContent(40,241.0521);
   12->SetBinContent(41,241.0521);
   12->SetBinContent(42,202.9913);
   12->SetBinContent(43,285.4565);
   12->SetBinContent(44,209.3347);
   12->SetBinContent(45,260.0826);
   12->SetBinContent(46,291.7999);
   12->SetBinContent(47,317.1738);
   12->SetBinContent(48,539.1956);
   12->SetBinContent(49,735.8443);
   12->SetBinContent(50,3076.598);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,1);
   13->SetBinContent(11,10604.69);
   13->SetBinContent(12,16885.9);
   13->SetBinContent(13,7341.711);
   13->SetBinContent(14,5791.792);
   13->SetBinContent(15,4812.896);
   13->SetBinContent(16,4323.447);
   13->SetBinContent(17,2691.958);
   13->SetBinContent(18,3426.128);
   13->SetBinContent(19,2447.234);
   13->SetBinContent(20,1794.638);
   13->SetBinContent(21,1794.638);
   13->SetBinContent(22,1223.617);
   13->SetBinContent(23,1631.49);
   13->SetBinContent(24,734.1704);
   13->SetBinContent(25,978.8938);
   13->SetBinContent(26,652.5959);
   13->SetBinContent(27,815.7449);
   13->SetBinContent(28,897.3193);
   13->SetBinContent(29,571.0215);
   13->SetBinContent(30,1386.766);
   13->SetBinContent(31,571.0215);
   13->SetBinContent(32,407.8725);
   13->SetBinContent(33,978.8938);
   13->SetBinContent(34,407.8725);
   13->SetBinContent(35,326.298);
   13->SetBinContent(36,163.149);
   13->SetBinContent(37,407.8725);
   13->SetBinContent(38,244.7235);
   13->SetBinContent(39,407.8725);
   13->SetBinContent(40,163.149);
   13->SetBinContent(41,326.298);
   13->SetBinContent(42,244.7235);
   13->SetBinContent(43,81.57449);
   13->SetBinContent(44,489.447);
   13->SetBinContent(45,734.1704);
   13->SetBinContent(46,652.5959);
   13->SetBinContent(47,815.7449);
   13->SetBinContent(48,571.0215);
   13->SetBinContent(49,1549.915);
   13->SetBinContent(50,6118.091);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,1);
   14->SetBinContent(11,4170.524);
   14->SetBinContent(12,9352.2);
   14->SetBinContent(13,2506.328);
   14->SetBinContent(14,1732.666);
   14->SetBinContent(15,1430.459);
   14->SetBinContent(16,1285.4);
   14->SetBinContent(17,1104.076);
   14->SetBinContent(18,1019.458);
   14->SetBinContent(19,898.574);
   14->SetBinContent(20,725.3063);
   14->SetBinContent(21,660.8347);
   14->SetBinContent(22,672.9231);
   14->SetBinContent(23,552.0387);
   14->SetBinContent(24,507.7144);
   14->SetBinContent(25,527.8618);
   14->SetBinContent(26,354.5942);
   14->SetBinContent(27,278.0341);
   14->SetBinContent(28,302.211);
   14->SetBinContent(29,366.6826);
   14->SetBinContent(30,370.7121);
   14->SetBinContent(31,282.0636);
   14->SetBinContent(32,286.093);
   14->SetBinContent(33,205.5035);
   14->SetBinContent(34,197.4445);
   14->SetBinContent(35,241.7688);
   14->SetBinContent(36,217.5919);
   14->SetBinContent(37,181.3266);
   14->SetBinContent(38,189.3855);
   14->SetBinContent(39,217.5919);
   14->SetBinContent(40,193.415);
   14->SetBinContent(41,229.6803);
   14->SetBinContent(42,286.093);
   14->SetBinContent(43,298.1815);
   14->SetBinContent(44,253.8572);
   14->SetBinContent(45,342.5058);
   14->SetBinContent(46,398.9185);
   14->SetBinContent(47,636.6578);
   14->SetBinContent(48,995.2815);
   14->SetBinContent(49,1837.431);
   14->SetBinContent(50,10766.48);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,1);
   15->SetBinContent(11,316.7538);
   15->SetBinContent(12,699.1763);
   15->SetBinContent(13,231.771);
   15->SetBinContent(14,146.7882);
   15->SetBinContent(15,142.9254);
   15->SetBinContent(16,127.4739);
   15->SetBinContent(17,65.6684);
   15->SetBinContent(18,73.39409);
   15->SetBinContent(19,57.9427);
   15->SetBinContent(20,73.39409);
   15->SetBinContent(21,50.21701);
   15->SetBinContent(22,69.53124);
   15->SetBinContent(23,61.80555);
   15->SetBinContent(24,34.76562);
   15->SetBinContent(25,38.62847);
   15->SetBinContent(26,30.90277);
   15->SetBinContent(27,54.07985);
   15->SetBinContent(28,23.17708);
   15->SetBinContent(29,19.31424);
   15->SetBinContent(30,23.17708);
   15->SetBinContent(31,42.49131);
   15->SetBinContent(32,19.31424);
   15->SetBinContent(33,15.45139);
   15->SetBinContent(34,30.90277);
   15->SetBinContent(35,15.45139);
   15->SetBinContent(36,15.45139);
   15->SetBinContent(37,7.725694);
   15->SetBinContent(38,19.31424);
   15->SetBinContent(39,11.58854);
   15->SetBinContent(42,7.725694);
   15->SetBinContent(43,19.31424);
   15->SetBinContent(44,42.49131);
   15->SetBinContent(45,19.31424);
   15->SetBinContent(46,23.17708);
   15->SetBinContent(47,42.49131);
   15->SetBinContent(48,54.07985);
   15->SetBinContent(49,119.7482);
   15->SetBinContent(50,529.2108);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,1);
   16->SetBinContent(11,8851.634);
   16->SetBinContent(12,18436.75);
   16->SetBinContent(13,5103.884);
   16->SetBinContent(14,3266.993);
   16->SetBinContent(15,2638.259);
   16->SetBinContent(16,2354.712);
   16->SetBinContent(17,2071.165);
   16->SetBinContent(18,1818.434);
   16->SetBinContent(19,1584.195);
   16->SetBinContent(20,1596.523);
   16->SetBinContent(21,1263.657);
   16->SetBinContent(22,1146.538);
   16->SetBinContent(23,906.1345);
   16->SetBinContent(24,949.2838);
   16->SetBinContent(25,684.2239);
   16->SetBinContent(26,702.7164);
   16->SetBinContent(27,634.9104);
   16->SetBinContent(28,456.149);
   16->SetBinContent(29,474.6416);
   16->SetBinContent(30,357.5221);
   16->SetBinContent(31,265.0593);
   16->SetBinContent(32,203.4176);
   16->SetBinContent(33,234.2384);
   16->SetBinContent(34,147.9401);
   16->SetBinContent(35,184.9251);
   16->SetBinContent(36,117.1192);
   16->SetBinContent(37,209.5818);
   16->SetBinContent(38,73.97004);
   16->SetBinContent(39,129.4476);
   16->SetBinContent(40,110.9551);
   16->SetBinContent(41,92.46255);
   16->SetBinContent(42,110.9551);
   16->SetBinContent(43,92.46255);
   16->SetBinContent(44,104.7909);
   16->SetBinContent(45,117.1192);
   16->SetBinContent(46,135.6117);
   16->SetBinContent(47,141.7759);
   16->SetBinContent(48,166.4326);
   16->SetBinContent(49,240.4026);
   16->SetBinContent(50,252.731);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,1);
   17->SetBinContent(11,3935.439);
   17->SetBinContent(12,7168.129);
   17->SetBinContent(13,2389.369);
   17->SetBinContent(14,1358.66);
   17->SetBinContent(15,1428.936);
   17->SetBinContent(16,1124.408);
   17->SetBinContent(17,1288.385);
   17->SetBinContent(18,819.881);
   17->SetBinContent(19,1007.282);
   17->SetBinContent(20,843.3062);
   17->SetBinContent(21,960.4321);
   17->SetBinContent(22,890.1566);
   17->SetBinContent(23,749.6055);
   17->SetBinContent(24,632.4797);
   17->SetBinContent(25,538.779);
   17->SetBinContent(26,491.9286);
   17->SetBinContent(27,562.2042);
   17->SetBinContent(28,234.2517);
   17->SetBinContent(29,351.3776);
   17->SetBinContent(30,585.6293);
   17->SetBinContent(31,304.5273);
   17->SetBinContent(32,398.2279);
   17->SetBinContent(33,163.9762);
   17->SetBinContent(34,538.779);
   17->SetBinContent(35,234.2517);
   17->SetBinContent(36,445.0783);
   17->SetBinContent(37,351.3776);
   17->SetBinContent(38,234.2517);
   17->SetBinContent(39,327.9524);
   17->SetBinContent(40,351.3776);
   17->SetBinContent(41,374.8028);
   17->SetBinContent(42,351.3776);
   17->SetBinContent(43,468.5034);
   17->SetBinContent(44,585.6293);
   17->SetBinContent(45,585.6293);
   17->SetBinContent(46,655.9048);
   17->SetBinContent(47,937.0069);
   17->SetBinContent(48,1452.361);
   17->SetBinContent(49,2436.22);
   17->SetBinContent(50,10494.47);
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
