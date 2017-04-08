{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:43:36 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.250511,1.31746,5.94615);
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
   
   TH1F *THStack_stack_17 = new TH1F("THStack_stack_17","",50,0,1);
   THStack_stack_17->SetMinimum(0.02540316);
   THStack_stack_17->SetMaximum(162336.8);
   THStack_stack_17->SetDirectory(0);
   THStack_stack_17->SetStats(0);
   THStack_stack_17->SetLineWidth(2);
   THStack_stack_17->SetMarkerSize(1.2);
   THStack_stack_17->GetXaxis()->SetTitle("Highest B tag of W* jets");
   THStack_stack_17->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_17->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_17->GetXaxis()->SetLabelColor(ci);
   THStack_stack_17->GetXaxis()->SetLabelFont(42);
   THStack_stack_17->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_17->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_17->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_17->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_17->GetXaxis()->SetTitleColor(ci);
   THStack_stack_17->GetXaxis()->SetTitleFont(42);
   THStack_stack_17->GetYaxis()->SetTitle("Number of events");
   THStack_stack_17->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_17->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_17->GetYaxis()->SetLabelColor(ci);
   THStack_stack_17->GetYaxis()->SetLabelFont(42);
   THStack_stack_17->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_17->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_17->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_17->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_17->GetYaxis()->SetTitleColor(ci);
   THStack_stack_17->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_17->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_17->GetZaxis()->SetLabelColor(ci);
   THStack_stack_17->GetZaxis()->SetLabelFont(42);
   THStack_stack_17->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_17->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_17->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_17->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_17->GetZaxis()->SetTitleColor(ci);
   THStack_stack_17->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_17);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,0.217778);
   0->SetBinContent(2,0.267273);
   0->SetBinContent(3,1.791721);
   0->SetBinContent(4,5.286067);
   0->SetBinContent(5,8.651774);
   0->SetBinContent(6,8.978446);
   0->SetBinContent(7,9.859469);
   0->SetBinContent(8,6.998618);
   0->SetBinContent(9,6.305678);
   0->SetBinContent(10,4.860404);
   0->SetBinContent(11,3.830898);
   0->SetBinContent(12,4.56343);
   0->SetBinContent(13,2.791513);
   0->SetBinContent(14,3.415144);
   0->SetBinContent(15,4.236758);
   0->SetBinContent(16,2.247073);
   0->SetBinContent(17,0.9206077);
   0->SetBinContent(18,0.8315165);
   0->SetBinContent(19,0.7919204);
   0->SetBinContent(20,0.5444449);
   0->SetBinContent(21,0.574142);
   0->SetBinContent(22,0.4850508);
   0->SetBinContent(23,0.346465);
   0->SetBinContent(24,0.4454549);
   0->SetBinContent(25,0.29697);
   0->SetBinContent(26,0.316768);
   0->SetBinContent(27,0.29697);
   0->SetBinContent(28,0.306869);
   0->SetBinContent(29,0.277172);
   0->SetBinContent(30,0.207879);
   0->SetBinContent(31,0.227677);
   0->SetBinContent(32,0.227677);
   0->SetBinContent(33,0.207879);
   0->SetBinContent(34,0.217778);
   0->SetBinContent(35,0.257374);
   0->SetBinContent(36,0.207879);
   0->SetBinContent(37,0.207879);
   0->SetBinContent(38,0.148485);
   0->SetBinContent(39,0.207879);
   0->SetBinContent(40,0.118788);
   0->SetBinContent(41,0.237576);
   0->SetBinContent(42,0.138586);
   0->SetBinContent(43,0.178182);
   0->SetBinContent(44,0.178182);
   0->SetBinContent(45,0.19798);
   0->SetBinContent(46,0.207879);
   0->SetBinContent(47,0.4256569);
   0->SetBinContent(48,0.6137381);
   0->SetBinContent(49,0.9107087);
   0->SetBinContent(50,4.009078);
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
   1->SetBinContent(1,1.019492);
   1->SetBinContent(2,0.123725);
   1->SetBinContent(3,0.8165836);
   1->SetBinContent(4,1.89546);
   1->SetBinContent(5,3.35544);
   1->SetBinContent(6,3.865196);
   1->SetBinContent(7,4.310615);
   1->SetBinContent(8,3.345541);
   1->SetBinContent(9,3.592996);
   1->SetBinContent(10,3.231712);
   1->SetBinContent(11,2.608127);
   1->SetBinContent(12,3.434625);
   1->SetBinContent(13,2.197352);
   1->SetBinContent(14,2.499247);
   1->SetBinContent(15,3.583098);
   1->SetBinContent(16,1.925154);
   1->SetBinContent(17,0.9996957);
   1->SetBinContent(18,0.7720429);
   1->SetBinContent(19,0.8512264);
   1->SetBinContent(20,0.8215326);
   1->SetBinContent(21,0.7621449);
   1->SetBinContent(22,0.6978083);
   1->SetBinContent(23,0.6829613);
   1->SetBinContent(24,0.6334716);
   1->SetBinContent(25,0.5938798);
   1->SetBinContent(26,0.5889308);
   1->SetBinContent(27,0.4998493);
   1->SetBinContent(28,0.5047983);
   1->SetBinContent(29,0.4553083);
   1->SetBinContent(30,0.3909712);
   1->SetBinContent(31,0.3909712);
   1->SetBinContent(32,0.4206652);
   1->SetBinContent(33,0.3662262);
   1->SetBinContent(34,0.2721951);
   1->SetBinContent(35,0.3117872);
   1->SetBinContent(36,0.3612772);
   1->SetBinContent(37,0.3662262);
   1->SetBinContent(38,0.3315832);
   1->SetBinContent(39,0.2474501);
   1->SetBinContent(40,0.3266342);
   1->SetBinContent(41,0.4157162);
   1->SetBinContent(42,0.3365322);
   1->SetBinContent(43,0.3068382);
   1->SetBinContent(44,0.3266342);
   1->SetBinContent(45,0.4008692);
   1->SetBinContent(46,0.554288);
   1->SetBinContent(47,0.8264816);
   1->SetBinContent(48,0.9056652);
   1->SetBinContent(49,1.781633);
   1->SetBinContent(50,6.324895);
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
   2->SetBinContent(1,2.103319);
   2->SetBinContent(2,0.3464302);
   2->SetBinContent(3,2.964461);
   2->SetBinContent(4,7.527525);
   2->SetBinContent(5,11.74379);
   2->SetBinContent(6,11.99122);
   2->SetBinContent(7,12.63454);
   2->SetBinContent(8,9.002258);
   2->SetBinContent(9,9.417942);
   2->SetBinContent(10,6.745568);
   2->SetBinContent(11,5.409313);
   2->SetBinContent(12,6.68123);
   2->SetBinContent(13,4.439291);
   2->SetBinContent(14,5.132164);
   2->SetBinContent(15,7.680947);
   2->SetBinContent(16,3.68208);
   2->SetBinContent(17,1.464899);
   2->SetBinContent(18,1.370869);
   2->SetBinContent(19,1.059083);
   2->SetBinContent(20,0.8759713);
   2->SetBinContent(21,0.9007162);
   2->SetBinContent(22,0.7374001);
   2->SetBinContent(23,0.742349);
   2->SetBinContent(24,0.6334716);
   2->SetBinContent(25,0.5839819);
   2->SetBinContent(26,0.6334716);
   2->SetBinContent(27,0.4701553);
   2->SetBinContent(28,0.4157162);
   2->SetBinContent(29,0.5146962);
   2->SetBinContent(30,0.3860222);
   2->SetBinContent(31,0.3266342);
   2->SetBinContent(32,0.3266342);
   2->SetBinContent(33,0.2919911);
   2->SetBinContent(34,0.3513792);
   2->SetBinContent(35,0.2721951);
   2->SetBinContent(36,0.4503593);
   2->SetBinContent(37,0.4058182);
   2->SetBinContent(38,0.3959202);
   2->SetBinContent(39,0.3315832);
   2->SetBinContent(40,0.3167362);
   2->SetBinContent(41,0.3612772);
   2->SetBinContent(42,0.2771441);
   2->SetBinContent(43,0.4058182);
   2->SetBinContent(44,0.4206652);
   2->SetBinContent(45,0.3860222);
   2->SetBinContent(46,0.5988288);
   2->SetBinContent(47,0.747298);
   2->SetBinContent(48,1.054134);
   2->SetBinContent(49,1.84597);
   2->SetBinContent(50,6.869296);
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
   3->SetBinContent(1,8.643822);
   3->SetBinContent(2,1.620719);
   3->SetBinContent(3,12.59431);
   3->SetBinContent(4,29.03815);
   3->SetBinContent(5,43.89443);
   3->SetBinContent(6,43.8269);
   3->SetBinContent(7,45.4138);
   3->SetBinContent(8,33.05622);
   3->SetBinContent(9,33.56268);
   3->SetBinContent(10,27.75505);
   3->SetBinContent(11,23.3655);
   3->SetBinContent(12,27.14727);
   3->SetBinContent(13,19.5162);
   3->SetBinContent(14,20.96813);
   3->SetBinContent(15,30.89527);
   3->SetBinContent(16,15.22797);
   3->SetBinContent(17,7.056874);
   3->SetBinContent(18,6.246518);
   3->SetBinContent(19,5.503691);
   3->SetBinContent(20,5.199808);
   3->SetBinContent(21,5.233572);
   3->SetBinContent(22,3.849213);
   3->SetBinContent(23,4.254392);
   3->SetBinContent(24,4.186862);
   3->SetBinContent(25,3.646623);
   3->SetBinContent(26,3.545327);
   3->SetBinContent(27,2.971321);
   3->SetBinContent(28,3.140146);
   3->SetBinContent(29,2.802496);
   3->SetBinContent(30,2.397315);
   3->SetBinContent(31,2.56614);
   3->SetBinContent(32,2.329785);
   3->SetBinContent(33,2.36355);
   3->SetBinContent(34,2.127194);
   3->SetBinContent(35,1.890839);
   3->SetBinContent(36,2.667435);
   3->SetBinContent(37,2.194724);
   3->SetBinContent(38,2.127194);
   3->SetBinContent(39,1.857074);
   3->SetBinContent(40,2.059664);
   3->SetBinContent(41,1.519425);
   3->SetBinContent(42,1.722014);
   3->SetBinContent(43,2.56614);
   3->SetBinContent(44,2.599905);
   3->SetBinContent(45,2.768731);
   3->SetBinContent(46,2.937556);
   3->SetBinContent(47,4.051803);
   3->SetBinContent(48,6.178988);
   3->SetBinContent(49,10.09571);
   3->SetBinContent(50,34.40678);
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
   4->SetBinContent(1,17.53644);
   4->SetBinContent(2,0.9621044);
   4->SetBinContent(3,9.074361);
   4->SetBinContent(4,23.37462);
   4->SetBinContent(5,37.80608);
   4->SetBinContent(6,42.06992);
   4->SetBinContent(7,44.54076);
   4->SetBinContent(8,36.66906);
   4->SetBinContent(9,37.21571);
   4->SetBinContent(10,30.65595);
   4->SetBinContent(11,27.44167);
   4->SetBinContent(12,31.68365);
   4->SetBinContent(13,22.41253);
   4->SetBinContent(14,27.6822);
   4->SetBinContent(15,42.5947);
   4->SetBinContent(16,19.39504);
   4->SetBinContent(17,8.352788);
   4->SetBinContent(18,6.581654);
   4->SetBinContent(19,5.81635);
   4->SetBinContent(20,4.985447);
   4->SetBinContent(21,4.329472);
   4->SetBinContent(22,4.635594);
   4->SetBinContent(23,3.782824);
   4->SetBinContent(24,3.564163);
   4->SetBinContent(25,3.236171);
   4->SetBinContent(26,3.214305);
   4->SetBinContent(27,2.580189);
   4->SetBinContent(28,2.776984);
   4->SetBinContent(29,2.602055);
   4->SetBinContent(30,1.989805);
   4->SetBinContent(31,1.727413);
   4->SetBinContent(32,1.814877);
   4->SetBinContent(33,2.055403);
   4->SetBinContent(34,1.836743);
   4->SetBinContent(35,1.399424);
   4->SetBinContent(36,2.099135);
   4->SetBinContent(37,2.230332);
   4->SetBinContent(38,1.793011);
   4->SetBinContent(39,1.989805);
   4->SetBinContent(40,1.749279);
   4->SetBinContent(41,1.946073);
   4->SetBinContent(42,2.033537);
   4->SetBinContent(43,2.164733);
   4->SetBinContent(44,2.033537);
   4->SetBinContent(45,2.055403);
   4->SetBinContent(46,2.820716);
   4->SetBinContent(47,4.001484);
   4->SetBinContent(48,5.466496);
   4->SetBinContent(49,7.587483);
   4->SetBinContent(50,33.65157);
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
   5->SetBinContent(1,34.07807);
   5->SetBinContent(2,9.304652);
   5->SetBinContent(3,56.70039);
   5->SetBinContent(4,131.1926);
   5->SetBinContent(5,197.8921);
   5->SetBinContent(6,193.996);
   5->SetBinContent(7,201.9045);
   5->SetBinContent(8,142.125);
   5->SetBinContent(9,139.5082);
   5->SetBinContent(10,112.7005);
   5->SetBinContent(11,93.278);
   5->SetBinContent(12,106.7109);
   5->SetBinContent(13,73.44843);
   5->SetBinContent(14,89.78893);
   5->SetBinContent(15,143.6951);
   5->SetBinContent(16,59.37552);
   5->SetBinContent(17,16.39945);
   5->SetBinContent(18,15.93422);
   5->SetBinContent(19,12.67759);
   5->SetBinContent(20,12.09605);
   5->SetBinContent(21,11.34005);
   5->SetBinContent(22,9.769885);
   5->SetBinContent(23,7.908954);
   5->SetBinContent(24,8.490495);
   5->SetBinContent(25,7.443721);
   5->SetBinContent(26,8.14157);
   5->SetBinContent(27,6.338793);
   5->SetBinContent(28,7.094797);
   5->SetBinContent(29,5.408328);
   5->SetBinContent(30,5.524636);
   5->SetBinContent(31,4.943095);
   5->SetBinContent(32,5.524636);
   5->SetBinContent(33,4.768632);
   5->SetBinContent(34,5.815406);
   5->SetBinContent(35,4.943095);
   5->SetBinContent(36,6.513256);
   5->SetBinContent(37,6.687718);
   5->SetBinContent(38,5.931715);
   5->SetBinContent(39,5.408328);
   5->SetBinContent(40,6.048023);
   5->SetBinContent(41,5.001249);
   5->SetBinContent(42,5.640944);
   5->SetBinContent(43,5.699098);
   5->SetBinContent(44,6.280639);
   5->SetBinContent(45,8.025262);
   5->SetBinContent(46,10.23512);
   5->SetBinContent(47,13.60806);
   5->SetBinContent(48,20.12125);
   5->SetBinContent(49,29.30945);
   5->SetBinContent(50,120.0276);
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
   6->SetBinContent(1,1546.28);
   6->SetBinContent(2,174.536);
   6->SetBinContent(3,1081.43);
   6->SetBinContent(4,2601.325);
   6->SetBinContent(5,4226.319);
   6->SetBinContent(6,4817.385);
   6->SetBinContent(7,5807.465);
   6->SetBinContent(8,4103.545);
   6->SetBinContent(9,4638.487);
   6->SetBinContent(10,3513.356);
   6->SetBinContent(11,2841.61);
   6->SetBinContent(12,3632.622);
   6->SetBinContent(13,2311.93);
   6->SetBinContent(14,2974.907);
   6->SetBinContent(15,4584.116);
   6->SetBinContent(16,1974.293);
   6->SetBinContent(17,642.0157);
   6->SetBinContent(18,522.7335);
   6->SetBinContent(19,432.3947);
   6->SetBinContent(20,418.3615);
   6->SetBinContent(21,370.9995);
   6->SetBinContent(22,349.9496);
   6->SetBinContent(23,291.1856);
   6->SetBinContent(24,250.8402);
   6->SetBinContent(25,255.2255);
   6->SetBinContent(26,250.8402);
   6->SetBinContent(27,215.7578);
   6->SetBinContent(28,222.7743);
   6->SetBinContent(29,191.2002);
   6->SetBinContent(30,192.0772);
   6->SetBinContent(31,175.4131);
   6->SetBinContent(32,185.0607);
   6->SetBinContent(33,166.6425);
   6->SetBinContent(34,142.9619);
   6->SetBinContent(35,123.6665);
   6->SetBinContent(36,213.1267);
   6->SetBinContent(37,187.6919);
   6->SetBinContent(38,173.659);
   6->SetBinContent(39,176.2901);
   6->SetBinContent(40,173.659);
   6->SetBinContent(41,171.9048);
   6->SetBinContent(42,167.5195);
   6->SetBinContent(43,156.1178);
   6->SetBinContent(44,190.3231);
   6->SetBinContent(45,216.6349);
   6->SetBinContent(46,230.6679);
   6->SetBinContent(47,335.0394);
   6->SetBinContent(48,480.6339);
   6->SetBinContent(49,810.4141);
   6->SetBinContent(50,3207.299);
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
   7->SetBinContent(1,188.8065);
   7->SetBinContent(2,69.47182);
   7->SetBinContent(3,428.5872);
   7->SetBinContent(4,900.2758);
   7->SetBinContent(5,1182.528);
   7->SetBinContent(6,1099.277);
   7->SetBinContent(7,1082.572);
   7->SetBinContent(8,787.0153);
   7->SetBinContent(9,778.0373);
   7->SetBinContent(10,609.2515);
   7->SetBinContent(11,500.1347);
   7->SetBinContent(12,629.2793);
   7->SetBinContent(13,439.637);
   7->SetBinContent(14,519.4719);
   7->SetBinContent(15,799.8607);
   7->SetBinContent(16,345.8518);
   7->SetBinContent(17,122.9223);
   7->SetBinContent(18,98.19972);
   7->SetBinContent(19,80.65913);
   7->SetBinContent(20,79.41609);
   7->SetBinContent(21,72.92469);
   7->SetBinContent(22,69.05747);
   7->SetBinContent(23,62.01361);
   7->SetBinContent(24,58.69885);
   7->SetBinContent(25,48.75457);
   7->SetBinContent(26,46.68285);
   7->SetBinContent(27,44.88736);
   7->SetBinContent(28,39.91522);
   7->SetBinContent(29,38.53407);
   7->SetBinContent(30,32.73324);
   7->SetBinContent(31,30.79963);
   7->SetBinContent(32,32.18078);
   7->SetBinContent(33,33.00947);
   7->SetBinContent(34,29.69471);
   7->SetBinContent(35,23.20331);
   7->SetBinContent(36,63.8091);
   7->SetBinContent(37,46.95908);
   7->SetBinContent(38,46.82096);
   7->SetBinContent(39,45.02547);
   7->SetBinContent(40,42.5394);
   7->SetBinContent(41,41.84883);
   7->SetBinContent(42,42.81563);
   7->SetBinContent(43,40.60579);
   7->SetBinContent(44,42.81563);
   7->SetBinContent(45,45.3017);
   7->SetBinContent(46,54.5554);
   7->SetBinContent(47,68.64313);
   7->SetBinContent(48,108.0059);
   7->SetBinContent(49,162.5632);
   7->SetBinContent(50,586.7375);
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
   8->SetBinContent(1,32.33579);
   8->SetBinContent(2,18.4776);
   8->SetBinContent(3,97.93138);
   8->SetBinContent(4,189.3951);
   8->SetBinContent(5,246.6753);
   8->SetBinContent(6,180.1564);
   8->SetBinContent(7,200.4816);
   8->SetBinContent(8,144.1253);
   8->SetBinContent(9,130.2672);
   8->SetBinContent(10,84.07316);
   8->SetBinContent(11,60.05224);
   8->SetBinContent(12,97.93138);
   8->SetBinContent(13,60.05224);
   8->SetBinContent(14,67.44329);
   8->SetBinContent(15,122.8762);
   8->SetBinContent(16,61.9);
   8->SetBinContent(17,16.62984);
   8->SetBinContent(18,6.46716);
   8->SetBinContent(19,9.2388);
   8->SetBinContent(20,5.54328);
   8->SetBinContent(21,10.16268);
   8->SetBinContent(22,2.77164);
   8->SetBinContent(23,7.39104);
   8->SetBinContent(24,2.77164);
   8->SetBinContent(25,7.39104);
   8->SetBinContent(26,1.84776);
   8->SetBinContent(27,1.84776);
   8->SetBinContent(28,3.69552);
   8->SetBinContent(29,2.77164);
   8->SetBinContent(30,0.92388);
   8->SetBinContent(31,0.92388);
   8->SetBinContent(32,3.69552);
   8->SetBinContent(33,1.84776);
   8->SetBinContent(34,2.77164);
   8->SetBinContent(35,1.84776);
   8->SetBinContent(36,13.8582);
   8->SetBinContent(37,18.4776);
   8->SetBinContent(38,18.4776);
   8->SetBinContent(39,11.08656);
   8->SetBinContent(40,14.78208);
   8->SetBinContent(41,9.2388);
   8->SetBinContent(42,9.2388);
   8->SetBinContent(43,10.16268);
   8->SetBinContent(44,3.69552);
   8->SetBinContent(45,7.39104);
   8->SetBinContent(46,8.31492);
   8->SetBinContent(47,8.31492);
   8->SetBinContent(48,12.01044);
   8->SetBinContent(49,16.62984);
   8->SetBinContent(50,13.8582);
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
   9->SetBinContent(1,156.9246);
   9->SetBinContent(2,84.39642);
   9->SetBinContent(3,494.5149);
   9->SetBinContent(4,972.7727);
   9->SetBinContent(5,1112.558);
   9->SetBinContent(6,1025.082);
   9->SetBinContent(7,1069.04);
   9->SetBinContent(8,748.1498);
   9->SetBinContent(9,749.4685);
   9->SetBinContent(10,578.0342);
   9->SetBinContent(11,438.6888);
   9->SetBinContent(12,595.6172);
   9->SetBinContent(13,383.7419);
   9->SetBinContent(14,447.0408);
   9->SetBinContent(15,613.2002);
   9->SetBinContent(16,327.4763);
   9->SetBinContent(17,165.7158);
   9->SetBinContent(18,131.4301);
   9->SetBinContent(19,119.1223);
   9->SetBinContent(20,112.9683);
   9->SetBinContent(21,101.1);
   9->SetBinContent(22,102.4187);
   9->SetBinContent(23,85.27556);
   9->SetBinContent(24,82.63815);
   9->SetBinContent(25,65.05545);
   9->SetBinContent(26,77.36334);
   9->SetBinContent(27,67.69286);
   9->SetBinContent(28,62.85762);
   9->SetBinContent(29,57.58286);
   9->SetBinContent(30,55.8246);
   9->SetBinContent(31,55.38504);
   9->SetBinContent(32,61.97849);
   9->SetBinContent(33,58.90155);
   9->SetBinContent(34,50.54984);
   9->SetBinContent(35,58.02242);
   9->SetBinContent(36,77.36334);
   9->SetBinContent(37,74.72594);
   9->SetBinContent(38,71.64896);
   9->SetBinContent(39,79.12161);
   9->SetBinContent(40,74.28637);
   9->SetBinContent(41,81.75902);
   9->SetBinContent(42,89.67123);
   9->SetBinContent(43,85.71513);
   9->SetBinContent(44,106.8144);
   9->SetBinContent(45,113.4079);
   9->SetBinContent(46,141.54);
   9->SetBinContent(47,186.3751);
   9->SetBinContent(48,266.8149);
   9->SetBinContent(49,482.2068);
   9->SetBinContent(50,2167.944);
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
   10->SetBinContent(1,3299.7);
   10->SetBinContent(2,529.2911);
   10->SetBinContent(3,3425.815);
   10->SetBinContent(4,7890.848);
   10->SetBinContent(5,11740.98);
   10->SetBinContent(6,11776.2);
   10->SetBinContent(7,12810.76);
   10->SetBinContent(8,9549.055);
   10->SetBinContent(9,9884.596);
   10->SetBinContent(10,7800.342);
   10->SetBinContent(11,6665.381);
   10->SetBinContent(12,8331.736);
   10->SetBinContent(13,5493.17);
   10->SetBinContent(14,6814.09);
   10->SetBinContent(15,10826.03);
   10->SetBinContent(16,4639.039);
   10->SetBinContent(17,1612.323);
   10->SetBinContent(18,1325.262);
   10->SetBinContent(19,1090.313);
   10->SetBinContent(20,1008.213);
   10->SetBinContent(21,909.808);
   10->SetBinContent(22,820.7199);
   10->SetBinContent(23,711.8344);
   10->SetBinContent(24,701.9357);
   10->SetBinContent(25,629.7336);
   10->SetBinContent(26,582.8604);
   10->SetBinContent(27,559.5694);
   10->SetBinContent(28,516.481);
   10->SetBinContent(29,470.4812);
   10->SetBinContent(30,423.0258);
   10->SetBinContent(31,423.3169);
   10->SetBinContent(32,414.5828);
   10->SetBinContent(33,392.1652);
   10->SetBinContent(34,363.0514);
   10->SetBinContent(35,331.0263);
   10->SetBinContent(36,579.3668);
   10->SetBinContent(37,542.3923);
   10->SetBinContent(38,473.6837);
   10->SetBinContent(39,445.1523);
   10->SetBinContent(40,417.4942);
   10->SetBinContent(41,412.5448);
   10->SetBinContent(42,423.6081);
   10->SetBinContent(43,436.4181);
   10->SetBinContent(44,479.2154);
   10->SetBinContent(45,544.7214);
   10->SetBinContent(46,634.1006);
   10->SetBinContent(47,837.897);
   10->SetBinContent(48,1198.034);
   10->SetBinContent(49,1973.334);
   10->SetBinContent(50,7562.873);
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
   11->SetBinContent(1,1037.708);
   11->SetBinContent(2,91.5625);
   11->SetBinContent(3,854.5831);
   11->SetBinContent(4,1770.209);
   11->SetBinContent(5,2960.52);
   11->SetBinContent(6,2868.957);
   11->SetBinContent(7,2960.52);
   11->SetBinContent(8,2258.542);
   11->SetBinContent(9,2075.418);
   11->SetBinContent(10,2258.542);
   11->SetBinContent(11,1465);
   11->SetBinContent(12,1556.563);
   11->SetBinContent(13,549.375);
   11->SetBinContent(14,1678.646);
   11->SetBinContent(15,2624.791);
   11->SetBinContent(16,763.0207);
   11->SetBinContent(17,366.25);
   11->SetBinContent(18,335.7292);
   11->SetBinContent(19,61.04166);
   11->SetBinContent(20,91.5625);
   11->SetBinContent(21,91.5625);
   11->SetBinContent(22,91.5625);
   11->SetBinContent(23,122.0833);
   11->SetBinContent(24,30.52083);
   11->SetBinContent(25,91.5625);
   11->SetBinContent(27,30.52083);
   11->SetBinContent(28,61.04166);
   11->SetBinContent(29,30.52083);
   11->SetBinContent(30,30.52083);
   11->SetBinContent(32,30.52083);
   11->SetBinContent(34,30.52083);
   11->SetBinContent(36,427.2917);
   11->SetBinContent(37,183.125);
   11->SetBinContent(38,183.125);
   11->SetBinContent(39,305.2083);
   11->SetBinContent(40,244.1666);
   11->SetBinContent(41,183.125);
   11->SetBinContent(42,61.04166);
   11->SetBinContent(43,122.0833);
   11->SetBinContent(44,122.0833);
   11->SetBinContent(45,213.6458);
   11->SetBinContent(46,244.1666);
   11->SetBinContent(47,91.5625);
   11->SetBinContent(48,122.0833);
   11->SetBinContent(49,152.6042);
   11->SetBinContent(50,213.6458);
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
   12->SetBinContent(1,585.6462);
   12->SetBinContent(2,81.61909);
   12->SetBinContent(3,459.6404);
   12->SetBinContent(4,874.171);
   12->SetBinContent(5,1191.333);
   12->SetBinContent(6,1187.038);
   12->SetBinContent(7,1494.177);
   12->SetBinContent(8,1003.041);
   12->SetBinContent(9,1077.499);
   12->SetBinContent(10,798.9971);
   12->SetBinContent(11,626.455);
   12->SetBinContent(12,863.4319);
   12->SetBinContent(13,524.0752);
   12->SetBinContent(14,685.8782);
   12->SetBinContent(15,919.2754);
   12->SetBinContent(16,424.5592);
   12->SetBinContent(17,139.6116);
   12->SetBinContent(18,105.2457);
   12->SetBinContent(19,100.9499);
   12->SetBinContent(20,84.48292);
   12->SetBinContent(21,71.59568);
   12->SetBinContent(22,60.85632);
   12->SetBinContent(23,50.83291);
   12->SetBinContent(24,61.57227);
   12->SetBinContent(25,44.38929);
   12->SetBinContent(26,50.11695);
   12->SetBinContent(27,32.93397);
   12->SetBinContent(28,32.93397);
   12->SetBinContent(29,31.50205);
   12->SetBinContent(30,20.76272);
   12->SetBinContent(31,30.07014);
   12->SetBinContent(32,24.3425);
   12->SetBinContent(33,27.20632);
   12->SetBinContent(34,28.63823);
   12->SetBinContent(35,19.33081);
   12->SetBinContent(36,113.1212);
   12->SetBinContent(37,103.0978);
   12->SetBinContent(38,88.77866);
   12->SetBinContent(39,74.45951);
   12->SetBinContent(40,68.73185);
   12->SetBinContent(41,63.00419);
   12->SetBinContent(42,72.31164);
   12->SetBinContent(43,59.4244);
   12->SetBinContent(44,61.57227);
   12->SetBinContent(45,68.01589);
   12->SetBinContent(46,90.92654);
   12->SetBinContent(47,91.64249);
   12->SetBinContent(48,125.2925);
   12->SetBinContent(49,178.9893);
   12->SetBinContent(50,506.8926);
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
   13->SetBinContent(1,8997.917);
   13->SetBinContent(2,1508.32);
   13->SetBinContent(3,8685.853);
   13->SetBinContent(4,19192.07);
   13->SetBinContent(5,30270.57);
   13->SetBinContent(6,31362.82);
   13->SetBinContent(7,35679.79);
   13->SetBinContent(8,25381.47);
   13->SetBinContent(9,29542.41);
   13->SetBinContent(10,22312.78);
   13->SetBinContent(11,17995.8);
   13->SetBinContent(12,22052.72);
   13->SetBinContent(13,12586.66);
   13->SetBinContent(14,15083.17);
   13->SetBinContent(15,28034.07);
   13->SetBinContent(16,11338.4);
   13->SetBinContent(17,3640.77);
   13->SetBinContent(18,2704.572);
   13->SetBinContent(19,1872.396);
   13->SetBinContent(20,1456.309);
   13->SetBinContent(21,2028.429);
   13->SetBinContent(22,1404.298);
   13->SetBinContent(23,1196.254);
   13->SetBinContent(24,1196.254);
   13->SetBinContent(25,1144.243);
   13->SetBinContent(26,1404.298);
   13->SetBinContent(27,312.0662);
   13->SetBinContent(28,572.1213);
   13->SetBinContent(29,208.0441);
   13->SetBinContent(30,156.0331);
   13->SetBinContent(31,520.1102);
   13->SetBinContent(32,416.0882);
   13->SetBinContent(33,572.1213);
   13->SetBinContent(34,468.0992);
   13->SetBinContent(35,208.0441);
   13->SetBinContent(36,4472.948);
   13->SetBinContent(37,3588.759);
   13->SetBinContent(38,2912.616);
   13->SetBinContent(39,2964.627);
   13->SetBinContent(40,2392.506);
   13->SetBinContent(41,2184.462);
   13->SetBinContent(42,2028.429);
   13->SetBinContent(43,1092.232);
   13->SetBinContent(44,1820.385);
   13->SetBinContent(45,1300.276);
   13->SetBinContent(46,2028.429);
   13->SetBinContent(47,1716.364);
   13->SetBinContent(48,2080.44);
   13->SetBinContent(49,2600.55);
   13->SetBinContent(50,2912.616);
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
   14->SetBinContent(1,9023.166);
   14->SetBinContent(2,129.5641);
   14->SetBinContent(3,1230.857);
   14->SetBinContent(4,2693.08);
   14->SetBinContent(5,3859.164);
   14->SetBinContent(6,4044.257);
   14->SetBinContent(7,5025.224);
   14->SetBinContent(8,3711.09);
   14->SetBinContent(9,4581.013);
   14->SetBinContent(10,4146.057);
   14->SetBinContent(11,4201.583);
   14->SetBinContent(12,5626.76);
   14->SetBinContent(13,3933.201);
   14->SetBinContent(14,4377.417);
   14->SetBinContent(15,8597.441);
   14->SetBinContent(16,3544.506);
   14->SetBinContent(17,1008.749);
   14->SetBinContent(18,768.1299);
   14->SetBinContent(19,527.5109);
   14->SetBinContent(20,657.075);
   14->SetBinContent(21,499.7472);
   14->SetBinContent(22,527.5109);
   14->SetBinContent(23,397.9468);
   14->SetBinContent(24,370.1831);
   14->SetBinContent(25,453.4743);
   14->SetBinContent(26,453.4743);
   14->SetBinContent(27,277.6373);
   14->SetBinContent(28,323.9102);
   14->SetBinContent(29,342.4193);
   14->SetBinContent(30,259.1281);
   14->SetBinContent(31,314.6556);
   14->SetBinContent(32,259.1281);
   14->SetBinContent(33,277.6373);
   14->SetBinContent(34,212.8553);
   14->SetBinContent(35,231.3644);
   14->SetBinContent(36,323.9102);
   14->SetBinContent(37,342.4193);
   14->SetBinContent(38,314.6556);
   14->SetBinContent(39,259.1281);
   14->SetBinContent(40,203.6007);
   14->SetBinContent(41,231.3644);
   14->SetBinContent(42,203.6007);
   14->SetBinContent(43,166.5824);
   14->SetBinContent(44,203.6007);
   14->SetBinContent(45,222.1098);
   14->SetBinContent(46,231.3644);
   14->SetBinContent(47,277.6373);
   14->SetBinContent(48,333.1648);
   14->SetBinContent(49,786.639);
   14->SetBinContent(50,2008.237);
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
   15->SetBinContent(1,2916.866);
   15->SetBinContent(2,56.09351);
   15->SetBinContent(3,420.7013);
   15->SetBinContent(4,1318.198);
   15->SetBinContent(5,1654.759);
   15->SetBinContent(6,1514.525);
   15->SetBinContent(7,1766.946);
   15->SetBinContent(8,1430.385);
   15->SetBinContent(9,1458.431);
   15->SetBinContent(10,1458.431);
   15->SetBinContent(11,1121.87);
   15->SetBinContent(12,1794.992);
   15->SetBinContent(13,981.6364);
   15->SetBinContent(14,1374.291);
   15->SetBinContent(15,2580.304);
   15->SetBinContent(16,1121.87);
   15->SetBinContent(17,224.374);
   15->SetBinContent(18,168.2805);
   15->SetBinContent(19,196.3273);
   15->SetBinContent(20,280.4676);
   15->SetBinContent(21,140.2338);
   15->SetBinContent(22,84.14027);
   15->SetBinContent(23,224.374);
   15->SetBinContent(24,168.2805);
   15->SetBinContent(25,84.14027);
   15->SetBinContent(26,140.2338);
   15->SetBinContent(27,84.14027);
   15->SetBinContent(28,28.04676);
   15->SetBinContent(29,56.09351);
   15->SetBinContent(30,112.187);
   15->SetBinContent(31,84.14027);
   15->SetBinContent(33,84.14027);
   15->SetBinContent(35,28.04676);
   15->SetBinContent(36,196.3273);
   15->SetBinContent(37,56.09351);
   15->SetBinContent(38,112.187);
   15->SetBinContent(39,84.14027);
   15->SetBinContent(40,56.09351);
   15->SetBinContent(42,84.14027);
   15->SetBinContent(43,140.2338);
   15->SetBinContent(44,84.14027);
   15->SetBinContent(45,56.09351);
   15->SetBinContent(46,196.3273);
   15->SetBinContent(47,112.187);
   15->SetBinContent(48,84.14027);
   15->SetBinContent(49,140.2338);
   15->SetBinContent(50,953.5897);
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
   16->SetBinContent(1,1040.74);
   16->SetBinContent(2,31.85936);
   16->SetBinContent(3,265.4946);
   16->SetBinContent(4,700.9062);
   16->SetBinContent(5,828.3439);
   16->SetBinContent(6,743.3854);
   16->SetBinContent(7,1083.219);
   16->SetBinContent(8,700.9062);
   16->SetBinContent(9,892.0628);
   16->SetBinContent(10,700.9062);
   16->SetBinContent(11,446.0309);
   16->SetBinContent(12,743.3854);
   16->SetBinContent(13,467.2705);
   16->SetBinContent(14,690.2864);
   16->SetBinContent(15,1125.698);
   16->SetBinContent(16,562.8486);
   16->SetBinContent(17,106.1979);
   16->SetBinContent(18,63.71873);
   16->SetBinContent(19,95.57809);
   16->SetBinContent(20,74.33852);
   16->SetBinContent(21,42.47915);
   16->SetBinContent(22,31.85936);
   16->SetBinContent(23,21.23957);
   16->SetBinContent(24,63.71873);
   16->SetBinContent(25,21.23957);
   16->SetBinContent(26,10.61979);
   16->SetBinContent(27,10.61979);
   16->SetBinContent(29,21.23957);
   16->SetBinContent(30,10.61979);
   16->SetBinContent(31,21.23957);
   16->SetBinContent(32,21.23957);
   16->SetBinContent(33,10.61979);
   16->SetBinContent(34,10.61979);
   16->SetBinContent(36,159.2968);
   16->SetBinContent(37,138.0573);
   16->SetBinContent(38,116.8177);
   16->SetBinContent(39,127.4375);
   16->SetBinContent(40,53.09894);
   16->SetBinContent(41,31.85936);
   16->SetBinContent(42,106.1979);
   16->SetBinContent(43,84.95831);
   16->SetBinContent(44,63.71873);
   16->SetBinContent(45,74.33852);
   16->SetBinContent(46,53.09894);
   16->SetBinContent(47,10.61979);
   16->SetBinContent(48,106.1979);
   16->SetBinContent(49,106.1979);
   16->SetBinContent(50,138.0573);
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
   17->SetBinContent(1,8879.815);
   17->SetBinContent(2,121.6411);
   17->SetBinContent(3,1702.976);
   17->SetBinContent(4,2676.105);
   17->SetBinContent(5,5352.214);
   17->SetBinContent(6,3831.695);
   17->SetBinContent(7,5352.214);
   17->SetBinContent(8,3953.336);
   17->SetBinContent(9,4987.29);
   17->SetBinContent(10,3831.695);
   17->SetBinContent(11,3588.413);
   17->SetBinContent(12,5048.11);
   17->SetBinContent(13,3405.951);
   17->SetBinContent(14,3588.413);
   17->SetBinContent(15,7176.838);
   17->SetBinContent(16,3041.028);
   17->SetBinContent(17,851.4879);
   17->SetBinContent(18,912.3084);
   17->SetBinContent(19,304.1028);
   17->SetBinContent(20,547.3851);
   17->SetBinContent(21,304.1028);
   17->SetBinContent(22,121.6411);
   17->SetBinContent(23,425.7439);
   17->SetBinContent(24,182.4617);
   17->SetBinContent(25,304.1028);
   17->SetBinContent(26,182.4617);
   17->SetBinContent(27,182.4617);
   17->SetBinContent(28,243.2822);
   17->SetBinContent(29,182.4617);
   17->SetBinContent(31,182.4617);
   17->SetBinContent(32,121.6411);
   17->SetBinContent(33,182.4617);
   17->SetBinContent(34,243.2822);
   17->SetBinContent(35,121.6411);
   17->SetBinContent(36,243.2822);
   17->SetBinContent(37,425.7439);
   17->SetBinContent(38,364.9234);
   17->SetBinContent(39,60.82056);
   17->SetBinContent(40,304.1028);
   17->SetBinContent(41,121.6411);
   17->SetBinContent(42,304.1028);
   17->SetBinContent(43,608.2056);
   17->SetBinContent(44,425.7439);
   17->SetBinContent(45,182.4617);
   17->SetBinContent(46,243.2822);
   17->SetBinContent(47,669.0262);
   17->SetBinContent(48,364.9234);
   17->SetBinContent(49,790.6673);
   17->SetBinContent(50,3466.772);
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
