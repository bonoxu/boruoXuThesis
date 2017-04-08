{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:02:04 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.174687,1.31746,5.673835);
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
   
   TH1F *THStack_stack_19 = new TH1F("THStack_stack_19","",50,0,1);
   THStack_stack_19->SetMinimum(0.02618466);
   THStack_stack_19->SetMaximum(92459.87);
   THStack_stack_19->SetDirectory(0);
   THStack_stack_19->SetStats(0);
   THStack_stack_19->SetLineWidth(2);
   THStack_stack_19->SetMarkerSize(1.2);
   THStack_stack_19->GetXaxis()->SetTitle("Highest C tag of H#rightarrowbb jets");
   THStack_stack_19->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_19->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_19->GetXaxis()->SetLabelColor(ci);
   THStack_stack_19->GetXaxis()->SetLabelFont(42);
   THStack_stack_19->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_19->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_19->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_19->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_19->GetXaxis()->SetTitleColor(ci);
   THStack_stack_19->GetXaxis()->SetTitleFont(42);
   THStack_stack_19->GetYaxis()->SetTitle("Number of events");
   THStack_stack_19->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_19->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_19->GetYaxis()->SetLabelColor(ci);
   THStack_stack_19->GetYaxis()->SetLabelFont(42);
   THStack_stack_19->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_19->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_19->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_19->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_19->GetYaxis()->SetTitleColor(ci);
   THStack_stack_19->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_19->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_19->GetZaxis()->SetLabelColor(ci);
   THStack_stack_19->GetZaxis()->SetLabelFont(42);
   THStack_stack_19->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_19->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_19->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_19->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_19->GetZaxis()->SetTitleColor(ci);
   THStack_stack_19->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_19);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,2.563287);
   0->SetBinContent(2,0.8544296);
   0->SetBinContent(3,0.5363688);
   0->SetBinContent(4,0.4497968);
   0->SetBinContent(5,0.3481695);
   0->SetBinContent(6,0.2898279);
   0->SetBinContent(7,0.3218217);
   0->SetBinContent(8,0.3745173);
   0->SetBinContent(9,0.3989832);
   0->SetBinContent(10,0.5062565);
   0->SetBinContent(11,0.423449);
   0->SetBinContent(12,0.3782813);
   0->SetBinContent(13,0.4102751);
   0->SetBinContent(14,0.4610887);
   0->SetBinContent(15,0.4573247);
   0->SetBinContent(16,0.4535608);
   0->SetBinContent(17,0.3914552);
   0->SetBinContent(18,0.4121571);
   0->SetBinContent(19,0.4366229);
   0->SetBinContent(20,0.415921);
   0->SetBinContent(21,0.3519335);
   0->SetBinContent(22,0.3406416);
   0->SetBinContent(23,0.3105298);
   0->SetBinContent(24,0.3519335);
   0->SetBinContent(25,0.2935919);
   0->SetBinContent(26,0.3312316);
   0->SetBinContent(27,0.3180577);
   0->SetBinContent(28,0.3161757);
   0->SetBinContent(29,0.278536);
   0->SetBinContent(30,0.284182);
   0->SetBinContent(31,0.2672441);
   0->SetBinContent(32,0.2879459);
   0->SetBinContent(33,0.2465422);
   0->SetBinContent(34,0.2089022);
   0->SetBinContent(35,0.2258402);
   0->SetBinContent(36,0.2201942);
   0->SetBinContent(37,0.1693801);
   0->SetBinContent(38,0.1712621);
   0->SetBinContent(39,0.1486781);
   0->SetBinContent(40,0.1260941);
   0->SetBinContent(41,0.08280805);
   0->SetBinContent(42,0.04705001);
   0->SetBinContent(43,0.06775203);
   0->SetBinContent(44,0.05646002);
   0->SetBinContent(45,0.07151604);
   0->SetBinContent(46,0.06963404);
   0->SetBinContent(47,0.06775203);
   0->SetBinContent(48,0.04328601);
   0->SetBinContent(49,0.03952201);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,1);
   1->SetBinContent(1,0.7029238);
   1->SetBinContent(2,0.2456003);
   1->SetBinContent(3,0.1722028);
   1->SetBinContent(4,0.1082151);
   1->SetBinContent(5,0.1119791);
   1->SetBinContent(6,0.09692308);
   1->SetBinContent(7,0.138327);
   1->SetBinContent(8,0.1825537);
   1->SetBinContent(9,0.2427773);
   1->SetBinContent(10,0.2474822);
   1->SetBinContent(11,0.2456003);
   1->SetBinContent(12,0.2390133);
   1->SetBinContent(13,0.2390133);
   1->SetBinContent(14,0.3067657);
   1->SetBinContent(15,0.3302909);
   1->SetBinContent(16,0.3237039);
   1->SetBinContent(17,0.3227629);
   1->SetBinContent(18,0.3039427);
   1->SetBinContent(19,0.3302909);
   1->SetBinContent(20,0.2766535);
   1->SetBinContent(21,0.2757125);
   1->SetBinContent(22,0.2804175);
   1->SetBinContent(23,0.2258394);
   1->SetBinContent(24,0.2474822);
   1->SetBinContent(25,0.2578333);
   1->SetBinContent(26,0.2427773);
   1->SetBinContent(27,0.2484232);
   1->SetBinContent(28,0.2399543);
   1->SetBinContent(29,0.2032555);
   1->SetBinContent(30,0.2361903);
   1->SetBinContent(31,0.2041965);
   1->SetBinContent(32,0.2201934);
   1->SetBinContent(33,0.2277214);
   1->SetBinContent(34,0.1929046);
   1->SetBinContent(35,0.1825537);
   1->SetBinContent(36,0.1618518);
   1->SetBinContent(37,0.1684388);
   1->SetBinContent(38,0.1731438);
   1->SetBinContent(39,0.1533829);
   1->SetBinContent(40,0.1524419);
   1->SetBinContent(41,0.132681);
   1->SetBinContent(42,0.1279761);
   1->SetBinContent(43,0.135504);
   1->SetBinContent(44,0.1242121);
   1->SetBinContent(45,0.1307991);
   1->SetBinContent(46,0.1110381);
   1->SetBinContent(47,0.08939507);
   1->SetBinContent(48,0.05457804);
   1->SetBinContent(49,0.03293502);
   1->SetBinContent(50,0.006587);
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
   2->SetBinContent(1,3.220182);
   2->SetBinContent(2,1.057676);
   2->SetBinContent(3,0.6615208);
   2->SetBinContent(4,0.4601501);
   2->SetBinContent(5,0.3764004);
   2->SetBinContent(6,0.3716953);
   2->SetBinContent(7,0.45074);
   2->SetBinContent(8,0.5175511);
   2->SetBinContent(9,0.6455241);
   2->SetBinContent(10,0.6483471);
   2->SetBinContent(11,0.6398783);
   2->SetBinContent(12,0.6201177);
   2->SetBinContent(13,0.650229);
   2->SetBinContent(14,0.6690486);
   2->SetBinContent(15,0.7048058);
   2->SetBinContent(16,0.7170385);
   2->SetBinContent(17,0.7085697);
   2->SetBinContent(18,0.6474061);
   2->SetBinContent(19,0.7876119);
   2->SetBinContent(20,0.6370553);
   2->SetBinContent(21,0.5740098);
   2->SetBinContent(22,0.5965933);
   2->SetBinContent(23,0.5646);
   2->SetBinContent(24,0.5711868);
   2->SetBinContent(25,0.5598951);
   2->SetBinContent(26,0.5231969);
   2->SetBinContent(27,0.5674229);
   2->SetBinContent(28,0.5937703);
   2->SetBinContent(29,0.5391936);
   2->SetBinContent(30,0.5024954);
   2->SetBinContent(31,0.5391936);
   2->SetBinContent(32,0.4752062);
   2->SetBinContent(33,0.4723832);
   2->SetBinContent(34,0.4394479);
   2->SetBinContent(35,0.3716953);
   2->SetBinContent(36,0.3735773);
   2->SetBinContent(37,0.3491111);
   2->SetBinContent(38,0.3528751);
   2->SetBinContent(39,0.3152348);
   2->SetBinContent(40,0.2851225);
   2->SetBinContent(41,0.1562059);
   2->SetBinContent(42,0.134563);
   2->SetBinContent(43,0.1496189);
   2->SetBinContent(44,0.1674978);
   2->SetBinContent(45,0.1627928);
   2->SetBinContent(46,0.1759667);
   2->SetBinContent(47,0.1562059);
   2->SetBinContent(48,0.1684388);
   2->SetBinContent(49,0.14115);
   2->SetBinContent(50,0.02446601);
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
   3->SetBinContent(1,10.50981);
   3->SetBinContent(2,3.236955);
   3->SetBinContent(3,2.048705);
   3->SetBinContent(4,1.611647);
   3->SetBinContent(5,1.270196);
   3->SetBinContent(6,1.659451);
   3->SetBinContent(7,1.925783);
   3->SetBinContent(8,2.745265);
   3->SetBinContent(9,3.127691);
   3->SetBinContent(10,3.434997);
   3->SetBinContent(11,2.997939);
   3->SetBinContent(12,3.373535);
   3->SetBinContent(13,3.496458);
   3->SetBinContent(14,3.394022);
   3->SetBinContent(15,3.694499);
   3->SetBinContent(16,3.455484);
   3->SetBinContent(17,3.523774);
   3->SetBinContent(18,3.100374);
   3->SetBinContent(19,3.598893);
   3->SetBinContent(20,2.85453);
   3->SetBinContent(21,2.615514);
   3->SetBinContent(22,2.540395);
   3->SetBinContent(23,2.403814);
   3->SetBinContent(24,2.656488);
   3->SetBinContent(25,2.301379);
   3->SetBinContent(26,2.472104);
   3->SetBinContent(27,2.403814);
   3->SetBinContent(28,2.437959);
   3->SetBinContent(29,2.308208);
   3->SetBinContent(30,2.308208);
   3->SetBinContent(31,2.260405);
   3->SetBinContent(32,1.973586);
   3->SetBinContent(33,2.041876);
   3->SetBinContent(34,1.912125);
   3->SetBinContent(35,1.80286);
   3->SetBinContent(36,1.659451);
   3->SetBinContent(37,1.481896);
   3->SetBinContent(38,1.406777);
   3->SetBinContent(39,1.557015);
   3->SetBinContent(40,1.277025);
   3->SetBinContent(41,0.7853357);
   3->SetBinContent(42,1.003864);
   3->SetBinContent(43,0.887771);
   3->SetBinContent(44,0.9902064);
   3->SetBinContent(45,1.010693);
   3->SetBinContent(46,0.8263098);
   3->SetBinContent(47,0.8126518);
   3->SetBinContent(48,0.7307035);
   3->SetBinContent(49,0.5326618);
   3->SetBinContent(50,0.075119);
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
   4->SetBinContent(1,14.0578);
   4->SetBinContent(2,5.034735);
   4->SetBinContent(3,2.825138);
   4->SetBinContent(4,1.988648);
   4->SetBinContent(5,1.762428);
   4->SetBinContent(6,1.636165);
   4->SetBinContent(7,1.914995);
   4->SetBinContent(8,2.246434);
   4->SetBinContent(9,2.641005);
   4->SetBinContent(10,2.762007);
   4->SetBinContent(11,2.951401);
   4->SetBinContent(12,2.972445);
   4->SetBinContent(13,2.982967);
   4->SetBinContent(14,3.461713);
   4->SetBinContent(15,3.708977);
   4->SetBinContent(16,4.498119);
   4->SetBinContent(17,4.198245);
   4->SetBinContent(18,4.424466);
   4->SetBinContent(19,5.192564);
   4->SetBinContent(20,3.908893);
   4->SetBinContent(21,3.251275);
   4->SetBinContent(22,3.5038);
   4->SetBinContent(23,3.566931);
   4->SetBinContent(24,3.39332);
   4->SetBinContent(25,3.424886);
   4->SetBinContent(26,3.582714);
   4->SetBinContent(27,3.708977);
   4->SetBinContent(28,3.903632);
   4->SetBinContent(29,4.103548);
   4->SetBinContent(30,4.419205);
   4->SetBinContent(31,3.89311);
   4->SetBinContent(32,3.808935);
   4->SetBinContent(33,4.135114);
   4->SetBinContent(34,3.640585);
   4->SetBinContent(35,3.530105);
   4->SetBinContent(36,3.814196);
   4->SetBinContent(37,3.661628);
   4->SetBinContent(38,3.540627);
   4->SetBinContent(39,3.561671);
   4->SetBinContent(40,3.267058);
   4->SetBinContent(41,2.014953);
   4->SetBinContent(42,2.188564);
   4->SetBinContent(43,2.299044);
   4->SetBinContent(44,2.546308);
   4->SetBinContent(45,2.604179);
   4->SetBinContent(46,2.893531);
   4->SetBinContent(47,3.182883);
   4->SetBinContent(48,3.198665);
   4->SetBinContent(49,2.451611);
   4->SetBinContent(50,0.4840122);
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
   5->SetBinContent(1,73.36393);
   5->SetBinContent(2,23.98372);
   5->SetBinContent(3,13.67818);
   5->SetBinContent(4,9.523971);
   5->SetBinContent(5,8.693129);
   5->SetBinContent(6,9.635576);
   5->SetBinContent(7,10.86324);
   5->SetBinContent(8,14.013);
   5->SetBinContent(9,16.39395);
   5->SetBinContent(10,17.24966);
   5->SetBinContent(11,15.55068);
   5->SetBinContent(12,15.9475);
   5->SetBinContent(13,14.90584);
   5->SetBinContent(14,15.25306);
   5->SetBinContent(15,15.36467);
   5->SetBinContent(16,16.62958);
   5->SetBinContent(17,16.70399);
   5->SetBinContent(18,13.69058);
   5->SetBinContent(19,18.47741);
   5->SetBinContent(20,13.16975);
   5->SetBinContent(21,11.33446);
   5->SetBinContent(22,10.33001);
   5->SetBinContent(23,9.895989);
   5->SetBinContent(24,9.697579);
   5->SetBinContent(25,9.027946);
   5->SetBinContent(26,9.685179);
   5->SetBinContent(27,9.561172);
   5->SetBinContent(28,9.796784);
   5->SetBinContent(29,8.841936);
   5->SetBinContent(30,8.990744);
   5->SetBinContent(31,8.172302);
   5->SetBinContent(32,7.031407);
   5->SetBinContent(33,6.746181);
   5->SetBinContent(34,6.076522);
   5->SetBinContent(35,6.535363);
   5->SetBinContent(36,5.109236);
   5->SetBinContent(37,5.04723);
   5->SetBinContent(38,4.551186);
   5->SetBinContent(39,4.079944);
   5->SetBinContent(40,3.707911);
   5->SetBinContent(41,1.153292);
   5->SetBinContent(42,1.2525);
   5->SetBinContent(43,0.9920791);
   5->SetBinContent(44,0.9052722);
   5->SetBinContent(45,0.8804702);
   5->SetBinContent(46,0.9796781);
   5->SetBinContent(47,0.7564604);
   5->SetBinContent(48,0.6696535);
   5->SetBinContent(49,0.4588367);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,1);
   6->SetBinContent(1,1409.28);
   6->SetBinContent(2,473.0307);
   6->SetBinContent(3,278.8856);
   6->SetBinContent(4,196.5251);
   6->SetBinContent(5,163.5032);
   6->SetBinContent(6,168.2098);
   6->SetBinContent(7,196.3733);
   6->SetBinContent(8,248.2215);
   6->SetBinContent(9,288.5245);
   6->SetBinContent(10,299.7573);
   6->SetBinContent(11,300.5163);
   6->SetBinContent(12,307.8783);
   6->SetBinContent(13,317.9727);
   6->SetBinContent(14,359.1848);
   6->SetBinContent(15,390.7581);
   6->SetBinContent(16,430.6041);
   6->SetBinContent(17,447.6051);
   6->SetBinContent(18,389.316);
   6->SetBinContent(19,493.447);
   6->SetBinContent(20,359.7161);
   6->SetBinContent(21,287.462);
   6->SetBinContent(22,284.502);
   6->SetBinContent(23,277.4435);
   6->SetBinContent(24,275.3943);
   6->SetBinContent(25,264.9205);
   6->SetBinContent(26,276.6087);
   6->SetBinContent(27,262.4918);
   6->SetBinContent(28,254.2945);
   6->SetBinContent(29,252.5486);
   6->SetBinContent(30,256.1923);
   6->SetBinContent(31,229.4712);
   6->SetBinContent(32,205.4069);
   6->SetBinContent(33,200.6244);
   6->SetBinContent(34,194.3237);
   6->SetBinContent(35,175.801);
   6->SetBinContent(36,171.0186);
   6->SetBinContent(37,155.3806);
   6->SetBinContent(38,150.7499);
   6->SetBinContent(39,145.2083);
   6->SetBinContent(40,122.8147);
   6->SetBinContent(41,60.57268);
   6->SetBinContent(42,60.95221);
   6->SetBinContent(43,60.34497);
   6->SetBinContent(44,61.48354);
   6->SetBinContent(45,63.38116);
   6->SetBinContent(46,65.05107);
   6->SetBinContent(47,63.07754);
   6->SetBinContent(48,58.21963);
   6->SetBinContent(49,40.76152);
   6->SetBinContent(50,8.501462);
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
   7->SetBinContent(1,222.2956);
   7->SetBinContent(2,71.81612);
   7->SetBinContent(3,39.98516);
   7->SetBinContent(4,32.61327);
   7->SetBinContent(5,31.29509);
   7->SetBinContent(6,37.49532);
   7->SetBinContent(7,53.75254);
   7->SetBinContent(8,73.23192);
   7->SetBinContent(9,85.77879);
   7->SetBinContent(10,90.41673);
   7->SetBinContent(11,92.51601);
   7->SetBinContent(12,88.85448);
   7->SetBinContent(13,88.31745);
   7->SetBinContent(14,95.15232);
   7->SetBinContent(15,104.8676);
   7->SetBinContent(16,158.5749);
   7->SetBinContent(17,222.6862);
   7->SetBinContent(18,184.9909);
   7->SetBinContent(19,379.1316);
   7->SetBinContent(20,218.2429);
   7->SetBinContent(21,165.7527);
   7->SetBinContent(22,156.9636);
   7->SetBinContent(23,162.1882);
   7->SetBinContent(24,162.823);
   7->SetBinContent(25,175.2741);
   7->SetBinContent(26,168.0964);
   7->SetBinContent(27,176.6902);
   7->SetBinContent(28,178.155);
   7->SetBinContent(29,172.7351);
   7->SetBinContent(30,173.8093);
   7->SetBinContent(31,158.4284);
   7->SetBinContent(32,154.9616);
   7->SetBinContent(33,149.8347);
   7->SetBinContent(34,144.4636);
   7->SetBinContent(35,134.2585);
   7->SetBinContent(36,125.714);
   7->SetBinContent(37,122.1501);
   7->SetBinContent(38,119.5626);
   7->SetBinContent(39,121.5154);
   7->SetBinContent(40,103.6471);
   7->SetBinContent(41,28.90279);
   7->SetBinContent(42,34.46844);
   7->SetBinContent(43,32.85737);
   7->SetBinContent(44,35.64014);
   7->SetBinContent(45,38.08116);
   7->SetBinContent(46,38.81347);
   7->SetBinContent(47,44.57429);
   7->SetBinContent(48,45.40424);
   7->SetBinContent(49,38.1788);
   7->SetBinContent(50,7.909156);
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
   8->SetBinContent(1,0.587012);
   8->SetBinContent(2,0.293506);
   8->SetBinContent(3,0.146753);
   8->SetBinContent(4,0.440259);
   8->SetBinContent(6,0.146753);
   8->SetBinContent(7,0.440259);
   8->SetBinContent(8,0.880518);
   8->SetBinContent(9,1.907789);
   8->SetBinContent(10,1.46753);
   8->SetBinContent(11,0.733765);
   8->SetBinContent(12,1.907789);
   8->SetBinContent(13,1.907789);
   8->SetBinContent(14,2.348048);
   8->SetBinContent(15,4.989602);
   8->SetBinContent(16,8.805178);
   8->SetBinContent(17,17.61038);
   8->SetBinContent(18,10.56622);
   8->SetBinContent(19,27.88311);
   8->SetBinContent(20,14.23505);
   8->SetBinContent(21,10.71297);
   8->SetBinContent(22,9.538944);
   8->SetBinContent(23,9.979204);
   8->SetBinContent(24,10.12596);
   8->SetBinContent(25,9.979204);
   8->SetBinContent(26,10.12596);
   8->SetBinContent(27,11.29998);
   8->SetBinContent(28,10.12596);
   8->SetBinContent(29,8.951931);
   8->SetBinContent(30,9.098684);
   8->SetBinContent(31,11.44674);
   8->SetBinContent(32,9.245438);
   8->SetBinContent(33,9.098684);
   8->SetBinContent(34,5.576613);
   8->SetBinContent(35,7.777905);
   8->SetBinContent(36,8.071411);
   8->SetBinContent(37,5.576613);
   8->SetBinContent(38,5.136354);
   8->SetBinContent(39,7.337647);
   8->SetBinContent(40,6.603883);
   8->SetBinContent(41,1.907789);
   8->SetBinContent(42,1.907789);
   8->SetBinContent(43,0.440259);
   8->SetBinContent(44,1.320777);
   8->SetBinContent(45,1.46753);
   8->SetBinContent(46,2.201295);
   8->SetBinContent(47,1.761036);
   8->SetBinContent(48,2.494801);
   8->SetBinContent(49,2.348048);
   8->SetBinContent(50,0.733765);
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
   9->SetBinContent(1,761.5535);
   9->SetBinContent(2,204.1815);
   9->SetBinContent(3,124.6367);
   9->SetBinContent(4,108.1784);
   9->SetBinContent(5,125.3225);
   9->SetBinContent(6,214.6389);
   9->SetBinContent(7,364.4806);
   9->SetBinContent(8,513.4686);
   9->SetBinContent(9,600.0497);
   9->SetBinContent(10,623.0237);
   9->SetBinContent(11,606.3933);
   9->SetBinContent(12,585.3052);
   9->SetBinContent(13,576.7328);
   9->SetBinContent(14,544.1578);
   9->SetBinContent(15,603.8216);
   9->SetBinContent(16,573.1324);
   9->SetBinContent(17,550.6728);
   9->SetBinContent(18,485.8656);
   9->SetBinContent(19,598.8496);
   9->SetBinContent(20,413.6861);
   9->SetBinContent(21,361.9088);
   9->SetBinContent(22,356.9369);
   9->SetBinContent(23,332.4198);
   9->SetBinContent(24,321.9615);
   9->SetBinContent(25,349.5646);
   9->SetBinContent(26,332.5913);
   9->SetBinContent(27,332.5913);
   9->SetBinContent(28,344.2497);
   9->SetBinContent(29,330.0196);
   9->SetBinContent(30,326.7621);
   9->SetBinContent(31,321.7901);
   9->SetBinContent(32,296.0729);
   9->SetBinContent(33,270.0128);
   9->SetBinContent(34,258.3544);
   9->SetBinContent(35,271.5559);
   9->SetBinContent(36,238.2966);
   9->SetBinContent(37,228.5249);
   9->SetBinContent(38,211.3817);
   9->SetBinContent(39,198.5242);
   9->SetBinContent(40,171.9522);
   9->SetBinContent(41,119.8364);
   9->SetBinContent(42,117.4362);
   9->SetBinContent(43,119.4935);
   9->SetBinContent(44,108.5213);
   9->SetBinContent(45,119.8364);
   9->SetBinContent(46,129.9512);
   9->SetBinContent(47,145.0373);
   9->SetBinContent(48,148.9803);
   9->SetBinContent(49,127.3797);
   9->SetBinContent(50,32.40191);
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
   10->SetBinContent(1,2482.035);
   10->SetBinContent(2,829.3845);
   10->SetBinContent(3,491.4385);
   10->SetBinContent(4,387.0414);
   10->SetBinContent(5,414.8596);
   10->SetBinContent(6,554.3496);
   10->SetBinContent(7,794.4845);
   10->SetBinContent(8,1092.302);
   10->SetBinContent(9,1318.49);
   10->SetBinContent(10,1385.387);
   10->SetBinContent(11,1369.167);
   10->SetBinContent(12,1304.732);
   10->SetBinContent(13,1298.421);
   10->SetBinContent(14,1361.91);
   10->SetBinContent(15,1392.329);
   10->SetBinContent(16,1705.546);
   10->SetBinContent(17,1974.585);
   10->SetBinContent(18,1683.583);
   10->SetBinContent(19,2745.011);
   10->SetBinContent(20,1700.686);
   10->SetBinContent(21,1314.324);
   10->SetBinContent(22,1274.817);
   10->SetBinContent(23,1245.85);
   10->SetBinContent(24,1250.583);
   10->SetBinContent(25,1271.599);
   10->SetBinContent(26,1252.603);
   10->SetBinContent(27,1266.55);
   10->SetBinContent(28,1251.151);
   10->SetBinContent(29,1219.659);
   10->SetBinContent(30,1217.955);
   10->SetBinContent(31,1161.345);
   10->SetBinContent(32,1090.724);
   10->SetBinContent(33,1032.158);
   10->SetBinContent(34,983.4369);
   10->SetBinContent(35,944.8134);
   10->SetBinContent(36,878.863);
   10->SetBinContent(37,848.1283);
   10->SetBinContent(38,813.4807);
   10->SetBinContent(39,828.6903);
   10->SetBinContent(40,733.0781);
   10->SetBinContent(41,301.5682);
   10->SetBinContent(42,323.8354);
   10->SetBinContent(43,337.3976);
   10->SetBinContent(44,351.149);
   10->SetBinContent(45,369.9468);
   10->SetBinContent(46,401.6759);
   10->SetBinContent(47,442.6778);
   10->SetBinContent(48,432.522);
   10->SetBinContent(49,344.9041);
   10->SetBinContent(50,73.30782);
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
   11->SetBinContent(1,87.80315);
   11->SetBinContent(2,73.1693);
   11->SetBinContent(3,14.63386);
   11->SetBinContent(6,43.90158);
   11->SetBinContent(7,14.63386);
   11->SetBinContent(8,29.26772);
   11->SetBinContent(9,14.63386);
   11->SetBinContent(10,117.0709);
   11->SetBinContent(12,131.7047);
   11->SetBinContent(13,117.0709);
   11->SetBinContent(14,146.3386);
   11->SetBinContent(15,204.8741);
   11->SetBinContent(16,541.4527);
   11->SetBinContent(17,731.6927);
   11->SetBinContent(18,687.7912);
   11->SetBinContent(19,1126.807);
   11->SetBinContent(20,526.8188);
   11->SetBinContent(21,321.9449);
   11->SetBinContent(22,439.0157);
   11->SetBinContent(23,380.4803);
   11->SetBinContent(24,468.2834);
   11->SetBinContent(25,321.9449);
   11->SetBinContent(26,321.9449);
   11->SetBinContent(27,321.9449);
   11->SetBinContent(28,204.8741);
   11->SetBinContent(29,453.6496);
   11->SetBinContent(30,497.5511);
   11->SetBinContent(31,278.0434);
   11->SetBinContent(32,292.6772);
   11->SetBinContent(33,321.9449);
   11->SetBinContent(34,292.6772);
   11->SetBinContent(35,190.2402);
   11->SetBinContent(36,234.1418);
   11->SetBinContent(37,219.5079);
   11->SetBinContent(38,234.1418);
   11->SetBinContent(39,219.5079);
   11->SetBinContent(40,190.2402);
   11->SetBinContent(42,43.90158);
   11->SetBinContent(43,58.53543);
   11->SetBinContent(44,43.90158);
   11->SetBinContent(45,102.437);
   11->SetBinContent(46,29.26772);
   11->SetBinContent(47,73.1693);
   11->SetBinContent(48,14.63386);
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
   12->SetBinContent(1,754.8748);
   12->SetBinContent(2,266.426);
   12->SetBinContent(3,120.5261);
   12->SetBinContent(4,139.5565);
   12->SetBinContent(5,114.1826);
   12->SetBinContent(6,152.2435);
   12->SetBinContent(7,139.5565);
   12->SetBinContent(8,183.9608);
   12->SetBinContent(9,177.6174);
   12->SetBinContent(10,234.7086);
   12->SetBinContent(11,260.0826);
   12->SetBinContent(12,329.8608);
   12->SetBinContent(13,507.4781);
   12->SetBinContent(14,539.1956);
   12->SetBinContent(15,945.18);
   12->SetBinContent(16,2721.362);
   12->SetBinContent(17,4085.215);
   12->SetBinContent(18,3590.422);
   12->SetBinContent(19,6191.179);
   12->SetBinContent(20,3533.33);
   12->SetBinContent(21,2683.301);
   12->SetBinContent(22,2626.209);
   12->SetBinContent(23,2416.873);
   12->SetBinContent(24,2309.034);
   12->SetBinContent(25,2454.934);
   12->SetBinContent(26,2245.599);
   12->SetBinContent(27,2182.164);
   12->SetBinContent(28,2213.881);
   12->SetBinContent(29,1934.767);
   12->SetBinContent(30,1896.706);
   12->SetBinContent(31,1389.225);
   12->SetBinContent(32,1420.943);
   12->SetBinContent(33,1351.164);
   12->SetBinContent(34,1294.073);
   12->SetBinContent(35,1205.264);
   12->SetBinContent(36,1053.02);
   12->SetBinContent(37,1167.203);
   12->SetBinContent(38,976.8975);
   12->SetBinContent(39,1027.646);
   12->SetBinContent(40,964.2105);
   12->SetBinContent(41,234.7086);
   12->SetBinContent(42,310.8304);
   12->SetBinContent(43,241.0521);
   12->SetBinContent(44,291.7999);
   12->SetBinContent(45,272.7695);
   12->SetBinContent(46,253.7391);
   12->SetBinContent(47,355.2347);
   12->SetBinContent(48,342.5477);
   12->SetBinContent(49,209.3347);
   12->SetBinContent(50,82.46522);
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
   13->SetBinContent(1,1223.617);
   13->SetBinContent(2,407.8725);
   13->SetBinContent(3,244.7235);
   13->SetBinContent(4,489.447);
   13->SetBinContent(5,326.298);
   13->SetBinContent(6,163.149);
   13->SetBinContent(7,163.149);
   13->SetBinContent(8,244.7235);
   13->SetBinContent(9,489.447);
   13->SetBinContent(10,244.7235);
   13->SetBinContent(11,244.7235);
   13->SetBinContent(12,734.1704);
   13->SetBinContent(13,489.447);
   13->SetBinContent(14,1305.192);
   13->SetBinContent(15,1386.766);
   13->SetBinContent(16,3915.574);
   13->SetBinContent(17,5710.217);
   13->SetBinContent(18,4160.298);
   13->SetBinContent(19,8646.904);
   13->SetBinContent(20,5057.62);
   13->SetBinContent(21,3181.404);
   13->SetBinContent(22,3670.851);
   13->SetBinContent(23,3262.979);
   13->SetBinContent(24,2447.234);
   13->SetBinContent(25,2691.958);
   13->SetBinContent(26,3752.426);
   13->SetBinContent(27,2691.958);
   13->SetBinContent(28,2447.234);
   13->SetBinContent(29,2284.085);
   13->SetBinContent(30,1713.064);
   13->SetBinContent(31,2120.936);
   13->SetBinContent(32,2039.362);
   13->SetBinContent(33,1957.787);
   13->SetBinContent(34,1549.915);
   13->SetBinContent(35,2120.936);
   13->SetBinContent(36,2120.936);
   13->SetBinContent(37,1876.213);
   13->SetBinContent(38,1549.915);
   13->SetBinContent(39,1223.617);
   13->SetBinContent(40,1876.213);
   13->SetBinContent(41,407.8725);
   13->SetBinContent(42,571.0215);
   13->SetBinContent(43,163.149);
   13->SetBinContent(44,571.0215);
   13->SetBinContent(45,407.8725);
   13->SetBinContent(46,407.8725);
   13->SetBinContent(47,815.7449);
   13->SetBinContent(48,815.7449);
   13->SetBinContent(49,81.57449);
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
   14->SetBinContent(1,3243.734);
   14->SetBinContent(2,753.5127);
   14->SetBinContent(3,370.7121);
   14->SetBinContent(4,249.8277);
   14->SetBinContent(5,161.1792);
   14->SetBinContent(6,149.0907);
   14->SetBinContent(7,225.6509);
   14->SetBinContent(8,338.4763);
   14->SetBinContent(9,350.5647);
   14->SetBinContent(10,483.5376);
   14->SetBinContent(11,515.7734);
   14->SetBinContent(12,556.0682);
   14->SetBinContent(13,729.3358);
   14->SetBinContent(14,862.3087);
   14->SetBinContent(15,1216.9);
   14->SetBinContent(16,2192.024);
   14->SetBinContent(17,3130.907);
   14->SetBinContent(18,2542.594);
   14->SetBinContent(19,6571.985);
   14->SetBinContent(20,2804.514);
   14->SetBinContent(21,1563.43);
   14->SetBinContent(22,1345.841);
   14->SetBinContent(23,1220.929);
   14->SetBinContent(24,1301.518);
   14->SetBinContent(25,1160.488);
   14->SetBinContent(26,1277.341);
   14->SetBinContent(27,910.6624);
   14->SetBinContent(28,1043.635);
   14->SetBinContent(29,878.4266);
   14->SetBinContent(30,874.3971);
   14->SetBinContent(31,826.0433);
   14->SetBinContent(32,725.3063);
   14->SetBinContent(33,620.5399);
   14->SetBinContent(34,737.3948);
   14->SetBinContent(35,660.8347);
   14->SetBinContent(36,560.0977);
   14->SetBinContent(37,548.0092);
   14->SetBinContent(38,511.7439);
   14->SetBinContent(39,374.7416);
   14->SetBinContent(40,415.0364);
   14->SetBinContent(41,229.6803);
   14->SetBinContent(42,201.474);
   14->SetBinContent(43,161.1792);
   14->SetBinContent(44,177.2971);
   14->SetBinContent(45,282.0636);
   14->SetBinContent(46,217.5919);
   14->SetBinContent(47,253.8572);
   14->SetBinContent(48,253.8572);
   14->SetBinContent(49,237.7393);
   14->SetBinContent(50,56.41272);
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
   15->SetBinContent(1,115.8854);
   15->SetBinContent(2,11.58854);
   15->SetBinContent(3,23.17708);
   15->SetBinContent(4,19.31424);
   15->SetBinContent(5,15.45139);
   15->SetBinContent(6,15.45139);
   15->SetBinContent(7,15.45139);
   15->SetBinContent(8,19.31424);
   15->SetBinContent(9,38.62847);
   15->SetBinContent(10,38.62847);
   15->SetBinContent(11,30.90277);
   15->SetBinContent(12,42.49131);
   15->SetBinContent(13,54.07985);
   15->SetBinContent(14,77.25694);
   15->SetBinContent(15,50.21701);
   15->SetBinContent(16,177.691);
   15->SetBinContent(17,227.9081);
   15->SetBinContent(18,231.771);
   15->SetBinContent(19,521.485);
   15->SetBinContent(20,247.2224);
   15->SetBinContent(21,96.57117);
   15->SetBinContent(22,92.70832);
   15->SetBinContent(23,88.84547);
   15->SetBinContent(24,96.57117);
   15->SetBinContent(25,104.2969);
   15->SetBinContent(26,112.0226);
   15->SetBinContent(27,54.07985);
   15->SetBinContent(28,81.11978);
   15->SetBinContent(29,73.39409);
   15->SetBinContent(30,61.80555);
   15->SetBinContent(31,69.53124);
   15->SetBinContent(32,54.07985);
   15->SetBinContent(33,73.39409);
   15->SetBinContent(34,38.62847);
   15->SetBinContent(35,11.58854);
   15->SetBinContent(36,42.49131);
   15->SetBinContent(37,42.49131);
   15->SetBinContent(38,15.45139);
   15->SetBinContent(39,50.21701);
   15->SetBinContent(40,23.17708);
   15->SetBinContent(41,3.862847);
   15->SetBinContent(42,23.17708);
   15->SetBinContent(43,7.725694);
   15->SetBinContent(44,11.58854);
   15->SetBinContent(45,23.17708);
   15->SetBinContent(46,19.31424);
   15->SetBinContent(47,11.58854);
   15->SetBinContent(48,11.58854);
   15->SetBinContent(49,7.725694);
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
   16->SetBinContent(1,92.46255);
   16->SetBinContent(2,49.31336);
   16->SetBinContent(3,61.6417);
   16->SetBinContent(4,61.6417);
   16->SetBinContent(5,49.31336);
   16->SetBinContent(6,18.49251);
   16->SetBinContent(7,36.98502);
   16->SetBinContent(8,43.14919);
   16->SetBinContent(9,55.47753);
   16->SetBinContent(10,67.80587);
   16->SetBinContent(11,104.7909);
   16->SetBinContent(12,135.6117);
   16->SetBinContent(13,351.3579);
   16->SetBinContent(14,443.8207);
   16->SetBinContent(15,819.8359);
   16->SetBinContent(16,2650.587);
   16->SetBinContent(17,4857.321);
   16->SetBinContent(18,3901.892);
   16->SetBinContent(19,11206.31);
   16->SetBinContent(20,4709.384);
   16->SetBinContent(21,2477.993);
   16->SetBinContent(22,2299.235);
   16->SetBinContent(23,2169.79);
   16->SetBinContent(24,1954.046);
   16->SetBinContent(25,2021.852);
   16->SetBinContent(26,2021.852);
   16->SetBinContent(27,1812.27);
   16->SetBinContent(28,1707.479);
   16->SetBinContent(29,1547.21);
   16->SetBinContent(30,1405.433);
   16->SetBinContent(31,1368.448);
   16->SetBinContent(32,1010.926);
   16->SetBinContent(33,856.821);
   16->SetBinContent(34,727.3732);
   16->SetBinContent(35,715.0448);
   16->SetBinContent(36,801.3434);
   16->SetBinContent(37,764.3583);
   16->SetBinContent(38,641.0746);
   16->SetBinContent(39,573.2686);
   16->SetBinContent(40,431.4923);
   16->SetBinContent(41,147.9401);
   16->SetBinContent(42,123.2834);
   16->SetBinContent(43,147.9401);
   16->SetBinContent(44,160.2684);
   16->SetBinContent(45,135.6117);
   16->SetBinContent(46,197.2534);
   16->SetBinContent(47,191.0893);
   16->SetBinContent(48,154.1042);
   16->SetBinContent(49,117.1192);
   16->SetBinContent(50,30.82085);
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
   17->SetBinContent(1,1686.612);
   17->SetBinContent(2,515.3538);
   17->SetBinContent(3,210.8266);
   17->SetBinContent(4,210.8266);
   17->SetBinContent(5,163.9762);
   17->SetBinContent(6,491.9286);
   17->SetBinContent(7,609.0545);
   17->SetBinContent(8,585.6293);
   17->SetBinContent(9,773.0307);
   17->SetBinContent(10,1007.282);
   17->SetBinContent(11,1054.133);
   17->SetBinContent(12,1264.959);
   17->SetBinContent(13,1124.408);
   17->SetBinContent(14,1546.061);
   17->SetBinContent(15,1967.714);
   17->SetBinContent(16,2693.898);
   17->SetBinContent(17,3420.082);
   17->SetBinContent(18,2576.772);
   17->SetBinContent(19,4919.301);
   17->SetBinContent(20,2272.243);
   17->SetBinContent(21,1405.51);
   17->SetBinContent(22,1452.361);
   17->SetBinContent(23,1218.109);
   17->SetBinContent(24,1639.762);
   17->SetBinContent(25,1663.187);
   17->SetBinContent(26,1077.558);
   17->SetBinContent(27,1264.959);
   17->SetBinContent(28,937.0069);
   17->SetBinContent(29,937.0069);
   17->SetBinContent(30,1054.133);
   17->SetBinContent(31,866.7314);
   17->SetBinContent(32,843.3062);
   17->SetBinContent(33,562.2042);
   17->SetBinContent(34,749.6055);
   17->SetBinContent(35,515.3538);
   17->SetBinContent(36,515.3538);
   17->SetBinContent(37,562.2042);
   17->SetBinContent(38,398.2279);
   17->SetBinContent(39,351.3776);
   17->SetBinContent(40,351.3776);
   17->SetBinContent(41,257.6769);
   17->SetBinContent(42,93.70071);
   17->SetBinContent(43,70.27553);
   17->SetBinContent(44,140.5511);
   17->SetBinContent(45,187.4014);
   17->SetBinContent(46,187.4014);
   17->SetBinContent(47,257.6769);
   17->SetBinContent(48,163.9762);
   17->SetBinContent(49,140.5511);
   17->SetBinContent(50,93.70071);
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
