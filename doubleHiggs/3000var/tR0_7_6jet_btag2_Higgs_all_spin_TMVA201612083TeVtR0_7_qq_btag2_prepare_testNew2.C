{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:46:48 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.2406,1.31746,5.910461);
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
   
   TH1F *THStack_stack_33 = new TH1F("THStack_stack_33","",50,0,1);
   THStack_stack_33->SetMinimum(0.02550296);
   THStack_stack_33->SetMaximum(150791.1);
   THStack_stack_33->SetDirectory(0);
   THStack_stack_33->SetStats(0);
   THStack_stack_33->SetLineWidth(2);
   THStack_stack_33->SetMarkerSize(1.2);
   THStack_stack_33->GetXaxis()->SetTitle("cos*(#theta_{HH}) jets");
   THStack_stack_33->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_33->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_33->GetXaxis()->SetLabelColor(ci);
   THStack_stack_33->GetXaxis()->SetLabelFont(42);
   THStack_stack_33->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_33->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_33->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_33->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_33->GetXaxis()->SetTitleColor(ci);
   THStack_stack_33->GetXaxis()->SetTitleFont(42);
   THStack_stack_33->GetYaxis()->SetTitle("Number of events");
   THStack_stack_33->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_33->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_33->GetYaxis()->SetLabelColor(ci);
   THStack_stack_33->GetYaxis()->SetLabelFont(42);
   THStack_stack_33->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_33->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_33->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_33->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_33->GetYaxis()->SetTitleColor(ci);
   THStack_stack_33->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_33->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_33->GetZaxis()->SetLabelColor(ci);
   THStack_stack_33->GetZaxis()->SetLabelFont(42);
   THStack_stack_33->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_33->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_33->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_33->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_33->GetZaxis()->SetTitleColor(ci);
   THStack_stack_33->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_33);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,1.019598);
   0->SetBinContent(2,1.019598);
   0->SetBinContent(3,1.009699);
   0->SetBinContent(4,0.9206077);
   0->SetBinContent(5,0.9997998);
   0->SetBinContent(6,1.009699);
   0->SetBinContent(7,1.395761);
   0->SetBinContent(8,0.8711126);
   0->SetBinContent(9,1.029497);
   0->SetBinContent(10,1.019598);
   0->SetBinContent(11,1.128487);
   0->SetBinContent(12,1.078992);
   0->SetBinContent(13,0.8018194);
   0->SetBinContent(14,1.158184);
   0->SetBinContent(15,0.9602038);
   0->SetBinContent(16,1.09879);
   0->SetBinContent(17,0.8711126);
   0->SetBinContent(18,1.118588);
   0->SetBinContent(19,1.019598);
   0->SetBinContent(20,0.9305067);
   0->SetBinContent(21,1.078992);
   0->SetBinContent(22,1.148285);
   0->SetBinContent(23,1.207679);
   0->SetBinContent(24,1.138386);
   0->SetBinContent(25,1.237376);
   0->SetBinContent(26,1.029497);
   0->SetBinContent(27,1.148285);
   0->SetBinContent(28,1.356165);
   0->SetBinContent(29,1.286871);
   0->SetBinContent(30,1.712529);
   0->SetBinContent(31,1.484852);
   0->SetBinContent(32,1.494751);
   0->SetBinContent(33,1.465054);
   0->SetBinContent(34,1.880813);
   0->SetBinContent(35,1.653135);
   0->SetBinContent(36,1.821419);
   0->SetBinContent(37,2.306467);
   0->SetBinContent(38,2.068893);
   0->SetBinContent(39,2.256972);
   0->SetBinContent(40,2.445051);
   0->SetBinContent(41,2.375759);
   0->SetBinContent(42,2.9103);
   0->SetBinContent(43,2.949895);
   0->SetBinContent(44,2.99939);
   0->SetBinContent(45,3.365649);
   0->SetBinContent(46,3.702212);
   0->SetBinContent(47,4.246657);
   0->SetBinContent(48,4.504035);
   0->SetBinContent(49,5.404857);
   0->SetBinContent(50,5.929511);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,1);
   1->SetBinContent(1,0.7176042);
   1->SetBinContent(2,0.6235737);
   1->SetBinContent(3,0.6631655);
   1->SetBinContent(4,0.5839819);
   1->SetBinContent(5,0.6433696);
   1->SetBinContent(6,0.6235737);
   1->SetBinContent(7,0.6384206);
   1->SetBinContent(8,0.6235737);
   1->SetBinContent(9,0.6879103);
   1->SetBinContent(10,0.6681144);
   1->SetBinContent(11,0.7819408);
   1->SetBinContent(12,0.752247);
   1->SetBinContent(13,0.7374001);
   1->SetBinContent(14,0.6285226);
   1->SetBinContent(15,0.8611244);
   1->SetBinContent(16,0.8512264);
   1->SetBinContent(17,0.7126552);
   1->SetBinContent(18,0.7819408);
   1->SetBinContent(19,0.8017367);
   1->SetBinContent(20,0.8710223);
   1->SetBinContent(21,0.8759713);
   1->SetBinContent(22,0.7868898);
   1->SetBinContent(23,0.8858693);
   1->SetBinContent(24,0.7868898);
   1->SetBinContent(25,0.9155631);
   1->SetBinContent(26,0.8512264);
   1->SetBinContent(27,0.9502059);
   1->SetBinContent(28,1.004645);
   1->SetBinContent(29,0.9106141);
   1->SetBinContent(30,0.9700018);
   1->SetBinContent(31,1.049185);
   1->SetBinContent(32,1.192706);
   1->SetBinContent(33,1.261991);
   1->SetBinContent(34,1.158063);
   1->SetBinContent(35,1.296634);
   1->SetBinContent(36,1.385716);
   1->SetBinContent(37,1.440154);
   1->SetBinContent(38,1.455001);
   1->SetBinContent(39,1.563879);
   1->SetBinContent(40,1.563879);
   1->SetBinContent(41,1.737093);
   1->SetBinContent(42,1.959797);
   1->SetBinContent(43,2.068676);
   1->SetBinContent(44,2.227046);
   1->SetBinContent(45,2.563585);
   1->SetBinContent(46,3.048596);
   1->SetBinContent(47,3.142629);
   1->SetBinContent(48,3.62764);
   1->SetBinContent(49,4.370004);
   1->SetBinContent(50,5.330128);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,1);
   2->SetBinContent(1,1.435205);
   2->SetBinContent(2,1.286736);
   2->SetBinContent(3,1.321379);
   2->SetBinContent(4,1.385716);
   2->SetBinContent(5,1.31643);
   2->SetBinContent(6,1.395614);
   2->SetBinContent(7,1.50944);
   2->SetBinContent(8,1.440154);
   2->SetBinContent(9,1.331277);
   2->SetBinContent(10,1.430256);
   2->SetBinContent(11,1.469848);
   2->SetBinContent(12,1.643062);
   2->SetBinContent(13,1.578726);
   2->SetBinContent(14,1.55893);
   2->SetBinContent(15,1.499542);
   2->SetBinContent(16,1.65296);
   2->SetBinContent(17,1.55893);
   2->SetBinContent(18,1.65296);
   2->SetBinContent(19,1.737093);
   2->SetBinContent(20,1.742042);
   2->SetBinContent(21,1.697501);
   2->SetBinContent(22,1.836072);
   2->SetBinContent(23,1.662858);
   2->SetBinContent(24,2.133014);
   2->SetBinContent(25,1.826174);
   2->SetBinContent(26,2.009286);
   2->SetBinContent(27,1.935052);
   2->SetBinContent(28,1.964746);
   2->SetBinContent(29,2.15281);
   2->SetBinContent(30,2.128065);
   2->SetBinContent(31,2.291385);
   2->SetBinContent(32,2.15281);
   2->SetBinContent(33,2.335927);
   2->SetBinContent(34,2.647719);
   2->SetBinContent(35,2.568534);
   2->SetBinContent(36,2.677414);
   2->SetBinContent(37,3.157476);
   2->SetBinContent(38,2.939716);
   2->SetBinContent(39,3.033749);
   2->SetBinContent(40,3.434625);
   2->SetBinContent(41,3.662283);
   2->SetBinContent(42,3.677131);
   2->SetBinContent(43,4.419495);
   2->SetBinContent(44,4.454138);
   2->SetBinContent(45,4.953997);
   2->SetBinContent(46,5.513244);
   2->SetBinContent(47,5.97351);
   2->SetBinContent(48,7.022717);
   2->SetBinContent(49,8.428219);
   2->SetBinContent(50,10.09095);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,1);
   3->SetBinContent(1,6.786755);
   3->SetBinContent(2,7.630876);
   3->SetBinContent(3,8.069819);
   3->SetBinContent(4,7.597111);
   3->SetBinContent(5,7.968524);
   3->SetBinContent(6,7.225698);
   3->SetBinContent(7,7.023109);
   3->SetBinContent(8,7.191933);
   3->SetBinContent(9,7.293228);
   3->SetBinContent(10,7.056874);
   3->SetBinContent(11,6.82052);
   3->SetBinContent(12,7.326993);
   3->SetBinContent(13,7.698406);
   3->SetBinContent(14,7.191933);
   3->SetBinContent(15,6.854285);
   3->SetBinContent(16,7.563346);
   3->SetBinContent(17,8.778881);
   3->SetBinContent(18,8.407468);
   3->SetBinContent(19,9.251589);
   3->SetBinContent(20,8.441233);
   3->SetBinContent(21,8.576292);
   3->SetBinContent(22,8.711351);
   3->SetBinContent(23,8.407468);
   3->SetBinContent(24,7.968524);
   3->SetBinContent(25,9.352883);
   3->SetBinContent(26,9.184059);
   3->SetBinContent(27,9.049);
   3->SetBinContent(28,9.623002);
   3->SetBinContent(29,9.893121);
   3->SetBinContent(30,10.09571);
   3->SetBinContent(31,9.015235);
   3->SetBinContent(32,11.00736);
   3->SetBinContent(33,11.5476);
   3->SetBinContent(34,10.83854);
   3->SetBinContent(35,11.37877);
   3->SetBinContent(36,11.51383);
   3->SetBinContent(37,11.27748);
   3->SetBinContent(38,12.56054);
   3->SetBinContent(39,13.60725);
   3->SetBinContent(40,14.38384);
   3->SetBinContent(41,14.48514);
   3->SetBinContent(42,15.2955);
   3->SetBinContent(43,16.47728);
   3->SetBinContent(44,17.55778);
   3->SetBinContent(45,16.67987);
   3->SetBinContent(46,21.44085);
   3->SetBinContent(47,21.10319);
   3->SetBinContent(48,22.89278);
   3->SetBinContent(49,26.64078);
   3->SetBinContent(50,34.84571);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,1);
   4->SetBinContent(1,7.303227);
   4->SetBinContent(2,7.368824);
   4->SetBinContent(3,7.915471);
   4->SetBinContent(4,7.696812);
   4->SetBinContent(5,8.13413);
   4->SetBinContent(6,7.368824);
   4->SetBinContent(7,8.483983);
   4->SetBinContent(8,8.046666);
   4->SetBinContent(9,7.871739);
   4->SetBinContent(10,7.981068);
   4->SetBinContent(11,8.28719);
   4->SetBinContent(12,8.440251);
   4->SetBinContent(13,7.937336);
   4->SetBinContent(14,8.549581);
   4->SetBinContent(15,7.543751);
   4->SetBinContent(16,8.39652);
   4->SetBinContent(17,9.489812);
   4->SetBinContent(18,8.462117);
   4->SetBinContent(19,8.352788);
   4->SetBinContent(20,8.637044);
   4->SetBinContent(21,8.899434);
   4->SetBinContent(22,9.139958);
   4->SetBinContent(23,9.249288);
   4->SetBinContent(24,8.702641);
   4->SetBinContent(25,9.096227);
   4->SetBinContent(26,9.664739);
   4->SetBinContent(27,8.811971);
   4->SetBinContent(28,9.642873);
   4->SetBinContent(29,10.45191);
   4->SetBinContent(30,9.664739);
   4->SetBinContent(31,10.69243);
   4->SetBinContent(32,11.4796);
   4->SetBinContent(33,11.02042);
   4->SetBinContent(34,11.23908);
   4->SetBinContent(35,12.02625);
   4->SetBinContent(36,11.6764);
   4->SetBinContent(37,12.33237);
   4->SetBinContent(38,13.38193);
   4->SetBinContent(39,13.29447);
   4->SetBinContent(40,14.69388);
   4->SetBinContent(41,14.56269);
   4->SetBinContent(42,15.80904);
   4->SetBinContent(43,16.9898);
   4->SetBinContent(44,17.86443);
   4->SetBinContent(45,19.02332);
   4->SetBinContent(46,20.02915);
   4->SetBinContent(47,22.28133);
   4->SetBinContent(48,24.35859);
   4->SetBinContent(49,27.6166);
   4->SetBinContent(50,36.05682);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,1);
   5->SetBinContent(1,27.623);
   5->SetBinContent(2,27.39039);
   5->SetBinContent(3,27.85562);
   5->SetBinContent(4,29.60021);
   5->SetBinContent(5,28.61161);
   5->SetBinContent(6,31.92634);
   5->SetBinContent(7,28.20454);
   5->SetBinContent(8,28.4953);
   5->SetBinContent(9,31.98449);
   5->SetBinContent(10,29.83282);
   5->SetBinContent(11,31.28665);
   5->SetBinContent(12,28.379);
   5->SetBinContent(13,30.64697);
   5->SetBinContent(14,30.93773);
   5->SetBinContent(15,32.33342);
   5->SetBinContent(16,29.94913);
   5->SetBinContent(17,31.81003);
   5->SetBinContent(18,32.1008);
   5->SetBinContent(19,32.74051);
   5->SetBinContent(20,32.85682);
   5->SetBinContent(21,33.2639);
   5->SetBinContent(22,32.85682);
   5->SetBinContent(23,36.69505);
   5->SetBinContent(24,30.58882);
   5->SetBinContent(25,34.71778);
   5->SetBinContent(26,37.39291);
   5->SetBinContent(27,38.20708);
   5->SetBinContent(28,38.38155);
   5->SetBinContent(29,37.45107);
   5->SetBinContent(30,39.07941);
   5->SetBinContent(31,39.71911);
   5->SetBinContent(32,44.48783);
   5->SetBinContent(33,43.09211);
   5->SetBinContent(34,43.26657);
   5->SetBinContent(35,43.38288);
   5->SetBinContent(36,45.47646);
   5->SetBinContent(37,46.93034);
   5->SetBinContent(38,50.65226);
   5->SetBinContent(39,49.60547);
   5->SetBinContent(40,56.00253);
   5->SetBinContent(41,55.6536);
   5->SetBinContent(42,59.02659);
   5->SetBinContent(43,63.73715);
   5->SetBinContent(44,66.58658);
   5->SetBinContent(45,71.93649);
   5->SetBinContent(46,75.19296);
   5->SetBinContent(47,79.72876);
   5->SetBinContent(48,90.02153);
   5->SetBinContent(49,99.67464);
   5->SetBinContent(50,113.4565);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,1);
   6->SetBinContent(1,625.3513);
   6->SetBinContent(2,597.2849);
   6->SetBinContent(3,640.2615);
   6->SetBinContent(4,604.3015);
   6->SetBinContent(5,567.4643);
   6->SetBinContent(6,619.2117);
   6->SetBinContent(7,640.2615);
   6->SetBinContent(8,610.441);
   6->SetBinContent(9,646.4011);
   6->SetBinContent(10,625.3513);
   6->SetBinContent(11,617.4576);
   6->SetBinContent(12,650.7864);
   6->SetBinContent(13,650.7864);
   6->SetBinContent(14,604.3015);
   6->SetBinContent(15,654.2947);
   6->SetBinContent(16,691.1319);
   6->SetBinContent(17,682.3611);
   6->SetBinContent(18,614.8264);
   6->SetBinContent(19,707.7963);
   6->SetBinContent(20,747.2647);
   6->SetBinContent(21,760.4208);
   6->SetBinContent(22,757.7896);
   6->SetBinContent(23,777.9623);
   6->SetBinContent(24,814.7995);
   6->SetBinContent(25,880.5801);
   6->SetBinContent(26,874.4406);
   6->SetBinContent(27,828.8327);
   6->SetBinContent(28,938.4671);
   6->SetBinContent(29,939.3442);
   6->SetBinContent(30,979.6896);
   6->SetBinContent(31,983.1979);
   6->SetBinContent(32,1045.47);
   6->SetBinContent(33,1090.201);
   6->SetBinContent(34,1127.038);
   6->SetBinContent(35,1200.713);
   6->SetBinContent(36,1268.247);
   6->SetBinContent(37,1291.051);
   6->SetBinContent(38,1362.094);
   6->SetBinContent(39,1475.237);
   6->SetBinContent(40,1641.881);
   6->SetBinContent(41,1694.506);
   6->SetBinContent(42,1852.379);
   6->SetBinContent(43,2019.901);
   6->SetBinContent(44,2108.477);
   6->SetBinContent(45,2392.61);
   6->SetBinContent(46,2702.174);
   6->SetBinContent(47,3165.206);
   6->SetBinContent(48,3610.698);
   6->SetBinContent(49,4328.045);
   6->SetBinContent(50,5413.713);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,1);
   7->SetBinContent(1,193.5026);
   7->SetBinContent(2,192.9501);
   7->SetBinContent(3,201.2375);
   7->SetBinContent(4,186.5965);
   7->SetBinContent(5,191.4308);
   7->SetBinContent(6,190.8783);
   7->SetBinContent(7,196.5413);
   7->SetBinContent(8,192.5358);
   7->SetBinContent(9,206.7624);
   7->SetBinContent(10,197.3701);
   7->SetBinContent(11,203.8618);
   7->SetBinContent(12,208.0055);
   7->SetBinContent(13,201.9281);
   7->SetBinContent(14,199.8563);
   7->SetBinContent(15,200.5469);
   7->SetBinContent(16,218.6409);
   7->SetBinContent(17,196.127);
   7->SetBinContent(18,202.6187);
   7->SetBinContent(19,198.6132);
   7->SetBinContent(20,212.4254);
   7->SetBinContent(21,218.6409);
   7->SetBinContent(22,223.199);
   7->SetBinContent(23,219.7459);
   7->SetBinContent(24,220.7128);
   7->SetBinContent(25,215.6022);
   7->SetBinContent(26,226.5139);
   7->SetBinContent(27,225.2708);
   7->SetBinContent(28,236.4588);
   7->SetBinContent(29,237.7019);
   7->SetBinContent(30,236.735);
   7->SetBinContent(31,232.3151);
   7->SetBinContent(32,246.4036);
   7->SetBinContent(33,255.7959);
   7->SetBinContent(34,252.6191);
   7->SetBinContent(35,261.1827);
   7->SetBinContent(36,269.1938);
   7->SetBinContent(37,270.2988);
   7->SetBinContent(38,267.9507);
   7->SetBinContent(39,282.3154);
   7->SetBinContent(40,307.4537);
   7->SetBinContent(41,310.4924);
   7->SetBinContent(42,318.3654);
   7->SetBinContent(43,329.8296);
   7->SetBinContent(44,336.8738);
   7->SetBinContent(45,355.7966);
   7->SetBinContent(46,367.1227);
   7->SetBinContent(47,410.4932);
   7->SetBinContent(48,457.8692);
   7->SetBinContent(49,498.4772);
   7->SetBinContent(50,559.5274);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,1);
   8->SetBinContent(1,24.02087);
   8->SetBinContent(2,24.94475);
   8->SetBinContent(3,36.03132);
   8->SetBinContent(4,21.24924);
   8->SetBinContent(5,34.18356);
   8->SetBinContent(6,23.09699);
   8->SetBinContent(7,32.33579);
   8->SetBinContent(8,29.56415);
   8->SetBinContent(9,32.33579);
   8->SetBinContent(10,24.02087);
   8->SetBinContent(11,31.41191);
   8->SetBinContent(12,36.03132);
   8->SetBinContent(13,30.48803);
   8->SetBinContent(14,36.9552);
   8->SetBinContent(15,25.86863);
   8->SetBinContent(16,33.25967);
   8->SetBinContent(17,28.64027);
   8->SetBinContent(18,31.41191);
   8->SetBinContent(19,27.71639);
   8->SetBinContent(20,27.71639);
   8->SetBinContent(21,41.57461);
   8->SetBinContent(22,33.25967);
   8->SetBinContent(23,37.87908);
   8->SetBinContent(24,34.18356);
   8->SetBinContent(25,30.48803);
   8->SetBinContent(26,27.71639);
   8->SetBinContent(27,33.25967);
   8->SetBinContent(28,40.65073);
   8->SetBinContent(29,31.41191);
   8->SetBinContent(30,29.56415);
   8->SetBinContent(31,31.41191);
   8->SetBinContent(32,34.18356);
   8->SetBinContent(33,30.48803);
   8->SetBinContent(34,29.56415);
   8->SetBinContent(35,42.49849);
   8->SetBinContent(36,31.41191);
   8->SetBinContent(37,37.87908);
   8->SetBinContent(38,46.19402);
   8->SetBinContent(39,56.35671);
   8->SetBinContent(40,52.66119);
   8->SetBinContent(41,48.96566);
   8->SetBinContent(42,41.57461);
   8->SetBinContent(43,48.96566);
   8->SetBinContent(44,53.58507);
   8->SetBinContent(45,54.50895);
   8->SetBinContent(46,79.45375);
   8->SetBinContent(47,83.14928);
   8->SetBinContent(48,86.8448);
   8->SetBinContent(49,104.3986);
   8->SetBinContent(50,134.8866);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,1);
   9->SetBinContent(1,187.6938);
   9->SetBinContent(2,166.1553);
   9->SetBinContent(3,168.3531);
   9->SetBinContent(4,177.5839);
   9->SetBinContent(5,164.8367);
   9->SetBinContent(6,184.6169);
   9->SetBinContent(7,170.1114);
   9->SetBinContent(8,175.3861);
   9->SetBinContent(9,173.1883);
   9->SetBinContent(10,175.8257);
   9->SetBinContent(11,177.1443);
   9->SetBinContent(12,181.1004);
   9->SetBinContent(13,177.5839);
   9->SetBinContent(14,174.507);
   9->SetBinContent(15,199.5619);
   9->SetBinContent(16,191.6498);
   9->SetBinContent(17,175.3861);
   9->SetBinContent(18,189.0125);
   9->SetBinContent(19,204.397);
   9->SetBinContent(20,210.5509);
   9->SetBinContent(21,186.8147);
   9->SetBinContent(22,202.1992);
   9->SetBinContent(23,196.0454);
   9->SetBinContent(24,195.1663);
   9->SetBinContent(25,192.9685);
   9->SetBinContent(26,211.8696);
   9->SetBinContent(27,213.1882);
   9->SetBinContent(28,203.0784);
   9->SetBinContent(29,229.8915);
   9->SetBinContent(30,244.8366);
   9->SetBinContent(31,238.6827);
   9->SetBinContent(32,230.7706);
   9->SetBinContent(33,253.1882);
   9->SetBinContent(34,258.9026);
   9->SetBinContent(35,259.7817);
   9->SetBinContent(36,294.5082);
   9->SetBinContent(37,281.7605);
   9->SetBinContent(38,301.1018);
   9->SetBinContent(39,315.1682);
   9->SetBinContent(40,330.5533);
   9->SetBinContent(41,338.4657);
   9->SetBinContent(42,352.9717);
   9->SetBinContent(43,391.2147);
   9->SetBinContent(44,434.2931);
   9->SetBinContent(45,458.4697);
   9->SetBinContent(46,552.9784);
   9->SetBinContent(47,621.5521);
   9->SetBinContent(48,752.5455);
   9->SetBinContent(49,1005.301);
   9->SetBinContent(50,2094.995);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,1);
   10->SetBinContent(1,2015.84);
   10->SetBinContent(2,2033.017);
   10->SetBinContent(3,2008.853);
   10->SetBinContent(4,2025.157);
   10->SetBinContent(5,2007.397);
   10->SetBinContent(6,2027.195);
   10->SetBinContent(7,2049.613);
   10->SetBinContent(8,1990.802);
   10->SetBinContent(9,2034.764);
   10->SetBinContent(10,2112.525);
   10->SetBinContent(11,2060.681);
   10->SetBinContent(12,2117.185);
   10->SetBinContent(13,2116.603);
   10->SetBinContent(14,2080.778);
   10->SetBinContent(15,2102.331);
   10->SetBinContent(16,2154.466);
   10->SetBinContent(17,2174.854);
   10->SetBinContent(18,2216.796);
   10->SetBinContent(19,2206.602);
   10->SetBinContent(20,2221.165);
   10->SetBinContent(21,2286.407);
   10->SetBinContent(22,2321.067);
   10->SetBinContent(23,2349.028);
   10->SetBinContent(24,2399.707);
   10->SetBinContent(25,2396.794);
   10->SetBinContent(26,2452.134);
   10->SetBinContent(27,2499.318);
   10->SetBinContent(28,2602.715);
   10->SetBinContent(29,2621.938);
   10->SetBinContent(30,2674.656);
   10->SetBinContent(31,2721.549);
   10->SetBinContent(32,2798.733);
   10->SetBinContent(33,2866.014);
   10->SetBinContent(34,2974.654);
   10->SetBinContent(35,3114.75);
   10->SetBinContent(36,3190.477);
   10->SetBinContent(37,3253.389);
   10->SetBinContent(38,3387.951);
   10->SetBinContent(39,3534.455);
   10->SetBinContent(40,3644.551);
   10->SetBinContent(41,3800.375);
   10->SetBinContent(42,3977.752);
   10->SetBinContent(43,4239.475);
   10->SetBinContent(44,4473.16);
   10->SetBinContent(45,4774.652);
   10->SetBinContent(46,5216.705);
   10->SetBinContent(47,5666.615);
   10->SetBinContent(48,6227.984);
   10->SetBinContent(49,7038.172);
   10->SetBinContent(50,8486.266);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,1);
   11->SetBinContent(1,152.6042);
   11->SetBinContent(2,274.6875);
   11->SetBinContent(3,244.1666);
   11->SetBinContent(4,213.6458);
   11->SetBinContent(5,244.1666);
   11->SetBinContent(6,244.1666);
   11->SetBinContent(7,244.1666);
   11->SetBinContent(8,274.6875);
   11->SetBinContent(9,213.6458);
   11->SetBinContent(10,213.6458);
   11->SetBinContent(11,366.25);
   11->SetBinContent(12,213.6458);
   11->SetBinContent(13,274.6875);
   11->SetBinContent(14,335.7292);
   11->SetBinContent(15,396.7708);
   11->SetBinContent(16,335.7292);
   11->SetBinContent(17,396.7708);
   11->SetBinContent(18,213.6458);
   11->SetBinContent(19,427.2917);
   11->SetBinContent(20,274.6875);
   11->SetBinContent(21,427.2917);
   11->SetBinContent(22,213.6458);
   11->SetBinContent(23,305.2083);
   11->SetBinContent(24,396.7708);
   11->SetBinContent(25,213.6458);
   11->SetBinContent(26,335.7292);
   11->SetBinContent(27,335.7292);
   11->SetBinContent(28,610.4166);
   11->SetBinContent(29,366.25);
   11->SetBinContent(30,457.8125);
   11->SetBinContent(31,427.2917);
   11->SetBinContent(32,671.4583);
   11->SetBinContent(33,549.375);
   11->SetBinContent(34,305.2083);
   11->SetBinContent(35,427.2917);
   11->SetBinContent(36,549.375);
   11->SetBinContent(37,488.3334);
   11->SetBinContent(38,763.0207);
   11->SetBinContent(39,701.9791);
   11->SetBinContent(40,1037.708);
   11->SetBinContent(41,854.5831);
   11->SetBinContent(42,793.5415);
   11->SetBinContent(43,824.0623);
   11->SetBinContent(44,1556.563);
   11->SetBinContent(45,1312.396);
   11->SetBinContent(46,1342.917);
   11->SetBinContent(47,1648.125);
   11->SetBinContent(48,2472.188);
   11->SetBinContent(49,2868.957);
   11->SetBinContent(50,3326.769);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,1);
   12->SetBinContent(1,146.0553);
   12->SetBinContent(2,119.5648);
   12->SetBinContent(3,128.1563);
   12->SetBinContent(4,143.1914);
   12->SetBinContent(5,122.4287);
   12->SetBinContent(6,144.6234);
   12->SetBinContent(7,158.9425);
   12->SetBinContent(8,135.3159);
   12->SetBinContent(9,136.0319);
   12->SetBinContent(10,142.4755);
   12->SetBinContent(11,138.1797);
   12->SetBinContent(12,143.1914);
   12->SetBinContent(13,148.2031);
   12->SetBinContent(14,134.5999);
   12->SetBinContent(15,152.4989);
   12->SetBinContent(16,153.9308);
   12->SetBinContent(17,140.3276);
   12->SetBinContent(18,181.8531);
   12->SetBinContent(19,168.25);
   12->SetBinContent(20,156.0787);
   12->SetBinContent(21,161.8063);
   12->SetBinContent(22,186.8649);
   12->SetBinContent(23,200.468);
   12->SetBinContent(24,192.5925);
   12->SetBinContent(25,209.0595);
   12->SetBinContent(26,171.8297);
   12->SetBinContent(27,190.4446);
   12->SetBinContent(28,200.468);
   12->SetBinContent(29,216.2191);
   12->SetBinContent(30,225.5266);
   12->SetBinContent(31,220.5149);
   12->SetBinContent(32,249.8691);
   12->SetBinContent(33,258.4606);
   12->SetBinContent(34,288.5302);
   12->SetBinContent(35,272.7794);
   12->SetBinContent(36,284.2345);
   12->SetBinContent(37,299.2693);
   12->SetBinContent(38,317.1678);
   12->SetBinContent(39,346.5215);
   12->SetBinContent(40,366.5679);
   12->SetBinContent(41,398.7853);
   12->SetBinContent(42,461.7882);
   12->SetBinContent(43,484.6984);
   12->SetBinContent(44,602.1129);
   12->SetBinContent(45,631.4666);
   12->SetBinContent(46,693.7535);
   12->SetBinContent(47,824.771);
   12->SetBinContent(48,942.9015);
   12->SetBinContent(49,1082.51);
   12->SetBinContent(50,1704.664);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,1);
   13->SetBinContent(1,3952.836);
   13->SetBinContent(2,2756.583);
   13->SetBinContent(3,2964.627);
   13->SetBinContent(4,3536.748);
   13->SetBinContent(5,3120.66);
   13->SetBinContent(6,3900.825);
   13->SetBinContent(7,3120.66);
   13->SetBinContent(8,3744.792);
   13->SetBinContent(9,3744.792);
   13->SetBinContent(10,3328.704);
   13->SetBinContent(11,3640.77);
   13->SetBinContent(12,3536.748);
   13->SetBinContent(13,3692.781);
   13->SetBinContent(14,2912.616);
   13->SetBinContent(15,3848.814);
   13->SetBinContent(16,4056.858);
   13->SetBinContent(17,4056.858);
   13->SetBinContent(18,3744.792);
   13->SetBinContent(19,3536.748);
   13->SetBinContent(20,4108.869);
   13->SetBinContent(21,4628.981);
   13->SetBinContent(22,4628.981);
   13->SetBinContent(23,3952.836);
   13->SetBinContent(24,4212.892);
   13->SetBinContent(25,4368.925);
   13->SetBinContent(26,4733.004);
   13->SetBinContent(27,5305.127);
   13->SetBinContent(28,5305.127);
   13->SetBinContent(29,5305.127);
   13->SetBinContent(30,5773.229);
   13->SetBinContent(31,5877.251);
   13->SetBinContent(32,5461.161);
   13->SetBinContent(33,7385.577);
   13->SetBinContent(34,6085.296);
   13->SetBinContent(35,5877.251);
   13->SetBinContent(36,7333.565);
   13->SetBinContent(37,7125.521);
   13->SetBinContent(38,7853.678);
   13->SetBinContent(39,8841.885);
   13->SetBinContent(40,9466.014);
   13->SetBinContent(41,11546.44);
   13->SetBinContent(42,12170.57);
   13->SetBinContent(43,11702.48);
   13->SetBinContent(44,15343.23);
   13->SetBinContent(45,16487.46);
   13->SetBinContent(46,16799.54);
   13->SetBinContent(47,21844.67);
   13->SetBinContent(48,24809.34);
   13->SetBinContent(49,26577.74);
   13->SetBinContent(50,29490.39);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,1);
   14->SetBinContent(1,814.4028);
   14->SetBinContent(2,916.2031);
   14->SetBinContent(3,943.9669);
   14->SetBinContent(4,888.4394);
   14->SetBinContent(5,879.1848);
   14->SetBinContent(6,1064.276);
   14->SetBinContent(7,869.9302);
   14->SetBinContent(8,999.4943);
   14->SetBinContent(9,999.4943);
   14->SetBinContent(10,1064.276);
   14->SetBinContent(11,851.4211);
   14->SetBinContent(12,980.9852);
   14->SetBinContent(13,953.2214);
   14->SetBinContent(14,1064.276);
   14->SetBinContent(15,916.2031);
   14->SetBinContent(16,1027.258);
   14->SetBinContent(17,934.7123);
   14->SetBinContent(18,1147.567);
   14->SetBinContent(19,1055.022);
   14->SetBinContent(20,934.7123);
   14->SetBinContent(21,1055.022);
   14->SetBinContent(22,1018.003);
   14->SetBinContent(23,1018.003);
   14->SetBinContent(24,934.7123);
   14->SetBinContent(25,1147.567);
   14->SetBinContent(26,1064.276);
   14->SetBinContent(27,1323.403);
   14->SetBinContent(28,1286.385);
   14->SetBinContent(29,1156.821);
   14->SetBinContent(30,1240.112);
   14->SetBinContent(31,1378.93);
   14->SetBinContent(32,1369.675);
   14->SetBinContent(33,1369.675);
   14->SetBinContent(34,1360.421);
   14->SetBinContent(35,1675.074);
   14->SetBinContent(36,1619.547);
   14->SetBinContent(37,1564.02);
   14->SetBinContent(38,1860.165);
   14->SetBinContent(39,1684.329);
   14->SetBinContent(40,1989.728);
   14->SetBinContent(41,1980.473);
   14->SetBinContent(42,2258.112);
   14->SetBinContent(43,2406.186);
   14->SetBinContent(44,2211.838);
   14->SetBinContent(45,2915.191);
   14->SetBinContent(46,2998.483);
   14->SetBinContent(47,3664.817);
   14->SetBinContent(48,4645.794);
   14->SetBinContent(49,5312.11);
   14->SetBinContent(50,8180.973);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,1);
   15->SetBinContent(1,392.6546);
   15->SetBinContent(2,420.7013);
   15->SetBinContent(3,336.5611);
   15->SetBinContent(4,392.6546);
   15->SetBinContent(5,504.8416);
   15->SetBinContent(6,364.6078);
   15->SetBinContent(7,448.7481);
   15->SetBinContent(8,504.8416);
   15->SetBinContent(9,532.8884);
   15->SetBinContent(10,560.9351);
   15->SetBinContent(11,420.7013);
   15->SetBinContent(12,308.5143);
   15->SetBinContent(13,364.6078);
   15->SetBinContent(14,420.7013);
   15->SetBinContent(15,588.9819);
   15->SetBinContent(16,588.9819);
   15->SetBinContent(17,196.3273);
   15->SetBinContent(18,336.5611);
   15->SetBinContent(19,476.7948);
   15->SetBinContent(20,476.7948);
   15->SetBinContent(21,336.5611);
   15->SetBinContent(22,476.7948);
   15->SetBinContent(23,532.8884);
   15->SetBinContent(24,476.7948);
   15->SetBinContent(25,336.5611);
   15->SetBinContent(26,308.5143);
   15->SetBinContent(27,504.8416);
   15->SetBinContent(28,448.7481);
   15->SetBinContent(29,532.8884);
   15->SetBinContent(30,504.8416);
   15->SetBinContent(31,476.7948);
   15->SetBinContent(32,560.9351);
   15->SetBinContent(33,588.9819);
   15->SetBinContent(34,392.6546);
   15->SetBinContent(35,588.9819);
   15->SetBinContent(36,476.7948);
   15->SetBinContent(37,420.7013);
   15->SetBinContent(38,701.1689);
   15->SetBinContent(39,308.5143);
   15->SetBinContent(40,813.3559);
   15->SetBinContent(41,532.8884);
   15->SetBinContent(42,673.1221);
   15->SetBinContent(43,869.4494);
   15->SetBinContent(44,813.3559);
   15->SetBinContent(45,869.4494);
   15->SetBinContent(46,588.9819);
   15->SetBinContent(47,869.4494);
   15->SetBinContent(48,925.5429);
   15->SetBinContent(49,1290.151);
   15->SetBinContent(50,1654.759);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,1);
   16->SetBinContent(1,127.4375);
   16->SetBinContent(2,74.33852);
   16->SetBinContent(3,84.95831);
   16->SetBinContent(4,116.8177);
   16->SetBinContent(5,138.0573);
   16->SetBinContent(6,84.95831);
   16->SetBinContent(7,116.8177);
   16->SetBinContent(8,191.1562);
   16->SetBinContent(9,148.677);
   16->SetBinContent(10,138.0573);
   16->SetBinContent(11,74.33852);
   16->SetBinContent(12,148.677);
   16->SetBinContent(13,169.9166);
   16->SetBinContent(14,84.95831);
   16->SetBinContent(15,84.95831);
   16->SetBinContent(16,63.71873);
   16->SetBinContent(17,31.85936);
   16->SetBinContent(18,138.0573);
   16->SetBinContent(19,127.4375);
   16->SetBinContent(20,223.0155);
   16->SetBinContent(21,138.0573);
   16->SetBinContent(22,53.09894);
   16->SetBinContent(23,148.677);
   16->SetBinContent(24,159.2968);
   16->SetBinContent(25,148.677);
   16->SetBinContent(26,169.9166);
   16->SetBinContent(27,201.7759);
   16->SetBinContent(28,138.0573);
   16->SetBinContent(29,148.677);
   16->SetBinContent(30,201.7759);
   16->SetBinContent(31,180.5364);
   16->SetBinContent(32,148.677);
   16->SetBinContent(33,286.7342);
   16->SetBinContent(34,254.8748);
   16->SetBinContent(35,276.1144);
   16->SetBinContent(36,159.2968);
   16->SetBinContent(37,307.9738);
   16->SetBinContent(38,201.7759);
   16->SetBinContent(39,201.7759);
   16->SetBinContent(40,244.2551);
   16->SetBinContent(41,318.5935);
   16->SetBinContent(42,392.932);
   16->SetBinContent(43,286.7342);
   16->SetBinContent(44,456.6507);
   16->SetBinContent(45,584.0883);
   16->SetBinContent(46,477.8903);
   16->SetBinContent(47,573.4684);
   16->SetBinContent(48,892.0628);
   16->SetBinContent(49,1253.135);
   16->SetBinContent(50,1656.686);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,1);
   17->SetBinContent(1,1338.052);
   17->SetBinContent(2,1155.591);
   17->SetBinContent(3,425.7439);
   17->SetBinContent(4,547.3851);
   17->SetBinContent(5,1338.052);
   17->SetBinContent(6,851.4879);
   17->SetBinContent(7,973.129);
   17->SetBinContent(8,973.129);
   17->SetBinContent(9,1094.77);
   17->SetBinContent(10,1398.873);
   17->SetBinContent(11,364.9234);
   17->SetBinContent(12,1338.052);
   17->SetBinContent(13,1277.232);
   17->SetBinContent(14,1216.411);
   17->SetBinContent(15,912.3084);
   17->SetBinContent(16,851.4879);
   17->SetBinContent(17,1338.052);
   17->SetBinContent(18,1277.232);
   17->SetBinContent(19,1338.052);
   17->SetBinContent(20,1033.95);
   17->SetBinContent(21,1459.693);
   17->SetBinContent(22,1459.693);
   17->SetBinContent(23,1581.335);
   17->SetBinContent(24,1520.514);
   17->SetBinContent(25,1277.232);
   17->SetBinContent(26,1216.411);
   17->SetBinContent(27,1398.873);
   17->SetBinContent(28,1216.411);
   17->SetBinContent(29,1459.693);
   17->SetBinContent(30,1155.591);
   17->SetBinContent(31,1520.514);
   17->SetBinContent(32,1277.232);
   17->SetBinContent(33,608.2056);
   17->SetBinContent(34,1216.411);
   17->SetBinContent(35,1277.232);
   17->SetBinContent(36,1520.514);
   17->SetBinContent(37,1520.514);
   17->SetBinContent(38,1824.617);
   17->SetBinContent(39,1642.155);
   17->SetBinContent(40,1398.873);
   17->SetBinContent(41,1885.437);
   17->SetBinContent(42,2067.899);
   17->SetBinContent(43,2615.284);
   17->SetBinContent(44,2067.899);
   17->SetBinContent(45,2007.078);
   17->SetBinContent(46,3284.31);
   17->SetBinContent(47,2797.746);
   17->SetBinContent(48,3770.875);
   17->SetBinContent(49,4987.29);
   17->SetBinContent(50,6629.451);
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
