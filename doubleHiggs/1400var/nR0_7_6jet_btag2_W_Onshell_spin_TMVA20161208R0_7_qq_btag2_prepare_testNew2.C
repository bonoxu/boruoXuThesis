{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:06:49 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.180014,1.31746,5.692909);
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
   
   TH1F *THStack_stack_32 = new TH1F("THStack_stack_32","",50,0,1);
   THStack_stack_32->SetMinimum(0.02612838);
   THStack_stack_32->SetMaximum(96177.93);
   THStack_stack_32->SetDirectory(0);
   THStack_stack_32->SetStats(0);
   THStack_stack_32->SetLineWidth(2);
   THStack_stack_32->SetMarkerSize(1.2);
   THStack_stack_32->GetXaxis()->SetTitle("cos*(#theta_{W}) sub-jets");
   THStack_stack_32->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_32->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_32->GetXaxis()->SetLabelColor(ci);
   THStack_stack_32->GetXaxis()->SetLabelFont(42);
   THStack_stack_32->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_32->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_32->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_32->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_32->GetXaxis()->SetTitleColor(ci);
   THStack_stack_32->GetXaxis()->SetTitleFont(42);
   THStack_stack_32->GetYaxis()->SetTitle("Number of events");
   THStack_stack_32->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_32->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_32->GetYaxis()->SetLabelColor(ci);
   THStack_stack_32->GetYaxis()->SetLabelFont(42);
   THStack_stack_32->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_32->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_32->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_32->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_32->GetYaxis()->SetTitleColor(ci);
   THStack_stack_32->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_32->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_32->GetZaxis()->SetLabelColor(ci);
   THStack_stack_32->GetZaxis()->SetLabelFont(42);
   THStack_stack_32->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_32->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_32->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_32->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_32->GetZaxis()->SetTitleColor(ci);
   THStack_stack_32->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_32);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,0.3312316);
   0->SetBinContent(2,0.3801633);
   0->SetBinContent(3,0.3538155);
   0->SetBinContent(4,0.2992378);
   0->SetBinContent(5,0.3801633);
   0->SetBinContent(6,0.3745173);
   0->SetBinContent(7,0.3500515);
   0->SetBinContent(8,0.3011198);
   0->SetBinContent(9,0.3745173);
   0->SetBinContent(10,0.3444055);
   0->SetBinContent(11,0.3180577);
   0->SetBinContent(12,0.3500515);
   0->SetBinContent(13,0.3387596);
   0->SetBinContent(14,0.3331136);
   0->SetBinContent(15,0.3444055);
   0->SetBinContent(16,0.3199397);
   0->SetBinContent(17,0.3255857);
   0->SetBinContent(18,0.3519335);
   0->SetBinContent(19,0.3538155);
   0->SetBinContent(20,0.3368776);
   0->SetBinContent(21,0.4083931);
   0->SetBinContent(22,0.3575794);
   0->SetBinContent(23,0.3030018);
   0->SetBinContent(24,0.3161757);
   0->SetBinContent(25,0.284182);
   0->SetBinContent(26,0.3368776);
   0->SetBinContent(27,0.3293496);
   0->SetBinContent(28,0.3331136);
   0->SetBinContent(29,0.3011198);
   0->SetBinContent(30,0.3556975);
   0->SetBinContent(31,0.3613434);
   0->SetBinContent(32,0.3444055);
   0->SetBinContent(33,0.3745173);
   0->SetBinContent(34,0.3763993);
   0->SetBinContent(35,0.3142937);
   0->SetBinContent(36,0.3312316);
   0->SetBinContent(37,0.419685);
   0->SetBinContent(38,0.3368776);
   0->SetBinContent(39,0.3030018);
   0->SetBinContent(40,0.3613434);
   0->SetBinContent(41,0.3651074);
   0->SetBinContent(42,0.280418);
   0->SetBinContent(43,0.3030018);
   0->SetBinContent(44,0.2973559);
   0->SetBinContent(45,0.3989832);
   0->SetBinContent(46,0.2898279);
   0->SetBinContent(47,0.2691261);
   0->SetBinContent(48,0.2446602);
   0->SetBinContent(49,0.2597161);
   0->SetBinContent(50,0.2615981);
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
   1->SetBinContent(1,0.1524419);
   1->SetBinContent(2,0.1562059);
   1->SetBinContent(3,0.1665568);
   1->SetBinContent(4,0.1806717);
   1->SetBinContent(5,0.1674978);
   1->SetBinContent(6,0.1562059);
   1->SetBinContent(7,0.1627928);
   1->SetBinContent(8,0.1486779);
   1->SetBinContent(9,0.1562059);
   1->SetBinContent(10,0.1599699);
   1->SetBinContent(11,0.1674978);
   1->SetBinContent(12,0.1834947);
   1->SetBinContent(13,0.1778487);
   1->SetBinContent(14,0.1543239);
   1->SetBinContent(15,0.1599699);
   1->SetBinContent(16,0.1731438);
   1->SetBinContent(17,0.1609108);
   1->SetBinContent(18,0.1712618);
   1->SetBinContent(19,0.1674978);
   1->SetBinContent(20,0.1750257);
   1->SetBinContent(21,0.1665568);
   1->SetBinContent(22,0.1891406);
   1->SetBinContent(23,0.1797307);
   1->SetBinContent(24,0.1806717);
   1->SetBinContent(25,0.1740848);
   1->SetBinContent(26,0.1515009);
   1->SetBinContent(27,0.1900816);
   1->SetBinContent(28,0.1618518);
   1->SetBinContent(29,0.1900816);
   1->SetBinContent(30,0.1966686);
   1->SetBinContent(31,0.1834947);
   1->SetBinContent(32,0.1590289);
   1->SetBinContent(33,0.1957276);
   1->SetBinContent(34,0.2220754);
   1->SetBinContent(35,0.2173705);
   1->SetBinContent(36,0.2183114);
   1->SetBinContent(37,0.2230164);
   1->SetBinContent(38,0.2220754);
   1->SetBinContent(39,0.2663024);
   1->SetBinContent(40,0.2220754);
   1->SetBinContent(41,0.2361903);
   1->SetBinContent(42,0.2380723);
   1->SetBinContent(43,0.2700664);
   1->SetBinContent(44,0.2700664);
   1->SetBinContent(45,0.2954736);
   1->SetBinContent(46,0.2964146);
   1->SetBinContent(47,0.336878);
   1->SetBinContent(48,0.4065126);
   1->SetBinContent(49,0.4366249);
   1->SetBinContent(50,0.4130997);
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
   2->SetBinContent(1,0.45074);
   2->SetBinContent(2,0.448858);
   2->SetBinContent(3,0.4422709);
   2->SetBinContent(4,0.4281558);
   2->SetBinContent(5,0.4629731);
   2->SetBinContent(6,0.454504);
   2->SetBinContent(7,0.4855573);
   2->SetBinContent(8,0.4733242);
   2->SetBinContent(9,0.4300378);
   2->SetBinContent(10,0.4403889);
   2->SetBinContent(11,0.449799);
   2->SetBinContent(12,0.447917);
   2->SetBinContent(13,0.4375659);
   2->SetBinContent(14,0.4309788);
   2->SetBinContent(15,0.445094);
   2->SetBinContent(16,0.4168637);
   2->SetBinContent(17,0.4130997);
   2->SetBinContent(18,0.4432119);
   2->SetBinContent(19,0.448858);
   2->SetBinContent(20,0.4714422);
   2->SetBinContent(21,0.4601501);
   2->SetBinContent(22,0.4723832);
   2->SetBinContent(23,0.449799);
   2->SetBinContent(24,0.4959084);
   2->SetBinContent(25,0.4338019);
   2->SetBinContent(26,0.4733242);
   2->SetBinContent(27,0.4648551);
   2->SetBinContent(28,0.4930854);
   2->SetBinContent(29,0.5137872);
   2->SetBinContent(30,0.449799);
   2->SetBinContent(31,0.4902624);
   2->SetBinContent(32,0.5137872);
   2->SetBinContent(33,0.5260199);
   2->SetBinContent(34,0.4780293);
   2->SetBinContent(35,0.4723832);
   2->SetBinContent(36,0.4959084);
   2->SetBinContent(37,0.5043774);
   2->SetBinContent(38,0.5391936);
   2->SetBinContent(39,0.5749508);
   2->SetBinContent(40,0.5702459);
   2->SetBinContent(41,0.5834196);
   2->SetBinContent(42,0.5928293);
   2->SetBinContent(43,0.6191767);
   2->SetBinContent(44,0.6652847);
   2->SetBinContent(45,0.7085697);
   2->SetBinContent(46,0.6841043);
   2->SetBinContent(47,0.7358581);
   2->SetBinContent(48,0.8732409);
   2->SetBinContent(49,0.913703);
   2->SetBinContent(50,1.02474);
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
   3->SetBinContent(1,2.01456);
   3->SetBinContent(2,1.782373);
   3->SetBinContent(3,2.062363);
   3->SetBinContent(4,1.823347);
   3->SetBinContent(5,1.891637);
   3->SetBinContent(6,2.007731);
   3->SetBinContent(7,2.048705);
   3->SetBinContent(8,2.007731);
   3->SetBinContent(9,1.953099);
   3->SetBinContent(10,2.110166);
   3->SetBinContent(11,1.87115);
   3->SetBinContent(12,1.898466);
   3->SetBinContent(13,1.884808);
   3->SetBinContent(14,1.905295);
   3->SetBinContent(15,1.953099);
   3->SetBinContent(16,2.021389);
   3->SetBinContent(17,2.110166);
   3->SetBinContent(18,1.932612);
   3->SetBinContent(19,1.905295);
   3->SetBinContent(20,2.096508);
   3->SetBinContent(21,2.055534);
   3->SetBinContent(22,1.843834);
   3->SetBinContent(23,2.048705);
   3->SetBinContent(24,2.08285);
   3->SetBinContent(25,2.144311);
   3->SetBinContent(26,1.857492);
   3->SetBinContent(27,2.055534);
   3->SetBinContent(28,2.267234);
   3->SetBinContent(29,2.130653);
   3->SetBinContent(30,2.21943);
   3->SetBinContent(31,2.021389);
   3->SetBinContent(32,2.260405);
   3->SetBinContent(33,2.321866);
   3->SetBinContent(34,2.458446);
   3->SetBinContent(35,2.513078);
   3->SetBinContent(36,2.328695);
   3->SetBinContent(37,2.403814);
   3->SetBinContent(38,2.260405);
   3->SetBinContent(39,2.246747);
   3->SetBinContent(40,2.513078);
   3->SetBinContent(41,2.465275);
   3->SetBinContent(42,2.697462);
   3->SetBinContent(43,2.765752);
   3->SetBinContent(44,2.909162);
   3->SetBinContent(45,3.13452);
   3->SetBinContent(46,3.025255);
   3->SetBinContent(47,3.230126);
   3->SetBinContent(48,3.455484);
   3->SetBinContent(49,3.76279);
   3->SetBinContent(50,3.776448);
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
   4->SetBinContent(1,2.714658);
   4->SetBinContent(2,2.793573);
   4->SetBinContent(3,2.646266);
   4->SetBinContent(4,2.893531);
   4->SetBinContent(5,2.735702);
   4->SetBinContent(6,2.756746);
   4->SetBinContent(7,2.714658);
   4->SetBinContent(8,2.651527);
   4->SetBinContent(9,2.535786);
   4->SetBinContent(10,2.619962);
   4->SetBinContent(11,2.66731);
   4->SetBinContent(12,2.772529);
   4->SetBinContent(13,2.656788);
   4->SetBinContent(14,2.867226);
   4->SetBinContent(15,2.662049);
   4->SetBinContent(16,2.767268);
   4->SetBinContent(17,2.935618);
   4->SetBinContent(18,2.77779);
   4->SetBinContent(19,2.846182);
   4->SetBinContent(20,2.740963);
   4->SetBinContent(21,2.809355);
   4->SetBinContent(22,2.940879);
   4->SetBinContent(23,2.83566);
   4->SetBinContent(24,2.693615);
   4->SetBinContent(25,2.66731);
   4->SetBinContent(26,2.988228);
   4->SetBinContent(27,3.077664);
   4->SetBinContent(28,3.1671);
   4->SetBinContent(29,3.077664);
   4->SetBinContent(30,3.088186);
   4->SetBinContent(31,3.235492);
   4->SetBinContent(32,3.22497);
   4->SetBinContent(33,3.582714);
   4->SetBinContent(34,3.419625);
   4->SetBinContent(35,3.330189);
   4->SetBinContent(36,3.303884);
   4->SetBinContent(37,3.372277);
   4->SetBinContent(38,3.409103);
   4->SetBinContent(39,3.619541);
   4->SetBinContent(40,3.803674);
   4->SetBinContent(41,3.751065);
   4->SetBinContent(42,3.877327);
   4->SetBinContent(43,4.261376);
   4->SetBinContent(44,4.555989);
   4->SetBinContent(45,4.876907);
   4->SetBinContent(46,5.11891);
   4->SetBinContent(47,5.660788);
   4->SetBinContent(48,6.123751);
   4->SetBinContent(49,7.607337);
   4->SetBinContent(50,8.507005);
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
   5->SetBinContent(1,8.33351);
   5->SetBinContent(2,8.953542);
   5->SetBinContent(3,9.573573);
   5->SetBinContent(4,8.370712);
   5->SetBinContent(5,8.829535);
   5->SetBinContent(6,8.928741);
   5->SetBinContent(7,9.077548);
   5->SetBinContent(8,8.91634);
   5->SetBinContent(9,8.841936);
   5->SetBinContent(10,9.226356);
   5->SetBinContent(11,8.544321);
   5->SetBinContent(12,9.139551);
   5->SetBinContent(13,9.139551);
   5->SetBinContent(14,8.53192);
   5->SetBinContent(15,8.941141);
   5->SetBinContent(16,8.866737);
   5->SetBinContent(17,8.668327);
   5->SetBinContent(18,8.854337);
   5->SetBinContent(19,8.990744);
   5->SetBinContent(20,8.544321);
   5->SetBinContent(21,8.631125);
   5->SetBinContent(22,9.350362);
   5->SetBinContent(23,8.283908);
   5->SetBinContent(24,9.449567);
   5->SetBinContent(25,9.003144);
   5->SetBinContent(26,9.523971);
   5->SetBinContent(27,9.362762);
   5->SetBinContent(28,9.164352);
   5->SetBinContent(29,9.288359);
   5->SetBinContent(30,9.189154);
   5->SetBinContent(31,9.213955);
   5->SetBinContent(32,9.871188);
   5->SetBinContent(33,9.325561);
   5->SetBinContent(34,9.759583);
   5->SetBinContent(35,9.883589);
   5->SetBinContent(36,10.23081);
   5->SetBinContent(37,11.12365);
   5->SetBinContent(38,9.722381);
   5->SetBinContent(39,11.27246);
   5->SetBinContent(40,10.68963);
   5->SetBinContent(41,11.03685);
   5->SetBinContent(42,11.38406);
   5->SetBinContent(43,12.1529);
   5->SetBinContent(44,12.38852);
   5->SetBinContent(45,13.13255);
   5->SetBinContent(46,13.9758);
   5->SetBinContent(47,15.10425);
   5->SetBinContent(48,16.50556);
   5->SetBinContent(49,18.52702);
   5->SetBinContent(50,21.62741);
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
   6->SetBinContent(1,192.274);
   6->SetBinContent(2,192.35);
   6->SetBinContent(3,190.3762);
   6->SetBinContent(4,186.1251);
   6->SetBinContent(5,195.0069);
   6->SetBinContent(6,190.1485);
   6->SetBinContent(7,185.1383);
   6->SetBinContent(8,187.7193);
   6->SetBinContent(9,194.4755);
   6->SetBinContent(10,185.5938);
   6->SetBinContent(11,196.1456);
   6->SetBinContent(12,188.1748);
   6->SetBinContent(13,188.0229);
   6->SetBinContent(14,186.4288);
   6->SetBinContent(15,198.7266);
   6->SetBinContent(16,195.5383);
   6->SetBinContent(17,193.185);
   6->SetBinContent(18,189.3894);
   6->SetBinContent(19,194.4755);
   6->SetBinContent(20,192.5777);
   6->SetBinContent(21,196.677);
   6->SetBinContent(22,195.0828);
   6->SetBinContent(23,196.9047);
   6->SetBinContent(24,195.6901);
   6->SetBinContent(25,210.0376);
   6->SetBinContent(26,209.3544);
   6->SetBinContent(27,209.2784);
   6->SetBinContent(28,205.6346);
   6->SetBinContent(29,219.3748);
   6->SetBinContent(30,213.6055);
   6->SetBinContent(31,224.6887);
   6->SetBinContent(32,228.1806);
   6->SetBinContent(33,228.9398);
   6->SetBinContent(34,233.2668);
   6->SetBinContent(35,241.1617);
   6->SetBinContent(36,250.0434);
   6->SetBinContent(37,253.9909);
   6->SetBinContent(38,255.5091);
   6->SetBinContent(39,261.4292);
   6->SetBinContent(40,277.7471);
   6->SetBinContent(41,287.5379);
   6->SetBinContent(42,297.9358);
   6->SetBinContent(43,313.267);
   6->SetBinContent(44,326.6249);
   6->SetBinContent(45,353.7202);
   6->SetBinContent(46,379.6771);
   6->SetBinContent(47,415.7283);
   6->SetBinContent(48,491.3219);
   6->SetBinContent(49,605.2811);
   6->SetBinContent(50,704.5946);
   6->SetBinContent(51,0.075906);
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
   7->SetBinContent(1,99.00914);
   7->SetBinContent(2,97.4957);
   7->SetBinContent(3,98.13037);
   7->SetBinContent(4,98.37447);
   7->SetBinContent(5,99.44852);
   7->SetBinContent(6,97.0075);
   7->SetBinContent(7,97.20278);
   7->SetBinContent(8,97.20278);
   7->SetBinContent(9,92.9554);
   7->SetBinContent(10,96.95868);
   7->SetBinContent(11,97.78863);
   7->SetBinContent(12,95.73817);
   7->SetBinContent(13,95.00586);
   7->SetBinContent(14,98.86268);
   7->SetBinContent(15,95.3476);
   7->SetBinContent(16,100.4738);
   7->SetBinContent(17,98.22801);
   7->SetBinContent(18,99.59499);
   7->SetBinContent(19,98.27683);
   7->SetBinContent(20,99.69263);
   7->SetBinContent(21,93.73653);
   7->SetBinContent(22,96.27519);
   7->SetBinContent(23,101.1084);
   7->SetBinContent(24,98.96032);
   7->SetBinContent(25,98.03273);
   7->SetBinContent(26,99.54617);
   7->SetBinContent(27,99.93673);
   7->SetBinContent(28,106.3322);
   7->SetBinContent(29,99.54617);
   7->SetBinContent(30,108.7732);
   7->SetBinContent(31,102.1337);
   7->SetBinContent(32,106.0393);
   7->SetBinContent(33,111.6536);
   7->SetBinContent(34,107.1133);
   7->SetBinContent(35,110.6772);
   7->SetBinContent(36,110.9702);
   7->SetBinContent(37,113.4112);
   7->SetBinContent(38,112.4348);
   7->SetBinContent(39,115.364);
   7->SetBinContent(40,123.9076);
   7->SetBinContent(41,124.8352);
   7->SetBinContent(42,124.5911);
   7->SetBinContent(43,132.696);
   7->SetBinContent(44,132.3542);
   7->SetBinContent(45,141.8269);
   7->SetBinContent(46,156.0847);
   7->SetBinContent(47,160.9675);
   7->SetBinContent(48,194.2683);
   7->SetBinContent(49,241.3386);
   7->SetBinContent(50,266.0456);
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
   8->SetBinContent(1,4.989602);
   8->SetBinContent(2,6.310377);
   8->SetBinContent(3,5.136354);
   8->SetBinContent(4,5.42986);
   8->SetBinContent(5,4.549343);
   8->SetBinContent(6,6.750636);
   8->SetBinContent(7,4.696096);
   8->SetBinContent(8,4.842849);
   8->SetBinContent(9,4.989602);
   8->SetBinContent(10,5.576613);
   8->SetBinContent(11,5.42986);
   8->SetBinContent(12,5.870119);
   8->SetBinContent(13,3.815579);
   8->SetBinContent(14,5.870119);
   8->SetBinContent(15,5.870119);
   8->SetBinContent(16,4.842849);
   8->SetBinContent(17,4.989602);
   8->SetBinContent(18,4.40259);
   8->SetBinContent(19,4.40259);
   8->SetBinContent(20,3.815579);
   8->SetBinContent(21,4.842849);
   8->SetBinContent(22,4.40259);
   8->SetBinContent(23,4.989602);
   8->SetBinContent(24,4.989602);
   8->SetBinContent(25,6.016871);
   8->SetBinContent(26,6.163624);
   8->SetBinContent(27,4.549343);
   8->SetBinContent(28,7.044141);
   8->SetBinContent(29,4.842849);
   8->SetBinContent(30,4.549343);
   8->SetBinContent(31,4.696096);
   8->SetBinContent(32,4.40259);
   8->SetBinContent(33,5.723366);
   8->SetBinContent(34,6.163624);
   8->SetBinContent(35,5.136354);
   8->SetBinContent(36,5.136354);
   8->SetBinContent(37,6.750636);
   8->SetBinContent(38,4.989602);
   8->SetBinContent(39,5.283107);
   8->SetBinContent(40,4.696096);
   8->SetBinContent(41,4.989602);
   8->SetBinContent(42,7.044141);
   8->SetBinContent(43,6.750636);
   8->SetBinContent(44,5.870119);
   8->SetBinContent(45,5.870119);
   8->SetBinContent(46,7.337647);
   8->SetBinContent(47,7.631153);
   8->SetBinContent(48,11.44674);
   8->SetBinContent(49,12.03375);
   8->SetBinContent(50,12.76752);
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
   9->SetBinContent(1,332.5913);
   9->SetBinContent(2,330.191);
   9->SetBinContent(3,327.4478);
   9->SetBinContent(4,314.0749);
   9->SetBinContent(5,316.9895);
   9->SetBinContent(6,328.648);
   9->SetBinContent(7,327.6193);
   9->SetBinContent(8,323.1617);
   9->SetBinContent(9,317.5039);
   9->SetBinContent(10,315.618);
   9->SetBinContent(11,331.9055);
   9->SetBinContent(12,315.1036);
   9->SetBinContent(13,320.9328);
   9->SetBinContent(14,322.133);
   9->SetBinContent(15,327.9622);
   9->SetBinContent(16,309.1029);
   9->SetBinContent(17,315.4465);
   9->SetBinContent(18,326.9335);
   9->SetBinContent(19,318.5326);
   9->SetBinContent(20,316.8181);
   9->SetBinContent(21,316.4752);
   9->SetBinContent(22,325.219);
   9->SetBinContent(23,324.1903);
   9->SetBinContent(24,322.6473);
   9->SetBinContent(25,321.4472);
   9->SetBinContent(26,324.0189);
   9->SetBinContent(27,313.732);
   9->SetBinContent(28,316.6466);
   9->SetBinContent(29,318.8755);
   9->SetBinContent(30,314.9322);
   9->SetBinContent(31,312.3604);
   9->SetBinContent(32,314.4178);
   9->SetBinContent(33,324.3618);
   9->SetBinContent(34,329.6767);
   9->SetBinContent(35,322.4759);
   9->SetBinContent(36,309.4458);
   9->SetBinContent(37,323.8474);
   9->SetBinContent(38,313.0462);
   9->SetBinContent(39,344.7641);
   9->SetBinContent(40,320.7614);
   9->SetBinContent(41,316.1323);
   9->SetBinContent(42,334.9915);
   9->SetBinContent(43,321.4472);
   9->SetBinContent(44,326.0763);
   9->SetBinContent(45,342.3638);
   9->SetBinContent(46,338.0776);
   9->SetBinContent(47,345.107);
   9->SetBinContent(48,344.5926);
   9->SetBinContent(49,350.7647);
   9->SetBinContent(50,330.7054);
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
   10->SetBinContent(1,830.1418);
   10->SetBinContent(2,805.3395);
   10->SetBinContent(3,805.0239);
   10->SetBinContent(4,807.2959);
   10->SetBinContent(5,814.1118);
   10->SetBinContent(6,816.6993);
   10->SetBinContent(7,812.0923);
   10->SetBinContent(8,809.5048);
   10->SetBinContent(9,806.9803);
   10->SetBinContent(10,818.5927);
   10->SetBinContent(11,819.7286);
   10->SetBinContent(12,828.501);
   10->SetBinContent(13,805.3395);
   10->SetBinContent(14,823.5784);
   10->SetBinContent(15,823.389);
   10->SetBinContent(16,822.0006);
   10->SetBinContent(17,835.948);
   10->SetBinContent(18,820.6122);
   10->SetBinContent(19,835.1276);
   10->SetBinContent(20,824.5881);
   10->SetBinContent(21,833.676);
   10->SetBinContent(22,844.5941);
   10->SetBinContent(23,844.7203);
   10->SetBinContent(24,857.4055);
   10->SetBinContent(25,882.2079);
   10->SetBinContent(26,882.271);
   10->SetBinContent(27,890.0967);
   10->SetBinContent(28,896.4077);
   10->SetBinContent(29,891.422);
   10->SetBinContent(30,907.8938);
   10->SetBinContent(31,929.0358);
   10->SetBinContent(32,942.7938);
   10->SetBinContent(33,972.645);
   10->SetBinContent(34,982.6796);
   10->SetBinContent(35,986.4662);
   10->SetBinContent(36,1020.167);
   10->SetBinContent(37,1038.658);
   10->SetBinContent(38,1055.635);
   10->SetBinContent(39,1085.234);
   10->SetBinContent(40,1116.915);
   10->SetBinContent(41,1169.36);
   10->SetBinContent(42,1208.425);
   10->SetBinContent(43,1260.933);
   10->SetBinContent(44,1344.617);
   10->SetBinContent(45,1434.802);
   10->SetBinContent(46,1532.876);
   10->SetBinContent(47,1654.679);
   10->SetBinContent(48,1900.935);
   10->SetBinContent(49,2246.458);
   10->SetBinContent(50,2565.809);
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
   11->SetBinContent(1,131.7047);
   11->SetBinContent(2,160.9725);
   11->SetBinContent(3,160.9725);
   11->SetBinContent(4,175.6063);
   11->SetBinContent(5,117.0709);
   11->SetBinContent(6,73.1693);
   11->SetBinContent(7,190.2402);
   11->SetBinContent(8,87.80315);
   11->SetBinContent(9,190.2402);
   11->SetBinContent(10,146.3386);
   11->SetBinContent(11,117.0709);
   11->SetBinContent(12,248.7757);
   11->SetBinContent(13,131.7047);
   11->SetBinContent(14,190.2402);
   11->SetBinContent(15,160.9725);
   11->SetBinContent(16,146.3386);
   11->SetBinContent(17,73.1693);
   11->SetBinContent(18,160.9725);
   11->SetBinContent(19,146.3386);
   11->SetBinContent(20,175.6063);
   11->SetBinContent(21,87.80315);
   11->SetBinContent(22,117.0709);
   11->SetBinContent(23,131.7047);
   11->SetBinContent(24,160.9725);
   11->SetBinContent(25,234.1418);
   11->SetBinContent(26,219.5079);
   11->SetBinContent(27,248.7757);
   11->SetBinContent(28,219.5079);
   11->SetBinContent(29,102.437);
   11->SetBinContent(30,219.5079);
   11->SetBinContent(31,204.8741);
   11->SetBinContent(32,160.9725);
   11->SetBinContent(33,190.2402);
   11->SetBinContent(34,248.7757);
   11->SetBinContent(35,190.2402);
   11->SetBinContent(36,160.9725);
   11->SetBinContent(37,131.7047);
   11->SetBinContent(38,248.7757);
   11->SetBinContent(39,292.6772);
   11->SetBinContent(40,190.2402);
   11->SetBinContent(41,204.8741);
   11->SetBinContent(42,321.9449);
   11->SetBinContent(43,365.8465);
   11->SetBinContent(44,234.1418);
   11->SetBinContent(45,307.3111);
   11->SetBinContent(46,526.8188);
   11->SetBinContent(47,556.0865);
   11->SetBinContent(48,453.6496);
   11->SetBinContent(49,775.5943);
   11->SetBinContent(50,717.0589);
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
   12->SetBinContent(1,723.1573);
   12->SetBinContent(2,786.5923);
   12->SetBinContent(3,780.2488);
   12->SetBinContent(4,691.4398);
   12->SetBinContent(5,792.9359);
   12->SetBinContent(6,830.9969);
   12->SetBinContent(7,754.8748);
   12->SetBinContent(8,697.7833);
   12->SetBinContent(9,716.8138);
   12->SetBinContent(10,729.5008);
   12->SetBinContent(11,678.7527);
   12->SetBinContent(12,735.8443);
   12->SetBinContent(13,754.8748);
   12->SetBinContent(14,767.5618);
   12->SetBinContent(15,685.0963);
   12->SetBinContent(16,716.8138);
   12->SetBinContent(17,754.8748);
   12->SetBinContent(18,672.4092);
   12->SetBinContent(19,520.1651);
   12->SetBinContent(20,691.4398);
   12->SetBinContent(21,583.6002);
   12->SetBinContent(22,659.7222);
   12->SetBinContent(23,589.9437);
   12->SetBinContent(24,754.8748);
   12->SetBinContent(25,691.4398);
   12->SetBinContent(26,672.4092);
   12->SetBinContent(27,647.0352);
   12->SetBinContent(28,830.9969);
   12->SetBinContent(29,697.7833);
   12->SetBinContent(30,742.1878);
   12->SetBinContent(31,723.1573);
   12->SetBinContent(32,799.2794);
   12->SetBinContent(33,710.4703);
   12->SetBinContent(34,919.806);
   12->SetBinContent(35,894.4319);
   12->SetBinContent(36,780.2488);
   12->SetBinContent(37,869.0579);
   12->SetBinContent(38,862.7144);
   12->SetBinContent(39,1008.615);
   12->SetBinContent(40,1046.676);
   12->SetBinContent(41,970.554);
   12->SetBinContent(42,1198.92);
   12->SetBinContent(43,1439.973);
   12->SetBinContent(44,1598.561);
   12->SetBinContent(45,1706.401);
   12->SetBinContent(46,2029.919);
   12->SetBinContent(47,2930.697);
   12->SetBinContent(48,4123.275);
   12->SetBinContent(49,6882.594);
   12->SetBinContent(50,9546.868);
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
   13->SetBinContent(1,815.7449);
   13->SetBinContent(2,1305.192);
   13->SetBinContent(3,1305.192);
   13->SetBinContent(4,1060.468);
   13->SetBinContent(5,1060.468);
   13->SetBinContent(6,652.5959);
   13->SetBinContent(7,571.0215);
   13->SetBinContent(8,1060.468);
   13->SetBinContent(9,326.298);
   13->SetBinContent(10,1223.617);
   13->SetBinContent(11,652.5959);
   13->SetBinContent(12,978.8938);
   13->SetBinContent(13,978.8938);
   13->SetBinContent(14,1305.192);
   13->SetBinContent(15,1223.617);
   13->SetBinContent(16,1549.915);
   13->SetBinContent(17,1223.617);
   13->SetBinContent(18,734.1704);
   13->SetBinContent(19,978.8938);
   13->SetBinContent(20,815.7449);
   13->SetBinContent(21,897.3193);
   13->SetBinContent(22,1223.617);
   13->SetBinContent(23,1060.468);
   13->SetBinContent(24,1386.766);
   13->SetBinContent(25,1142.043);
   13->SetBinContent(26,1549.915);
   13->SetBinContent(27,1142.043);
   13->SetBinContent(28,1468.341);
   13->SetBinContent(29,897.3193);
   13->SetBinContent(30,571.0215);
   13->SetBinContent(31,1713.064);
   13->SetBinContent(32,1305.192);
   13->SetBinContent(33,1549.915);
   13->SetBinContent(34,1549.915);
   13->SetBinContent(35,1549.915);
   13->SetBinContent(36,1794.638);
   13->SetBinContent(37,1794.638);
   13->SetBinContent(38,2039.362);
   13->SetBinContent(39,1876.213);
   13->SetBinContent(40,1794.638);
   13->SetBinContent(41,2447.234);
   13->SetBinContent(42,2691.958);
   13->SetBinContent(43,2202.511);
   13->SetBinContent(44,2365.66);
   13->SetBinContent(45,3426.128);
   13->SetBinContent(46,3099.83);
   13->SetBinContent(47,4078.723);
   13->SetBinContent(48,3752.426);
   13->SetBinContent(49,7341.711);
   13->SetBinContent(50,6933.838);
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
   14->SetBinContent(1,443.2428);
   14->SetBinContent(2,402.948);
   14->SetBinContent(3,374.7416);
   14->SetBinContent(4,431.1543);
   14->SetBinContent(5,402.948);
   14->SetBinContent(6,402.948);
   14->SetBinContent(7,382.8006);
   14->SetBinContent(8,467.4196);
   14->SetBinContent(9,431.1543);
   14->SetBinContent(10,358.6237);
   14->SetBinContent(11,390.8595);
   14->SetBinContent(12,374.7416);
   14->SetBinContent(13,459.3607);
   14->SetBinContent(14,342.5058);
   14->SetBinContent(15,415.0364);
   14->SetBinContent(16,471.4491);
   14->SetBinContent(17,435.1838);
   14->SetBinContent(18,402.948);
   14->SetBinContent(19,427.1248);
   14->SetBinContent(20,463.3902);
   14->SetBinContent(21,463.3902);
   14->SetBinContent(22,463.3902);
   14->SetBinContent(23,483.5376);
   14->SetBinContent(24,427.1248);
   14->SetBinContent(25,398.9185);
   14->SetBinContent(26,543.9797);
   14->SetBinContent(27,487.567);
   14->SetBinContent(28,503.685);
   14->SetBinContent(29,443.2428);
   14->SetBinContent(30,479.5081);
   14->SetBinContent(31,556.0682);
   14->SetBinContent(32,539.9503);
   14->SetBinContent(33,624.5693);
   14->SetBinContent(34,576.2156);
   14->SetBinContent(35,644.7167);
   14->SetBinContent(36,628.5988);
   14->SetBinContent(37,717.2474);
   14->SetBinContent(38,749.4832);
   14->SetBinContent(39,761.5717);
   14->SetBinContent(40,950.9572);
   14->SetBinContent(41,1035.576);
   14->SetBinContent(42,954.9867);
   14->SetBinContent(43,1104.076);
   14->SetBinContent(44,1305.547);
   14->SetBinContent(45,1615.812);
   14->SetBinContent(46,1978.46);
   14->SetBinContent(47,2534.535);
   14->SetBinContent(48,3828.017);
   14->SetBinContent(49,5367.225);
   14->SetBinContent(50,7627.661);
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
   15->SetBinContent(1,19.31424);
   15->SetBinContent(2,15.45139);
   15->SetBinContent(3,11.58854);
   15->SetBinContent(4,23.17708);
   15->SetBinContent(5,30.90277);
   15->SetBinContent(6,23.17708);
   15->SetBinContent(7,30.90277);
   15->SetBinContent(8,34.76562);
   15->SetBinContent(9,30.90277);
   15->SetBinContent(10,23.17708);
   15->SetBinContent(11,34.76562);
   15->SetBinContent(12,15.45139);
   15->SetBinContent(13,30.90277);
   15->SetBinContent(14,23.17708);
   15->SetBinContent(15,46.35416);
   15->SetBinContent(16,42.49131);
   15->SetBinContent(17,23.17708);
   15->SetBinContent(18,27.03993);
   15->SetBinContent(19,34.76562);
   15->SetBinContent(20,34.76562);
   15->SetBinContent(21,23.17708);
   15->SetBinContent(22,23.17708);
   15->SetBinContent(23,30.90277);
   15->SetBinContent(24,46.35416);
   15->SetBinContent(25,61.80555);
   15->SetBinContent(26,19.31424);
   15->SetBinContent(27,19.31424);
   15->SetBinContent(28,27.03993);
   15->SetBinContent(29,38.62847);
   15->SetBinContent(30,23.17708);
   15->SetBinContent(31,38.62847);
   15->SetBinContent(32,30.90277);
   15->SetBinContent(33,42.49131);
   15->SetBinContent(34,50.21701);
   15->SetBinContent(35,38.62847);
   15->SetBinContent(36,57.9427);
   15->SetBinContent(37,61.80555);
   15->SetBinContent(38,46.35416);
   15->SetBinContent(39,50.21701);
   15->SetBinContent(40,73.39409);
   15->SetBinContent(41,61.80555);
   15->SetBinContent(42,65.6684);
   15->SetBinContent(43,77.25694);
   15->SetBinContent(44,81.11978);
   15->SetBinContent(45,131.3368);
   15->SetBinContent(46,185.4167);
   15->SetBinContent(47,185.4167);
   15->SetBinContent(48,224.0453);
   15->SetBinContent(49,467.4051);
   15->SetBinContent(50,536.9365);
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
   16->SetBinContent(1,597.9253);
   16->SetBinContent(2,671.8955);
   16->SetBinContent(3,702.7164);
   16->SetBinContent(4,678.0597);
   16->SetBinContent(5,585.5969);
   16->SetBinContent(6,721.209);
   16->SetBinContent(7,554.776);
   16->SetBinContent(8,647.2388);
   16->SetBinContent(9,616.4178);
   16->SetBinContent(10,560.9402);
   16->SetBinContent(11,610.2537);
   16->SetBinContent(12,573.2686);
   16->SetBinContent(13,628.7462);
   16->SetBinContent(14,641.0746);
   16->SetBinContent(15,702.7164);
   16->SetBinContent(16,634.9104);
   16->SetBinContent(17,702.7164);
   16->SetBinContent(18,523.9551);
   16->SetBinContent(19,591.7611);
   16->SetBinContent(20,628.7462);
   16->SetBinContent(21,622.582);
   16->SetBinContent(22,739.7015);
   16->SetBinContent(23,671.8955);
   16->SetBinContent(24,721.209);
   16->SetBinContent(25,789.015);
   16->SetBinContent(26,702.7164);
   16->SetBinContent(27,776.6866);
   16->SetBinContent(28,819.8359);
   16->SetBinContent(29,678.0597);
   16->SetBinContent(30,690.3881);
   16->SetBinContent(31,813.6718);
   16->SetBinContent(32,819.8359);
   16->SetBinContent(33,727.3732);
   16->SetBinContent(34,671.8955);
   16->SetBinContent(35,715.0448);
   16->SetBinContent(36,764.3583);
   16->SetBinContent(37,961.6122);
   16->SetBinContent(38,826.0001);
   16->SetBinContent(39,961.6122);
   16->SetBinContent(40,1054.075);
   16->SetBinContent(41,1097.224);
   16->SetBinContent(42,1251.329);
   16->SetBinContent(43,1288.314);
   16->SetBinContent(44,1368.448);
   16->SetBinContent(45,1516.389);
   16->SetBinContent(46,1873.911);
   16->SetBinContent(47,2687.571);
   16->SetBinContent(48,3445.751);
   16->SetBinContent(49,5985.345);
   16->SetBinContent(50,9813.228);
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
   17->SetBinContent(1,491.9286);
   17->SetBinContent(2,655.9048);
   17->SetBinContent(3,445.0783);
   17->SetBinContent(4,421.6531);
   17->SetBinContent(5,374.8028);
   17->SetBinContent(6,515.3538);
   17->SetBinContent(7,351.3776);
   17->SetBinContent(8,491.9286);
   17->SetBinContent(9,726.1804);
   17->SetBinContent(10,421.6531);
   17->SetBinContent(11,374.8028);
   17->SetBinContent(12,562.2042);
   17->SetBinContent(13,398.2279);
   17->SetBinContent(14,491.9286);
   17->SetBinContent(15,538.779);
   17->SetBinContent(16,609.0545);
   17->SetBinContent(17,445.0783);
   17->SetBinContent(18,585.6293);
   17->SetBinContent(19,515.3538);
   17->SetBinContent(20,632.4797);
   17->SetBinContent(21,585.6293);
   17->SetBinContent(22,398.2279);
   17->SetBinContent(23,515.3538);
   17->SetBinContent(24,515.3538);
   17->SetBinContent(25,585.6293);
   17->SetBinContent(26,632.4797);
   17->SetBinContent(27,585.6293);
   17->SetBinContent(28,515.3538);
   17->SetBinContent(29,491.9286);
   17->SetBinContent(30,655.9048);
   17->SetBinContent(31,726.1804);
   17->SetBinContent(32,632.4797);
   17->SetBinContent(33,632.4797);
   17->SetBinContent(34,843.3062);
   17->SetBinContent(35,773.0307);
   17->SetBinContent(36,773.0307);
   17->SetBinContent(37,773.0307);
   17->SetBinContent(38,1007.282);
   17->SetBinContent(39,655.9048);
   17->SetBinContent(40,1054.133);
   17->SetBinContent(41,937.0069);
   17->SetBinContent(42,1171.259);
   17->SetBinContent(43,1335.235);
   17->SetBinContent(44,1288.385);
   17->SetBinContent(45,2108.266);
   17->SetBinContent(46,2272.243);
   17->SetBinContent(47,1944.289);
   17->SetBinContent(48,3537.209);
   17->SetBinContent(49,5013.002);
   17->SetBinContent(50,6043.715);
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
