{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:45:00 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.8478413,-3.15306,4.13946,5.596474);
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
   THStack_stack_24->SetMinimum(0.02641536);
   THStack_stack_24->SetMaximum(78797.37);
   THStack_stack_24->SetDirectory(0);
   THStack_stack_24->SetStats(0);
   THStack_stack_24->SetLineWidth(2);
   THStack_stack_24->SetMarkerSize(1.2);
   THStack_stack_24->GetXaxis()->SetTitle("Acolinearity of HH jets");
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
   0->SetBinContent(1,1.108689);
   0->SetBinContent(2,2.9103);
   0->SetBinContent(3,4.137767);
   0->SetBinContent(4,4.850505);
   0->SetBinContent(5,4.761413);
   0->SetBinContent(6,4.662421);
   0->SetBinContent(7,4.09817);
   0->SetBinContent(8,4.068473);
   0->SetBinContent(9,3.464638);
   0->SetBinContent(10,3.038985);
   0->SetBinContent(11,3.128076);
   0->SetBinContent(12,3.038985);
   0->SetBinContent(13,2.573737);
   0->SetBinContent(14,2.346062);
   0->SetBinContent(15,2.45495);
   0->SetBinContent(16,1.960005);
   0->SetBinContent(17,1.861015);
   0->SetBinContent(18,2.0095);
   0->SetBinContent(19,1.544246);
   0->SetBinContent(20,1.672933);
   0->SetBinContent(21,1.583842);
   0->SetBinContent(22,1.306669);
   0->SetBinContent(23,1.643236);
   0->SetBinContent(24,1.435357);
   0->SetBinContent(25,1.534347);
   0->SetBinContent(26,1.217578);
   0->SetBinContent(27,1.158184);
   0->SetBinContent(28,1.078992);
   0->SetBinContent(29,1.019598);
   0->SetBinContent(30,0.8612136);
   0->SetBinContent(31,1.09879);
   0->SetBinContent(32,1.029497);
   0->SetBinContent(33,1.049295);
   0->SetBinContent(34,0.9305067);
   0->SetBinContent(35,0.9206077);
   0->SetBinContent(36,1.029497);
   0->SetBinContent(37,1.039396);
   0->SetBinContent(38,1.049295);
   0->SetBinContent(39,1.059194);
   0->SetBinContent(40,1.108689);
   0->SetBinContent(41,1.158184);
   0->SetBinContent(42,0.8909106);
   0->SetBinContent(43,0.8117185);
   0->SetBinContent(44,1.009699);
   0->SetBinContent(45,0.7424253);
   0->SetBinContent(46,0.8909106);
   0->SetBinContent(47,0.6830312);
   0->SetBinContent(48,0.6137381);
   0->SetBinContent(49,0.267273);
   0->SetBinContent(50,0.158384);
   0->SetEntries(9099);
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
   1->SetBinContent(1,0.8809203);
   1->SetBinContent(2,2.375519);
   1->SetBinContent(3,3.0288);
   1->SetBinContent(4,3.345541);
   1->SetBinContent(5,3.419778);
   1->SetBinContent(6,3.296051);
   1->SetBinContent(7,3.053545);
   1->SetBinContent(8,2.761549);
   1->SetBinContent(9,2.618025);
   1->SetBinContent(10,2.37057);
   1->SetBinContent(11,1.999388);
   1->SetBinContent(12,2.128065);
   1->SetBinContent(13,1.850919);
   1->SetBinContent(14,1.633164);
   1->SetBinContent(15,1.593572);
   1->SetBinContent(16,1.484695);
   1->SetBinContent(17,1.370869);
   1->SetBinContent(18,1.370869);
   1->SetBinContent(19,1.148165);
   1->SetBinContent(20,1.138267);
   1->SetBinContent(21,1.088777);
   1->SetBinContent(22,1.059083);
   1->SetBinContent(23,1.07393);
   1->SetBinContent(24,1.024441);
   1->SetBinContent(25,0.8462775);
   1->SetBinContent(26,0.9897977);
   1->SetBinContent(27,1.078879);
   1->SetBinContent(28,0.9056652);
   1->SetBinContent(29,0.8908182);
   1->SetBinContent(30,0.747298);
   1->SetBinContent(31,0.8660734);
   1->SetBinContent(32,0.7967877);
   1->SetBinContent(33,0.8363795);
   1->SetBinContent(34,0.8165836);
   1->SetBinContent(35,0.935359);
   1->SetBinContent(36,0.8066857);
   1->SetBinContent(37,0.7967877);
   1->SetBinContent(38,0.7918388);
   1->SetBinContent(39,0.8660734);
   1->SetBinContent(40,0.9056652);
   1->SetBinContent(41,0.8017367);
   1->SetBinContent(42,0.752247);
   1->SetBinContent(43,0.7868898);
   1->SetBinContent(44,0.7720429);
   1->SetBinContent(45,0.7868898);
   1->SetBinContent(46,0.4949003);
   1->SetBinContent(47,0.5295432);
   1->SetBinContent(48,0.3909712);
   1->SetBinContent(49,0.2326031);
   1->SetBinContent(50,0.09403102);
   1->SetEntries(13464);
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
   2->SetBinContent(1,1.727195);
   2->SetBinContent(2,4.038414);
   2->SetBinContent(3,5.716157);
   2->SetBinContent(4,6.324895);
   2->SetBinContent(5,6.488215);
   2->SetBinContent(6,6.423877);
   2->SetBinContent(7,6.067543);
   2->SetBinContent(8,5.671615);
   2->SetBinContent(9,5.211349);
   2->SetBinContent(10,4.582815);
   2->SetBinContent(11,4.241327);
   2->SetBinContent(12,4.157193);
   2->SetBinContent(13,3.701876);
   2->SetBinContent(14,3.365338);
   2->SetBinContent(15,3.434625);
   2->SetBinContent(16,2.96941);
   2->SetBinContent(17,2.776396);
   2->SetBinContent(18,2.741752);
   2->SetBinContent(19,2.434908);
   2->SetBinContent(20,2.37057);
   2->SetBinContent(21,2.380468);
   2->SetBinContent(22,2.26169);
   2->SetBinContent(23,1.959797);
   2->SetBinContent(24,2.162708);
   2->SetBinContent(25,1.974643);
   2->SetBinContent(26,2.029083);
   2->SetBinContent(27,1.870715);
   2->SetBinContent(28,1.935052);
   2->SetBinContent(29,1.648011);
   2->SetBinContent(30,1.836072);
   2->SetBinContent(31,1.84597);
   2->SetBinContent(32,1.707399);
   2->SetBinContent(33,1.722246);
   2->SetBinContent(34,1.549032);
   2->SetBinContent(35,1.732144);
   2->SetBinContent(36,1.761838);
   2->SetBinContent(37,1.766787);
   2->SetBinContent(38,1.925154);
   2->SetBinContent(39,1.79648);
   2->SetBinContent(40,1.722246);
   2->SetBinContent(41,1.870715);
   2->SetBinContent(42,1.75194);
   2->SetBinContent(43,1.756889);
   2->SetBinContent(44,1.657909);
   2->SetBinContent(45,1.60347);
   2->SetBinContent(46,1.415409);
   2->SetBinContent(47,1.024441);
   2->SetBinContent(48,0.8215326);
   2->SetBinContent(49,0.5790329);
   2->SetBinContent(50,0.2128071);
   2->SetEntries(27223);
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
   3->SetBinContent(1,4.085568);
   3->SetBinContent(2,10.33206);
   3->SetBinContent(3,13.9449);
   3->SetBinContent(4,16.95);
   3->SetBinContent(5,18.60452);
   3->SetBinContent(6,19.75256);
   3->SetBinContent(7,18.0305);
   3->SetBinContent(8,19.34737);
   3->SetBinContent(9,17.49025);
   3->SetBinContent(10,16.27468);
   3->SetBinContent(11,15.73444);
   3->SetBinContent(12,15.63314);
   3->SetBinContent(13,14.48514);
   3->SetBinContent(14,14.0462);
   3->SetBinContent(15,14.5189);
   3->SetBinContent(16,12.32419);
   3->SetBinContent(17,12.08784);
   3->SetBinContent(18,11.34501);
   3->SetBinContent(19,10.77101);
   3->SetBinContent(20,10.33206);
   3->SetBinContent(21,10.12947);
   3->SetBinContent(22,9.926886);
   3->SetBinContent(23,9.589237);
   3->SetBinContent(24,9.589237);
   3->SetBinContent(25,8.677587);
   3->SetBinContent(26,9.082765);
   3->SetBinContent(27,10.02818);
   3->SetBinContent(28,10.39959);
   3->SetBinContent(29,9.454178);
   3->SetBinContent(30,9.251589);
   3->SetBinContent(31,9.926886);
   3->SetBinContent(32,8.947705);
   3->SetBinContent(33,8.508762);
   3->SetBinContent(34,9.521708);
   3->SetBinContent(35,8.745116);
   3->SetBinContent(36,9.758061);
   3->SetBinContent(37,9.724297);
   3->SetBinContent(38,10.26453);
   3->SetBinContent(39,9.859356);
   3->SetBinContent(40,9.150294);
   3->SetBinContent(41,10.02818);
   3->SetBinContent(42,10.73724);
   3->SetBinContent(43,11.31124);
   3->SetBinContent(44,11.88525);
   3->SetBinContent(45,11.51383);
   3->SetBinContent(46,12.05407);
   3->SetBinContent(47,9.184059);
   3->SetBinContent(48,7.93476);
   3->SetBinContent(49,4.963454);
   3->SetBinContent(50,1.3506);
   3->SetEntries(16810);
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
   4->SetBinContent(1,2.755118);
   4->SetBinContent(2,8.790105);
   4->SetBinContent(3,12.94462);
   4->SetBinContent(4,15.32799);
   4->SetBinContent(5,16.31196);
   4->SetBinContent(6,17.7551);
   4->SetBinContent(7,16.48688);
   4->SetBinContent(8,17.27405);
   4->SetBinContent(9,16.33382);
   4->SetBinContent(10,16.0277);
   4->SetBinContent(11,15.34986);
   4->SetBinContent(12,13.84111);
   4->SetBinContent(13,13.73179);
   4->SetBinContent(14,13.64432);
   4->SetBinContent(15,13.51313);
   4->SetBinContent(16,12.94462);
   4->SetBinContent(17,11.69826);
   4->SetBinContent(18,12.22304);
   4->SetBinContent(19,11.74199);
   4->SetBinContent(20,11.32654);
   4->SetBinContent(21,11.4796);
   4->SetBinContent(22,11.08602);
   4->SetBinContent(23,11.12975);
   4->SetBinContent(24,10.49564);
   4->SetBinContent(25,10.36445);
   4->SetBinContent(26,10.38631);
   4->SetBinContent(27,11.17348);
   4->SetBinContent(28,10.93296);
   4->SetBinContent(29,10.29885);
   4->SetBinContent(30,9.927129);
   4->SetBinContent(31,10.86736);
   4->SetBinContent(32,10.7799);
   4->SetBinContent(33,10.80176);
   4->SetBinContent(34,11.23908);
   4->SetBinContent(35,11.37027);
   4->SetBinContent(36,12.17931);
   4->SetBinContent(37,11.76386);
   4->SetBinContent(38,11.98252);
   4->SetBinContent(39,11.78573);
   4->SetBinContent(40,13.03208);
   4->SetBinContent(41,13.05394);
   4->SetBinContent(42,13.16327);
   4->SetBinContent(43,12.33237);
   4->SetBinContent(44,12.26677);
   4->SetBinContent(45,12.4417);
   4->SetBinContent(46,11.69826);
   4->SetBinContent(47,9.358617);
   4->SetBinContent(48,7.65308);
   4->SetBinContent(49,5.204106);
   4->SetBinContent(50,1.749279);
   4->SetEntries(27075);
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
   5->SetBinContent(1,11.63082);
   5->SetBinContent(2,33.55468);
   5->SetBinContent(3,52.39692);
   5->SetBinContent(4,60.13154);
   5->SetBinContent(5,68.04036);
   5->SetBinContent(6,67.517);
   5->SetBinContent(7,73.15767);
   5->SetBinContent(8,67.57515);
   5->SetBinContent(9,66.64473);
   5->SetBinContent(10,65.1328);
   5->SetBinContent(11,62.86483);
   5->SetBinContent(12,59.49183);
   5->SetBinContent(13,59.08475);
   5->SetBinContent(14,55.76991);
   5->SetBinContent(15,54.08341);
   5->SetBinContent(16,53.15293);
   5->SetBinContent(17,47.27927);
   5->SetBinContent(18,47.16296);
   5->SetBinContent(19,46.81403);
   5->SetBinContent(20,44.31336);
   5->SetBinContent(21,45.36015);
   5->SetBinContent(22,44.31336);
   5->SetBinContent(23,44.83676);
   5->SetBinContent(24,40.88221);
   5->SetBinContent(25,40.41697);
   5->SetBinContent(26,39.54465);
   5->SetBinContent(27,41.75454);
   5->SetBinContent(28,38.78863);
   5->SetBinContent(29,41.34745);
   5->SetBinContent(30,36.86951);
   5->SetBinContent(31,36.92767);
   5->SetBinContent(32,39.19572);
   5->SetBinContent(33,40.47513);
   5->SetBinContent(34,40.24251);
   5->SetBinContent(35,39.19572);
   5->SetBinContent(36,39.31203);
   5->SetBinContent(37,43.73181);
   5->SetBinContent(38,40.41697);
   5->SetBinContent(39,39.42834);
   5->SetBinContent(40,35.82272);
   5->SetBinContent(41,39.6028);
   5->SetBinContent(42,40.00989);
   5->SetBinContent(43,43.20842);
   5->SetBinContent(44,37.8);
   5->SetBinContent(45,36.1135);
   5->SetBinContent(46,32.21711);
   5->SetBinContent(47,25.52949);
   5->SetBinContent(48,24.01751);
   5->SetBinContent(49,13.66621);
   5->SetBinContent(50,4.012629);
   5->SetEntries(37845);
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
   6->SetBinContent(1,1042.839);
   6->SetBinContent(2,2671.481);
   6->SetBinContent(3,3213.438);
   6->SetBinContent(4,3342.35);
   6->SetBinContent(5,3112.588);
   6->SetBinContent(6,2856.518);
   6->SetBinContent(7,2679.374);
   6->SetBinContent(8,2343.5);
   6->SetBinContent(9,2235.635);
   6->SetBinContent(10,1885.708);
   6->SetBinContent(11,1798.878);
   6->SetBinContent(12,1639.25);
   6->SetBinContent(13,1514.705);
   6->SetBinContent(14,1444.539);
   6->SetBinContent(15,1294.56);
   6->SetBinContent(16,1237.55);
   6->SetBinContent(17,1151.596);
   6->SetBinContent(18,1089.324);
   6->SetBinContent(19,1091.955);
   6->SetBinContent(20,1063.889);
   6->SetBinContent(21,967.4106);
   6->SetBinContent(22,923.5568);
   6->SetBinContent(23,936.713);
   6->SetBinContent(24,864.7928);
   6->SetBinContent(25,860.4074);
   6->SetBinContent(26,901.6299);
   6->SetBinContent(27,829.7098);
   6->SetBinContent(28,850.7596);
   6->SetBinContent(29,797.258);
   6->SetBinContent(30,875.3177);
   6->SetBinContent(31,856.022);
   6->SetBinContent(32,819.1849);
   6->SetBinContent(33,850.7596);
   6->SetBinContent(34,828.8327);
   6->SetBinContent(35,874.4406);
   6->SetBinContent(36,896.3675);
   6->SetBinContent(37,906.0153);
   6->SetBinContent(38,913.909);
   6->SetBinContent(39,885.8426);
   6->SetBinContent(40,965.6564);
   6->SetBinContent(41,956.8857);
   6->SetBinContent(42,949.8691);
   6->SetBinContent(43,951.6232);
   6->SetBinContent(44,889.3509);
   6->SetBinContent(45,846.3742);
   6->SetBinContent(46,741.1252);
   6->SetBinContent(47,642.0157);
   6->SetBinContent(48,442.0425);
   6->SetBinContent(49,289.4315);
   6->SetBinContent(50,99.98569);
   6->SetEntries(71971);
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
   7->SetBinContent(1,73.06281);
   7->SetBinContent(2,177.7567);
   7->SetBinContent(3,261.7352);
   7->SetBinContent(4,315.3267);
   7->SetBinContent(5,354.4154);
   7->SetBinContent(6,359.8022);
   7->SetBinContent(7,354.5535);
   7->SetBinContent(8,360.6309);
   7->SetBinContent(9,355.3823);
   7->SetBinContent(10,343.2275);
   7->SetBinContent(11,344.7468);
   7->SetBinContent(12,328.4484);
   7->SetBinContent(13,317.951);
   7->SetBinContent(14,327.0671);
   7->SetBinContent(15,302.2051);
   7->SetBinContent(16,295.299);
   7->SetBinContent(17,286.4591);
   7->SetBinContent(18,285.216);
   7->SetBinContent(19,268.7794);
   7->SetBinContent(20,272.2325);
   7->SetBinContent(21,272.5087);
   7->SetBinContent(22,244.3317);
   7->SetBinContent(23,240.8787);
   7->SetBinContent(24,256.9009);
   7->SetBinContent(25,237.1494);
   7->SetBinContent(26,244.0555);
   7->SetBinContent(27,236.0444);
   7->SetBinContent(28,233.6963);
   7->SetBinContent(29,240.0499);
   7->SetBinContent(30,232.5913);
   7->SetBinContent(31,225.2708);
   7->SetBinContent(32,214.221);
   7->SetBinContent(33,218.9172);
   7->SetBinContent(34,227.3427);
   7->SetBinContent(35,230.6576);
   7->SetBinContent(36,234.525);
   7->SetBinContent(37,239.2212);
   7->SetBinContent(38,238.2543);
   7->SetBinContent(39,236.8731);
   7->SetBinContent(40,237.5637);
   7->SetBinContent(41,257.5915);
   7->SetBinContent(42,258.5583);
   7->SetBinContent(43,251.9285);
   7->SetBinContent(44,253.4478);
   7->SetBinContent(45,256.3484);
   7->SetBinContent(46,263.6689);
   7->SetBinContent(47,229.6908);
   7->SetBinContent(48,183.8341);
   7->SetBinContent(49,122.0936);
   7->SetBinContent(50,40.88202);
   7->SetEntries(92988);
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
   8->SetBinContent(1,124.7239);
   8->SetBinContent(2,120.1045);
   8->SetBinContent(3,109.9418);
   8->SetBinContent(4,127.4956);
   8->SetBinContent(5,92.38809);
   8->SetBinContent(6,83.14928);
   8->SetBinContent(7,95.15974);
   8->SetBinContent(8,77.60599);
   8->SetBinContent(9,64.67165);
   8->SetBinContent(10,60.97612);
   8->SetBinContent(11,53.58507);
   8->SetBinContent(12,52.66119);
   8->SetBinContent(13,49.88954);
   8->SetBinContent(14,61.9);
   8->SetBinContent(15,36.03132);
   8->SetBinContent(16,40.65073);
   8->SetBinContent(17,24.94475);
   8->SetBinContent(18,35.10744);
   8->SetBinContent(19,39.72684);
   8->SetBinContent(20,28.64027);
   8->SetBinContent(21,32.33579);
   8->SetBinContent(22,35.10744);
   8->SetBinContent(23,22.17311);
   8->SetBinContent(24,33.25967);
   8->SetBinContent(25,31.41191);
   8->SetBinContent(26,23.09699);
   8->SetBinContent(27,36.03132);
   8->SetBinContent(28,24.94475);
   8->SetBinContent(29,28.64027);
   8->SetBinContent(30,24.02087);
   8->SetBinContent(31,24.02087);
   8->SetBinContent(32,15.70596);
   8->SetBinContent(33,30.48803);
   8->SetBinContent(34,25.86863);
   8->SetBinContent(35,22.17311);
   8->SetBinContent(36,27.71639);
   8->SetBinContent(37,23.09699);
   8->SetBinContent(38,21.24924);
   8->SetBinContent(39,22.17311);
   8->SetBinContent(40,31.41191);
   8->SetBinContent(41,15.70596);
   8->SetBinContent(42,19.40148);
   8->SetBinContent(43,18.4776);
   8->SetBinContent(44,18.4776);
   8->SetBinContent(45,21.24924);
   8->SetBinContent(46,22.17311);
   8->SetBinContent(47,13.8582);
   8->SetBinContent(48,11.08656);
   8->SetBinContent(49,3.69552);
   8->SetBinContent(50,1.84776);
   8->SetEntries(2230);
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
   9->SetBinContent(1,716.9399);
   9->SetBinContent(2,965.2999);
   9->SetBinContent(3,748.5894);
   9->SetBinContent(4,630.3436);
   9->SetBinContent(5,599.1338);
   9->SetBinContent(6,516.0541);
   9->SetBinContent(7,465.9425);
   9->SetBinContent(8,441.7659);
   9->SetBinContent(9,413.1935);
   9->SetBinContent(10,370.9943);
   9->SetBinContent(11,349.0155);
   9->SetBinContent(12,331.8721);
   9->SetBinContent(13,305.4976);
   9->SetBinContent(14,334.0699);
   9->SetBinContent(15,298.9039);
   9->SetBinContent(16,295.8269);
   9->SetBinContent(17,284.8375);
   9->SetBinContent(18,276.9252);
   9->SetBinContent(19,272.969);
   9->SetBinContent(20,278.2439);
   9->SetBinContent(21,255.8256);
   9->SetBinContent(22,245.2761);
   9->SetBinContent(23,271.6503);
   9->SetBinContent(24,228.1333);
   9->SetBinContent(25,249.6717);
   9->SetBinContent(26,240.0014);
   9->SetBinContent(27,231.2102);
   9->SetBinContent(28,237.364);
   9->SetBinContent(29,226.8146);
   9->SetBinContent(30,232.5289);
   9->SetBinContent(31,221.9794);
   9->SetBinContent(32,251.8695);
   9->SetBinContent(33,240.0014);
   9->SetBinContent(34,227.6937);
   9->SetBinContent(35,230.3311);
   9->SetBinContent(36,246.1552);
   9->SetBinContent(37,229.452);
   9->SetBinContent(38,226.375);
   9->SetBinContent(39,224.1772);
   9->SetBinContent(40,228.5728);
   9->SetBinContent(41,232.5289);
   9->SetBinContent(42,240.8805);
   9->SetBinContent(43,220.2212);
   9->SetBinContent(44,225.0564);
   9->SetBinContent(45,217.5838);
   9->SetBinContent(46,225.4959);
   9->SetBinContent(47,163.0784);
   9->SetBinContent(48,162.1993);
   9->SetBinContent(49,109.0122);
   9->SetBinContent(50,30.3299);
   9->SetEntries(35189);
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
   10->SetBinContent(1,959.5926);
   10->SetBinContent(2,2538.638);
   10->SetBinContent(3,3454.067);
   10->SetBinContent(4,4022.606);
   10->SetBinContent(5,4205.426);
   10->SetBinContent(6,4279.344);
   10->SetBinContent(7,4210.955);
   10->SetBinContent(8,4075.033);
   10->SetBinContent(9,3852.802);
   10->SetBinContent(10,3740.958);
   10->SetBinContent(11,3536.203);
   10->SetBinContent(12,3383.583);
   10->SetBinContent(13,3251.351);
   10->SetBinContent(14,3166.011);
   10->SetBinContent(15,2955.139);
   10->SetBinContent(16,2950.479);
   10->SetBinContent(17,2824.655);
   10->SetBinContent(18,2757.665);
   10->SetBinContent(19,2642.618);
   10->SetBinContent(20,2638.54);
   10->SetBinContent(21,2591.647);
   10->SetBinContent(22,2496.405);
   10->SetBinContent(23,2540.094);
   10->SetBinContent(24,2444.852);
   10->SetBinContent(25,2441.066);
   10->SetBinContent(26,2461.163);
   10->SetBinContent(27,2502.522);
   10->SetBinContent(28,2530.483);
   10->SetBinContent(29,2503.396);
   10->SetBinContent(30,2505.143);
   10->SetBinContent(31,2601.55);
   10->SetBinContent(32,2593.977);
   10->SetBinContent(33,2684.559);
   10->SetBinContent(34,2739.316);
   10->SetBinContent(35,2855.82);
   10->SetBinContent(36,2940.285);
   10->SetBinContent(37,3042.809);
   10->SetBinContent(38,3163.39);
   10->SetBinContent(39,3323);
   10->SetBinContent(40,3449.116);
   10->SetBinContent(41,3579.309);
   10->SetBinContent(42,3800.084);
   10->SetBinContent(43,3916.005);
   10->SetBinContent(44,3979.209);
   10->SetBinContent(45,4014.451);
   10->SetBinContent(46,3884.258);
   10->SetBinContent(47,3497.756);
   10->SetBinContent(48,2829.606);
   10->SetBinContent(49,1782.93);
   10->SetBinContent(50,620.126);
   10->SetEntries(521191);
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
   11->SetBinContent(1,1342.917);
   11->SetBinContent(2,1678.646);
   11->SetBinContent(3,1892.292);
   11->SetBinContent(4,1770.209);
   11->SetBinContent(5,1403.958);
   11->SetBinContent(6,1037.708);
   11->SetBinContent(7,915.6248);
   11->SetBinContent(8,671.4583);
   11->SetBinContent(9,824.0623);
   11->SetBinContent(10,824.0623);
   11->SetBinContent(11,885.1039);
   11->SetBinContent(12,610.4166);
   11->SetBinContent(13,396.7708);
   11->SetBinContent(14,457.8125);
   11->SetBinContent(15,915.6248);
   11->SetBinContent(16,579.8958);
   11->SetBinContent(17,335.7292);
   11->SetBinContent(18,518.8542);
   11->SetBinContent(19,457.8125);
   11->SetBinContent(20,335.7292);
   11->SetBinContent(21,274.6875);
   11->SetBinContent(22,396.7708);
   11->SetBinContent(23,366.25);
   11->SetBinContent(24,396.7708);
   11->SetBinContent(25,335.7292);
   11->SetBinContent(26,579.8958);
   11->SetBinContent(27,335.7292);
   11->SetBinContent(28,457.8125);
   11->SetBinContent(29,274.6875);
   11->SetBinContent(30,457.8125);
   11->SetBinContent(31,610.4166);
   11->SetBinContent(32,640.9374);
   11->SetBinContent(33,457.8125);
   11->SetBinContent(34,488.3334);
   11->SetBinContent(35,457.8125);
   11->SetBinContent(36,518.8542);
   11->SetBinContent(37,701.9791);
   11->SetBinContent(38,457.8125);
   11->SetBinContent(39,701.9791);
   11->SetBinContent(40,457.8125);
   11->SetBinContent(41,885.1039);
   11->SetBinContent(42,701.9791);
   11->SetBinContent(43,671.4583);
   11->SetBinContent(44,518.8542);
   11->SetBinContent(45,854.5831);
   11->SetBinContent(46,488.3334);
   11->SetBinContent(47,335.7292);
   11->SetBinContent(48,213.6458);
   11->SetBinContent(49,213.6458);
   11->SetBinContent(50,30.52083);
   11->SetEntries(1053);
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
   12->SetBinContent(1,1093.965);
   12->SetBinContent(2,1083.942);
   12->SetBinContent(3,938.6058);
   12->SetBinContent(4,836.2261);
   12->SetBinContent(5,696.6173);
   12->SetBinContent(6,602.8289);
   12->SetBinContent(7,536.2462);
   12->SetBinContent(8,464.652);
   12->SetBinContent(9,410.9563);
   12->SetBinContent(10,383.0345);
   12->SetBinContent(11,342.2258);
   12->SetBinContent(12,344.3737);
   12->SetBinContent(13,304.2809);
   12->SetBinContent(14,270.6316);
   12->SetBinContent(15,245.5734);
   12->SetBinContent(16,248.4372);
   12->SetBinContent(17,236.2659);
   12->SetBinContent(18,234.834);
   12->SetBinContent(19,213.3553);
   12->SetBinContent(20,232.6861);
   12->SetBinContent(21,217.651);
   12->SetBinContent(22,220.5149);
   12->SetBinContent(23,186.1489);
   12->SetBinContent(24,226.2425);
   12->SetBinContent(25,192.5925);
   12->SetBinContent(26,187.5808);
   12->SetBinContent(27,214.7872);
   12->SetBinContent(28,204.0478);
   12->SetBinContent(29,185.4329);
   12->SetBinContent(30,199.7521);
   12->SetBinContent(31,197.6042);
   12->SetBinContent(32,191.8766);
   12->SetBinContent(33,181.8531);
   12->SetBinContent(34,197.6042);
   12->SetBinContent(35,224.8106);
   12->SetBinContent(36,194.0244);
   12->SetBinContent(37,218.367);
   12->SetBinContent(38,204.0478);
   12->SetBinContent(39,232.6861);
   12->SetBinContent(40,202.6159);
   12->SetBinContent(41,213.3553);
   12->SetBinContent(42,234.1181);
   12->SetBinContent(43,234.1181);
   12->SetBinContent(44,226.9585);
   12->SetBinContent(45,214.7872);
   12->SetBinContent(46,189.7287);
   12->SetBinContent(47,191.1606);
   12->SetBinContent(48,144.6234);
   12->SetBinContent(49,103.0978);
   12->SetBinContent(50,28.63823);
   12->SetEntries(21762);
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
   13->SetBinContent(1,19556.16);
   13->SetBinContent(2,24965.38);
   13->SetBinContent(3,21792.66);
   13->SetBinContent(4,18307.88);
   13->SetBinContent(5,15811.32);
   13->SetBinContent(6,12950.73);
   13->SetBinContent(7,11546.44);
   13->SetBinContent(8,8789.874);
   13->SetBinContent(9,8581.831);
   13->SetBinContent(10,8477.81);
   13->SetBinContent(11,8009.711);
   13->SetBinContent(12,8425.799);
   13->SetBinContent(13,7333.565);
   13->SetBinContent(14,5721.217);
   13->SetBinContent(15,6241.33);
   13->SetBinContent(16,5149.094);
   13->SetBinContent(17,4680.993);
   13->SetBinContent(18,5357.139);
   13->SetBinContent(19,5461.161);
   13->SetBinContent(20,5253.116);
   13->SetBinContent(21,4941.049);
   13->SetBinContent(22,4472.948);
   13->SetBinContent(23,4576.97);
   13->SetBinContent(24,4524.959);
   13->SetBinContent(25,5253.116);
   13->SetBinContent(26,5097.083);
   13->SetBinContent(27,4108.869);
   13->SetBinContent(28,3796.803);
   13->SetBinContent(29,4004.847);
   13->SetBinContent(30,5045.071);
   13->SetBinContent(31,4628.981);
   13->SetBinContent(32,6033.285);
   13->SetBinContent(33,5357.139);
   13->SetBinContent(34,5513.172);
   13->SetBinContent(35,6293.341);
   13->SetBinContent(36,5305.127);
   13->SetBinContent(37,6709.431);
   13->SetBinContent(38,6657.419);
   13->SetBinContent(39,5929.262);
   13->SetBinContent(40,6709.431);
   13->SetBinContent(41,7541.61);
   13->SetBinContent(42,6761.442);
   13->SetBinContent(43,7073.509);
   13->SetBinContent(44,8269.767);
   13->SetBinContent(45,8581.831);
   13->SetBinContent(46,6449.375);
   13->SetBinContent(47,7125.521);
   13->SetBinContent(48,4316.914);
   13->SetBinContent(49,3120.66);
   13->SetBinContent(50,988.2097);
   13->SetEntries(7260);
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
   14->SetBinContent(1,111.0549);
   14->SetBinContent(2,194.3461);
   14->SetBinContent(3,397.9468);
   14->SetBinContent(4,555.2746);
   14->SetBinContent(5,777.3845);
   14->SetBinContent(6,694.0933);
   14->SetBinContent(7,749.6207);
   14->SetBinContent(8,647.8204);
   14->SetBinContent(9,684.8387);
   14->SetBinContent(10,768.1299);
   14->SetBinContent(11,777.3845);
   14->SetBinContent(12,860.6757);
   14->SetBinContent(13,666.3295);
   14->SetBinContent(14,971.7306);
   14->SetBinContent(15,925.4577);
   14->SetBinContent(16,823.6573);
   14->SetBinContent(17,749.6207);
   14->SetBinContent(18,795.8936);
   14->SetBinContent(19,749.6207);
   14->SetBinContent(20,860.6757);
   14->SetBinContent(21,906.9485);
   14->SetBinContent(22,971.7306);
   14->SetBinContent(23,851.4211);
   14->SetBinContent(24,888.4394);
   14->SetBinContent(25,897.694);
   14->SetBinContent(26,943.9669);
   14->SetBinContent(27,1082.785);
   14->SetBinContent(28,1147.567);
   14->SetBinContent(29,1277.13);
   14->SetBinContent(30,1360.421);
   14->SetBinContent(31,1378.93);
   14->SetBinContent(32,1184.585);
   14->SetBinContent(33,1554.766);
   14->SetBinContent(34,1702.838);
   14->SetBinContent(35,1813.892);
   14->SetBinContent(36,1878.674);
   14->SetBinContent(37,2452.459);
   14->SetBinContent(38,2702.334);
   14->SetBinContent(39,2785.626);
   14->SetBinContent(40,3044.756);
   14->SetBinContent(41,3424.196);
   14->SetBinContent(42,4238.601);
   14->SetBinContent(43,4571.759);
   14->SetBinContent(44,4821.627);
   14->SetBinContent(45,4960.443);
   14->SetBinContent(46,4599.522);
   14->SetBinContent(47,3849.909);
   14->SetBinContent(48,3600.034);
   14->SetBinContent(49,2979.973);
   14->SetBinContent(50,1360.421);
   14->SetEntries(8968);
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
   15->SetBinContent(1,448.7481);
   15->SetBinContent(2,785.3091);
   15->SetBinContent(3,925.5429);
   15->SetBinContent(4,785.3091);
   15->SetBinContent(5,897.4962);
   15->SetBinContent(6,757.2624);
   15->SetBinContent(7,673.1221);
   15->SetBinContent(8,981.6364);
   15->SetBinContent(9,588.9819);
   15->SetBinContent(10,560.9351);
   15->SetBinContent(11,448.7481);
   15->SetBinContent(12,588.9819);
   15->SetBinContent(13,729.2156);
   15->SetBinContent(14,504.8416);
   15->SetBinContent(15,588.9819);
   15->SetBinContent(16,617.0286);
   15->SetBinContent(17,532.8884);
   15->SetBinContent(18,588.9819);
   15->SetBinContent(19,476.7948);
   15->SetBinContent(20,308.5143);
   15->SetBinContent(21,392.6546);
   15->SetBinContent(22,448.7481);
   15->SetBinContent(23,420.7013);
   15->SetBinContent(24,476.7948);
   15->SetBinContent(25,448.7481);
   15->SetBinContent(26,504.8416);
   15->SetBinContent(27,448.7481);
   15->SetBinContent(28,336.5611);
   15->SetBinContent(29,504.8416);
   15->SetBinContent(30,588.9819);
   15->SetBinContent(31,392.6546);
   15->SetBinContent(32,588.9819);
   15->SetBinContent(33,476.7948);
   15->SetBinContent(34,364.6078);
   15->SetBinContent(35,476.7948);
   15->SetBinContent(36,476.7948);
   15->SetBinContent(37,504.8416);
   15->SetBinContent(38,504.8416);
   15->SetBinContent(39,448.7481);
   15->SetBinContent(40,588.9819);
   15->SetBinContent(41,476.7948);
   15->SetBinContent(42,588.9819);
   15->SetBinContent(43,813.3559);
   15->SetBinContent(44,757.2624);
   15->SetBinContent(45,588.9819);
   15->SetBinContent(46,953.5897);
   15->SetBinContent(47,588.9819);
   15->SetBinContent(48,252.4208);
   15->SetBinContent(49,252.4208);
   15->SetBinContent(50,56.09351);
   15->SetEntries(981);
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
   16->SetBinContent(1,159.2968);
   16->SetBinContent(2,201.7759);
   16->SetBinContent(3,191.1562);
   16->SetBinContent(4,223.0155);
   16->SetBinContent(5,265.4946);
   16->SetBinContent(6,297.354);
   16->SetBinContent(7,212.3957);
   16->SetBinContent(8,138.0573);
   16->SetBinContent(9,223.0155);
   16->SetBinContent(10,201.7759);
   16->SetBinContent(11,223.0155);
   16->SetBinContent(12,180.5364);
   16->SetBinContent(13,180.5364);
   16->SetBinContent(14,223.0155);
   16->SetBinContent(15,127.4375);
   16->SetBinContent(16,148.677);
   16->SetBinContent(17,138.0573);
   16->SetBinContent(18,201.7759);
   16->SetBinContent(19,138.0573);
   16->SetBinContent(20,148.677);
   16->SetBinContent(21,148.677);
   16->SetBinContent(22,138.0573);
   16->SetBinContent(23,106.1979);
   16->SetBinContent(24,180.5364);
   16->SetBinContent(25,201.7759);
   16->SetBinContent(26,127.4375);
   16->SetBinContent(27,180.5364);
   16->SetBinContent(28,212.3957);
   16->SetBinContent(29,201.7759);
   16->SetBinContent(30,180.5364);
   16->SetBinContent(31,201.7759);
   16->SetBinContent(32,159.2968);
   16->SetBinContent(33,148.677);
   16->SetBinContent(34,286.7342);
   16->SetBinContent(35,329.2133);
   16->SetBinContent(36,191.1562);
   16->SetBinContent(37,233.6353);
   16->SetBinContent(38,339.8331);
   16->SetBinContent(39,318.5935);
   16->SetBinContent(40,329.2133);
   16->SetBinContent(41,477.8903);
   16->SetBinContent(42,499.1298);
   16->SetBinContent(43,456.6507);
   16->SetBinContent(44,477.8903);
   16->SetBinContent(45,711.526);
   16->SetBinContent(46,584.0883);
   16->SetBinContent(47,626.5675);
   16->SetBinContent(48,615.9477);
   16->SetBinContent(49,339.8331);
   16->SetBinContent(50,201.7759);
   16->SetEntries(1227);
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
   17->SetBinContent(1,1885.437);
   17->SetBinContent(2,1824.617);
   17->SetBinContent(3,2554.464);
   17->SetBinContent(4,2432.823);
   17->SetBinContent(5,2797.746);
   17->SetBinContent(6,2372.002);
   17->SetBinContent(7,2007.078);
   17->SetBinContent(8,1824.617);
   17->SetBinContent(9,2189.54);
   17->SetBinContent(10,1216.411);
   17->SetBinContent(11,1398.873);
   17->SetBinContent(12,790.6673);
   17->SetBinContent(13,1459.693);
   17->SetBinContent(14,1155.591);
   17->SetBinContent(15,1277.232);
   17->SetBinContent(16,1338.052);
   17->SetBinContent(17,1155.591);
   17->SetBinContent(18,1216.411);
   17->SetBinContent(19,973.129);
   17->SetBinContent(20,1094.77);
   17->SetBinContent(21,1155.591);
   17->SetBinContent(22,1155.591);
   17->SetBinContent(23,1277.232);
   17->SetBinContent(24,790.6673);
   17->SetBinContent(25,790.6673);
   17->SetBinContent(26,1216.411);
   17->SetBinContent(27,912.3084);
   17->SetBinContent(28,729.8467);
   17->SetBinContent(29,1094.77);
   17->SetBinContent(30,1702.976);
   17->SetBinContent(31,1520.514);
   17->SetBinContent(32,1094.77);
   17->SetBinContent(33,1216.411);
   17->SetBinContent(34,1702.976);
   17->SetBinContent(35,1642.155);
   17->SetBinContent(36,1520.514);
   17->SetBinContent(37,1216.411);
   17->SetBinContent(38,1824.617);
   17->SetBinContent(39,1763.796);
   17->SetBinContent(40,2189.54);
   17->SetBinContent(41,2007.078);
   17->SetBinContent(42,3223.49);
   17->SetBinContent(43,2736.925);
   17->SetBinContent(44,2797.746);
   17->SetBinContent(45,3345.131);
   17->SetBinContent(46,2858.566);
   17->SetBinContent(47,2067.899);
   17->SetBinContent(48,1094.77);
   17->SetBinContent(49,669.0262);
   17->SetBinContent(50,425.7439);
   17->SetEntries(1327);
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
