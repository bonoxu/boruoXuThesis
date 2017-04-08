{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:05:22 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-13.49206,-3.060571,65.87302,5.267268);
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
   
   TH1F *THStack_stack_28 = new TH1F("THStack_stack_28","",50,0,50);
   THStack_stack_28->SetMinimum(0.02744353);
   THStack_stack_28->SetMaximum(39906.23);
   THStack_stack_28->SetDirectory(0);
   THStack_stack_28->SetStats(0);
   THStack_stack_28->SetLineWidth(2);
   THStack_stack_28->SetMarkerSize(1.2);
   THStack_stack_28->GetXaxis()->SetTitle("N_{PFO,W}");
   THStack_stack_28->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_28->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_28->GetXaxis()->SetLabelColor(ci);
   THStack_stack_28->GetXaxis()->SetLabelFont(42);
   THStack_stack_28->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_28->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_28->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_28->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_28->GetXaxis()->SetTitleColor(ci);
   THStack_stack_28->GetXaxis()->SetTitleFont(42);
   THStack_stack_28->GetYaxis()->SetTitle("Number of events");
   THStack_stack_28->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_28->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_28->GetYaxis()->SetLabelColor(ci);
   THStack_stack_28->GetYaxis()->SetLabelFont(42);
   THStack_stack_28->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_28->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_28->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_28->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_28->GetYaxis()->SetTitleColor(ci);
   THStack_stack_28->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_28->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_28->GetZaxis()->SetLabelColor(ci);
   THStack_stack_28->GetZaxis()->SetLabelFont(42);
   THStack_stack_28->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_28->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_28->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_28->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_28->GetZaxis()->SetTitleColor(ci);
   THStack_stack_28->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_28);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,50);
   0->SetBinContent(5,0.001882);
   0->SetBinContent(7,0.001882);
   0->SetBinContent(8,0.001882);
   0->SetBinContent(9,0.011292);
   0->SetBinContent(10,0.015056);
   0->SetBinContent(11,0.020702);
   0->SetBinContent(12,0.05081402);
   0->SetBinContent(13,0.05269602);
   0->SetBinContent(14,0.09221806);
   0->SetBinContent(15,0.08845405);
   0->SetBinContent(16,0.1223301);
   0->SetBinContent(17,0.1317401);
   0->SetBinContent(18,0.2013742);
   0->SetBinContent(19,0.3011198);
   0->SetBinContent(20,0.3237037);
   0->SetBinContent(21,0.4008651);
   0->SetBinContent(22,0.4761446);
   0->SetBinContent(23,0.5495429);
   0->SetBinContent(24,0.6003574);
   0->SetBinContent(25,0.6097674);
   0->SetBinContent(26,0.7264525);
   0->SetBinContent(27,0.7189244);
   0->SetBinContent(28,0.7245705);
   0->SetBinContent(29,0.7076323);
   0->SetBinContent(30,0.7584468);
   0->SetBinContent(31,0.7659748);
   0->SetBinContent(32,0.7302165);
   0->SetBinContent(33,0.6605819);
   0->SetBinContent(34,0.7057503);
   0->SetBinContent(35,0.6116495);
   0->SetBinContent(36,0.5740091);
   0->SetBinContent(37,0.5909473);
   0->SetBinContent(38,0.5269587);
   0->SetBinContent(39,0.4479148);
   0->SetBinContent(40,0.3745173);
   0->SetBinContent(41,0.3895732);
   0->SetBinContent(42,0.3387596);
   0->SetBinContent(43,0.3199397);
   0->SetBinContent(44,0.271008);
   0->SetBinContent(45,0.2277222);
   0->SetBinContent(46,0.2540702);
   0->SetBinContent(47,0.1750261);
   0->SetBinContent(48,0.1562061);
   0->SetBinContent(49,0.1242121);
   0->SetBinContent(50,0.1204481);
   0->SetBinContent(51,0.6248236);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,50);
   1->SetBinContent(6,0.000941);
   1->SetBinContent(7,0.001882);
   1->SetBinContent(8,0.008469);
   1->SetBinContent(9,0.007528);
   1->SetBinContent(10,0.015997);
   1->SetBinContent(11,0.020702);
   1->SetBinContent(12,0.02917101);
   1->SetBinContent(13,0.03764002);
   1->SetBinContent(14,0.04987303);
   1->SetBinContent(15,0.08092606);
   1->SetBinContent(16,0.1270351);
   1->SetBinContent(17,0.1223301);
   1->SetBinContent(18,0.1543239);
   1->SetBinContent(19,0.1731438);
   1->SetBinContent(20,0.2183114);
   1->SetBinContent(21,0.2634794);
   1->SetBinContent(22,0.2531283);
   1->SetBinContent(23,0.2964146);
   1->SetBinContent(24,0.3293499);
   1->SetBinContent(25,0.3688723);
   1->SetBinContent(26,0.3575802);
   1->SetBinContent(27,0.3914565);
   1->SetBinContent(28,0.4742652);
   1->SetBinContent(29,0.4667372);
   1->SetBinContent(30,0.453563);
   1->SetBinContent(31,0.4225098);
   1->SetBinContent(32,0.451681);
   1->SetBinContent(33,0.4761472);
   1->SetBinContent(34,0.3971025);
   1->SetBinContent(35,0.3905155);
   1->SetBinContent(36,0.3989846);
   1->SetBinContent(37,0.3622852);
   1->SetBinContent(38,0.2992377);
   1->SetBinContent(39,0.2860636);
   1->SetBinContent(40,0.2728894);
   1->SetBinContent(41,0.2578333);
   1->SetBinContent(42,0.1957276);
   1->SetBinContent(43,0.2013736);
   1->SetBinContent(44,0.1722028);
   1->SetBinContent(45,0.1543239);
   1->SetBinContent(46,0.1496189);
   1->SetBinContent(47,0.139268);
   1->SetBinContent(48,0.09504107);
   1->SetBinContent(49,0.09410007);
   1->SetBinContent(50,0.07998506);
   1->SetBinContent(51,0.4074536);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,50);
   2->SetBinContent(4,0.007528);
   2->SetBinContent(5,0.014115);
   2->SetBinContent(6,0.03387602);
   2->SetBinContent(7,0.04234502);
   2->SetBinContent(8,0.08751307);
   2->SetBinContent(9,0.1016281);
   2->SetBinContent(10,0.1289171);
   2->SetBinContent(11,0.1609108);
   2->SetBinContent(12,0.2051375);
   2->SetBinContent(13,0.2041965);
   2->SetBinContent(14,0.2898276);
   2->SetBinContent(15,0.2954736);
   2->SetBinContent(16,0.4130997);
   2->SetBinContent(17,0.4243918);
   2->SetBinContent(18,0.4855573);
   2->SetBinContent(19,0.5749508);
   2->SetBinContent(20,0.697278);
   2->SetBinContent(21,0.7622055);
   2->SetBinContent(22,0.7970217);
   2->SetBinContent(23,0.8657131);
   2->SetBinContent(24,0.8534804);
   2->SetBinContent(25,0.9504012);
   2->SetBinContent(26,1.02474);
   2->SetBinContent(27,1.002155);
   2->SetBinContent(28,1.010625);
   2->SetBinContent(29,1.045443);
   2->SetBinContent(30,0.9823945);
   2->SetBinContent(31,0.9880403);
   2->SetBinContent(32,0.9814535);
   2->SetBinContent(33,0.960752);
   2->SetBinContent(34,0.9334636);
   2->SetBinContent(35,0.8920605);
   2->SetBinContent(36,0.7951397);
   2->SetBinContent(37,0.7330351);
   2->SetBinContent(38,0.6568159);
   2->SetBinContent(39,0.6652847);
   2->SetBinContent(40,0.5918884);
   2->SetBinContent(41,0.5448394);
   2->SetBinContent(42,0.5053183);
   2->SetBinContent(43,0.4799113);
   2->SetBinContent(44,0.4065126);
   2->SetBinContent(45,0.3491111);
   2->SetBinContent(46,0.3208809);
   2->SetBinContent(47,0.2775945);
   2->SetBinContent(48,0.2540693);
   2->SetBinContent(49,0.1797307);
   2->SetBinContent(50,0.1797307);
   2->SetBinContent(51,1.037915);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,50);
   3->SetBinContent(4,0.027316);
   3->SetBinContent(5,0.054632);
   3->SetBinContent(6,0.054632);
   3->SetBinContent(7,0.09560601);
   3->SetBinContent(8,0.129751);
   3->SetBinContent(9,0.2595019);
   3->SetBinContent(10,0.3004759);
   3->SetBinContent(11,0.4233977);
   3->SetBinContent(12,0.4916877);
   3->SetBinContent(13,0.6077811);
   3->SetBinContent(14,0.7989937);
   3->SetBinContent(15,0.9150871);
   3->SetBinContent(16,1.263367);
   3->SetBinContent(17,1.447751);
   3->SetBinContent(18,1.959928);
   3->SetBinContent(19,2.028218);
   3->SetBinContent(20,2.717949);
   3->SetBinContent(21,2.902333);
   3->SetBinContent(22,3.250613);
   3->SetBinContent(23,3.76279);
   3->SetBinContent(24,4.104237);
   3->SetBinContent(25,4.104237);
   3->SetBinContent(26,4.773458);
   3->SetBinContent(27,4.87589);
   3->SetBinContent(28,4.923691);
   3->SetBinContent(29,4.916862);
   3->SetBinContent(30,4.869061);
   3->SetBinContent(31,4.636882);
   3->SetBinContent(32,4.882719);
   3->SetBinContent(33,4.65054);
   3->SetBinContent(34,4.391046);
   3->SetBinContent(35,4.281785);
   3->SetBinContent(36,3.892541);
   3->SetBinContent(37,3.776448);
   3->SetBinContent(38,3.516945);
   3->SetBinContent(39,3.038913);
   3->SetBinContent(40,2.64283);
   3->SetBinContent(41,2.36284);
   3->SetBinContent(42,2.29455);
   3->SetBinContent(43,2.212601);
   3->SetBinContent(44,1.727741);
   3->SetBinContent(45,1.488725);
   3->SetBinContent(46,1.372632);
   3->SetBinContent(47,0.9424032);
   3->SetBinContent(48,0.8946);
   3->SetBinContent(49,0.880942);
   3->SetBinContent(50,0.8263098);
   3->SetBinContent(51,3.76279);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,50);
   4->SetBinContent(4,0.015783);
   4->SetBinContent(5,0.07891499);
   4->SetBinContent(6,0.121003);
   4->SetBinContent(7,0.194657);
   4->SetBinContent(8,0.3472261);
   4->SetBinContent(9,0.5997543);
   4->SetBinContent(10,0.7681064);
   4->SetBinContent(11,1.178463);
   4->SetBinContent(12,1.615121);
   4->SetBinContent(13,2.062301);
   4->SetBinContent(14,2.625222);
   4->SetBinContent(15,2.846182);
   4->SetBinContent(16,3.472234);
   4->SetBinContent(17,3.882588);
   4->SetBinContent(18,4.308725);
   4->SetBinContent(19,5.024213);
   4->SetBinContent(20,5.392479);
   4->SetBinContent(21,6.071141);
   4->SetBinContent(22,6.392059);
   4->SetBinContent(23,7.033894);
   4->SetBinContent(24,7.365334);
   4->SetBinContent(25,7.333768);
   4->SetBinContent(26,7.612598);
   4->SetBinContent(27,7.549467);
   4->SetBinContent(28,7.144374);
   4->SetBinContent(29,7.581032);
   4->SetBinContent(30,7.186461);
   4->SetBinContent(31,6.78663);
   4->SetBinContent(32,6.434146);
   4->SetBinContent(33,6.160577);
   4->SetBinContent(34,5.860703);
   4->SetBinContent(35,5.124171);
   4->SetBinContent(36,5.013691);
   4->SetBinContent(37,4.33503);
   4->SetBinContent(38,3.961502);
   4->SetBinContent(39,3.314406);
   4->SetBinContent(40,3.019793);
   4->SetBinContent(41,2.598918);
   4->SetBinContent(42,2.367436);
   4->SetBinContent(43,1.793993);
   4->SetBinContent(44,1.715079);
   4->SetBinContent(45,1.409944);
   4->SetBinContent(46,1.22055);
   4->SetBinContent(47,1.041678);
   4->SetBinContent(48,0.8101944);
   4->SetBinContent(49,0.6891913);
   4->SetBinContent(50,0.5418832);
   4->SetBinContent(51,2.740963);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,50);
   5->SetBinContent(4,0.024802);
   5->SetBinContent(5,0.086807);
   5->SetBinContent(6,0.235619);
   5->SetBinContent(7,0.4464357);
   5->SetBinContent(8,0.7068564);
   5->SetBinContent(9,0.8804702);
   5->SetBinContent(10,1.922153);
   5->SetBinContent(11,2.951444);
   5->SetBinContent(12,4.402373);
   5->SetBinContent(13,5.022428);
   5->SetBinContent(14,6.882594);
   5->SetBinContent(15,9.213955);
   5->SetBinContent(16,11.21046);
   5->SetBinContent(17,12.88454);
   5->SetBinContent(18,16.49316);
   5->SetBinContent(19,17.73332);
   5->SetBinContent(20,20.20123);
   5->SetBinContent(21,20.79651);
   5->SetBinContent(22,23.12801);
   5->SetBinContent(23,22.90478);
   5->SetBinContent(24,23.82249);
   5->SetBinContent(25,25.03785);
   5->SetBinContent(26,24.09533);
   5->SetBinContent(27,24.07053);
   5->SetBinContent(28,23.31403);
   5->SetBinContent(29,23.37604);
   5->SetBinContent(30,21.26777);
   5->SetBinContent(31,20.26324);
   5->SetBinContent(32,18.25418);
   5->SetBinContent(33,17.82013);
   5->SetBinContent(34,15.26546);
   5->SetBinContent(35,13.57898);
   5->SetBinContent(36,11.84289);
   5->SetBinContent(37,11.40887);
   5->SetBinContent(38,9.251157);
   5->SetBinContent(39,7.73827);
   5->SetBinContent(40,7.056209);
   5->SetBinContent(41,6.411352);
   5->SetBinContent(42,5.667285);
   5->SetBinContent(43,4.799208);
   5->SetBinContent(44,3.831922);
   5->SetBinContent(45,3.459889);
   5->SetBinContent(46,2.753026);
   5->SetBinContent(47,2.318988);
   5->SetBinContent(48,1.946955);
   5->SetBinContent(49,1.711336);
   5->SetBinContent(50,1.674133);
   5->SetBinContent(51,5.282851);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,50);
   6->SetBinContent(3,0.151812);
   6->SetBinContent(4,0.9108719);
   6->SetBinContent(5,3.036241);
   6->SetBinContent(6,5.237512);
   6->SetBinContent(7,13.05581);
   6->SetBinContent(8,19.05241);
   6->SetBinContent(9,35.44818);
   6->SetBinContent(10,61.17992);
   6->SetBinContent(11,91.16234);
   6->SetBinContent(12,117.0459);
   6->SetBinContent(13,152.8755);
   6->SetBinContent(14,210.7208);
   6->SetBinContent(15,253.6872);
   6->SetBinContent(16,300.9717);
   6->SetBinContent(17,362.6761);
   6->SetBinContent(18,399.1068);
   6->SetBinContent(19,455.1189);
   6->SetBinContent(20,482.2142);
   6->SetBinContent(21,525.1774);
   6->SetBinContent(22,562.0782);
   6->SetBinContent(23,574.5304);
   6->SetBinContent(24,588.0455);
   6->SetBinContent(25,594.879);
   6->SetBinContent(26,590.703);
   6->SetBinContent(27,573.7711);
   6->SetBinContent(28,538.5406);
   6->SetBinContent(29,523.507);
   6->SetBinContent(30,497.7732);
   6->SetBinContent(31,455.2707);
   6->SetBinContent(32,432.881);
   6->SetBinContent(33,401.0801);
   6->SetBinContent(34,362.9038);
   6->SetBinContent(35,318.5798);
   6->SetBinContent(36,295.1276);
   6->SetBinContent(37,250.1953);
   6->SetBinContent(38,221.8799);
   6->SetBinContent(39,195.6901);
   6->SetBinContent(40,170.1076);
   6->SetBinContent(41,142.3236);
   6->SetBinContent(42,123.8773);
   6->SetBinContent(43,103.1553);
   6->SetBinContent(44,87.3671);
   6->SetBinContent(45,74.61508);
   6->SetBinContent(46,62.92573);
   6->SetBinContent(47,49.71829);
   6->SetBinContent(48,41.82418);
   6->SetBinContent(49,35.22046);
   6->SetBinContent(50,29.22391);
   6->SetBinContent(51,117.2736);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,50);
   7->SetBinContent(4,0.292932);
   7->SetBinContent(5,0.6346859);
   7->SetBinContent(6,2.19699);
   7->SetBinContent(7,3.612826);
   7->SetBinContent(8,8.543846);
   7->SetBinContent(9,13.76784);
   7->SetBinContent(10,22.99528);
   7->SetBinContent(11,36.0307);
   7->SetBinContent(12,47.74762);
   7->SetBinContent(13,69.6192);
   7->SetBinContent(14,88.80566);
   7->SetBinContent(15,115.2664);
   7->SetBinContent(16,138.4577);
   7->SetBinContent(17,166.5827);
   7->SetBinContent(18,191.2898);
   7->SetBinContent(19,214.7761);
   7->SetBinContent(20,243.9753);
   7->SetBinContent(21,256.4753);
   7->SetBinContent(22,270.2937);
   7->SetBinContent(23,280.4011);
   7->SetBinContent(24,285.9187);
   7->SetBinContent(25,288.2624);
   7->SetBinContent(26,285.4304);
   7->SetBinContent(27,277.3737);
   7->SetBinContent(28,265.0691);
   7->SetBinContent(29,245.0007);
   7->SetBinContent(30,231.8659);
   7->SetBinContent(31,218.6335);
   7->SetBinContent(32,203.2527);
   7->SetBinContent(33,174.2487);
   7->SetBinContent(34,167.8523);
   7->SetBinContent(35,137.3835);
   7->SetBinContent(36,121.8571);
   7->SetBinContent(37,105.3558);
   7->SetBinContent(38,95.73817);
   7->SetBinContent(39,79.6274);
   7->SetBinContent(40,67.42228);
   7->SetBinContent(41,57.4629);
   7->SetBinContent(42,48.57757);
   7->SetBinContent(43,37.9347);
   7->SetBinContent(44,33.19911);
   7->SetBinContent(45,24.89935);
   7->SetBinContent(46,23.72761);
   7->SetBinContent(47,19.52889);
   7->SetBinContent(48,16.0625);
   7->SetBinContent(49,12.88904);
   7->SetBinContent(50,10.05734);
   7->SetBinContent(51,37.59296);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,50);
   8->SetBinContent(6,0.880518);
   8->SetBinContent(7,0.440259);
   8->SetBinContent(8,1.46753);
   8->SetBinContent(9,2.201295);
   8->SetBinContent(10,2.788307);
   8->SetBinContent(11,3.668826);
   8->SetBinContent(12,4.40259);
   8->SetBinContent(13,5.42986);
   8->SetBinContent(14,4.989602);
   8->SetBinContent(15,7.631153);
   8->SetBinContent(16,8.805178);
   8->SetBinContent(17,9.832451);
   8->SetBinContent(18,10.71297);
   8->SetBinContent(19,10.56622);
   8->SetBinContent(20,8.951931);
   8->SetBinContent(21,13.20778);
   8->SetBinContent(22,15.84934);
   8->SetBinContent(23,14.0883);
   8->SetBinContent(24,12.76752);
   8->SetBinContent(25,13.79479);
   8->SetBinContent(26,12.32726);
   8->SetBinContent(27,12.47401);
   8->SetBinContent(28,9.392191);
   8->SetBinContent(29,10.56622);
   8->SetBinContent(30,9.979204);
   8->SetBinContent(31,9.832451);
   8->SetBinContent(32,6.163624);
   8->SetBinContent(33,8.218164);
   8->SetBinContent(34,6.163624);
   8->SetBinContent(35,7.924658);
   8->SetBinContent(36,5.283107);
   8->SetBinContent(37,4.696096);
   8->SetBinContent(38,5.42986);
   8->SetBinContent(39,3.668826);
   8->SetBinContent(40,3.375319);
   8->SetBinContent(41,2.93506);
   8->SetBinContent(42,2.494801);
   8->SetBinContent(43,1.907789);
   8->SetBinContent(44,2.494801);
   8->SetBinContent(45,1.174024);
   8->SetBinContent(46,1.174024);
   8->SetBinContent(47,1.174024);
   8->SetBinContent(48,1.614283);
   8->SetBinContent(49,1.614283);
   8->SetBinContent(50,1.027271);
   8->SetBinContent(51,4.109085);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,50);
   9->SetBinContent(3,0.171439);
   9->SetBinContent(4,0.514317);
   9->SetBinContent(5,2.914463);
   9->SetBinContent(6,4.457414);
   9->SetBinContent(7,7.37188);
   9->SetBinContent(8,17.14391);
   9->SetBinContent(9,24.85863);
   9->SetBinContent(10,36.1736);
   9->SetBinContent(11,49.37449);
   9->SetBinContent(12,75.0905);
   9->SetBinContent(13,95.14899);
   9->SetBinContent(14,120.3507);
   9->SetBinContent(15,155.6661);
   9->SetBinContent(16,185.6668);
   9->SetBinContent(17,209.4959);
   9->SetBinContent(18,266.9268);
   9->SetBinContent(19,304.131);
   9->SetBinContent(20,339.2777);
   9->SetBinContent(21,398.4272);
   9->SetBinContent(22,440.2605);
   9->SetBinContent(23,473.8642);
   9->SetBinContent(24,509.5254);
   9->SetBinContent(25,552.0444);
   9->SetBinContent(26,578.7902);
   9->SetBinContent(27,599.0211);
   9->SetBinContent(28,616.8516);
   9->SetBinContent(29,615.48);
   9->SetBinContent(30,627.9957);
   9->SetBinContent(31,624.9097);
   9->SetBinContent(32,626.967);
   9->SetBinContent(33,588.9056);
   9->SetBinContent(34,581.8763);
   9->SetBinContent(35,537.6428);
   9->SetBinContent(36,547.2438);
   9->SetBinContent(37,494.9523);
   9->SetBinContent(38,463.7488);
   9->SetBinContent(39,444.3752);
   9->SetBinContent(40,397.9129);
   9->SetBinContent(41,370.4812);
   9->SetBinContent(42,350.0789);
   9->SetBinContent(43,318.8755);
   9->SetBinContent(44,295.2157);
   9->SetBinContent(45,260.2403);
   9->SetBinContent(46,237.4394);
   9->SetBinContent(47,205.553);
   9->SetBinContent(48,196.4671);
   9->SetBinContent(49,171.095);
   9->SetBinContent(50,150.1803);
   9->SetBinContent(51,1031.41);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,50);
   10->SetBinContent(3,0.693968);
   10->SetBinContent(4,2.523519);
   10->SetBinContent(5,7.444378);
   10->SetBinContent(6,17.28615);
   10->SetBinContent(7,39.24059);
   10->SetBinContent(8,71.09975);
   10->SetBinContent(9,124.1563);
   10->SetBinContent(10,210.5961);
   10->SetBinContent(11,317.9059);
   10->SetBinContent(12,457.5016);
   10->SetBinContent(13,602.7552);
   10->SetBinContent(14,807.4221);
   10->SetBinContent(15,1036.386);
   10->SetBinContent(16,1259.166);
   10->SetBinContent(17,1489.645);
   10->SetBinContent(18,1733.945);
   10->SetBinContent(19,1927.946);
   10->SetBinContent(20,2114.309);
   10->SetBinContent(21,2273.354);
   10->SetBinContent(22,2403.803);
   10->SetBinContent(23,2502.695);
   10->SetBinContent(24,2527.197);
   10->SetBinContent(25,2550.566);
   10->SetBinContent(26,2523.166);
   10->SetBinContent(27,2456.209);
   10->SetBinContent(28,2358.767);
   10->SetBinContent(29,2241.608);
   10->SetBinContent(30,2073.619);
   10->SetBinContent(31,1935.267);
   10->SetBinContent(32,1774.778);
   10->SetBinContent(33,1619.842);
   10->SetBinContent(34,1453.988);
   10->SetBinContent(35,1291.415);
   10->SetBinContent(36,1139.383);
   10->SetBinContent(37,990.6315);
   10->SetBinContent(38,853.9976);
   10->SetBinContent(39,725.5049);
   10->SetBinContent(40,632.6696);
   10->SetBinContent(41,527.3384);
   10->SetBinContent(42,447.0303);
   10->SetBinContent(43,378.841);
   10->SetBinContent(44,316.5812);
   10->SetBinContent(45,253.2484);
   10->SetBinContent(46,206.6211);
   10->SetBinContent(47,174.9474);
   10->SetBinContent(48,141.8856);
   10->SetBinContent(49,113.6838);
   10->SetBinContent(50,83.33872);
   10->SetBinContent(51,349.9505);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,50);
   11->SetBinContent(3,29.26772);
   11->SetBinContent(5,29.26772);
   11->SetBinContent(7,14.63386);
   11->SetBinContent(8,43.90158);
   11->SetBinContent(9,146.3386);
   11->SetBinContent(10,73.1693);
   11->SetBinContent(11,204.8741);
   11->SetBinContent(12,234.1418);
   11->SetBinContent(13,292.6772);
   11->SetBinContent(14,292.6772);
   11->SetBinContent(15,336.5788);
   11->SetBinContent(16,380.4803);
   11->SetBinContent(17,395.1142);
   11->SetBinContent(18,424.3819);
   11->SetBinContent(19,439.0157);
   11->SetBinContent(20,585.3542);
   11->SetBinContent(21,570.7204);
   11->SetBinContent(22,439.0157);
   11->SetBinContent(23,643.8896);
   11->SetBinContent(24,497.5511);
   11->SetBinContent(25,585.3542);
   11->SetBinContent(26,439.0157);
   11->SetBinContent(27,541.4527);
   11->SetBinContent(28,336.5788);
   11->SetBinContent(29,321.9449);
   11->SetBinContent(30,263.4095);
   11->SetBinContent(31,307.3111);
   11->SetBinContent(32,395.1142);
   11->SetBinContent(33,395.1142);
   11->SetBinContent(34,263.4095);
   11->SetBinContent(35,263.4095);
   11->SetBinContent(36,131.7047);
   11->SetBinContent(37,117.0709);
   11->SetBinContent(38,117.0709);
   11->SetBinContent(39,73.1693);
   11->SetBinContent(40,102.437);
   11->SetBinContent(41,87.80315);
   11->SetBinContent(42,43.90158);
   11->SetBinContent(43,73.1693);
   11->SetBinContent(44,58.53543);
   11->SetBinContent(45,14.63386);
   11->SetBinContent(46,73.1693);
   11->SetBinContent(47,29.26772);
   11->SetBinContent(49,14.63386);
   11->SetBinContent(50,14.63386);
   11->SetBinContent(51,73.1693);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,50);
   12->SetBinContent(3,19.03043);
   12->SetBinContent(4,19.03043);
   12->SetBinContent(5,120.5261);
   12->SetBinContent(6,234.7086);
   12->SetBinContent(7,501.1346);
   12->SetBinContent(8,888.0884);
   12->SetBinContent(9,1148.172);
   12->SetBinContent(10,1408.256);
   12->SetBinContent(11,1991.858);
   12->SetBinContent(12,2397.843);
   12->SetBinContent(13,2708.675);
   12->SetBinContent(14,3222.499);
   12->SetBinContent(15,3412.804);
   12->SetBinContent(16,3362.056);
   12->SetBinContent(17,3488.926);
   12->SetBinContent(18,3400.117);
   12->SetBinContent(19,3349.369);
   12->SetBinContent(20,3121.002);
   12->SetBinContent(21,3057.567);
   12->SetBinContent(22,2657.927);
   12->SetBinContent(23,2473.965);
   12->SetBinContent(24,2131.416);
   12->SetBinContent(25,2156.79);
   12->SetBinContent(26,1814.24);
   12->SetBinContent(27,1611.248);
   12->SetBinContent(28,1484.378);
   12->SetBinContent(29,1427.286);
   12->SetBinContent(30,1053.02);
   12->SetBinContent(31,945.18);
   12->SetBinContent(32,818.3099);
   12->SetBinContent(33,818.3099);
   12->SetBinContent(34,628.0047);
   12->SetBinContent(35,577.2567);
   12->SetBinContent(36,444.0433);
   12->SetBinContent(37,488.4477);
   12->SetBinContent(38,412.326);
   12->SetBinContent(39,317.1738);
   12->SetBinContent(40,355.2347);
   12->SetBinContent(41,266.426);
   12->SetBinContent(42,234.7086);
   12->SetBinContent(43,152.2435);
   12->SetBinContent(44,215.6782);
   12->SetBinContent(45,234.7086);
   12->SetBinContent(46,50.74783);
   12->SetBinContent(47,177.6174);
   12->SetBinContent(48,107.8391);
   12->SetBinContent(49,63.43479);
   12->SetBinContent(50,114.1826);
   12->SetBinContent(51,310.8304);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,50);
   13->SetBinContent(5,81.57449);
   13->SetBinContent(6,81.57449);
   13->SetBinContent(7,489.447);
   13->SetBinContent(8,326.298);
   13->SetBinContent(9,652.5959);
   13->SetBinContent(10,1549.915);
   13->SetBinContent(11,1794.638);
   13->SetBinContent(12,2120.936);
   13->SetBinContent(13,2284.085);
   13->SetBinContent(14,2773.532);
   13->SetBinContent(15,2447.234);
   13->SetBinContent(16,3099.83);
   13->SetBinContent(17,3181.404);
   13->SetBinContent(18,3181.404);
   13->SetBinContent(19,4078.723);
   13->SetBinContent(20,3589.277);
   13->SetBinContent(21,5057.62);
   13->SetBinContent(22,3670.851);
   13->SetBinContent(23,4405.022);
   13->SetBinContent(24,3507.702);
   13->SetBinContent(25,3018.255);
   13->SetBinContent(26,3589.277);
   13->SetBinContent(27,4649.746);
   13->SetBinContent(28,3344.553);
   13->SetBinContent(29,2773.532);
   13->SetBinContent(30,3344.553);
   13->SetBinContent(31,2284.085);
   13->SetBinContent(32,2120.936);
   13->SetBinContent(33,1631.49);
   13->SetBinContent(34,2447.234);
   13->SetBinContent(35,1060.468);
   13->SetBinContent(36,1223.617);
   13->SetBinContent(37,407.8725);
   13->SetBinContent(38,1305.192);
   13->SetBinContent(39,978.8938);
   13->SetBinContent(40,407.8725);
   13->SetBinContent(41,489.447);
   13->SetBinContent(42,407.8725);
   13->SetBinContent(43,407.8725);
   13->SetBinContent(44,489.447);
   13->SetBinContent(45,326.298);
   13->SetBinContent(46,244.7235);
   13->SetBinContent(47,244.7235);
   13->SetBinContent(48,81.57449);
   13->SetBinContent(49,244.7235);
   13->SetBinContent(51,571.0215);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,50);
   14->SetBinContent(1,4.029479);
   14->SetBinContent(3,4.029479);
   14->SetBinContent(4,28.20636);
   14->SetBinContent(5,60.4422);
   14->SetBinContent(6,145.0613);
   14->SetBinContent(7,233.7098);
   14->SetBinContent(8,402.948);
   14->SetBinContent(9,592.3335);
   14->SetBinContent(10,862.3087);
   14->SetBinContent(11,1043.635);
   14->SetBinContent(12,1361.959);
   14->SetBinContent(13,1607.754);
   14->SetBinContent(14,2055.019);
   14->SetBinContent(15,2143.669);
   14->SetBinContent(16,2397.53);
   14->SetBinContent(17,2381.412);
   14->SetBinContent(18,2486.18);
   14->SetBinContent(19,2518.417);
   14->SetBinContent(20,2643.332);
   14->SetBinContent(21,2490.21);
   14->SetBinContent(22,2453.944);
   14->SetBinContent(23,2272.615);
   14->SetBinContent(24,2111.433);
   14->SetBinContent(25,2079.197);
   14->SetBinContent(26,1744.754);
   14->SetBinContent(27,1648.048);
   14->SetBinContent(28,1502.989);
   14->SetBinContent(29,1208.841);
   14->SetBinContent(30,1140.341);
   14->SetBinContent(31,866.3381);
   14->SetBinContent(32,838.1318);
   14->SetBinContent(33,741.4243);
   14->SetBinContent(34,499.6555);
   14->SetBinContent(35,556.0682);
   14->SetBinContent(36,342.5058);
   14->SetBinContent(37,342.5058);
   14->SetBinContent(38,233.7098);
   14->SetBinContent(39,197.4445);
   14->SetBinContent(40,132.9728);
   14->SetBinContent(41,157.1497);
   14->SetBinContent(42,128.9433);
   14->SetBinContent(43,92.67803);
   14->SetBinContent(44,52.38324);
   14->SetBinContent(45,56.41272);
   14->SetBinContent(46,28.20636);
   14->SetBinContent(47,40.2948);
   14->SetBinContent(48,36.26532);
   14->SetBinContent(49,32.23584);
   14->SetBinContent(50,12.08844);
   14->SetBinContent(51,64.47167);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,50);
   15->SetBinContent(4,3.862847);
   15->SetBinContent(5,7.725694);
   15->SetBinContent(6,27.03993);
   15->SetBinContent(7,38.62847);
   15->SetBinContent(8,92.70832);
   15->SetBinContent(9,131.3368);
   15->SetBinContent(10,108.1597);
   15->SetBinContent(11,146.7882);
   15->SetBinContent(12,173.8282);
   15->SetBinContent(13,197.0053);
   15->SetBinContent(14,139.0625);
   15->SetBinContent(15,173.8282);
   15->SetBinContent(16,169.9653);
   15->SetBinContent(17,158.3768);
   15->SetBinContent(18,119.7482);
   15->SetBinContent(19,158.3768);
   15->SetBinContent(20,142.9254);
   15->SetBinContent(21,158.3768);
   15->SetBinContent(22,135.1996);
   15->SetBinContent(23,104.2969);
   15->SetBinContent(24,112.0226);
   15->SetBinContent(25,104.2969);
   15->SetBinContent(26,119.7482);
   15->SetBinContent(27,65.6684);
   15->SetBinContent(28,73.39409);
   15->SetBinContent(29,92.70832);
   15->SetBinContent(30,57.9427);
   15->SetBinContent(31,46.35416);
   15->SetBinContent(32,50.21701);
   15->SetBinContent(33,42.49131);
   15->SetBinContent(34,30.90277);
   15->SetBinContent(35,38.62847);
   15->SetBinContent(36,7.725694);
   15->SetBinContent(37,30.90277);
   15->SetBinContent(38,19.31424);
   15->SetBinContent(39,19.31424);
   15->SetBinContent(40,15.45139);
   15->SetBinContent(41,7.725694);
   15->SetBinContent(42,3.862847);
   15->SetBinContent(43,7.725694);
   15->SetBinContent(44,7.725694);
   15->SetBinContent(45,7.725694);
   15->SetBinContent(46,3.862847);
   15->SetBinContent(47,7.725694);
   15->SetBinContent(49,7.725694);
   15->SetBinContent(51,7.725694);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,50);
   16->SetBinContent(3,18.49251);
   16->SetBinContent(4,80.13421);
   16->SetBinContent(5,147.9401);
   16->SetBinContent(6,277.3877);
   16->SetBinContent(7,486.97);
   16->SetBinContent(8,782.8508);
   16->SetBinContent(9,1263.657);
   16->SetBinContent(10,1430.09);
   16->SetBinContent(11,1701.314);
   16->SetBinContent(12,2323.892);
   16->SetBinContent(13,2379.368);
   16->SetBinContent(14,2743.048);
   16->SetBinContent(15,2983.446);
   16->SetBinContent(16,3008.103);
   16->SetBinContent(17,3131.384);
   16->SetBinContent(18,3223.845);
   16->SetBinContent(19,3236.173);
   16->SetBinContent(20,3106.728);
   16->SetBinContent(21,2946.462);
   16->SetBinContent(22,2866.329);
   16->SetBinContent(23,2397.86);
   16->SetBinContent(24,2508.813);
   16->SetBinContent(25,2009.524);
   16->SetBinContent(26,1892.404);
   16->SetBinContent(27,1836.926);
   16->SetBinContent(28,1454.747);
   16->SetBinContent(29,1349.956);
   16->SetBinContent(30,1226.672);
   16->SetBinContent(31,1041.747);
   16->SetBinContent(32,764.3583);
   16->SetBinContent(33,733.5374);
   16->SetBinContent(34,628.7462);
   16->SetBinContent(35,480.8058);
   16->SetBinContent(36,376.0146);
   16->SetBinContent(37,308.2086);
   16->SetBinContent(38,234.2384);
   16->SetBinContent(39,184.9251);
   16->SetBinContent(40,209.5818);
   16->SetBinContent(41,129.4476);
   16->SetBinContent(42,117.1192);
   16->SetBinContent(43,61.6417);
   16->SetBinContent(44,73.97004);
   16->SetBinContent(45,67.80587);
   16->SetBinContent(46,55.47753);
   16->SetBinContent(47,43.14919);
   16->SetBinContent(48,18.49251);
   16->SetBinContent(49,18.49251);
   16->SetBinContent(50,12.32834);
   16->SetBinContent(51,55.47753);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,50);
   17->SetBinContent(4,46.85035);
   17->SetBinContent(5,140.5511);
   17->SetBinContent(6,234.2517);
   17->SetBinContent(7,445.0783);
   17->SetBinContent(8,538.779);
   17->SetBinContent(9,726.1804);
   17->SetBinContent(10,1171.259);
   17->SetBinContent(11,1054.133);
   17->SetBinContent(12,1405.51);
   17->SetBinContent(13,1499.211);
   17->SetBinContent(14,1639.762);
   17->SetBinContent(15,1686.612);
   17->SetBinContent(16,1733.463);
   17->SetBinContent(17,1522.636);
   17->SetBinContent(18,1639.762);
   17->SetBinContent(19,2178.542);
   17->SetBinContent(20,1288.385);
   17->SetBinContent(21,1616.337);
   17->SetBinContent(22,1499.211);
   17->SetBinContent(23,1663.187);
   17->SetBinContent(24,1452.361);
   17->SetBinContent(25,1803.738);
   17->SetBinContent(26,1452.361);
   17->SetBinContent(27,1147.833);
   17->SetBinContent(28,1100.983);
   17->SetBinContent(29,1194.684);
   17->SetBinContent(30,1405.51);
   17->SetBinContent(31,983.8572);
   17->SetBinContent(32,1030.708);
   17->SetBinContent(33,1077.558);
   17->SetBinContent(34,1030.708);
   17->SetBinContent(35,1030.708);
   17->SetBinContent(36,960.4321);
   17->SetBinContent(37,726.1804);
   17->SetBinContent(38,960.4321);
   17->SetBinContent(39,819.881);
   17->SetBinContent(40,515.3538);
   17->SetBinContent(41,515.3538);
   17->SetBinContent(42,773.0307);
   17->SetBinContent(43,398.2279);
   17->SetBinContent(44,374.8028);
   17->SetBinContent(45,585.6293);
   17->SetBinContent(46,468.5034);
   17->SetBinContent(47,257.6769);
   17->SetBinContent(48,327.9524);
   17->SetBinContent(49,398.2279);
   17->SetBinContent(50,327.9524);
   17->SetBinContent(51,2201.967);
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
