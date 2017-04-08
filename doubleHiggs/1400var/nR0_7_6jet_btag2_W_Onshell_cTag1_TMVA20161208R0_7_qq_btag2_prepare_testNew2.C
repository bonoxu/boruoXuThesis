{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:02:26 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.168054,1.31746,5.650095);
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
   
   TH1F *THStack_stack_20 = new TH1F("THStack_stack_20","",50,0,1);
   THStack_stack_20->SetMinimum(0.02625503);
   THStack_stack_20->SetMaximum(88032.46);
   THStack_stack_20->SetDirectory(0);
   THStack_stack_20->SetStats(0);
   THStack_stack_20->SetLineWidth(2);
   THStack_stack_20->SetMarkerSize(1.2);
   THStack_stack_20->GetXaxis()->SetTitle("Highest C tag of W jets");
   THStack_stack_20->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_20->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_20->GetXaxis()->SetLabelColor(ci);
   THStack_stack_20->GetXaxis()->SetLabelFont(42);
   THStack_stack_20->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_20->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_20->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_20->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_20->GetXaxis()->SetTitleColor(ci);
   THStack_stack_20->GetXaxis()->SetTitleFont(42);
   THStack_stack_20->GetYaxis()->SetTitle("Number of events");
   THStack_stack_20->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_20->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_20->GetYaxis()->SetLabelColor(ci);
   THStack_stack_20->GetYaxis()->SetLabelFont(42);
   THStack_stack_20->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_20->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_20->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_20->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_20->GetYaxis()->SetTitleColor(ci);
   THStack_stack_20->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_20->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_20->GetZaxis()->SetLabelColor(ci);
   THStack_stack_20->GetZaxis()->SetLabelFont(42);
   THStack_stack_20->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_20->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_20->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_20->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_20->GetZaxis()->SetTitleColor(ci);
   THStack_stack_20->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_20);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,0.030112);
   0->SetBinContent(2,0.013174);
   0->SetBinContent(3,0.013174);
   0->SetBinContent(4,0.007528);
   0->SetBinContent(5,0.016938);
   0->SetBinContent(6,0.05081402);
   0->SetBinContent(7,0.1373861);
   0->SetBinContent(8,0.2540702);
   0->SetBinContent(9,0.4780266);
   0->SetBinContent(10,0.560835);
   0->SetBinContent(11,0.6530538);
   0->SetBinContent(12,0.788559);
   0->SetBinContent(13,0.7772669);
   0->SetBinContent(14,0.8469015);
   0->SetBinContent(15,0.790441);
   0->SetBinContent(16,0.9466484);
   0->SetBinContent(17,0.8581936);
   0->SetBinContent(18,0.7716209);
   0->SetBinContent(19,0.8638397);
   0->SetBinContent(20,0.6643459);
   0->SetBinContent(21,0.4780266);
   0->SetBinContent(22,0.3745173);
   0->SetBinContent(23,0.3801633);
   0->SetBinContent(24,0.3895732);
   0->SetBinContent(25,0.3124118);
   0->SetBinContent(26,0.3274677);
   0->SetBinContent(27,0.3124118);
   0->SetBinContent(28,0.2559521);
   0->SetBinContent(29,0.284182);
   0->SetBinContent(30,0.2691261);
   0->SetBinContent(31,0.2352502);
   0->SetBinContent(32,0.2126662);
   0->SetBinContent(33,0.2352502);
   0->SetBinContent(34,0.2239582);
   0->SetBinContent(35,0.1787901);
   0->SetBinContent(36,0.1750261);
   0->SetBinContent(37,0.2089022);
   0->SetBinContent(38,0.1618521);
   0->SetBinContent(39,0.1693801);
   0->SetBinContent(40,0.1693801);
   0->SetBinContent(41,0.1863181);
   0->SetBinContent(42,0.1844361);
   0->SetBinContent(43,0.1656161);
   0->SetBinContent(44,0.1957282);
   0->SetBinContent(45,0.2183122);
   0->SetBinContent(46,0.2371322);
   0->SetBinContent(47,0.2352502);
   0->SetBinContent(48,0.1919641);
   0->SetBinContent(49,0.1449141);
   0->SetBinContent(50,0.04328601);
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
   1->SetBinContent(1,0.2710074);
   1->SetBinContent(2,0.07151605);
   1->SetBinContent(3,0.07904406);
   1->SetBinContent(4,0.04610903);
   1->SetBinContent(5,0.04422703);
   1->SetBinContent(6,0.06022404);
   1->SetBinContent(7,0.1072741);
   1->SetBinContent(8,0.1722028);
   1->SetBinContent(9,0.2296034);
   1->SetBinContent(10,0.2672434);
   1->SetBinContent(11,0.2954736);
   1->SetBinContent(12,0.3058247);
   1->SetBinContent(13,0.3453471);
   1->SetBinContent(14,0.3754593);
   1->SetBinContent(15,0.4262738);
   1->SetBinContent(16,0.5241379);
   1->SetBinContent(17,0.4083946);
   1->SetBinContent(18,0.4046306);
   1->SetBinContent(19,0.4780293);
   1->SetBinContent(20,0.3585212);
   1->SetBinContent(21,0.3152348);
   1->SetBinContent(22,0.2521873);
   1->SetBinContent(23,0.2606563);
   1->SetBinContent(24,0.2691254);
   1->SetBinContent(25,0.2597153);
   1->SetBinContent(26,0.2324263);
   1->SetBinContent(27,0.2220754);
   1->SetBinContent(28,0.2305444);
   1->SetBinContent(29,0.2211344);
   1->SetBinContent(30,0.2211344);
   1->SetBinContent(31,0.2107835);
   1->SetBinContent(32,0.1985506);
   1->SetBinContent(33,0.2070195);
   1->SetBinContent(34,0.1844357);
   1->SetBinContent(35,0.1627928);
   1->SetBinContent(36,0.1722028);
   1->SetBinContent(37,0.1533829);
   1->SetBinContent(38,0.1562059);
   1->SetBinContent(39,0.1590289);
   1->SetBinContent(40,0.1251531);
   1->SetBinContent(41,0.1505599);
   1->SetBinContent(42,0.139268);
   1->SetBinContent(43,0.1166841);
   1->SetBinContent(44,0.1148021);
   1->SetBinContent(45,0.1035101);
   1->SetBinContent(46,0.1129201);
   1->SetBinContent(47,0.08186706);
   1->SetBinContent(48,0.06587005);
   1->SetBinContent(49,0.03387602);
   1->SetBinContent(50,0.003764);
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
   2->SetBinContent(1,0.2926506);
   2->SetBinContent(2,0.06681105);
   2->SetBinContent(3,0.03575802);
   2->SetBinContent(4,0.03764002);
   2->SetBinContent(5,0.04328603);
   2->SetBinContent(6,0.09504107);
   2->SetBinContent(7,0.2390133);
   2->SetBinContent(8,0.3745183);
   2->SetBinContent(9,0.6455241);
   2->SetBinContent(10,0.8958244);
   2->SetBinContent(11,1.02474);
   2->SetBinContent(12,1.100964);
   2->SetBinContent(13,1.203537);
   2->SetBinContent(14,1.275997);
   2->SetBinContent(15,1.411507);
   2->SetBinContent(16,1.579012);
   2->SetBinContent(17,1.467028);
   2->SetBinContent(18,1.34187);
   2->SetBinContent(19,1.464205);
   2->SetBinContent(20,0.9870993);
   2->SetBinContent(21,0.7509137);
   2->SetBinContent(22,0.7349171);
   2->SetBinContent(23,0.6615208);
   2->SetBinContent(24,0.5834196);
   2->SetBinContent(25,0.5335477);
   2->SetBinContent(26,0.4959084);
   2->SetBinContent(27,0.5175511);
   2->SetBinContent(28,0.4864983);
   2->SetBinContent(29,0.4422709);
   2->SetBinContent(30,0.3971025);
   2->SetBinContent(31,0.3999256);
   2->SetBinContent(32,0.335937);
   2->SetBinContent(33,0.3086478);
   2->SetBinContent(34,0.2954736);
   2->SetBinContent(35,0.3077067);
   2->SetBinContent(36,0.2625383);
   2->SetBinContent(37,0.2474822);
   2->SetBinContent(38,0.2559513);
   2->SetBinContent(39,0.2371313);
   2->SetBinContent(40,0.2079605);
   2->SetBinContent(41,0.2211344);
   2->SetBinContent(42,0.2070195);
   2->SetBinContent(43,0.2211344);
   2->SetBinContent(44,0.2154885);
   2->SetBinContent(45,0.2220754);
   2->SetBinContent(46,0.2625383);
   2->SetBinContent(47,0.2644204);
   2->SetBinContent(48,0.2907686);
   2->SetBinContent(49,0.2041965);
   2->SetBinContent(50,0.04140402);
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
   3->SetBinContent(1,2.041876);
   3->SetBinContent(2,0.5121747);
   3->SetBinContent(3,0.3073049);
   3->SetBinContent(4,0.3073049);
   3->SetBinContent(5,0.3551078);
   3->SetBinContent(6,0.6760713);
   3->SetBinContent(7,1.195077);
   3->SetBinContent(8,1.843834);
   3->SetBinContent(9,3.025255);
   3->SetBinContent(10,3.892541);
   3->SetBinContent(11,4.534451);
   3->SetBinContent(12,4.138381);
   3->SetBinContent(13,4.623225);
   3->SetBinContent(14,5.046609);
   3->SetBinContent(15,5.149041);
   3->SetBinContent(16,5.640714);
   3->SetBinContent(17,4.964664);
   3->SetBinContent(18,4.746143);
   3->SetBinContent(19,5.469994);
   3->SetBinContent(20,4.19984);
   3->SetBinContent(21,2.772581);
   3->SetBinContent(22,3.0594);
   3->SetBinContent(23,2.608685);
   3->SetBinContent(24,2.690633);
   3->SetBinContent(25,2.349182);
   3->SetBinContent(26,2.547224);
   3->SetBinContent(27,2.472104);
   3->SetBinContent(28,2.130653);
   3->SetBinContent(29,2.178456);
   3->SetBinContent(30,2.062363);
   3->SetBinContent(31,2.08285);
   3->SetBinContent(32,2.069192);
   3->SetBinContent(33,1.87115);
   3->SetBinContent(34,1.679938);
   3->SetBinContent(35,1.707254);
   3->SetBinContent(36,1.461409);
   3->SetBinContent(37,1.38629);
   3->SetBinContent(38,1.406777);
   3->SetBinContent(39,1.406777);
   3->SetBinContent(40,1.324829);
   3->SetBinContent(41,1.222393);
   3->SetBinContent(42,1.17459);
   3->SetBinContent(43,1.393119);
   3->SetBinContent(44,1.195077);
   3->SetBinContent(45,1.304341);
   3->SetBinContent(46,1.147274);
   3->SetBinContent(47,1.331658);
   3->SetBinContent(48,0.9492322);
   3->SetBinContent(49,0.7102164);
   3->SetBinContent(50,0.170725);
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
   4->SetBinContent(1,3.019793);
   4->SetBinContent(2,0.5944933);
   4->SetBinContent(3,0.4208802);
   4->SetBinContent(4,0.2735721);
   4->SetBinContent(5,0.3472261);
   4->SetBinContent(6,0.6155373);
   4->SetBinContent(7,0.9785466);
   4->SetBinContent(8,1.699296);
   4->SetBinContent(9,2.351653);
   4->SetBinContent(10,3.372277);
   4->SetBinContent(11,3.808935);
   4->SetBinContent(12,4.229811);
   4->SetBinContent(13,4.298203);
   4->SetBinContent(14,5.350392);
   4->SetBinContent(15,5.881747);
   4->SetBinContent(16,6.728759);
   4->SetBinContent(17,6.670889);
   4->SetBinContent(18,6.586714);
   4->SetBinContent(19,8.7122);
   4->SetBinContent(20,5.466133);
   4->SetBinContent(21,3.719499);
   4->SetBinContent(22,4.250854);
   4->SetBinContent(23,3.593236);
   4->SetBinContent(24,3.351233);
   4->SetBinContent(25,3.530105);
   4->SetBinContent(26,3.645846);
   4->SetBinContent(27,3.582714);
   4->SetBinContent(28,3.545888);
   4->SetBinContent(29,3.540627);
   4->SetBinContent(30,3.798413);
   4->SetBinContent(31,3.303884);
   4->SetBinContent(32,3.082925);
   4->SetBinContent(33,3.272319);
   4->SetBinContent(34,2.977706);
   4->SetBinContent(35,2.877748);
   4->SetBinContent(36,3.009271);
   4->SetBinContent(37,3.009271);
   4->SetBinContent(38,2.930357);
   4->SetBinContent(39,3.014532);
   4->SetBinContent(40,2.898792);
   4->SetBinContent(41,2.77779);
   4->SetBinContent(42,2.956662);
   4->SetBinContent(43,3.572192);
   4->SetBinContent(44,3.540627);
   4->SetBinContent(45,3.866805);
   4->SetBinContent(46,4.261376);
   4->SetBinContent(47,4.366595);
   4->SetBinContent(48,4.797993);
   4->SetBinContent(49,3.535366);
   4->SetBinContent(50,0.7260184);
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
   5->SetBinContent(1,4.675197);
   5->SetBinContent(2,0.8556682);
   5->SetBinContent(3,0.6076486);
   5->SetBinContent(4,0.7316584);
   5->SetBinContent(5,1.649331);
   5->SetBinContent(6,3.149862);
   5->SetBinContent(7,5.927709);
   5->SetBinContent(8,11.30966);
   5->SetBinContent(9,18.341);
   5->SetBinContent(10,24.45498);
   5->SetBinContent(11,27.22053);
   5->SetBinContent(12,30.08529);
   5->SetBinContent(13,32.05714);
   5->SetBinContent(14,34.19022);
   5->SetBinContent(15,35.00872);
   5->SetBinContent(16,37.84868);
   5->SetBinContent(17,35.35596);
   5->SetBinContent(18,30.27132);
   5->SetBinContent(19,35.93884);
   5->SetBinContent(20,21.71423);
   5->SetBinContent(21,14.90584);
   5->SetBinContent(22,12.64893);
   5->SetBinContent(23,11.07405);
   5->SetBinContent(24,8.965942);
   5->SetBinContent(25,7.973891);
   5->SetBinContent(26,6.957);
   5->SetBinContent(27,7.167819);
   5->SetBinContent(28,6.448555);
   5->SetBinContent(29,5.977313);
   5->SetBinContent(30,5.295252);
   5->SetBinContent(31,4.762005);
   5->SetBinContent(32,4.538785);
   5->SetBinContent(33,3.869126);
   5->SetBinContent(34,2.976246);
   5->SetBinContent(35,3.100257);
   5->SetBinContent(36,2.963845);
   5->SetBinContent(37,2.083367);
   5->SetBinContent(38,2.033762);
   5->SetBinContent(39,1.723737);
   5->SetBinContent(40,1.562524);
   5->SetBinContent(41,1.029282);
   5->SetBinContent(42,1.12849);
   5->SetBinContent(43,1.00448);
   5->SetBinContent(44,0.8680692);
   5->SetBinContent(45,0.7812623);
   5->SetBinContent(46,0.7068564);
   5->SetBinContent(47,0.5580446);
   5->SetBinContent(48,0.4836387);
   5->SetBinContent(49,0.4216338);
   5->SetBinContent(50,0.049604);
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
   6->SetBinContent(1,123.4219);
   6->SetBinContent(2,27.17443);
   6->SetBinContent(3,16.09204);
   6->SetBinContent(4,17.68608);
   6->SetBinContent(5,26.56717);
   6->SetBinContent(6,53.13401);
   6->SetBinContent(7,98.14558);
   6->SetBinContent(8,174.5105);
   6->SetBinContent(9,268.3359);
   6->SetBinContent(10,359.2607);
   6->SetBinContent(11,424.9118);
   6->SetBinContent(12,459.9763);
   6->SetBinContent(13,533.3776);
   6->SetBinContent(14,690.0924);
   6->SetBinContent(15,748.1012);
   6->SetBinContent(16,868.9781);
   6->SetBinContent(17,823.3456);
   6->SetBinContent(18,745.4437);
   6->SetBinContent(19,872.243);
   6->SetBinContent(20,543.6278);
   6->SetBinContent(21,370.873);
   6->SetBinContent(22,340.2105);
   6->SetBinContent(23,288.7522);
   6->SetBinContent(24,260.139);
   6->SetBinContent(25,240.4785);
   6->SetBinContent(26,224.4609);
   6->SetBinContent(27,218.8434);
   6->SetBinContent(28,212.0113);
   6->SetBinContent(29,196.4492);
   6->SetBinContent(30,189.0098);
   6->SetBinContent(31,167.2988);
   6->SetBinContent(32,160.8463);
   6->SetBinContent(33,140.274);
   6->SetBinContent(34,135.947);
   6->SetBinContent(35,125.7749);
   6->SetBinContent(36,110.2904);
   6->SetBinContent(37,106.9505);
   6->SetBinContent(38,96.55158);
   6->SetBinContent(39,99.8914);
   6->SetBinContent(40,92.0732);
   6->SetBinContent(41,84.10319);
   6->SetBinContent(42,85.849);
   6->SetBinContent(43,90.631);
   6->SetBinContent(44,94.95758);
   6->SetBinContent(45,96.09615);
   6->SetBinContent(46,101.6372);
   6->SetBinContent(47,111.1253);
   6->SetBinContent(48,97.91787);
   6->SetBinContent(49,75.52594);
   6->SetBinContent(50,14.95345);
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
   7->SetBinContent(1,28.07281);
   7->SetBinContent(2,5.858635);
   7->SetBinContent(3,3.466361);
   7->SetBinContent(4,6.200388);
   7->SetBinContent(5,11.08261);
   7->SetBinContent(6,24.65524);
   7->SetBinContent(7,49.6028);
   7->SetBinContent(8,87.43868);
   7->SetBinContent(9,139.3855);
   7->SetBinContent(10,188.1648);
   7->SetBinContent(11,211.2116);
   7->SetBinContent(12,232.1101);
   7->SetBinContent(13,249.737);
   7->SetBinContent(14,264.8737);
   7->SetBinContent(15,286.4558);
   7->SetBinContent(16,315.4109);
   7->SetBinContent(17,340.0691);
   7->SetBinContent(18,296.8562);
   7->SetBinContent(19,415.0202);
   7->SetBinContent(20,243.4382);
   7->SetBinContent(21,164.4343);
   7->SetBinContent(22,145.2448);
   7->SetBinContent(23,131.0359);
   7->SetBinContent(24,123.2241);
   7->SetBinContent(25,114.8758);
   7->SetBinContent(26,111.019);
   7->SetBinContent(27,110.7261);
   7->SetBinContent(28,107.5039);
   7->SetBinContent(29,103.5494);
   7->SetBinContent(30,100.8155);
   7->SetBinContent(31,90.75848);
   7->SetBinContent(32,85.38822);
   7->SetBinContent(33,79.77386);
   7->SetBinContent(34,73.91541);
   7->SetBinContent(35,68.49633);
   7->SetBinContent(36,63.85838);
   7->SetBinContent(37,61.31972);
   7->SetBinContent(38,59.31808);
   7->SetBinContent(39,58.19521);
   7->SetBinContent(40,52.23911);
   7->SetBinContent(41,42.2309);
   7->SetBinContent(42,42.52383);
   7->SetBinContent(43,42.08444);
   7->SetBinContent(44,46.18536);
   7->SetBinContent(45,49.16341);
   7->SetBinContent(46,49.50516);
   7->SetBinContent(47,55.51008);
   7->SetBinContent(48,58.48813);
   7->SetBinContent(49,44.47665);
   7->SetBinContent(50,8.983248);
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
   8->SetBinContent(1,0.733765);
   8->SetBinContent(2,0.146753);
   8->SetBinContent(4,0.146753);
   8->SetBinContent(5,0.146753);
   8->SetBinContent(6,0.733765);
   8->SetBinContent(7,2.348048);
   8->SetBinContent(8,2.054542);
   8->SetBinContent(9,4.842849);
   8->SetBinContent(10,5.576613);
   8->SetBinContent(11,7.631153);
   8->SetBinContent(12,8.218164);
   8->SetBinContent(13,8.951931);
   8->SetBinContent(14,11.59349);
   8->SetBinContent(15,16.2896);
   8->SetBinContent(16,16.87661);
   8->SetBinContent(17,18.4909);
   8->SetBinContent(18,15.11557);
   8->SetBinContent(19,23.33376);
   8->SetBinContent(20,11.59349);
   8->SetBinContent(21,8.951931);
   8->SetBinContent(22,10.41946);
   8->SetBinContent(23,8.951931);
   8->SetBinContent(24,8.658424);
   8->SetBinContent(25,6.45713);
   8->SetBinContent(26,4.989602);
   8->SetBinContent(27,6.45713);
   8->SetBinContent(28,5.576613);
   8->SetBinContent(29,6.603883);
   8->SetBinContent(30,5.870119);
   8->SetBinContent(31,3.815579);
   8->SetBinContent(32,5.723366);
   8->SetBinContent(33,3.522073);
   8->SetBinContent(34,3.081813);
   8->SetBinContent(35,6.310377);
   8->SetBinContent(36,3.815579);
   8->SetBinContent(37,3.228566);
   8->SetBinContent(38,2.641554);
   8->SetBinContent(39,3.522073);
   8->SetBinContent(40,2.348048);
   8->SetBinContent(41,1.614283);
   8->SetBinContent(42,2.641554);
   8->SetBinContent(43,2.348048);
   8->SetBinContent(44,2.348048);
   8->SetBinContent(45,3.228566);
   8->SetBinContent(46,3.962332);
   8->SetBinContent(47,2.641554);
   8->SetBinContent(48,2.788307);
   8->SetBinContent(49,2.201295);
   8->SetBinContent(50,0.146753);
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
   9->SetBinContent(1,153.9518);
   9->SetBinContent(2,29.31602);
   9->SetBinContent(3,19.88692);
   9->SetBinContent(4,32.05903);
   9->SetBinContent(5,61.03241);
   9->SetBinContent(6,132.1799);
   9->SetBinContent(7,246.8682);
   9->SetBinContent(8,465.4633);
   9->SetBinContent(9,632.9677);
   9->SetBinContent(10,747.1519);
   9->SetBinContent(11,764.811);
   9->SetBinContent(12,790.1853);
   9->SetBinContent(13,779.3841);
   9->SetBinContent(14,760.0105);
   9->SetBinContent(15,767.8971);
   9->SetBinContent(16,750.5809);
   9->SetBinContent(17,732.9218);
   9->SetBinContent(18,655.9417);
   9->SetBinContent(19,715.9484);
   9->SetBinContent(20,474.8929);
   9->SetBinContent(21,387.2831);
   9->SetBinContent(22,348.5359);
   9->SetBinContent(23,312.3604);
   9->SetBinContent(24,301.0449);
   9->SetBinContent(25,304.3024);
   9->SetBinContent(26,267.9555);
   9->SetBinContent(27,282.7);
   9->SetBinContent(28,270.3557);
   9->SetBinContent(29,256.297);
   9->SetBinContent(30,274.6419);
   9->SetBinContent(31,236.9251);
   9->SetBinContent(32,217.3818);
   9->SetBinContent(33,207.953);
   9->SetBinContent(34,205.2101);
   9->SetBinContent(35,199.7243);
   9->SetBinContent(36,173.6665);
   9->SetBinContent(37,172.8094);
   9->SetBinContent(38,166.9807);
   9->SetBinContent(39,165.2663);
   9->SetBinContent(40,163.552);
   9->SetBinContent(41,153.6089);
   9->SetBinContent(42,147.7802);
   9->SetBinContent(43,160.6377);
   9->SetBinContent(44,150.0089);
   9->SetBinContent(45,165.0949);
   9->SetBinContent(46,182.4096);
   9->SetBinContent(47,199.3814);
   9->SetBinContent(48,205.2101);
   9->SetBinContent(49,169.2093);
   9->SetBinContent(50,40.80248);
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
   10->SetBinContent(1,429.2418);
   10->SetBinContent(2,88.70116);
   10->SetBinContent(3,60.8165);
   10->SetBinContent(4,70.59505);
   10->SetBinContent(5,133.557);
   10->SetBinContent(6,258.1693);
   10->SetBinContent(7,500.2697);
   10->SetBinContent(8,846.6136);
   10->SetBinContent(9,1301.639);
   10->SetBinContent(10,1642.057);
   10->SetBinContent(11,1887.303);
   10->SetBinContent(12,2059.635);
   10->SetBinContent(13,2213.516);
   10->SetBinContent(14,2490.16);
   10->SetBinContent(15,2604.358);
   10->SetBinContent(16,2909.032);
   10->SetBinContent(17,2958.163);
   10->SetBinContent(18,2696.195);
   10->SetBinContent(19,3625.398);
   10->SetBinContent(20,2140.512);
   10->SetBinContent(21,1460.488);
   10->SetBinContent(22,1318.616);
   10->SetBinContent(23,1175.734);
   10->SetBinContent(24,1110.352);
   10->SetBinContent(25,1058.033);
   10->SetBinContent(26,1004.137);
   10->SetBinContent(27,973.5286);
   10->SetBinContent(28,935.7255);
   10->SetBinContent(29,896.7233);
   10->SetBinContent(30,864.4108);
   10->SetBinContent(31,797.4507);
   10->SetBinContent(32,712.5042);
   10->SetBinContent(33,663.4674);
   10->SetBinContent(34,625.2856);
   10->SetBinContent(35,596.1918);
   10->SetBinContent(36,552.5194);
   10->SetBinContent(37,517.8718);
   10->SetBinContent(38,494.151);
   10->SetBinContent(39,480.2103);
   10->SetBinContent(40,451.2567);
   10->SetBinContent(41,367.2343);
   10->SetBinContent(42,385.3383);
   10->SetBinContent(43,410.6333);
   10->SetBinContent(44,410.1917);
   10->SetBinContent(45,435.8652);
   10->SetBinContent(46,479.4534);
   10->SetBinContent(47,506.7669);
   10->SetBinContent(48,495.0972);
   10->SetBinContent(49,372.5961);
   10->SetBinContent(50,69.27022);
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
   11->SetBinContent(2,14.63386);
   11->SetBinContent(5,14.63386);
   11->SetBinContent(6,14.63386);
   11->SetBinContent(7,14.63386);
   11->SetBinContent(8,131.7047);
   11->SetBinContent(9,117.0709);
   11->SetBinContent(10,146.3386);
   11->SetBinContent(11,395.1142);
   11->SetBinContent(12,278.0434);
   11->SetBinContent(13,395.1142);
   11->SetBinContent(14,468.2834);
   11->SetBinContent(15,482.9173);
   11->SetBinContent(16,790.2281);
   11->SetBinContent(17,775.5943);
   11->SetBinContent(18,614.6219);
   11->SetBinContent(19,1039.004);
   11->SetBinContent(20,526.8188);
   11->SetBinContent(21,292.6772);
   11->SetBinContent(22,336.5788);
   11->SetBinContent(23,219.5079);
   11->SetBinContent(24,263.4095);
   11->SetBinContent(25,219.5079);
   11->SetBinContent(26,219.5079);
   11->SetBinContent(27,307.3111);
   11->SetBinContent(28,234.1418);
   11->SetBinContent(29,278.0434);
   11->SetBinContent(30,219.5079);
   11->SetBinContent(31,234.1418);
   11->SetBinContent(32,160.9725);
   11->SetBinContent(33,248.7757);
   11->SetBinContent(34,219.5079);
   11->SetBinContent(35,117.0709);
   11->SetBinContent(36,102.437);
   11->SetBinContent(37,73.1693);
   11->SetBinContent(38,43.90158);
   11->SetBinContent(39,73.1693);
   11->SetBinContent(40,102.437);
   11->SetBinContent(41,58.53543);
   11->SetBinContent(42,43.90158);
   11->SetBinContent(43,117.0709);
   11->SetBinContent(44,131.7047);
   11->SetBinContent(45,87.80315);
   11->SetBinContent(46,29.26772);
   11->SetBinContent(47,175.6063);
   11->SetBinContent(48,146.3386);
   11->SetBinContent(49,43.90158);
   11->SetBinContent(50,29.26772);
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
   12->SetBinContent(1,710.4703);
   12->SetBinContent(2,44.40435);
   12->SetBinContent(3,6.343478);
   12->SetBinContent(4,6.343478);
   12->SetBinContent(5,57.09131);
   12->SetBinContent(6,38.06087);
   12->SetBinContent(7,202.9913);
   12->SetBinContent(8,374.2651);
   12->SetBinContent(9,666.0657);
   12->SetBinContent(10,811.9664);
   12->SetBinContent(11,811.9664);
   12->SetBinContent(12,1021.302);
   12->SetBinContent(13,1420.943);
   12->SetBinContent(14,2518.369);
   12->SetBinContent(15,3419.147);
   12->SetBinContent(16,5334.838);
   12->SetBinContent(17,5861.329);
   12->SetBinContent(18,5017.675);
   12->SetBinContent(19,7168.041);
   12->SetBinContent(20,3806.101);
   12->SetBinContent(21,2372.469);
   12->SetBinContent(22,2461.278);
   12->SetBinContent(23,1579.531);
   12->SetBinContent(24,1623.935);
   12->SetBinContent(25,1344.821);
   12->SetBinContent(26,1306.76);
   12->SetBinContent(27,1148.172);
   12->SetBinContent(28,1141.829);
   12->SetBinContent(29,837.3404);
   12->SetBinContent(30,945.18);
   12->SetBinContent(31,735.8443);
   12->SetBinContent(32,647.0352);
   12->SetBinContent(33,678.7527);
   12->SetBinContent(34,628.0047);
   12->SetBinContent(35,558.2261);
   12->SetBinContent(36,412.326);
   12->SetBinContent(37,507.4781);
   12->SetBinContent(38,367.9216);
   12->SetBinContent(39,380.6086);
   12->SetBinContent(40,444.0433);
   12->SetBinContent(41,228.3652);
   12->SetBinContent(42,348.8912);
   12->SetBinContent(43,348.8912);
   12->SetBinContent(44,310.8304);
   12->SetBinContent(45,317.1738);
   12->SetBinContent(46,380.6086);
   12->SetBinContent(47,399.639);
   12->SetBinContent(48,348.8912);
   12->SetBinContent(49,253.7391);
   12->SetBinContent(50,38.06087);
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
   13->SetBinContent(1,1713.064);
   13->SetBinContent(2,244.7235);
   13->SetBinContent(3,81.57449);
   13->SetBinContent(5,244.7235);
   13->SetBinContent(6,163.149);
   13->SetBinContent(7,81.57449);
   13->SetBinContent(8,815.7449);
   13->SetBinContent(9,1713.064);
   13->SetBinContent(10,1223.617);
   13->SetBinContent(11,1305.192);
   13->SetBinContent(12,1549.915);
   13->SetBinContent(13,2855.106);
   13->SetBinContent(14,3915.574);
   13->SetBinContent(15,5139.194);
   13->SetBinContent(16,5465.493);
   13->SetBinContent(17,5710.217);
   13->SetBinContent(18,7178.562);
   13->SetBinContent(19,9136.35);
   13->SetBinContent(20,4323.447);
   13->SetBinContent(21,2365.66);
   13->SetBinContent(22,2936.681);
   13->SetBinContent(23,2855.106);
   13->SetBinContent(24,2691.958);
   13->SetBinContent(25,1957.787);
   13->SetBinContent(26,1713.064);
   13->SetBinContent(27,1713.064);
   13->SetBinContent(28,1549.915);
   13->SetBinContent(29,1386.766);
   13->SetBinContent(30,1305.192);
   13->SetBinContent(31,815.7449);
   13->SetBinContent(32,1142.043);
   13->SetBinContent(33,1060.468);
   13->SetBinContent(34,1060.468);
   13->SetBinContent(35,1142.043);
   13->SetBinContent(36,734.1704);
   13->SetBinContent(37,1223.617);
   13->SetBinContent(38,571.0215);
   13->SetBinContent(39,652.5959);
   13->SetBinContent(40,571.0215);
   13->SetBinContent(41,163.149);
   13->SetBinContent(42,407.8725);
   13->SetBinContent(43,571.0215);
   13->SetBinContent(44,652.5959);
   13->SetBinContent(45,571.0215);
   13->SetBinContent(46,571.0215);
   13->SetBinContent(47,326.298);
   13->SetBinContent(48,652.5959);
   13->SetBinContent(49,244.7235);
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
   14->SetBinContent(1,2570.801);
   14->SetBinContent(2,342.5058);
   14->SetBinContent(3,157.1497);
   14->SetBinContent(4,145.0613);
   14->SetBinContent(5,165.2087);
   14->SetBinContent(6,229.6803);
   14->SetBinContent(7,378.7711);
   14->SetBinContent(8,556.0682);
   14->SetBinContent(9,822.0139);
   14->SetBinContent(10,1087.959);
   14->SetBinContent(11,1164.518);
   14->SetBinContent(12,1341.812);
   14->SetBinContent(13,1571.489);
   14->SetBinContent(14,1789.078);
   14->SetBinContent(15,2397.53);
   14->SetBinContent(16,2901.223);
   14->SetBinContent(17,2965.696);
   14->SetBinContent(18,3251.793);
   14->SetBinContent(19,5766.125);
   14->SetBinContent(20,2457.973);
   14->SetBinContent(21,1325.694);
   14->SetBinContent(22,1196.753);
   14->SetBinContent(23,987.2225);
   14->SetBinContent(24,886.4855);
   14->SetBinContent(25,874.3971);
   14->SetBinContent(26,709.1884);
   14->SetBinContent(27,797.837);
   14->SetBinContent(28,749.4832);
   14->SetBinContent(29,733.3653);
   14->SetBinContent(30,701.1295);
   14->SetBinContent(31,556.0682);
   14->SetBinContent(32,455.3312);
   14->SetBinContent(33,503.685);
   14->SetBinContent(34,439.2133);
   14->SetBinContent(35,402.948);
   14->SetBinContent(36,386.83);
   14->SetBinContent(37,419.0659);
   14->SetBinContent(38,269.9751);
   14->SetBinContent(39,310.2699);
   14->SetBinContent(40,290.1225);
   14->SetBinContent(41,237.7393);
   14->SetBinContent(42,237.7393);
   14->SetBinContent(43,181.3266);
   14->SetBinContent(44,241.7688);
   14->SetBinContent(45,249.8277);
   14->SetBinContent(46,233.7098);
   14->SetBinContent(47,241.7688);
   14->SetBinContent(48,197.4445);
   14->SetBinContent(49,165.2087);
   14->SetBinContent(50,32.23584);
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
   15->SetBinContent(1,212.4567);
   15->SetBinContent(2,27.03993);
   15->SetBinContent(3,7.725694);
   15->SetBinContent(4,3.862847);
   15->SetBinContent(5,3.862847);
   15->SetBinContent(6,11.58854);
   15->SetBinContent(7,19.31424);
   15->SetBinContent(8,34.76562);
   15->SetBinContent(9,23.17708);
   15->SetBinContent(10,50.21701);
   15->SetBinContent(11,61.80555);
   15->SetBinContent(12,88.84547);
   15->SetBinContent(13,57.9427);
   15->SetBinContent(14,112.0226);
   15->SetBinContent(15,239.4967);
   15->SetBinContent(16,301.3024);
   15->SetBinContent(17,274.2624);
   15->SetBinContent(18,204.731);
   15->SetBinContent(19,374.6966);
   15->SetBinContent(20,231.771);
   15->SetBinContent(21,115.8854);
   15->SetBinContent(22,115.8854);
   15->SetBinContent(23,57.9427);
   15->SetBinContent(24,127.4739);
   15->SetBinContent(25,73.39409);
   15->SetBinContent(26,61.80555);
   15->SetBinContent(27,42.49131);
   15->SetBinContent(28,46.35416);
   15->SetBinContent(29,27.03993);
   15->SetBinContent(30,38.62847);
   15->SetBinContent(31,34.76562);
   15->SetBinContent(32,15.45139);
   15->SetBinContent(33,34.76562);
   15->SetBinContent(34,23.17708);
   15->SetBinContent(35,30.90277);
   15->SetBinContent(36,27.03993);
   15->SetBinContent(37,15.45139);
   15->SetBinContent(38,7.725694);
   15->SetBinContent(39,19.31424);
   15->SetBinContent(40,11.58854);
   15->SetBinContent(41,23.17708);
   15->SetBinContent(42,3.862847);
   15->SetBinContent(43,7.725694);
   15->SetBinContent(44,11.58854);
   15->SetBinContent(45,15.45139);
   15->SetBinContent(46,7.725694);
   15->SetBinContent(47,11.58854);
   15->SetBinContent(48,15.45139);
   15->SetBinContent(49,11.58854);
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
   16->SetBinContent(1,1029.418);
   16->SetBinContent(2,6.16417);
   16->SetBinContent(3,43.14919);
   16->SetBinContent(4,12.32834);
   16->SetBinContent(5,73.97004);
   16->SetBinContent(6,141.7759);
   16->SetBinContent(7,406.8356);
   16->SetBinContent(8,505.4625);
   16->SetBinContent(9,727.3732);
   16->SetBinContent(10,1035.582);
   16->SetBinContent(11,1177.359);
   16->SetBinContent(12,1337.627);
   16->SetBinContent(13,1732.135);
   16->SetBinContent(14,2342.384);
   16->SetBinContent(15,3353.29);
   16->SetBinContent(16,4505.97);
   16->SetBinContent(17,4697.056);
   16->SetBinContent(18,4222.423);
   16->SetBinContent(19,7698.954);
   16->SetBinContent(20,3797.103);
   16->SetBinContent(21,1904.732);
   16->SetBinContent(22,1633.508);
   16->SetBinContent(23,1405.433);
   16->SetBinContent(24,1023.254);
   16->SetBinContent(25,1171.194);
   16->SetBinContent(26,1084.896);
   16->SetBinContent(27,1097.224);
   16->SetBinContent(28,992.4331);
   16->SetBinContent(29,918.4629);
   16->SetBinContent(30,936.9554);
   16->SetBinContent(31,715.0448);
   16->SetBinContent(32,610.2537);
   16->SetBinContent(33,610.2537);
   16->SetBinContent(34,597.9253);
   16->SetBinContent(35,505.4625);
   16->SetBinContent(36,425.3281);
   16->SetBinContent(37,351.3579);
   16->SetBinContent(38,425.3281);
   16->SetBinContent(39,357.5221);
   16->SetBinContent(40,388.343);
   16->SetBinContent(41,178.7609);
   16->SetBinContent(42,197.2534);
   16->SetBinContent(43,252.731);
   16->SetBinContent(44,240.4026);
   16->SetBinContent(45,277.3877);
   16->SetBinContent(46,246.5668);
   16->SetBinContent(47,388.343);
   16->SetBinContent(48,345.1937);
   16->SetBinContent(49,246.5668);
   16->SetBinContent(50,55.47753);
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
   17->SetBinContent(1,1803.738);
   17->SetBinContent(2,163.9762);
   17->SetBinContent(3,46.85035);
   17->SetBinContent(4,70.27553);
   17->SetBinContent(5,187.4014);
   17->SetBinContent(6,187.4014);
   17->SetBinContent(7,515.3538);
   17->SetBinContent(8,819.881);
   17->SetBinContent(9,1264.959);
   17->SetBinContent(10,1803.738);
   17->SetBinContent(11,1428.936);
   17->SetBinContent(12,1663.187);
   17->SetBinContent(13,1920.864);
   17->SetBinContent(14,2225.392);
   17->SetBinContent(15,3185.829);
   17->SetBinContent(16,3373.232);
   17->SetBinContent(17,3865.163);
   17->SetBinContent(18,3349.806);
   17->SetBinContent(19,4567.921);
   17->SetBinContent(20,2084.841);
   17->SetBinContent(21,1241.534);
   17->SetBinContent(22,1171.259);
   17->SetBinContent(23,1171.259);
   17->SetBinContent(24,983.8572);
   17->SetBinContent(25,890.1566);
   17->SetBinContent(26,749.6055);
   17->SetBinContent(27,819.881);
   17->SetBinContent(28,655.9048);
   17->SetBinContent(29,468.5034);
   17->SetBinContent(30,749.6055);
   17->SetBinContent(31,913.5817);
   17->SetBinContent(32,445.0783);
   17->SetBinContent(33,374.8028);
   17->SetBinContent(34,374.8028);
   17->SetBinContent(35,398.2279);
   17->SetBinContent(36,421.6531);
   17->SetBinContent(37,281.1021);
   17->SetBinContent(38,304.5273);
   17->SetBinContent(39,421.6531);
   17->SetBinContent(40,257.6769);
   17->SetBinContent(41,187.4014);
   17->SetBinContent(42,93.70071);
   17->SetBinContent(43,140.5511);
   17->SetBinContent(44,140.5511);
   17->SetBinContent(45,210.8266);
   17->SetBinContent(46,140.5511);
   17->SetBinContent(47,93.70071);
   17->SetBinContent(48,140.5511);
   17->SetBinContent(49,234.2517);
   17->SetBinContent(50,46.85035);
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
