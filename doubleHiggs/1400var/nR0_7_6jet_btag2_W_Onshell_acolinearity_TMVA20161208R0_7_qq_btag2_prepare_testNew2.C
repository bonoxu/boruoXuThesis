{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:03:54 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.8478413,-3.010237,4.13946,5.089242);
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
   
   TH1F *THStack_stack_24 = new TH1F("THStack_stack_24","",50,0,3.142);
   THStack_stack_24->SetMinimum(0.02803298);
   THStack_stack_24->SetMaximum(27623.84);
   THStack_stack_24->SetDirectory(0);
   THStack_stack_24->SetStats(0);
   THStack_stack_24->SetLineWidth(2);
   THStack_stack_24->SetMarkerSize(1.2);
   THStack_stack_24->GetXaxis()->SetTitle("Acolinearity of W sub-jets");
   THStack_stack_24->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_24->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_24->GetXaxis()->SetLabelColor(ci);
   THStack_stack_24->GetXaxis()->SetLabelFont(42);
   THStack_stack_24->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_24->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_24->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_24->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_24->GetXaxis()->SetTitleColor(ci);
   THStack_stack_24->GetXaxis()->SetTitleFont(42);
   THStack_stack_24->GetYaxis()->SetTitle("Number of events");
   THStack_stack_24->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_24->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_24->GetYaxis()->SetLabelColor(ci);
   THStack_stack_24->GetYaxis()->SetLabelFont(42);
   THStack_stack_24->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_24->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_24->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_24->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_24->GetYaxis()->SetTitleColor(ci);
   THStack_stack_24->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_24->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_24->GetZaxis()->SetLabelColor(ci);
   THStack_stack_24->GetZaxis()->SetLabelFont(42);
   THStack_stack_24->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_24->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_24->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_24->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_24->GetZaxis()->SetTitleColor(ci);
   THStack_stack_24->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_24);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,3.142);
   0->SetBinContent(1,0.01882);
   0->SetBinContent(2,0.024466);
   0->SetBinContent(3,0.04893202);
   0->SetBinContent(4,0.06210603);
   0->SetBinContent(5,0.08657205);
   0->SetBinContent(6,0.1279761);
   0->SetBinContent(7,0.1411501);
   0->SetBinContent(8,0.1844361);
   0->SetBinContent(9,0.2107842);
   0->SetBinContent(10,0.2239582);
   0->SetBinContent(11,0.1712621);
   0->SetBinContent(12,0.2220762);
   0->SetBinContent(13,0.2408962);
   0->SetBinContent(14,0.2239582);
   0->SetBinContent(15,0.2898279);
   0->SetBinContent(16,0.2860639);
   0->SetBinContent(17,0.3218217);
   0->SetBinContent(18,0.3124118);
   0->SetBinContent(19,0.284182);
   0->SetBinContent(20,0.2860639);
   0->SetBinContent(21,0.3613434);
   0->SetBinContent(22,0.3952192);
   0->SetBinContent(23,0.3556975);
   0->SetBinContent(24,0.4027471);
   0->SetBinContent(25,0.4328589);
   0->SetBinContent(26,0.4328589);
   0->SetBinContent(27,0.4761446);
   0->SetBinContent(28,0.4441508);
   0->SetBinContent(29,0.5006105);
   0->SetBinContent(30,0.5137846);
   0->SetBinContent(31,0.5288407);
   0->SetBinContent(32,0.5382508);
   0->SetBinContent(33,0.5420148);
   0->SetBinContent(34,0.5853012);
   0->SetBinContent(35,0.5514249);
   0->SetBinContent(36,0.6474078);
   0->SetBinContent(37,0.6850481);
   0->SetBinContent(38,0.6285876);
   0->SetBinContent(39,0.6982222);
   0->SetBinContent(40,0.5965933);
   0->SetBinContent(41,0.6248236);
   0->SetBinContent(42,0.5401328);
   0->SetBinContent(43,0.5006105);
   0->SetBinContent(44,0.423449);
   0->SetBinContent(45,0.2578341);
   0->SetBinContent(46,0.1637341);
   0->SetBinContent(47,0.05457802);
   0->SetBinContent(48,0.024466);
   0->SetBinContent(49,0.003764);
   0->SetBinContent(50,0.001882);
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
   1->SetBinContent(1,0.007528);
   1->SetBinContent(2,0.02823001);
   1->SetBinContent(3,0.04987303);
   1->SetBinContent(4,0.06398804);
   1->SetBinContent(5,0.08939507);
   1->SetBinContent(6,0.1195071);
   1->SetBinContent(7,0.1307991);
   1->SetBinContent(8,0.137386);
   1->SetBinContent(9,0.1703208);
   1->SetBinContent(10,0.1834947);
   1->SetBinContent(11,0.1994916);
   1->SetBinContent(12,0.2220754);
   1->SetBinContent(13,0.2474822);
   1->SetBinContent(14,0.2324263);
   1->SetBinContent(15,0.2390133);
   1->SetBinContent(16,0.2333673);
   1->SetBinContent(17,0.2474822);
   1->SetBinContent(18,0.2493642);
   1->SetBinContent(19,0.2691254);
   1->SetBinContent(20,0.2700664);
   1->SetBinContent(21,0.2681844);
   1->SetBinContent(22,0.2314854);
   1->SetBinContent(23,0.2935916);
   1->SetBinContent(24,0.2691254);
   1->SetBinContent(25,0.2794765);
   1->SetBinContent(26,0.2945326);
   1->SetBinContent(27,0.335937);
   1->SetBinContent(28,0.3199399);
   1->SetBinContent(29,0.3265269);
   1->SetBinContent(30,0.3067657);
   1->SetBinContent(31,0.2982967);
   1->SetBinContent(32,0.3001787);
   1->SetBinContent(33,0.2691254);
   1->SetBinContent(34,0.2898276);
   1->SetBinContent(35,0.3208809);
   1->SetBinContent(36,0.334055);
   1->SetBinContent(37,0.335937);
   1->SetBinContent(38,0.3500521);
   1->SetBinContent(39,0.2785355);
   1->SetBinContent(40,0.2879456);
   1->SetBinContent(41,0.2804175);
   1->SetBinContent(42,0.2757125);
   1->SetBinContent(43,0.2013736);
   1->SetBinContent(44,0.135504);
   1->SetBinContent(45,0.08092606);
   1->SetBinContent(46,0.03387602);
   1->SetBinContent(47,0.007528);
   1->SetBinContent(48,0.008469);
   1->SetBinContent(49,0.001882);
   1->SetBinContent(50,0.000941);
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
   2->SetBinContent(1,0.02164301);
   2->SetBinContent(2,0.09974608);
   2->SetBinContent(3,0.140209);
   2->SetBinContent(4,0.1891406);
   2->SetBinContent(5,0.2361903);
   2->SetBinContent(6,0.2898276);
   2->SetBinContent(7,0.332173);
   2->SetBinContent(8,0.3914565);
   2->SetBinContent(9,0.4300378);
   2->SetBinContent(10,0.446976);
   2->SetBinContent(11,0.4780293);
   2->SetBinContent(12,0.5250789);
   2->SetBinContent(13,0.5664819);
   2->SetBinContent(14,0.5787147);
   2->SetBinContent(15,0.5730688);
   2->SetBinContent(16,0.6304685);
   2->SetBinContent(17,0.5937703);
   2->SetBinContent(18,0.6276456);
   2->SetBinContent(19,0.6229407);
   2->SetBinContent(20,0.6596388);
   2->SetBinContent(21,0.6417602);
   2->SetBinContent(22,0.6615208);
   2->SetBinContent(23,0.6257636);
   2->SetBinContent(24,0.6812813);
   2->SetBinContent(25,0.6878682);
   2->SetBinContent(26,0.6812813);
   2->SetBinContent(27,0.7367991);
   2->SetBinContent(28,0.6991599);
   2->SetBinContent(29,0.7565596);
   2->SetBinContent(30,0.7349171);
   2->SetBinContent(31,0.7490318);
   2->SetBinContent(32,0.7593825);
   2->SetBinContent(33,0.7894939);
   2->SetBinContent(34,0.8007856);
   2->SetBinContent(35,0.7593825);
   2->SetBinContent(36,0.8365428);
   2->SetBinContent(37,0.8412477);
   2->SetBinContent(38,0.8120773);
   2->SetBinContent(39,0.8064315);
   2->SetBinContent(40,0.7763202);
   2->SetBinContent(41,0.7744382);
   2->SetBinContent(42,0.6436422);
   2->SetBinContent(43,0.5824786);
   2->SetBinContent(44,0.4328609);
   2->SetBinContent(45,0.2568923);
   2->SetBinContent(46,0.143032);
   2->SetBinContent(47,0.06210604);
   2->SetBinContent(48,0.017879);
   2->SetBinContent(49,0.00941);
   2->SetBinContent(50,0.000941);
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
   3->SetBinContent(1,0.075119);
   3->SetBinContent(2,0.2390149);
   3->SetBinContent(3,0.6487552);
   3->SetBinContent(4,0.7853357);
   3->SetBinContent(5,0.7853357);
   3->SetBinContent(6,1.140445);
   3->SetBinContent(7,1.297512);
   3->SetBinContent(8,1.604818);
   3->SetBinContent(9,1.632135);
   3->SetBinContent(10,1.761886);
   3->SetBinContent(11,2.15114);
   3->SetBinContent(12,2.342353);
   3->SetBinContent(13,2.478933);
   3->SetBinContent(14,2.335524);
   3->SetBinContent(15,2.765752);
   3->SetBinContent(16,2.547224);
   3->SetBinContent(17,2.752094);
   3->SetBinContent(18,2.970623);
   3->SetBinContent(19,2.786239);
   3->SetBinContent(20,2.956965);
   3->SetBinContent(21,3.120862);
   3->SetBinContent(22,2.984281);
   3->SetBinContent(23,3.093545);
   3->SetBinContent(24,3.325732);
   3->SetBinContent(25,3.250613);
   3->SetBinContent(26,3.353048);
   3->SetBinContent(27,2.970623);
   3->SetBinContent(28,3.318903);
   3->SetBinContent(29,3.441826);
   3->SetBinContent(30,3.633038);
   3->SetBinContent(31,3.76279);
   3->SetBinContent(32,3.714987);
   3->SetBinContent(33,3.735474);
   3->SetBinContent(34,3.721816);
   3->SetBinContent(35,3.592064);
   3->SetBinContent(36,3.544261);
   3->SetBinContent(37,3.530603);
   3->SetBinContent(38,3.605722);
   3->SetBinContent(39,3.537432);
   3->SetBinContent(40,3.038913);
   3->SetBinContent(41,2.847701);
   3->SetBinContent(42,2.676975);
   3->SetBinContent(43,1.857492);
   3->SetBinContent(44,1.379461);
   3->SetBinContent(45,0.874113);
   3->SetBinContent(46,0.3824238);
   3->SetBinContent(47,0.129751);
   3->SetBinContent(48,0.027316);
   3->SetBinContent(49,0.006829);
   3->SetBinContent(50,0.020487);
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
   4->SetBinContent(1,0.199918);
   4->SetBinContent(2,0.7365404);
   4->SetBinContent(3,1.115331);
   4->SetBinContent(4,1.66247);
   4->SetBinContent(5,1.536207);
   4->SetBinContent(6,2.025475);
   4->SetBinContent(7,2.719919);
   4->SetBinContent(8,2.740963);
   4->SetBinContent(9,3.261797);
   4->SetBinContent(10,3.461713);
   4->SetBinContent(11,3.982546);
   4->SetBinContent(12,4.124592);
   4->SetBinContent(13,4.008851);
   4->SetBinContent(14,4.356073);
   4->SetBinContent(15,4.3929);
   4->SetBinContent(16,4.703296);
   4->SetBinContent(17,4.661208);
   4->SetBinContent(18,4.819036);
   4->SetBinContent(19,4.666469);
   4->SetBinContent(20,4.7296);
   4->SetBinContent(21,4.792732);
   4->SetBinContent(22,4.955821);
   4->SetBinContent(23,4.740122);
   4->SetBinContent(24,4.997909);
   4->SetBinContent(25,5.182042);
   4->SetBinContent(26,4.855863);
   4->SetBinContent(27,4.797993);
   4->SetBinContent(28,5.103127);
   4->SetBinContent(29,5.018952);
   4->SetBinContent(30,5.045257);
   4->SetBinContent(31,4.845341);
   4->SetBinContent(32,4.692774);
   4->SetBinContent(33,4.887429);
   4->SetBinContent(34,5.234651);
   4->SetBinContent(35,4.771688);
   4->SetBinContent(36,4.829558);
   4->SetBinContent(37,4.340291);
   4->SetBinContent(38,4.487597);
   4->SetBinContent(39,4.077243);
   4->SetBinContent(40,3.814196);
   4->SetBinContent(41,3.682672);
   4->SetBinContent(42,3.146056);
   4->SetBinContent(43,2.635744);
   4->SetBinContent(44,1.867646);
   4->SetBinContent(45,1.210028);
   4->SetBinContent(46,0.5103172);
   4->SetBinContent(47,0.194657);
   4->SetBinContent(48,0.06839299);
   4->SetBinContent(49,0.042088);
   4->SetBinContent(50,0.010522);
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
   5->SetBinContent(1,0.5332426);
   5->SetBinContent(2,1.388911);
   5->SetBinContent(3,2.591812);
   5->SetBinContent(4,3.273873);
   5->SetBinContent(5,4.327966);
   5->SetBinContent(6,5.332456);
   5->SetBinContent(7,6.485758);
   5->SetBinContent(8,6.870193);
   5->SetBinContent(9,8.420315);
   5->SetBinContent(10,8.742731);
   5->SetBinContent(11,9.920791);
   5->SetBinContent(12,10.45402);
   5->SetBinContent(13,11.68168);
   5->SetBinContent(14,11.76848);
   5->SetBinContent(15,12.83494);
   5->SetBinContent(16,12.1529);
   5->SetBinContent(17,12.88454);
   5->SetBinContent(18,12.0165);
   5->SetBinContent(19,13.90139);
   5->SetBinContent(20,13.10775);
   5->SetBinContent(21,14.137);
   5->SetBinContent(22,13.86419);
   5->SetBinContent(23,13.85179);
   5->SetBinContent(24,14.1246);
   5->SetBinContent(25,14.79424);
   5->SetBinContent(26,14.52142);
   5->SetBinContent(27,15.50107);
   5->SetBinContent(28,14.79424);
   5->SetBinContent(29,14.68263);
   5->SetBinContent(30,15.77389);
   5->SetBinContent(31,15.50107);
   5->SetBinContent(32,15.21586);
   5->SetBinContent(33,15.61268);
   5->SetBinContent(34,15.52587);
   5->SetBinContent(35,15.17866);
   5->SetBinContent(36,15.52587);
   5->SetBinContent(37,15.20346);
   5->SetBinContent(38,13.52937);
   5->SetBinContent(39,13.40537);
   5->SetBinContent(40,13.33096);
   5->SetBinContent(41,12.77293);
   5->SetBinContent(42,11.33446);
   5->SetBinContent(43,10.97484);
   5->SetBinContent(44,8.345911);
   5->SetBinContent(45,5.71689);
   5->SetBinContent(46,2.492603);
   5->SetBinContent(47,0.6200495);
   5->SetBinContent(48,0.24802);
   5->SetBinContent(49,0.086807);
   5->SetBinContent(50,0.086807);
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
   6->SetBinContent(1,14.42211);
   6->SetBinContent(2,46.8339);
   6->SetBinContent(3,77.65128);
   6->SetBinContent(4,108.6964);
   6->SetBinContent(5,143.3864);
   6->SetBinContent(6,171.5499);
   6->SetBinContent(7,196.6011);
   6->SetBinContent(8,227.9529);
   6->SetBinContent(9,255.8128);
   6->SetBinContent(10,268.4118);
   6->SetBinContent(11,290.3461);
   6->SetBinContent(12,306.2086);
   6->SetBinContent(13,316.8342);
   6->SetBinContent(14,329.3572);
   6->SetBinContent(15,331.1788);
   6->SetBinContent(16,332.5449);
   6->SetBinContent(17,335.1254);
   6->SetBinContent(18,333.3798);
   6->SetBinContent(19,331.7859);
   6->SetBinContent(20,324.4239);
   6->SetBinContent(21,321.8434);
   6->SetBinContent(22,321.388);
   6->SetBinContent(23,318.8834);
   6->SetBinContent(24,316.9101);
   6->SetBinContent(25,312.4322);
   6->SetBinContent(26,312.8875);
   6->SetBinContent(27,299.6055);
   6->SetBinContent(28,302.7173);
   6->SetBinContent(29,299.3019);
   6->SetBinContent(30,318.1245);
   6->SetBinContent(31,317.9727);
   6->SetBinContent(32,308.865);
   6->SetBinContent(33,322.147);
   6->SetBinContent(34,325.2588);
   6->SetBinContent(35,331.9377);
   6->SetBinContent(36,337.63);
   6->SetBinContent(37,333.4557);
   6->SetBinContent(38,339.5275);
   6->SetBinContent(39,323.7408);
   6->SetBinContent(40,323.5132);
   6->SetBinContent(41,315.6198);
   6->SetBinContent(42,301.4271);
   6->SetBinContent(43,275.2425);
   6->SetBinContent(44,232.2799);
   6->SetBinContent(45,157.582);
   6->SetBinContent(46,69.68127);
   6->SetBinContent(47,13.51124);
   6->SetBinContent(48,4.098925);
   6->SetBinContent(49,2.656711);
   6->SetBinContent(50,1.366308);
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
   7->SetBinContent(1,5.077484);
   7->SetBinContent(2,18.79655);
   7->SetBinContent(3,29.1469);
   7->SetBinContent(4,38.95993);
   7->SetBinContent(5,49.94454);
   7->SetBinContent(6,59.31808);
   7->SetBinContent(7,69.32628);
   7->SetBinContent(8,75.96587);
   7->SetBinContent(9,87.68279);
   7->SetBinContent(10,97.15396);
   7->SetBinContent(11,104.3794);
   7->SetBinContent(12,106.2346);
   7->SetBinContent(13,114.827);
   7->SetBinContent(14,116.9751);
   7->SetBinContent(15,124.1517);
   7->SetBinContent(16,124.4446);
   7->SetBinContent(17,128.3991);
   7->SetBinContent(18,132.989);
   7->SetBinContent(19,130.987);
   7->SetBinContent(20,136.9929);
   7->SetBinContent(21,134.2097);
   7->SetBinContent(22,138.4089);
   7->SetBinContent(23,134.0632);
   7->SetBinContent(24,142.364);
   7->SetBinContent(25,142.0222);
   7->SetBinContent(26,143.9753);
   7->SetBinContent(27,146.3191);
   7->SetBinContent(28,150.2253);
   7->SetBinContent(29,150.8112);
   7->SetBinContent(30,155.6941);
   7->SetBinContent(31,152.8132);
   7->SetBinContent(32,159.7468);
   7->SetBinContent(33,158.5261);
   7->SetBinContent(34,157.403);
   7->SetBinContent(35,165.0202);
   7->SetBinContent(36,163.4577);
   7->SetBinContent(37,160.6257);
   7->SetBinContent(38,166.0945);
   7->SetBinContent(39,167.071);
   7->SetBinContent(40,167.1687);
   7->SetBinContent(41,165.2155);
   7->SetBinContent(42,165.9968);
   7->SetBinContent(43,161.7976);
   7->SetBinContent(44,151.8366);
   7->SetBinContent(45,132.1589);
   7->SetBinContent(46,109.4567);
   7->SetBinContent(47,39.30167);
   7->SetBinContent(48,6.200388);
   7->SetBinContent(49,3.222251);
   7->SetBinContent(50,0.8299739);
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
   8->SetBinContent(2,1.614283);
   8->SetBinContent(3,1.614283);
   8->SetBinContent(4,3.081813);
   8->SetBinContent(5,2.788307);
   8->SetBinContent(6,3.815579);
   8->SetBinContent(7,2.494801);
   8->SetBinContent(8,5.42986);
   8->SetBinContent(9,4.255837);
   8->SetBinContent(10,4.842849);
   8->SetBinContent(11,5.576613);
   8->SetBinContent(12,5.136354);
   8->SetBinContent(13,7.4844);
   8->SetBinContent(14,6.310377);
   8->SetBinContent(15,4.109085);
   8->SetBinContent(16,7.044141);
   8->SetBinContent(17,4.549343);
   8->SetBinContent(18,7.337647);
   8->SetBinContent(19,4.40259);
   8->SetBinContent(20,5.723366);
   8->SetBinContent(21,5.723366);
   8->SetBinContent(22,4.696096);
   8->SetBinContent(23,4.109085);
   8->SetBinContent(24,4.40259);
   8->SetBinContent(25,5.283107);
   8->SetBinContent(26,6.016871);
   8->SetBinContent(27,4.255837);
   8->SetBinContent(28,6.897388);
   8->SetBinContent(29,5.723366);
   8->SetBinContent(30,6.897388);
   8->SetBinContent(31,6.163624);
   8->SetBinContent(32,4.989602);
   8->SetBinContent(33,6.750636);
   8->SetBinContent(34,4.989602);
   8->SetBinContent(35,5.723366);
   8->SetBinContent(36,7.337647);
   8->SetBinContent(37,7.337647);
   8->SetBinContent(38,7.924658);
   8->SetBinContent(39,10.85972);
   8->SetBinContent(40,8.805178);
   8->SetBinContent(41,9.979204);
   8->SetBinContent(42,11.29998);
   8->SetBinContent(43,13.20778);
   8->SetBinContent(44,11.59349);
   8->SetBinContent(45,14.23505);
   8->SetBinContent(46,10.85972);
   8->SetBinContent(47,4.989602);
   8->SetBinContent(48,0.293506);
   8->SetBinContent(49,0.293506);
   8->SetBinContent(50,0.440259);
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
   9->SetBinContent(1,7.200441);
   9->SetBinContent(2,21.77274);
   9->SetBinContent(3,33.94487);
   9->SetBinContent(4,54.00337);
   9->SetBinContent(5,66.00417);
   9->SetBinContent(6,78.00498);
   9->SetBinContent(7,96.0062);
   9->SetBinContent(8,103.8924);
   9->SetBinContent(9,121.5508);
   9->SetBinContent(10,133.7228);
   9->SetBinContent(11,145.3802);
   9->SetBinContent(12,147.4374);
   9->SetBinContent(13,158.409);
   9->SetBinContent(14,164.752);
   9->SetBinContent(15,170.0665);
   9->SetBinContent(16,187.724);
   9->SetBinContent(17,176.0666);
   9->SetBinContent(18,197.6671);
   9->SetBinContent(19,194.7527);
   9->SetBinContent(20,198.3528);
   9->SetBinContent(21,214.6389);
   9->SetBinContent(22,216.6961);
   9->SetBinContent(23,221.1533);
   9->SetBinContent(24,237.268);
   9->SetBinContent(25,232.6393);
   9->SetBinContent(26,261.9548);
   9->SetBinContent(27,244.4682);
   9->SetBinContent(28,293.5012);
   9->SetBinContent(29,304.9882);
   9->SetBinContent(30,306.8741);
   9->SetBinContent(31,349.5646);
   9->SetBinContent(32,374.2531);
   9->SetBinContent(33,407.1711);
   9->SetBinContent(34,457.0623);
   9->SetBinContent(35,487.58);
   9->SetBinContent(36,524.4413);
   9->SetBinContent(37,576.7328);
   9->SetBinContent(38,641.5401);
   9->SetBinContent(39,718.863);
   9->SetBinContent(40,783.4988);
   9->SetBinContent(41,852.9352);
   9->SetBinContent(42,959.7471);
   9->SetBinContent(43,1066.544);
   9->SetBinContent(44,1059.517);
   9->SetBinContent(45,982.5497);
   9->SetBinContent(46,697.0892);
   9->SetBinContent(47,201.2672);
   9->SetBinContent(48,43.71696);
   9->SetBinContent(49,20.40123);
   9->SetBinContent(50,7.200441);
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
   10->SetBinContent(1,58.86079);
   10->SetBinContent(2,179.9319);
   10->SetBinContent(3,295.3864);
   10->SetBinContent(4,412.5257);
   10->SetBinContent(5,516.9883);
   10->SetBinContent(6,632.354);
   10->SetBinContent(7,738.0007);
   10->SetBinContent(8,848.0021);
   10->SetBinContent(9,938.5654);
   10->SetBinContent(10,1020.42);
   10->SetBinContent(11,1084.792);
   10->SetBinContent(12,1166.583);
   10->SetBinContent(13,1234.49);
   10->SetBinContent(14,1272.23);
   10->SetBinContent(15,1299.494);
   10->SetBinContent(16,1320.951);
   10->SetBinContent(17,1357.429);
   10->SetBinContent(18,1375.226);
   10->SetBinContent(19,1383.43);
   10->SetBinContent(20,1413.471);
   10->SetBinContent(21,1406.529);
   10->SetBinContent(22,1413.723);
   10->SetBinContent(23,1411.578);
   10->SetBinContent(24,1415.617);
   10->SetBinContent(25,1421.865);
   10->SetBinContent(26,1414.102);
   10->SetBinContent(27,1430.384);
   10->SetBinContent(28,1431.71);
   10->SetBinContent(29,1437.39);
   10->SetBinContent(30,1434.928);
   10->SetBinContent(31,1450.895);
   10->SetBinContent(32,1424.641);
   10->SetBinContent(33,1427.292);
   10->SetBinContent(34,1414.291);
   10->SetBinContent(35,1409.495);
   10->SetBinContent(36,1401.417);
   10->SetBinContent(37,1383.178);
   10->SetBinContent(38,1347.521);
   10->SetBinContent(39,1292.804);
   10->SetBinContent(40,1254.307);
   10->SetBinContent(41,1183.307);
   10->SetBinContent(42,1094.006);
   10->SetBinContent(43,975.2957);
   10->SetBinContent(44,808.0532);
   10->SetBinContent(45,567.0979);
   10->SetBinContent(46,253.8163);
   10->SetBinContent(47,58.98696);
   10->SetBinContent(48,19.11568);
   10->SetBinContent(49,11.29277);
   10->SetBinContent(50,3.40675);
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
   11->SetBinContent(1,29.26772);
   11->SetBinContent(2,102.437);
   11->SetBinContent(3,117.0709);
   11->SetBinContent(4,117.0709);
   11->SetBinContent(5,219.5079);
   11->SetBinContent(6,204.8741);
   11->SetBinContent(7,248.7757);
   11->SetBinContent(8,278.0434);
   11->SetBinContent(9,263.4095);
   11->SetBinContent(10,424.3819);
   11->SetBinContent(11,380.4803);
   11->SetBinContent(12,395.1142);
   11->SetBinContent(13,395.1142);
   11->SetBinContent(14,424.3819);
   11->SetBinContent(15,468.2834);
   11->SetBinContent(16,556.0865);
   11->SetBinContent(17,278.0434);
   11->SetBinContent(18,278.0434);
   11->SetBinContent(19,321.9449);
   11->SetBinContent(20,204.8741);
   11->SetBinContent(21,248.7757);
   11->SetBinContent(22,234.1418);
   11->SetBinContent(23,175.6063);
   11->SetBinContent(24,175.6063);
   11->SetBinContent(25,307.3111);
   11->SetBinContent(26,234.1418);
   11->SetBinContent(27,219.5079);
   11->SetBinContent(28,117.0709);
   11->SetBinContent(29,248.7757);
   11->SetBinContent(30,351.2126);
   11->SetBinContent(31,160.9725);
   11->SetBinContent(32,160.9725);
   11->SetBinContent(33,307.3111);
   11->SetBinContent(34,263.4095);
   11->SetBinContent(35,380.4803);
   11->SetBinContent(36,175.6063);
   11->SetBinContent(37,204.8741);
   11->SetBinContent(38,278.0434);
   11->SetBinContent(39,117.0709);
   11->SetBinContent(40,321.9449);
   11->SetBinContent(41,234.1418);
   11->SetBinContent(42,102.437);
   11->SetBinContent(43,102.437);
   11->SetBinContent(44,117.0709);
   11->SetBinContent(45,131.7047);
   11->SetBinContent(46,87.80315);
   11->SetBinContent(47,43.90158);
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
   12->SetBinContent(1,222.0217);
   12->SetBinContent(2,805.6229);
   12->SetBinContent(3,1186.233);
   12->SetBinContent(4,1579.531);
   12->SetBinContent(5,1960.141);
   12->SetBinContent(6,2290.003);
   12->SetBinContent(7,2619.865);
   12->SetBinContent(8,2423.217);
   12->SetBinContent(9,2543.743);
   12->SetBinContent(10,2594.491);
   12->SetBinContent(11,2366.125);
   12->SetBinContent(12,2245.599);
   12->SetBinContent(13,1934.767);
   12->SetBinContent(14,1820.584);
   12->SetBinContent(15,1503.408);
   12->SetBinContent(16,1459.004);
   12->SetBinContent(17,1059.363);
   12->SetBinContent(18,989.5845);
   12->SetBinContent(19,780.2488);
   12->SetBinContent(20,532.8521);
   12->SetBinContent(21,551.8826);
   12->SetBinContent(22,602.6307);
   12->SetBinContent(23,418.6694);
   12->SetBinContent(24,386.9521);
   12->SetBinContent(25,501.1346);
   12->SetBinContent(26,367.9216);
   12->SetBinContent(27,482.1042);
   12->SetBinContent(28,437.6999);
   12->SetBinContent(29,444.0433);
   12->SetBinContent(30,444.0433);
   12->SetBinContent(31,463.0738);
   12->SetBinContent(32,545.5391);
   12->SetBinContent(33,678.7527);
   12->SetBinContent(34,640.6917);
   12->SetBinContent(35,659.7222);
   12->SetBinContent(36,875.4014);
   12->SetBinContent(37,780.2488);
   12->SetBinContent(38,1040.333);
   12->SetBinContent(39,932.493);
   12->SetBinContent(40,1097.424);
   12->SetBinContent(41,1091.081);
   12->SetBinContent(42,1414.599);
   12->SetBinContent(43,1839.614);
   12->SetBinContent(44,2429.56);
   12->SetBinContent(45,3317.651);
   12->SetBinContent(46,4522.901);
   12->SetBinContent(47,1922.08);
   12->SetBinContent(48,329.8608);
   12->SetBinContent(49,171.2739);
   12->SetBinContent(50,88.80869);
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
   13->SetBinContent(1,163.149);
   13->SetBinContent(2,897.3193);
   13->SetBinContent(3,978.8938);
   13->SetBinContent(4,2202.511);
   13->SetBinContent(5,1957.787);
   13->SetBinContent(6,2855.106);
   13->SetBinContent(7,2365.66);
   13->SetBinContent(8,2773.532);
   13->SetBinContent(9,3018.255);
   13->SetBinContent(10,3752.426);
   13->SetBinContent(11,2936.681);
   13->SetBinContent(12,3507.702);
   13->SetBinContent(13,2528.809);
   13->SetBinContent(14,2284.085);
   13->SetBinContent(15,3589.277);
   13->SetBinContent(16,2528.809);
   13->SetBinContent(17,3344.553);
   13->SetBinContent(18,2039.362);
   13->SetBinContent(19,2284.085);
   13->SetBinContent(20,1957.787);
   13->SetBinContent(21,1794.638);
   13->SetBinContent(22,2284.085);
   13->SetBinContent(23,1713.064);
   13->SetBinContent(24,1876.213);
   13->SetBinContent(25,1713.064);
   13->SetBinContent(26,2202.511);
   13->SetBinContent(27,1631.49);
   13->SetBinContent(28,1468.341);
   13->SetBinContent(29,1713.064);
   13->SetBinContent(30,1713.064);
   13->SetBinContent(31,1713.064);
   13->SetBinContent(32,1549.915);
   13->SetBinContent(33,1386.766);
   13->SetBinContent(34,1223.617);
   13->SetBinContent(35,1386.766);
   13->SetBinContent(36,1957.787);
   13->SetBinContent(37,1468.341);
   13->SetBinContent(38,1468.341);
   13->SetBinContent(39,1631.49);
   13->SetBinContent(40,1223.617);
   13->SetBinContent(41,1631.49);
   13->SetBinContent(42,1060.468);
   13->SetBinContent(43,1142.043);
   13->SetBinContent(44,571.0215);
   13->SetBinContent(45,571.0215);
   13->SetBinContent(46,163.149);
   13->SetBinContent(47,244.7235);
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
   14->SetBinContent(1,124.9139);
   14->SetBinContent(2,406.9774);
   14->SetBinContent(3,636.6578);
   14->SetBinContent(4,898.574);
   14->SetBinContent(5,1180.635);
   14->SetBinContent(6,1277.341);
   14->SetBinContent(7,1515.077);
   14->SetBinContent(8,1466.724);
   14->SetBinContent(9,1772.96);
   14->SetBinContent(10,1740.724);
   14->SetBinContent(11,1801.166);
   14->SetBinContent(12,1744.754);
   14->SetBinContent(13,1696.401);
   14->SetBinContent(14,1692.371);
   14->SetBinContent(15,1599.695);
   14->SetBinContent(16,1744.754);
   14->SetBinContent(17,1474.783);
   14->SetBinContent(18,1398.224);
   14->SetBinContent(19,1277.341);
   14->SetBinContent(20,1216.9);
   14->SetBinContent(21,1152.429);
   14->SetBinContent(22,1128.253);
   14->SetBinContent(23,1071.841);
   14->SetBinContent(24,1047.664);
   14->SetBinContent(25,926.7803);
   14->SetBinContent(26,854.2497);
   14->SetBinContent(27,846.1907);
   14->SetBinContent(28,870.3676);
   14->SetBinContent(29,753.5127);
   14->SetBinContent(30,729.3358);
   14->SetBinContent(31,838.1318);
   14->SetBinContent(32,822.0139);
   14->SetBinContent(33,777.6896);
   14->SetBinContent(34,793.8075);
   14->SetBinContent(35,854.2497);
   14->SetBinContent(36,777.6896);
   14->SetBinContent(37,693.0705);
   14->SetBinContent(38,805.8959);
   14->SetBinContent(39,725.3063);
   14->SetBinContent(40,773.6601);
   14->SetBinContent(41,680.9821);
   14->SetBinContent(42,664.8641);
   14->SetBinContent(43,648.7462);
   14->SetBinContent(44,523.8323);
   14->SetBinContent(45,374.7416);
   14->SetBinContent(46,153.1202);
   14->SetBinContent(47,88.64855);
   14->SetBinContent(48,24.17688);
   14->SetBinContent(49,8.058958);
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
   15->SetBinContent(1,3.862847);
   15->SetBinContent(2,34.76562);
   15->SetBinContent(3,46.35416);
   15->SetBinContent(4,77.25694);
   15->SetBinContent(5,96.57117);
   15->SetBinContent(6,115.8854);
   15->SetBinContent(7,100.434);
   15->SetBinContent(8,154.5139);
   15->SetBinContent(9,150.6511);
   15->SetBinContent(10,162.2396);
   15->SetBinContent(11,119.7482);
   15->SetBinContent(12,139.0625);
   15->SetBinContent(13,131.3368);
   15->SetBinContent(14,96.57117);
   15->SetBinContent(15,150.6511);
   15->SetBinContent(16,112.0226);
   15->SetBinContent(17,73.39409);
   15->SetBinContent(18,92.70832);
   15->SetBinContent(19,69.53124);
   15->SetBinContent(20,65.6684);
   15->SetBinContent(21,81.11978);
   15->SetBinContent(22,61.80555);
   15->SetBinContent(23,61.80555);
   15->SetBinContent(24,57.9427);
   15->SetBinContent(25,38.62847);
   15->SetBinContent(26,38.62847);
   15->SetBinContent(27,46.35416);
   15->SetBinContent(28,61.80555);
   15->SetBinContent(29,69.53124);
   15->SetBinContent(30,38.62847);
   15->SetBinContent(31,42.49131);
   15->SetBinContent(32,61.80555);
   15->SetBinContent(33,46.35416);
   15->SetBinContent(34,57.9427);
   15->SetBinContent(35,23.17708);
   15->SetBinContent(36,27.03993);
   15->SetBinContent(37,46.35416);
   15->SetBinContent(38,38.62847);
   15->SetBinContent(39,54.07985);
   15->SetBinContent(40,73.39409);
   15->SetBinContent(41,27.03993);
   15->SetBinContent(42,57.9427);
   15->SetBinContent(43,42.49131);
   15->SetBinContent(44,50.21701);
   15->SetBinContent(45,73.39409);
   15->SetBinContent(46,73.39409);
   15->SetBinContent(47,19.31424);
   15->SetBinContent(48,7.725694);
   15->SetBinContent(49,3.862847);
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
   16->SetBinContent(1,129.4476);
   16->SetBinContent(2,388.343);
   16->SetBinContent(3,733.5374);
   16->SetBinContent(4,807.5076);
   16->SetBinContent(5,1226.672);
   16->SetBinContent(6,1497.896);
   16->SetBinContent(7,1485.568);
   16->SetBinContent(8,1812.27);
   16->SetBinContent(9,2071.165);
   16->SetBinContent(10,1892.404);
   16->SetBinContent(11,2182.118);
   16->SetBinContent(12,2157.462);
   16->SetBinContent(13,2028.016);
   16->SetBinContent(14,1898.568);
   16->SetBinContent(15,2077.329);
   16->SetBinContent(16,1522.553);
   16->SetBinContent(17,1460.911);
   16->SetBinContent(18,1306.807);
   16->SetBinContent(19,1282.15);
   16->SetBinContent(20,1029.418);
   16->SetBinContent(21,1029.418);
   16->SetBinContent(22,1010.926);
   16->SetBinContent(23,986.2689);
   16->SetBinContent(24,986.2689);
   16->SetBinContent(25,899.9703);
   16->SetBinContent(26,850.6569);
   16->SetBinContent(27,973.9406);
   16->SetBinContent(28,961.6122);
   16->SetBinContent(29,856.821);
   16->SetBinContent(30,1004.761);
   16->SetBinContent(31,1041.747);
   16->SetBinContent(32,1091.06);
   16->SetBinContent(33,1072.568);
   16->SetBinContent(34,1054.075);
   16->SetBinContent(35,1195.851);
   16->SetBinContent(36,1128.045);
   16->SetBinContent(37,1319.135);
   16->SetBinContent(38,1399.269);
   16->SetBinContent(39,1312.971);
   16->SetBinContent(40,1220.508);
   16->SetBinContent(41,1306.807);
   16->SetBinContent(42,1263.657);
   16->SetBinContent(43,1423.926);
   16->SetBinContent(44,1220.508);
   16->SetBinContent(45,1146.538);
   16->SetBinContent(46,1109.553);
   16->SetBinContent(47,443.8207);
   16->SetBinContent(48,80.13421);
   16->SetBinContent(49,36.98502);
   16->SetBinContent(50,12.32834);
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
   17->SetBinContent(1,93.70071);
   17->SetBinContent(2,304.5273);
   17->SetBinContent(3,726.1804);
   17->SetBinContent(4,632.4797);
   17->SetBinContent(5,1124.408);
   17->SetBinContent(6,1077.558);
   17->SetBinContent(7,983.8572);
   17->SetBinContent(8,1546.061);
   17->SetBinContent(9,1452.361);
   17->SetBinContent(10,1522.636);
   17->SetBinContent(11,1475.786);
   17->SetBinContent(12,1499.211);
   17->SetBinContent(13,1147.833);
   17->SetBinContent(14,1171.259);
   17->SetBinContent(15,1147.833);
   17->SetBinContent(16,1077.558);
   17->SetBinContent(17,398.2279);
   17->SetBinContent(18,773.0307);
   17->SetBinContent(19,679.33);
   17->SetBinContent(20,679.33);
   17->SetBinContent(21,632.4797);
   17->SetBinContent(22,632.4797);
   17->SetBinContent(23,726.1804);
   17->SetBinContent(24,679.33);
   17->SetBinContent(25,562.2042);
   17->SetBinContent(26,819.881);
   17->SetBinContent(27,585.6293);
   17->SetBinContent(28,702.7552);
   17->SetBinContent(29,538.779);
   17->SetBinContent(30,609.0545);
   17->SetBinContent(31,679.33);
   17->SetBinContent(32,983.8572);
   17->SetBinContent(33,726.1804);
   17->SetBinContent(34,1194.684);
   17->SetBinContent(35,1194.684);
   17->SetBinContent(36,1124.408);
   17->SetBinContent(37,1124.408);
   17->SetBinContent(38,1335.235);
   17->SetBinContent(39,1382.085);
   17->SetBinContent(40,1639.762);
   17->SetBinContent(41,1756.888);
   17->SetBinContent(42,1475.786);
   17->SetBinContent(43,1546.061);
   17->SetBinContent(44,1780.313);
   17->SetBinContent(45,1546.061);
   17->SetBinContent(46,1428.936);
   17->SetBinContent(47,843.3062);
   17->SetBinContent(48,655.9048);
   17->SetBinContent(49,468.5034);
   17->SetBinContent(50,163.9762);
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
