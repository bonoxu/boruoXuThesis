{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:06:27 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.13378,1.31746,5.527632);
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
   
   TH1F *THStack_stack_31 = new TH1F("THStack_stack_31","",50,0,1);
   THStack_stack_31->SetMinimum(0.02662406);
   THStack_stack_31->SetMaximum(68346.89);
   THStack_stack_31->SetDirectory(0);
   THStack_stack_31->SetStats(0);
   THStack_stack_31->SetLineWidth(2);
   THStack_stack_31->SetMarkerSize(1.2);
   THStack_stack_31->GetXaxis()->SetTitle("cos*(#theta_{H#rightarrowWW*}) sub-jets");
   THStack_stack_31->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_31->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_31->GetXaxis()->SetLabelColor(ci);
   THStack_stack_31->GetXaxis()->SetLabelFont(42);
   THStack_stack_31->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_31->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_31->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_31->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_31->GetXaxis()->SetTitleColor(ci);
   THStack_stack_31->GetXaxis()->SetTitleFont(42);
   THStack_stack_31->GetYaxis()->SetTitle("Number of events");
   THStack_stack_31->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_31->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_31->GetYaxis()->SetLabelColor(ci);
   THStack_stack_31->GetYaxis()->SetLabelFont(42);
   THStack_stack_31->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_31->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_31->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_31->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_31->GetYaxis()->SetTitleColor(ci);
   THStack_stack_31->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_31->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_31->GetZaxis()->SetLabelColor(ci);
   THStack_stack_31->GetZaxis()->SetLabelFont(42);
   THStack_stack_31->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_31->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_31->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_31->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_31->GetZaxis()->SetTitleColor(ci);
   THStack_stack_31->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_31);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,0.2917099);
   0->SetBinContent(2,0.3331136);
   0->SetBinContent(3,0.3199397);
   0->SetBinContent(4,0.2954739);
   0->SetBinContent(5,0.3011198);
   0->SetBinContent(6,0.3030018);
   0->SetBinContent(7,0.278536);
   0->SetBinContent(8,0.2540702);
   0->SetBinContent(9,0.2898279);
   0->SetBinContent(10,0.2954739);
   0->SetBinContent(11,0.3011198);
   0->SetBinContent(12,0.3030018);
   0->SetBinContent(13,0.3161757);
   0->SetBinContent(14,0.2917099);
   0->SetBinContent(15,0.3199397);
   0->SetBinContent(16,0.3161757);
   0->SetBinContent(17,0.3161757);
   0->SetBinContent(18,0.2540702);
   0->SetBinContent(19,0.284182);
   0->SetBinContent(20,0.3368776);
   0->SetBinContent(21,0.2973559);
   0->SetBinContent(22,0.284182);
   0->SetBinContent(23,0.276654);
   0->SetBinContent(24,0.3387596);
   0->SetBinContent(25,0.3444055);
   0->SetBinContent(26,0.2879459);
   0->SetBinContent(27,0.2634801);
   0->SetBinContent(28,0.3462875);
   0->SetBinContent(29,0.3011198);
   0->SetBinContent(30,0.3030018);
   0->SetBinContent(31,0.3481695);
   0->SetBinContent(32,0.280418);
   0->SetBinContent(33,0.3481695);
   0->SetBinContent(34,0.3782813);
   0->SetBinContent(35,0.3538155);
   0->SetBinContent(36,0.3444055);
   0->SetBinContent(37,0.3237037);
   0->SetBinContent(38,0.3556975);
   0->SetBinContent(39,0.3331136);
   0->SetBinContent(40,0.3274677);
   0->SetBinContent(41,0.3274677);
   0->SetBinContent(42,0.3763993);
   0->SetBinContent(43,0.3933372);
   0->SetBinContent(44,0.4441508);
   0->SetBinContent(45,0.3989832);
   0->SetBinContent(46,0.4629707);
   0->SetBinContent(47,0.3933372);
   0->SetBinContent(48,0.423449);
   0->SetBinContent(49,0.4761446);
   0->SetBinContent(50,0.5457789);
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
   1->SetBinContent(1,0.1853767);
   1->SetBinContent(2,0.2070195);
   1->SetBinContent(3,0.139268);
   1->SetBinContent(4,0.1646748);
   1->SetBinContent(5,0.1515009);
   1->SetBinContent(6,0.1787897);
   1->SetBinContent(7,0.1656158);
   1->SetBinContent(8,0.1863177);
   1->SetBinContent(9,0.1750257);
   1->SetBinContent(10,0.2004326);
   1->SetBinContent(11,0.1769077);
   1->SetBinContent(12,0.1750257);
   1->SetBinContent(13,0.1722028);
   1->SetBinContent(14,0.1740848);
   1->SetBinContent(15,0.1637338);
   1->SetBinContent(16,0.1571469);
   1->SetBinContent(17,0.1580879);
   1->SetBinContent(18,0.1806717);
   1->SetBinContent(19,0.1627928);
   1->SetBinContent(20,0.1740848);
   1->SetBinContent(21,0.1863177);
   1->SetBinContent(22,0.1891406);
   1->SetBinContent(23,0.1919636);
   1->SetBinContent(24,0.1976096);
   1->SetBinContent(25,0.1750257);
   1->SetBinContent(26,0.1919636);
   1->SetBinContent(27,0.1769077);
   1->SetBinContent(28,0.1797307);
   1->SetBinContent(29,0.2117245);
   1->SetBinContent(30,0.1844357);
   1->SetBinContent(31,0.2004326);
   1->SetBinContent(32,0.2098425);
   1->SetBinContent(33,0.1891406);
   1->SetBinContent(34,0.1778487);
   1->SetBinContent(35,0.2239574);
   1->SetBinContent(36,0.2117245);
   1->SetBinContent(37,0.2013736);
   1->SetBinContent(38,0.2004326);
   1->SetBinContent(39,0.2408953);
   1->SetBinContent(40,0.2371313);
   1->SetBinContent(41,0.2183114);
   1->SetBinContent(42,0.2371313);
   1->SetBinContent(43,0.2258394);
   1->SetBinContent(44,0.2841815);
   1->SetBinContent(45,0.2813585);
   1->SetBinContent(46,0.3067657);
   1->SetBinContent(47,0.2841815);
   1->SetBinContent(48,0.3500521);
   1->SetBinContent(49,0.3933385);
   1->SetBinContent(50,0.3999256);
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
   2->SetBinContent(1,0.4366249);
   2->SetBinContent(2,0.4102767);
   2->SetBinContent(3,0.4385069);
   2->SetBinContent(4,0.4300378);
   2->SetBinContent(5,0.4281558);
   2->SetBinContent(6,0.4582681);
   2->SetBinContent(7,0.4187457);
   2->SetBinContent(8,0.4676782);
   2->SetBinContent(9,0.3923975);
   2->SetBinContent(10,0.4394479);
   2->SetBinContent(11,0.448858);
   2->SetBinContent(12,0.4196867);
   2->SetBinContent(13,0.446976);
   2->SetBinContent(14,0.4102767);
   2->SetBinContent(15,0.4130997);
   2->SetBinContent(16,0.4290968);
   2->SetBinContent(17,0.4093356);
   2->SetBinContent(18,0.444153);
   2->SetBinContent(19,0.4394479);
   2->SetBinContent(20,0.4196867);
   2->SetBinContent(21,0.4733242);
   2->SetBinContent(22,0.5062593);
   2->SetBinContent(23,0.4799113);
   2->SetBinContent(24,0.446976);
   2->SetBinContent(25,0.4563861);
   2->SetBinContent(26,0.4874393);
   2->SetBinContent(27,0.4592091);
   2->SetBinContent(28,0.4629731);
   2->SetBinContent(29,0.4893214);
   2->SetBinContent(30,0.4949674);
   2->SetBinContent(31,0.4836753);
   2->SetBinContent(32,0.4987314);
   2->SetBinContent(33,0.5006135);
   2->SetBinContent(34,0.4968494);
   2->SetBinContent(35,0.5598951);
   2->SetBinContent(36,0.5457804);
   2->SetBinContent(37,0.5279018);
   2->SetBinContent(38,0.5438985);
   2->SetBinContent(39,0.6238816);
   2->SetBinContent(40,0.5890654);
   2->SetBinContent(41,0.5674229);
   2->SetBinContent(42,0.5702459);
   2->SetBinContent(43,0.6201177);
   2->SetBinContent(44,0.6850452);
   2->SetBinContent(45,0.6445832);
   2->SetBinContent(46,0.7358581);
   2->SetBinContent(47,0.7283303);
   2->SetBinContent(48,0.8807688);
   2->SetBinContent(49,0.9202899);
   2->SetBinContent(50,1.114139);
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
   3->SetBinContent(1,2.185285);
   3->SetBinContent(2,2.171627);
   3->SetBinContent(3,1.796031);
   3->SetBinContent(4,1.94627);
   3->SetBinContent(5,1.966757);
   3->SetBinContent(6,1.980415);
   3->SetBinContent(7,1.877979);
   3->SetBinContent(8,2.233088);
   3->SetBinContent(9,2.01456);
   3->SetBinContent(10,2.123824);
   3->SetBinContent(11,1.94627);
   3->SetBinContent(12,2.01456);
   3->SetBinContent(13,2.130653);
   3->SetBinContent(14,2.007731);
   3->SetBinContent(15,2.000902);
   3->SetBinContent(16,2.110166);
   3->SetBinContent(17,2.041876);
   3->SetBinContent(18,2.164798);
   3->SetBinContent(19,2.089679);
   3->SetBinContent(20,1.884808);
   3->SetBinContent(21,2.062363);
   3->SetBinContent(22,2.028218);
   3->SetBinContent(23,2.198943);
   3->SetBinContent(24,2.15114);
   3->SetBinContent(25,2.157969);
   3->SetBinContent(26,1.973586);
   3->SetBinContent(27,1.973586);
   3->SetBinContent(28,2.048705);
   3->SetBinContent(29,2.157969);
   3->SetBinContent(30,2.028218);
   3->SetBinContent(31,2.212601);
   3->SetBinContent(32,2.246747);
   3->SetBinContent(33,2.089679);
   3->SetBinContent(34,2.123824);
   3->SetBinContent(35,2.21943);
   3->SetBinContent(36,2.513078);
   3->SetBinContent(37,2.478933);
   3->SetBinContent(38,2.465275);
   3->SetBinContent(39,2.301379);
   3->SetBinContent(40,2.513078);
   3->SetBinContent(41,2.533566);
   3->SetBinContent(42,2.738436);
   3->SetBinContent(43,2.820385);
   3->SetBinContent(44,2.64283);
   3->SetBinContent(45,2.799897);
   3->SetBinContent(46,2.881846);
   3->SetBinContent(47,2.956965);
   3->SetBinContent(48,2.929649);
   3->SetBinContent(49,3.55109);
   3->SetBinContent(50,4.049607);
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
   4->SetBinContent(1,2.577874);
   4->SetBinContent(2,2.783051);
   4->SetBinContent(3,2.814616);
   4->SetBinContent(4,2.704137);
   4->SetBinContent(5,2.88827);
   4->SetBinContent(6,2.904052);
   4->SetBinContent(7,2.683093);
   4->SetBinContent(8,2.683093);
   4->SetBinContent(9,2.809355);
   4->SetBinContent(10,2.793573);
   4->SetBinContent(11,2.762007);
   4->SetBinContent(12,3.030315);
   4->SetBinContent(13,2.730441);
   4->SetBinContent(14,2.767268);
   4->SetBinContent(15,2.861965);
   4->SetBinContent(16,2.856704);
   4->SetBinContent(17,2.672571);
   4->SetBinContent(18,2.935618);
   4->SetBinContent(19,2.914574);
   4->SetBinContent(20,2.919835);
   4->SetBinContent(21,2.909313);
   4->SetBinContent(22,2.982967);
   4->SetBinContent(23,2.883009);
   4->SetBinContent(24,2.767268);
   4->SetBinContent(25,2.840921);
   4->SetBinContent(26,3.067142);
   4->SetBinContent(27,3.146056);
   4->SetBinContent(28,2.998749);
   4->SetBinContent(29,3.209187);
   4->SetBinContent(30,3.030315);
   4->SetBinContent(31,3.11449);
   4->SetBinContent(32,3.345972);
   4->SetBinContent(33,3.261797);
   4->SetBinContent(34,3.424886);
   4->SetBinContent(35,3.298623);
   4->SetBinContent(36,3.382798);
   4->SetBinContent(37,3.730021);
   4->SetBinContent(38,3.656368);
   4->SetBinContent(39,3.677411);
   4->SetBinContent(40,3.998329);
   4->SetBinContent(41,4.045678);
   4->SetBinContent(42,4.166679);
   4->SetBinContent(43,4.319247);
   4->SetBinContent(44,4.61386);
   4->SetBinContent(45,4.650686);
   4->SetBinContent(46,4.84008);
   4->SetBinContent(47,5.324087);
   4->SetBinContent(48,5.9554);
   4->SetBinContent(49,6.365754);
   4->SetBinContent(50,7.644164);
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
   5->SetBinContent(1,9.003144);
   5->SetBinContent(2,7.862281);
   5->SetBinContent(3,8.271507);
   5->SetBinContent(4,8.234305);
   5->SetBinContent(5,8.184703);
   5->SetBinContent(6,8.172302);
   5->SetBinContent(7,8.035895);
   5->SetBinContent(8,8.655927);
   5->SetBinContent(9,7.998693);
   5->SetBinContent(10,8.035895);
   5->SetBinContent(11,8.271507);
   5->SetBinContent(12,8.172302);
   5->SetBinContent(13,8.296309);
   5->SetBinContent(14,8.51952);
   5->SetBinContent(15,8.482318);
   5->SetBinContent(16,8.147501);
   5->SetBinContent(17,8.445116);
   5->SetBinContent(18,8.370712);
   5->SetBinContent(19,8.655927);
   5->SetBinContent(20,8.283908);
   5->SetBinContent(21,8.841936);
   5->SetBinContent(22,8.792334);
   5->SetBinContent(23,8.655927);
   5->SetBinContent(24,9.052747);
   5->SetBinContent(25,8.693129);
   5->SetBinContent(26,8.891539);
   5->SetBinContent(27,8.854337);
   5->SetBinContent(28,9.027946);
   5->SetBinContent(29,9.213955);
   5->SetBinContent(30,10.0076);
   5->SetBinContent(31,9.573573);
   5->SetBinContent(32,9.747182);
   5->SetBinContent(33,9.90839);
   5->SetBinContent(34,9.722381);
   5->SetBinContent(35,10.45402);
   5->SetBinContent(36,10.1688);
   5->SetBinContent(37,10.85084);
   5->SetBinContent(38,10.76403);
   5->SetBinContent(39,10.54082);
   5->SetBinContent(40,11.17325);
   5->SetBinContent(41,11.58247);
   5->SetBinContent(42,12.1405);
   5->SetBinContent(43,12.87214);
   5->SetBinContent(44,13.00855);
   5->SetBinContent(45,13.44257);
   5->SetBinContent(46,15.55068);
   5->SetBinContent(47,16.31954);
   5->SetBinContent(48,17.15044);
   5->SetBinContent(49,20.27564);
   5->SetBinContent(50,24.07053);
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
   6->SetBinContent(1,173.0682);
   6->SetBinContent(2,173.3718);
   6->SetBinContent(3,176.6361);
   6->SetBinContent(4,180.7354);
   6->SetBinContent(5,183.9996);
   6->SetBinContent(6,176.712);
   6->SetBinContent(7,178.2302);
   6->SetBinContent(8,177.6229);
   6->SetBinContent(9,183.0886);
   6->SetBinContent(10,176.1806);
   6->SetBinContent(11,182.8609);
   6->SetBinContent(12,180.3558);
   6->SetBinContent(13,181.874);
   6->SetBinContent(14,192.6536);
   6->SetBinContent(15,185.9733);
   6->SetBinContent(16,184.6828);
   6->SetBinContent(17,181.7981);
   6->SetBinContent(18,188.6302);
   6->SetBinContent(19,191.0594);
   6->SetBinContent(20,191.8186);
   6->SetBinContent(21,199.9412);
   6->SetBinContent(22,192.1222);
   6->SetBinContent(23,194.0959);
   6->SetBinContent(24,195.3865);
   6->SetBinContent(25,207.6084);
   6->SetBinContent(26,205.4069);
   6->SetBinContent(27,213.5295);
   6->SetBinContent(28,209.1266);
   6->SetBinContent(29,213.8332);
   6->SetBinContent(30,213.6055);
   6->SetBinContent(31,222.8668);
   6->SetBinContent(32,228.712);
   6->SetBinContent(33,226.2828);
   6->SetBinContent(34,234.2536);
   6->SetBinContent(35,235.0128);
   6->SetBinContent(36,243.3631);
   6->SetBinContent(37,253.6113);
   6->SetBinContent(38,250.5748);
   6->SetBinContent(39,274.6353);
   6->SetBinContent(40,277.0641);
   6->SetBinContent(41,293.2302);
   6->SetBinContent(42,307.0435);
   6->SetBinContent(43,324.8034);
   6->SetBinContent(44,335.5049);
   6->SetBinContent(45,370.5694);
   6->SetBinContent(46,401.6114);
   6->SetBinContent(47,450.4133);
   6->SetBinContent(48,508.7783);
   6->SetBinContent(49,604.9774);
   6->SetBinContent(50,774.9037);
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
   7->SetBinContent(1,85.97407);
   7->SetBinContent(2,81.87315);
   7->SetBinContent(3,84.60709);
   7->SetBinContent(4,84.65591);
   7->SetBinContent(5,88.12217);
   7->SetBinContent(6,83.33776);
   7->SetBinContent(7,83.77715);
   7->SetBinContent(8,85.72997);
   7->SetBinContent(9,84.21653);
   7->SetBinContent(10,83.72832);
   7->SetBinContent(11,87.63396);
   7->SetBinContent(12,85.19294);
   7->SetBinContent(13,85.14412);
   7->SetBinContent(14,87.4875);
   7->SetBinContent(15,92.27191);
   7->SetBinContent(16,84.90002);
   7->SetBinContent(17,90.61201);
   7->SetBinContent(18,85.72997);
   7->SetBinContent(19,88.65919);
   7->SetBinContent(20,92.02781);
   7->SetBinContent(21,92.12545);
   7->SetBinContent(22,91.5396);
   7->SetBinContent(23,93.29714);
   7->SetBinContent(24,92.22309);
   7->SetBinContent(25,95.24996);
   7->SetBinContent(26,92.12545);
   7->SetBinContent(27,95.59171);
   7->SetBinContent(28,99.25324);
   7->SetBinContent(29,97.0075);
   7->SetBinContent(30,98.32565);
   7->SetBinContent(31,99.44852);
   7->SetBinContent(32,105.2093);
   7->SetBinContent(33,104.7211);
   7->SetBinContent(34,107.2598);
   7->SetBinContent(35,110.7261);
   7->SetBinContent(36,115.5105);
   7->SetBinContent(37,114.0459);
   7->SetBinContent(38,114.9734);
   7->SetBinContent(39,118.4885);
   7->SetBinContent(40,119.0255);
   7->SetBinContent(41,130.2546);
   7->SetBinContent(42,135.0886);
   7->SetBinContent(43,139.6784);
   7->SetBinContent(44,147.6374);
   7->SetBinContent(45,154.9128);
   7->SetBinContent(46,171.7097);
   7->SetBinContent(47,188.4089);
   7->SetBinContent(48,222.6374);
   7->SetBinContent(49,272.5886);
   7->SetBinContent(50,399.0534);
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
   8->SetBinContent(1,3.522073);
   8->SetBinContent(2,2.641554);
   8->SetBinContent(3,4.255837);
   8->SetBinContent(4,3.081813);
   8->SetBinContent(5,4.549343);
   8->SetBinContent(6,3.375319);
   8->SetBinContent(7,3.081813);
   8->SetBinContent(8,3.228566);
   8->SetBinContent(9,4.549343);
   8->SetBinContent(10,4.549343);
   8->SetBinContent(11,5.42986);
   8->SetBinContent(12,4.40259);
   8->SetBinContent(13,3.815579);
   8->SetBinContent(14,3.962332);
   8->SetBinContent(15,3.962332);
   8->SetBinContent(16,5.283107);
   8->SetBinContent(17,2.788307);
   8->SetBinContent(18,4.549343);
   8->SetBinContent(19,3.668826);
   8->SetBinContent(20,3.962332);
   8->SetBinContent(21,4.109085);
   8->SetBinContent(22,4.255837);
   8->SetBinContent(23,5.136354);
   8->SetBinContent(24,2.788307);
   8->SetBinContent(25,3.375319);
   8->SetBinContent(26,3.375319);
   8->SetBinContent(27,4.696096);
   8->SetBinContent(28,3.962332);
   8->SetBinContent(29,3.228566);
   8->SetBinContent(30,4.549343);
   8->SetBinContent(31,4.549343);
   8->SetBinContent(32,5.283107);
   8->SetBinContent(33,3.962332);
   8->SetBinContent(34,6.163624);
   8->SetBinContent(35,4.255837);
   8->SetBinContent(36,6.310377);
   8->SetBinContent(37,5.136354);
   8->SetBinContent(38,6.45713);
   8->SetBinContent(39,6.603883);
   8->SetBinContent(40,5.870119);
   8->SetBinContent(41,6.016871);
   8->SetBinContent(42,6.603883);
   8->SetBinContent(43,6.45713);
   8->SetBinContent(44,8.218164);
   8->SetBinContent(45,8.364918);
   8->SetBinContent(46,10.85972);
   8->SetBinContent(47,10.71297);
   8->SetBinContent(48,13.79479);
   8->SetBinContent(49,17.02336);
   8->SetBinContent(50,28.91038);
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
   9->SetBinContent(1,264.8694);
   9->SetBinContent(2,274.9848);
   9->SetBinContent(3,277.5565);
   9->SetBinContent(4,262.9835);
   9->SetBinContent(5,261.9548);
   9->SetBinContent(6,262.4691);
   9->SetBinContent(7,259.3831);
   9->SetBinContent(8,277.3851);
   9->SetBinContent(9,277.728);
   9->SetBinContent(10,276.3564);
   9->SetBinContent(11,255.4398);
   9->SetBinContent(12,262.812);
   9->SetBinContent(13,265.3838);
   9->SetBinContent(14,284.9288);
   9->SetBinContent(15,284.4145);
   9->SetBinContent(16,272.4131);
   9->SetBinContent(17,278.5852);
   9->SetBinContent(18,285.4431);
   9->SetBinContent(19,280.1283);
   9->SetBinContent(20,265.7267);
   9->SetBinContent(21,280.6426);
   9->SetBinContent(22,280.2997);
   9->SetBinContent(23,283.0429);
   9->SetBinContent(24,279.4425);
   9->SetBinContent(25,285.1003);
   9->SetBinContent(26,277.728);
   9->SetBinContent(27,290.0722);
   9->SetBinContent(28,293.6726);
   9->SetBinContent(29,286.8147);
   9->SetBinContent(30,302.245);
   9->SetBinContent(31,308.0742);
   9->SetBinContent(32,303.1023);
   9->SetBinContent(33,310.646);
   9->SetBinContent(34,302.0736);
   9->SetBinContent(35,318.1897);
   9->SetBinContent(36,306.0169);
   9->SetBinContent(37,323.1617);
   9->SetBinContent(38,331.3911);
   9->SetBinContent(39,346.4785);
   9->SetBinContent(40,342.8781);
   9->SetBinContent(41,351.9649);
   9->SetBinContent(42,369.624);
   9->SetBinContent(43,386.4259);
   9->SetBinContent(44,400.3131);
   9->SetBinContent(45,421.9156);
   9->SetBinContent(46,459.977);
   9->SetBinContent(47,488.6087);
   9->SetBinContent(48,520.3265);
   9->SetBinContent(49,615.9944);
   9->SetBinContent(50,705.1472);
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
   10->SetBinContent(1,797.1982);
   10->SetBinContent(2,803.2568);
   10->SetBinContent(3,804.4559);
   10->SetBinContent(4,807.7377);
   10->SetBinContent(5,812.2816);
   10->SetBinContent(6,807.2959);
   10->SetBinContent(7,804.0773);
   10->SetBinContent(8,797.64);
   10->SetBinContent(9,817.646);
   10->SetBinContent(10,817.3304);
   10->SetBinContent(11,806.791);
   10->SetBinContent(12,830.5836);
   10->SetBinContent(13,806.6648);
   10->SetBinContent(14,823.1997);
   10->SetBinContent(15,838.5986);
   10->SetBinContent(16,829.7632);
   10->SetBinContent(17,827.4281);
   10->SetBinContent(18,840.3026);
   10->SetBinContent(19,840.6813);
   10->SetBinContent(20,850.7158);
   10->SetBinContent(21,859.6775);
   10->SetBinContent(22,847.939);
   10->SetBinContent(23,869.5858);
   10->SetBinContent(24,873.4987);
   10->SetBinContent(25,873.7511);
   10->SetBinContent(26,901.8352);
   10->SetBinContent(27,905.6218);
   10->SetBinContent(28,917.2341);
   10->SetBinContent(29,905.8743);
   10->SetBinContent(30,941.3423);
   10->SetBinContent(31,942.0996);
   10->SetBinContent(32,955.7314);
   10->SetBinContent(33,973.5917);
   10->SetBinContent(34,985.8351);
   10->SetBinContent(35,1008.933);
   10->SetBinContent(36,1026.289);
   10->SetBinContent(37,1044.591);
   10->SetBinContent(38,1065.354);
   10->SetBinContent(39,1107.827);
   10->SetBinContent(40,1125.12);
   10->SetBinContent(41,1180.531);
   10->SetBinContent(42,1202.556);
   10->SetBinContent(43,1260.933);
   10->SetBinContent(44,1320.383);
   10->SetBinContent(45,1389.236);
   10->SetBinContent(46,1498.228);
   10->SetBinContent(47,1630.255);
   10->SetBinContent(48,1820.469);
   10->SetBinContent(49,2098.877);
   10->SetBinContent(50,2647.694);
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
   11->SetBinContent(1,160.9725);
   11->SetBinContent(2,160.9725);
   11->SetBinContent(3,131.7047);
   11->SetBinContent(4,131.7047);
   11->SetBinContent(5,117.0709);
   11->SetBinContent(6,117.0709);
   11->SetBinContent(7,263.4095);
   11->SetBinContent(8,175.6063);
   11->SetBinContent(9,160.9725);
   11->SetBinContent(10,234.1418);
   11->SetBinContent(11,175.6063);
   11->SetBinContent(12,117.0709);
   11->SetBinContent(13,160.9725);
   11->SetBinContent(14,175.6063);
   11->SetBinContent(15,175.6063);
   11->SetBinContent(16,204.8741);
   11->SetBinContent(17,204.8741);
   11->SetBinContent(18,87.80315);
   11->SetBinContent(19,175.6063);
   11->SetBinContent(20,160.9725);
   11->SetBinContent(21,160.9725);
   11->SetBinContent(22,248.7757);
   11->SetBinContent(23,175.6063);
   11->SetBinContent(24,117.0709);
   11->SetBinContent(25,160.9725);
   11->SetBinContent(26,175.6063);
   11->SetBinContent(27,307.3111);
   11->SetBinContent(28,234.1418);
   11->SetBinContent(29,190.2402);
   11->SetBinContent(30,219.5079);
   11->SetBinContent(31,234.1418);
   11->SetBinContent(32,131.7047);
   11->SetBinContent(33,175.6063);
   11->SetBinContent(34,219.5079);
   11->SetBinContent(35,248.7757);
   11->SetBinContent(36,204.8741);
   11->SetBinContent(37,219.5079);
   11->SetBinContent(38,263.4095);
   11->SetBinContent(39,117.0709);
   11->SetBinContent(40,351.2126);
   11->SetBinContent(41,204.8741);
   11->SetBinContent(42,248.7757);
   11->SetBinContent(43,365.8465);
   11->SetBinContent(44,292.6772);
   11->SetBinContent(45,292.6772);
   11->SetBinContent(46,336.5788);
   11->SetBinContent(47,292.6772);
   11->SetBinContent(48,497.5511);
   11->SetBinContent(49,512.185);
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
   12->SetBinContent(1,754.8748);
   12->SetBinContent(2,596.2872);
   12->SetBinContent(3,685.0963);
   12->SetBinContent(4,716.8138);
   12->SetBinContent(5,615.3177);
   12->SetBinContent(6,583.6002);
   12->SetBinContent(7,704.1268);
   12->SetBinContent(8,551.8826);
   12->SetBinContent(9,761.2183);
   12->SetBinContent(10,526.5086);
   12->SetBinContent(11,761.2183);
   12->SetBinContent(12,824.6534);
   12->SetBinContent(13,697.7833);
   12->SetBinContent(14,710.4703);
   12->SetBinContent(15,729.5008);
   12->SetBinContent(16,685.0963);
   12->SetBinContent(17,843.6839);
   12->SetBinContent(18,666.0657);
   12->SetBinContent(19,729.5008);
   12->SetBinContent(20,640.6917);
   12->SetBinContent(21,678.7527);
   12->SetBinContent(22,716.8138);
   12->SetBinContent(23,710.4703);
   12->SetBinContent(24,666.0657);
   12->SetBinContent(25,792.9359);
   12->SetBinContent(26,830.9969);
   12->SetBinContent(27,786.5923);
   12->SetBinContent(28,837.3404);
   12->SetBinContent(29,754.8748);
   12->SetBinContent(30,837.3404);
   12->SetBinContent(31,945.18);
   12->SetBinContent(32,830.9969);
   12->SetBinContent(33,945.18);
   12->SetBinContent(34,983.241);
   12->SetBinContent(35,995.928);
   12->SetBinContent(36,1110.111);
   12->SetBinContent(37,1230.638);
   12->SetBinContent(38,1313.103);
   12->SetBinContent(39,1224.294);
   12->SetBinContent(40,1230.638);
   12->SetBinContent(41,1249.668);
   12->SetBinContent(42,1363.851);
   12->SetBinContent(43,1585.874);
   12->SetBinContent(44,1478.034);
   12->SetBinContent(45,1693.714);
   12->SetBinContent(46,1998.202);
   12->SetBinContent(47,2492.995);
   12->SetBinContent(48,3387.43);
   12->SetBinContent(49,4643.423);
   12->SetBinContent(50,10295.43);
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
   13->SetBinContent(1,1549.915);
   13->SetBinContent(2,1223.617);
   13->SetBinContent(3,1386.766);
   13->SetBinContent(4,978.8938);
   13->SetBinContent(5,815.7449);
   13->SetBinContent(6,978.8938);
   13->SetBinContent(7,1957.787);
   13->SetBinContent(8,978.8938);
   13->SetBinContent(9,1468.341);
   13->SetBinContent(10,1060.468);
   13->SetBinContent(11,1386.766);
   13->SetBinContent(12,2120.936);
   13->SetBinContent(13,1468.341);
   13->SetBinContent(14,1631.49);
   13->SetBinContent(15,2039.362);
   13->SetBinContent(16,1386.766);
   13->SetBinContent(17,815.7449);
   13->SetBinContent(18,1142.043);
   13->SetBinContent(19,1794.638);
   13->SetBinContent(20,1386.766);
   13->SetBinContent(21,1876.213);
   13->SetBinContent(22,1386.766);
   13->SetBinContent(23,652.5959);
   13->SetBinContent(24,1305.192);
   13->SetBinContent(25,1142.043);
   13->SetBinContent(26,1549.915);
   13->SetBinContent(27,1549.915);
   13->SetBinContent(28,1794.638);
   13->SetBinContent(29,1713.064);
   13->SetBinContent(30,1876.213);
   13->SetBinContent(31,1060.468);
   13->SetBinContent(32,2365.66);
   13->SetBinContent(33,1468.341);
   13->SetBinContent(34,1468.341);
   13->SetBinContent(35,1631.49);
   13->SetBinContent(36,1305.192);
   13->SetBinContent(37,2365.66);
   13->SetBinContent(38,1305.192);
   13->SetBinContent(39,2120.936);
   13->SetBinContent(40,1794.638);
   13->SetBinContent(41,1957.787);
   13->SetBinContent(42,2202.511);
   13->SetBinContent(43,1876.213);
   13->SetBinContent(44,1631.49);
   13->SetBinContent(45,1957.787);
   13->SetBinContent(46,2284.085);
   13->SetBinContent(47,2610.383);
   13->SetBinContent(48,3426.128);
   13->SetBinContent(49,4323.447);
   13->SetBinContent(50,4894.47);
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
   14->SetBinContent(1,729.3358);
   14->SetBinContent(2,640.6873);
   14->SetBinContent(3,709.1884);
   14->SetBinContent(4,552.0387);
   14->SetBinContent(5,584.2745);
   14->SetBinContent(6,523.8323);
   14->SetBinContent(7,600.3925);
   14->SetBinContent(8,668.8936);
   14->SetBinContent(9,600.3925);
   14->SetBinContent(10,705.1589);
   14->SetBinContent(11,685.0115);
   14->SetBinContent(12,636.6578);
   14->SetBinContent(13,697.1);
   14->SetBinContent(14,656.8052);
   14->SetBinContent(15,664.8641);
   14->SetBinContent(16,648.7462);
   14->SetBinContent(17,672.9231);
   14->SetBinContent(18,640.6873);
   14->SetBinContent(19,608.4514);
   14->SetBinContent(20,725.3063);
   14->SetBinContent(21,689.041);
   14->SetBinContent(22,781.7191);
   14->SetBinContent(23,737.3948);
   14->SetBinContent(24,668.8936);
   14->SetBinContent(25,749.4832);
   14->SetBinContent(26,713.2179);
   14->SetBinContent(27,801.8665);
   14->SetBinContent(28,685.0115);
   14->SetBinContent(29,813.9549);
   14->SetBinContent(30,785.7485);
   14->SetBinContent(31,757.5422);
   14->SetBinContent(32,797.837);
   14->SetBinContent(33,858.2792);
   14->SetBinContent(34,838.1318);
   14->SetBinContent(35,926.7803);
   14->SetBinContent(36,934.8393);
   14->SetBinContent(37,954.9867);
   14->SetBinContent(38,922.7509);
   14->SetBinContent(39,1019.458);
   14->SetBinContent(40,1043.635);
   14->SetBinContent(41,1245.106);
   14->SetBinContent(42,1289.43);
   14->SetBinContent(43,1325.694);
   14->SetBinContent(44,1309.577);
   14->SetBinContent(45,1422.4);
   14->SetBinContent(46,1615.812);
   14->SetBinContent(47,1978.46);
   14->SetBinContent(48,2018.754);
   14->SetBinContent(49,2417.678);
   14->SetBinContent(50,3022.109);
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
   15->SetBinContent(1,46.35416);
   15->SetBinContent(2,42.49131);
   15->SetBinContent(3,19.31424);
   15->SetBinContent(4,27.03993);
   15->SetBinContent(5,27.03993);
   15->SetBinContent(6,42.49131);
   15->SetBinContent(7,34.76562);
   15->SetBinContent(8,38.62847);
   15->SetBinContent(9,11.58854);
   15->SetBinContent(10,27.03993);
   15->SetBinContent(11,27.03993);
   15->SetBinContent(12,54.07985);
   15->SetBinContent(13,27.03993);
   15->SetBinContent(14,54.07985);
   15->SetBinContent(15,50.21701);
   15->SetBinContent(16,57.9427);
   15->SetBinContent(17,61.80555);
   15->SetBinContent(18,65.6684);
   15->SetBinContent(19,34.76562);
   15->SetBinContent(20,42.49131);
   15->SetBinContent(21,38.62847);
   15->SetBinContent(22,34.76562);
   15->SetBinContent(23,57.9427);
   15->SetBinContent(24,69.53124);
   15->SetBinContent(25,61.80555);
   15->SetBinContent(26,42.49131);
   15->SetBinContent(27,42.49131);
   15->SetBinContent(28,61.80555);
   15->SetBinContent(29,57.9427);
   15->SetBinContent(30,73.39409);
   15->SetBinContent(31,61.80555);
   15->SetBinContent(32,57.9427);
   15->SetBinContent(33,77.25694);
   15->SetBinContent(34,92.70832);
   15->SetBinContent(35,54.07985);
   15->SetBinContent(36,65.6684);
   15->SetBinContent(37,77.25694);
   15->SetBinContent(38,65.6684);
   15->SetBinContent(39,115.8854);
   15->SetBinContent(40,104.2969);
   15->SetBinContent(41,100.434);
   15->SetBinContent(42,69.53124);
   15->SetBinContent(43,77.25694);
   15->SetBinContent(44,92.70832);
   15->SetBinContent(45,96.57117);
   15->SetBinContent(46,92.70832);
   15->SetBinContent(47,119.7482);
   15->SetBinContent(48,177.691);
   15->SetBinContent(49,212.4567);
   15->SetBinContent(50,231.771);
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
   16->SetBinContent(1,819.8359);
   16->SetBinContent(2,832.1643);
   16->SetBinContent(3,856.821);
   16->SetBinContent(4,881.4778);
   16->SetBinContent(5,986.2689);
   16->SetBinContent(6,918.4629);
   16->SetBinContent(7,887.642);
   16->SetBinContent(8,862.9852);
   16->SetBinContent(9,856.821);
   16->SetBinContent(10,727.3732);
   16->SetBinContent(11,770.5225);
   16->SetBinContent(12,819.8359);
   16->SetBinContent(13,819.8359);
   16->SetBinContent(14,862.9852);
   16->SetBinContent(15,869.1494);
   16->SetBinContent(16,708.8806);
   16->SetBinContent(17,949.2838);
   16->SetBinContent(18,856.821);
   16->SetBinContent(19,961.6122);
   16->SetBinContent(20,721.209);
   16->SetBinContent(21,795.1792);
   16->SetBinContent(22,789.015);
   16->SetBinContent(23,930.7913);
   16->SetBinContent(24,906.1345);
   16->SetBinContent(25,1004.761);
   16->SetBinContent(26,887.642);
   16->SetBinContent(27,949.2838);
   16->SetBinContent(28,1084.896);
   16->SetBinContent(29,1023.254);
   16->SetBinContent(30,949.2838);
   16->SetBinContent(31,955.448);
   16->SetBinContent(32,1103.388);
   16->SetBinContent(33,924.6271);
   16->SetBinContent(34,1066.403);
   16->SetBinContent(35,1004.761);
   16->SetBinContent(36,1245.165);
   16->SetBinContent(37,1041.747);
   16->SetBinContent(38,1393.105);
   16->SetBinContent(39,1220.508);
   16->SetBinContent(40,1448.583);
   16->SetBinContent(41,1325.299);
   16->SetBinContent(42,1430.09);
   16->SetBinContent(43,1528.717);
   16->SetBinContent(44,1769.12);
   16->SetBinContent(45,1787.613);
   16->SetBinContent(46,1855.419);
   16->SetBinContent(47,2194.446);
   16->SetBinContent(48,2132.806);
   16->SetBinContent(49,2619.767);
   16->SetBinContent(50,4092.978);
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
   17->SetBinContent(1,749.6055);
   17->SetBinContent(2,562.2042);
   17->SetBinContent(3,679.33);
   17->SetBinContent(4,632.4797);
   17->SetBinContent(5,515.3538);
   17->SetBinContent(6,609.0545);
   17->SetBinContent(7,819.881);
   17->SetBinContent(8,421.6531);
   17->SetBinContent(9,515.3538);
   17->SetBinContent(10,538.779);
   17->SetBinContent(11,655.9048);
   17->SetBinContent(12,773.0307);
   17->SetBinContent(13,726.1804);
   17->SetBinContent(14,468.5034);
   17->SetBinContent(15,632.4797);
   17->SetBinContent(16,702.7552);
   17->SetBinContent(17,609.0545);
   17->SetBinContent(18,562.2042);
   17->SetBinContent(19,843.3062);
   17->SetBinContent(20,819.881);
   17->SetBinContent(21,679.33);
   17->SetBinContent(22,773.0307);
   17->SetBinContent(23,327.9524);
   17->SetBinContent(24,562.2042);
   17->SetBinContent(25,819.881);
   17->SetBinContent(26,819.881);
   17->SetBinContent(27,585.6293);
   17->SetBinContent(28,913.5817);
   17->SetBinContent(29,562.2042);
   17->SetBinContent(30,773.0307);
   17->SetBinContent(31,819.881);
   17->SetBinContent(32,843.3062);
   17->SetBinContent(33,866.7314);
   17->SetBinContent(34,749.6055);
   17->SetBinContent(35,773.0307);
   17->SetBinContent(36,866.7314);
   17->SetBinContent(37,1007.282);
   17->SetBinContent(38,632.4797);
   17->SetBinContent(39,937.0069);
   17->SetBinContent(40,1288.385);
   17->SetBinContent(41,1100.983);
   17->SetBinContent(42,1147.833);
   17->SetBinContent(43,1311.81);
   17->SetBinContent(44,1100.983);
   17->SetBinContent(45,1827.163);
   17->SetBinContent(46,1710.038);
   17->SetBinContent(47,2319.094);
   17->SetBinContent(48,2483.071);
   17->SetBinContent(49,2951.576);
   17->SetBinContent(50,4661.623);
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
