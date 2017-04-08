{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 00:58:25 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-53.96825,-3.067637,263.4921,5.292326);
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
   
   TH1F *THStack_stack_9 = new TH1F("THStack_stack_9","",50,0,200);
   THStack_stack_9->SetMinimum(0.02736251);
   THStack_stack_9->SetMaximum(42027.03);
   THStack_stack_9->SetDirectory(0);
   THStack_stack_9->SetStats(0);
   THStack_stack_9->SetLineWidth(2);
   THStack_stack_9->SetMarkerSize(1.2);
   THStack_stack_9->GetXaxis()->SetTitle("P_{T,H#rightarrowWW*} / GeV");
   THStack_stack_9->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_9->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_9->GetXaxis()->SetLabelColor(ci);
   THStack_stack_9->GetXaxis()->SetLabelFont(42);
   THStack_stack_9->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_9->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_9->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_9->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_9->GetXaxis()->SetTitleColor(ci);
   THStack_stack_9->GetXaxis()->SetTitleFont(42);
   THStack_stack_9->GetYaxis()->SetTitle("Number of events");
   THStack_stack_9->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_9->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_9->GetYaxis()->SetLabelColor(ci);
   THStack_stack_9->GetYaxis()->SetLabelFont(42);
   THStack_stack_9->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_9->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_9->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_9->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_9->GetYaxis()->SetTitleColor(ci);
   THStack_stack_9->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_9->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_9->GetZaxis()->SetLabelColor(ci);
   THStack_stack_9->GetZaxis()->SetLabelFont(42);
   THStack_stack_9->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_9->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_9->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_9->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_9->GetZaxis()->SetTitleColor(ci);
   THStack_stack_9->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_9);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,200);
   0->SetBinContent(1,0.02823);
   0->SetBinContent(2,0.07904404);
   0->SetBinContent(3,0.1373861);
   0->SetBinContent(4,0.1693801);
   0->SetBinContent(5,0.2126662);
   0->SetBinContent(6,0.276654);
   0->SetBinContent(7,0.2935919);
   0->SetBinContent(8,0.3199397);
   0->SetBinContent(9,0.3124118);
   0->SetBinContent(10,0.3519335);
   0->SetBinContent(11,0.423449);
   0->SetBinContent(12,0.4554428);
   0->SetBinContent(13,0.423449);
   0->SetBinContent(14,0.4441508);
   0->SetBinContent(15,0.4648527);
   0->SetBinContent(16,0.4592067);
   0->SetBinContent(17,0.4535608);
   0->SetBinContent(18,0.4347409);
   0->SetBinContent(19,0.4799086);
   0->SetBinContent(20,0.4610887);
   0->SetBinContent(21,0.414039);
   0->SetBinContent(22,0.3971012);
   0->SetBinContent(23,0.3782813);
   0->SetBinContent(24,0.4083931);
   0->SetBinContent(25,0.3933372);
   0->SetBinContent(26,0.3594614);
   0->SetBinContent(27,0.3594614);
   0->SetBinContent(28,0.3763993);
   0->SetBinContent(29,0.3613434);
   0->SetBinContent(30,0.3048838);
   0->SetBinContent(31,0.274772);
   0->SetBinContent(32,0.2823);
   0->SetBinContent(33,0.2597161);
   0->SetBinContent(34,0.2691261);
   0->SetBinContent(35,0.1769081);
   0->SetBinContent(36,0.2314862);
   0->SetBinContent(37,0.1938462);
   0->SetBinContent(38,0.2145482);
   0->SetBinContent(39,0.2032562);
   0->SetBinContent(40,0.1674981);
   0->SetBinContent(41,0.1750261);
   0->SetBinContent(42,0.1637341);
   0->SetBinContent(43,0.1091561);
   0->SetBinContent(44,0.1279761);
   0->SetBinContent(45,0.1091561);
   0->SetBinContent(46,0.1279761);
   0->SetBinContent(47,0.1298581);
   0->SetBinContent(48,0.07528004);
   0->SetBinContent(49,0.1317401);
   0->SetBinContent(50,0.09221806);
   0->SetBinContent(51,2.730792);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,200);
   1->SetBinContent(1,0.04234502);
   1->SetBinContent(2,0.05457804);
   1->SetBinContent(3,0.1063331);
   1->SetBinContent(4,0.1533829);
   1->SetBinContent(5,0.1844357);
   1->SetBinContent(6,0.2107835);
   1->SetBinContent(7,0.2710074);
   1->SetBinContent(8,0.2804175);
   1->SetBinContent(9,0.2766535);
   1->SetBinContent(10,0.3265269);
   1->SetBinContent(11,0.3622852);
   1->SetBinContent(12,0.3434651);
   1->SetBinContent(13,0.3444061);
   1->SetBinContent(14,0.3500521);
   1->SetBinContent(15,0.3105298);
   1->SetBinContent(16,0.3444061);
   1->SetBinContent(17,0.3152348);
   1->SetBinContent(18,0.341583);
   1->SetBinContent(19,0.3284089);
   1->SetBinContent(20,0.3302909);
   1->SetBinContent(21,0.2653614);
   1->SetBinContent(22,0.2550103);
   1->SetBinContent(23,0.3048837);
   1->SetBinContent(24,0.2540693);
   1->SetBinContent(25,0.2211344);
   1->SetBinContent(26,0.2173705);
   1->SetBinContent(27,0.1769077);
   1->SetBinContent(28,0.1910226);
   1->SetBinContent(29,0.1891406);
   1->SetBinContent(30,0.140209);
   1->SetBinContent(31,0.1505599);
   1->SetBinContent(32,0.1703208);
   1->SetBinContent(33,0.1618518);
   1->SetBinContent(34,0.132681);
   1->SetBinContent(35,0.1204481);
   1->SetBinContent(36,0.1035101);
   1->SetBinContent(37,0.1195071);
   1->SetBinContent(38,0.09880508);
   1->SetBinContent(39,0.09127707);
   1->SetBinContent(40,0.08751307);
   1->SetBinContent(41,0.08092606);
   1->SetBinContent(42,0.06869305);
   1->SetBinContent(43,0.07528006);
   1->SetBinContent(44,0.07622106);
   1->SetBinContent(45,0.06775205);
   1->SetBinContent(46,0.05740104);
   1->SetBinContent(47,0.05363704);
   1->SetBinContent(48,0.05646004);
   1->SetBinContent(49,0.03952202);
   1->SetBinContent(50,0.04328603);
   1->SetBinContent(51,1.059559);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,200);
   2->SetBinContent(1,0.05646004);
   2->SetBinContent(2,0.1881997);
   2->SetBinContent(3,0.2578333);
   2->SetBinContent(4,0.3660493);
   2->SetBinContent(5,0.4761472);
   2->SetBinContent(6,0.522256);
   2->SetBinContent(7,0.5862425);
   2->SetBinContent(8,0.6662257);
   2->SetBinContent(9,0.7283303);
   2->SetBinContent(10,0.7800841);
   2->SetBinContent(11,0.8026676);
   2->SetBinContent(12,0.7857299);
   2->SetBinContent(13,0.8054905);
   2->SetBinContent(14,0.7358581);
   2->SetBinContent(15,0.8083134);
   2->SetBinContent(16,0.8007856);
   2->SetBinContent(17,0.7866709);
   2->SetBinContent(18,0.7443269);
   2->SetBinContent(19,0.7490318);
   2->SetBinContent(20,0.7320942);
   2->SetBinContent(21,0.6897501);
   2->SetBinContent(22,0.6746945);
   2->SetBinContent(23,0.6483471);
   2->SetBinContent(24,0.5975342);
   2->SetBinContent(25,0.6219997);
   2->SetBinContent(26,0.5438985);
   2->SetBinContent(27,0.5288428);
   2->SetBinContent(28,0.4592091);
   2->SetBinContent(29,0.451681);
   2->SetBinContent(30,0.4610911);
   2->SetBinContent(31,0.4225098);
   2->SetBinContent(32,0.3745183);
   2->SetBinContent(33,0.334996);
   2->SetBinContent(34,0.334996);
   2->SetBinContent(35,0.3284089);
   2->SetBinContent(36,0.3152348);
   2->SetBinContent(37,0.2832405);
   2->SetBinContent(38,0.2493642);
   2->SetBinContent(39,0.2540693);
   2->SetBinContent(40,0.2060785);
   2->SetBinContent(41,0.2079605);
   2->SetBinContent(42,0.2107835);
   2->SetBinContent(43,0.1985506);
   2->SetBinContent(44,0.1562059);
   2->SetBinContent(45,0.1486779);
   2->SetBinContent(46,0.1740848);
   2->SetBinContent(47,0.1740848);
   2->SetBinContent(48,0.143973);
   2->SetBinContent(49,0.1251531);
   2->SetBinContent(50,0.1166841);
   2->SetBinContent(51,3.379217);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,200);
   3->SetBinContent(1,0.2663309);
   3->SetBinContent(2,0.7511905);
   3->SetBinContent(3,1.03801);
   3->SetBinContent(4,1.45458);
   3->SetBinContent(5,1.939441);
   3->SetBinContent(6,2.308208);
   3->SetBinContent(7,2.356011);
   3->SetBinContent(8,2.71112);
   3->SetBinContent(9,2.895504);
   3->SetBinContent(10,3.195981);
   3->SetBinContent(11,3.045742);
   3->SetBinContent(12,3.400851);
   3->SetBinContent(13,2.970623);
   3->SetBinContent(14,3.516945);
   3->SetBinContent(15,3.489629);
   3->SetBinContent(16,3.277929);
   3->SetBinContent(17,3.100374);
   3->SetBinContent(18,3.325732);
   3->SetBinContent(19,2.997939);
   3->SetBinContent(20,3.066229);
   3->SetBinContent(21,2.895504);
   3->SetBinContent(22,2.765752);
   3->SetBinContent(23,2.868188);
   3->SetBinContent(24,2.847701);
   3->SetBinContent(25,2.526736);
   3->SetBinContent(26,2.328695);
   3->SetBinContent(27,2.192114);
   3->SetBinContent(28,2.356011);
   3->SetBinContent(29,2.36284);
   3->SetBinContent(30,2.110166);
   3->SetBinContent(31,1.905295);
   3->SetBinContent(32,1.939441);
   3->SetBinContent(33,1.618477);
   3->SetBinContent(34,1.652622);
   3->SetBinContent(35,1.52287);
   3->SetBinContent(36,1.345316);
   3->SetBinContent(37,1.434093);
   3->SetBinContent(38,1.399948);
   3->SetBinContent(39,1.304341);
   3->SetBinContent(40,1.222393);
   3->SetBinContent(41,1.154103);
   3->SetBinContent(42,1.147274);
   3->SetBinContent(43,1.003864);
   3->SetBinContent(44,1.181419);
   3->SetBinContent(45,0.8399678);
   3->SetBinContent(46,0.9014291);
   3->SetBinContent(47,0.8194808);
   3->SetBinContent(48,0.8194808);
   3->SetBinContent(49,0.6829003);
   3->SetBinContent(50,0.6555842);
   3->SetBinContent(51,13.62396);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,200);
   4->SetBinContent(1,0.8312384);
   4->SetBinContent(2,2.393741);
   4->SetBinContent(3,3.314406);
   4->SetBinContent(4,3.798413);
   4->SetBinContent(5,4.645425);
   4->SetBinContent(6,4.734861);
   4->SetBinContent(7,5.381958);
   4->SetBinContent(8,5.602917);
   4->SetBinContent(9,5.287261);
   4->SetBinContent(10,5.597656);
   4->SetBinContent(11,5.276739);
   4->SetBinContent(12,5.67657);
   4->SetBinContent(13,5.860703);
   4->SetBinContent(14,5.671309);
   4->SetBinContent(15,5.702875);
   4->SetBinContent(16,5.22939);
   4->SetBinContent(17,5.424045);
   4->SetBinContent(18,4.829558);
   4->SetBinContent(19,4.929516);
   4->SetBinContent(20,4.534945);
   4->SetBinContent(21,4.492858);
   4->SetBinContent(22,4.208767);
   4->SetBinContent(23,4.077243);
   4->SetBinContent(24,3.914154);
   4->SetBinContent(25,3.656368);
   4->SetBinContent(26,3.303884);
   4->SetBinContent(27,3.046098);
   4->SetBinContent(28,3.11449);
   4->SetBinContent(29,3.014532);
   4->SetBinContent(30,2.672571);
   4->SetBinContent(31,2.525265);
   4->SetBinContent(32,2.33061);
   4->SetBinContent(33,2.120172);
   4->SetBinContent(34,2.235913);
   4->SetBinContent(35,2.120172);
   4->SetBinContent(36,1.878168);
   4->SetBinContent(37,1.767689);
   4->SetBinContent(38,1.604599);
   4->SetBinContent(39,1.646687);
   4->SetBinContent(40,1.49938);
   4->SetBinContent(41,1.10481);
   4->SetBinContent(42,1.22055);
   4->SetBinContent(43,1.183724);
   4->SetBinContent(44,1.131114);
   4->SetBinContent(45,0.9838076);
   4->SetBinContent(46,1.067983);
   4->SetBinContent(47,0.9627635);
   4->SetBinContent(48,0.8628045);
   4->SetBinContent(49,0.7575844);
   4->SetBinContent(50,0.7207574);
   4->SetBinContent(51,12.79506);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,200);
   5->SetBinContent(1,1.165693);
   5->SetBinContent(2,3.36068);
   5->SetBinContent(3,5.506071);
   5->SetBinContent(4,7.093412);
   5->SetBinContent(5,9.474368);
   5->SetBinContent(6,11.16085);
   5->SetBinContent(7,12.45052);
   5->SetBinContent(8,13.19456);
   5->SetBinContent(9,14.79424);
   5->SetBinContent(10,15.37707);
   5->SetBinContent(11,15.74909);
   5->SetBinContent(12,16.18312);
   5->SetBinContent(13,16.46836);
   5->SetBinContent(14,17.20005);
   5->SetBinContent(15,17.06363);
   5->SetBinContent(16,16.28233);
   5->SetBinContent(17,15.68708);
   5->SetBinContent(18,15.55068);
   5->SetBinContent(19,15.81109);
   5->SetBinContent(20,15.46387);
   5->SetBinContent(21,14.70743);
   5->SetBinContent(22,13.76499);
   5->SetBinContent(23,12.58693);
   5->SetBinContent(24,12.45052);
   5->SetBinContent(25,11.69408);
   5->SetBinContent(26,11.68168);
   5->SetBinContent(27,11.16085);
   5->SetBinContent(28,10.87564);
   5->SetBinContent(29,9.536371);
   5->SetBinContent(30,9.31316);
   5->SetBinContent(31,8.767532);
   5->SetBinContent(32,8.023495);
   5->SetBinContent(33,8.073097);
   5->SetBinContent(34,7.29183);
   5->SetBinContent(35,6.684176);
   5->SetBinContent(36,6.572566);
   5->SetBinContent(37,5.865703);
   5->SetBinContent(38,5.617681);
   5->SetBinContent(39,5.568077);
   5->SetBinContent(40,5.010027);
   5->SetBinContent(41,4.600791);
   5->SetBinContent(42,4.203955);
   5->SetBinContent(43,3.931131);
   5->SetBinContent(44,3.546697);
   5->SetBinContent(45,3.273873);
   5->SetBinContent(46,3.24907);
   5->SetBinContent(47,2.839834);
   5->SetBinContent(48,2.827433);
   5->SetBinContent(49,2.864636);
   5->SetBinContent(50,2.56701);
   5->SetBinContent(51,41.25912);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,200);
   6->SetBinContent(1,44.10133);
   6->SetBinContent(2,123.2701);
   6->SetBinContent(3,196.3733);
   6->SetBinContent(4,276.8364);
   6->SetBinContent(5,347.1931);
   6->SetBinContent(6,385.0658);
   6->SetBinContent(7,439.9395);
   6->SetBinContent(8,479.5578);
   6->SetBinContent(9,505.1352);
   6->SetBinContent(10,520.9254);
   6->SetBinContent(11,537.7814);
   6->SetBinContent(12,529.733);
   6->SetBinContent(13,532.9979);
   6->SetBinContent(14,509.7649);
   6->SetBinContent(15,498.6839);
   6->SetBinContent(16,488.5896);
   6->SetBinContent(17,456.561);
   6->SetBinContent(18,436.1446);
   6->SetBinContent(19,403.2052);
   6->SetBinContent(20,393.7181);
   6->SetBinContent(21,358.5018);
   6->SetBinContent(22,330.3439);
   6->SetBinContent(23,310.3829);
   6->SetBinContent(24,286.8548);
   6->SetBinContent(25,263.0231);
   6->SetBinContent(26,256.42);
   6->SetBinContent(27,230.1544);
   6->SetBinContent(28,206.3938);
   6->SetBinContent(29,185.1383);
   6->SetBinContent(30,175.1937);
   6->SetBinContent(31,156.2156);
   6->SetBinContent(32,134.8083);
   6->SetBinContent(33,134.7324);
   6->SetBinContent(34,119.3989);
   6->SetBinContent(35,106.4192);
   6->SetBinContent(36,105.6602);
   6->SetBinContent(37,87.51891);
   6->SetBinContent(38,83.42004);
   6->SetBinContent(39,75.22232);
   6->SetBinContent(40,67.63184);
   6->SetBinContent(41,59.96544);
   6->SetBinContent(42,57.53649);
   6->SetBinContent(43,51.61591);
   6->SetBinContent(44,47.74476);
   6->SetBinContent(45,42.81095);
   6->SetBinContent(46,38.33256);
   6->SetBinContent(47,31.65293);
   6->SetBinContent(48,34.68913);
   6->SetBinContent(49,28.16122);
   6->SetBinContent(50,26.8708);
   6->SetBinContent(51,305.4496);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,200);
   7->SetBinContent(1,10.05734);
   7->SetBinContent(2,32.41798);
   7->SetBinContent(3,50.77449);
   7->SetBinContent(4,68.05695);
   7->SetBinContent(5,95.00586);
   7->SetBinContent(6,109.2614);
   7->SetBinContent(7,120.6854);
   7->SetBinContent(8,133.1355);
   7->SetBinContent(9,143.5847);
   7->SetBinContent(10,148.3698);
   7->SetBinContent(11,150.8601);
   7->SetBinContent(12,157.8913);
   7->SetBinContent(13,160.1862);
   7->SetBinContent(14,166.0456);
   7->SetBinContent(15,160.6745);
   7->SetBinContent(16,160.4792);
   7->SetBinContent(17,162.1394);
   7->SetBinContent(18,162.0905);
   7->SetBinContent(19,150.1765);
   7->SetBinContent(20,143.0476);
   7->SetBinContent(21,140.8991);
   7->SetBinContent(22,136.0163);
   7->SetBinContent(23,129.3757);
   7->SetBinContent(24,126.7392);
   7->SetBinContent(25,124.6399);
   7->SetBinContent(26,114.2411);
   7->SetBinContent(27,109.0662);
   7->SetBinContent(28,105.844);
   7->SetBinContent(29,98.08155);
   7->SetBinContent(30,99.44852);
   7->SetBinContent(31,92.66248);
   7->SetBinContent(32,87.2434);
   7->SetBinContent(33,82.06843);
   7->SetBinContent(34,81.14084);
   7->SetBinContent(35,75.62412);
   7->SetBinContent(36,71.13264);
   7->SetBinContent(37,72.35315);
   7->SetBinContent(38,66.20177);
   7->SetBinContent(39,63.9072);
   7->SetBinContent(40,56.09592);
   7->SetBinContent(41,58.29285);
   7->SetBinContent(42,57.07233);
   7->SetBinContent(43,53.55726);
   7->SetBinContent(44,52.38557);
   7->SetBinContent(45,45.50188);
   7->SetBinContent(46,45.06249);
   7->SetBinContent(47,39.05757);
   7->SetBinContent(48,40.76629);
   7->SetBinContent(49,38.71583);
   7->SetBinContent(50,38.03234);
   7->SetBinContent(51,857.696);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,200);
   8->SetBinContent(1,1.46753);
   8->SetBinContent(2,1.320777);
   8->SetBinContent(3,3.375319);
   8->SetBinContent(4,6.310377);
   8->SetBinContent(5,7.777905);
   8->SetBinContent(6,8.218164);
   8->SetBinContent(7,9.685698);
   8->SetBinContent(8,7.4844);
   8->SetBinContent(9,10.41946);
   8->SetBinContent(10,8.951931);
   8->SetBinContent(11,9.098684);
   8->SetBinContent(12,10.56622);
   8->SetBinContent(13,10.71297);
   8->SetBinContent(14,8.364918);
   8->SetBinContent(15,7.190894);
   8->SetBinContent(16,9.979204);
   8->SetBinContent(17,8.364918);
   8->SetBinContent(18,8.658424);
   8->SetBinContent(19,8.218164);
   8->SetBinContent(20,6.310377);
   8->SetBinContent(21,4.842849);
   8->SetBinContent(22,5.723366);
   8->SetBinContent(23,6.016871);
   8->SetBinContent(24,5.42986);
   8->SetBinContent(25,4.40259);
   8->SetBinContent(26,4.842849);
   8->SetBinContent(27,4.696096);
   8->SetBinContent(28,3.375319);
   8->SetBinContent(29,3.522073);
   8->SetBinContent(30,2.494801);
   8->SetBinContent(31,2.788307);
   8->SetBinContent(32,3.375319);
   8->SetBinContent(33,2.494801);
   8->SetBinContent(34,1.614283);
   8->SetBinContent(35,1.46753);
   8->SetBinContent(36,2.641554);
   8->SetBinContent(37,1.761036);
   8->SetBinContent(38,2.054542);
   8->SetBinContent(39,1.907789);
   8->SetBinContent(40,2.348048);
   8->SetBinContent(41,0.733765);
   8->SetBinContent(42,1.907789);
   8->SetBinContent(43,2.494801);
   8->SetBinContent(44,2.054542);
   8->SetBinContent(45,1.761036);
   8->SetBinContent(46,1.761036);
   8->SetBinContent(47,1.46753);
   8->SetBinContent(48,1.027271);
   8->SetBinContent(49,1.174024);
   8->SetBinContent(50,1.027271);
   8->SetBinContent(51,54.00491);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,200);
   9->SetBinContent(1,9.600589);
   9->SetBinContent(2,34.11631);
   9->SetBinContent(3,57.94649);
   9->SetBinContent(4,72.17602);
   9->SetBinContent(5,90.86299);
   9->SetBinContent(6,97.03484);
   9->SetBinContent(7,121.3793);
   9->SetBinContent(8,131.837);
   9->SetBinContent(9,146.0659);
   9->SetBinContent(10,156.1804);
   9->SetBinContent(11,175.3809);
   9->SetBinContent(12,171.6093);
   9->SetBinContent(13,176.238);
   9->SetBinContent(14,182.7525);
   9->SetBinContent(15,185.1525);
   9->SetBinContent(16,189.2669);
   9->SetBinContent(17,181.8953);
   9->SetBinContent(18,186.8668);
   9->SetBinContent(19,197.6671);
   9->SetBinContent(20,183.4382);
   9->SetBinContent(21,186.1811);
   9->SetBinContent(22,176.4095);
   9->SetBinContent(23,177.7809);
   9->SetBinContent(24,176.5809);
   9->SetBinContent(25,172.1236);
   9->SetBinContent(26,172.9808);
   9->SetBinContent(27,176.9238);
   9->SetBinContent(28,165.6092);
   9->SetBinContent(29,160.6377);
   9->SetBinContent(30,156.6947);
   9->SetBinContent(31,165.0949);
   9->SetBinContent(32,153.7804);
   9->SetBinContent(33,160.2948);
   9->SetBinContent(34,160.8091);
   9->SetBinContent(35,144.523);
   9->SetBinContent(36,143.323);
   9->SetBinContent(37,147.2659);
   9->SetBinContent(38,147.6088);
   9->SetBinContent(39,140.5801);
   9->SetBinContent(40,145.3802);
   9->SetBinContent(41,136.6371);
   9->SetBinContent(42,138.3514);
   9->SetBinContent(43,136.1228);
   9->SetBinContent(44,137.4943);
   9->SetBinContent(45,132.0084);
   9->SetBinContent(46,136.4657);
   9->SetBinContent(47,135.78);
   9->SetBinContent(48,133.3799);
   9->SetBinContent(49,129.6084);
   9->SetBinContent(50,123.7795);
   9->SetBinContent(51,8884.259);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,200);
   10->SetBinContent(1,140.4975);
   10->SetBinContent(2,410.1286);
   10->SetBinContent(3,662.3945);
   10->SetBinContent(4,908.0831);
   10->SetBinContent(5,1116.347);
   10->SetBinContent(6,1289.585);
   10->SetBinContent(7,1453.988);
   10->SetBinContent(8,1584.563);
   10->SetBinContent(9,1683.331);
   10->SetBinContent(10,1725.615);
   10->SetBinContent(11,1787.652);
   10->SetBinContent(12,1807.027);
   10->SetBinContent(13,1800.022);
   10->SetBinContent(14,1803.303);
   10->SetBinContent(15,1749.218);
   10->SetBinContent(16,1715.959);
   10->SetBinContent(17,1650.261);
   10->SetBinContent(18,1592.199);
   10->SetBinContent(19,1527.701);
   10->SetBinContent(20,1461.498);
   10->SetBinContent(21,1386.46);
   10->SetBinContent(22,1318.49);
   10->SetBinContent(23,1239.034);
   10->SetBinContent(24,1176.618);
   10->SetBinContent(25,1116.41);
   10->SetBinContent(26,1049.198);
   10->SetBinContent(27,1016.696);
   10->SetBinContent(28,940.6481);
   10->SetBinContent(29,881.5768);
   10->SetBinContent(30,838.1569);
   10->SetBinContent(31,788.9308);
   10->SetBinContent(32,727.1458);
   10->SetBinContent(33,696.9159);
   10->SetBinContent(34,654.6951);
   10->SetBinContent(35,617.5231);
   10->SetBinContent(36,578.0791);
   10->SetBinContent(37,542.8004);
   10->SetBinContent(38,516.1047);
   10->SetBinContent(39,469.4868);
   10->SetBinContent(40,440.5962);
   10->SetBinContent(41,415.4904);
   10->SetBinContent(42,388.303);
   10->SetBinContent(43,365.7204);
   10->SetBinContent(44,349.9505);
   10->SetBinContent(45,324.8447);
   10->SetBinContent(46,304.1545);
   10->SetBinContent(47,285.8614);
   10->SetBinContent(48,271.1007);
   10->SetBinContent(49,254.3841);
   10->SetBinContent(50,228.3889);
   10->SetBinContent(51,3490.855);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,200);
   11->SetBinContent(1,102.437);
   11->SetBinContent(2,380.4803);
   11->SetBinContent(3,570.7204);
   11->SetBinContent(4,321.9449);
   11->SetBinContent(5,643.8896);
   11->SetBinContent(6,614.6219);
   11->SetBinContent(7,599.9881);
   11->SetBinContent(8,643.8896);
   11->SetBinContent(9,585.3542);
   11->SetBinContent(10,629.2558);
   11->SetBinContent(11,380.4803);
   11->SetBinContent(12,482.9173);
   11->SetBinContent(13,409.748);
   11->SetBinContent(14,497.5511);
   11->SetBinContent(15,497.5511);
   11->SetBinContent(16,439.0157);
   11->SetBinContent(17,307.3111);
   11->SetBinContent(18,175.6063);
   11->SetBinContent(19,263.4095);
   11->SetBinContent(20,248.7757);
   11->SetBinContent(21,219.5079);
   11->SetBinContent(22,131.7047);
   11->SetBinContent(23,146.3386);
   11->SetBinContent(24,117.0709);
   11->SetBinContent(25,146.3386);
   11->SetBinContent(26,160.9725);
   11->SetBinContent(27,87.80315);
   11->SetBinContent(28,117.0709);
   11->SetBinContent(29,73.1693);
   11->SetBinContent(30,58.53543);
   11->SetBinContent(31,73.1693);
   11->SetBinContent(32,58.53543);
   11->SetBinContent(33,14.63386);
   11->SetBinContent(34,58.53543);
   11->SetBinContent(35,58.53543);
   11->SetBinContent(36,87.80315);
   11->SetBinContent(38,87.80315);
   11->SetBinContent(39,43.90158);
   11->SetBinContent(40,87.80315);
   11->SetBinContent(41,14.63386);
   11->SetBinContent(42,29.26772);
   11->SetBinContent(43,14.63386);
   11->SetBinContent(44,14.63386);
   11->SetBinContent(45,58.53543);
   11->SetBinContent(46,29.26772);
   11->SetBinContent(48,29.26772);
   11->SetBinContent(49,73.1693);
   11->SetBinContent(51,321.9449);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,200);
   12->SetBinContent(1,723.1573);
   12->SetBinContent(2,2448.591);
   12->SetBinContent(3,3266.903);
   12->SetBinContent(4,4180.365);
   12->SetBinContent(5,4979.616);
   12->SetBinContent(6,4922.526);
   12->SetBinContent(7,4713.199);
   12->SetBinContent(8,3983.719);
   12->SetBinContent(9,3311.308);
   12->SetBinContent(10,2740.392);
   12->SetBinContent(11,2277.316);
   12->SetBinContent(12,2004.545);
   12->SetBinContent(13,1636.622);
   12->SetBinContent(14,1205.264);
   12->SetBinContent(15,1179.89);
   12->SetBinContent(16,875.4014);
   12->SetBinContent(17,888.0884);
   12->SetBinContent(18,786.5923);
   12->SetBinContent(19,532.8521);
   12->SetBinContent(20,539.1956);
   12->SetBinContent(21,450.3868);
   12->SetBinContent(22,355.2347);
   12->SetBinContent(23,361.5782);
   12->SetBinContent(24,329.8608);
   12->SetBinContent(25,361.5782);
   12->SetBinContent(26,329.8608);
   12->SetBinContent(27,215.6782);
   12->SetBinContent(28,266.426);
   12->SetBinContent(29,215.6782);
   12->SetBinContent(30,139.5565);
   12->SetBinContent(31,183.9608);
   12->SetBinContent(32,133.213);
   12->SetBinContent(33,164.9304);
   12->SetBinContent(34,177.6174);
   12->SetBinContent(35,126.8695);
   12->SetBinContent(36,158.5869);
   12->SetBinContent(37,152.2435);
   12->SetBinContent(38,133.213);
   12->SetBinContent(39,126.8695);
   12->SetBinContent(40,139.5565);
   12->SetBinContent(41,95.15217);
   12->SetBinContent(42,126.8695);
   12->SetBinContent(43,133.213);
   12->SetBinContent(44,120.5261);
   12->SetBinContent(45,145.9);
   12->SetBinContent(46,120.5261);
   12->SetBinContent(47,145.9);
   12->SetBinContent(48,177.6174);
   12->SetBinContent(49,145.9);
   12->SetBinContent(50,152.2435);
   12->SetBinContent(51,9312.149);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,200);
   13->SetBinContent(1,1386.766);
   13->SetBinContent(2,2855.106);
   13->SetBinContent(3,4078.723);
   13->SetBinContent(4,5139.194);
   13->SetBinContent(5,6281.24);
   13->SetBinContent(6,6036.516);
   13->SetBinContent(7,5302.344);
   13->SetBinContent(8,4241.873);
   13->SetBinContent(9,6118.091);
   13->SetBinContent(10,4078.723);
   13->SetBinContent(11,3670.851);
   13->SetBinContent(12,3426.128);
   13->SetBinContent(13,3670.851);
   13->SetBinContent(14,2936.681);
   13->SetBinContent(15,2691.958);
   13->SetBinContent(16,2284.085);
   13->SetBinContent(17,2365.66);
   13->SetBinContent(18,2120.936);
   13->SetBinContent(19,978.8938);
   13->SetBinContent(20,2202.511);
   13->SetBinContent(21,1142.043);
   13->SetBinContent(22,897.3193);
   13->SetBinContent(23,1142.043);
   13->SetBinContent(24,897.3193);
   13->SetBinContent(25,652.5959);
   13->SetBinContent(26,571.0215);
   13->SetBinContent(27,326.298);
   13->SetBinContent(28,978.8938);
   13->SetBinContent(29,571.0215);
   13->SetBinContent(30,326.298);
   13->SetBinContent(31,163.149);
   13->SetBinContent(32,407.8725);
   13->SetBinContent(33,81.57449);
   13->SetBinContent(34,244.7235);
   13->SetBinContent(35,244.7235);
   13->SetBinContent(36,81.57449);
   13->SetBinContent(37,489.447);
   13->SetBinContent(38,407.8725);
   13->SetBinContent(39,163.149);
   13->SetBinContent(40,489.447);
   13->SetBinContent(41,163.149);
   13->SetBinContent(42,326.298);
   13->SetBinContent(43,244.7235);
   13->SetBinContent(44,163.149);
   13->SetBinContent(45,163.149);
   13->SetBinContent(46,326.298);
   13->SetBinContent(47,81.57449);
   13->SetBinContent(48,163.149);
   13->SetBinContent(49,81.57449);
   13->SetBinContent(50,163.149);
   13->SetBinContent(51,2447.234);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,200);
   14->SetBinContent(1,584.2745);
   14->SetBinContent(2,1579.548);
   14->SetBinContent(3,2131.581);
   14->SetBinContent(4,2167.846);
   14->SetBinContent(5,2131.581);
   14->SetBinContent(6,2304.851);
   14->SetBinContent(7,2183.965);
   14->SetBinContent(8,2143.669);
   14->SetBinContent(9,2147.699);
   14->SetBinContent(10,1998.607);
   14->SetBinContent(11,1869.666);
   14->SetBinContent(12,1785.048);
   14->SetBinContent(13,1494.93);
   14->SetBinContent(14,1680.283);
   14->SetBinContent(15,1523.136);
   14->SetBinContent(16,1386.136);
   14->SetBinContent(17,1378.077);
   14->SetBinContent(18,1180.635);
   14->SetBinContent(19,1124.223);
   14->SetBinContent(20,999.311);
   14->SetBinContent(21,1015.429);
   14->SetBinContent(22,838.1318);
   14->SetBinContent(23,858.2792);
   14->SetBinContent(24,668.8936);
   14->SetBinContent(25,753.5127);
   14->SetBinContent(26,580.2451);
   14->SetBinContent(27,556.0682);
   14->SetBinContent(28,503.685);
   14->SetBinContent(29,491.5965);
   14->SetBinContent(30,447.2722);
   14->SetBinContent(31,447.2722);
   14->SetBinContent(32,415.0364);
   14->SetBinContent(33,358.6237);
   14->SetBinContent(34,326.3878);
   14->SetBinContent(35,406.9774);
   14->SetBinContent(36,278.0341);
   14->SetBinContent(37,213.5624);
   14->SetBinContent(38,225.6509);
   14->SetBinContent(39,221.6214);
   14->SetBinContent(40,189.3855);
   14->SetBinContent(41,225.6509);
   14->SetBinContent(42,185.3561);
   14->SetBinContent(43,165.2087);
   14->SetBinContent(44,149.0907);
   14->SetBinContent(45,141.0318);
   14->SetBinContent(46,209.5329);
   14->SetBinContent(47,153.1202);
   14->SetBinContent(48,141.0318);
   14->SetBinContent(49,128.9433);
   14->SetBinContent(50,60.4422);
   14->SetBinContent(51,1926.078);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,200);
   15->SetBinContent(1,84.98263);
   15->SetBinContent(2,235.6339);
   15->SetBinContent(3,285.851);
   15->SetBinContent(4,200.8682);
   15->SetBinContent(5,216.3196);
   15->SetBinContent(6,177.691);
   15->SetBinContent(7,154.5139);
   15->SetBinContent(8,92.70832);
   15->SetBinContent(9,146.7882);
   15->SetBinContent(10,150.6511);
   15->SetBinContent(11,112.0226);
   15->SetBinContent(12,112.0226);
   15->SetBinContent(13,88.84547);
   15->SetBinContent(14,96.57117);
   15->SetBinContent(15,84.98263);
   15->SetBinContent(16,96.57117);
   15->SetBinContent(17,65.6684);
   15->SetBinContent(18,88.84547);
   15->SetBinContent(19,69.53124);
   15->SetBinContent(20,69.53124);
   15->SetBinContent(21,65.6684);
   15->SetBinContent(22,34.76562);
   15->SetBinContent(23,50.21701);
   15->SetBinContent(24,15.45139);
   15->SetBinContent(25,42.49131);
   15->SetBinContent(26,27.03993);
   15->SetBinContent(27,30.90277);
   15->SetBinContent(28,15.45139);
   15->SetBinContent(29,7.725694);
   15->SetBinContent(30,19.31424);
   15->SetBinContent(31,7.725694);
   15->SetBinContent(32,15.45139);
   15->SetBinContent(33,7.725694);
   15->SetBinContent(34,7.725694);
   15->SetBinContent(35,3.862847);
   15->SetBinContent(36,11.58854);
   15->SetBinContent(37,23.17708);
   15->SetBinContent(38,23.17708);
   15->SetBinContent(39,19.31424);
   15->SetBinContent(40,3.862847);
   15->SetBinContent(41,7.725694);
   15->SetBinContent(42,11.58854);
   15->SetBinContent(43,7.725694);
   15->SetBinContent(44,7.725694);
   15->SetBinContent(45,11.58854);
   15->SetBinContent(46,15.45139);
   15->SetBinContent(47,3.862847);
   15->SetBinContent(48,3.862847);
   15->SetBinContent(49,7.725694);
   15->SetBinContent(50,19.31424);
   15->SetBinContent(51,216.3196);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,200);
   16->SetBinContent(1,616.4178);
   16->SetBinContent(2,1565.702);
   16->SetBinContent(3,2564.29);
   16->SetBinContent(4,2878.657);
   16->SetBinContent(5,2946.462);
   16->SetBinContent(6,3106.728);
   16->SetBinContent(7,3106.728);
   16->SetBinContent(8,3008.103);
   16->SetBinContent(9,2755.376);
   16->SetBinContent(10,2595.11);
   16->SetBinContent(11,2373.204);
   16->SetBinContent(12,2286.907);
   16->SetBinContent(13,2077.329);
   16->SetBinContent(14,2058.837);
   16->SetBinContent(15,1775.285);
   16->SetBinContent(16,1855.419);
   16->SetBinContent(17,1467.075);
   16->SetBinContent(18,1547.21);
   16->SetBinContent(19,1399.269);
   16->SetBinContent(20,1245.165);
   16->SetBinContent(21,1140.374);
   16->SetBinContent(22,961.6122);
   16->SetBinContent(23,875.3136);
   16->SetBinContent(24,776.6866);
   16->SetBinContent(25,789.015);
   16->SetBinContent(26,696.5522);
   16->SetBinContent(27,604.0895);
   16->SetBinContent(28,530.1193);
   16->SetBinContent(29,622.582);
   16->SetBinContent(30,499.2983);
   16->SetBinContent(31,548.6118);
   16->SetBinContent(32,443.8207);
   16->SetBinContent(33,394.5072);
   16->SetBinContent(34,339.0295);
   16->SetBinContent(35,289.7161);
   16->SetBinContent(36,369.8505);
   16->SetBinContent(37,271.2235);
   16->SetBinContent(38,265.0593);
   16->SetBinContent(39,265.0593);
   16->SetBinContent(40,184.9251);
   16->SetBinContent(41,178.7609);
   16->SetBinContent(42,154.1042);
   16->SetBinContent(43,184.9251);
   16->SetBinContent(44,191.0893);
   16->SetBinContent(45,191.0893);
   16->SetBinContent(46,129.4476);
   16->SetBinContent(47,123.2834);
   16->SetBinContent(48,110.9551);
   16->SetBinContent(49,135.6117);
   16->SetBinContent(50,154.1042);
   16->SetBinContent(51,2780.032);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,200);
   17->SetBinContent(1,1194.684);
   17->SetBinContent(2,2975.002);
   17->SetBinContent(3,3443.508);
   17->SetBinContent(4,2295.668);
   17->SetBinContent(5,1499.211);
   17->SetBinContent(6,1311.81);
   17->SetBinContent(7,960.4321);
   17->SetBinContent(8,726.1804);
   17->SetBinContent(9,655.9048);
   17->SetBinContent(10,655.9048);
   17->SetBinContent(11,655.9048);
   17->SetBinContent(12,538.779);
   17->SetBinContent(13,538.779);
   17->SetBinContent(14,538.779);
   17->SetBinContent(15,304.5273);
   17->SetBinContent(16,327.9524);
   17->SetBinContent(17,398.2279);
   17->SetBinContent(18,187.4014);
   17->SetBinContent(19,304.5273);
   17->SetBinContent(20,491.9286);
   17->SetBinContent(21,281.1021);
   17->SetBinContent(22,210.8266);
   17->SetBinContent(23,93.70071);
   17->SetBinContent(24,281.1021);
   17->SetBinContent(25,234.2517);
   17->SetBinContent(26,163.9762);
   17->SetBinContent(27,163.9762);
   17->SetBinContent(28,210.8266);
   17->SetBinContent(29,234.2517);
   17->SetBinContent(30,304.5273);
   17->SetBinContent(31,234.2517);
   17->SetBinContent(32,234.2517);
   17->SetBinContent(33,210.8266);
   17->SetBinContent(34,234.2517);
   17->SetBinContent(35,257.6769);
   17->SetBinContent(36,304.5273);
   17->SetBinContent(37,210.8266);
   17->SetBinContent(38,140.5511);
   17->SetBinContent(39,187.4014);
   17->SetBinContent(40,257.6769);
   17->SetBinContent(41,257.6769);
   17->SetBinContent(42,163.9762);
   17->SetBinContent(43,351.3776);
   17->SetBinContent(44,257.6769);
   17->SetBinContent(45,234.2517);
   17->SetBinContent(46,163.9762);
   17->SetBinContent(47,163.9762);
   17->SetBinContent(48,327.9524);
   17->SetBinContent(49,234.2517);
   17->SetBinContent(50,374.8028);
   17->SetBinContent(51,22066.56);
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
