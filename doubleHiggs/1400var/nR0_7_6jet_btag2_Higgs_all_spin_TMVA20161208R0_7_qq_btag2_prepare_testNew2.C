{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:07:33 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.192443,1.31746,5.737452);
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
   
   TH1F *THStack_stack_34 = new TH1F("THStack_stack_34","",50,0,1);
   THStack_stack_34->SetMinimum(0.02599788);
   THStack_stack_34->SetMaximum(105453.4);
   THStack_stack_34->SetDirectory(0);
   THStack_stack_34->SetStats(0);
   THStack_stack_34->SetLineWidth(2);
   THStack_stack_34->SetMarkerSize(1.2);
   THStack_stack_34->GetXaxis()->SetTitle("cos*(#theta_{HH}) jets");
   THStack_stack_34->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_34->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_34->GetXaxis()->SetLabelColor(ci);
   THStack_stack_34->GetXaxis()->SetLabelFont(42);
   THStack_stack_34->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_34->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_34->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_34->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_34->GetXaxis()->SetTitleColor(ci);
   THStack_stack_34->GetXaxis()->SetTitleFont(42);
   THStack_stack_34->GetYaxis()->SetTitle("Number of events");
   THStack_stack_34->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_34->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_34->GetYaxis()->SetLabelColor(ci);
   THStack_stack_34->GetYaxis()->SetLabelFont(42);
   THStack_stack_34->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_34->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_34->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_34->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_34->GetYaxis()->SetTitleColor(ci);
   THStack_stack_34->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_34->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_34->GetZaxis()->SetLabelColor(ci);
   THStack_stack_34->GetZaxis()->SetLabelFont(42);
   THStack_stack_34->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_34->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_34->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_34->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_34->GetZaxis()->SetTitleColor(ci);
   THStack_stack_34->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_34);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,0.2503062);
   0->SetBinContent(2,0.2107842);
   0->SetBinContent(3,0.1976102);
   0->SetBinContent(4,0.2503062);
   0->SetBinContent(5,0.2408962);
   0->SetBinContent(6,0.2446602);
   0->SetBinContent(7,0.2823);
   0->SetBinContent(8,0.27289);
   0->SetBinContent(9,0.2314862);
   0->SetBinContent(10,0.2201942);
   0->SetBinContent(11,0.2672441);
   0->SetBinContent(12,0.2314862);
   0->SetBinContent(13,0.2258402);
   0->SetBinContent(14,0.2691261);
   0->SetBinContent(15,0.276654);
   0->SetBinContent(16,0.27289);
   0->SetBinContent(17,0.2446602);
   0->SetBinContent(18,0.2296042);
   0->SetBinContent(19,0.2484242);
   0->SetBinContent(20,0.2540702);
   0->SetBinContent(21,0.2296042);
   0->SetBinContent(22,0.3180577);
   0->SetBinContent(23,0.2691261);
   0->SetBinContent(24,0.2691261);
   0->SetBinContent(25,0.3011198);
   0->SetBinContent(26,0.2521882);
   0->SetBinContent(27,0.2898279);
   0->SetBinContent(28,0.3331136);
   0->SetBinContent(29,0.271008);
   0->SetBinContent(30,0.2879459);
   0->SetBinContent(31,0.3425235);
   0->SetBinContent(32,0.3199397);
   0->SetBinContent(33,0.3312316);
   0->SetBinContent(34,0.3462875);
   0->SetBinContent(35,0.3707533);
   0->SetBinContent(36,0.3444055);
   0->SetBinContent(37,0.4102751);
   0->SetBinContent(38,0.3519335);
   0->SetBinContent(39,0.3801633);
   0->SetBinContent(40,0.423449);
   0->SetBinContent(41,0.4328589);
   0->SetBinContent(42,0.4065111);
   0->SetBinContent(43,0.4723806);
   0->SetBinContent(44,0.5269587);
   0->SetBinContent(45,0.5175486);
   0->SetBinContent(46,0.4987285);
   0->SetBinContent(47,0.5777732);
   0->SetBinContent(48,0.5796552);
   0->SetBinContent(49,0.6379977);
   0->SetBinContent(50,0.6662279);
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
   1->SetBinContent(1,0.1307991);
   1->SetBinContent(2,0.142091);
   1->SetBinContent(3,0.1599699);
   1->SetBinContent(4,0.140209);
   1->SetBinContent(5,0.132681);
   1->SetBinContent(6,0.13174);
   1->SetBinContent(7,0.1307991);
   1->SetBinContent(8,0.1496189);
   1->SetBinContent(9,0.1580879);
   1->SetBinContent(10,0.1599699);
   1->SetBinContent(11,0.1552649);
   1->SetBinContent(12,0.1204481);
   1->SetBinContent(13,0.132681);
   1->SetBinContent(14,0.1590289);
   1->SetBinContent(15,0.1543239);
   1->SetBinContent(16,0.1703208);
   1->SetBinContent(17,0.14115);
   1->SetBinContent(18,0.144914);
   1->SetBinContent(19,0.143032);
   1->SetBinContent(20,0.1627928);
   1->SetBinContent(21,0.1693798);
   1->SetBinContent(22,0.1637338);
   1->SetBinContent(23,0.1750257);
   1->SetBinContent(24,0.1759667);
   1->SetBinContent(25,0.1881997);
   1->SetBinContent(26,0.1816127);
   1->SetBinContent(27,0.1872587);
   1->SetBinContent(28,0.1825537);
   1->SetBinContent(29,0.1712618);
   1->SetBinContent(30,0.1919636);
   1->SetBinContent(31,0.1919636);
   1->SetBinContent(32,0.2107835);
   1->SetBinContent(33,0.2013736);
   1->SetBinContent(34,0.2070195);
   1->SetBinContent(35,0.2314854);
   1->SetBinContent(36,0.2239574);
   1->SetBinContent(37,0.2493642);
   1->SetBinContent(38,0.2267804);
   1->SetBinContent(39,0.2747715);
   1->SetBinContent(40,0.2700664);
   1->SetBinContent(41,0.2860636);
   1->SetBinContent(42,0.2644204);
   1->SetBinContent(43,0.2964146);
   1->SetBinContent(44,0.3011197);
   1->SetBinContent(45,0.3265269);
   1->SetBinContent(46,0.332173);
   1->SetBinContent(47,0.3811054);
   1->SetBinContent(48,0.3848694);
   1->SetBinContent(49,0.4093356);
   1->SetBinContent(50,0.4309788);
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
   2->SetBinContent(1,0.3575802);
   2->SetBinContent(2,0.3556982);
   2->SetBinContent(3,0.3745183);
   2->SetBinContent(4,0.3604032);
   2->SetBinContent(5,0.3773414);
   2->SetBinContent(6,0.3302909);
   2->SetBinContent(7,0.3434651);
   2->SetBinContent(8,0.3745183);
   2->SetBinContent(9,0.3651083);
   2->SetBinContent(10,0.3632262);
   2->SetBinContent(11,0.3895745);
   2->SetBinContent(12,0.3961615);
   2->SetBinContent(13,0.3651083);
   2->SetBinContent(14,0.3754593);
   2->SetBinContent(15,0.3669903);
   2->SetBinContent(16,0.3745183);
   2->SetBinContent(17,0.3811054);
   2->SetBinContent(18,0.3971025);
   2->SetBinContent(19,0.4243918);
   2->SetBinContent(20,0.3905155);
   2->SetBinContent(21,0.4215688);
   2->SetBinContent(22,0.4159227);
   2->SetBinContent(23,0.4413299);
   2->SetBinContent(24,0.4676782);
   2->SetBinContent(25,0.448858);
   2->SetBinContent(26,0.4338019);
   2->SetBinContent(27,0.447917);
   2->SetBinContent(28,0.4328609);
   2->SetBinContent(29,0.4582681);
   2->SetBinContent(30,0.4940264);
   2->SetBinContent(31,0.4930854);
   2->SetBinContent(32,0.5147281);
   2->SetBinContent(33,0.5015544);
   2->SetBinContent(34,0.5354297);
   2->SetBinContent(35,0.5570722);
   2->SetBinContent(36,0.5683639);
   2->SetBinContent(37,0.5683639);
   2->SetBinContent(38,0.6342324);
   2->SetBinContent(39,0.6492881);
   2->SetBinContent(40,0.6248226);
   2->SetBinContent(41,0.6379963);
   2->SetBinContent(42,0.6925731);
   2->SetBinContent(43,0.7170385);
   2->SetBinContent(44,0.741504);
   2->SetBinContent(45,0.8403067);
   2->SetBinContent(46,0.7951397);
   2->SetBinContent(47,0.9344046);
   2->SetBinContent(48,0.9635749);
   2->SetBinContent(49,1.081202);
   2->SetBinContent(50,1.218594);
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
   3->SetBinContent(1,1.741399);
   3->SetBinContent(2,1.850663);
   3->SetBinContent(3,1.918954);
   3->SetBinContent(4,1.857492);
   3->SetBinContent(5,1.693596);
   3->SetBinContent(6,1.857492);
   3->SetBinContent(7,1.645793);
   3->SetBinContent(8,1.768715);
   3->SetBinContent(9,1.925783);
   3->SetBinContent(10,1.837005);
   3->SetBinContent(11,1.748228);
   3->SetBinContent(12,2.01456);
   3->SetBinContent(13,1.959928);
   3->SetBinContent(14,1.830176);
   3->SetBinContent(15,1.932612);
   3->SetBinContent(16,1.884808);
   3->SetBinContent(17,1.748228);
   3->SetBinContent(18,1.857492);
   3->SetBinContent(19,1.775544);
   3->SetBinContent(20,1.877979);
   3->SetBinContent(21,1.932612);
   3->SetBinContent(22,1.87115);
   3->SetBinContent(23,2.000902);
   3->SetBinContent(24,1.925783);
   3->SetBinContent(25,2.048705);
   3->SetBinContent(26,1.980415);
   3->SetBinContent(27,2.123824);
   3->SetBinContent(28,2.280892);
   3->SetBinContent(29,2.178456);
   3->SetBinContent(30,2.096508);
   3->SetBinContent(31,2.246747);
   3->SetBinContent(32,2.185285);
   3->SetBinContent(33,2.226259);
   3->SetBinContent(34,2.472104);
   3->SetBinContent(35,2.478933);
   3->SetBinContent(36,2.335524);
   3->SetBinContent(37,2.36284);
   3->SetBinContent(38,2.608685);
   3->SetBinContent(39,2.629172);
   3->SetBinContent(40,3.004768);
   3->SetBinContent(41,3.004768);
   3->SetBinContent(42,2.847701);
   3->SetBinContent(43,2.909162);
   3->SetBinContent(44,2.724778);
   3->SetBinContent(45,3.032084);
   3->SetBinContent(46,3.373535);
   3->SetBinContent(47,3.250613);
   3->SetBinContent(48,3.803764);
   3->SetBinContent(49,3.892541);
   3->SetBinContent(50,3.981318);
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
   4->SetBinContent(1,2.625222);
   4->SetBinContent(2,2.793573);
   4->SetBinContent(3,2.772529);
   4->SetBinContent(4,2.735702);
   4->SetBinContent(5,2.709398);
   4->SetBinContent(6,2.693615);
   4->SetBinContent(7,2.714658);
   4->SetBinContent(8,2.872487);
   4->SetBinContent(9,2.672571);
   4->SetBinContent(10,2.77779);
   4->SetBinContent(11,2.719919);
   4->SetBinContent(12,2.683093);
   4->SetBinContent(13,2.693615);
   4->SetBinContent(14,2.641005);
   4->SetBinContent(15,2.77779);
   4->SetBinContent(16,2.677832);
   4->SetBinContent(17,2.919835);
   4->SetBinContent(18,2.935618);
   4->SetBinContent(19,2.940879);
   4->SetBinContent(20,2.762007);
   4->SetBinContent(21,3.198665);
   4->SetBinContent(22,2.935618);
   4->SetBinContent(23,2.951401);
   4->SetBinContent(24,3.198665);
   4->SetBinContent(25,3.067142);
   4->SetBinContent(26,3.156578);
   4->SetBinContent(27,3.235492);
   4->SetBinContent(28,3.151317);
   4->SetBinContent(29,3.151317);
   4->SetBinContent(30,3.103968);
   4->SetBinContent(31,3.303884);
   4->SetBinContent(32,3.261797);
   4->SetBinContent(33,3.261797);
   4->SetBinContent(34,3.540627);
   4->SetBinContent(35,3.561671);
   4->SetBinContent(36,3.730021);
   4->SetBinContent(37,3.72476);
   4->SetBinContent(38,3.829979);
   4->SetBinContent(39,3.919415);
   4->SetBinContent(40,3.945719);
   4->SetBinContent(41,4.329769);
   4->SetBinContent(42,4.356073);
   4->SetBinContent(43,4.498119);
   4->SetBinContent(44,4.434988);
   4->SetBinContent(45,4.513902);
   4->SetBinContent(46,5.050518);
   4->SetBinContent(47,5.282);
   4->SetBinContent(48,5.634483);
   4->SetBinContent(49,5.923835);
   4->SetBinContent(50,6.371015);
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
   5->SetBinContent(1,8.296309);
   5->SetBinContent(2,7.96149);
   5->SetBinContent(3,8.283908);
   5->SetBinContent(4,7.949089);
   5->SetBinContent(5,8.296309);
   5->SetBinContent(6,7.949089);
   5->SetBinContent(7,8.060697);
   5->SetBinContent(8,8.841936);
   5->SetBinContent(9,8.358312);
   5->SetBinContent(10,7.688665);
   5->SetBinContent(11,8.011094);
   5->SetBinContent(12,8.32111);
   5->SetBinContent(13,8.296309);
   5->SetBinContent(14,9.139551);
   5->SetBinContent(15,8.494719);
   5->SetBinContent(16,8.953542);
   5->SetBinContent(17,8.606324);
   5->SetBinContent(18,8.655927);
   5->SetBinContent(19,8.643526);
   5->SetBinContent(20,8.680728);
   5->SetBinContent(21,8.928741);
   5->SetBinContent(22,9.350362);
   5->SetBinContent(23,9.325561);
   5->SetBinContent(24,8.606324);
   5->SetBinContent(25,8.705529);
   5->SetBinContent(26,8.71793);
   5->SetBinContent(27,9.697579);
   5->SetBinContent(28,9.70998);
   5->SetBinContent(29,9.759583);
   5->SetBinContent(30,9.871188);
   5->SetBinContent(31,9.858788);
   5->SetBinContent(32,10.57802);
   5->SetBinContent(33,10.50362);
   5->SetBinContent(34,11.22286);
   5->SetBinContent(35,10.92524);
   5->SetBinContent(36,10.1068);
   5->SetBinContent(37,10.97484);
   5->SetBinContent(38,11.83049);
   5->SetBinContent(39,12.0289);
   5->SetBinContent(40,12.0289);
   5->SetBinContent(41,12.53732);
   5->SetBinContent(42,12.56212);
   5->SetBinContent(43,13.61618);
   5->SetBinContent(44,12.84734);
   5->SetBinContent(45,13.57898);
   5->SetBinContent(46,14.37262);
   5->SetBinContent(47,15.72428);
   5->SetBinContent(48,15.43907);
   5->SetBinContent(49,17.24966);
   5->SetBinContent(50,17.29926);
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
   6->SetBinContent(1,149.9149);
   6->SetBinContent(2,149.3076);
   6->SetBinContent(3,148.5485);
   6->SetBinContent(4,150.7499);
   6->SetBinContent(5,156.1397);
   6->SetBinContent(6,153.6346);
   6->SetBinContent(7,155.2288);
   6->SetBinContent(8,153.8623);
   6->SetBinContent(9,150.7499);
   6->SetBinContent(10,158.6448);
   6->SetBinContent(11,153.3309);
   6->SetBinContent(12,158.7207);
   6->SetBinContent(13,160.3908);
   6->SetBinContent(14,161.074);
   6->SetBinContent(15,164.7178);
   6->SetBinContent(16,164.8696);
   6->SetBinContent(17,170.9426);
   6->SetBinContent(18,169.728);
   6->SetBinContent(19,179.293);
   6->SetBinContent(20,179.1412);
   6->SetBinContent(21,177.3193);
   6->SetBinContent(22,187.3397);
   6->SetBinContent(23,188.1748);
   6->SetBinContent(24,191.7427);
   6->SetBinContent(25,195.2346);
   6->SetBinContent(26,199.6376);
   6->SetBinContent(27,208.2916);
   6->SetBinContent(28,212.3149);
   6->SetBinContent(29,217.3252);
   6->SetBinContent(30,220.6653);
   6->SetBinContent(31,224.5368);
   6->SetBinContent(32,244.1982);
   6->SetBinContent(33,239.4916);
   6->SetBinContent(34,257.4826);
   6->SetBinContent(35,263.099);
   6->SetBinContent(36,266.6661);
   6->SetBinContent(37,276.381);
   6->SetBinContent(38,295.583);
   6->SetBinContent(39,310.5347);
   6->SetBinContent(40,328.4465);
   6->SetBinContent(41,334.3665);
   6->SetBinContent(42,354.7828);
   6->SetBinContent(43,376.793);
   6->SetBinContent(44,395.6155);
   6->SetBinContent(45,421.4965);
   6->SetBinContent(46,456.4092);
   6->SetBinContent(47,489.045);
   6->SetBinContent(48,533.6813);
   6->SetBinContent(49,577.1119);
   6->SetBinContent(50,671.3383);
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
   7->SetBinContent(1,89.04976);
   7->SetBinContent(2,89.09858);
   7->SetBinContent(3,86.02289);
   7->SetBinContent(4,91.97899);
   7->SetBinContent(5,86.12053);
   7->SetBinContent(6,88.65919);
   7->SetBinContent(7,88.26863);
   7->SetBinContent(8,90.61201);
   7->SetBinContent(9,86.80402);
   7->SetBinContent(10,89.48914);
   7->SetBinContent(11,88.85448);
   7->SetBinContent(12,91.10022);
   7->SetBinContent(13,87.2434);
   7->SetBinContent(14,88.12217);
   7->SetBinContent(15,92.17427);
   7->SetBinContent(16,95.20114);
   7->SetBinContent(17,97.20278);
   7->SetBinContent(18,91.58842);
   7->SetBinContent(19,95.49406);
   7->SetBinContent(20,96.12873);
   7->SetBinContent(21,95.98227);
   7->SetBinContent(22,92.41837);
   7->SetBinContent(23,95.20114);
   7->SetBinContent(24,98.81386);
   7->SetBinContent(25,100.2297);
   7->SetBinContent(26,97.93509);
   7->SetBinContent(27,104.9164);
   7->SetBinContent(28,101.1084);
   7->SetBinContent(29,103.0612);
   7->SetBinContent(30,102.9148);
   7->SetBinContent(31,105.8928);
   7->SetBinContent(32,106.9181);
   7->SetBinContent(33,114.2411);
   7->SetBinContent(34,118.6838);
   7->SetBinContent(35,110.2379);
   7->SetBinContent(36,120.2949);
   7->SetBinContent(37,118.7814);
   7->SetBinContent(38,125.9581);
   7->SetBinContent(39,127.5691);
   7->SetBinContent(40,132.0124);
   7->SetBinContent(41,141.8757);
   7->SetBinContent(42,137.9695);
   7->SetBinContent(43,144.3171);
   7->SetBinContent(44,153.155);
   7->SetBinContent(45,159.9421);
   7->SetBinContent(46,176.1042);
   7->SetBinContent(47,181.9636);
   7->SetBinContent(48,193.2429);
   7->SetBinContent(49,220.4402);
   7->SetBinContent(50,252.3737);
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
   8->SetBinContent(1,2.054542);
   8->SetBinContent(2,2.054542);
   8->SetBinContent(3,2.054542);
   8->SetBinContent(4,1.614283);
   8->SetBinContent(5,1.614283);
   8->SetBinContent(6,1.320777);
   8->SetBinContent(7,3.081813);
   8->SetBinContent(8,1.46753);
   8->SetBinContent(9,1.761036);
   8->SetBinContent(10,2.494801);
   8->SetBinContent(11,3.081813);
   8->SetBinContent(12,2.494801);
   8->SetBinContent(13,2.788307);
   8->SetBinContent(14,2.054542);
   8->SetBinContent(15,3.081813);
   8->SetBinContent(16,3.228566);
   8->SetBinContent(17,2.201295);
   8->SetBinContent(18,2.348048);
   8->SetBinContent(19,2.93506);
   8->SetBinContent(20,2.641554);
   8->SetBinContent(21,3.522073);
   8->SetBinContent(22,3.962332);
   8->SetBinContent(23,3.375319);
   8->SetBinContent(24,3.228566);
   8->SetBinContent(25,3.668826);
   8->SetBinContent(26,2.788307);
   8->SetBinContent(27,3.228566);
   8->SetBinContent(28,4.696096);
   8->SetBinContent(29,3.081813);
   8->SetBinContent(30,3.228566);
   8->SetBinContent(31,2.348048);
   8->SetBinContent(32,4.549343);
   8->SetBinContent(33,3.815579);
   8->SetBinContent(34,5.42986);
   8->SetBinContent(35,3.815579);
   8->SetBinContent(36,4.696096);
   8->SetBinContent(37,3.815579);
   8->SetBinContent(38,4.109085);
   8->SetBinContent(39,7.044141);
   8->SetBinContent(40,7.190894);
   8->SetBinContent(41,6.603883);
   8->SetBinContent(42,6.163624);
   8->SetBinContent(43,8.071411);
   8->SetBinContent(44,7.4844);
   8->SetBinContent(45,12.03375);
   8->SetBinContent(46,12.62076);
   8->SetBinContent(47,14.52856);
   8->SetBinContent(48,17.75713);
   8->SetBinContent(49,23.187);
   8->SetBinContent(50,53.27116);
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
   9->SetBinContent(1,135.6085);
   9->SetBinContent(2,134.9228);
   9->SetBinContent(3,138.5229);
   9->SetBinContent(4,150.866);
   9->SetBinContent(5,139.7229);
   9->SetBinContent(6,145.5516);
   9->SetBinContent(7,146.9231);
   9->SetBinContent(8,140.4086);
   9->SetBinContent(9,138.3514);
   9->SetBinContent(10,136.4657);
   9->SetBinContent(11,146.2373);
   9->SetBinContent(12,147.6088);
   9->SetBinContent(13,145.8945);
   9->SetBinContent(14,145.8945);
   9->SetBinContent(15,151.7232);
   9->SetBinContent(16,141.7801);
   9->SetBinContent(17,152.5803);
   9->SetBinContent(18,148.1231);
   9->SetBinContent(19,143.6658);
   9->SetBinContent(20,152.066);
   9->SetBinContent(21,168.1807);
   9->SetBinContent(22,169.5522);
   9->SetBinContent(23,168.695);
   9->SetBinContent(24,174.1808);
   9->SetBinContent(25,175.7237);
   9->SetBinContent(26,174.6951);
   9->SetBinContent(27,192.867);
   9->SetBinContent(28,198.8671);
   9->SetBinContent(29,198.3528);
   9->SetBinContent(30,199.5528);
   9->SetBinContent(31,211.5531);
   9->SetBinContent(32,220.639);
   9->SetBinContent(33,228.3535);
   9->SetBinContent(34,241.8967);
   9->SetBinContent(35,243.611);
   9->SetBinContent(36,265.0409);
   9->SetBinContent(37,264.0122);
   9->SetBinContent(38,284.0716);
   9->SetBinContent(39,320.9328);
   9->SetBinContent(40,340.3064);
   9->SetBinContent(41,370.8241);
   9->SetBinContent(42,405.9709);
   9->SetBinContent(43,458.7768);
   9->SetBinContent(44,509.1825);
   9->SetBinContent(45,597.3066);
   9->SetBinContent(46,719.8917);
   9->SetBinContent(47,956.6611);
   9->SetBinContent(48,1330.479);
   9->SetBinContent(49,1771.458);
   9->SetBinContent(50,1757.404);
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
   10->SetBinContent(1,800.8586);
   10->SetBinContent(2,804.3297);
   10->SetBinContent(3,794.0427);
   10->SetBinContent(4,790.8241);
   10->SetBinContent(5,788.7415);
   10->SetBinContent(6,797.3876);
   10->SetBinContent(7,801.5529);
   10->SetBinContent(8,797.7662);
   10->SetBinContent(9,809.2523);
   10->SetBinContent(10,797.8925);
   10->SetBinContent(11,804.2035);
   10->SetBinContent(12,815.0585);
   10->SetBinContent(13,818.782);
   10->SetBinContent(14,809.4417);
   10->SetBinContent(15,820.7384);
   10->SetBinContent(16,845.8563);
   10->SetBinContent(17,836.9578);
   10->SetBinContent(18,852.1674);
   10->SetBinContent(19,850.274);
   10->SetBinContent(20,861.0028);
   10->SetBinContent(21,859.1095);
   10->SetBinContent(22,862.6437);
   10->SetBinContent(23,881.3875);
   10->SetBinContent(24,896.1553);
   10->SetBinContent(25,907.5151);
   10->SetBinContent(26,910.9231);
   10->SetBinContent(27,937.8712);
   10->SetBinContent(28,945.5707);
   10->SetBinContent(29,965.198);
   10->SetBinContent(30,978.5774);
   10->SetBinContent(31,994.923);
   10->SetBinContent(32,1011.269);
   10->SetBinContent(33,1018.337);
   10->SetBinContent(34,1060.242);
   10->SetBinContent(35,1068.257);
   10->SetBinContent(36,1098.298);
   10->SetBinContent(37,1111.298);
   10->SetBinContent(38,1155.917);
   10->SetBinContent(39,1182.234);
   10->SetBinContent(40,1204.828);
   10->SetBinContent(41,1261.69);
   10->SetBinContent(42,1300.63);
   10->SetBinContent(43,1328.587);
   10->SetBinContent(44,1389.3);
   10->SetBinContent(45,1452.157);
   10->SetBinContent(46,1513.564);
   10->SetBinContent(47,1600.151);
   10->SetBinContent(48,1676.83);
   10->SetBinContent(49,1780.458);
   10->SetBinContent(50,1894.75);
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
   11->SetBinContent(1,117.0709);
   11->SetBinContent(2,160.9725);
   11->SetBinContent(3,29.26772);
   11->SetBinContent(4,117.0709);
   11->SetBinContent(5,131.7047);
   11->SetBinContent(6,117.0709);
   11->SetBinContent(7,131.7047);
   11->SetBinContent(8,87.80315);
   11->SetBinContent(9,87.80315);
   11->SetBinContent(10,146.3386);
   11->SetBinContent(11,117.0709);
   11->SetBinContent(12,117.0709);
   11->SetBinContent(13,131.7047);
   11->SetBinContent(14,43.90158);
   11->SetBinContent(15,73.1693);
   11->SetBinContent(16,131.7047);
   11->SetBinContent(17,87.80315);
   11->SetBinContent(18,131.7047);
   11->SetBinContent(19,73.1693);
   11->SetBinContent(20,117.0709);
   11->SetBinContent(21,87.80315);
   11->SetBinContent(22,146.3386);
   11->SetBinContent(23,131.7047);
   11->SetBinContent(24,102.437);
   11->SetBinContent(25,190.2402);
   11->SetBinContent(26,175.6063);
   11->SetBinContent(27,117.0709);
   11->SetBinContent(28,160.9725);
   11->SetBinContent(29,160.9725);
   11->SetBinContent(30,102.437);
   11->SetBinContent(31,278.0434);
   11->SetBinContent(32,146.3386);
   11->SetBinContent(33,160.9725);
   11->SetBinContent(34,146.3386);
   11->SetBinContent(35,234.1418);
   11->SetBinContent(36,219.5079);
   11->SetBinContent(37,175.6063);
   11->SetBinContent(38,219.5079);
   11->SetBinContent(39,321.9449);
   11->SetBinContent(40,204.8741);
   11->SetBinContent(41,292.6772);
   11->SetBinContent(42,365.8465);
   11->SetBinContent(43,336.5788);
   11->SetBinContent(44,351.2126);
   11->SetBinContent(45,468.2834);
   11->SetBinContent(46,512.185);
   11->SetBinContent(47,512.185);
   11->SetBinContent(48,702.425);
   11->SetBinContent(49,775.5943);
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
   12->SetBinContent(1,380.6086);
   12->SetBinContent(2,348.8912);
   12->SetBinContent(3,437.6999);
   12->SetBinContent(4,437.6999);
   12->SetBinContent(5,405.9825);
   12->SetBinContent(6,374.2651);
   12->SetBinContent(7,285.4565);
   12->SetBinContent(8,444.0433);
   12->SetBinContent(9,380.6086);
   12->SetBinContent(10,285.4565);
   12->SetBinContent(11,431.3564);
   12->SetBinContent(12,418.6694);
   12->SetBinContent(13,393.2955);
   12->SetBinContent(14,482.1042);
   12->SetBinContent(15,488.4477);
   12->SetBinContent(16,405.9825);
   12->SetBinContent(17,405.9825);
   12->SetBinContent(18,488.4477);
   12->SetBinContent(19,596.2872);
   12->SetBinContent(20,602.6307);
   12->SetBinContent(21,494.7911);
   12->SetBinContent(22,456.7303);
   12->SetBinContent(23,596.2872);
   12->SetBinContent(24,564.5696);
   12->SetBinContent(25,393.2955);
   12->SetBinContent(26,570.9131);
   12->SetBinContent(27,596.2872);
   12->SetBinContent(28,551.8826);
   12->SetBinContent(29,589.9437);
   12->SetBinContent(30,704.1268);
   12->SetBinContent(31,615.3177);
   12->SetBinContent(32,666.0657);
   12->SetBinContent(33,805.6229);
   12->SetBinContent(34,875.4014);
   12->SetBinContent(35,773.9053);
   12->SetBinContent(36,837.3404);
   12->SetBinContent(37,957.867);
   12->SetBinContent(38,1141.829);
   12->SetBinContent(39,1217.951);
   12->SetBinContent(40,1211.607);
   12->SetBinContent(41,1186.233);
   12->SetBinContent(42,1522.439);
   12->SetBinContent(43,1598.561);
   12->SetBinContent(44,2296.347);
   12->SetBinContent(45,2505.682);
   12->SetBinContent(46,2886.293);
   12->SetBinContent(47,3628.483);
   12->SetBinContent(48,4465.812);
   12->SetBinContent(49,6730.356);
   12->SetBinContent(50,12458.65);
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
   13->SetBinContent(2,1060.468);
   13->SetBinContent(3,571.0215);
   13->SetBinContent(4,1142.043);
   13->SetBinContent(5,1305.192);
   13->SetBinContent(6,815.7449);
   13->SetBinContent(7,571.0215);
   13->SetBinContent(8,1468.341);
   13->SetBinContent(9,652.5959);
   13->SetBinContent(10,978.8938);
   13->SetBinContent(11,652.5959);
   13->SetBinContent(12,652.5959);
   13->SetBinContent(13,1386.766);
   13->SetBinContent(14,1060.468);
   13->SetBinContent(15,815.7449);
   13->SetBinContent(16,978.8938);
   13->SetBinContent(17,734.1704);
   13->SetBinContent(18,489.447);
   13->SetBinContent(19,978.8938);
   13->SetBinContent(20,652.5959);
   13->SetBinContent(21,1223.617);
   13->SetBinContent(22,1223.617);
   13->SetBinContent(23,734.1704);
   13->SetBinContent(24,815.7449);
   13->SetBinContent(25,978.8938);
   13->SetBinContent(26,734.1704);
   13->SetBinContent(27,1386.766);
   13->SetBinContent(28,1142.043);
   13->SetBinContent(29,1142.043);
   13->SetBinContent(30,1223.617);
   13->SetBinContent(31,815.7449);
   13->SetBinContent(32,1957.787);
   13->SetBinContent(33,897.3193);
   13->SetBinContent(34,1957.787);
   13->SetBinContent(35,1386.766);
   13->SetBinContent(36,1223.617);
   13->SetBinContent(37,1631.49);
   13->SetBinContent(38,1468.341);
   13->SetBinContent(39,1142.043);
   13->SetBinContent(40,2528.809);
   13->SetBinContent(41,2120.936);
   13->SetBinContent(42,2610.383);
   13->SetBinContent(43,3507.702);
   13->SetBinContent(44,2610.383);
   13->SetBinContent(45,3507.702);
   13->SetBinContent(46,3997.149);
   13->SetBinContent(47,3752.426);
   13->SetBinContent(48,5139.194);
   13->SetBinContent(49,6607.539);
   13->SetBinContent(50,8891.627);
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
   14->SetBinContent(1,592.3335);
   14->SetBinContent(2,640.6873);
   14->SetBinContent(3,612.4809);
   14->SetBinContent(4,628.5988);
   14->SetBinContent(5,680.9821);
   14->SetBinContent(6,697.1);
   14->SetBinContent(7,608.4514);
   14->SetBinContent(8,672.9231);
   14->SetBinContent(9,616.5104);
   14->SetBinContent(10,588.304);
   14->SetBinContent(11,664.8641);
   14->SetBinContent(12,701.1295);
   14->SetBinContent(13,640.6873);
   14->SetBinContent(14,620.5399);
   14->SetBinContent(15,612.4809);
   14->SetBinContent(16,648.7462);
   14->SetBinContent(17,725.3063);
   14->SetBinContent(18,640.6873);
   14->SetBinContent(19,672.9231);
   14->SetBinContent(20,713.2179);
   14->SetBinContent(21,685.0115);
   14->SetBinContent(22,697.1);
   14->SetBinContent(23,664.8641);
   14->SetBinContent(24,693.0705);
   14->SetBinContent(25,652.7757);
   14->SetBinContent(26,842.1613);
   14->SetBinContent(27,693.0705);
   14->SetBinContent(28,822.0139);
   14->SetBinContent(29,813.9549);
   14->SetBinContent(30,725.3063);
   14->SetBinContent(31,769.6306);
   14->SetBinContent(32,809.9254);
   14->SetBinContent(33,854.2497);
   14->SetBinContent(34,902.6035);
   14->SetBinContent(35,926.7803);
   14->SetBinContent(36,846.1907);
   14->SetBinContent(37,1051.694);
   14->SetBinContent(38,1011.399);
   14->SetBinContent(39,991.252);
   14->SetBinContent(40,1144.37);
   14->SetBinContent(41,1228.988);
   14->SetBinContent(42,1067.812);
   14->SetBinContent(43,1253.165);
   14->SetBinContent(44,1329.724);
   14->SetBinContent(45,1370.018);
   14->SetBinContent(46,1672.224);
   14->SetBinContent(47,1768.93);
   14->SetBinContent(48,1962.343);
   14->SetBinContent(49,2502.298);
   14->SetBinContent(50,3344.472);
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
   15->SetBinContent(1,23.17708);
   15->SetBinContent(2,19.31424);
   15->SetBinContent(3,42.49131);
   15->SetBinContent(4,27.03993);
   15->SetBinContent(5,42.49131);
   15->SetBinContent(6,23.17708);
   15->SetBinContent(7,50.21701);
   15->SetBinContent(8,50.21701);
   15->SetBinContent(9,42.49131);
   15->SetBinContent(10,46.35416);
   15->SetBinContent(11,30.90277);
   15->SetBinContent(12,46.35416);
   15->SetBinContent(13,30.90277);
   15->SetBinContent(14,61.80555);
   15->SetBinContent(15,38.62847);
   15->SetBinContent(16,23.17708);
   15->SetBinContent(17,46.35416);
   15->SetBinContent(18,34.76562);
   15->SetBinContent(19,38.62847);
   15->SetBinContent(20,42.49131);
   15->SetBinContent(21,50.21701);
   15->SetBinContent(22,38.62847);
   15->SetBinContent(23,27.03993);
   15->SetBinContent(24,23.17708);
   15->SetBinContent(25,54.07985);
   15->SetBinContent(26,15.45139);
   15->SetBinContent(27,27.03993);
   15->SetBinContent(28,34.76562);
   15->SetBinContent(29,46.35416);
   15->SetBinContent(30,42.49131);
   15->SetBinContent(31,61.80555);
   15->SetBinContent(32,38.62847);
   15->SetBinContent(33,42.49131);
   15->SetBinContent(34,73.39409);
   15->SetBinContent(35,57.9427);
   15->SetBinContent(36,65.6684);
   15->SetBinContent(37,73.39409);
   15->SetBinContent(38,54.07985);
   15->SetBinContent(39,54.07985);
   15->SetBinContent(40,65.6684);
   15->SetBinContent(41,38.62847);
   15->SetBinContent(42,57.9427);
   15->SetBinContent(43,77.25694);
   15->SetBinContent(44,81.11978);
   15->SetBinContent(45,112.0226);
   15->SetBinContent(46,123.6111);
   15->SetBinContent(47,158.3768);
   15->SetBinContent(48,169.9653);
   15->SetBinContent(49,243.3596);
   15->SetBinContent(50,606.4678);
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
   16->SetBinContent(1,511.6267);
   16->SetBinContent(2,486.97);
   16->SetBinContent(3,554.776);
   16->SetBinContent(4,517.7909);
   16->SetBinContent(5,573.2686);
   16->SetBinContent(6,591.7611);
   16->SetBinContent(7,536.2834);
   16->SetBinContent(8,560.9402);
   16->SetBinContent(9,505.4625);
   16->SetBinContent(10,579.4327);
   16->SetBinContent(11,486.97);
   16->SetBinContent(12,554.776);
   16->SetBinContent(13,604.0895);
   16->SetBinContent(14,579.4327);
   16->SetBinContent(15,560.9402);
   16->SetBinContent(16,505.4625);
   16->SetBinContent(17,641.0746);
   16->SetBinContent(18,616.4178);
   16->SetBinContent(19,604.0895);
   16->SetBinContent(20,591.7611);
   16->SetBinContent(21,745.8657);
   16->SetBinContent(22,653.403);
   16->SetBinContent(23,560.9402);
   16->SetBinContent(24,567.1044);
   16->SetBinContent(25,795.1792);
   16->SetBinContent(26,764.3583);
   16->SetBinContent(27,665.7313);
   16->SetBinContent(28,702.7164);
   16->SetBinContent(29,610.2537);
   16->SetBinContent(30,745.8657);
   16->SetBinContent(31,838.3285);
   16->SetBinContent(32,856.821);
   16->SetBinContent(33,838.3285);
   16->SetBinContent(34,1023.254);
   16->SetBinContent(35,912.2987);
   16->SetBinContent(36,899.9703);
   16->SetBinContent(37,1121.881);
   16->SetBinContent(38,1128.045);
   16->SetBinContent(39,1226.672);
   16->SetBinContent(40,1442.419);
   16->SetBinContent(41,1202.015);
   16->SetBinContent(42,1485.568);
   16->SetBinContent(43,1781.449);
   16->SetBinContent(44,1812.27);
   16->SetBinContent(45,1929.389);
   16->SetBinContent(46,2028.016);
   16->SetBinContent(47,2662.915);
   16->SetBinContent(48,3482.735);
   16->SetBinContent(49,4734.04);
   16->SetBinContent(50,9048.884);
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
   17->SetBinContent(1,468.5034);
   17->SetBinContent(2,679.33);
   17->SetBinContent(3,538.779);
   17->SetBinContent(4,257.6769);
   17->SetBinContent(5,609.0545);
   17->SetBinContent(6,327.9524);
   17->SetBinContent(7,538.779);
   17->SetBinContent(8,491.9286);
   17->SetBinContent(9,281.1021);
   17->SetBinContent(10,632.4797);
   17->SetBinContent(11,445.0783);
   17->SetBinContent(12,445.0783);
   17->SetBinContent(13,351.3776);
   17->SetBinContent(14,468.5034);
   17->SetBinContent(15,398.2279);
   17->SetBinContent(16,655.9048);
   17->SetBinContent(17,585.6293);
   17->SetBinContent(18,679.33);
   17->SetBinContent(19,632.4797);
   17->SetBinContent(20,679.33);
   17->SetBinContent(21,398.2279);
   17->SetBinContent(22,913.5817);
   17->SetBinContent(23,609.0545);
   17->SetBinContent(24,773.0307);
   17->SetBinContent(25,562.2042);
   17->SetBinContent(26,538.779);
   17->SetBinContent(27,632.4797);
   17->SetBinContent(28,702.7552);
   17->SetBinContent(29,796.4559);
   17->SetBinContent(30,445.0783);
   17->SetBinContent(31,726.1804);
   17->SetBinContent(32,749.6055);
   17->SetBinContent(33,890.1566);
   17->SetBinContent(34,702.7552);
   17->SetBinContent(35,726.1804);
   17->SetBinContent(36,655.9048);
   17->SetBinContent(37,983.8572);
   17->SetBinContent(38,632.4797);
   17->SetBinContent(39,726.1804);
   17->SetBinContent(40,937.0069);
   17->SetBinContent(41,913.5817);
   17->SetBinContent(42,913.5817);
   17->SetBinContent(43,1077.558);
   17->SetBinContent(44,1100.983);
   17->SetBinContent(45,1382.085);
   17->SetBinContent(46,1686.612);
   17->SetBinContent(47,2037.99);
   17->SetBinContent(48,2342.519);
   17->SetBinContent(49,4286.818);
   17->SetBinContent(50,9042.135);
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
