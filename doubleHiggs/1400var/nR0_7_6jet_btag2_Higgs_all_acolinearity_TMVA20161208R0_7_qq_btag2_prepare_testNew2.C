{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:04:16 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.8478413,-3.060414,4.13946,5.26671);
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
   
   TH1F *THStack_stack_25 = new TH1F("THStack_stack_25","",50,0,3.142);
   THStack_stack_25->SetMinimum(0.02744534);
   THStack_stack_25->SetMaximum(39860.26);
   THStack_stack_25->SetDirectory(0);
   THStack_stack_25->SetStats(0);
   THStack_stack_25->SetLineWidth(2);
   THStack_stack_25->SetMarkerSize(1.2);
   THStack_stack_25->GetXaxis()->SetTitle("Acolinearity of HH jets");
   THStack_stack_25->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_25->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_25->GetXaxis()->SetLabelColor(ci);
   THStack_stack_25->GetXaxis()->SetLabelFont(42);
   THStack_stack_25->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_25->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_25->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_25->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_25->GetXaxis()->SetTitleColor(ci);
   THStack_stack_25->GetXaxis()->SetTitleFont(42);
   THStack_stack_25->GetYaxis()->SetTitle("Number of events");
   THStack_stack_25->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_25->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_25->GetYaxis()->SetLabelColor(ci);
   THStack_stack_25->GetYaxis()->SetLabelFont(42);
   THStack_stack_25->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_25->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_25->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_25->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_25->GetYaxis()->SetTitleColor(ci);
   THStack_stack_25->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_25->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_25->GetZaxis()->SetLabelColor(ci);
   THStack_stack_25->GetZaxis()->SetLabelFont(42);
   THStack_stack_25->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_25->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_25->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_25->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_25->GetZaxis()->SetTitleColor(ci);
   THStack_stack_25->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_25);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,3.142);
   0->SetBinContent(1,0.1091561);
   0->SetBinContent(2,0.3613434);
   0->SetBinContent(3,0.6944582);
   0->SetBinContent(4,0.788559);
   0->SetBinContent(5,0.8337274);
   0->SetBinContent(6,0.8826599);
   0->SetBinContent(7,0.8261994);
   0->SetBinContent(8,0.7226884);
   0->SetBinContent(9,0.7942051);
   0->SetBinContent(10,0.6511718);
   0->SetBinContent(11,0.6455258);
   0->SetBinContent(12,0.5533069);
   0->SetBinContent(13,0.5250767);
   0->SetBinContent(14,0.4855545);
   0->SetBinContent(15,0.4309769);
   0->SetBinContent(16,0.4761446);
   0->SetBinContent(17,0.4479148);
   0->SetBinContent(18,0.3914552);
   0->SetBinContent(19,0.3575794);
   0->SetBinContent(20,0.3481695);
   0->SetBinContent(21,0.3500515);
   0->SetBinContent(22,0.2879459);
   0->SetBinContent(23,0.2634801);
   0->SetBinContent(24,0.2823);
   0->SetBinContent(25,0.2296042);
   0->SetBinContent(26,0.2239582);
   0->SetBinContent(27,0.2653621);
   0->SetBinContent(28,0.1731441);
   0->SetBinContent(29,0.2239582);
   0->SetBinContent(30,0.2089022);
   0->SetBinContent(31,0.2145482);
   0->SetBinContent(32,0.2258402);
   0->SetBinContent(33,0.2145482);
   0->SetBinContent(34,0.1674981);
   0->SetBinContent(35,0.1674981);
   0->SetBinContent(36,0.1863181);
   0->SetBinContent(37,0.1994922);
   0->SetBinContent(38,0.1712621);
   0->SetBinContent(39,0.1712621);
   0->SetBinContent(40,0.1467961);
   0->SetBinContent(41,0.1449141);
   0->SetBinContent(42,0.1148021);
   0->SetBinContent(43,0.1449141);
   0->SetBinContent(44,0.1505601);
   0->SetBinContent(45,0.1148021);
   0->SetBinContent(46,0.1223301);
   0->SetBinContent(47,0.08469005);
   0->SetBinContent(48,0.04140401);
   0->SetBinContent(49,0.04893202);
   0->SetBinContent(50,0.013174);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,3.142);
   1->SetBinContent(1,0.04610903);
   1->SetBinContent(2,0.2070195);
   1->SetBinContent(3,0.3481701);
   1->SetBinContent(4,0.4093356);
   1->SetBinContent(5,0.5533082);
   1->SetBinContent(6,0.519433);
   1->SetBinContent(7,0.4930854);
   1->SetBinContent(8,0.452622);
   1->SetBinContent(9,0.4723832);
   1->SetBinContent(10,0.3980435);
   1->SetBinContent(11,0.4074536);
   1->SetBinContent(12,0.3651083);
   1->SetBinContent(13,0.336878);
   1->SetBinContent(14,0.3030017);
   1->SetBinContent(15,0.3086478);
   1->SetBinContent(16,0.2456003);
   1->SetBinContent(17,0.2822995);
   1->SetBinContent(18,0.2145475);
   1->SetBinContent(19,0.2540693);
   1->SetBinContent(20,0.2023146);
   1->SetBinContent(21,0.1985506);
   1->SetBinContent(22,0.1947866);
   1->SetBinContent(23,0.1825537);
   1->SetBinContent(24,0.1646748);
   1->SetBinContent(25,0.1731438);
   1->SetBinContent(26,0.1665568);
   1->SetBinContent(27,0.1656158);
   1->SetBinContent(28,0.1674978);
   1->SetBinContent(29,0.1769077);
   1->SetBinContent(30,0.142091);
   1->SetBinContent(31,0.1204481);
   1->SetBinContent(32,0.143032);
   1->SetBinContent(33,0.1166841);
   1->SetBinContent(34,0.1213891);
   1->SetBinContent(35,0.1176251);
   1->SetBinContent(36,0.1204481);
   1->SetBinContent(37,0.1270351);
   1->SetBinContent(38,0.1053921);
   1->SetBinContent(39,0.1157431);
   1->SetBinContent(40,0.1091561);
   1->SetBinContent(41,0.1148021);
   1->SetBinContent(42,0.1072741);
   1->SetBinContent(43,0.1082151);
   1->SetBinContent(44,0.07810306);
   1->SetBinContent(45,0.07528006);
   1->SetBinContent(46,0.06210604);
   1->SetBinContent(47,0.05928304);
   1->SetBinContent(48,0.02728901);
   1->SetBinContent(49,0.01882);
   1->SetBinContent(50,0.007528);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,3.142);
   2->SetBinContent(1,0.1627928);
   2->SetBinContent(2,0.5551902);
   2->SetBinContent(3,0.9184079);
   2->SetBinContent(4,1.099082);
   2->SetBinContent(5,1.193186);
   2->SetBinContent(6,1.17907);
   2->SetBinContent(7,1.245884);
   2->SetBinContent(8,1.161191);
   2->SetBinContent(9,1.020976);
   2->SetBinContent(10,1.020976);
   2->SetBinContent(11,0.95887);
   2->SetBinContent(12,0.8882966);
   2->SetBinContent(13,0.8101954);
   2->SetBinContent(14,0.741504);
   2->SetBinContent(15,0.7057468);
   2->SetBinContent(16,0.6925731);
   2->SetBinContent(17,0.6342324);
   2->SetBinContent(18,0.6191767);
   2->SetBinContent(19,0.5730688);
   2->SetBinContent(20,0.5354297);
   2->SetBinContent(21,0.4930854);
   2->SetBinContent(22,0.4601501);
   2->SetBinContent(23,0.4356839);
   2->SetBinContent(24,0.4422709);
   2->SetBinContent(25,0.4018076);
   2->SetBinContent(26,0.4281558);
   2->SetBinContent(27,0.3980435);
   2->SetBinContent(28,0.3792234);
   2->SetBinContent(29,0.3999256);
   2->SetBinContent(30,0.3538162);
   2->SetBinContent(31,0.3246449);
   2->SetBinContent(32,0.3801644);
   2->SetBinContent(33,0.3547572);
   2->SetBinContent(34,0.337819);
   2->SetBinContent(35,0.3208809);
   2->SetBinContent(36,0.3528751);
   2->SetBinContent(37,0.3237039);
   2->SetBinContent(38,0.3265269);
   2->SetBinContent(39,0.336878);
   2->SetBinContent(40,0.3425241);
   2->SetBinContent(41,0.3067657);
   2->SetBinContent(42,0.2982967);
   2->SetBinContent(43,0.2258394);
   2->SetBinContent(44,0.2427773);
   2->SetBinContent(45,0.2296034);
   2->SetBinContent(46,0.1900816);
   2->SetBinContent(47,0.1712618);
   2->SetBinContent(48,0.1119791);
   2->SetBinContent(49,0.07998506);
   2->SetBinContent(50,0.02917101);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,3.142);
   3->SetBinContent(1,0.3209628);
   3->SetBinContent(2,1.010693);
   3->SetBinContent(3,2.15114);
   3->SetBinContent(4,2.724778);
   3->SetBinContent(5,3.209639);
   3->SetBinContent(6,3.421339);
   3->SetBinContent(7,3.394022);
   3->SetBinContent(8,3.735474);
   3->SetBinContent(9,3.878883);
   3->SetBinContent(10,3.312074);
   3->SetBinContent(11,3.530603);
   3->SetBinContent(12,3.305245);
   3->SetBinContent(13,3.195981);
   3->SetBinContent(14,3.073058);
   3->SetBinContent(15,2.663317);
   3->SetBinContent(16,2.997939);
   3->SetBinContent(17,2.697462);
   3->SetBinContent(18,2.533566);
   3->SetBinContent(19,2.588198);
   3->SetBinContent(20,2.383327);
   3->SetBinContent(21,2.110166);
   3->SetBinContent(22,2.315037);
   3->SetBinContent(23,2.349182);
   3->SetBinContent(24,2.301379);
   3->SetBinContent(25,2.267234);
   3->SetBinContent(26,2.123824);
   3->SetBinContent(27,2.130653);
   3->SetBinContent(28,2.069192);
   3->SetBinContent(29,2.096508);
   3->SetBinContent(30,2.076021);
   3->SetBinContent(31,1.980415);
   3->SetBinContent(32,2.01456);
   3->SetBinContent(33,1.980415);
   3->SetBinContent(34,2.171627);
   3->SetBinContent(35,2.08285);
   3->SetBinContent(36,2.130653);
   3->SetBinContent(37,2.144311);
   3->SetBinContent(38,2.308208);
   3->SetBinContent(39,2.21943);
   3->SetBinContent(40,2.280892);
   3->SetBinContent(41,2.164798);
   3->SetBinContent(42,2.198943);
   3->SetBinContent(43,2.103337);
   3->SetBinContent(44,2.035047);
   3->SetBinContent(45,1.830176);
   3->SetBinContent(46,1.584331);
   3->SetBinContent(47,1.365803);
   3->SetBinContent(48,0.9970354);
   3->SetBinContent(49,0.7580196);
   3->SetBinContent(50,0.2185279);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,3.142);
   4->SetBinContent(1,0.3630091);
   4->SetBinContent(2,1.288943);
   4->SetBinContent(3,2.293783);
   4->SetBinContent(4,3.119751);
   4->SetBinContent(5,3.840501);
   4->SetBinContent(6,4.303464);
   4->SetBinContent(7,4.524424);
   4->SetBinContent(8,4.429727);
   4->SetBinContent(9,4.845341);
   4->SetBinContent(10,4.792732);
   4->SetBinContent(11,4.298203);
   4->SetBinContent(12,4.429727);
   4->SetBinContent(13,4.624382);
   4->SetBinContent(14,4.313986);
   4->SetBinContent(15,4.17194);
   4->SetBinContent(16,3.819457);
   4->SetBinContent(17,4.024634);
   4->SetBinContent(18,3.929937);
   4->SetBinContent(19,3.803674);
   4->SetBinContent(20,3.730021);
   4->SetBinContent(21,3.651107);
   4->SetBinContent(22,3.39332);
   4->SetBinContent(23,3.5038);
   4->SetBinContent(24,3.509061);
   4->SetBinContent(25,3.698455);
   4->SetBinContent(26,3.361755);
   4->SetBinContent(27,3.493278);
   4->SetBinContent(28,3.424886);
   4->SetBinContent(29,3.435408);
   4->SetBinContent(30,3.693194);
   4->SetBinContent(31,3.751065);
   4->SetBinContent(32,3.435408);
   4->SetBinContent(33,3.624802);
   4->SetBinContent(34,3.530105);
   4->SetBinContent(35,3.772108);
   4->SetBinContent(36,3.651107);
   4->SetBinContent(37,3.819457);
   4->SetBinContent(38,3.635324);
   4->SetBinContent(39,3.924676);
   4->SetBinContent(40,3.78263);
   4->SetBinContent(41,3.630063);
   4->SetBinContent(42,3.798413);
   4->SetBinContent(43,3.687933);
   4->SetBinContent(44,3.103968);
   4->SetBinContent(45,3.146056);
   4->SetBinContent(46,2.83566);
   4->SetBinContent(47,2.314827);
   4->SetBinContent(48,1.772949);
   4->SetBinContent(49,1.067983);
   4->SetBinContent(50,0.3472261);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,3.142);
   5->SetBinContent(1,1.450916);
   5->SetBinContent(2,5.010027);
   5->SetBinContent(3,9.598374);
   5->SetBinContent(4,11.40887);
   5->SetBinContent(5,13.56658);
   5->SetBinContent(6,15.46387);
   5->SetBinContent(7,15.9723);
   5->SetBinContent(8,16.29473);
   5->SetBinContent(9,15.66228);
   5->SetBinContent(10,15.63748);
   5->SetBinContent(11,15.14145);
   5->SetBinContent(12,14.90584);
   5->SetBinContent(13,14.1494);
   5->SetBinContent(14,14.40982);
   5->SetBinContent(15,13.9882);
   5->SetBinContent(16,14.013);
   5->SetBinContent(17,12.69853);
   5->SetBinContent(18,12.45052);
   5->SetBinContent(19,12.56212);
   5->SetBinContent(20,11.64448);
   5->SetBinContent(21,11.49567);
   5->SetBinContent(22,11.60728);
   5->SetBinContent(23,11.27246);
   5->SetBinContent(24,11.83049);
   5->SetBinContent(25,10.41682);
   5->SetBinContent(26,11.19806);
   5->SetBinContent(27,10.71443);
   5->SetBinContent(28,10.144);
   5->SetBinContent(29,9.945592);
   5->SetBinContent(30,9.784384);
   5->SetBinContent(31,10.0696);
   5->SetBinContent(32,9.474368);
   5->SetBinContent(33,9.784384);
   5->SetBinContent(34,9.945592);
   5->SetBinContent(35,9.536371);
   5->SetBinContent(36,9.734781);
   5->SetBinContent(37,9.672778);
   5->SetBinContent(38,9.412365);
   5->SetBinContent(39,9.90839);
   5->SetBinContent(40,8.866737);
   5->SetBinContent(41,8.792334);
   5->SetBinContent(42,8.643526);
   5->SetBinContent(43,7.688665);
   5->SetBinContent(44,7.267028);
   5->SetBinContent(45,6.398951);
   5->SetBinContent(46,5.49367);
   5->SetBinContent(47,4.563587);
   5->SetBinContent(48,3.050653);
   5->SetBinContent(49,2.095768);
   5->SetBinContent(50,0.6076486);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,3.142);
   6->SetBinContent(1,74.00784);
   6->SetBinContent(2,280.783);
   6->SetBinContent(3,494.5855);
   6->SetBinContent(4,594.1957);
   6->SetBinContent(5,612.722);
   6->SetBinContent(6,596.3217);
   6->SetBinContent(7,568.8358);
   6->SetBinContent(8,533.3016);
   6->SetBinContent(9,497.925);
   6->SetBinContent(10,452.7661);
   6->SetBinContent(11,418.3088);
   6->SetBinContent(12,384.0791);
   6->SetBinContent(13,359.3366);
   6->SetBinContent(14,333.1521);
   6->SetBinContent(15,318.7316);
   6->SetBinContent(16,292.3953);
   6->SetBinContent(17,276.2292);
   6->SetBinContent(18,261.2774);
   6->SetBinContent(19,252.7004);
   6->SetBinContent(20,239.4916);
   6->SetBinContent(21,220.4376);
   6->SetBinContent(22,221.0449);
   6->SetBinContent(23,213.15);
   6->SetBinContent(24,207.7602);
   6->SetBinContent(25,205.1033);
   6->SetBinContent(26,190.7558);
   6->SetBinContent(27,188.7821);
   6->SetBinContent(28,183.4682);
   6->SetBinContent(29,179.3689);
   6->SetBinContent(30,180.9631);
   6->SetBinContent(31,184.4551);
   6->SetBinContent(32,178.7616);
   6->SetBinContent(33,175.6492);
   6->SetBinContent(34,166.312);
   6->SetBinContent(35,177.4711);
   6->SetBinContent(36,167.147);
   6->SetBinContent(37,166.9952);
   6->SetBinContent(38,169.3485);
   6->SetBinContent(39,159.9353);
   6->SetBinContent(40,165.7806);
   6->SetBinContent(41,154.7733);
   6->SetBinContent(42,146.7266);
   6->SetBinContent(43,144.6769);
   6->SetBinContent(44,122.8906);
   6->SetBinContent(45,113.4025);
   6->SetBinContent(46,101.4095);
   6->SetBinContent(47,77.72718);
   6->SetBinContent(48,54.50029);
   6->SetBinContent(49,32.48789);
   6->SetBinContent(50,11.6136);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,3.142);
   7->SetBinContent(1,23.97173);
   7->SetBinContent(2,83.04484);
   7->SetBinContent(3,127.6668);
   7->SetBinContent(4,149.1999);
   7->SetBinContent(5,160.528);
   7->SetBinContent(6,159.698);
   7->SetBinContent(7,162.6765);
   7->SetBinContent(8,157.403);
   7->SetBinContent(9,157.5495);
   7->SetBinContent(10,151.6413);
   7->SetBinContent(11,145.196);
   7->SetBinContent(12,142.7546);
   7->SetBinContent(13,132.9402);
   7->SetBinContent(14,127.9109);
   7->SetBinContent(15,122.4918);
   7->SetBinContent(16,128.0085);
   7->SetBinContent(17,116.5357);
   7->SetBinContent(18,115.5593);
   7->SetBinContent(19,112.9718);
   7->SetBinContent(20,108.6268);
   7->SetBinContent(21,107.211);
   7->SetBinContent(22,104.9164);
   7->SetBinContent(23,101.2549);
   7->SetBinContent(24,104.5259);
   7->SetBinContent(25,101.2549);
   7->SetBinContent(26,100.0832);
   7->SetBinContent(27,100.4249);
   7->SetBinContent(28,98.42329);
   7->SetBinContent(29,98.76504);
   7->SetBinContent(30,98.81386);
   7->SetBinContent(31,102.3289);
   7->SetBinContent(32,104.3794);
   7->SetBinContent(33,101.5478);
   7->SetBinContent(34,101.8407);
   7->SetBinContent(35,113.2159);
   7->SetBinContent(36,109.7008);
   7->SetBinContent(37,117.805);
   7->SetBinContent(38,120.8319);
   7->SetBinContent(39,121.1736);
   7->SetBinContent(40,126.9345);
   7->SetBinContent(41,130.2546);
   7->SetBinContent(42,128.6921);
   7->SetBinContent(43,135.3816);
   7->SetBinContent(44,132.0124);
   7->SetBinContent(45,129.3269);
   7->SetBinContent(46,120.539);
   7->SetBinContent(47,97.88627);
   7->SetBinContent(48,77.08874);
   7->SetBinContent(49,52.28793);
   7->SetBinContent(50,18.45479);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,3.142);
   8->SetBinContent(1,24.21428);
   8->SetBinContent(2,28.61687);
   8->SetBinContent(3,26.26882);
   8->SetBinContent(4,18.4909);
   8->SetBinContent(5,17.90388);
   8->SetBinContent(6,14.52856);
   8->SetBinContent(7,11.29998);
   8->SetBinContent(8,9.538944);
   8->SetBinContent(9,6.45713);
   8->SetBinContent(10,8.951931);
   8->SetBinContent(11,6.45713);
   8->SetBinContent(12,5.136354);
   8->SetBinContent(13,5.136354);
   8->SetBinContent(14,5.576613);
   8->SetBinContent(15,4.255837);
   8->SetBinContent(16,4.255837);
   8->SetBinContent(17,3.815579);
   8->SetBinContent(18,2.788307);
   8->SetBinContent(19,3.522073);
   8->SetBinContent(20,2.93506);
   8->SetBinContent(21,3.668826);
   8->SetBinContent(22,2.201295);
   8->SetBinContent(23,2.201295);
   8->SetBinContent(24,2.494801);
   8->SetBinContent(25,2.494801);
   8->SetBinContent(26,2.494801);
   8->SetBinContent(27,2.494801);
   8->SetBinContent(28,3.228566);
   8->SetBinContent(29,2.788307);
   8->SetBinContent(30,2.93506);
   8->SetBinContent(31,3.081813);
   8->SetBinContent(32,2.201295);
   8->SetBinContent(33,2.348048);
   8->SetBinContent(34,2.494801);
   8->SetBinContent(35,2.494801);
   8->SetBinContent(36,2.494801);
   8->SetBinContent(37,1.761036);
   8->SetBinContent(38,2.348048);
   8->SetBinContent(39,2.641554);
   8->SetBinContent(40,3.962332);
   8->SetBinContent(41,2.641554);
   8->SetBinContent(42,1.761036);
   8->SetBinContent(43,4.842849);
   8->SetBinContent(44,4.40259);
   8->SetBinContent(45,3.081813);
   8->SetBinContent(46,2.348048);
   8->SetBinContent(47,3.228566);
   8->SetBinContent(48,1.46753);
   8->SetBinContent(49,2.054542);
   8->SetBinContent(50,0.880518);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,3.142);
   9->SetBinContent(1,607.5934);
   9->SetBinContent(2,1573.506);
   9->SetBinContent(3,1659.542);
   9->SetBinContent(4,1386.009);
   9->SetBinContent(5,1110.419);
   9->SetBinContent(6,910.3702);
   9->SetBinContent(7,749.3807);
   9->SetBinContent(8,648.9124);
   9->SetBinContent(9,537.6428);
   9->SetBinContent(10,451.2331);
   9->SetBinContent(11,426.2018);
   9->SetBinContent(12,373.9102);
   9->SetBinContent(13,329.1623);
   9->SetBinContent(14,312.7033);
   9->SetBinContent(15,280.8141);
   9->SetBinContent(16,267.4411);
   9->SetBinContent(17,246.8682);
   9->SetBinContent(18,224.4106);
   9->SetBinContent(19,220.639);
   9->SetBinContent(20,216.0104);
   9->SetBinContent(21,199.5528);
   9->SetBinContent(22,199.8957);
   9->SetBinContent(23,174.5237);
   9->SetBinContent(24,166.8092);
   9->SetBinContent(25,158.0662);
   9->SetBinContent(26,156.8661);
   9->SetBinContent(27,159.6091);
   9->SetBinContent(28,157.5519);
   9->SetBinContent(29,138.5229);
   9->SetBinContent(30,134.2371);
   9->SetBinContent(31,131.4941);
   9->SetBinContent(32,124.6367);
   9->SetBinContent(33,120.6936);
   9->SetBinContent(34,124.8081);
   9->SetBinContent(35,126.0082);
   9->SetBinContent(36,122.0651);
   9->SetBinContent(37,118.2934);
   9->SetBinContent(38,119.8364);
   9->SetBinContent(39,103.721);
   9->SetBinContent(40,109.0356);
   9->SetBinContent(41,117.0933);
   9->SetBinContent(42,109.3785);
   9->SetBinContent(43,109.55);
   9->SetBinContent(44,110.75);
   9->SetBinContent(45,107.8356);
   9->SetBinContent(46,83.14819);
   9->SetBinContent(47,77.83354);
   9->SetBinContent(48,55.71777);
   9->SetBinContent(49,38.57376);
   9->SetBinContent(50,13.20081);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,3.142);
   10->SetBinContent(1,149.3308);
   10->SetBinContent(2,532.7659);
   10->SetBinContent(3,918.0546);
   10->SetBinContent(4,1186.147);
   10->SetBinContent(5,1316.533);
   10->SetBinContent(6,1373.017);
   10->SetBinContent(7,1413.092);
   10->SetBinContent(8,1407.412);
   10->SetBinContent(9,1362.351);
   10->SetBinContent(10,1323.98);
   10->SetBinContent(11,1265.035);
   10->SetBinContent(12,1239.791);
   10->SetBinContent(13,1200.158);
   10->SetBinContent(14,1138.878);
   10->SetBinContent(15,1129.222);
   10->SetBinContent(16,1065.922);
   10->SetBinContent(17,1050.397);
   10->SetBinContent(18,1012.215);
   10->SetBinContent(19,997.1949);
   10->SetBinContent(20,974.349);
   10->SetBinContent(21,962.6736);
   10->SetBinContent(22,947.0222);
   10->SetBinContent(23,953.3333);
   10->SetBinContent(24,943.0463);
   10->SetBinContent(25,925.8802);
   10->SetBinContent(26,923.4189);
   10->SetBinContent(27,929.4775);
   10->SetBinContent(28,938.5023);
   10->SetBinContent(29,943.488);
   10->SetBinContent(30,971.0673);
   10->SetBinContent(31,981.2911);
   10->SetBinContent(32,996.8794);
   10->SetBinContent(33,1018.968);
   10->SetBinContent(34,1043.77);
   10->SetBinContent(35,1072.17);
   10->SetBinContent(36,1115.464);
   10->SetBinContent(37,1141.276);
   10->SetBinContent(38,1188.23);
   10->SetBinContent(39,1224.203);
   10->SetBinContent(40,1243.704);
   10->SetBinContent(41,1269.39);
   10->SetBinContent(42,1279.361);
   10->SetBinContent(43,1246.733);
   10->SetBinContent(44,1215.304);
   10->SetBinContent(45,1112.119);
   10->SetBinContent(46,990.0635);
   10->SetBinContent(47,810.8301);
   10->SetBinContent(48,604.333);
   10->SetBinContent(49,372.9115);
   10->SetBinContent(50,125.4181);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,3.142);
   11->SetBinContent(1,278.0434);
   11->SetBinContent(2,453.6496);
   11->SetBinContent(3,570.7204);
   11->SetBinContent(4,717.0589);
   11->SetBinContent(5,482.9173);
   11->SetBinContent(6,453.6496);
   11->SetBinContent(7,439.0157);
   11->SetBinContent(8,380.4803);
   11->SetBinContent(9,278.0434);
   11->SetBinContent(10,278.0434);
   11->SetBinContent(11,292.6772);
   11->SetBinContent(12,307.3111);
   11->SetBinContent(13,175.6063);
   11->SetBinContent(14,234.1418);
   11->SetBinContent(15,146.3386);
   11->SetBinContent(16,248.7757);
   11->SetBinContent(17,131.7047);
   11->SetBinContent(18,175.6063);
   11->SetBinContent(19,131.7047);
   11->SetBinContent(20,190.2402);
   11->SetBinContent(21,131.7047);
   11->SetBinContent(22,146.3386);
   11->SetBinContent(23,131.7047);
   11->SetBinContent(24,73.1693);
   11->SetBinContent(25,131.7047);
   11->SetBinContent(26,146.3386);
   11->SetBinContent(27,160.9725);
   11->SetBinContent(28,102.437);
   11->SetBinContent(29,146.3386);
   11->SetBinContent(30,175.6063);
   11->SetBinContent(31,160.9725);
   11->SetBinContent(32,175.6063);
   11->SetBinContent(33,87.80315);
   11->SetBinContent(34,219.5079);
   11->SetBinContent(35,146.3386);
   11->SetBinContent(36,278.0434);
   11->SetBinContent(37,160.9725);
   11->SetBinContent(38,160.9725);
   11->SetBinContent(39,190.2402);
   11->SetBinContent(40,190.2402);
   11->SetBinContent(41,278.0434);
   11->SetBinContent(42,321.9449);
   11->SetBinContent(43,175.6063);
   11->SetBinContent(44,204.8741);
   11->SetBinContent(45,190.2402);
   11->SetBinContent(46,219.5079);
   11->SetBinContent(47,117.0709);
   11->SetBinContent(48,146.3386);
   11->SetBinContent(49,73.1693);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,3.142);
   12->SetBinContent(1,5931.105);
   12->SetBinContent(2,6387.82);
   12->SetBinContent(3,6768.416);
   12->SetBinContent(4,5410.958);
   12->SetBinContent(5,4402.379);
   12->SetBinContent(6,3628.483);
   12->SetBinContent(7,2715.018);
   12->SetBinContent(8,2182.164);
   12->SetBinContent(9,1630.279);
   12->SetBinContent(10,1611.248);
   12->SetBinContent(11,1478.034);
   12->SetBinContent(12,1154.516);
   12->SetBinContent(13,881.7449);
   12->SetBinContent(14,792.9359);
   12->SetBinContent(15,773.9053);
   12->SetBinContent(16,615.3177);
   12->SetBinContent(17,589.9437);
   12->SetBinContent(18,482.1042);
   12->SetBinContent(19,494.7911);
   12->SetBinContent(20,431.3564);
   12->SetBinContent(21,393.2955);
   12->SetBinContent(22,412.326);
   12->SetBinContent(23,374.2651);
   12->SetBinContent(24,494.7911);
   12->SetBinContent(25,342.5477);
   12->SetBinContent(26,361.5782);
   12->SetBinContent(27,298.1434);
   12->SetBinContent(28,260.0826);
   12->SetBinContent(29,437.6999);
   12->SetBinContent(30,348.8912);
   12->SetBinContent(31,355.2347);
   12->SetBinContent(32,342.5477);
   12->SetBinContent(33,380.6086);
   12->SetBinContent(34,336.2043);
   12->SetBinContent(35,361.5782);
   12->SetBinContent(36,393.2955);
   12->SetBinContent(37,355.2347);
   12->SetBinContent(38,450.3868);
   12->SetBinContent(39,520.1651);
   12->SetBinContent(40,577.2567);
   12->SetBinContent(41,589.9437);
   12->SetBinContent(42,596.2872);
   12->SetBinContent(43,729.5008);
   12->SetBinContent(44,811.9664);
   12->SetBinContent(45,818.3099);
   12->SetBinContent(46,786.5923);
   12->SetBinContent(47,799.2794);
   12->SetBinContent(48,520.1651);
   12->SetBinContent(49,393.2955);
   12->SetBinContent(50,190.3043);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,3.142);
   13->SetBinContent(1,1142.043);
   13->SetBinContent(2,3426.128);
   13->SetBinContent(3,4078.723);
   13->SetBinContent(4,3915.574);
   13->SetBinContent(5,2855.106);
   13->SetBinContent(6,2691.958);
   13->SetBinContent(7,3834);
   13->SetBinContent(8,2120.936);
   13->SetBinContent(9,2855.106);
   13->SetBinContent(10,2691.958);
   13->SetBinContent(11,2365.66);
   13->SetBinContent(12,2120.936);
   13->SetBinContent(13,1794.638);
   13->SetBinContent(14,1794.638);
   13->SetBinContent(15,897.3193);
   13->SetBinContent(16,2528.809);
   13->SetBinContent(17,1142.043);
   13->SetBinContent(18,1223.617);
   13->SetBinContent(19,1386.766);
   13->SetBinContent(20,978.8938);
   13->SetBinContent(21,1386.766);
   13->SetBinContent(22,1386.766);
   13->SetBinContent(23,897.3193);
   13->SetBinContent(24,1223.617);
   13->SetBinContent(25,1223.617);
   13->SetBinContent(26,1223.617);
   13->SetBinContent(27,978.8938);
   13->SetBinContent(28,1794.638);
   13->SetBinContent(29,1305.192);
   13->SetBinContent(30,1631.49);
   13->SetBinContent(31,1957.787);
   13->SetBinContent(32,1386.766);
   13->SetBinContent(33,1386.766);
   13->SetBinContent(34,1305.192);
   13->SetBinContent(35,1631.49);
   13->SetBinContent(36,1468.341);
   13->SetBinContent(37,1060.468);
   13->SetBinContent(38,1305.192);
   13->SetBinContent(39,1060.468);
   13->SetBinContent(40,1713.064);
   13->SetBinContent(41,2202.511);
   13->SetBinContent(42,1549.915);
   13->SetBinContent(43,1631.49);
   13->SetBinContent(44,1305.192);
   13->SetBinContent(45,1386.766);
   13->SetBinContent(46,1305.192);
   13->SetBinContent(47,1468.341);
   13->SetBinContent(48,1386.766);
   13->SetBinContent(49,734.1704);
   13->SetBinContent(50,326.298);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,3.142);
   14->SetBinContent(1,36.26532);
   14->SetBinContent(2,52.38324);
   14->SetBinContent(3,120.8844);
   14->SetBinContent(4,165.2087);
   14->SetBinContent(5,185.3561);
   14->SetBinContent(6,253.8572);
   14->SetBinContent(7,302.211);
   14->SetBinContent(8,318.3289);
   14->SetBinContent(9,290.1225);
   14->SetBinContent(10,334.4468);
   14->SetBinContent(11,306.2404);
   14->SetBinContent(12,378.7711);
   14->SetBinContent(13,374.7416);
   14->SetBinContent(14,390.8595);
   14->SetBinContent(15,402.948);
   14->SetBinContent(16,431.1543);
   14->SetBinContent(17,431.1543);
   14->SetBinContent(18,402.948);
   14->SetBinContent(19,382.8006);
   14->SetBinContent(20,531.8913);
   14->SetBinContent(21,427.1248);
   14->SetBinContent(22,548.0092);
   14->SetBinContent(23,471.4491);
   14->SetBinContent(24,616.5104);
   14->SetBinContent(25,580.2451);
   14->SetBinContent(26,560.0977);
   14->SetBinContent(27,632.6283);
   14->SetBinContent(28,745.4537);
   14->SetBinContent(29,705.1589);
   14->SetBinContent(30,693.0705);
   14->SetBinContent(31,737.3948);
   14->SetBinContent(32,793.8075);
   14->SetBinContent(33,930.8098);
   14->SetBinContent(34,1015.429);
   14->SetBinContent(35,1120.194);
   14->SetBinContent(36,1168.547);
   14->SetBinContent(37,1337.783);
   14->SetBinContent(38,1692.371);
   14->SetBinContent(39,1627.901);
   14->SetBinContent(40,2103.374);
   14->SetBinContent(41,2232.319);
   14->SetBinContent(42,2413.648);
   14->SetBinContent(43,2663.48);
   14->SetBinContent(44,2997.932);
   14->SetBinContent(45,2764.219);
   14->SetBinContent(46,2687.657);
   14->SetBinContent(47,2320.969);
   14->SetBinContent(48,2248.437);
   14->SetBinContent(49,1539.254);
   14->SetBinContent(50,608.4514);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,3.142);
   15->SetBinContent(1,119.7482);
   15->SetBinContent(2,142.9254);
   15->SetBinContent(3,146.7882);
   15->SetBinContent(4,150.6511);
   15->SetBinContent(5,84.98263);
   15->SetBinContent(6,92.70832);
   15->SetBinContent(7,96.57117);
   15->SetBinContent(8,61.80555);
   15->SetBinContent(9,81.11978);
   15->SetBinContent(10,57.9427);
   15->SetBinContent(11,50.21701);
   15->SetBinContent(12,54.07985);
   15->SetBinContent(13,50.21701);
   15->SetBinContent(14,46.35416);
   15->SetBinContent(15,38.62847);
   15->SetBinContent(16,61.80555);
   15->SetBinContent(17,50.21701);
   15->SetBinContent(18,46.35416);
   15->SetBinContent(19,46.35416);
   15->SetBinContent(20,50.21701);
   15->SetBinContent(21,34.76562);
   15->SetBinContent(22,30.90277);
   15->SetBinContent(23,30.90277);
   15->SetBinContent(24,34.76562);
   15->SetBinContent(25,42.49131);
   15->SetBinContent(26,42.49131);
   15->SetBinContent(27,50.21701);
   15->SetBinContent(28,30.90277);
   15->SetBinContent(29,38.62847);
   15->SetBinContent(30,42.49131);
   15->SetBinContent(31,34.76562);
   15->SetBinContent(32,57.9427);
   15->SetBinContent(33,50.21701);
   15->SetBinContent(34,61.80555);
   15->SetBinContent(35,38.62847);
   15->SetBinContent(36,54.07985);
   15->SetBinContent(37,38.62847);
   15->SetBinContent(38,65.6684);
   15->SetBinContent(39,61.80555);
   15->SetBinContent(40,46.35416);
   15->SetBinContent(41,108.1597);
   15->SetBinContent(42,127.4739);
   15->SetBinContent(43,84.98263);
   15->SetBinContent(44,127.4739);
   15->SetBinContent(45,108.1597);
   15->SetBinContent(46,139.0625);
   15->SetBinContent(47,100.434);
   15->SetBinContent(48,84.98263);
   15->SetBinContent(49,42.49131);
   15->SetBinContent(50,34.76562);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,3.142);
   16->SetBinContent(1,690.3881);
   16->SetBinContent(2,1460.911);
   16->SetBinContent(3,1497.896);
   16->SetBinContent(4,1417.762);
   16->SetBinContent(5,1220.508);
   16->SetBinContent(6,1177.359);
   16->SetBinContent(7,1165.03);
   16->SetBinContent(8,1103.388);
   16->SetBinContent(9,1035.582);
   16->SetBinContent(10,967.7764);
   16->SetBinContent(11,838.3285);
   16->SetBinContent(12,813.6718);
   16->SetBinContent(13,826.0001);
   16->SetBinContent(14,770.5225);
   16->SetBinContent(15,647.2388);
   16->SetBinContent(16,647.2388);
   16->SetBinContent(17,727.3732);
   16->SetBinContent(18,641.0746);
   16->SetBinContent(19,634.9104);
   16->SetBinContent(20,493.1342);
   16->SetBinContent(21,622.582);
   16->SetBinContent(22,708.8806);
   16->SetBinContent(23,696.5522);
   16->SetBinContent(24,628.7462);
   16->SetBinContent(25,597.9253);
   16->SetBinContent(26,530.1193);
   16->SetBinContent(27,745.8657);
   16->SetBinContent(28,690.3881);
   16->SetBinContent(29,745.8657);
   16->SetBinContent(30,678.0597);
   16->SetBinContent(31,585.5969);
   16->SetBinContent(32,678.0597);
   16->SetBinContent(33,807.5076);
   16->SetBinContent(34,906.1345);
   16->SetBinContent(35,770.5225);
   16->SetBinContent(36,943.1196);
   16->SetBinContent(37,1054.075);
   16->SetBinContent(38,1232.836);
   16->SetBinContent(39,1251.329);
   16->SetBinContent(40,1337.627);
   16->SetBinContent(41,1701.314);
   16->SetBinContent(42,1793.777);
   16->SetBinContent(43,2040.344);
   16->SetBinContent(44,2305.399);
   16->SetBinContent(45,2718.392);
   16->SetBinContent(46,3156.04);
   16->SetBinContent(47,3162.204);
   16->SetBinContent(48,3075.907);
   16->SetBinContent(49,2582.782);
   16->SetBinContent(50,906.1345);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,3.142);
   17->SetBinContent(1,7144.704);
   17->SetBinContent(2,4942.726);
   17->SetBinContent(3,2389.369);
   17->SetBinContent(4,2459.645);
   17->SetBinContent(5,1991.14);
   17->SetBinContent(6,1569.487);
   17->SetBinContent(7,1686.612);
   17->SetBinContent(8,1452.361);
   17->SetBinContent(9,1147.833);
   17->SetBinContent(10,983.8572);
   17->SetBinContent(11,913.5817);
   17->SetBinContent(12,726.1804);
   17->SetBinContent(13,819.881);
   17->SetBinContent(14,679.33);
   17->SetBinContent(15,702.7552);
   17->SetBinContent(16,515.3538);
   17->SetBinContent(17,585.6293);
   17->SetBinContent(18,609.0545);
   17->SetBinContent(19,421.6531);
   17->SetBinContent(20,515.3538);
   17->SetBinContent(21,468.5034);
   17->SetBinContent(22,445.0783);
   17->SetBinContent(23,468.5034);
   17->SetBinContent(24,468.5034);
   17->SetBinContent(25,187.4014);
   17->SetBinContent(26,210.8266);
   17->SetBinContent(27,257.6769);
   17->SetBinContent(28,187.4014);
   17->SetBinContent(29,374.8028);
   17->SetBinContent(30,46.85035);
   17->SetBinContent(31,374.8028);
   17->SetBinContent(32,421.6531);
   17->SetBinContent(33,281.1021);
   17->SetBinContent(34,304.5273);
   17->SetBinContent(35,398.2279);
   17->SetBinContent(36,281.1021);
   17->SetBinContent(37,351.3776);
   17->SetBinContent(38,374.8028);
   17->SetBinContent(39,398.2279);
   17->SetBinContent(40,445.0783);
   17->SetBinContent(41,655.9048);
   17->SetBinContent(42,655.9048);
   17->SetBinContent(43,749.6055);
   17->SetBinContent(44,1124.408);
   17->SetBinContent(45,1499.211);
   17->SetBinContent(46,1311.81);
   17->SetBinContent(47,1499.211);
   17->SetBinContent(48,1311.81);
   17->SetBinContent(49,702.7552);
   17->SetBinContent(50,538.779);
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
