{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:06:05 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.266919,1.31746,6.005295);
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
   
   TH1F *THStack_stack_30 = new TH1F("THStack_stack_30","",50,0,1);
   THStack_stack_30->SetMinimum(0.02523945);
   THStack_stack_30->SetMaximum(183450.1);
   THStack_stack_30->SetDirectory(0);
   THStack_stack_30->SetStats(0);
   THStack_stack_30->SetLineWidth(2);
   THStack_stack_30->SetMarkerSize(1.2);
   THStack_stack_30->GetXaxis()->SetTitle("cos*(#theta_{H#rightarrowbb}) sub-jets");
   THStack_stack_30->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_30->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_30->GetXaxis()->SetLabelColor(ci);
   THStack_stack_30->GetXaxis()->SetLabelFont(42);
   THStack_stack_30->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_30->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_30->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_30->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_30->GetXaxis()->SetTitleColor(ci);
   THStack_stack_30->GetXaxis()->SetTitleFont(42);
   THStack_stack_30->GetYaxis()->SetTitle("Number of events");
   THStack_stack_30->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_30->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_30->GetYaxis()->SetLabelColor(ci);
   THStack_stack_30->GetYaxis()->SetLabelFont(42);
   THStack_stack_30->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_30->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_30->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_30->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_30->GetYaxis()->SetTitleColor(ci);
   THStack_stack_30->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_30->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_30->GetZaxis()->SetLabelColor(ci);
   THStack_stack_30->GetZaxis()->SetLabelFont(42);
   THStack_stack_30->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_30->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_30->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_30->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_30->GetZaxis()->SetTitleColor(ci);
   THStack_stack_30->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_30);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,0.3726353);
   0->SetBinContent(2,0.3763993);
   0->SetBinContent(3,0.3538155);
   0->SetBinContent(4,0.3801633);
   0->SetBinContent(5,0.3763993);
   0->SetBinContent(6,0.3575794);
   0->SetBinContent(7,0.3425235);
   0->SetBinContent(8,0.3218217);
   0->SetBinContent(9,0.3707533);
   0->SetBinContent(10,0.3688714);
   0->SetBinContent(11,0.3914552);
   0->SetBinContent(12,0.3481695);
   0->SetBinContent(13,0.4065111);
   0->SetBinContent(14,0.3124118);
   0->SetBinContent(15,0.2973559);
   0->SetBinContent(16,0.3952192);
   0->SetBinContent(17,0.3067658);
   0->SetBinContent(18,0.3575794);
   0->SetBinContent(19,0.3255857);
   0->SetBinContent(20,0.3237037);
   0->SetBinContent(21,0.3481695);
   0->SetBinContent(22,0.3726353);
   0->SetBinContent(23,0.3293496);
   0->SetBinContent(24,0.3651074);
   0->SetBinContent(25,0.3124118);
   0->SetBinContent(26,0.3669894);
   0->SetBinContent(27,0.3255857);
   0->SetBinContent(28,0.3406416);
   0->SetBinContent(29,0.2860639);
   0->SetBinContent(30,0.3707533);
   0->SetBinContent(31,0.3858092);
   0->SetBinContent(32,0.2898279);
   0->SetBinContent(33,0.3331136);
   0->SetBinContent(34,0.3594614);
   0->SetBinContent(35,0.3255857);
   0->SetBinContent(36,0.3105298);
   0->SetBinContent(37,0.3067658);
   0->SetBinContent(38,0.3312316);
   0->SetBinContent(39,0.3180577);
   0->SetBinContent(40,0.3444055);
   0->SetBinContent(41,0.3086478);
   0->SetBinContent(42,0.3124118);
   0->SetBinContent(43,0.27289);
   0->SetBinContent(44,0.2597161);
   0->SetBinContent(45,0.2823);
   0->SetBinContent(46,0.3067658);
   0->SetBinContent(47,0.2898279);
   0->SetBinContent(48,0.2992378);
   0->SetBinContent(49,0.278536);
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
   1->SetBinContent(1,0.1929046);
   1->SetBinContent(2,0.1816127);
   1->SetBinContent(3,0.1900816);
   1->SetBinContent(4,0.1806717);
   1->SetBinContent(5,0.1881997);
   1->SetBinContent(6,0.1844357);
   1->SetBinContent(7,0.1787897);
   1->SetBinContent(8,0.2060785);
   1->SetBinContent(9,0.1806717);
   1->SetBinContent(10,0.1731438);
   1->SetBinContent(11,0.1985506);
   1->SetBinContent(12,0.1910226);
   1->SetBinContent(13,0.1769077);
   1->SetBinContent(14,0.1797307);
   1->SetBinContent(15,0.1656158);
   1->SetBinContent(16,0.1938456);
   1->SetBinContent(17,0.1891406);
   1->SetBinContent(18,0.1740848);
   1->SetBinContent(19,0.1994916);
   1->SetBinContent(20,0.1825537);
   1->SetBinContent(21,0.1900816);
   1->SetBinContent(22,0.2089015);
   1->SetBinContent(23,0.1787897);
   1->SetBinContent(24,0.1919636);
   1->SetBinContent(25,0.1966686);
   1->SetBinContent(26,0.1797307);
   1->SetBinContent(27,0.2023146);
   1->SetBinContent(28,0.1957276);
   1->SetBinContent(29,0.1806717);
   1->SetBinContent(30,0.2051375);
   1->SetBinContent(31,0.1919636);
   1->SetBinContent(32,0.1985506);
   1->SetBinContent(33,0.1787897);
   1->SetBinContent(34,0.1957276);
   1->SetBinContent(35,0.1872587);
   1->SetBinContent(36,0.1881997);
   1->SetBinContent(37,0.2098425);
   1->SetBinContent(38,0.2230164);
   1->SetBinContent(39,0.2399543);
   1->SetBinContent(40,0.2258394);
   1->SetBinContent(41,0.2183114);
   1->SetBinContent(42,0.2258394);
   1->SetBinContent(43,0.2578333);
   1->SetBinContent(44,0.2474822);
   1->SetBinContent(45,0.2634794);
   1->SetBinContent(46,0.2681844);
   1->SetBinContent(47,0.2634794);
   1->SetBinContent(48,0.3086478);
   1->SetBinContent(49,0.3265269);
   1->SetBinContent(50,0.3509931);
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
   2->SetBinContent(1,0.522256);
   2->SetBinContent(2,0.5288428);
   2->SetBinContent(3,0.5420165);
   2->SetBinContent(4,0.5081413);
   2->SetBinContent(5,0.5363706);
   2->SetBinContent(6,0.5090823);
   2->SetBinContent(7,0.5344887);
   2->SetBinContent(8,0.5156691);
   2->SetBinContent(9,0.5156691);
   2->SetBinContent(10,0.4705012);
   2->SetBinContent(11,0.4705012);
   2->SetBinContent(12,0.5354297);
   2->SetBinContent(13,0.4893214);
   2->SetBinContent(14,0.5090823);
   2->SetBinContent(15,0.4742652);
   2->SetBinContent(16,0.4601501);
   2->SetBinContent(17,0.5006135);
   2->SetBinContent(18,0.5128462);
   2->SetBinContent(19,0.518492);
   2->SetBinContent(20,0.5420165);
   2->SetBinContent(21,0.5382526);
   2->SetBinContent(22,0.4902624);
   2->SetBinContent(23,0.5175511);
   2->SetBinContent(24,0.5166101);
   2->SetBinContent(25,0.5231969);
   2->SetBinContent(26,0.5269608);
   2->SetBinContent(27,0.5297838);
   2->SetBinContent(28,0.4977904);
   2->SetBinContent(29,0.4714422);
   2->SetBinContent(30,0.5269608);
   2->SetBinContent(31,0.5391936);
   2->SetBinContent(32,0.4639141);
   2->SetBinContent(33,0.4902624);
   2->SetBinContent(34,0.4968494);
   2->SetBinContent(35,0.5354297);
   2->SetBinContent(36,0.5166101);
   2->SetBinContent(37,0.4554451);
   2->SetBinContent(38,0.5533082);
   2->SetBinContent(39,0.5326067);
   2->SetBinContent(40,0.4695602);
   2->SetBinContent(41,0.5646);
   2->SetBinContent(42,0.5250789);
   2->SetBinContent(43,0.5119052);
   2->SetBinContent(44,0.5109642);
   2->SetBinContent(45,0.5288428);
   2->SetBinContent(46,0.5815376);
   2->SetBinContent(47,0.5711868);
   2->SetBinContent(48,0.5900064);
   2->SetBinContent(49,0.6464651);
   2->SetBinContent(50,0.7763202);
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
   3->SetBinContent(1,1.925783);
   3->SetBinContent(2,2.15114);
   3->SetBinContent(3,1.94627);
   3->SetBinContent(4,1.877979);
   3->SetBinContent(5,2.041876);
   3->SetBinContent(6,2.21943);
   3->SetBinContent(7,1.891637);
   3->SetBinContent(8,2.076021);
   3->SetBinContent(9,2.062363);
   3->SetBinContent(10,2.274063);
   3->SetBinContent(11,2.137482);
   3->SetBinContent(12,2.103337);
   3->SetBinContent(13,1.87115);
   3->SetBinContent(14,2.062363);
   3->SetBinContent(15,2.000902);
   3->SetBinContent(16,2.274063);
   3->SetBinContent(17,2.069192);
   3->SetBinContent(18,2.164798);
   3->SetBinContent(19,2.130653);
   3->SetBinContent(20,2.233088);
   3->SetBinContent(21,2.178456);
   3->SetBinContent(22,2.116995);
   3->SetBinContent(23,2.055534);
   3->SetBinContent(24,2.267234);
   3->SetBinContent(25,2.226259);
   3->SetBinContent(26,2.287721);
   3->SetBinContent(27,2.130653);
   3->SetBinContent(28,2.137482);
   3->SetBinContent(29,2.123824);
   3->SetBinContent(30,1.994073);
   3->SetBinContent(31,2.15114);
   3->SetBinContent(32,2.226259);
   3->SetBinContent(33,2.253576);
   3->SetBinContent(34,2.280892);
   3->SetBinContent(35,2.233088);
   3->SetBinContent(36,2.321866);
   3->SetBinContent(37,2.157969);
   3->SetBinContent(38,2.239918);
   3->SetBinContent(39,2.437959);
   3->SetBinContent(40,2.308208);
   3->SetBinContent(41,2.328695);
   3->SetBinContent(42,2.43113);
   3->SetBinContent(43,2.390156);
   3->SetBinContent(44,2.656488);
   3->SetBinContent(45,2.697462);
   3->SetBinContent(46,2.92282);
   3->SetBinContent(47,2.875017);
   3->SetBinContent(48,3.189152);
   3->SetBinContent(49,3.510116);
   3->SetBinContent(50,3.892541);
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
   4->SetBinContent(1,2.951401);
   4->SetBinContent(2,3.014532);
   4->SetBinContent(3,2.672571);
   4->SetBinContent(4,2.893531);
   4->SetBinContent(5,3.119751);
   4->SetBinContent(6,3.161839);
   4->SetBinContent(7,3.051359);
   4->SetBinContent(8,3.019793);
   4->SetBinContent(9,3.198665);
   4->SetBinContent(10,3.109229);
   4->SetBinContent(11,3.130273);
   4->SetBinContent(12,3.27758);
   4->SetBinContent(13,3.109229);
   4->SetBinContent(14,2.893531);
   4->SetBinContent(15,3.146056);
   4->SetBinContent(16,2.809355);
   4->SetBinContent(17,2.982967);
   4->SetBinContent(18,3.051359);
   4->SetBinContent(19,3.046098);
   4->SetBinContent(20,2.988228);
   4->SetBinContent(21,3.019793);
   4->SetBinContent(22,2.904052);
   4->SetBinContent(23,3.156578);
   4->SetBinContent(24,3.061881);
   4->SetBinContent(25,3.356494);
   4->SetBinContent(26,2.861965);
   4->SetBinContent(27,3.125012);
   4->SetBinContent(28,3.151317);
   4->SetBinContent(29,3.035576);
   4->SetBinContent(30,3.188143);
   4->SetBinContent(31,3.256536);
   4->SetBinContent(32,3.319667);
   4->SetBinContent(33,3.040837);
   4->SetBinContent(34,3.330189);
   4->SetBinContent(35,3.345972);
   4->SetBinContent(36,3.356494);
   4->SetBinContent(37,3.451191);
   4->SetBinContent(38,3.551149);
   4->SetBinContent(39,3.44593);
   4->SetBinContent(40,3.540627);
   4->SetBinContent(41,3.756325);
   4->SetBinContent(42,3.735282);
   4->SetBinContent(43,4.071982);
   4->SetBinContent(44,4.029895);
   4->SetBinContent(45,3.966763);
   4->SetBinContent(46,4.287681);
   4->SetBinContent(47,4.371856);
   4->SetBinContent(48,5.176781);
   4->SetBinContent(49,6.034315);
   4->SetBinContent(50,8.186058);
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
   5->SetBinContent(1,9.51157);
   5->SetBinContent(2,9.461967);
   5->SetBinContent(3,9.325561);
   5->SetBinContent(4,9.399964);
   5->SetBinContent(5,9.995194);
   5->SetBinContent(6,9.536371);
   5->SetBinContent(7,9.226356);
   5->SetBinContent(8,10.20601);
   5->SetBinContent(9,10.1564);
   5->SetBinContent(10,9.598374);
   5->SetBinContent(11,9.871188);
   5->SetBinContent(12,10.0448);
   5->SetBinContent(13,10.02);
   5->SetBinContent(14,10.1068);
   5->SetBinContent(15,10.0944);
   5->SetBinContent(16,9.499169);
   5->SetBinContent(17,9.561172);
   5->SetBinContent(18,10.49122);
   5->SetBinContent(19,9.610775);
   5->SetBinContent(20,9.759583);
   5->SetBinContent(21,10.144);
   5->SetBinContent(22,9.747182);
   5->SetBinContent(23,10.1936);
   5->SetBinContent(24,9.201554);
   5->SetBinContent(25,9.697579);
   5->SetBinContent(26,9.759583);
   5->SetBinContent(27,10.33001);
   5->SetBinContent(28,9.809185);
   5->SetBinContent(29,10.42922);
   5->SetBinContent(30,10.0324);
   5->SetBinContent(31,9.883589);
   5->SetBinContent(32,9.784384);
   5->SetBinContent(33,11.08645);
   5->SetBinContent(34,10.75163);
   5->SetBinContent(35,10.39201);
   5->SetBinContent(36,10.02);
   5->SetBinContent(37,10.52842);
   5->SetBinContent(38,10.36721);
   5->SetBinContent(39,10.33001);
   5->SetBinContent(40,10.34241);
   5->SetBinContent(41,11.50807);
   5->SetBinContent(42,10.52842);
   5->SetBinContent(43,10.95004);
   5->SetBinContent(44,10.78883);
   5->SetBinContent(45,11.66928);
   5->SetBinContent(46,11.63208);
   5->SetBinContent(47,10.55322);
   5->SetBinContent(48,12.1529);
   5->SetBinContent(49,12.77293);
   5->SetBinContent(50,14.58343);
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
   6->SetBinContent(1,217.4011);
   6->SetBinContent(2,218.3879);
   6->SetBinContent(3,216.8697);
   6->SetBinContent(4,216.7938);
   6->SetBinContent(5,219.9821);
   6->SetBinContent(6,222.7909);
   6->SetBinContent(7,220.2098);
   6->SetBinContent(8,215.1996);
   6->SetBinContent(9,210.0376);
   6->SetBinContent(10,221.9558);
   6->SetBinContent(11,218.6916);
   6->SetBinContent(12,221.7281);
   6->SetBinContent(13,221.6522);
   6->SetBinContent(14,219.7544);
   6->SetBinContent(15,222.3354);
   6->SetBinContent(16,222.639);
   6->SetBinContent(17,224.385);
   6->SetBinContent(18,217.7047);
   6->SetBinContent(19,224.6887);
   6->SetBinContent(20,225.3719);
   6->SetBinContent(21,227.3456);
   6->SetBinContent(22,225.4478);
   6->SetBinContent(23,229.1675);
   6->SetBinContent(24,221.5763);
   6->SetBinContent(25,232.4317);
   6->SetBinContent(26,232.8872);
   6->SetBinContent(27,231.5967);
   6->SetBinContent(28,229.9266);
   6->SetBinContent(29,240.023);
   6->SetBinContent(30,239.6434);
   6->SetBinContent(31,238.4288);
   6->SetBinContent(32,244.35);
   6->SetBinContent(33,239.5675);
   6->SetBinContent(34,245.1091);
   6->SetBinContent(35,243.8945);
   6->SetBinContent(36,243.2872);
   6->SetBinContent(37,253.4595);
   6->SetBinContent(38,258.6969);
   6->SetBinContent(39,251.4099);
   6->SetBinContent(40,263.8579);
   6->SetBinContent(41,265.3759);
   6->SetBinContent(42,275.3184);
   6->SetBinContent(43,282.1492);
   6->SetBinContent(44,282.6805);
   6->SetBinContent(45,296.4937);
   6->SetBinContent(46,310.9901);
   6->SetBinContent(47,327.0803);
   6->SetBinContent(48,358.7295);
   6->SetBinContent(49,413.9826);
   6->SetBinContent(50,500.8091);
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
   7->SetBinContent(1,92.51601);
   7->SetBinContent(2,97.2516);
   7->SetBinContent(3,97.98391);
   7->SetBinContent(4,98.96032);
   7->SetBinContent(5,96.86104);
   7->SetBinContent(6,100.132);
   7->SetBinContent(7,97.4957);
   7->SetBinContent(8,98.47211);
   7->SetBinContent(9,95.05468);
   7->SetBinContent(10,99.69263);
   7->SetBinContent(11,98.13037);
   7->SetBinContent(12,100.0344);
   7->SetBinContent(13,99.59499);
   7->SetBinContent(14,100.5226);
   7->SetBinContent(15,104.5747);
   7->SetBinContent(16,97.59335);
   7->SetBinContent(17,98.81386);
   7->SetBinContent(18,103.7935);
   7->SetBinContent(19,102.7195);
   7->SetBinContent(20,100.2297);
   7->SetBinContent(21,101.8407);
   7->SetBinContent(22,106.4299);
   7->SetBinContent(23,104.0377);
   7->SetBinContent(24,104.4282);
   7->SetBinContent(25,105.3558);
   7->SetBinContent(26,107.1622);
   7->SetBinContent(27,105.5023);
   7->SetBinContent(28,105.0141);
   7->SetBinContent(29,110.8237);
   7->SetBinContent(30,109.7496);
   7->SetBinContent(31,115.0711);
   7->SetBinContent(32,107.748);
   7->SetBinContent(33,115.4128);
   7->SetBinContent(34,113.8994);
   7->SetBinContent(35,109.8961);
   7->SetBinContent(36,115.1687);
   7->SetBinContent(37,119.4649);
   7->SetBinContent(38,121.3201);
   7->SetBinContent(39,123.1265);
   7->SetBinContent(40,124.9816);
   7->SetBinContent(41,122.5406);
   7->SetBinContent(42,127.2274);
   7->SetBinContent(43,128.0085);
   7->SetBinContent(44,131.2312);
   7->SetBinContent(45,138.5066);
   7->SetBinContent(46,142.8523);
   7->SetBinContent(47,144.6101);
   7->SetBinContent(48,159.698);
   7->SetBinContent(49,188.5066);
   7->SetBinContent(50,253.6921);
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
   8->SetBinContent(1,4.549343);
   8->SetBinContent(2,3.522073);
   8->SetBinContent(3,5.42986);
   8->SetBinContent(4,5.283107);
   8->SetBinContent(5,4.255837);
   8->SetBinContent(6,3.375319);
   8->SetBinContent(7,3.668826);
   8->SetBinContent(8,4.255837);
   8->SetBinContent(9,3.375319);
   8->SetBinContent(10,5.136354);
   8->SetBinContent(11,5.576613);
   8->SetBinContent(12,3.375319);
   8->SetBinContent(13,2.93506);
   8->SetBinContent(14,4.696096);
   8->SetBinContent(15,5.136354);
   8->SetBinContent(16,6.163624);
   8->SetBinContent(17,4.549343);
   8->SetBinContent(18,4.255837);
   8->SetBinContent(19,4.255837);
   8->SetBinContent(20,6.310377);
   8->SetBinContent(21,3.668826);
   8->SetBinContent(22,6.016871);
   8->SetBinContent(23,4.842849);
   8->SetBinContent(24,4.109085);
   8->SetBinContent(25,3.815579);
   8->SetBinContent(26,6.45713);
   8->SetBinContent(27,4.842849);
   8->SetBinContent(28,5.42986);
   8->SetBinContent(29,4.255837);
   8->SetBinContent(30,4.989602);
   8->SetBinContent(31,5.576613);
   8->SetBinContent(32,4.842849);
   8->SetBinContent(33,4.549343);
   8->SetBinContent(34,6.897388);
   8->SetBinContent(35,6.016871);
   8->SetBinContent(36,6.897388);
   8->SetBinContent(37,5.42986);
   8->SetBinContent(38,4.989602);
   8->SetBinContent(39,6.016871);
   8->SetBinContent(40,5.136354);
   8->SetBinContent(41,5.870119);
   8->SetBinContent(42,4.989602);
   8->SetBinContent(43,6.310377);
   8->SetBinContent(44,6.750636);
   8->SetBinContent(45,8.071411);
   8->SetBinContent(46,6.603883);
   8->SetBinContent(47,9.538944);
   8->SetBinContent(48,11.00648);
   8->SetBinContent(49,13.35453);
   8->SetBinContent(50,22.30648);
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
   9->SetBinContent(1,258.5258);
   9->SetBinContent(2,253.2112);
   9->SetBinContent(3,252.6969);
   9->SetBinContent(4,261.269);
   9->SetBinContent(5,249.7826);
   9->SetBinContent(6,257.6686);
   9->SetBinContent(7,241.3824);
   9->SetBinContent(8,256.4685);
   9->SetBinContent(9,266.5839);
   9->SetBinContent(10,257.3257);
   9->SetBinContent(11,263.4978);
   9->SetBinContent(12,246.3539);
   9->SetBinContent(13,272.756);
   9->SetBinContent(14,270.0128);
   9->SetBinContent(15,259.0402);
   9->SetBinContent(16,268.4698);
   9->SetBinContent(17,275.8421);
   9->SetBinContent(18,277.5565);
   9->SetBinContent(19,288.7007);
   9->SetBinContent(20,278.2423);
   9->SetBinContent(21,280.2997);
   9->SetBinContent(22,282.3571);
   9->SetBinContent(23,288.3578);
   9->SetBinContent(24,291.4438);
   9->SetBinContent(25,299.6733);
   9->SetBinContent(26,294.7013);
   9->SetBinContent(27,308.4171);
   9->SetBinContent(28,301.2163);
   9->SetBinContent(29,322.4759);
   9->SetBinContent(30,317.3324);
   9->SetBinContent(31,318.3611);
   9->SetBinContent(32,325.9048);
   9->SetBinContent(33,321.4472);
   9->SetBinContent(34,339.4492);
   9->SetBinContent(35,326.7621);
   9->SetBinContent(36,348.0216);
   9->SetBinContent(37,336.1917);
   9->SetBinContent(38,347.3358);
   9->SetBinContent(39,356.2511);
   9->SetBinContent(40,351.1076);
   9->SetBinContent(41,363.9662);
   9->SetBinContent(42,381.2824);
   9->SetBinContent(43,379.568);
   9->SetBinContent(44,402.3705);
   9->SetBinContent(45,416.4292);
   9->SetBinContent(46,426.3732);
   9->SetBinContent(47,467.0063);
   9->SetBinContent(48,486.7228);
   9->SetBinContent(49,540.7288);
   9->SetBinContent(50,725.3781);
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
   10->SetBinContent(1,839.2928);
   10->SetBinContent(2,826.4814);
   10->SetBinContent(3,822.4424);
   10->SetBinContent(4,838.0938);
   10->SetBinContent(5,840.4919);
   10->SetBinContent(6,839.0404);
   10->SetBinContent(7,843.0164);
   10->SetBinContent(8,834.4333);
   10->SetBinContent(9,833.6129);
   10->SetBinContent(10,846.803);
   10->SetBinContent(11,842.259);
   10->SetBinContent(12,857.7211);
   10->SetBinContent(13,844.7834);
   10->SetBinContent(14,866.8721);
   10->SetBinContent(15,846.9923);
   10->SetBinContent(16,861.2552);
   10->SetBinContent(17,862.6437);
   10->SetBinContent(18,873.7511);
   10->SetBinContent(19,872.0471);
   10->SetBinContent(20,888.1403);
   10->SetBinContent(21,894.6406);
   10->SetBinContent(22,899.8788);
   10->SetBinContent(23,901.9614);
   10->SetBinContent(24,911.0493);
   10->SetBinContent(25,919.1906);
   10->SetBinContent(26,927.9629);
   10->SetBinContent(27,948.7893);
   10->SetBinContent(28,955.4159);
   10->SetBinContent(29,958.3821);
   10->SetBinContent(30,972.0139);
   10->SetBinContent(31,977.8832);
   10->SetBinContent(32,988.9275);
   10->SetBinContent(33,1009.565);
   10->SetBinContent(34,1024.9);
   10->SetBinContent(35,1026.289);
   10->SetBinContent(36,1054.247);
   10->SetBinContent(37,1079.302);
   10->SetBinContent(38,1094.385);
   10->SetBinContent(39,1099.371);
   10->SetBinContent(40,1129.348);
   10->SetBinContent(41,1157.558);
   10->SetBinContent(42,1187.094);
   10->SetBinContent(43,1228.431);
   10->SetBinContent(44,1251.908);
   10->SetBinContent(45,1293.372);
   10->SetBinContent(46,1391.004);
   10->SetBinContent(47,1456.133);
   10->SetBinContent(48,1577.747);
   10->SetBinContent(49,1852.656);
   10->SetBinContent(50,2395.552);
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
   11->SetBinContent(1,190.2402);
   11->SetBinContent(2,102.437);
   11->SetBinContent(3,190.2402);
   11->SetBinContent(4,146.3386);
   11->SetBinContent(5,117.0709);
   11->SetBinContent(6,175.6063);
   11->SetBinContent(7,204.8741);
   11->SetBinContent(8,146.3386);
   11->SetBinContent(9,131.7047);
   11->SetBinContent(10,87.80315);
   11->SetBinContent(11,146.3386);
   11->SetBinContent(12,102.437);
   11->SetBinContent(13,102.437);
   11->SetBinContent(14,160.9725);
   11->SetBinContent(15,87.80315);
   11->SetBinContent(16,87.80315);
   11->SetBinContent(17,190.2402);
   11->SetBinContent(18,175.6063);
   11->SetBinContent(19,175.6063);
   11->SetBinContent(20,146.3386);
   11->SetBinContent(21,160.9725);
   11->SetBinContent(22,102.437);
   11->SetBinContent(23,190.2402);
   11->SetBinContent(24,146.3386);
   11->SetBinContent(25,146.3386);
   11->SetBinContent(26,58.53543);
   11->SetBinContent(27,190.2402);
   11->SetBinContent(28,190.2402);
   11->SetBinContent(29,73.1693);
   11->SetBinContent(30,87.80315);
   11->SetBinContent(31,160.9725);
   11->SetBinContent(32,146.3386);
   11->SetBinContent(33,160.9725);
   11->SetBinContent(34,175.6063);
   11->SetBinContent(35,160.9725);
   11->SetBinContent(36,204.8741);
   11->SetBinContent(37,278.0434);
   11->SetBinContent(38,248.7757);
   11->SetBinContent(39,292.6772);
   11->SetBinContent(40,278.0434);
   11->SetBinContent(41,292.6772);
   11->SetBinContent(42,248.7757);
   11->SetBinContent(43,219.5079);
   11->SetBinContent(44,278.0434);
   11->SetBinContent(45,336.5788);
   11->SetBinContent(46,409.748);
   11->SetBinContent(47,482.9173);
   11->SetBinContent(48,512.185);
   11->SetBinContent(49,848.7635);
   11->SetBinContent(50,1258.512);
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
   12->SetBinContent(1,824.6534);
   12->SetBinContent(2,805.6229);
   12->SetBinContent(3,888.0884);
   12->SetBinContent(4,773.9053);
   12->SetBinContent(5,761.2183);
   12->SetBinContent(6,748.5313);
   12->SetBinContent(7,811.9664);
   12->SetBinContent(8,678.7527);
   12->SetBinContent(9,951.5235);
   12->SetBinContent(10,767.5618);
   12->SetBinContent(11,773.9053);
   12->SetBinContent(12,894.4319);
   12->SetBinContent(13,964.2105);
   12->SetBinContent(14,773.9053);
   12->SetBinContent(15,913.4625);
   12->SetBinContent(16,799.2794);
   12->SetBinContent(17,824.6534);
   12->SetBinContent(18,894.4319);
   12->SetBinContent(19,691.4398);
   12->SetBinContent(20,983.241);
   12->SetBinContent(21,805.6229);
   12->SetBinContent(22,869.0579);
   12->SetBinContent(23,761.2183);
   12->SetBinContent(24,995.928);
   12->SetBinContent(25,780.2488);
   12->SetBinContent(26,843.6839);
   12->SetBinContent(27,869.0579);
   12->SetBinContent(28,913.4625);
   12->SetBinContent(29,830.9969);
   12->SetBinContent(30,869.0579);
   12->SetBinContent(31,830.9969);
   12->SetBinContent(32,716.8138);
   12->SetBinContent(33,919.806);
   12->SetBinContent(34,900.7755);
   12->SetBinContent(35,907.119);
   12->SetBinContent(36,875.4014);
   12->SetBinContent(37,805.6229);
   12->SetBinContent(38,926.1495);
   12->SetBinContent(39,995.928);
   12->SetBinContent(40,1021.302);
   12->SetBinContent(41,1084.737);
   12->SetBinContent(42,1078.394);
   12->SetBinContent(43,1084.737);
   12->SetBinContent(44,1236.981);
   12->SetBinContent(45,1344.821);
   12->SetBinContent(46,1642.966);
   12->SetBinContent(47,2106.042);
   12->SetBinContent(48,2930.697);
   12->SetBinContent(49,5258.719);
   12->SetBinContent(50,10663.37);
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
   13->SetBinContent(1,1142.043);
   13->SetBinContent(2,489.447);
   13->SetBinContent(3,734.1704);
   13->SetBinContent(4,897.3193);
   13->SetBinContent(5,1060.468);
   13->SetBinContent(6,897.3193);
   13->SetBinContent(7,978.8938);
   13->SetBinContent(8,897.3193);
   13->SetBinContent(9,897.3193);
   13->SetBinContent(10,734.1704);
   13->SetBinContent(11,652.5959);
   13->SetBinContent(12,815.7449);
   13->SetBinContent(13,815.7449);
   13->SetBinContent(14,1060.468);
   13->SetBinContent(15,1142.043);
   13->SetBinContent(16,1549.915);
   13->SetBinContent(17,407.8725);
   13->SetBinContent(18,1223.617);
   13->SetBinContent(19,1142.043);
   13->SetBinContent(20,734.1704);
   13->SetBinContent(21,978.8938);
   13->SetBinContent(22,1060.468);
   13->SetBinContent(23,1060.468);
   13->SetBinContent(24,978.8938);
   13->SetBinContent(25,1305.192);
   13->SetBinContent(26,1223.617);
   13->SetBinContent(27,897.3193);
   13->SetBinContent(28,652.5959);
   13->SetBinContent(29,1386.766);
   13->SetBinContent(30,815.7449);
   13->SetBinContent(31,1305.192);
   13->SetBinContent(32,1549.915);
   13->SetBinContent(33,1386.766);
   13->SetBinContent(34,1386.766);
   13->SetBinContent(35,1794.638);
   13->SetBinContent(36,1631.49);
   13->SetBinContent(37,1549.915);
   13->SetBinContent(38,978.8938);
   13->SetBinContent(39,1468.341);
   13->SetBinContent(40,1957.787);
   13->SetBinContent(41,1713.064);
   13->SetBinContent(42,2039.362);
   13->SetBinContent(43,1549.915);
   13->SetBinContent(44,2284.085);
   13->SetBinContent(45,2936.681);
   13->SetBinContent(46,3507.702);
   13->SetBinContent(47,3752.426);
   13->SetBinContent(48,5302.344);
   13->SetBinContent(49,7015.413);
   13->SetBinContent(50,12725.62);
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
   14->SetBinContent(1,213.5624);
   14->SetBinContent(2,253.8572);
   14->SetBinContent(3,265.9456);
   14->SetBinContent(4,302.211);
   14->SetBinContent(5,257.8867);
   14->SetBinContent(6,257.8867);
   14->SetBinContent(7,298.1815);
   14->SetBinContent(8,278.0341);
   14->SetBinContent(9,310.2699);
   14->SetBinContent(10,310.2699);
   14->SetBinContent(11,201.474);
   14->SetBinContent(12,294.152);
   14->SetBinContent(13,302.211);
   14->SetBinContent(14,294.152);
   14->SetBinContent(15,257.8867);
   14->SetBinContent(16,310.2699);
   14->SetBinContent(17,278.0341);
   14->SetBinContent(18,286.093);
   14->SetBinContent(19,253.8572);
   14->SetBinContent(20,354.5942);
   14->SetBinContent(21,310.2699);
   14->SetBinContent(22,330.4173);
   14->SetBinContent(23,290.1225);
   14->SetBinContent(24,374.7416);
   14->SetBinContent(25,338.4763);
   14->SetBinContent(26,342.5058);
   14->SetBinContent(27,334.4468);
   14->SetBinContent(28,374.7416);
   14->SetBinContent(29,358.6237);
   14->SetBinContent(30,362.6532);
   14->SetBinContent(31,402.948);
   14->SetBinContent(32,350.5647);
   14->SetBinContent(33,362.6532);
   14->SetBinContent(34,475.4786);
   14->SetBinContent(35,459.3607);
   14->SetBinContent(36,487.567);
   14->SetBinContent(37,463.3902);
   14->SetBinContent(38,531.8913);
   14->SetBinContent(39,552.0387);
   14->SetBinContent(40,588.304);
   14->SetBinContent(41,648.7462);
   14->SetBinContent(42,753.5127);
   14->SetBinContent(43,918.7214);
   14->SetBinContent(44,999.311);
   14->SetBinContent(45,1200.782);
   14->SetBinContent(46,1563.43);
   14->SetBinContent(47,2127.551);
   14->SetBinContent(48,3126.877);
   14->SetBinContent(49,5794.331);
   14->SetBinContent(50,16270.5);
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
   15->SetBinContent(1,15.45139);
   15->SetBinContent(2,38.62847);
   15->SetBinContent(3,23.17708);
   15->SetBinContent(4,27.03993);
   15->SetBinContent(5,23.17708);
   15->SetBinContent(6,27.03993);
   15->SetBinContent(7,23.17708);
   15->SetBinContent(8,19.31424);
   15->SetBinContent(9,23.17708);
   15->SetBinContent(10,30.90277);
   15->SetBinContent(11,23.17708);
   15->SetBinContent(12,23.17708);
   15->SetBinContent(13,27.03993);
   15->SetBinContent(14,23.17708);
   15->SetBinContent(15,38.62847);
   15->SetBinContent(16,23.17708);
   15->SetBinContent(17,19.31424);
   15->SetBinContent(18,19.31424);
   15->SetBinContent(19,38.62847);
   15->SetBinContent(20,27.03993);
   15->SetBinContent(21,11.58854);
   15->SetBinContent(22,30.90277);
   15->SetBinContent(23,11.58854);
   15->SetBinContent(24,30.90277);
   15->SetBinContent(25,23.17708);
   15->SetBinContent(26,23.17708);
   15->SetBinContent(27,42.49131);
   15->SetBinContent(28,38.62847);
   15->SetBinContent(29,46.35416);
   15->SetBinContent(30,15.45139);
   15->SetBinContent(31,38.62847);
   15->SetBinContent(32,23.17708);
   15->SetBinContent(33,61.80555);
   15->SetBinContent(34,42.49131);
   15->SetBinContent(35,50.21701);
   15->SetBinContent(36,42.49131);
   15->SetBinContent(37,54.07985);
   15->SetBinContent(38,38.62847);
   15->SetBinContent(39,30.90277);
   15->SetBinContent(40,73.39409);
   15->SetBinContent(41,57.9427);
   15->SetBinContent(42,84.98263);
   15->SetBinContent(43,54.07985);
   15->SetBinContent(44,84.98263);
   15->SetBinContent(45,96.57117);
   15->SetBinContent(46,104.2969);
   15->SetBinContent(47,135.1996);
   15->SetBinContent(48,208.5939);
   15->SetBinContent(49,320.6166);
   15->SetBinContent(50,985.0275);
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
   16->SetBinContent(1,320.537);
   16->SetBinContent(2,277.3877);
   16->SetBinContent(3,320.537);
   16->SetBinContent(4,302.0444);
   16->SetBinContent(5,326.7012);
   16->SetBinContent(6,221.9101);
   16->SetBinContent(7,332.8654);
   16->SetBinContent(8,363.6863);
   16->SetBinContent(9,351.3579);
   16->SetBinContent(10,320.537);
   16->SetBinContent(11,295.8802);
   16->SetBinContent(12,345.1937);
   16->SetBinContent(13,314.3728);
   16->SetBinContent(14,332.8654);
   16->SetBinContent(15,326.7012);
   16->SetBinContent(16,314.3728);
   16->SetBinContent(17,431.4923);
   16->SetBinContent(18,295.8802);
   16->SetBinContent(19,345.1937);
   16->SetBinContent(20,406.8356);
   16->SetBinContent(21,363.6863);
   16->SetBinContent(22,314.3728);
   16->SetBinContent(23,345.1937);
   16->SetBinContent(24,456.149);
   16->SetBinContent(25,394.5072);
   16->SetBinContent(26,388.343);
   16->SetBinContent(27,363.6863);
   16->SetBinContent(28,437.6565);
   16->SetBinContent(29,332.8654);
   16->SetBinContent(30,462.3132);
   16->SetBinContent(31,449.9849);
   16->SetBinContent(32,456.149);
   16->SetBinContent(33,486.97);
   16->SetBinContent(34,530.1193);
   16->SetBinContent(35,597.9253);
   16->SetBinContent(36,536.2834);
   16->SetBinContent(37,585.5969);
   16->SetBinContent(38,715.0448);
   16->SetBinContent(39,715.0448);
   16->SetBinContent(40,807.5076);
   16->SetBinContent(41,844.4927);
   16->SetBinContent(42,924.6271);
   16->SetBinContent(43,893.8062);
   16->SetBinContent(44,1165.03);
   16->SetBinContent(45,1485.568);
   16->SetBinContent(46,1688.986);
   16->SetBinContent(47,2422.517);
   16->SetBinContent(48,3581.36);
   16->SetBinContent(49,6484.634);
   16->SetBinContent(50,22652.97);
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
   17->SetBinContent(1,187.4014);
   17->SetBinContent(2,327.9524);
   17->SetBinContent(3,351.3776);
   17->SetBinContent(4,468.5034);
   17->SetBinContent(5,304.5273);
   17->SetBinContent(6,210.8266);
   17->SetBinContent(7,210.8266);
   17->SetBinContent(8,421.6531);
   17->SetBinContent(9,351.3776);
   17->SetBinContent(10,421.6531);
   17->SetBinContent(11,281.1021);
   17->SetBinContent(12,515.3538);
   17->SetBinContent(13,351.3776);
   17->SetBinContent(14,421.6531);
   17->SetBinContent(15,351.3776);
   17->SetBinContent(16,304.5273);
   17->SetBinContent(17,210.8266);
   17->SetBinContent(18,374.8028);
   17->SetBinContent(19,351.3776);
   17->SetBinContent(20,187.4014);
   17->SetBinContent(21,421.6531);
   17->SetBinContent(22,234.2517);
   17->SetBinContent(23,234.2517);
   17->SetBinContent(24,538.779);
   17->SetBinContent(25,421.6531);
   17->SetBinContent(26,445.0783);
   17->SetBinContent(27,351.3776);
   17->SetBinContent(28,374.8028);
   17->SetBinContent(29,585.6293);
   17->SetBinContent(30,327.9524);
   17->SetBinContent(31,491.9286);
   17->SetBinContent(32,421.6531);
   17->SetBinContent(33,538.779);
   17->SetBinContent(34,773.0307);
   17->SetBinContent(35,491.9286);
   17->SetBinContent(36,609.0545);
   17->SetBinContent(37,609.0545);
   17->SetBinContent(38,726.1804);
   17->SetBinContent(39,843.3062);
   17->SetBinContent(40,679.33);
   17->SetBinContent(41,937.0069);
   17->SetBinContent(42,866.7314);
   17->SetBinContent(43,1147.833);
   17->SetBinContent(44,1194.684);
   17->SetBinContent(45,1663.187);
   17->SetBinContent(46,1991.14);
   17->SetBinContent(47,1592.912);
   17->SetBinContent(48,2600.197);
   17->SetBinContent(49,4849.025);
   17->SetBinContent(50,15483.96);
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
