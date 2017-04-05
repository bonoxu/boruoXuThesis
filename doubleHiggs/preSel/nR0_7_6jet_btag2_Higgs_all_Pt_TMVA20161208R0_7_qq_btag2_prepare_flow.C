{
//=========Macro generated from canvas: canvas1/
//=========  (Wed Apr  5 14:07:43 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-134.9206,-3.755646,658.7302,7.799667);
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
   THStack_stack_5->SetMinimum(0.02110135);
   THStack_stack_5->SetMaximum(7503125);
   THStack_stack_5->SetDirectory(0);
   THStack_stack_5->SetStats(0);
   THStack_stack_5->SetLineWidth(2);
   THStack_stack_5->SetMarkerSize(1.2);
   THStack_stack_5->GetXaxis()->SetTitle("P_{T,HH} / GeV");
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
   0->SetBinContent(1,0.4836726);
   0->SetBinContent(2,1.424667);
   0->SetBinContent(3,2.164287);
   0->SetBinContent(4,2.836188);
   0->SetBinContent(5,3.214485);
   0->SetBinContent(6,3.163669);
   0->SetBinContent(7,3.013103);
   0->SetBinContent(8,3.03757);
   0->SetBinContent(9,2.695032);
   0->SetBinContent(10,2.474829);
   0->SetBinContent(11,2.017485);
   0->SetBinContent(12,1.848108);
   0->SetBinContent(13,1.543231);
   0->SetBinContent(14,1.394556);
   0->SetBinContent(15,1.257173);
   0->SetBinContent(16,0.9692326);
   0->SetBinContent(17,0.8431375);
   0->SetBinContent(18,0.7716209);
   0->SetBinContent(19,0.671874);
   0->SetBinContent(20,0.5194306);
   0->SetBinContent(21,0.5231947);
   0->SetBinContent(22,0.4441508);
   0->SetBinContent(23,0.4046291);
   0->SetBinContent(24,0.3406416);
   0->SetBinContent(25,0.2465422);
   0->SetBinContent(26,0.2296042);
   0->SetBinContent(27,0.2333682);
   0->SetBinContent(28,0.2145482);
   0->SetBinContent(29,0.1467961);
   0->SetBinContent(30,0.1712621);
   0->SetBinContent(31,0.1449141);
   0->SetBinContent(32,0.1486781);
   0->SetBinContent(33,0.1373861);
   0->SetBinContent(34,0.09410006);
   0->SetBinContent(35,0.09221806);
   0->SetBinContent(36,0.07716204);
   0->SetBinContent(37,0.08280805);
   0->SetBinContent(38,0.09221806);
   0->SetBinContent(39,0.08092605);
   0->SetBinContent(40,0.07151604);
   0->SetBinContent(41,0.05457802);
   0->SetBinContent(42,0.07151604);
   0->SetBinContent(43,0.07528004);
   0->SetBinContent(44,0.05457802);
   0->SetBinContent(45,0.04516801);
   0->SetBinContent(46,0.05269602);
   0->SetBinContent(47,0.03952201);
   0->SetBinContent(48,0.06022403);
   0->SetBinContent(49,0.04516801);
   0->SetBinContent(50,0.030112);
   0->SetBinContent(51,0.3293496);
   0->SetEntries(21880);
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
   1->SetBinContent(1,1.477362);
   1->SetBinContent(2,4.458538);
   1->SetBinContent(3,6.805487);
   1->SetBinContent(4,8.309187);
   1->SetBinContent(5,9.47766);
   1->SetBinContent(6,9.838927);
   1->SetBinContent(7,9.498358);
   1->SetBinContent(8,9.00726);
   1->SetBinContent(9,7.904619);
   1->SetBinContent(10,7.304237);
   1->SetBinContent(11,6.389548);
   1->SetBinContent(12,5.425925);
   1->SetBinContent(13,4.641099);
   1->SetBinContent(14,3.927792);
   1->SetBinContent(15,3.349995);
   1->SetBinContent(16,2.943466);
   1->SetBinContent(17,2.350612);
   1->SetBinContent(18,1.987372);
   1->SetBinContent(19,1.797295);
   1->SetBinContent(20,1.528175);
   1->SetBinContent(21,1.328687);
   1->SetBinContent(22,1.163075);
   1->SetBinContent(23,0.9918168);
   1->SetBinContent(24,0.8563116);
   1->SetBinContent(25,0.8544296);
   1->SetBinContent(26,0.669992);
   1->SetBinContent(27,0.5928293);
   1->SetBinContent(28,0.558953);
   1->SetBinContent(29,0.5194306);
   1->SetBinContent(30,0.5100206);
   1->SetBinContent(31,0.4403869);
   1->SetBinContent(32,0.3801633);
   1->SetBinContent(33,0.3274677);
   1->SetBinContent(34,0.3237037);
   1->SetBinContent(35,0.2917099);
   1->SetBinContent(36,0.2634801);
   1->SetBinContent(37,0.2615981);
   1->SetBinContent(38,0.2258402);
   1->SetBinContent(39,0.1994922);
   1->SetBinContent(40,0.2239582);
   1->SetBinContent(41,0.1769081);
   1->SetBinContent(42,0.1693801);
   1->SetBinContent(43,0.1580881);
   1->SetBinContent(44,0.1562061);
   1->SetBinContent(45,0.1505601);
   1->SetBinContent(46,0.1260941);
   1->SetBinContent(47,0.1129201);
   1->SetBinContent(48,0.1072741);
   1->SetBinContent(49,0.1223301);
   1->SetBinContent(50,0.08845405);
   1->SetBinContent(51,0.9485304);
   1->SetEntries(64677);
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
   2->SetBinContent(1,0.8920699);
   2->SetBinContent(2,2.52941);
   2->SetBinContent(3,4.151759);
   2->SetBinContent(4,5.038217);
   2->SetBinContent(5,5.60284);
   2->SetBinContent(6,5.753406);
   2->SetBinContent(7,5.456038);
   2->SetBinContent(8,5.232071);
   2->SetBinContent(9,4.750259);
   2->SetBinContent(10,4.07083);
   2->SetBinContent(11,3.491151);
   2->SetBinContent(12,3.116617);
   2->SetBinContent(13,2.702561);
   2->SetBinContent(14,2.264037);
   2->SetBinContent(15,1.91774);
   2->SetBinContent(16,1.697551);
   2->SetBinContent(17,1.334333);
   2->SetBinContent(18,1.102853);
   2->SetBinContent(19,1.020046);
   2->SetBinContent(20,0.8694857);
   2->SetBinContent(21,0.7320985);
   2->SetBinContent(22,0.6492898);
   2->SetBinContent(23,0.5890653);
   2->SetBinContent(24,0.5307227);
   2->SetBinContent(25,0.4799086);
   2->SetBinContent(26,0.3801633);
   2->SetBinContent(27,0.3820453);
   2->SetBinContent(28,0.3086478);
   2->SetBinContent(29,0.3067658);
   2->SetBinContent(30,0.2503062);
   2->SetBinContent(31,0.2371322);
   2->SetBinContent(32,0.2578341);
   2->SetBinContent(33,0.1976102);
   2->SetBinContent(34,0.1769081);
   2->SetBinContent(35,0.1882001);
   2->SetBinContent(36,0.1825541);
   2->SetBinContent(37,0.1505601);
   2->SetBinContent(38,0.1524421);
   2->SetBinContent(39,0.1185661);
   2->SetBinContent(40,0.1336221);
   2->SetBinContent(41,0.1355041);
   2->SetBinContent(42,0.1035101);
   2->SetBinContent(43,0.1148021);
   2->SetBinContent(44,0.08845405);
   2->SetBinContent(45,0.07716204);
   2->SetBinContent(46,0.09033605);
   2->SetBinContent(47,0.08657205);
   2->SetBinContent(48,0.05269602);
   2->SetBinContent(49,0.07339804);
   2->SetBinContent(50,0.07528004);
   2->SetBinContent(51,0.5495429);
   2->SetEntries(37643);
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
   3->SetBinContent(1,4.964664);
   3->SetBinContent(2,13.83566);
   3->SetBinContent(3,22.60351);
   3->SetBinContent(4,29.75958);
   3->SetBinContent(5,35.81629);
   3->SetBinContent(6,39.20996);
   3->SetBinContent(7,39.54454);
   3->SetBinContent(8,41.99591);
   3->SetBinContent(9,40.10447);
   3->SetBinContent(10,39.23044);
   3->SetBinContent(11,36.00748);
   3->SetBinContent(12,33.92485);
   3->SetBinContent(13,31.11841);
   3->SetBinContent(14,27.60866);
   3->SetBinContent(15,24.17402);
   3->SetBinContent(16,23.06784);
   3->SetBinContent(17,19.79025);
   3->SetBinContent(18,16.49218);
   3->SetBinContent(19,14.72347);
   3->SetBinContent(20,13.48054);
   3->SetBinContent(21,11.86201);
   3->SetBinContent(22,9.806398);
   3->SetBinContent(23,8.761521);
   3->SetBinContent(24,7.750808);
   3->SetBinContent(25,6.316763);
   3->SetBinContent(26,5.647542);
   3->SetBinContent(27,4.978322);
   3->SetBinContent(28,4.035949);
   3->SetBinContent(29,3.660354);
   3->SetBinContent(30,3.127691);
   3->SetBinContent(31,2.820385);
   3->SetBinContent(32,2.533566);
   3->SetBinContent(33,2.130653);
   3->SetBinContent(34,1.73457);
   3->SetBinContent(35,1.509212);
   3->SetBinContent(36,1.420435);
   3->SetBinContent(37,1.249709);
   3->SetBinContent(38,1.147274);
   3->SetBinContent(39,0.9902064);
   3->SetBinContent(40,0.8536259);
   3->SetBinContent(41,0.6419262);
   3->SetBinContent(42,0.4848587);
   3->SetBinContent(43,0.5531489);
   3->SetBinContent(44,0.5736359);
   3->SetBinContent(45,0.4780297);
   3->SetBinContent(46,0.4370557);
   3->SetBinContent(47,0.4507137);
   3->SetBinContent(48,0.3346208);
   3->SetBinContent(49,0.2185279);
   3->SetBinContent(50,0.2868179);
   3->SetBinContent(51,1.884808);
   3->SetEntries(93155);
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
   4->SetBinContent(1,3.987807);
   4->SetBinContent(2,11.59546);
   4->SetBinContent(3,18.71367);
   4->SetBinContent(4,24.46336);
   4->SetBinContent(5,28.58757);
   4->SetBinContent(6,30.91269);
   4->SetBinContent(7,32.60657);
   4->SetBinContent(8,33.64814);
   4->SetBinContent(9,32.88537);
   4->SetBinContent(10,30.41821);
   4->SetBinContent(11,28.97158);
   4->SetBinContent(12,26.39395);
   4->SetBinContent(13,24.11091);
   4->SetBinContent(14,22.35917);
   4->SetBinContent(15,19.90254);
   4->SetBinContent(16,17.94564);
   4->SetBinContent(17,15.85721);
   4->SetBinContent(18,13.21598);
   4->SetBinContent(19,11.34817);
   4->SetBinContent(20,10.26432);
   4->SetBinContent(21,8.943703);
   4->SetBinContent(22,7.612598);
   4->SetBinContent(23,7.270637);
   4->SetBinContent(24,6.17636);
   4->SetBinContent(25,5.013691);
   4->SetBinContent(26,4.303464);
   4->SetBinContent(27,3.687933);
   4->SetBinContent(28,3.477495);
   4->SetBinContent(29,2.698876);
   4->SetBinContent(30,2.719919);
   4->SetBinContent(31,2.246434);
   4->SetBinContent(32,1.741384);
   4->SetBinContent(33,1.72034);
   4->SetBinContent(34,1.430988);
   4->SetBinContent(35,1.204767);
   4->SetBinContent(36,1.004852);
   4->SetBinContent(37,0.9206755);
   4->SetBinContent(38,0.8733265);
   4->SetBinContent(39,0.7418014);
   4->SetBinContent(40,0.6365813);
   4->SetBinContent(41,0.5050562);
   4->SetBinContent(42,0.4419242);
   4->SetBinContent(43,0.5839713);
   4->SetBinContent(44,0.4366632);
   4->SetBinContent(45,0.3998362);
   4->SetBinContent(46,0.3472261);
   4->SetBinContent(47,0.2893551);
   4->SetBinContent(48,0.26305);
   4->SetBinContent(49,0.236745);
   4->SetBinContent(50,0.184135);
   4->SetBinContent(51,1.751906);
   4->SetEntries(96571);
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
   5->SetBinContent(1,8.631125);
   5->SetBinContent(2,25.38509);
   5->SetBinContent(3,41.85439);
   5->SetBinContent(4,53.83432);
   5->SetBinContent(5,63.54476);
   5->SetBinContent(6,71.98778);
   5->SetBinContent(7,73.77306);
   5->SetBinContent(8,76.04185);
   5->SetBinContent(9,72.74404);
   5->SetBinContent(10,71.8514);
   5->SetBinContent(11,68.5536);
   5->SetBinContent(12,60.60558);
   5->SetBinContent(13,57.6044);
   5->SetBinContent(14,50.64711);
   5->SetBinContent(15,46.18254);
   5->SetBinContent(16,40.62664);
   5->SetBinContent(17,35.87683);
   5->SetBinContent(18,32.06955);
   5->SetBinContent(19,27.82821);
   5->SetBinContent(20,24.12013);
   5->SetBinContent(21,21.85064);
   5->SetBinContent(22,18.56422);
   5->SetBinContent(23,16.766);
   5->SetBinContent(24,13.52937);
   5->SetBinContent(25,12.64893);
   5->SetBinContent(26,11.24766);
   5->SetBinContent(27,8.965942);
   5->SetBinContent(28,7.874682);
   5->SetBinContent(29,7.056209);
   5->SetBinContent(30,5.741692);
   5->SetBinContent(31,4.948021);
   5->SetBinContent(32,4.675197);
   5->SetBinContent(33,3.819521);
   5->SetBinContent(34,3.509494);
   5->SetBinContent(35,3.001048);
   5->SetBinContent(36,2.889438);
   5->SetBinContent(37,2.492603);
   5->SetBinContent(38,2.380993);
   5->SetBinContent(39,1.748539);
   5->SetBinContent(40,1.574925);
   5->SetBinContent(41,1.339307);
   5->SetBinContent(42,1.351708);
   5->SetBinContent(43,1.103688);
   5->SetBinContent(44,0.9424751);
   5->SetBinContent(45,0.8928712);
   5->SetBinContent(46,0.7192574);
   5->SetBinContent(47,0.8804702);
   5->SetBinContent(48,0.5332426);
   5->SetBinContent(49,0.6200495);
   5->SetBinContent(50,0.5456436);
   5->SetBinContent(51,3.261472);
   5->SetEntries(94446);
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
   6->SetBinContent(1,1212.123);
   6->SetBinContent(2,3235.749);
   6->SetBinContent(3,4419.513);
   6->SetBinContent(4,4719.935);
   6->SetBinContent(5,4453.714);
   6->SetBinContent(6,3832.238);
   6->SetBinContent(7,3191.256);
   6->SetBinContent(8,2565.459);
   6->SetBinContent(9,2037.458);
   6->SetBinContent(10,1590.927);
   6->SetBinContent(11,1244.924);
   6->SetBinContent(12,980.9991);
   6->SetBinContent(13,748.6603);
   6->SetBinContent(14,587.162);
   6->SetBinContent(15,466.285);
   6->SetBinContent(16,372.2865);
   6->SetBinContent(17,284.6659);
   6->SetBinContent(18,224.683);
   6->SetBinContent(19,182.0116);
   6->SetBinContent(20,146.4015);
   6->SetBinContent(21,115.4217);
   6->SetBinContent(22,97.04534);
   6->SetBinContent(23,77.07434);
   6->SetBinContent(24,62.95037);
   6->SetBinContent(25,49.50981);
   6->SetBinContent(26,44.95369);
   6->SetBinContent(27,34.09493);
   6->SetBinContent(28,28.47571);
   6->SetBinContent(29,22.70463);
   6->SetBinContent(30,19.74315);
   6->SetBinContent(31,15.5667);
   6->SetBinContent(32,12.75709);
   6->SetBinContent(33,11.39026);
   6->SetBinContent(34,9.491874);
   6->SetBinContent(35,7.213818);
   6->SetBinContent(36,7.137883);
   6->SetBinContent(37,4.707966);
   6->SetBinContent(38,4.404227);
   6->SetBinContent(39,2.809594);
   6->SetBinContent(40,2.733659);
   6->SetBinContent(41,2.353985);
   6->SetBinContent(42,2.12618);
   6->SetBinContent(43,1.97431);
   6->SetBinContent(44,1.06309);
   6->SetBinContent(45,0.987155);
   6->SetBinContent(46,0.91122);
   6->SetBinContent(47,0.683415);
   6->SetBinContent(48,0.75935);
   6->SetBinContent(49,0.75935);
   6->SetBinContent(50,0.75935);
   6->SetBinContent(51,2.050245);
   6->SetEntries(489104);
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
   7->SetBinContent(1,103.9888);
   7->SetBinContent(2,298.907);
   7->SetBinContent(3,479.2292);
   7->SetBinContent(4,597.4421);
   7->SetBinContent(5,691.5827);
   7->SetBinContent(6,759.9421);
   7->SetBinContent(7,791.3386);
   7->SetBinContent(8,797.4421);
   7->SetBinContent(9,768.8776);
   7->SetBinContent(10,743.6823);
   7->SetBinContent(11,713.8483);
   7->SetBinContent(12,669.3171);
   7->SetBinContent(13,627.0807);
   7->SetBinContent(14,574.1022);
   7->SetBinContent(15,531.0847);
   7->SetBinContent(16,483.9167);
   7->SetBinContent(17,440.4109);
   7->SetBinContent(18,406.0359);
   7->SetBinContent(19,368.7312);
   7->SetBinContent(20,336.6999);
   7->SetBinContent(21,294.5612);
   7->SetBinContent(22,258.2331);
   7->SetBinContent(23,236.9441);
   7->SetBinContent(24,211.2116);
   7->SetBinContent(25,190.2644);
   7->SetBinContent(26,173.5652);
   7->SetBinContent(27,152.9597);
   7->SetBinContent(28,139.4831);
   7->SetBinContent(29,122.8824);
   7->SetBinContent(30,109.9938);
   7->SetBinContent(31,97.15396);
   7->SetBinContent(32,85.82761);
   7->SetBinContent(33,79.6274);
   7->SetBinContent(34,68.05695);
   7->SetBinContent(35,62.63787);
   7->SetBinContent(36,56.48649);
   7->SetBinContent(37,48.43111);
   7->SetBinContent(38,44.1349);
   7->SetBinContent(39,37.73942);
   7->SetBinContent(40,34.61491);
   7->SetBinContent(41,34.95665);
   7->SetBinContent(42,26.7546);
   7->SetBinContent(43,26.99871);
   7->SetBinContent(44,22.21412);
   7->SetBinContent(45,21.18885);
   7->SetBinContent(46,19.13831);
   7->SetBinContent(47,17.3807);
   7->SetBinContent(48,16.01367);
   7->SetBinContent(49,13.86549);
   7->SetBinContent(50,12.05906);
   7->SetBinContent(51,95.83581);
   7->SetEntries(286629);
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
   8->SetBinContent(1,835.1322);
   8->SetBinContent(2,952.2216);
   8->SetBinContent(3,446.875);
   8->SetBinContent(4,224.0948);
   8->SetBinContent(5,137.2134);
   8->SetBinContent(6,90.54601);
   8->SetBinContent(7,56.05943);
   8->SetBinContent(8,29.93765);
   8->SetBinContent(9,16.5831);
   8->SetBinContent(10,10.71297);
   8->SetBinContent(11,7.4844);
   8->SetBinContent(12,5.870119);
   8->SetBinContent(13,4.549343);
   8->SetBinContent(14,3.375319);
   8->SetBinContent(15,3.668826);
   8->SetBinContent(16,2.054542);
   8->SetBinContent(17,1.761036);
   8->SetBinContent(18,2.201295);
   8->SetBinContent(19,2.348048);
   8->SetBinContent(20,1.614283);
   8->SetBinContent(21,1.320777);
   8->SetBinContent(22,0.880518);
   8->SetBinContent(23,0.880518);
   8->SetBinContent(24,1.320777);
   8->SetBinContent(25,1.46753);
   8->SetBinContent(26,1.174024);
   8->SetBinContent(27,0.880518);
   8->SetBinContent(28,0.293506);
   8->SetBinContent(29,0.880518);
   8->SetBinContent(30,0.880518);
   8->SetBinContent(32,0.146753);
   8->SetBinContent(34,0.440259);
   8->SetBinContent(35,0.146753);
   8->SetBinContent(36,0.440259);
   8->SetBinContent(38,0.440259);
   8->SetBinContent(39,0.146753);
   8->SetBinContent(40,0.146753);
   8->SetBinContent(41,0.146753);
   8->SetBinContent(42,0.146753);
   8->SetBinContent(48,0.146753);
   8->SetBinContent(49,0.146753);
   8->SetEntries(19399);
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
   9->SetBinContent(1,411.4572);
   9->SetBinContent(2,1193.37);
   9->SetBinContent(3,1794.766);
   9->SetBinContent(4,2147.651);
   9->SetBinContent(5,2293.844);
   9->SetBinContent(6,2291.616);
   9->SetBinContent(7,2213.978);
   9->SetBinContent(8,2106.176);
   9->SetBinContent(9,1993.061);
   9->SetBinContent(10,1870.519);
   9->SetBinContent(11,1745.407);
   9->SetBinContent(12,1625.436);
   9->SetBinContent(13,1492.269);
   9->SetBinContent(14,1406.918);
   9->SetBinContent(15,1307.342);
   9->SetBinContent(16,1218.564);
   9->SetBinContent(17,1151.552);
   9->SetBinContent(18,1028.153);
   9->SetBinContent(19,971.4056);
   9->SetBinContent(20,922.3715);
   9->SetBinContent(21,816.7597);
   9->SetBinContent(22,767.2113);
   9->SetBinContent(23,709.9478);
   9->SetBinContent(24,662.9711);
   9->SetBinContent(25,613.0798);
   9->SetBinContent(26,566.6174);
   9->SetBinContent(27,529.0704);
   9->SetBinContent(28,489.2945);
   9->SetBinContent(29,443.518);
   9->SetBinContent(30,415.2291);
   9->SetBinContent(31,383.8542);
   9->SetBinContent(32,355.3938);
   9->SetBinContent(33,312.189);
   9->SetBinContent(34,290.4151);
   9->SetBinContent(35,275.3277);
   9->SetBinContent(36,242.411);
   9->SetBinContent(37,225.782);
   9->SetBinContent(38,208.2959);
   9->SetBinContent(39,186.3525);
   9->SetBinContent(40,179.6667);
   9->SetBinContent(41,158.2376);
   9->SetBinContent(42,146.5802);
   9->SetBinContent(43,127.7226);
   9->SetBinContent(44,113.3216);
   9->SetBinContent(45,98.92068);
   9->SetBinContent(46,94.63467);
   9->SetBinContent(47,83.66251);
   9->SetBinContent(48,67.37569);
   9->SetBinContent(49,74.06186);
   9->SetBinContent(50,54.17481);
   9->SetBinContent(51,331.3911);
   9->SetEntries(240389);
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
   10->SetBinContent(1,1517.809);
   10->SetBinContent(2,4390.975);
   10->SetBinContent(3,6766.011);
   10->SetBinContent(4,8417.408);
   10->SetBinContent(5,9336.93);
   10->SetBinContent(6,9558.272);
   10->SetBinContent(7,9334.518);
   10->SetBinContent(8,8783.16);
   10->SetBinContent(9,8098.465);
   10->SetBinContent(10,7284.845);
   10->SetBinContent(11,6559.598);
   10->SetBinContent(12,5773.441);
   10->SetBinContent(13,5100.16);
   10->SetBinContent(14,4471.096);
   10->SetBinContent(15,3924.168);
   10->SetBinContent(16,3398.531);
   10->SetBinContent(17,2988.729);
   10->SetBinContent(18,2605.194);
   10->SetBinContent(19,2245.09);
   10->SetBinContent(20,1970.437);
   10->SetBinContent(21,1705.373);
   10->SetBinContent(22,1470.603);
   10->SetBinContent(23,1281.903);
   10->SetBinContent(24,1129.491);
   10->SetBinContent(25,984.9056);
   10->SetBinContent(26,844.3589);
   10->SetBinContent(27,724.8279);
   10->SetBinContent(28,651.6199);
   10->SetBinContent(29,561.1196);
   10->SetBinContent(30,484.7693);
   10->SetBinContent(31,424.9065);
   10->SetBinContent(32,367.7562);
   10->SetBinContent(33,314.5168);
   10->SetBinContent(34,270.7394);
   10->SetBinContent(35,246.2644);
   10->SetBinContent(36,206.461);
   10->SetBinContent(37,180.6614);
   10->SetBinContent(38,158.0157);
   10->SetBinContent(39,136.127);
   10->SetBinContent(40,115.1214);
   10->SetBinContent(41,99.98228);
   10->SetBinContent(42,85.15852);
   10->SetBinContent(43,71.59635);
   10->SetBinContent(44,62.7021);
   10->SetBinContent(45,51.78928);
   10->SetBinContent(46,46.17518);
   10->SetBinContent(47,35.83009);
   10->SetBinContent(48,31.85605);
   10->SetBinContent(49,27.8819);
   10->SetBinContent(50,22.89845);
   10->SetBinContent(51,89.13255);
   10->SetEntries(1988955);
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
   11->SetBinContent(1,100226.6);
   11->SetBinContent(2,99503.45);
   11->SetBinContent(3,37279.2);
   11->SetBinContent(4,13143.98);
   11->SetBinContent(5,5977.492);
   11->SetBinContent(6,3438.681);
   11->SetBinContent(7,1992.507);
   11->SetBinContent(8,1108.734);
   11->SetBinContent(9,385.6464);
   11->SetBinContent(10,96.41158);
   11->SetBinContent(11,16.0686);
   11->SetBinContent(12,16.0686);
   11->SetBinContent(13,48.2058);
   11->SetBinContent(14,16.0686);
   11->SetBinContent(15,32.1372);
   11->SetBinContent(20,32.1372);
   11->SetBinContent(21,32.1372);
   11->SetBinContent(22,16.0686);
   11->SetBinContent(27,16.0686);
   11->SetEntries(16390);
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
   12->SetBinContent(1,144357.9);
   12->SetBinContent(2,188529.4);
   12->SetBinContent(3,139365.4);
   12->SetBinContent(4,91666.71);
   12->SetBinContent(5,48973.27);
   12->SetBinContent(6,20039.43);
   12->SetBinContent(7,6679.61);
   12->SetBinContent(8,2562.774);
   12->SetBinContent(9,1623.935);
   12->SetBinContent(10,907.119);
   12->SetBinContent(11,602.6307);
   12->SetBinContent(12,444.0433);
   12->SetBinContent(13,342.5477);
   12->SetBinContent(14,323.5173);
   12->SetBinContent(15,209.3347);
   12->SetBinContent(16,101.4956);
   12->SetBinContent(17,114.1826);
   12->SetBinContent(18,95.15217);
   12->SetBinContent(19,114.1826);
   12->SetBinContent(20,57.09131);
   12->SetBinContent(21,38.06087);
   12->SetBinContent(22,25.37391);
   12->SetBinContent(23,12.68696);
   12->SetBinContent(24,19.03043);
   12->SetBinContent(25,19.03043);
   12->SetBinContent(26,19.03043);
   12->SetBinContent(27,19.03043);
   12->SetBinContent(28,6.343478);
   12->SetBinContent(32,6.343478);
   12->SetBinContent(33,6.343478);
   12->SetBinContent(42,6.343478);
   12->SetEntries(102036);
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
   13->SetBinContent(1,2457268);
   13->SetBinContent(2,1790791);
   13->SetBinContent(3,548667.1);
   13->SetBinContent(4,152136.4);
   13->SetBinContent(5,58743.04);
   13->SetBinContent(6,38748.23);
   13->SetBinContent(7,21982.22);
   13->SetBinContent(8,7824.175);
   13->SetBinContent(9,2111.284);
   13->SetBinContent(10,620.9659);
   13->SetBinContent(11,496.7728);
   13->SetBinContent(12,372.5796);
   13->SetBinContent(13,248.3864);
   13->SetBinContent(15,248.3864);
   13->SetBinContent(16,248.3864);
   13->SetBinContent(17,124.1932);
   13->SetBinContent(18,124.1932);
   13->SetBinContent(21,124.1932);
   13->SetBinContent(22,124.1932);
   13->SetBinContent(23,124.1932);
   13->SetBinContent(26,124.1932);
   13->SetBinContent(33,124.1932);
   13->SetEntries(40908);
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
   14->SetBinContent(1,1361.959);
   14->SetBinContent(2,3324.325);
   14->SetBinContent(3,5125.467);
   14->SetBinContent(4,6644.512);
   14->SetBinContent(5,6713.01);
   14->SetBinContent(6,7490.665);
   14->SetBinContent(7,7651.836);
   14->SetBinContent(8,7611.543);
   14->SetBinContent(9,7530.958);
   14->SetBinContent(10,7011.178);
   14->SetBinContent(11,7031.325);
   14->SetBinContent(12,6721.069);
   14->SetBinContent(13,6322.168);
   14->SetBinContent(14,6015.942);
   14->SetBinContent(15,5197.995);
   14->SetBinContent(16,4823.27);
   14->SetBinContent(17,4533.161);
   14->SetBinContent(18,3880.401);
   14->SetBinContent(19,3723.249);
   14->SetBinContent(20,3513.713);
   14->SetBinContent(21,3134.936);
   14->SetBinContent(22,2715.864);
   14->SetBinContent(23,2744.071);
   14->SetBinContent(24,2333.058);
   14->SetBinContent(25,2163.817);
   14->SetBinContent(26,2046.96);
   14->SetBinContent(27,1752.813);
   14->SetBinContent(28,1648.048);
   14->SetBinContent(29,1498.959);
   14->SetBinContent(30,1313.606);
   14->SetBinContent(31,1200.782);
   14->SetBinContent(32,1144.37);
   14->SetBinContent(33,946.9277);
   14->SetBinContent(34,874.3971);
   14->SetBinContent(35,874.3971);
   14->SetBinContent(36,765.6011);
   14->SetBinContent(37,721.2769);
   14->SetBinContent(38,511.7439);
   14->SetBinContent(39,568.1566);
   14->SetBinContent(40,406.9774);
   14->SetBinContent(41,471.4491);
   14->SetBinContent(42,390.8595);
   14->SetBinContent(43,358.6237);
   14->SetBinContent(44,447.2722);
   14->SetBinContent(45,282.0636);
   14->SetBinContent(46,265.9456);
   14->SetBinContent(47,241.7688);
   14->SetBinContent(48,221.6214);
   14->SetBinContent(49,181.3266);
   14->SetBinContent(50,169.2381);
   14->SetBinContent(51,1644.018);
   14->SetEntries(36300);
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
   15->SetBinContent(1,15247.35);
   15->SetBinContent(2,16808.12);
   15->SetBinContent(3,7748.779);
   15->SetBinContent(4,3955.516);
   15->SetBinContent(5,2163.18);
   15->SetBinContent(6,1467.877);
   15->SetBinContent(7,1019.793);
   15->SetBinContent(8,552.3879);
   15->SetBinContent(9,258.811);
   15->SetBinContent(10,142.9254);
   15->SetBinContent(11,115.8854);
   15->SetBinContent(12,100.434);
   15->SetBinContent(13,100.434);
   15->SetBinContent(14,61.80555);
   15->SetBinContent(15,69.53124);
   15->SetBinContent(16,42.49131);
   15->SetBinContent(17,15.45139);
   15->SetBinContent(18,19.31424);
   15->SetBinContent(19,30.90277);
   15->SetBinContent(20,15.45139);
   15->SetBinContent(21,15.45139);
   15->SetBinContent(22,11.58854);
   15->SetBinContent(23,23.17708);
   15->SetBinContent(24,15.45139);
   15->SetBinContent(25,7.725694);
   15->SetBinContent(26,11.58854);
   15->SetBinContent(27,3.862847);
   15->SetBinContent(28,15.45139);
   15->SetBinContent(29,15.45139);
   15->SetBinContent(31,11.58854);
   15->SetBinContent(32,3.862847);
   15->SetBinContent(34,7.725694);
   15->SetBinContent(36,3.862847);
   15->SetBinContent(37,3.862847);
   15->SetBinContent(38,11.58854);
   15->SetBinContent(39,7.725694);
   15->SetBinContent(42,3.862847);
   15->SetBinContent(44,3.862847);
   15->SetBinContent(46,3.862847);
   15->SetBinContent(50,3.862847);
   15->SetBinContent(51,7.725694);
   15->SetEntries(12977);
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
   16->SetBinContent(1,7119.532);
   16->SetBinContent(2,19219.59);
   16->SetBinContent(3,25845.96);
   16->SetBinContent(4,27485.6);
   16->SetBinContent(5,25513.1);
   16->SetBinContent(6,21981.09);
   16->SetBinContent(7,18683.31);
   16->SetBinContent(8,15792.37);
   16->SetBinContent(9,13936.99);
   16->SetBinContent(10,11039.88);
   16->SetBinContent(11,10072.12);
   16->SetBinContent(12,8247.556);
   16->SetBinContent(13,7489.376);
   16->SetBinContent(14,5942.196);
   16->SetBinContent(15,5091.556);
   16->SetBinContent(16,4407.345);
   16->SetBinContent(17,3889.563);
   16->SetBinContent(18,2847.837);
   16->SetBinContent(19,2767.704);
   16->SetBinContent(20,2157.462);
   16->SetBinContent(21,2083.493);
   16->SetBinContent(22,1719.807);
   16->SetBinContent(23,1528.717);
   16->SetBinContent(24,1257.493);
   16->SetBinContent(25,1257.493);
   16->SetBinContent(26,1097.224);
   16->SetBinContent(27,881.4778);
   16->SetBinContent(28,752.0299);
   16->SetBinContent(29,721.209);
   16->SetBinContent(30,591.7611);
   16->SetBinContent(31,499.2983);
   16->SetBinContent(32,437.6565);
   16->SetBinContent(33,400.6714);
   16->SetBinContent(34,406.8356);
   16->SetBinContent(35,388.343);
   16->SetBinContent(36,283.5519);
   16->SetBinContent(37,252.731);
   16->SetBinContent(38,258.8951);
   16->SetBinContent(39,258.8951);
   16->SetBinContent(40,147.9401);
   16->SetBinContent(41,135.6117);
   16->SetBinContent(42,172.5968);
   16->SetBinContent(43,141.7759);
   16->SetBinContent(44,135.6117);
   16->SetBinContent(45,141.7759);
   16->SetBinContent(46,92.46255);
   16->SetBinContent(47,110.9551);
   16->SetBinContent(48,98.62672);
   16->SetBinContent(49,86.29838);
   16->SetBinContent(50,61.6417);
   16->SetBinContent(51,887.642);
   16->SetEntries(41664);
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
   17->SetBinContent(1,276843.3);
   17->SetBinContent(2,302202.7);
   17->SetBinContent(3,169795.6);
   17->SetBinContent(4,97094.08);
   17->SetBinContent(5,55659.13);
   17->SetBinContent(6,30148.46);
   17->SetBinContent(7,21293.51);
   17->SetBinContent(8,13750.52);
   17->SetBinContent(9,10400.77);
   17->SetBinContent(10,7378.957);
   17->SetBinContent(11,5247.255);
   17->SetBinContent(12,4029.14);
   17->SetBinContent(13,3841.738);
   17->SetBinContent(14,2576.772);
   17->SetBinContent(15,2459.645);
   17->SetBinContent(16,1991.14);
   17->SetBinContent(17,1475.786);
   17->SetBinContent(18,1358.66);
   17->SetBinContent(19,1358.66);
   17->SetBinContent(20,843.3062);
   17->SetBinContent(21,913.5817);
   17->SetBinContent(22,398.2279);
   17->SetBinContent(23,491.9286);
   17->SetBinContent(24,445.0783);
   17->SetBinContent(25,585.6293);
   17->SetBinContent(26,327.9524);
   17->SetBinContent(27,398.2279);
   17->SetBinContent(28,257.6769);
   17->SetBinContent(29,210.8266);
   17->SetBinContent(30,163.9762);
   17->SetBinContent(31,93.70071);
   17->SetBinContent(32,140.5511);
   17->SetBinContent(33,140.5511);
   17->SetBinContent(34,117.1259);
   17->SetBinContent(35,93.70071);
   17->SetBinContent(38,46.85035);
   17->SetBinContent(39,70.27553);
   17->SetBinContent(41,23.42518);
   17->SetBinContent(44,23.42518);
   17->SetBinContent(49,23.42518);
   17->SetEntries(43319);
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
