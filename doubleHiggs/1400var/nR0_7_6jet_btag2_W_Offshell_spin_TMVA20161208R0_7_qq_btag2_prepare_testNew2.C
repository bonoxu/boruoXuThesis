{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:07:11 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-2.972285,1.31746,4.955556);
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
   
   TH1F *THStack_stack_33 = new TH1F("THStack_stack_33","",50,0,1);
   THStack_stack_33->SetMinimum(0.02849224);
   THStack_stack_33->SetMaximum(20956.97);
   THStack_stack_33->SetDirectory(0);
   THStack_stack_33->SetStats(0);
   THStack_stack_33->SetLineWidth(2);
   THStack_stack_33->SetMarkerSize(1.2);
   THStack_stack_33->GetXaxis()->SetTitle("cos*(#theta_{W*}) sub-jets");
   THStack_stack_33->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_33->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_33->GetXaxis()->SetLabelColor(ci);
   THStack_stack_33->GetXaxis()->SetLabelFont(42);
   THStack_stack_33->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_33->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_33->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_33->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_33->GetXaxis()->SetTitleColor(ci);
   THStack_stack_33->GetXaxis()->SetTitleFont(42);
   THStack_stack_33->GetYaxis()->SetTitle("Number of events");
   THStack_stack_33->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_33->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_33->GetYaxis()->SetLabelColor(ci);
   THStack_stack_33->GetYaxis()->SetLabelFont(42);
   THStack_stack_33->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_33->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_33->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_33->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_33->GetYaxis()->SetTitleColor(ci);
   THStack_stack_33->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_33->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_33->GetZaxis()->SetLabelColor(ci);
   THStack_stack_33->GetZaxis()->SetLabelFont(42);
   THStack_stack_33->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_33->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_33->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_33->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_33->GetZaxis()->SetTitleColor(ci);
   THStack_stack_33->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_33);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,0.5100206);
   0->SetBinContent(2,0.415921);
   0->SetBinContent(3,0.4309769);
   0->SetBinContent(4,0.4573247);
   0->SetBinContent(5,0.4422688);
   0->SetBinContent(6,0.4968465);
   0->SetBinContent(7,0.4479148);
   0->SetBinContent(8,0.4366229);
   0->SetBinContent(9,0.427213);
   0->SetBinContent(10,0.4497968);
   0->SetBinContent(11,0.3989832);
   0->SetBinContent(12,0.4027471);
   0->SetBinContent(13,0.421567);
   0->SetBinContent(14,0.4497968);
   0->SetBinContent(15,0.4083931);
   0->SetBinContent(16,0.4065111);
   0->SetBinContent(17,0.3688714);
   0->SetBinContent(18,0.3406416);
   0->SetBinContent(19,0.4046291);
   0->SetBinContent(20,0.3444055);
   0->SetBinContent(21,0.3763993);
   0->SetBinContent(22,0.414039);
   0->SetBinContent(23,0.3763993);
   0->SetBinContent(24,0.3971012);
   0->SetBinContent(25,0.3349956);
   0->SetBinContent(26,0.3444055);
   0->SetBinContent(27,0.3858092);
   0->SetBinContent(28,0.3218217);
   0->SetBinContent(29,0.3011198);
   0->SetBinContent(30,0.3124118);
   0->SetBinContent(31,0.3237037);
   0->SetBinContent(32,0.3293496);
   0->SetBinContent(33,0.3312316);
   0->SetBinContent(34,0.2597161);
   0->SetBinContent(35,0.2879459);
   0->SetBinContent(36,0.271008);
   0->SetBinContent(37,0.2484242);
   0->SetBinContent(38,0.276654);
   0->SetBinContent(39,0.2427782);
   0->SetBinContent(40,0.2427782);
   0->SetBinContent(41,0.2427782);
   0->SetBinContent(42,0.1919641);
   0->SetBinContent(43,0.1882001);
   0->SetBinContent(44,0.1863181);
   0->SetBinContent(45,0.2032562);
   0->SetBinContent(46,0.2032562);
   0->SetBinContent(47,0.1750261);
   0->SetBinContent(48,0.1392681);
   0->SetBinContent(49,0.1467961);
   0->SetBinContent(50,0.1637341);
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
   1->SetBinContent(1,0.2314854);
   1->SetBinContent(2,0.2390133);
   1->SetBinContent(3,0.2343083);
   1->SetBinContent(4,0.2597153);
   1->SetBinContent(5,0.2625383);
   1->SetBinContent(6,0.2512462);
   1->SetBinContent(7,0.2277214);
   1->SetBinContent(8,0.2728894);
   1->SetBinContent(9,0.2644204);
   1->SetBinContent(10,0.2352493);
   1->SetBinContent(11,0.2427773);
   1->SetBinContent(12,0.2296034);
   1->SetBinContent(13,0.2136065);
   1->SetBinContent(14,0.2258394);
   1->SetBinContent(15,0.2098425);
   1->SetBinContent(16,0.2098425);
   1->SetBinContent(17,0.2117245);
   1->SetBinContent(18,0.2164295);
   1->SetBinContent(19,0.2352493);
   1->SetBinContent(20,0.2060785);
   1->SetBinContent(21,0.2013736);
   1->SetBinContent(22,0.2192524);
   1->SetBinContent(23,0.2183114);
   1->SetBinContent(24,0.2277214);
   1->SetBinContent(25,0.2201934);
   1->SetBinContent(26,0.1957276);
   1->SetBinContent(27,0.2098425);
   1->SetBinContent(28,0.1957276);
   1->SetBinContent(29,0.1787897);
   1->SetBinContent(30,0.1985506);
   1->SetBinContent(31,0.1881997);
   1->SetBinContent(32,0.1994916);
   1->SetBinContent(33,0.2154885);
   1->SetBinContent(34,0.1891406);
   1->SetBinContent(35,0.1740848);
   1->SetBinContent(36,0.1910226);
   1->SetBinContent(37,0.2107835);
   1->SetBinContent(38,0.2004326);
   1->SetBinContent(39,0.1957276);
   1->SetBinContent(40,0.2079605);
   1->SetBinContent(41,0.1900816);
   1->SetBinContent(42,0.1947866);
   1->SetBinContent(43,0.1938456);
   1->SetBinContent(44,0.1684388);
   1->SetBinContent(45,0.1750257);
   1->SetBinContent(46,0.1731438);
   1->SetBinContent(47,0.14115);
   1->SetBinContent(48,0.1656158);
   1->SetBinContent(49,0.138327);
   1->SetBinContent(50,0.1496189);
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
   2->SetBinContent(1,0.5881245);
   2->SetBinContent(2,0.5900064);
   2->SetBinContent(3,0.6210587);
   2->SetBinContent(4,0.6238816);
   2->SetBinContent(5,0.5862425);
   2->SetBinContent(6,0.5918884);
   2->SetBinContent(7,0.5862425);
   2->SetBinContent(8,0.6229407);
   2->SetBinContent(9,0.5824786);
   2->SetBinContent(10,0.5768327);
   2->SetBinContent(11,0.6041211);
   2->SetBinContent(12,0.5514263);
   2->SetBinContent(13,0.6003572);
   2->SetBinContent(14,0.6163538);
   2->SetBinContent(15,0.6003572);
   2->SetBinContent(16,0.5467214);
   2->SetBinContent(17,0.5815376);
   2->SetBinContent(18,0.5401345);
   2->SetBinContent(19,0.5279018);
   2->SetBinContent(20,0.5448394);
   2->SetBinContent(21,0.563659);
   2->SetBinContent(22,0.5551902);
   2->SetBinContent(23,0.5598951);
   2->SetBinContent(24,0.5749508);
   2->SetBinContent(25,0.5279018);
   2->SetBinContent(26,0.4959084);
   2->SetBinContent(27,0.5156691);
   2->SetBinContent(28,0.5147281);
   2->SetBinContent(29,0.5288428);
   2->SetBinContent(30,0.4827343);
   2->SetBinContent(31,0.4827343);
   2->SetBinContent(32,0.4733242);
   2->SetBinContent(33,0.5354297);
   2->SetBinContent(34,0.5373116);
   2->SetBinContent(35,0.4893214);
   2->SetBinContent(36,0.4883803);
   2->SetBinContent(37,0.4676782);
   2->SetBinContent(38,0.5053183);
   2->SetBinContent(39,0.4827343);
   2->SetBinContent(40,0.4563861);
   2->SetBinContent(41,0.4629731);
   2->SetBinContent(42,0.4347429);
   2->SetBinContent(43,0.4394479);
   2->SetBinContent(44,0.4432119);
   2->SetBinContent(45,0.4272148);
   2->SetBinContent(46,0.4130997);
   2->SetBinContent(47,0.4112177);
   2->SetBinContent(48,0.3811054);
   2->SetBinContent(49,0.4008666);
   2->SetBinContent(50,0.4592091);
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
   3->SetBinContent(1,3.0594);
   3->SetBinContent(2,2.977452);
   3->SetBinContent(3,2.861359);
   3->SetBinContent(4,2.881846);
   3->SetBinContent(5,2.902333);
   3->SetBinContent(6,2.752094);
   3->SetBinContent(7,3.182323);
   3->SetBinContent(8,3.155007);
   3->SetBinContent(9,2.915991);
   3->SetBinContent(10,2.820385);
   3->SetBinContent(11,2.786239);
   3->SetBinContent(12,2.902333);
   3->SetBinContent(13,2.881846);
   3->SetBinContent(14,2.636001);
   3->SetBinContent(15,2.820385);
   3->SetBinContent(16,2.745265);
   3->SetBinContent(17,2.547224);
   3->SetBinContent(18,2.485762);
   3->SetBinContent(19,2.608685);
   3->SetBinContent(20,2.492591);
   3->SetBinContent(21,2.308208);
   3->SetBinContent(22,2.560882);
   3->SetBinContent(23,2.315037);
   3->SetBinContent(24,2.29455);
   3->SetBinContent(25,2.57454);
   3->SetBinContent(26,2.157969);
   3->SetBinContent(27,2.410643);
   3->SetBinContent(28,2.287721);
   3->SetBinContent(29,2.308208);
   3->SetBinContent(30,2.376498);
   3->SetBinContent(31,1.884808);
   3->SetBinContent(32,1.973586);
   3->SetBinContent(33,2.21943);
   3->SetBinContent(34,2.007731);
   3->SetBinContent(35,2.055534);
   3->SetBinContent(36,2.096508);
   3->SetBinContent(37,1.782373);
   3->SetBinContent(38,1.714083);
   3->SetBinContent(39,1.884808);
   3->SetBinContent(40,1.877979);
   3->SetBinContent(41,1.891637);
   3->SetBinContent(42,2.048705);
   3->SetBinContent(43,1.73457);
   3->SetBinContent(44,1.625306);
   3->SetBinContent(45,1.550186);
   3->SetBinContent(46,1.481896);
   3->SetBinContent(47,1.181419);
   3->SetBinContent(48,1.317999);
   3->SetBinContent(49,1.126787);
   3->SetBinContent(50,1.072155);
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
   4->SetBinContent(1,4.413944);
   4->SetBinContent(2,4.708557);
   4->SetBinContent(3,4.540206);
   4->SetBinContent(4,4.408683);
   4->SetBinContent(5,4.540206);
   4->SetBinContent(6,4.250854);
   4->SetBinContent(7,4.119331);
   4->SetBinContent(8,4.403422);
   4->SetBinContent(9,4.240333);
   4->SetBinContent(10,4.229811);
   4->SetBinContent(11,4.477075);
   4->SetBinContent(12,4.229811);
   4->SetBinContent(13,4.066721);
   4->SetBinContent(14,4.045678);
   4->SetBinContent(15,3.89311);
   4->SetBinContent(16,3.751065);
   4->SetBinContent(17,3.877327);
   4->SetBinContent(18,3.751065);
   4->SetBinContent(19,3.682672);
   4->SetBinContent(20,3.582714);
   4->SetBinContent(21,3.561671);
   4->SetBinContent(22,3.493278);
   4->SetBinContent(23,3.39332);
   4->SetBinContent(24,3.524844);
   4->SetBinContent(25,3.388059);
   4->SetBinContent(26,3.356494);
   4->SetBinContent(27,3.403842);
   4->SetBinContent(28,3.309145);
   4->SetBinContent(29,3.372277);
   4->SetBinContent(30,3.151317);
   4->SetBinContent(31,3.288101);
   4->SetBinContent(32,3.061881);
   4->SetBinContent(33,3.193404);
   4->SetBinContent(34,3.156578);
   4->SetBinContent(35,2.840921);
   4->SetBinContent(36,2.972445);
   4->SetBinContent(37,3.00401);
   4->SetBinContent(38,3.130273);
   4->SetBinContent(39,2.83566);
   4->SetBinContent(40,2.804095);
   4->SetBinContent(41,2.756746);
   4->SetBinContent(42,2.762007);
   4->SetBinContent(43,2.83566);
   4->SetBinContent(44,2.646266);
   4->SetBinContent(45,2.688354);
   4->SetBinContent(46,2.477916);
   4->SetBinContent(47,2.383219);
   4->SetBinContent(48,2.409524);
   4->SetBinContent(49,2.183303);
   4->SetBinContent(50,2.146477);
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
   5->SetBinContent(1,12.23971);
   5->SetBinContent(2,11.71888);
   5->SetBinContent(3,12.74813);
   5->SetBinContent(4,11.74368);
   5->SetBinContent(5,11.63208);
   5->SetBinContent(6,11.65688);
   5->SetBinContent(7,11.94209);
   5->SetBinContent(8,12.1157);
   5->SetBinContent(9,10.92524);
   5->SetBinContent(10,12.31411);
   5->SetBinContent(11,10.92524);
   5->SetBinContent(12,11.01205);
   5->SetBinContent(13,11.65688);
   5->SetBinContent(14,11.11125);
   5->SetBinContent(15,10.87564);
   5->SetBinContent(16,11.39647);
   5->SetBinContent(17,10.26801);
   5->SetBinContent(18,10.23081);
   5->SetBinContent(19,9.660378);
   5->SetBinContent(20,10.67723);
   5->SetBinContent(21,10.1936);
   5->SetBinContent(22,10.50362);
   5->SetBinContent(23,10.70203);
   5->SetBinContent(24,10.1192);
   5->SetBinContent(25,10.0448);
   5->SetBinContent(26,9.90839);
   5->SetBinContent(27,9.573573);
   5->SetBinContent(28,10.34241);
   5->SetBinContent(29,10.57802);
   5->SetBinContent(30,10.1316);
   5->SetBinContent(31,9.895989);
   5->SetBinContent(32,8.91634);
   5->SetBinContent(33,9.759583);
   5->SetBinContent(34,10.0572);
   5->SetBinContent(35,9.796784);
   5->SetBinContent(36,10.1812);
   5->SetBinContent(37,10.144);
   5->SetBinContent(38,10.0448);
   5->SetBinContent(39,9.412365);
   5->SetBinContent(40,8.767532);
   5->SetBinContent(41,8.978343);
   5->SetBinContent(42,9.499169);
   5->SetBinContent(43,9.275958);
   5->SetBinContent(44,9.040346);
   5->SetBinContent(45,8.990744);
   5->SetBinContent(46,8.643526);
   5->SetBinContent(47,8.792334);
   5->SetBinContent(48,8.556722);
   5->SetBinContent(49,8.507119);
   5->SetBinContent(50,9.238756);
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
   6->SetBinContent(1,308.3337);
   6->SetBinContent(2,300.744);
   6->SetBinContent(3,302.5655);
   6->SetBinContent(4,304.1594);
   6->SetBinContent(5,290.8773);
   6->SetBinContent(6,289.0558);
   6->SetBinContent(7,288.904);
   6->SetBinContent(8,285.3369);
   6->SetBinContent(9,285.3369);
   6->SetBinContent(10,276.7605);
   6->SetBinContent(11,285.1851);
   6->SetBinContent(12,280.024);
   6->SetBinContent(13,279.4928);
   6->SetBinContent(14,271.903);
   6->SetBinContent(15,270.5369);
   6->SetBinContent(16,267.9564);
   6->SetBinContent(17,265.2241);
   6->SetBinContent(18,259.8354);
   6->SetBinContent(19,253.9909);
   6->SetBinContent(20,263.1749);
   6->SetBinContent(21,245.4887);
   6->SetBinContent(22,248.0697);
   6->SetBinContent(23,240.3266);
   6->SetBinContent(24,244.1982);
   6->SetBinContent(25,246.2478);
   6->SetBinContent(26,242.4522);
   6->SetBinContent(27,236.7588);
   6->SetBinContent(28,243.515);
   6->SetBinContent(29,227.9529);
   6->SetBinContent(30,227.6493);
   6->SetBinContent(31,234.1777);
   6->SetBinContent(32,231.1412);
   6->SetBinContent(33,233.7982);
   6->SetBinContent(34,225.5237);
   6->SetBinContent(35,241.6172);
   6->SetBinContent(36,228.0288);
   6->SetBinContent(37,231.4449);
   6->SetBinContent(38,224.2332);
   6->SetBinContent(39,229.623);
   6->SetBinContent(40,225.5237);
   6->SetBinContent(41,221.1967);
   6->SetBinContent(42,229.9266);
   6->SetBinContent(43,225.8274);
   6->SetBinContent(44,221.804);
   6->SetBinContent(45,212.239);
   6->SetBinContent(46,220.8171);
   6->SetBinContent(47,213.0741);
   6->SetBinContent(48,211.1003);
   6->SetBinContent(49,208.3675);
   6->SetBinContent(50,202.8259);
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
   7->SetBinContent(1,124.4446);
   7->SetBinContent(2,131.0359);
   7->SetBinContent(3,124.0052);
   7->SetBinContent(4,122.7847);
   7->SetBinContent(5,122.5894);
   7->SetBinContent(6,123.6147);
   7->SetBinContent(7,122.1989);
   7->SetBinContent(8,119.6602);
   7->SetBinContent(9,121.5154);
   7->SetBinContent(10,124.7375);
   7->SetBinContent(11,120.8807);
   7->SetBinContent(12,119.8067);
   7->SetBinContent(13,119.9531);
   7->SetBinContent(14,118.5373);
   7->SetBinContent(15,122.4918);
   7->SetBinContent(16,118.3421);
   7->SetBinContent(17,115.8034);
   7->SetBinContent(18,117.6097);
   7->SetBinContent(19,115.6081);
   7->SetBinContent(20,111.1166);
   7->SetBinContent(21,112.8253);
   7->SetBinContent(22,114.3388);
   7->SetBinContent(23,110.3355);
   7->SetBinContent(24,112.9718);
   7->SetBinContent(25,110.7749);
   7->SetBinContent(26,110.8725);
   7->SetBinContent(27,107.1133);
   7->SetBinContent(28,108.9197);
   7->SetBinContent(29,111.1654);
   7->SetBinContent(30,109.2126);
   7->SetBinContent(31,112.2395);
   7->SetBinContent(32,107.2598);
   7->SetBinContent(33,109.5544);
   7->SetBinContent(34,113.997);
   7->SetBinContent(35,111.2631);
   7->SetBinContent(36,110.7261);
   7->SetBinContent(37,110.2379);
   7->SetBinContent(38,112.7765);
   7->SetBinContent(39,111.3607);
   7->SetBinContent(40,114.8758);
   7->SetBinContent(41,110.6284);
   7->SetBinContent(42,110.8237);
   7->SetBinContent(43,112.7765);
   7->SetBinContent(44,109.4079);
   7->SetBinContent(45,113.6065);
   7->SetBinContent(46,110.3355);
   7->SetBinContent(47,111.8489);
   7->SetBinContent(48,107.4063);
   7->SetBinContent(49,108.2362);
   7->SetBinContent(50,109.0662);
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
   8->SetBinContent(1,6.163624);
   8->SetBinContent(2,6.603883);
   8->SetBinContent(3,5.723366);
   8->SetBinContent(4,6.016871);
   8->SetBinContent(5,6.163624);
   8->SetBinContent(6,5.723366);
   8->SetBinContent(7,4.696096);
   8->SetBinContent(8,5.42986);
   8->SetBinContent(9,5.136354);
   8->SetBinContent(10,7.190894);
   8->SetBinContent(11,6.603883);
   8->SetBinContent(12,5.283107);
   8->SetBinContent(13,7.044141);
   8->SetBinContent(14,5.576613);
   8->SetBinContent(15,4.842849);
   8->SetBinContent(16,4.989602);
   8->SetBinContent(17,3.375319);
   8->SetBinContent(18,6.163624);
   8->SetBinContent(19,5.576613);
   8->SetBinContent(20,4.989602);
   8->SetBinContent(21,5.576613);
   8->SetBinContent(22,7.190894);
   8->SetBinContent(23,4.989602);
   8->SetBinContent(24,6.750636);
   8->SetBinContent(25,6.310377);
   8->SetBinContent(26,6.163624);
   8->SetBinContent(27,5.576613);
   8->SetBinContent(28,2.348048);
   8->SetBinContent(29,4.549343);
   8->SetBinContent(30,6.163624);
   8->SetBinContent(31,5.283107);
   8->SetBinContent(32,5.723366);
   8->SetBinContent(33,4.255837);
   8->SetBinContent(34,4.989602);
   8->SetBinContent(35,4.255837);
   8->SetBinContent(36,4.989602);
   8->SetBinContent(37,7.4844);
   8->SetBinContent(38,6.750636);
   8->SetBinContent(39,5.136354);
   8->SetBinContent(40,6.897388);
   8->SetBinContent(41,6.016871);
   8->SetBinContent(42,6.45713);
   8->SetBinContent(43,5.576613);
   8->SetBinContent(44,5.723366);
   8->SetBinContent(45,6.310377);
   8->SetBinContent(46,7.631153);
   8->SetBinContent(47,5.283107);
   8->SetBinContent(48,6.310377);
   8->SetBinContent(49,7.337647);
   8->SetBinContent(50,8.364918);
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
   9->SetBinContent(1,296.0729);
   9->SetBinContent(2,293.1583);
   9->SetBinContent(3,298.6446);
   9->SetBinContent(4,300.1877);
   9->SetBinContent(5,302.0736);
   9->SetBinContent(6,294.0155);
   9->SetBinContent(7,297.1016);
   9->SetBinContent(8,303.4452);
   9->SetBinContent(9,298.4732);
   9->SetBinContent(10,301.7307);
   9->SetBinContent(11,297.7874);
   9->SetBinContent(12,286.4718);
   9->SetBinContent(13,304.131);
   9->SetBinContent(14,302.0736);
   9->SetBinContent(15,294.8728);
   9->SetBinContent(16,299.8448);
   9->SetBinContent(17,301.2163);
   9->SetBinContent(18,301.3878);
   9->SetBinContent(19,293.8441);
   9->SetBinContent(20,310.8174);
   9->SetBinContent(21,301.9021);
   9->SetBinContent(22,300.0162);
   9->SetBinContent(23,313.732);
   9->SetBinContent(24,309.6173);
   9->SetBinContent(25,315.1036);
   9->SetBinContent(26,308.0742);
   9->SetBinContent(27,318.0182);
   9->SetBinContent(28,313.9035);
   9->SetBinContent(29,301.7307);
   9->SetBinContent(30,308.0742);
   9->SetBinContent(31,325.0476);
   9->SetBinContent(32,325.0476);
   9->SetBinContent(33,331.3911);
   9->SetBinContent(34,330.7054);
   9->SetBinContent(35,336.5346);
   9->SetBinContent(36,334.1343);
   9->SetBinContent(37,349.7361);
   9->SetBinContent(38,348.0216);
   9->SetBinContent(39,352.6507);
   9->SetBinContent(40,360.1944);
   9->SetBinContent(41,360.3658);
   9->SetBinContent(42,361.9088);
   9->SetBinContent(43,368.4239);
   9->SetBinContent(44,383.5113);
   9->SetBinContent(45,367.9095);
   9->SetBinContent(46,376.4819);
   9->SetBinContent(47,365.8521);
   9->SetBinContent(48,369.7954);
   9->SetBinContent(49,381.4539);
   9->SetBinContent(50,405.628);
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
   10->SetBinContent(1,1243.136);
   10->SetBinContent(2,1234.869);
   10->SetBinContent(3,1237.772);
   10->SetBinContent(4,1224.077);
   10->SetBinContent(5,1218.712);
   10->SetBinContent(6,1213.979);
   10->SetBinContent(7,1195.866);
   10->SetBinContent(8,1183.434);
   10->SetBinContent(9,1175.734);
   10->SetBinContent(10,1173.715);
   10->SetBinContent(11,1157.369);
   10->SetBinContent(12,1160.651);
   10->SetBinContent(13,1157.685);
   10->SetBinContent(14,1137.805);
   10->SetBinContent(15,1105.303);
   10->SetBinContent(16,1111.235);
   10->SetBinContent(17,1083.909);
   10->SetBinContent(18,1088.011);
   10->SetBinContent(19,1072.044);
   10->SetBinContent(20,1058.728);
   10->SetBinContent(21,1051.028);
   10->SetBinContent(22,1037.712);
   10->SetBinContent(23,1044.906);
   10->SetBinContent(24,1023.954);
   10->SetBinContent(25,1024.522);
   10->SetBinContent(26,1008.302);
   10->SetBinContent(27,1017.453);
   10->SetBinContent(28,987.3497);
   10->SetBinContent(29,992.0199);
   10->SetBinContent(30,987.6022);
   10->SetBinContent(31,964.1882);
   10->SetBinContent(32,977.4414);
   10->SetBinContent(33,970.3099);
   10->SetBinContent(34,973.9703);
   10->SetBinContent(35,955.479);
   10->SetBinContent(36,961.79);
   10->SetBinContent(37,963.9358);
   10->SetBinContent(38,956.4257);
   10->SetBinContent(39,939.5752);
   10->SetBinContent(40,947.7795);
   10->SetBinContent(41,930.4873);
   10->SetBinContent(42,941.2161);
   10->SetBinContent(43,927.5211);
   10->SetBinContent(44,911.9329);
   10->SetBinContent(45,883.4701);
   10->SetBinContent(46,858.3522);
   10->SetBinContent(47,842.6377);
   10->SetBinContent(48,795.2418);
   10->SetBinContent(49,752.2006);
   10->SetBinContent(50,682.9685);
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
   11->SetBinContent(1,248.7757);
   11->SetBinContent(2,204.8741);
   11->SetBinContent(3,292.6772);
   11->SetBinContent(4,380.4803);
   11->SetBinContent(5,219.5079);
   11->SetBinContent(6,278.0434);
   11->SetBinContent(7,219.5079);
   11->SetBinContent(8,234.1418);
   11->SetBinContent(9,263.4095);
   11->SetBinContent(10,190.2402);
   11->SetBinContent(11,248.7757);
   11->SetBinContent(12,234.1418);
   11->SetBinContent(13,336.5788);
   11->SetBinContent(14,146.3386);
   11->SetBinContent(15,248.7757);
   11->SetBinContent(16,175.6063);
   11->SetBinContent(17,219.5079);
   11->SetBinContent(18,219.5079);
   11->SetBinContent(19,336.5788);
   11->SetBinContent(20,190.2402);
   11->SetBinContent(21,234.1418);
   11->SetBinContent(22,307.3111);
   11->SetBinContent(23,219.5079);
   11->SetBinContent(24,263.4095);
   11->SetBinContent(25,292.6772);
   11->SetBinContent(26,146.3386);
   11->SetBinContent(27,190.2402);
   11->SetBinContent(28,190.2402);
   11->SetBinContent(29,175.6063);
   11->SetBinContent(30,175.6063);
   11->SetBinContent(31,131.7047);
   11->SetBinContent(32,292.6772);
   11->SetBinContent(33,131.7047);
   11->SetBinContent(34,204.8741);
   11->SetBinContent(35,204.8741);
   11->SetBinContent(36,263.4095);
   11->SetBinContent(37,175.6063);
   11->SetBinContent(38,292.6772);
   11->SetBinContent(39,146.3386);
   11->SetBinContent(40,190.2402);
   11->SetBinContent(41,146.3386);
   11->SetBinContent(42,234.1418);
   11->SetBinContent(43,336.5788);
   11->SetBinContent(44,248.7757);
   11->SetBinContent(45,190.2402);
   11->SetBinContent(46,263.4095);
   11->SetBinContent(47,204.8741);
   11->SetBinContent(48,102.437);
   11->SetBinContent(49,190.2402);
   11->SetBinContent(50,175.6063);
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
   12->SetBinContent(1,1294.073);
   12->SetBinContent(2,1198.92);
   12->SetBinContent(3,1604.905);
   12->SetBinContent(4,1160.859);
   12->SetBinContent(5,1275.042);
   12->SetBinContent(6,1408.256);
   12->SetBinContent(7,1300.416);
   12->SetBinContent(8,1236.981);
   12->SetBinContent(9,1008.615);
   12->SetBinContent(10,1256.012);
   12->SetBinContent(11,1078.394);
   12->SetBinContent(12,1116.455);
   12->SetBinContent(13,1192.577);
   12->SetBinContent(14,932.493);
   12->SetBinContent(15,1167.203);
   12->SetBinContent(16,1103.768);
   12->SetBinContent(17,1110.111);
   12->SetBinContent(18,938.8365);
   12->SetBinContent(19,894.4319);
   12->SetBinContent(20,919.806);
   12->SetBinContent(21,964.2105);
   12->SetBinContent(22,1033.989);
   12->SetBinContent(23,1053.02);
   12->SetBinContent(24,894.4319);
   12->SetBinContent(25,900.7755);
   12->SetBinContent(26,907.119);
   12->SetBinContent(27,894.4319);
   12->SetBinContent(28,989.5845);
   12->SetBinContent(29,995.928);
   12->SetBinContent(30,1072.05);
   12->SetBinContent(31,830.9969);
   12->SetBinContent(32,1192.577);
   12->SetBinContent(33,1002.272);
   12->SetBinContent(34,938.8365);
   12->SetBinContent(35,1059.363);
   12->SetBinContent(36,1249.668);
   12->SetBinContent(37,1217.951);
   12->SetBinContent(38,1021.302);
   12->SetBinContent(39,1148.172);
   12->SetBinContent(40,1471.691);
   12->SetBinContent(41,1357.508);
   12->SetBinContent(42,1363.851);
   12->SetBinContent(43,1566.844);
   12->SetBinContent(44,1389.225);
   12->SetBinContent(45,1700.057);
   12->SetBinContent(46,1661.996);
   12->SetBinContent(47,1877.675);
   12->SetBinContent(48,2251.942);
   12->SetBinContent(49,2270.973);
   12->SetBinContent(50,2918.01);
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
   13->SetBinContent(1,2039.362);
   13->SetBinContent(2,2773.532);
   13->SetBinContent(3,2773.532);
   13->SetBinContent(4,2039.362);
   13->SetBinContent(5,2284.085);
   13->SetBinContent(6,1876.213);
   13->SetBinContent(7,2691.958);
   13->SetBinContent(8,1223.617);
   13->SetBinContent(9,2120.936);
   13->SetBinContent(10,2284.085);
   13->SetBinContent(11,3018.255);
   13->SetBinContent(12,2284.085);
   13->SetBinContent(13,2039.362);
   13->SetBinContent(14,2528.809);
   13->SetBinContent(15,1549.915);
   13->SetBinContent(16,1631.49);
   13->SetBinContent(17,1386.766);
   13->SetBinContent(18,1305.192);
   13->SetBinContent(19,1631.49);
   13->SetBinContent(20,2120.936);
   13->SetBinContent(21,1549.915);
   13->SetBinContent(22,1713.064);
   13->SetBinContent(23,1386.766);
   13->SetBinContent(24,1957.787);
   13->SetBinContent(25,1060.468);
   13->SetBinContent(26,2039.362);
   13->SetBinContent(27,2120.936);
   13->SetBinContent(28,1631.49);
   13->SetBinContent(29,1631.49);
   13->SetBinContent(30,1713.064);
   13->SetBinContent(31,1223.617);
   13->SetBinContent(32,1223.617);
   13->SetBinContent(33,1386.766);
   13->SetBinContent(34,1794.638);
   13->SetBinContent(35,1549.915);
   13->SetBinContent(36,1713.064);
   13->SetBinContent(37,1549.915);
   13->SetBinContent(38,1549.915);
   13->SetBinContent(39,1549.915);
   13->SetBinContent(40,1876.213);
   13->SetBinContent(41,1468.341);
   13->SetBinContent(42,652.5959);
   13->SetBinContent(43,1223.617);
   13->SetBinContent(44,1713.064);
   13->SetBinContent(45,1223.617);
   13->SetBinContent(46,1713.064);
   13->SetBinContent(47,1142.043);
   13->SetBinContent(48,1549.915);
   13->SetBinContent(49,897.3193);
   13->SetBinContent(50,1060.468);
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
   14->SetBinContent(1,1402.253);
   14->SetBinContent(2,1406.283);
   14->SetBinContent(3,1382.106);
   14->SetBinContent(4,1430.459);
   14->SetBinContent(5,1285.4);
   14->SetBinContent(6,1462.695);
   14->SetBinContent(7,1374.047);
   14->SetBinContent(8,1261.224);
   14->SetBinContent(9,1249.135);
   14->SetBinContent(10,1297.488);
   14->SetBinContent(11,1325.694);
   14->SetBinContent(12,1265.253);
   14->SetBinContent(13,1091.988);
   14->SetBinContent(14,1128.253);
   14->SetBinContent(15,1091.988);
   14->SetBinContent(16,1120.194);
   14->SetBinContent(17,979.1636);
   14->SetBinContent(18,1063.782);
   14->SetBinContent(19,910.6624);
   14->SetBinContent(20,979.1636);
   14->SetBinContent(21,926.7803);
   14->SetBinContent(22,946.9277);
   14->SetBinContent(23,874.3971);
   14->SetBinContent(24,830.0728);
   14->SetBinContent(25,822.0139);
   14->SetBinContent(26,926.7803);
   14->SetBinContent(27,1011.399);
   14->SetBinContent(28,882.4561);
   14->SetBinContent(29,801.8665);
   14->SetBinContent(30,874.3971);
   14->SetBinContent(31,785.7485);
   14->SetBinContent(32,785.7485);
   14->SetBinContent(33,745.4537);
   14->SetBinContent(34,644.7167);
   14->SetBinContent(35,781.7191);
   14->SetBinContent(36,680.9821);
   14->SetBinContent(37,805.8959);
   14->SetBinContent(38,648.7462);
   14->SetBinContent(39,813.9549);
   14->SetBinContent(40,918.7214);
   14->SetBinContent(41,717.2474);
   14->SetBinContent(42,632.6283);
   14->SetBinContent(43,697.1);
   14->SetBinContent(44,737.3948);
   14->SetBinContent(45,668.8936);
   14->SetBinContent(46,620.5399);
   14->SetBinContent(47,592.3335);
   14->SetBinContent(48,487.567);
   14->SetBinContent(49,487.567);
   14->SetBinContent(50,419.0659);
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
   15->SetBinContent(1,100.434);
   15->SetBinContent(2,96.57117);
   15->SetBinContent(3,77.25694);
   15->SetBinContent(4,57.9427);
   15->SetBinContent(5,96.57117);
   15->SetBinContent(6,81.11978);
   15->SetBinContent(7,61.80555);
   15->SetBinContent(8,84.98263);
   15->SetBinContent(9,88.84547);
   15->SetBinContent(10,54.07985);
   15->SetBinContent(11,77.25694);
   15->SetBinContent(12,92.70832);
   15->SetBinContent(13,96.57117);
   15->SetBinContent(14,69.53124);
   15->SetBinContent(15,65.6684);
   15->SetBinContent(16,54.07985);
   15->SetBinContent(17,61.80555);
   15->SetBinContent(18,84.98263);
   15->SetBinContent(19,61.80555);
   15->SetBinContent(20,50.21701);
   15->SetBinContent(21,30.90277);
   15->SetBinContent(22,57.9427);
   15->SetBinContent(23,81.11978);
   15->SetBinContent(24,54.07985);
   15->SetBinContent(25,50.21701);
   15->SetBinContent(26,84.98263);
   15->SetBinContent(27,61.80555);
   15->SetBinContent(28,57.9427);
   15->SetBinContent(29,61.80555);
   15->SetBinContent(30,54.07985);
   15->SetBinContent(31,54.07985);
   15->SetBinContent(32,46.35416);
   15->SetBinContent(33,19.31424);
   15->SetBinContent(34,88.84547);
   15->SetBinContent(35,27.03993);
   15->SetBinContent(36,73.39409);
   15->SetBinContent(37,50.21701);
   15->SetBinContent(38,65.6684);
   15->SetBinContent(39,69.53124);
   15->SetBinContent(40,69.53124);
   15->SetBinContent(41,38.62847);
   15->SetBinContent(42,77.25694);
   15->SetBinContent(43,61.80555);
   15->SetBinContent(44,96.57117);
   15->SetBinContent(45,57.9427);
   15->SetBinContent(46,84.98263);
   15->SetBinContent(47,73.39409);
   15->SetBinContent(48,65.6684);
   15->SetBinContent(49,61.80555);
   15->SetBinContent(50,84.98263);
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
   16->SetBinContent(1,1399.269);
   16->SetBinContent(2,1639.672);
   16->SetBinContent(3,1306.807);
   16->SetBinContent(4,1325.299);
   16->SetBinContent(5,1596.523);
   16->SetBinContent(6,1436.254);
   16->SetBinContent(7,1362.284);
   16->SetBinContent(8,1362.284);
   16->SetBinContent(9,1380.777);
   16->SetBinContent(10,1380.777);
   16->SetBinContent(11,1460.911);
   16->SetBinContent(12,1195.851);
   16->SetBinContent(13,1275.986);
   16->SetBinContent(14,1282.15);
   16->SetBinContent(15,1202.015);
   16->SetBinContent(16,1189.687);
   16->SetBinContent(17,1208.18);
   16->SetBinContent(18,1208.18);
   16->SetBinContent(19,1288.314);
   16->SetBinContent(20,1029.418);
   16->SetBinContent(21,1060.239);
   16->SetBinContent(22,973.9406);
   16->SetBinContent(23,1134.209);
   16->SetBinContent(24,1202.015);
   16->SetBinContent(25,1109.553);
   16->SetBinContent(26,1103.388);
   16->SetBinContent(27,1078.732);
   16->SetBinContent(28,961.6122);
   16->SetBinContent(29,1004.761);
   16->SetBinContent(30,1165.03);
   16->SetBinContent(31,1054.075);
   16->SetBinContent(32,1029.418);
   16->SetBinContent(33,1047.911);
   16->SetBinContent(34,1004.761);
   16->SetBinContent(35,850.6569);
   16->SetBinContent(36,936.9554);
   16->SetBinContent(37,992.4331);
   16->SetBinContent(38,1128.045);
   16->SetBinContent(39,1066.403);
   16->SetBinContent(40,1004.761);
   16->SetBinContent(41,1060.239);
   16->SetBinContent(42,1202.015);
   16->SetBinContent(43,1177.359);
   16->SetBinContent(44,930.7913);
   16->SetBinContent(45,1220.508);
   16->SetBinContent(46,1091.06);
   16->SetBinContent(47,1121.881);
   16->SetBinContent(48,1263.657);
   16->SetBinContent(49,1047.911);
   16->SetBinContent(50,875.3136);
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
   17->SetBinContent(1,1218.109);
   17->SetBinContent(2,1077.558);
   17->SetBinContent(3,1030.708);
   17->SetBinContent(4,1054.133);
   17->SetBinContent(5,1100.983);
   17->SetBinContent(6,1077.558);
   17->SetBinContent(7,1030.708);
   17->SetBinContent(8,679.33);
   17->SetBinContent(9,843.3062);
   17->SetBinContent(10,726.1804);
   17->SetBinContent(11,1124.408);
   17->SetBinContent(12,890.1566);
   17->SetBinContent(13,983.8572);
   17->SetBinContent(14,1007.282);
   17->SetBinContent(15,749.6055);
   17->SetBinContent(16,749.6055);
   17->SetBinContent(17,890.1566);
   17->SetBinContent(18,702.7552);
   17->SetBinContent(19,983.8572);
   17->SetBinContent(20,1194.684);
   17->SetBinContent(21,937.0069);
   17->SetBinContent(22,913.5817);
   17->SetBinContent(23,679.33);
   17->SetBinContent(24,773.0307);
   17->SetBinContent(25,1054.133);
   17->SetBinContent(26,702.7552);
   17->SetBinContent(27,562.2042);
   17->SetBinContent(28,890.1566);
   17->SetBinContent(29,796.4559);
   17->SetBinContent(30,773.0307);
   17->SetBinContent(31,1100.983);
   17->SetBinContent(32,1100.983);
   17->SetBinContent(33,655.9048);
   17->SetBinContent(34,1288.385);
   17->SetBinContent(35,1100.983);
   17->SetBinContent(36,960.4321);
   17->SetBinContent(37,1171.259);
   17->SetBinContent(38,960.4321);
   17->SetBinContent(39,937.0069);
   17->SetBinContent(40,913.5817);
   17->SetBinContent(41,1124.408);
   17->SetBinContent(42,843.3062);
   17->SetBinContent(43,1054.133);
   17->SetBinContent(44,1194.684);
   17->SetBinContent(45,1147.833);
   17->SetBinContent(46,1382.085);
   17->SetBinContent(47,983.8572);
   17->SetBinContent(48,1194.684);
   17->SetBinContent(49,1171.259);
   17->SetBinContent(50,1569.487);
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
