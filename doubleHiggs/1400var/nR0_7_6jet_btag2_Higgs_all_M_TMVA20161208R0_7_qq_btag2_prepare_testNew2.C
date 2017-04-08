{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 00:56:36 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-269.8413,-3.181057,1317.46,5.696647);
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
   
   TH1F *THStack_stack_4 = new TH1F("THStack_stack_4","",50,0,1000);
   THStack_stack_4->SetMinimum(0.02611738);
   THStack_stack_4->SetMaximum(96923.92);
   THStack_stack_4->SetDirectory(0);
   THStack_stack_4->SetStats(0);
   THStack_stack_4->SetLineWidth(2);
   THStack_stack_4->SetMarkerSize(1.2);
   THStack_stack_4->GetXaxis()->SetTitle("M_{visible} / GeV");
   THStack_stack_4->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetXaxis()->SetLabelColor(ci);
   THStack_stack_4->GetXaxis()->SetLabelFont(42);
   THStack_stack_4->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_4->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_4->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_4->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_4->GetXaxis()->SetTitleColor(ci);
   THStack_stack_4->GetXaxis()->SetTitleFont(42);
   THStack_stack_4->GetYaxis()->SetTitle("Number of events");
   THStack_stack_4->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetYaxis()->SetLabelColor(ci);
   THStack_stack_4->GetYaxis()->SetLabelFont(42);
   THStack_stack_4->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_4->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_4->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_4->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_4->GetYaxis()->SetTitleColor(ci);
   THStack_stack_4->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetZaxis()->SetLabelColor(ci);
   THStack_stack_4->GetZaxis()->SetLabelFont(42);
   THStack_stack_4->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_4->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_4->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_4->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_4->GetZaxis()->SetTitleColor(ci);
   THStack_stack_4->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_4);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1000);
   0->SetBinContent(8,0.011292);
   0->SetBinContent(9,0.05646002);
   0->SetBinContent(10,0.1148021);
   0->SetBinContent(11,0.1994922);
   0->SetBinContent(12,0.3858092);
   0->SetBinContent(13,0.6248236);
   0->SetBinContent(14,0.7716209);
   0->SetBinContent(15,0.8619577);
   0->SetBinContent(16,0.9278283);
   0->SetBinContent(17,0.9579405);
   0->SetBinContent(18,0.9748787);
   0->SetBinContent(19,0.9861708);
   0->SetBinContent(20,0.90148);
   0->SetBinContent(21,0.8224353);
   0->SetBinContent(22,0.7960871);
   0->SetBinContent(23,0.6436437);
   0->SetBinContent(24,0.67752);
   0->SetBinContent(25,0.6285876);
   0->SetBinContent(26,0.5457789);
   0->SetBinContent(27,0.4949645);
   0->SetBinContent(28,0.417803);
   0->SetBinContent(29,0.3142937);
   0->SetBinContent(30,0.3274677);
   0->SetBinContent(31,0.3161757);
   0->SetBinContent(32,0.27289);
   0->SetBinContent(33,0.274772);
   0->SetBinContent(34,0.2013742);
   0->SetBinContent(35,0.1712621);
   0->SetBinContent(36,0.1637341);
   0->SetBinContent(37,0.1712621);
   0->SetBinContent(38,0.1298581);
   0->SetBinContent(39,0.09786406);
   0->SetBinContent(40,0.08657205);
   0->SetBinContent(41,0.1053921);
   0->SetBinContent(42,0.1091561);
   0->SetBinContent(43,0.07904404);
   0->SetBinContent(44,0.09598206);
   0->SetBinContent(45,0.06587003);
   0->SetBinContent(46,0.07339804);
   0->SetBinContent(47,0.05646002);
   0->SetBinContent(48,0.05834202);
   0->SetBinContent(49,0.07151604);
   0->SetBinContent(50,0.05646002);
   0->SetBinContent(51,0.5796552);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,1000);
   1->SetBinContent(8,0.04234502);
   1->SetBinContent(9,0.1270351);
   1->SetBinContent(10,0.1834947);
   1->SetBinContent(11,0.2757125);
   1->SetBinContent(12,0.3811054);
   1->SetBinContent(13,0.4902624);
   1->SetBinContent(14,0.5853015);
   1->SetBinContent(15,0.6370553);
   1->SetBinContent(16,0.6662257);
   1->SetBinContent(17,0.6332914);
   1->SetBinContent(18,0.562718);
   1->SetBinContent(19,0.5664819);
   1->SetBinContent(20,0.5429575);
   1->SetBinContent(21,0.4959084);
   1->SetBinContent(22,0.4610911);
   1->SetBinContent(23,0.4159227);
   1->SetBinContent(24,0.3594622);
   1->SetBinContent(25,0.3189988);
   1->SetBinContent(26,0.2653614);
   1->SetBinContent(27,0.2625383);
   1->SetBinContent(28,0.2493642);
   1->SetBinContent(29,0.1957276);
   1->SetBinContent(30,0.2154885);
   1->SetBinContent(31,0.1524419);
   1->SetBinContent(32,0.143973);
   1->SetBinContent(33,0.133622);
   1->SetBinContent(34,0.1176251);
   1->SetBinContent(35,0.08469006);
   1->SetBinContent(36,0.09127707);
   1->SetBinContent(37,0.08280806);
   1->SetBinContent(38,0.06963405);
   1->SetBinContent(39,0.06022404);
   1->SetBinContent(40,0.05175503);
   1->SetBinContent(41,0.04987303);
   1->SetBinContent(42,0.04140402);
   1->SetBinContent(43,0.02823001);
   1->SetBinContent(44,0.03952202);
   1->SetBinContent(45,0.02258401);
   1->SetBinContent(46,0.03575802);
   1->SetBinContent(47,0.02352501);
   1->SetBinContent(48,0.01882);
   1->SetBinContent(49,0.02917101);
   1->SetBinContent(50,0.015997);
   1->SetBinContent(51,0.1806717);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,1000);
   2->SetBinContent(8,0.1618518);
   2->SetBinContent(9,0.3764004);
   2->SetBinContent(10,0.5683639);
   2->SetBinContent(11,0.6869272);
   2->SetBinContent(12,0.9099391);
   2->SetBinContent(13,1.262823);
   2->SetBinContent(14,1.353162);
   2->SetBinContent(15,1.464205);
   2->SetBinContent(16,1.474556);
   2->SetBinContent(17,1.472674);
   2->SetBinContent(18,1.383276);
   2->SetBinContent(19,1.379511);
   2->SetBinContent(20,1.326813);
   2->SetBinContent(21,1.273174);
   2->SetBinContent(22,1.104728);
   2->SetBinContent(23,1.019094);
   2->SetBinContent(24,0.956988);
   2->SetBinContent(25,0.8412477);
   2->SetBinContent(26,0.7273893);
   2->SetBinContent(27,0.6728125);
   2->SetBinContent(28,0.5683639);
   2->SetBinContent(29,0.5504853);
   2->SetBinContent(30,0.4657961);
   2->SetBinContent(31,0.4149817);
   2->SetBinContent(32,0.3914565);
   2->SetBinContent(33,0.3105298);
   2->SetBinContent(34,0.2691254);
   2->SetBinContent(35,0.2437183);
   2->SetBinContent(36,0.2380723);
   2->SetBinContent(37,0.2286624);
   2->SetBinContent(38,0.1863177);
   2->SetBinContent(39,0.1731438);
   2->SetBinContent(40,0.1665568);
   2->SetBinContent(41,0.1185661);
   2->SetBinContent(42,0.1213891);
   2->SetBinContent(43,0.1129201);
   2->SetBinContent(44,0.09410007);
   2->SetBinContent(45,0.08939507);
   2->SetBinContent(46,0.08563107);
   2->SetBinContent(47,0.06022404);
   2->SetBinContent(48,0.09410007);
   2->SetBinContent(49,0.07998506);
   2->SetBinContent(50,0.07716206);
   2->SetBinContent(51,0.6379963);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,1000);
   3->SetBinContent(8,0.9970354);
   3->SetBinContent(9,2.963794);
   3->SetBinContent(10,4.295443);
   3->SetBinContent(11,6.610401);
   3->SetBinContent(12,7.982987);
   3->SetBinContent(13,8.372253);
   3->SetBinContent(14,7.989816);
   3->SetBinContent(15,8.256156);
   3->SetBinContent(16,6.95184);
   3->SetBinContent(17,6.719662);
   3->SetBinContent(18,5.784118);
   3->SetBinContent(19,5.224158);
   3->SetBinContent(20,5.005637);
   3->SetBinContent(21,4.138381);
   3->SetBinContent(22,3.783277);
   3->SetBinContent(23,3.639867);
   3->SetBinContent(24,3.182323);
   3->SetBinContent(25,2.786239);
   3->SetBinContent(26,2.205772);
   3->SetBinContent(27,2.205772);
   3->SetBinContent(28,2.096508);
   3->SetBinContent(29,1.577502);
   3->SetBinContent(30,1.59116);
   3->SetBinContent(31,1.201906);
   3->SetBinContent(32,1.078984);
   3->SetBinContent(33,1.072155);
   3->SetBinContent(34,0.8672839);
   3->SetBinContent(35,0.8263098);
   3->SetBinContent(36,0.6350971);
   3->SetBinContent(37,0.6146101);
   3->SetBinContent(38,0.4848587);
   3->SetBinContent(39,0.3892528);
   3->SetBinContent(40,0.3277918);
   3->SetBinContent(41,0.4643717);
   3->SetBinContent(42,0.3414498);
   3->SetBinContent(43,0.184383);
   3->SetBinContent(44,0.3073049);
   3->SetBinContent(45,0.2253569);
   3->SetBinContent(46,0.177554);
   3->SetBinContent(47,0.170725);
   3->SetBinContent(48,0.13658);
   3->SetBinContent(49,0.081948);
   3->SetBinContent(50,0.109264);
   3->SetBinContent(51,0.4780297);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,1000);
   4->SetBinContent(8,6.22897);
   4->SetBinContent(9,10.51161);
   4->SetBinContent(10,8.985794);
   4->SetBinContent(11,10.08543);
   4->SetBinContent(12,12.14265);
   4->SetBinContent(13,12.75297);
   4->SetBinContent(14,11.50601);
   4->SetBinContent(15,11.05879);
   4->SetBinContent(16,9.953896);
   4->SetBinContent(17,8.7122);
   4->SetBinContent(18,8.60171);
   4->SetBinContent(19,7.586293);
   4->SetBinContent(20,6.655106);
   4->SetBinContent(21,6.213187);
   4->SetBinContent(22,5.17152);
   4->SetBinContent(23,4.676991);
   4->SetBinContent(24,4.077243);
   4->SetBinContent(25,3.230231);
   4->SetBinContent(26,3.140795);
   4->SetBinContent(27,2.783051);
   4->SetBinContent(28,2.325349);
   4->SetBinContent(29,2.05178);
   4->SetBinContent(30,1.751906);
   4->SetBinContent(31,1.77821);
   4->SetBinContent(32,1.357335);
   4->SetBinContent(33,1.225811);
   4->SetBinContent(34,1.004852);
   4->SetBinContent(35,1.010113);
   4->SetBinContent(36,0.7838894);
   4->SetBinContent(37,0.6576253);
   4->SetBinContent(38,0.6155373);
   4->SetBinContent(39,0.4997952);
   4->SetBinContent(40,0.5839713);
   4->SetBinContent(41,0.4050972);
   4->SetBinContent(42,0.3945751);
   4->SetBinContent(43,0.2893551);
   4->SetBinContent(44,0.242006);
   4->SetBinContent(45,0.2683111);
   4->SetBinContent(46,0.26305);
   4->SetBinContent(47,0.152569);
   4->SetBinContent(48,0.15783);
   4->SetBinContent(49,0.136786);
   4->SetBinContent(50,0.147308);
   4->SetBinContent(51,0.5681883);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,1000);
   5->SetBinContent(8,2.108169);
   5->SetBinContent(9,5.555676);
   5->SetBinContent(10,9.90839);
   5->SetBinContent(11,20.04001);
   5->SetBinContent(12,31.92073);
   5->SetBinContent(13,35.82722);
   5->SetBinContent(14,39.22526);
   5->SetBinContent(15,37.04258);
   5->SetBinContent(16,34.36384);
   5->SetBinContent(17,31.87112);
   5->SetBinContent(18,28.00183);
   5->SetBinContent(19,25.12466);
   5->SetBinContent(20,24.31856);
   5->SetBinContent(21,21.42899);
   5->SetBinContent(22,18.78745);
   5->SetBinContent(23,16.66678);
   5->SetBinContent(24,14.79424);
   5->SetBinContent(25,13.82699);
   5->SetBinContent(26,13.23176);
   5->SetBinContent(27,11.11125);
   5->SetBinContent(28,9.809185);
   5->SetBinContent(29,8.507119);
   5->SetBinContent(30,7.453044);
   5->SetBinContent(31,6.510561);
   5->SetBinContent(32,5.952511);
   5->SetBinContent(33,5.059631);
   5->SetBinContent(34,4.451977);
   5->SetBinContent(35,4.079944);
   5->SetBinContent(36,3.69551);
   5->SetBinContent(37,2.988647);
   5->SetBinContent(38,2.505004);
   5->SetBinContent(39,2.529806);
   5->SetBinContent(40,2.170174);
   5->SetBinContent(41,1.946955);
   5->SetBinContent(42,1.525321);
   5->SetBinContent(43,1.537722);
   5->SetBinContent(44,1.326906);
   5->SetBinContent(45,1.153292);
   5->SetBinContent(46,0.9176732);
   5->SetBinContent(47,0.8680692);
   5->SetBinContent(48,0.8060643);
   5->SetBinContent(49,0.7068564);
   5->SetBinContent(50,0.4836387);
   5->SetBinContent(51,3.311076);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,1000);
   6->SetBinContent(8,82.28147);
   6->SetBinContent(9,206.3179);
   6->SetBinContent(10,342.9428);
   6->SetBinContent(11,524.1903);
   6->SetBinContent(12,692.3702);
   6->SetBinContent(13,788.5707);
   6->SetBinContent(14,828.205);
   6->SetBinContent(15,846.1239);
   6->SetBinContent(16,816.588);
   6->SetBinContent(17,789.254);
   6->SetBinContent(18,717.7301);
   6->SetBinContent(19,676.6532);
   6->SetBinContent(20,615.3795);
   6->SetBinContent(21,542.8685);
   6->SetBinContent(22,498.3803);
   6->SetBinContent(23,444.9487);
   6->SetBinContent(24,395.0842);
   6->SetBinContent(25,351.3674);
   6->SetBinContent(26,314.3296);
   6->SetBinContent(27,275.9256);
   6->SetBinContent(28,234.1777);
   6->SetBinContent(29,211.7076);
   6->SetBinContent(30,185.5178);
   6->SetBinContent(31,165.1733);
   6->SetBinContent(32,136.782);
   6->SetBinContent(33,124.3328);
   6->SetBinContent(34,106.8746);
   6->SetBinContent(35,93.36358);
   6->SetBinContent(36,79.32118);
   6->SetBinContent(37,65.05107);
   6->SetBinContent(38,54.50029);
   6->SetBinContent(39,44.17723);
   6->SetBinContent(40,41.82418);
   6->SetBinContent(41,37.11808);
   6->SetBinContent(42,28.46484);
   6->SetBinContent(43,26.64308);
   6->SetBinContent(44,21.78505);
   6->SetBinContent(45,17.00292);
   6->SetBinContent(46,14.57393);
   6->SetBinContent(47,13.28353);
   6->SetBinContent(48,9.564143);
   6->SetBinContent(49,8.501462);
   6->SetBinContent(50,7.059251);
   6->SetBinContent(51,28.08531);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,1000);
   7->SetBinContent(8,47.35706);
   7->SetBinContent(9,187.5788);
   7->SetBinContent(10,313.5554);
   7->SetBinContent(11,381.4753);
   7->SetBinContent(12,403.155);
   7->SetBinContent(13,382.7937);
   7->SetBinContent(14,366.3386);
   7->SetBinContent(15,333.1355);
   7->SetBinContent(16,307.989);
   7->SetBinContent(17,280.0105);
   7->SetBinContent(18,251.2507);
   7->SetBinContent(19,232.4519);
   7->SetBinContent(20,202.9109);
   7->SetBinContent(21,185.8698);
   7->SetBinContent(22,171.0749);
   7->SetBinContent(23,151.0554);
   7->SetBinContent(24,136.5046);
   7->SetBinContent(25,122.2965);
   7->SetBinContent(26,109.2126);
   7->SetBinContent(27,97.15396);
   7->SetBinContent(28,90.36791);
   7->SetBinContent(29,84.11889);
   7->SetBinContent(30,78.8951);
   7->SetBinContent(31,67.42228);
   7->SetBinContent(32,63.1749);
   7->SetBinContent(33,56.53531);
   7->SetBinContent(34,53.75254);
   7->SetBinContent(35,49.11459);
   7->SetBinContent(36,44.72075);
   7->SetBinContent(37,42.18208);
   7->SetBinContent(38,38.52055);
   7->SetBinContent(39,35.10311);
   7->SetBinContent(40,33.54086);
   7->SetBinContent(41,30.41628);
   7->SetBinContent(42,28.12163);
   7->SetBinContent(43,26.70578);
   7->SetBinContent(44,22.70234);
   7->SetBinContent(45,23.58115);
   7->SetBinContent(46,20.84709);
   7->SetBinContent(47,18.69891);
   7->SetBinContent(48,18.50362);
   7->SetBinContent(49,15.91603);
   7->SetBinContent(50,14.45136);
   7->SetBinContent(51,123.4682);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,1000);
   8->SetBinContent(8,3.375319);
   8->SetBinContent(9,8.071411);
   8->SetBinContent(10,7.190894);
   8->SetBinContent(11,8.951931);
   8->SetBinContent(12,7.777905);
   8->SetBinContent(13,9.245438);
   8->SetBinContent(14,11.44674);
   8->SetBinContent(15,6.016871);
   8->SetBinContent(16,10.12596);
   8->SetBinContent(17,8.218164);
   8->SetBinContent(18,7.337647);
   8->SetBinContent(19,8.805178);
   8->SetBinContent(20,7.924658);
   8->SetBinContent(21,6.310377);
   8->SetBinContent(22,7.924658);
   8->SetBinContent(23,7.4844);
   8->SetBinContent(24,6.897388);
   8->SetBinContent(25,5.723366);
   8->SetBinContent(26,8.951931);
   8->SetBinContent(27,7.777905);
   8->SetBinContent(28,7.631153);
   8->SetBinContent(29,5.283107);
   8->SetBinContent(30,5.723366);
   8->SetBinContent(31,3.081813);
   8->SetBinContent(32,5.136354);
   8->SetBinContent(33,5.136354);
   8->SetBinContent(34,3.668826);
   8->SetBinContent(35,3.962332);
   8->SetBinContent(36,3.375319);
   8->SetBinContent(37,4.255837);
   8->SetBinContent(38,5.723366);
   8->SetBinContent(39,3.815579);
   8->SetBinContent(40,4.989602);
   8->SetBinContent(41,4.549343);
   8->SetBinContent(42,4.989602);
   8->SetBinContent(43,3.522073);
   8->SetBinContent(44,2.494801);
   8->SetBinContent(45,3.081813);
   8->SetBinContent(46,1.907789);
   8->SetBinContent(47,2.348048);
   8->SetBinContent(48,3.228566);
   8->SetBinContent(49,3.228566);
   8->SetBinContent(50,2.788307);
   8->SetBinContent(51,40.21028);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,1000);
   9->SetBinContent(8,16.97247);
   9->SetBinContent(9,60.17521);
   9->SetBinContent(10,106.2926);
   9->SetBinContent(11,145.3802);
   9->SetBinContent(12,187.2097);
   9->SetBinContent(13,236.2394);
   9->SetBinContent(14,269.8414);
   9->SetBinContent(15,286.9862);
   9->SetBinContent(16,304.4738);
   9->SetBinContent(17,315.2751);
   9->SetBinContent(18,343.5639);
   9->SetBinContent(19,345.9642);
   9->SetBinContent(20,329.8481);
   9->SetBinContent(21,330.5339);
   9->SetBinContent(22,335.3344);
   9->SetBinContent(23,339.2777);
   9->SetBinContent(24,321.6186);
   9->SetBinContent(25,340.9922);
   9->SetBinContent(26,356.2511);
   9->SetBinContent(27,336.1917);
   9->SetBinContent(28,327.9622);
   9->SetBinContent(29,334.1343);
   9->SetBinContent(30,338.4205);
   9->SetBinContent(31,342.3638);
   9->SetBinContent(32,351.7934);
   9->SetBinContent(33,345.9642);
   9->SetBinContent(34,339.4492);
   9->SetBinContent(35,330.0196);
   9->SetBinContent(36,340.135);
   9->SetBinContent(37,334.9915);
   9->SetBinContent(38,348.7074);
   9->SetBinContent(39,331.5626);
   9->SetBinContent(40,347.1643);
   9->SetBinContent(41,344.0783);
   9->SetBinContent(42,345.4499);
   9->SetBinContent(43,334.3058);
   9->SetBinContent(44,329.5052);
   9->SetBinContent(45,342.8781);
   9->SetBinContent(46,340.8208);
   9->SetBinContent(47,336.1917);
   9->SetBinContent(48,322.8188);
   9->SetBinContent(49,325.7334);
   9->SetBinContent(50,320.247);
   9->SetBinContent(51,3138.609);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,1000);
   10->SetBinContent(8,679.9392);
   10->SetBinContent(9,2810.204);
   10->SetBinContent(10,4310.27);
   10->SetBinContent(11,4334.142);
   10->SetBinContent(12,4056.742);
   10->SetBinContent(13,3730.21);
   10->SetBinContent(14,3415.521);
   10->SetBinContent(15,3109.335);
   10->SetBinContent(16,2811.652);
   10->SetBinContent(17,2513.403);
   10->SetBinContent(18,2256.915);
   10->SetBinContent(19,2057.935);
   10->SetBinContent(20,1809.551);
   10->SetBinContent(21,1623.565);
   10->SetBinContent(22,1467.367);
   10->SetBinContent(23,1284.158);
   10->SetBinContent(24,1140.771);
   10->SetBinContent(25,1004.831);
   10->SetBinContent(26,902.6556);
   10->SetBinContent(27,788.2997);
   10->SetBinContent(28,702.0278);
   10->SetBinContent(29,623.5186);
   10->SetBinContent(30,539.8973);
   10->SetBinContent(31,482.8597);
   10->SetBinContent(32,421.6092);
   10->SetBinContent(33,371.6499);
   10->SetBinContent(34,325.6647);
   10->SetBinContent(35,286.366);
   10->SetBinContent(36,250.4091);
   10->SetBinContent(37,212.1735);
   10->SetBinContent(38,180.3105);
   10->SetBinContent(39,151.4129);
   10->SetBinContent(40,141.8225);
   10->SetBinContent(41,119.8664);
   10->SetBinContent(42,103.4005);
   10->SetBinContent(43,86.11457);
   10->SetBinContent(44,71.98298);
   10->SetBinContent(45,64.98027);
   10->SetBinContent(46,49.90237);
   10->SetBinContent(47,42.83657);
   10->SetBinContent(48,35.39225);
   10->SetBinContent(49,29.52512);
   10->SetBinContent(50,22.77476);
   10->SetBinContent(51,101.0663);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,1000);
   11->SetBinContent(8,468.2834);
   11->SetBinContent(9,1024.37);
   11->SetBinContent(10,980.4682);
   11->SetBinContent(11,556.0865);
   11->SetBinContent(12,687.7912);
   11->SetBinContent(13,687.7912);
   11->SetBinContent(14,497.5511);
   11->SetBinContent(15,599.9881);
   11->SetBinContent(16,599.9881);
   11->SetBinContent(17,453.6496);
   11->SetBinContent(18,365.8465);
   11->SetBinContent(19,468.2834);
   11->SetBinContent(20,351.2126);
   11->SetBinContent(21,321.9449);
   11->SetBinContent(22,248.7757);
   11->SetBinContent(23,365.8465);
   11->SetBinContent(24,292.6772);
   11->SetBinContent(25,175.6063);
   11->SetBinContent(26,175.6063);
   11->SetBinContent(27,219.5079);
   11->SetBinContent(28,175.6063);
   11->SetBinContent(29,131.7047);
   11->SetBinContent(30,73.1693);
   11->SetBinContent(31,190.2402);
   11->SetBinContent(32,102.437);
   11->SetBinContent(33,102.437);
   11->SetBinContent(34,58.53543);
   11->SetBinContent(35,14.63386);
   11->SetBinContent(36,87.80315);
   11->SetBinContent(37,73.1693);
   11->SetBinContent(38,58.53543);
   11->SetBinContent(39,87.80315);
   11->SetBinContent(40,29.26772);
   11->SetBinContent(41,58.53543);
   11->SetBinContent(42,29.26772);
   11->SetBinContent(43,29.26772);
   11->SetBinContent(44,43.90158);
   11->SetBinContent(45,14.63386);
   11->SetBinContent(46,14.63386);
   11->SetBinContent(48,29.26772);
   11->SetBinContent(49,14.63386);
   11->SetBinContent(50,43.90158);
   11->SetBinContent(51,204.8741);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,1000);
   12->SetBinContent(8,1262.355);
   12->SetBinContent(9,2645.24);
   12->SetBinContent(10,2892.636);
   12->SetBinContent(11,2708.675);
   12->SetBinContent(12,2784.797);
   12->SetBinContent(13,2753.079);
   12->SetBinContent(14,2715.018);
   12->SetBinContent(15,2454.934);
   12->SetBinContent(16,2378.812);
   12->SetBinContent(17,2220.225);
   12->SetBinContent(18,2188.507);
   12->SetBinContent(19,1941.11);
   12->SetBinContent(20,1687.37);
   12->SetBinContent(21,1630.279);
   12->SetBinContent(22,1642.966);
   12->SetBinContent(23,1344.821);
   12->SetBinContent(24,1275.042);
   12->SetBinContent(25,1306.76);
   12->SetBinContent(26,1332.134);
   12->SetBinContent(27,1148.172);
   12->SetBinContent(28,900.7755);
   12->SetBinContent(29,881.7449);
   12->SetBinContent(30,881.7449);
   12->SetBinContent(31,964.2105);
   12->SetBinContent(32,704.1268);
   12->SetBinContent(33,786.5923);
   12->SetBinContent(34,735.8443);
   12->SetBinContent(35,564.5696);
   12->SetBinContent(36,666.0657);
   12->SetBinContent(37,608.9742);
   12->SetBinContent(38,608.9742);
   12->SetBinContent(39,456.7303);
   12->SetBinContent(40,482.1042);
   12->SetBinContent(41,393.2955);
   12->SetBinContent(42,539.1956);
   12->SetBinContent(43,418.6694);
   12->SetBinContent(44,323.5173);
   12->SetBinContent(45,336.2043);
   12->SetBinContent(46,380.6086);
   12->SetBinContent(47,323.5173);
   12->SetBinContent(48,323.5173);
   12->SetBinContent(49,444.0433);
   12->SetBinContent(50,342.5477);
   12->SetBinContent(51,9013.993);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,1000);
   13->SetBinContent(8,4160.298);
   13->SetBinContent(9,10441.54);
   13->SetBinContent(10,7504.861);
   13->SetBinContent(11,7504.861);
   13->SetBinContent(12,7178.562);
   13->SetBinContent(13,5628.643);
   13->SetBinContent(14,5710.217);
   13->SetBinContent(15,3834);
   13->SetBinContent(16,2773.532);
   13->SetBinContent(17,2855.106);
   13->SetBinContent(18,2691.958);
   13->SetBinContent(19,2039.362);
   13->SetBinContent(20,2447.234);
   13->SetBinContent(21,2365.66);
   13->SetBinContent(22,1713.064);
   13->SetBinContent(23,2202.511);
   13->SetBinContent(24,1631.49);
   13->SetBinContent(25,1794.638);
   13->SetBinContent(26,1386.766);
   13->SetBinContent(27,978.8938);
   13->SetBinContent(28,489.447);
   13->SetBinContent(29,1305.192);
   13->SetBinContent(30,815.7449);
   13->SetBinContent(31,407.8725);
   13->SetBinContent(32,1060.468);
   13->SetBinContent(33,571.0215);
   13->SetBinContent(34,407.8725);
   13->SetBinContent(35,652.5959);
   13->SetBinContent(36,489.447);
   13->SetBinContent(37,326.298);
   13->SetBinContent(38,489.447);
   13->SetBinContent(39,407.8725);
   13->SetBinContent(41,163.149);
   13->SetBinContent(43,244.7235);
   13->SetBinContent(44,163.149);
   13->SetBinContent(45,244.7235);
   13->SetBinContent(46,163.149);
   13->SetBinContent(47,81.57449);
   13->SetBinContent(50,81.57449);
   13->SetBinContent(51,1060.468);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,1000);
   14->SetBinContent(8,10589.19);
   14->SetBinContent(9,13401.64);
   14->SetBinContent(10,7667.954);
   14->SetBinContent(11,4263.198);
   14->SetBinContent(12,2719.894);
   14->SetBinContent(13,1873.695);
   14->SetBinContent(14,1382.106);
   14->SetBinContent(15,870.3676);
   14->SetBinContent(16,813.9549);
   14->SetBinContent(17,596.363);
   14->SetBinContent(18,443.2428);
   14->SetBinContent(19,342.5058);
   14->SetBinContent(20,245.7983);
   14->SetBinContent(21,286.093);
   14->SetBinContent(22,197.4445);
   14->SetBinContent(23,157.1497);
   14->SetBinContent(24,149.0907);
   14->SetBinContent(25,104.7665);
   14->SetBinContent(26,137.0023);
   14->SetBinContent(27,80.58959);
   14->SetBinContent(28,88.64855);
   14->SetBinContent(29,76.56011);
   14->SetBinContent(30,72.53063);
   14->SetBinContent(31,40.2948);
   14->SetBinContent(32,44.32428);
   14->SetBinContent(33,32.23584);
   14->SetBinContent(34,20.1474);
   14->SetBinContent(35,36.26532);
   14->SetBinContent(36,24.17688);
   14->SetBinContent(37,20.1474);
   14->SetBinContent(38,32.23584);
   14->SetBinContent(39,24.17688);
   14->SetBinContent(40,32.23584);
   14->SetBinContent(41,24.17688);
   14->SetBinContent(42,8.058958);
   14->SetBinContent(43,8.058958);
   14->SetBinContent(44,16.11792);
   14->SetBinContent(45,20.1474);
   14->SetBinContent(46,8.058958);
   14->SetBinContent(47,12.08844);
   14->SetBinContent(49,4.029479);
   14->SetBinContent(50,12.08844);
   14->SetBinContent(51,96.70751);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,1000);
   15->SetBinContent(8,339.9309);
   15->SetBinContent(9,475.1308);
   15->SetBinContent(10,394.0109);
   15->SetBinContent(11,316.7538);
   15->SetBinContent(12,216.3196);
   15->SetBinContent(13,212.4567);
   15->SetBinContent(14,119.7482);
   15->SetBinContent(15,139.0625);
   15->SetBinContent(16,100.434);
   15->SetBinContent(17,96.57117);
   15->SetBinContent(18,57.9427);
   15->SetBinContent(19,65.6684);
   15->SetBinContent(20,61.80555);
   15->SetBinContent(21,65.6684);
   15->SetBinContent(22,30.90277);
   15->SetBinContent(23,61.80555);
   15->SetBinContent(24,61.80555);
   15->SetBinContent(25,57.9427);
   15->SetBinContent(26,54.07985);
   15->SetBinContent(27,34.76562);
   15->SetBinContent(28,11.58854);
   15->SetBinContent(29,19.31424);
   15->SetBinContent(30,38.62847);
   15->SetBinContent(31,19.31424);
   15->SetBinContent(32,15.45139);
   15->SetBinContent(33,38.62847);
   15->SetBinContent(34,7.725694);
   15->SetBinContent(35,7.725694);
   15->SetBinContent(36,11.58854);
   15->SetBinContent(37,3.862847);
   15->SetBinContent(38,27.03993);
   15->SetBinContent(39,7.725694);
   15->SetBinContent(40,11.58854);
   15->SetBinContent(41,7.725694);
   15->SetBinContent(42,3.862847);
   15->SetBinContent(43,3.862847);
   15->SetBinContent(44,27.03993);
   15->SetBinContent(45,11.58854);
   15->SetBinContent(46,7.725694);
   15->SetBinContent(47,3.862847);
   15->SetBinContent(48,19.31424);
   15->SetBinContent(49,7.725694);
   15->SetBinContent(50,19.31424);
   15->SetBinContent(51,81.11978);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,1000);
   16->SetBinContent(8,6546.274);
   16->SetBinContent(9,9529.681);
   16->SetBinContent(10,6829.821);
   16->SetBinContent(11,5208.673);
   16->SetBinContent(12,4080.649);
   16->SetBinContent(13,3347.126);
   16->SetBinContent(14,2687.571);
   16->SetBinContent(15,2200.61);
   16->SetBinContent(16,1744.464);
   16->SetBinContent(17,1676.658);
   16->SetBinContent(18,1374.613);
   16->SetBinContent(19,1300.642);
   16->SetBinContent(20,1072.568);
   16->SetBinContent(21,875.3136);
   16->SetBinContent(22,869.1494);
   16->SetBinContent(23,906.1345);
   16->SetBinContent(24,628.7462);
   16->SetBinContent(25,647.2388);
   16->SetBinContent(26,567.1044);
   16->SetBinContent(27,462.3132);
   16->SetBinContent(28,468.4774);
   16->SetBinContent(29,425.3281);
   16->SetBinContent(30,363.6863);
   16->SetBinContent(31,345.1937);
   16->SetBinContent(32,339.0295);
   16->SetBinContent(33,332.8654);
   16->SetBinContent(34,215.7459);
   16->SetBinContent(35,240.4026);
   16->SetBinContent(36,258.8951);
   16->SetBinContent(37,197.2534);
   16->SetBinContent(38,172.5968);
   16->SetBinContent(39,203.4176);
   16->SetBinContent(40,197.2534);
   16->SetBinContent(41,184.9251);
   16->SetBinContent(42,147.9401);
   16->SetBinContent(43,154.1042);
   16->SetBinContent(44,123.2834);
   16->SetBinContent(45,86.29838);
   16->SetBinContent(46,86.29838);
   16->SetBinContent(47,86.29838);
   16->SetBinContent(48,73.97004);
   16->SetBinContent(49,154.1042);
   16->SetBinContent(50,73.97004);
   16->SetBinContent(51,943.1196);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,1000);
   17->SetBinContent(8,3654.335);
   17->SetBinContent(9,4661.623);
   17->SetBinContent(10,2693.898);
   17->SetBinContent(11,2248.818);
   17->SetBinContent(12,1264.959);
   17->SetBinContent(13,1147.833);
   17->SetBinContent(14,843.3062);
   17->SetBinContent(15,773.0307);
   17->SetBinContent(16,468.5034);
   17->SetBinContent(17,538.779);
   17->SetBinContent(18,374.8028);
   17->SetBinContent(19,562.2042);
   17->SetBinContent(20,468.5034);
   17->SetBinContent(21,421.6531);
   17->SetBinContent(22,421.6531);
   17->SetBinContent(23,327.9524);
   17->SetBinContent(24,491.9286);
   17->SetBinContent(25,398.2279);
   17->SetBinContent(26,609.0545);
   17->SetBinContent(27,421.6531);
   17->SetBinContent(28,609.0545);
   17->SetBinContent(29,421.6531);
   17->SetBinContent(30,515.3538);
   17->SetBinContent(31,398.2279);
   17->SetBinContent(32,538.779);
   17->SetBinContent(33,210.8266);
   17->SetBinContent(34,257.6769);
   17->SetBinContent(35,398.2279);
   17->SetBinContent(36,538.779);
   17->SetBinContent(37,655.9048);
   17->SetBinContent(38,374.8028);
   17->SetBinContent(39,609.0545);
   17->SetBinContent(40,445.0783);
   17->SetBinContent(41,538.779);
   17->SetBinContent(42,538.779);
   17->SetBinContent(43,585.6293);
   17->SetBinContent(44,632.4797);
   17->SetBinContent(45,491.9286);
   17->SetBinContent(46,655.9048);
   17->SetBinContent(47,351.3776);
   17->SetBinContent(48,374.8028);
   17->SetBinContent(49,491.9286);
   17->SetBinContent(50,609.0545);
   17->SetBinContent(51,15015.46);
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
