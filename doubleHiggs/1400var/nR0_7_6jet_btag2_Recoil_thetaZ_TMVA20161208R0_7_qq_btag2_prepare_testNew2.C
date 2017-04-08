{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:07:55 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.8478413,-3.093846,4.13946,5.3854);
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
   
   TH1F *THStack_stack_35 = new TH1F("THStack_stack_35","",50,0,3.142);
   THStack_stack_35->SetMinimum(0.02706566);
   THStack_stack_35->SetMaximum(50940.12);
   THStack_stack_35->SetDirectory(0);
   THStack_stack_35->SetStats(0);
   THStack_stack_35->SetLineWidth(2);
   THStack_stack_35->SetMarkerSize(1.2);
   THStack_stack_35->GetXaxis()->SetTitle("#theta_{recoil}");
   THStack_stack_35->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_35->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_35->GetXaxis()->SetLabelColor(ci);
   THStack_stack_35->GetXaxis()->SetLabelFont(42);
   THStack_stack_35->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_35->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_35->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_35->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_35->GetXaxis()->SetTitleColor(ci);
   THStack_stack_35->GetXaxis()->SetTitleFont(42);
   THStack_stack_35->GetYaxis()->SetTitle("Number of events");
   THStack_stack_35->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_35->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_35->GetYaxis()->SetLabelColor(ci);
   THStack_stack_35->GetYaxis()->SetLabelFont(42);
   THStack_stack_35->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_35->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_35->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_35->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_35->GetYaxis()->SetTitleColor(ci);
   THStack_stack_35->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_35->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_35->GetZaxis()->SetLabelColor(ci);
   THStack_stack_35->GetZaxis()->SetLabelFont(42);
   THStack_stack_35->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_35->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_35->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_35->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_35->GetZaxis()->SetTitleColor(ci);
   THStack_stack_35->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_35);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,3.142);
   0->SetBinContent(1,0.011292);
   0->SetBinContent(2,0.2408962);
   0->SetBinContent(3,0.5100206);
   0->SetBinContent(4,0.5457789);
   0->SetBinContent(5,0.5495429);
   0->SetBinContent(6,0.5269587);
   0->SetBinContent(7,0.5457789);
   0->SetBinContent(8,0.4874365);
   0->SetBinContent(9,0.4347409);
   0->SetBinContent(10,0.3462875);
   0->SetBinContent(11,0.3651074);
   0->SetBinContent(12,0.3255857);
   0->SetBinContent(13,0.3274677);
   0->SetBinContent(14,0.3048838);
   0->SetBinContent(15,0.2540702);
   0->SetBinContent(16,0.2615981);
   0->SetBinContent(17,0.2823);
   0->SetBinContent(18,0.2183122);
   0->SetBinContent(19,0.2521882);
   0->SetBinContent(20,0.2408962);
   0->SetBinContent(21,0.2465422);
   0->SetBinContent(22,0.280418);
   0->SetBinContent(23,0.2239582);
   0->SetBinContent(24,0.1919641);
   0->SetBinContent(25,0.2352502);
   0->SetBinContent(26,0.2390142);
   0->SetBinContent(27,0.2314862);
   0->SetBinContent(28,0.2408962);
   0->SetBinContent(29,0.2503062);
   0->SetBinContent(30,0.2653621);
   0->SetBinContent(31,0.2333682);
   0->SetBinContent(32,0.2935919);
   0->SetBinContent(33,0.278536);
   0->SetBinContent(34,0.2540702);
   0->SetBinContent(35,0.2653621);
   0->SetBinContent(36,0.278536);
   0->SetBinContent(37,0.2973559);
   0->SetBinContent(38,0.2898279);
   0->SetBinContent(39,0.3368776);
   0->SetBinContent(40,0.3763993);
   0->SetBinContent(41,0.4102751);
   0->SetBinContent(42,0.4441508);
   0->SetBinContent(43,0.4460328);
   0->SetBinContent(44,0.5815372);
   0->SetBinContent(45,0.562717);
   0->SetBinContent(46,0.6549358);
   0->SetBinContent(47,0.5457789);
   0->SetBinContent(48,0.4704987);
   0->SetBinContent(49,0.2107842);
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
   1->SetBinContent(1,0.008469);
   1->SetBinContent(2,0.136445);
   1->SetBinContent(3,0.3161758);
   1->SetBinContent(4,0.3698133);
   1->SetBinContent(5,0.3255859);
   1->SetBinContent(6,0.3293499);
   1->SetBinContent(7,0.3481701);
   1->SetBinContent(8,0.2945326);
   1->SetBinContent(9,0.2851225);
   1->SetBinContent(10,0.2550103);
   1->SetBinContent(11,0.2079605);
   1->SetBinContent(12,0.1797307);
   1->SetBinContent(13,0.2145475);
   1->SetBinContent(14,0.2032555);
   1->SetBinContent(15,0.1825537);
   1->SetBinContent(16,0.1505599);
   1->SetBinContent(17,0.1853767);
   1->SetBinContent(18,0.1646748);
   1->SetBinContent(19,0.1524419);
   1->SetBinContent(20,0.1270351);
   1->SetBinContent(21,0.1279761);
   1->SetBinContent(22,0.139268);
   1->SetBinContent(23,0.134563);
   1->SetBinContent(24,0.133622);
   1->SetBinContent(25,0.144914);
   1->SetBinContent(26,0.1279761);
   1->SetBinContent(27,0.135504);
   1->SetBinContent(28,0.144914);
   1->SetBinContent(29,0.1467959);
   1->SetBinContent(30,0.1590289);
   1->SetBinContent(31,0.1674978);
   1->SetBinContent(32,0.133622);
   1->SetBinContent(33,0.1740848);
   1->SetBinContent(34,0.1571469);
   1->SetBinContent(35,0.1910226);
   1->SetBinContent(36,0.1703208);
   1->SetBinContent(37,0.2089015);
   1->SetBinContent(38,0.2126655);
   1->SetBinContent(39,0.2427773);
   1->SetBinContent(40,0.2512462);
   1->SetBinContent(41,0.2822995);
   1->SetBinContent(42,0.2700664);
   1->SetBinContent(43,0.2879456);
   1->SetBinContent(44,0.3142938);
   1->SetBinContent(45,0.3302909);
   1->SetBinContent(46,0.3782824);
   1->SetBinContent(47,0.3265269);
   1->SetBinContent(48,0.3293499);
   1->SetBinContent(49,0.136445);
   1->SetBinContent(50,0.011292);
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
   2->SetBinContent(2,0.3726363);
   2->SetBinContent(3,0.7339761);
   2->SetBinContent(4,0.8685361);
   2->SetBinContent(5,0.9052342);
   2->SetBinContent(6,0.8826507);
   2->SetBinContent(7,0.8930015);
   2->SetBinContent(8,0.7443269);
   2->SetBinContent(9,0.6379963);
   2->SetBinContent(10,0.5909474);
   2->SetBinContent(11,0.5683639);
   2->SetBinContent(12,0.5326067);
   2->SetBinContent(13,0.5326067);
   2->SetBinContent(14,0.5175511);
   2->SetBinContent(15,0.454504);
   2->SetBinContent(16,0.448858);
   2->SetBinContent(17,0.4074536);
   2->SetBinContent(18,0.4130997);
   2->SetBinContent(19,0.4168637);
   2->SetBinContent(20,0.3942795);
   2->SetBinContent(21,0.3886335);
   2->SetBinContent(22,0.334055);
   2->SetBinContent(23,0.3726363);
   2->SetBinContent(24,0.3829874);
   2->SetBinContent(25,0.3632262);
   2->SetBinContent(26,0.3556982);
   2->SetBinContent(27,0.3604032);
   2->SetBinContent(28,0.3444061);
   2->SetBinContent(29,0.3829874);
   2->SetBinContent(30,0.341583);
   2->SetBinContent(31,0.3726363);
   2->SetBinContent(32,0.4018076);
   2->SetBinContent(33,0.4102767);
   2->SetBinContent(34,0.3622852);
   2->SetBinContent(35,0.4403889);
   2->SetBinContent(36,0.4714422);
   2->SetBinContent(37,0.4977904);
   2->SetBinContent(38,0.5137872);
   2->SetBinContent(39,0.5608361);
   2->SetBinContent(40,0.5730688);
   2->SetBinContent(41,0.6238816);
   2->SetBinContent(42,0.7001009);
   2->SetBinContent(43,0.7753792);
   2->SetBinContent(44,0.7970217);
   2->SetBinContent(45,0.8468935);
   2->SetBinContent(46,0.8967654);
   2->SetBinContent(47,0.8685361);
   2->SetBinContent(48,0.7208024);
   2->SetBinContent(49,0.3707543);
   2->SetBinContent(50,0.02634801);
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
   3->SetBinContent(1,0.157067);
   3->SetBinContent(2,1.140445);
   3->SetBinContent(3,2.519907);
   3->SetBinContent(4,3.516945);
   3->SetBinContent(5,3.646696);
   3->SetBinContent(6,3.646696);
   3->SetBinContent(7,3.475971);
   3->SetBinContent(8,3.141349);
   3->SetBinContent(9,3.216468);
   3->SetBinContent(10,2.909162);
   3->SetBinContent(11,2.820385);
   3->SetBinContent(12,2.636001);
   3->SetBinContent(13,2.595027);
   3->SetBinContent(14,2.171627);
   3->SetBinContent(15,2.171627);
   3->SetBinContent(16,2.15114);
   3->SetBinContent(17,1.939441);
   3->SetBinContent(18,1.727741);
   3->SetBinContent(19,1.796031);
   3->SetBinContent(20,1.905295);
   3->SetBinContent(21,1.748228);
   3->SetBinContent(22,1.714083);
   3->SetBinContent(23,1.597989);
   3->SetBinContent(24,1.707254);
   3->SetBinContent(25,1.659451);
   3->SetBinContent(26,1.625306);
   3->SetBinContent(27,1.59116);
   3->SetBinContent(28,1.877979);
   3->SetBinContent(29,1.468238);
   3->SetBinContent(30,1.557015);
   3->SetBinContent(31,1.809689);
   3->SetBinContent(32,1.80286);
   3->SetBinContent(33,1.925783);
   3->SetBinContent(34,1.884808);
   3->SetBinContent(35,2.144311);
   3->SetBinContent(36,2.185285);
   3->SetBinContent(37,2.321866);
   3->SetBinContent(38,2.369669);
   3->SetBinContent(39,2.717949);
   3->SetBinContent(40,2.656488);
   3->SetBinContent(41,2.943307);
   3->SetBinContent(42,3.148178);
   3->SetBinContent(43,3.107203);
   3->SetBinContent(44,3.598893);
   3->SetBinContent(45,3.448655);
   3->SetBinContent(46,3.4828);
   3->SetBinContent(47,3.20281);
   3->SetBinContent(48,2.717949);
   3->SetBinContent(49,1.167761);
   3->SetBinContent(50,0.06829);
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
   4->SetBinContent(1,0.115742);
   4->SetBinContent(2,1.799254);
   4->SetBinContent(3,3.83524);
   4->SetBinContent(4,5.071562);
   4->SetBinContent(5,5.192564);
   4->SetBinContent(6,5.408262);
   4->SetBinContent(7,5.313565);
   4->SetBinContent(8,4.982126);
   4->SetBinContent(9,4.940038);
   4->SetBinContent(10,4.434988);
   4->SetBinContent(11,4.198245);
   4->SetBinContent(12,3.703716);
   4->SetBinContent(13,3.698455);
   4->SetBinContent(14,3.39332);
   4->SetBinContent(15,3.309145);
   4->SetBinContent(16,3.303884);
   4->SetBinContent(17,3.172361);
   4->SetBinContent(18,2.72518);
   4->SetBinContent(19,2.846182);
   4->SetBinContent(20,2.567352);
   4->SetBinContent(21,2.635744);
   4->SetBinContent(22,2.598918);
   4->SetBinContent(23,2.55683);
   4->SetBinContent(24,2.493699);
   4->SetBinContent(25,2.462133);
   4->SetBinContent(26,2.635744);
   4->SetBinContent(27,2.662049);
   4->SetBinContent(28,2.451611);
   4->SetBinContent(29,2.593657);
   4->SetBinContent(30,2.577874);
   4->SetBinContent(31,2.641005);
   4->SetBinContent(32,2.804095);
   4->SetBinContent(33,2.772529);
   4->SetBinContent(34,3.035576);
   4->SetBinContent(35,3.051359);
   4->SetBinContent(36,3.235492);
   4->SetBinContent(37,3.5038);
   4->SetBinContent(38,3.540627);
   4->SetBinContent(39,4.014112);
   4->SetBinContent(40,4.182462);
   4->SetBinContent(41,4.256115);
   4->SetBinContent(42,4.592816);
   4->SetBinContent(43,4.997909);
   4->SetBinContent(44,5.371436);
   4->SetBinContent(45,5.387218);
   4->SetBinContent(46,5.039996);
   4->SetBinContent(47,4.855863);
   4->SetBinContent(48,3.866805);
   4->SetBinContent(49,1.72034);
   4->SetBinContent(50,0.194657);
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
   5->SetBinContent(1,0.7068564);
   5->SetBinContent(2,6.05172);
   5->SetBinContent(3,12.43812);
   5->SetBinContent(4,15.60028);
   5->SetBinContent(5,16.25753);
   5->SetBinContent(6,16.39395);
   5->SetBinContent(7,16.12111);
   5->SetBinContent(8,14.73223);
   5->SetBinContent(9,13.90139);
   5->SetBinContent(10,13.13255);
   5->SetBinContent(11,11.75608);
   5->SetBinContent(12,10.76403);
   5->SetBinContent(13,10.28041);
   5->SetBinContent(14,10.54082);
   5->SetBinContent(15,9.499169);
   5->SetBinContent(16,9.065147);
   5->SetBinContent(17,8.445116);
   5->SetBinContent(18,8.482318);
   5->SetBinContent(19,8.271507);
   5->SetBinContent(20,7.825078);
   5->SetBinContent(21,7.279429);
   5->SetBinContent(22,7.105814);
   5->SetBinContent(23,7.477847);
   5->SetBinContent(24,7.093412);
   5->SetBinContent(25,7.267028);
   5->SetBinContent(26,7.601858);
   5->SetBinContent(27,7.242226);
   5->SetBinContent(28,7.552253);
   5->SetBinContent(29,7.366237);
   5->SetBinContent(30,7.800275);
   5->SetBinContent(31,7.949089);
   5->SetBinContent(32,8.221905);
   5->SetBinContent(33,8.742731);
   5->SetBinContent(34,8.1351);
   5->SetBinContent(35,8.978343);
   5->SetBinContent(36,9.933191);
   5->SetBinContent(37,9.647977);
   5->SetBinContent(38,10.46642);
   5->SetBinContent(39,11.47087);
   5->SetBinContent(40,12.1281);
   5->SetBinContent(41,13.36817);
   5->SetBinContent(42,13.78979);
   5->SetBinContent(43,14.42222);
   5->SetBinContent(44,15.9971);
   5->SetBinContent(45,16.07151);
   5->SetBinContent(46,16.0591);
   5->SetBinContent(47,15.74909);
   5->SetBinContent(48,12.63653);
   5->SetBinContent(49,7.081011);
   5->SetBinContent(50,0.5456436);
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
   6->SetBinContent(1,29.148);
   6->SetBinContent(2,348.4833);
   6->SetBinContent(3,587.7418);
   6->SetBinContent(4,622.2889);
   6->SetBinContent(5,544.9186);
   6->SetBinContent(6,481.7589);
   6->SetBinContent(7,419.9785);
   6->SetBinContent(8,359.6402);
   6->SetBinContent(9,308.865);
   6->SetBinContent(10,271.7513);
   6->SetBinContent(11,238.4288);
   6->SetBinContent(12,219.7544);
   6->SetBinContent(13,203.3573);
   6->SetBinContent(14,182.0259);
   6->SetBinContent(15,165.2492);
   6->SetBinContent(16,157.3543);
   6->SetBinContent(17,142.5514);
   6->SetBinContent(18,139.0594);
   6->SetBinContent(19,127.7485);
   6->SetBinContent(20,121.2207);
   6->SetBinContent(21,121.0688);
   6->SetBinContent(22,119.0194);
   6->SetBinContent(23,114.4651);
   6->SetBinContent(24,114.6169);
   6->SetBinContent(25,115.2242);
   6->SetBinContent(26,113.5543);
   6->SetBinContent(27,112.4916);
   6->SetBinContent(28,113.7061);
   6->SetBinContent(29,115.9832);
   6->SetBinContent(30,122.8147);
   6->SetBinContent(31,125.0918);
   6->SetBinContent(32,127.9003);
   6->SetBinContent(33,133.8974);
   6->SetBinContent(34,141.0331);
   6->SetBinContent(35,152.1923);
   6->SetBinContent(36,168.2857);
   6->SetBinContent(37,189.0857);
   6->SetBinContent(38,195.0069);
   6->SetBinContent(39,209.2784);
   6->SetBinContent(40,240.4785);
   6->SetBinContent(41,281.9215);
   6->SetBinContent(42,310.8383);
   6->SetBinContent(43,365.0289);
   6->SetBinContent(44,408.4421);
   6->SetBinContent(45,483.8081);
   6->SetBinContent(46,547.8798);
   6->SetBinContent(47,618.7203);
   6->SetBinContent(48,598.7513);
   6->SetBinContent(49,340.7418);
   6->SetBinContent(50,31.3493);
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
   7->SetBinContent(1,7.76269);
   7->SetBinContent(2,68.59397);
   7->SetBinContent(3,138.9948);
   7->SetBinContent(4,168.0964);
   7->SetBinContent(5,184.2585);
   7->SetBinContent(6,184.9909);
   7->SetBinContent(7,175.4206);
   7->SetBinContent(8,165.655);
   7->SetBinContent(9,156.5241);
   7->SetBinContent(10,146.3679);
   7->SetBinContent(11,134.112);
   7->SetBinContent(12,122.2965);
   7->SetBinContent(13,117.0727);
   7->SetBinContent(14,114.0947);
   7->SetBinContent(15,107.748);
   7->SetBinContent(16,100.4738);
   7->SetBinContent(17,95.05468);
   7->SetBinContent(18,96.17755);
   7->SetBinContent(19,90.41673);
   7->SetBinContent(20,84.99766);
   7->SetBinContent(21,82.11725);
   7->SetBinContent(22,84.70473);
   7->SetBinContent(23,81.43376);
   7->SetBinContent(24,79.43212);
   7->SetBinContent(25,81.18966);
   7->SetBinContent(26,82.99602);
   7->SetBinContent(27,78.94392);
   7->SetBinContent(28,81.82433);
   7->SetBinContent(29,81.67786);
   7->SetBinContent(30,85.68114);
   7->SetBinContent(31,83.33776);
   7->SetBinContent(32,87.78043);
   7->SetBinContent(33,90.51437);
   7->SetBinContent(34,97.69099);
   7->SetBinContent(35,102.4754);
   7->SetBinContent(36,107.5527);
   7->SetBinContent(37,109.0173);
   7->SetBinContent(38,115.1687);
   7->SetBinContent(39,126.1045);
   7->SetBinContent(40,135.1862);
   7->SetBinContent(41,146.1726);
   7->SetBinContent(42,155.4011);
   7->SetBinContent(43,172.2956);
   7->SetBinContent(44,176.2507);
   7->SetBinContent(45,182.7448);
   7->SetBinContent(46,185.9675);
   7->SetBinContent(47,175.323);
   7->SetBinContent(48,136.0652);
   7->SetBinContent(49,72.06023);
   7->SetBinContent(50,7.567402);
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
   8->SetBinContent(1,4.549343);
   8->SetBinContent(2,29.49739);
   8->SetBinContent(3,22.74674);
   8->SetBinContent(4,14.67531);
   8->SetBinContent(5,11.59349);
   8->SetBinContent(6,9.098684);
   8->SetBinContent(7,5.42986);
   8->SetBinContent(8,4.40259);
   8->SetBinContent(9,4.255837);
   8->SetBinContent(10,4.109085);
   8->SetBinContent(11,4.842849);
   8->SetBinContent(12,2.93506);
   8->SetBinContent(13,2.641554);
   8->SetBinContent(14,2.201295);
   8->SetBinContent(15,2.348048);
   8->SetBinContent(16,2.348048);
   8->SetBinContent(17,2.641554);
   8->SetBinContent(18,1.174024);
   8->SetBinContent(19,1.761036);
   8->SetBinContent(20,3.081813);
   8->SetBinContent(21,1.761036);
   8->SetBinContent(22,1.46753);
   8->SetBinContent(23,1.614283);
   8->SetBinContent(24,1.027271);
   8->SetBinContent(25,2.201295);
   8->SetBinContent(26,1.320777);
   8->SetBinContent(27,1.320777);
   8->SetBinContent(28,1.174024);
   8->SetBinContent(29,1.907789);
   8->SetBinContent(30,2.054542);
   8->SetBinContent(31,1.320777);
   8->SetBinContent(32,1.907789);
   8->SetBinContent(33,1.614283);
   8->SetBinContent(34,1.46753);
   8->SetBinContent(35,2.054542);
   8->SetBinContent(36,2.201295);
   8->SetBinContent(37,2.788307);
   8->SetBinContent(38,2.788307);
   8->SetBinContent(39,3.522073);
   8->SetBinContent(40,4.109085);
   8->SetBinContent(41,3.522073);
   8->SetBinContent(42,3.962332);
   8->SetBinContent(43,8.511671);
   8->SetBinContent(44,6.750636);
   8->SetBinContent(45,7.4844);
   8->SetBinContent(46,12.47401);
   8->SetBinContent(47,14.3818);
   8->SetBinContent(48,23.92077);
   8->SetBinContent(49,25.24155);
   8->SetBinContent(50,7.4844);
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
   9->SetBinContent(1,46.46);
   9->SetBinContent(2,380.7681);
   9->SetBinContent(3,536.6141);
   9->SetBinContent(4,546.3866);
   9->SetBinContent(5,500.953);
   9->SetBinContent(6,467.8636);
   9->SetBinContent(7,435.9743);
   9->SetBinContent(8,396.3698);
   9->SetBinContent(9,366.195);
   9->SetBinContent(10,354.1937);
   9->SetBinContent(11,340.6493);
   9->SetBinContent(12,319.0469);
   9->SetBinContent(13,300.3591);
   9->SetBinContent(14,293.1583);
   9->SetBinContent(15,278.7567);
   9->SetBinContent(16,273.0989);
   9->SetBinContent(17,266.7553);
   9->SetBinContent(18,255.097);
   9->SetBinContent(19,251.154);
   9->SetBinContent(20,243.4396);
   9->SetBinContent(21,243.4396);
   9->SetBinContent(22,242.7538);
   9->SetBinContent(23,235.5537);
   9->SetBinContent(24,229.8964);
   9->SetBinContent(25,234.1822);
   9->SetBinContent(26,233.6679);
   9->SetBinContent(27,242.5824);
   9->SetBinContent(28,240.8681);
   9->SetBinContent(29,240.1823);
   9->SetBinContent(30,242.2395);
   9->SetBinContent(31,246.3539);
   9->SetBinContent(32,261.4405);
   9->SetBinContent(33,255.9541);
   9->SetBinContent(34,272.9275);
   9->SetBinContent(35,276.6993);
   9->SetBinContent(36,279.271);
   9->SetBinContent(37,276.6993);
   9->SetBinContent(38,301.2163);
   9->SetBinContent(39,327.9622);
   9->SetBinContent(40,346.65);
   9->SetBinContent(41,353.6794);
   9->SetBinContent(42,407.1711);
   9->SetBinContent(43,397.2271);
   9->SetBinContent(44,443.0036);
   9->SetBinContent(45,482.4366);
   9->SetBinContent(46,519.2979);
   9->SetBinContent(47,533.6995);
   9->SetBinContent(48,543.8149);
   9->SetBinContent(49,387.4546);
   9->SetBinContent(50,50.74601);
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
   10->SetBinContent(1,63.52926);
   10->SetBinContent(2,738.6949);
   10->SetBinContent(3,1432.151);
   10->SetBinContent(4,1761.146);
   10->SetBinContent(5,1805.386);
   10->SetBinContent(6,1761.777);
   10->SetBinContent(7,1640.542);
   10->SetBinContent(8,1502.204);
   10->SetBinContent(9,1398.135);
   10->SetBinContent(10,1290.721);
   10->SetBinContent(11,1187.788);
   10->SetBinContent(12,1086.181);
   10->SetBinContent(13,1018.968);
   10->SetBinContent(14,944.6871);
   10->SetBinContent(15,913.3213);
   10->SetBinContent(16,840.9968);
   10->SetBinContent(17,794.6107);
   10->SetBinContent(18,755.0405);
   10->SetBinContent(19,749.8024);
   10->SetBinContent(20,712.5042);
   10->SetBinContent(21,695.9061);
   10->SetBinContent(22,667.3802);
   10->SetBinContent(23,672.4922);
   10->SetBinContent(24,652.6124);
   10->SetBinContent(25,670.1571);
   10->SetBinContent(26,658.9235);
   10->SetBinContent(27,651.6027);
   10->SetBinContent(28,658.8604);
   10->SetBinContent(29,672.4922);
   10->SetBinContent(30,693.0031);
   10->SetBinContent(31,718.3103);
   10->SetBinContent(32,732.6995);
   10->SetBinContent(33,775.3621);
   10->SetBinContent(34,818.9082);
   10->SetBinContent(35,844.7203);
   10->SetBinContent(36,883.2177);
   10->SetBinContent(37,949.3573);
   10->SetBinContent(38,1012.089);
   10->SetBinContent(39,1102.4);
   10->SetBinContent(40,1183.686);
   10->SetBinContent(41,1300.314);
   10->SetBinContent(42,1399.082);
   10->SetBinContent(43,1513.375);
   10->SetBinContent(44,1656.635);
   10->SetBinContent(45,1752.563);
   10->SetBinContent(46,1818.45);
   10->SetBinContent(47,1752.058);
   10->SetBinContent(48,1450.643);
   10->SetBinContent(49,722.9805);
   10->SetBinContent(50,67.69303);
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
   11->SetBinContent(1,204.8741);
   11->SetBinContent(2,717.0589);
   11->SetBinContent(3,1156.075);
   11->SetBinContent(4,541.4527);
   11->SetBinContent(5,482.9173);
   11->SetBinContent(6,439.0157);
   11->SetBinContent(7,321.9449);
   11->SetBinContent(8,204.8741);
   11->SetBinContent(9,219.5079);
   11->SetBinContent(10,117.0709);
   11->SetBinContent(11,248.7757);
   11->SetBinContent(12,102.437);
   11->SetBinContent(13,43.90158);
   11->SetBinContent(14,146.3386);
   11->SetBinContent(15,117.0709);
   11->SetBinContent(16,73.1693);
   11->SetBinContent(17,58.53543);
   11->SetBinContent(18,102.437);
   11->SetBinContent(19,29.26772);
   11->SetBinContent(20,131.7047);
   11->SetBinContent(21,58.53543);
   11->SetBinContent(22,43.90158);
   11->SetBinContent(23,43.90158);
   11->SetBinContent(24,43.90158);
   11->SetBinContent(25,14.63386);
   11->SetBinContent(26,43.90158);
   11->SetBinContent(27,73.1693);
   11->SetBinContent(28,73.1693);
   11->SetBinContent(29,29.26772);
   11->SetBinContent(30,102.437);
   11->SetBinContent(31,58.53543);
   11->SetBinContent(32,131.7047);
   11->SetBinContent(33,43.90158);
   11->SetBinContent(34,87.80315);
   11->SetBinContent(35,73.1693);
   11->SetBinContent(36,87.80315);
   11->SetBinContent(37,58.53543);
   11->SetBinContent(38,87.80315);
   11->SetBinContent(39,58.53543);
   11->SetBinContent(40,175.6063);
   11->SetBinContent(41,234.1418);
   11->SetBinContent(42,219.5079);
   11->SetBinContent(43,351.2126);
   11->SetBinContent(44,321.9449);
   11->SetBinContent(45,365.8465);
   11->SetBinContent(46,424.3819);
   11->SetBinContent(47,526.8188);
   11->SetBinContent(48,907.299);
   11->SetBinContent(49,804.862);
   11->SetBinContent(50,204.8741);
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
   12->SetBinContent(1,685.0963);
   12->SetBinContent(2,4028.124);
   12->SetBinContent(3,4408.722);
   12->SetBinContent(4,3660.2);
   12->SetBinContent(5,2784.797);
   12->SetBinContent(6,2099.698);
   12->SetBinContent(7,1839.614);
   12->SetBinContent(8,1389.225);
   12->SetBinContent(9,1065.707);
   12->SetBinContent(10,1122.798);
   12->SetBinContent(11,976.8975);
   12->SetBinContent(12,748.5313);
   12->SetBinContent(13,761.2183);
   12->SetBinContent(14,583.6002);
   12->SetBinContent(15,659.7222);
   12->SetBinContent(16,545.5391);
   12->SetBinContent(17,456.7303);
   12->SetBinContent(18,475.7607);
   12->SetBinContent(19,374.2651);
   12->SetBinContent(20,393.2955);
   12->SetBinContent(21,444.0433);
   12->SetBinContent(22,405.9825);
   12->SetBinContent(23,418.6694);
   12->SetBinContent(24,266.426);
   12->SetBinContent(25,418.6694);
   12->SetBinContent(26,399.639);
   12->SetBinContent(27,323.5173);
   12->SetBinContent(28,348.8912);
   12->SetBinContent(29,507.4781);
   12->SetBinContent(30,399.639);
   12->SetBinContent(31,393.2955);
   12->SetBinContent(32,450.3868);
   12->SetBinContent(33,551.8826);
   12->SetBinContent(34,564.5696);
   12->SetBinContent(35,602.6307);
   12->SetBinContent(36,691.4398);
   12->SetBinContent(37,615.3177);
   12->SetBinContent(38,869.0579);
   12->SetBinContent(39,697.7833);
   12->SetBinContent(40,1072.05);
   12->SetBinContent(41,1179.89);
   12->SetBinContent(42,1332.134);
   12->SetBinContent(43,1478.034);
   12->SetBinContent(44,1776.179);
   12->SetBinContent(45,2163.133);
   12->SetBinContent(46,2664.27);
   12->SetBinContent(47,3539.674);
   12->SetBinContent(48,4231.111);
   12->SetBinContent(49,3958.345);
   12->SetBinContent(50,570.9131);
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
   13->SetBinContent(1,1794.638);
   13->SetBinContent(2,5383.918);
   13->SetBinContent(3,5954.941);
   13->SetBinContent(4,4976.045);
   13->SetBinContent(5,4486.597);
   13->SetBinContent(6,2610.383);
   13->SetBinContent(7,2284.085);
   13->SetBinContent(8,2039.362);
   13->SetBinContent(9,1631.49);
   13->SetBinContent(10,734.1704);
   13->SetBinContent(11,1223.617);
   13->SetBinContent(12,1386.766);
   13->SetBinContent(13,489.447);
   13->SetBinContent(14,1305.192);
   13->SetBinContent(15,1386.766);
   13->SetBinContent(16,734.1704);
   13->SetBinContent(17,489.447);
   13->SetBinContent(18,815.7449);
   13->SetBinContent(19,571.0215);
   13->SetBinContent(20,244.7235);
   13->SetBinContent(21,652.5959);
   13->SetBinContent(22,407.8725);
   13->SetBinContent(23,652.5959);
   13->SetBinContent(24,326.298);
   13->SetBinContent(25,734.1704);
   13->SetBinContent(26,652.5959);
   13->SetBinContent(27,652.5959);
   13->SetBinContent(28,652.5959);
   13->SetBinContent(29,897.3193);
   13->SetBinContent(30,815.7449);
   13->SetBinContent(31,326.298);
   13->SetBinContent(32,489.447);
   13->SetBinContent(33,407.8725);
   13->SetBinContent(34,326.298);
   13->SetBinContent(35,326.298);
   13->SetBinContent(36,815.7449);
   13->SetBinContent(37,1305.192);
   13->SetBinContent(38,1060.468);
   13->SetBinContent(39,1060.468);
   13->SetBinContent(40,1060.468);
   13->SetBinContent(41,1794.638);
   13->SetBinContent(42,1957.787);
   13->SetBinContent(43,2691.958);
   13->SetBinContent(44,2039.362);
   13->SetBinContent(45,2855.106);
   13->SetBinContent(46,3507.702);
   13->SetBinContent(47,4894.47);
   13->SetBinContent(48,5302.344);
   13->SetBinContent(49,5710.217);
   13->SetBinContent(50,1549.915);
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
   14->SetBinContent(1,64.47167);
   14->SetBinContent(2,668.8936);
   14->SetBinContent(3,1386.136);
   14->SetBinContent(4,1772.96);
   14->SetBinContent(5,1740.724);
   14->SetBinContent(6,1502.989);
   14->SetBinContent(7,1555.371);
   14->SetBinContent(8,1470.753);
   14->SetBinContent(9,1208.841);
   14->SetBinContent(10,1039.606);
   14->SetBinContent(11,1132.282);
   14->SetBinContent(12,995.2815);
   14->SetBinContent(13,963.0457);
   14->SetBinContent(14,934.8393);
   14->SetBinContent(15,826.0433);
   14->SetBinContent(16,697.1);
   14->SetBinContent(17,745.4537);
   14->SetBinContent(18,713.2179);
   14->SetBinContent(19,709.1884);
   14->SetBinContent(20,656.8052);
   14->SetBinContent(21,455.3312);
   14->SetBinContent(22,640.6873);
   14->SetBinContent(23,588.304);
   14->SetBinContent(24,640.6873);
   14->SetBinContent(25,592.3335);
   14->SetBinContent(26,689.041);
   14->SetBinContent(27,640.6873);
   14->SetBinContent(28,548.0092);
   14->SetBinContent(29,632.6283);
   14->SetBinContent(30,644.7167);
   14->SetBinContent(31,713.2179);
   14->SetBinContent(32,556.0682);
   14->SetBinContent(33,878.4266);
   14->SetBinContent(34,668.8936);
   14->SetBinContent(35,777.6896);
   14->SetBinContent(36,781.7191);
   14->SetBinContent(37,926.7803);
   14->SetBinContent(38,971.1046);
   14->SetBinContent(39,846.1907);
   14->SetBinContent(40,1096.017);
   14->SetBinContent(41,1039.606);
   14->SetBinContent(42,1192.724);
   14->SetBinContent(43,1249.135);
   14->SetBinContent(44,1490.901);
   14->SetBinContent(45,1744.754);
   14->SetBinContent(46,1635.96);
   14->SetBinContent(47,1611.783);
   14->SetBinContent(48,1305.547);
   14->SetBinContent(49,689.041);
   14->SetBinContent(50,44.32428);
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
   15->SetBinContent(1,50.21701);
   15->SetBinContent(2,297.4395);
   15->SetBinContent(3,270.3995);
   15->SetBinContent(4,204.731);
   15->SetBinContent(5,154.5139);
   15->SetBinContent(6,112.0226);
   15->SetBinContent(7,73.39409);
   15->SetBinContent(8,54.07985);
   15->SetBinContent(9,57.9427);
   15->SetBinContent(10,61.80555);
   15->SetBinContent(11,61.80555);
   15->SetBinContent(12,23.17708);
   15->SetBinContent(13,34.76562);
   15->SetBinContent(14,23.17708);
   15->SetBinContent(15,30.90277);
   15->SetBinContent(16,7.725694);
   15->SetBinContent(17,15.45139);
   15->SetBinContent(18,7.725694);
   15->SetBinContent(19,19.31424);
   15->SetBinContent(20,23.17708);
   15->SetBinContent(21,23.17708);
   15->SetBinContent(22,15.45139);
   15->SetBinContent(23,11.58854);
   15->SetBinContent(24,23.17708);
   15->SetBinContent(25,11.58854);
   15->SetBinContent(26,7.725694);
   15->SetBinContent(27,11.58854);
   15->SetBinContent(28,3.862847);
   15->SetBinContent(29,30.90277);
   15->SetBinContent(30,15.45139);
   15->SetBinContent(31,15.45139);
   15->SetBinContent(32,15.45139);
   15->SetBinContent(33,19.31424);
   15->SetBinContent(34,27.03993);
   15->SetBinContent(35,42.49131);
   15->SetBinContent(36,19.31424);
   15->SetBinContent(37,15.45139);
   15->SetBinContent(38,27.03993);
   15->SetBinContent(39,42.49131);
   15->SetBinContent(40,42.49131);
   15->SetBinContent(41,57.9427);
   15->SetBinContent(42,77.25694);
   15->SetBinContent(43,69.53124);
   15->SetBinContent(44,77.25694);
   15->SetBinContent(45,88.84547);
   15->SetBinContent(46,127.4739);
   15->SetBinContent(47,200.8682);
   15->SetBinContent(48,285.851);
   15->SetBinContent(49,320.6166);
   15->SetBinContent(50,65.6684);
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
   16->SetBinContent(1,486.97);
   16->SetBinContent(2,3371.782);
   16->SetBinContent(3,4407.345);
   16->SetBinContent(4,3914.22);
   16->SetBinContent(5,2675.243);
   16->SetBinContent(6,2219.103);
   16->SetBinContent(7,1467.075);
   16->SetBinContent(8,1368.448);
   16->SetBinContent(9,1047.911);
   16->SetBinContent(10,1029.418);
   16->SetBinContent(11,869.1494);
   16->SetBinContent(12,727.3732);
   16->SetBinContent(13,567.1044);
   16->SetBinContent(14,560.9402);
   16->SetBinContent(15,560.9402);
   16->SetBinContent(16,449.9849);
   16->SetBinContent(17,511.6267);
   16->SetBinContent(18,523.9551);
   16->SetBinContent(19,339.0295);
   16->SetBinContent(20,363.6863);
   16->SetBinContent(21,388.343);
   16->SetBinContent(22,369.8505);
   16->SetBinContent(23,283.5519);
   16->SetBinContent(24,468.4774);
   16->SetBinContent(25,345.1937);
   16->SetBinContent(26,363.6863);
   16->SetBinContent(27,376.0146);
   16->SetBinContent(28,363.6863);
   16->SetBinContent(29,412.9998);
   16->SetBinContent(30,425.3281);
   16->SetBinContent(31,320.537);
   16->SetBinContent(32,394.5072);
   16->SetBinContent(33,376.0146);
   16->SetBinContent(34,480.8058);
   16->SetBinContent(35,443.8207);
   16->SetBinContent(36,437.6565);
   16->SetBinContent(37,585.5969);
   16->SetBinContent(38,610.2537);
   16->SetBinContent(39,554.776);
   16->SetBinContent(40,838.3285);
   16->SetBinContent(41,1072.568);
   16->SetBinContent(42,1047.911);
   16->SetBinContent(43,1245.165);
   16->SetBinContent(44,1522.553);
   16->SetBinContent(45,2120.478);
   16->SetBinContent(46,3038.923);
   16->SetBinContent(47,3877.235);
   16->SetBinContent(48,4555.282);
   16->SetBinContent(49,3156.04);
   16->SetBinContent(50,493.1342);
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
   17->SetBinContent(1,890.1566);
   17->SetBinContent(2,4099.416);
   17->SetBinContent(3,4193.117);
   17->SetBinContent(4,2436.22);
   17->SetBinContent(5,1710.038);
   17->SetBinContent(6,1311.81);
   17->SetBinContent(7,960.4321);
   17->SetBinContent(8,819.881);
   17->SetBinContent(9,632.4797);
   17->SetBinContent(10,655.9048);
   17->SetBinContent(11,655.9048);
   17->SetBinContent(12,421.6531);
   17->SetBinContent(13,468.5034);
   17->SetBinContent(14,609.0545);
   17->SetBinContent(15,468.5034);
   17->SetBinContent(16,257.6769);
   17->SetBinContent(17,374.8028);
   17->SetBinContent(18,585.6293);
   17->SetBinContent(19,304.5273);
   17->SetBinContent(20,327.9524);
   17->SetBinContent(21,327.9524);
   17->SetBinContent(22,515.3538);
   17->SetBinContent(23,351.3776);
   17->SetBinContent(24,374.8028);
   17->SetBinContent(25,304.5273);
   17->SetBinContent(26,327.9524);
   17->SetBinContent(27,398.2279);
   17->SetBinContent(28,327.9524);
   17->SetBinContent(29,374.8028);
   17->SetBinContent(30,281.1021);
   17->SetBinContent(31,257.6769);
   17->SetBinContent(32,398.2279);
   17->SetBinContent(33,374.8028);
   17->SetBinContent(34,374.8028);
   17->SetBinContent(35,538.779);
   17->SetBinContent(36,445.0783);
   17->SetBinContent(37,421.6531);
   17->SetBinContent(38,445.0783);
   17->SetBinContent(39,585.6293);
   17->SetBinContent(40,562.2042);
   17->SetBinContent(41,632.4797);
   17->SetBinContent(42,632.4797);
   17->SetBinContent(43,749.6055);
   17->SetBinContent(44,1218.109);
   17->SetBinContent(45,1077.558);
   17->SetBinContent(46,2365.944);
   17->SetBinContent(47,2904.726);
   17->SetBinContent(48,4005.715);
   17->SetBinContent(49,4427.37);
   17->SetBinContent(50,866.7314);
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
