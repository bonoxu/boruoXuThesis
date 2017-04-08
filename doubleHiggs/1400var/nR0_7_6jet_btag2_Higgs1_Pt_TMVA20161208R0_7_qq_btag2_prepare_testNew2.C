{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 00:58:03 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-53.96825,-3.068649,263.4921,5.295914);
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
   
   TH1F *THStack_stack_8 = new TH1F("THStack_stack_8","",50,0,200);
   THStack_stack_8->SetMinimum(0.02735095);
   THStack_stack_8->SetMaximum(42339.78);
   THStack_stack_8->SetDirectory(0);
   THStack_stack_8->SetStats(0);
   THStack_stack_8->SetLineWidth(2);
   THStack_stack_8->SetMarkerSize(1.2);
   THStack_stack_8->GetXaxis()->SetTitle("P_{T,H#rightarrowbb} / GeV");
   THStack_stack_8->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetXaxis()->SetLabelColor(ci);
   THStack_stack_8->GetXaxis()->SetLabelFont(42);
   THStack_stack_8->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_8->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_8->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_8->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_8->GetXaxis()->SetTitleColor(ci);
   THStack_stack_8->GetXaxis()->SetTitleFont(42);
   THStack_stack_8->GetYaxis()->SetTitle("Number of events");
   THStack_stack_8->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetYaxis()->SetLabelColor(ci);
   THStack_stack_8->GetYaxis()->SetLabelFont(42);
   THStack_stack_8->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_8->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_8->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_8->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_8->GetYaxis()->SetTitleColor(ci);
   THStack_stack_8->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetZaxis()->SetLabelColor(ci);
   THStack_stack_8->GetZaxis()->SetLabelFont(42);
   THStack_stack_8->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_8->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_8->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_8->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_8->GetZaxis()->SetTitleColor(ci);
   THStack_stack_8->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_8);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,200);
   0->SetBinContent(1,0.031994);
   0->SetBinContent(2,0.08092605);
   0->SetBinContent(3,0.1750261);
   0->SetBinContent(4,0.1787901);
   0->SetBinContent(5,0.2653621);
   0->SetBinContent(6,0.2371322);
   0->SetBinContent(7,0.3218217);
   0->SetBinContent(8,0.3651074);
   0->SetBinContent(9,0.427213);
   0->SetBinContent(10,0.4535608);
   0->SetBinContent(11,0.4065111);
   0->SetBinContent(12,0.4102751);
   0->SetBinContent(13,0.5081385);
   0->SetBinContent(14,0.4912005);
   0->SetBinContent(15,0.4836726);
   0->SetBinContent(16,0.5043745);
   0->SetBinContent(17,0.5024925);
   0->SetBinContent(18,0.5081385);
   0->SetBinContent(19,0.4648527);
   0->SetBinContent(20,0.427213);
   0->SetBinContent(21,0.419685);
   0->SetBinContent(22,0.4102751);
   0->SetBinContent(23,0.425331);
   0->SetBinContent(24,0.3914552);
   0->SetBinContent(25,0.3669894);
   0->SetBinContent(26,0.3387596);
   0->SetBinContent(27,0.3312316);
   0->SetBinContent(28,0.3575794);
   0->SetBinContent(29,0.3274677);
   0->SetBinContent(30,0.3180577);
   0->SetBinContent(31,0.2691261);
   0->SetBinContent(32,0.2898279);
   0->SetBinContent(33,0.2408962);
   0->SetBinContent(34,0.2352502);
   0->SetBinContent(35,0.2258402);
   0->SetBinContent(36,0.2201942);
   0->SetBinContent(37,0.1882001);
   0->SetBinContent(38,0.1712621);
   0->SetBinContent(39,0.1750261);
   0->SetBinContent(40,0.1618521);
   0->SetBinContent(41,0.1467961);
   0->SetBinContent(42,0.1355041);
   0->SetBinContent(43,0.1373861);
   0->SetBinContent(44,0.1035101);
   0->SetBinContent(45,0.09410006);
   0->SetBinContent(46,0.09786406);
   0->SetBinContent(47,0.08845405);
   0->SetBinContent(48,0.09410006);
   0->SetBinContent(49,0.09786406);
   0->SetBinContent(50,0.09033605);
   0->SetBinContent(51,2.486122);
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
   1->SetBinContent(1,0.02446601);
   1->SetBinContent(2,0.05740104);
   1->SetBinContent(3,0.09786408);
   1->SetBinContent(4,0.1204481);
   1->SetBinContent(5,0.1496189);
   1->SetBinContent(6,0.1966686);
   1->SetBinContent(7,0.2314854);
   1->SetBinContent(8,0.2898276);
   1->SetBinContent(9,0.2935916);
   1->SetBinContent(10,0.3189988);
   1->SetBinContent(11,0.331232);
   1->SetBinContent(12,0.3199399);
   1->SetBinContent(13,0.3152348);
   1->SetBinContent(14,0.336878);
   1->SetBinContent(15,0.3745183);
   1->SetBinContent(16,0.3255859);
   1->SetBinContent(17,0.3255859);
   1->SetBinContent(18,0.3011197);
   1->SetBinContent(19,0.3105298);
   1->SetBinContent(20,0.3302909);
   1->SetBinContent(21,0.2973557);
   1->SetBinContent(22,0.2681844);
   1->SetBinContent(23,0.2832405);
   1->SetBinContent(24,0.2559513);
   1->SetBinContent(25,0.2757125);
   1->SetBinContent(26,0.2446593);
   1->SetBinContent(27,0.2107835);
   1->SetBinContent(28,0.2173705);
   1->SetBinContent(29,0.1966686);
   1->SetBinContent(30,0.1590289);
   1->SetBinContent(31,0.1646748);
   1->SetBinContent(32,0.144914);
   1->SetBinContent(33,0.1477369);
   1->SetBinContent(34,0.1684388);
   1->SetBinContent(35,0.138327);
   1->SetBinContent(36,0.1213891);
   1->SetBinContent(37,0.1129201);
   1->SetBinContent(38,0.09410007);
   1->SetBinContent(39,0.08939507);
   1->SetBinContent(40,0.08186706);
   1->SetBinContent(41,0.07245705);
   1->SetBinContent(42,0.07810306);
   1->SetBinContent(43,0.07716206);
   1->SetBinContent(44,0.05928304);
   1->SetBinContent(45,0.06210604);
   1->SetBinContent(46,0.06492905);
   1->SetBinContent(47,0.04799103);
   1->SetBinContent(48,0.05551904);
   1->SetBinContent(49,0.03952202);
   1->SetBinContent(50,0.05175503);
   1->SetBinContent(51,1.074615);
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
   2->SetBinContent(1,0.03858102);
   2->SetBinContent(2,0.1637338);
   2->SetBinContent(3,0.2333673);
   2->SetBinContent(4,0.3011197);
   2->SetBinContent(5,0.4196867);
   2->SetBinContent(6,0.4695602);
   2->SetBinContent(7,0.5683639);
   2->SetBinContent(8,0.6285865);
   2->SetBinContent(9,0.7057468);
   2->SetBinContent(10,0.7782021);
   2->SetBinContent(11,0.7527957);
   2->SetBinContent(12,0.7452679);
   2->SetBinContent(13,0.8130183);
   2->SetBinContent(14,0.8487755);
   2->SetBinContent(15,0.8431296);
   2->SetBinContent(16,0.8177232);
   2->SetBinContent(17,0.8365428);
   2->SetBinContent(18,0.7593825);
   2->SetBinContent(19,0.7923168);
   2->SetBinContent(20,0.7593825);
   2->SetBinContent(21,0.7160975);
   2->SetBinContent(22,0.6822223);
   2->SetBinContent(23,0.6784584);
   2->SetBinContent(24,0.6398783);
   2->SetBinContent(25,0.565541);
   2->SetBinContent(26,0.5693049);
   2->SetBinContent(27,0.5156691);
   2->SetBinContent(28,0.518492);
   2->SetBinContent(29,0.4563861);
   2->SetBinContent(30,0.4140407);
   2->SetBinContent(31,0.4074536);
   2->SetBinContent(32,0.3999256);
   2->SetBinContent(33,0.3500521);
   2->SetBinContent(34,0.339701);
   2->SetBinContent(35,0.3284089);
   2->SetBinContent(36,0.2597153);
   2->SetBinContent(37,0.2841815);
   2->SetBinContent(38,0.2484232);
   2->SetBinContent(39,0.2258394);
   2->SetBinContent(40,0.2361903);
   2->SetBinContent(41,0.2352493);
   2->SetBinContent(42,0.2023146);
   2->SetBinContent(43,0.1806717);
   2->SetBinContent(44,0.1872587);
   2->SetBinContent(45,0.142091);
   2->SetBinContent(46,0.1637338);
   2->SetBinContent(47,0.143973);
   2->SetBinContent(48,0.1213891);
   2->SetBinContent(49,0.1232711);
   2->SetBinContent(50,0.1148021);
   2->SetBinContent(51,3.468616);
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
   3->SetBinContent(1,0.2595019);
   3->SetBinContent(2,0.6282681);
   3->SetBinContent(3,1.297512);
   3->SetBinContent(4,1.673109);
   3->SetBinContent(5,2.130653);
   3->SetBinContent(6,2.356011);
   3->SetBinContent(7,2.676975);
   3->SetBinContent(8,2.997939);
   3->SetBinContent(9,3.394022);
   3->SetBinContent(10,3.284758);
   3->SetBinContent(11,3.626209);
   3->SetBinContent(12,3.817422);
   3->SetBinContent(13,3.83108);
   3->SetBinContent(14,3.660354);
   3->SetBinContent(15,3.769619);
   3->SetBinContent(16,3.61938);
   3->SetBinContent(17,3.639867);
   3->SetBinContent(18,3.933515);
   3->SetBinContent(19,3.660354);
   3->SetBinContent(20,3.653525);
   3->SetBinContent(21,3.41451);
   3->SetBinContent(22,3.230126);
   3->SetBinContent(23,2.847701);
   3->SetBinContent(24,2.786239);
   3->SetBinContent(25,2.683804);
   3->SetBinContent(26,2.786239);
   3->SetBinContent(27,2.369669);
   3->SetBinContent(28,2.29455);
   3->SetBinContent(29,1.987244);
   3->SetBinContent(30,1.94627);
   3->SetBinContent(31,2.08285);
   3->SetBinContent(32,1.775544);
   3->SetBinContent(33,1.659451);
   3->SetBinContent(34,1.563844);
   3->SetBinContent(35,1.434093);
   3->SetBinContent(36,1.393119);
   3->SetBinContent(37,1.352145);
   3->SetBinContent(38,1.044839);
   3->SetBinContent(39,0.9424032);
   3->SetBinContent(40,1.085813);
   3->SetBinContent(41,0.9355742);
   3->SetBinContent(42,0.874113);
   3->SetBinContent(43,0.8331388);
   3->SetBinContent(44,0.9697193);
   3->SetBinContent(45,0.7716776);
   3->SetBinContent(46,0.6624132);
   3->SetBinContent(47,0.5668069);
   3->SetBinContent(48,0.7170454);
   3->SetBinContent(49,0.4712007);
   3->SetBinContent(50,0.6146101);
   3->SetBinContent(51,8.529326);
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
   4->SetBinContent(1,0.3472261);
   4->SetBinContent(2,0.8943705);
   4->SetBinContent(3,1.446771);
   4->SetBinContent(4,2.083345);
   4->SetBinContent(5,2.740963);
   4->SetBinContent(6,3.009271);
   4->SetBinContent(7,3.382798);
   4->SetBinContent(8,3.908893);
   4->SetBinContent(9,4.361334);
   4->SetBinContent(10,4.519163);
   4->SetBinContent(11,5.029474);
   4->SetBinContent(12,5.013691);
   4->SetBinContent(13,5.129432);
   4->SetBinContent(14,5.329348);
   4->SetBinContent(15,5.39774);
   4->SetBinContent(16,5.387218);
   4->SetBinContent(17,5.403001);
   4->SetBinContent(18,5.413523);
   4->SetBinContent(19,5.024213);
   4->SetBinContent(20,4.866385);
   4->SetBinContent(21,4.966343);
   4->SetBinContent(22,4.813776);
   4->SetBinContent(23,4.703296);
   4->SetBinContent(24,4.308725);
   4->SetBinContent(25,4.361334);
   4->SetBinContent(26,3.793152);
   4->SetBinContent(27,3.687933);
   4->SetBinContent(28,3.745804);
   4->SetBinContent(29,3.388059);
   4->SetBinContent(30,3.44593);
   4->SetBinContent(31,3.009271);
   4->SetBinContent(32,2.825138);
   4->SetBinContent(33,2.877748);
   4->SetBinContent(34,2.462133);
   4->SetBinContent(35,2.341131);
   4->SetBinContent(36,2.283261);
   4->SetBinContent(37,1.983387);
   4->SetBinContent(38,2.162259);
   4->SetBinContent(39,1.936039);
   4->SetBinContent(40,2.030736);
   4->SetBinContent(41,1.636165);
   4->SetBinContent(42,1.488858);
   4->SetBinContent(43,1.504641);
   4->SetBinContent(44,1.452032);
   4->SetBinContent(45,1.320508);
   4->SetBinContent(46,1.22055);
   4->SetBinContent(47,1.167941);
   4->SetBinContent(48,1.057461);
   4->SetBinContent(49,0.8996315);
   4->SetBinContent(50,0.9154145);
   4->SetBinContent(51,16.26755);
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
   5->SetBinContent(1,0.6448515);
   5->SetBinContent(2,1.959356);
   5->SetBinContent(3,3.001048);
   5->SetBinContent(4,4.414774);
   5->SetBinContent(5,5.679687);
   5->SetBinContent(6,7.217423);
   5->SetBinContent(7,7.787874);
   5->SetBinContent(8,9.300759);
   5->SetBinContent(9,11.04925);
   5->SetBinContent(10,11.08645);
   5->SetBinContent(11,11.75608);
   5->SetBinContent(12,11.86769);
   5->SetBinContent(13,13.49217);
   5->SetBinContent(14,13.19456);
   5->SetBinContent(15,13.15735);
   5->SetBinContent(16,13.70298);
   5->SetBinContent(17,13.66578);
   5->SetBinContent(18,13.78979);
   5->SetBinContent(19,13.44257);
   5->SetBinContent(20,13.92619);
   5->SetBinContent(21,14.137);
   5->SetBinContent(22,13.72778);
   5->SetBinContent(23,13.09535);
   5->SetBinContent(24,12.92174);
   5->SetBinContent(25,12.71093);
   5->SetBinContent(26,12.27691);
   5->SetBinContent(27,11.65688);
   5->SetBinContent(28,11.06165);
   5->SetBinContent(29,10.26801);
   5->SetBinContent(30,10.49122);
   5->SetBinContent(31,9.833986);
   5->SetBinContent(32,9.573573);
   5->SetBinContent(33,8.965942);
   5->SetBinContent(34,8.965942);
   5->SetBinContent(35,8.370712);
   5->SetBinContent(36,7.986292);
   5->SetBinContent(37,8.209504);
   5->SetBinContent(38,6.832989);
   5->SetBinContent(39,6.448555);
   5->SetBinContent(40,6.299742);
   5->SetBinContent(41,6.547764);
   5->SetBinContent(42,6.188132);
   5->SetBinContent(43,6.312143);
   5->SetBinContent(44,5.27045);
   5->SetBinContent(45,4.588389);
   5->SetBinContent(46,4.985225);
   5->SetBinContent(47,4.613192);
   5->SetBinContent(48,4.699999);
   5->SetBinContent(49,4.265961);
   5->SetBinContent(50,3.720312);
   5->SetBinContent(51,66.28481);
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
   6->SetBinContent(1,30.51433);
   6->SetBinContent(2,88.35386);
   6->SetBinContent(3,152.0404);
   6->SetBinContent(4,204.1923);
   6->SetBinContent(5,253.5354);
   6->SetBinContent(6,295.7348);
   6->SetBinContent(7,339.4516);
   6->SetBinContent(8,391.1376);
   6->SetBinContent(9,412.4647);
   6->SetBinContent(10,446.9979);
   6->SetBinContent(11,459.521);
   6->SetBinContent(12,484.2635);
   6->SetBinContent(13,489.4245);
   6->SetBinContent(14,486.3127);
   6->SetBinContent(15,467.1866);
   6->SetBinContent(16,472.7271);
   6->SetBinContent(17,456.6369);
   6->SetBinContent(18,448.5918);
   6->SetBinContent(19,429.8452);
   6->SetBinContent(20,399.2586);
   6->SetBinContent(21,383.7755);
   6->SetBinContent(22,370.873);
   6->SetBinContent(23,354.7069);
   6->SetBinContent(24,319.187);
   6->SetBinContent(25,299.5296);
   6->SetBinContent(26,281.3902);
   6->SetBinContent(27,257.3308);
   6->SetBinContent(28,242.3763);
   6->SetBinContent(29,223.0186);
   6->SetBinContent(30,203.9646);
   6->SetBinContent(31,192.5777);
   6->SetBinContent(32,173.7514);
   6->SetBinContent(33,156.8988);
   6->SetBinContent(34,156.0638);
   6->SetBinContent(35,136.5543);
   6->SetBinContent(36,123.9532);
   6->SetBinContent(37,115.8314);
   6->SetBinContent(38,105.4324);
   6->SetBinContent(39,100.2709);
   6->SetBinContent(40,89.72015);
   6->SetBinContent(41,84.48271);
   6->SetBinContent(42,77.04404);
   6->SetBinContent(43,67.63184);
   6->SetBinContent(44,63.30526);
   6->SetBinContent(45,59.43411);
   6->SetBinContent(46,53.43763);
   6->SetBinContent(47,48.50381);
   6->SetBinContent(48,45.31581);
   6->SetBinContent(49,41.67237);
   6->SetBinContent(50,40.07837);
   6->SetBinContent(51,427.5682);
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
   7->SetBinContent(1,9.080893);
   7->SetBinContent(2,28.31692);
   7->SetBinContent(3,51.70208);
   7->SetBinContent(4,66.88525);
   7->SetBinContent(5,88.17099);
   7->SetBinContent(6,103.6471);
   7->SetBinContent(7,113.3135);
   7->SetBinContent(8,127.0321);
   7->SetBinContent(9,139.1413);
   7->SetBinContent(10,151.5925);
   7->SetBinContent(11,151.8366);
   7->SetBinContent(12,158.6237);
   7->SetBinContent(13,164.532);
   7->SetBinContent(14,163.4089);
   7->SetBinContent(15,162.9695);
   7->SetBinContent(16,161.5534);
   7->SetBinContent(17,158.9655);
   7->SetBinContent(18,159.0632);
   7->SetBinContent(19,155.0593);
   7->SetBinContent(20,154.7175);
   7->SetBinContent(21,144.1706);
   7->SetBinContent(22,142.2175);
   7->SetBinContent(23,139.4343);
   7->SetBinContent(24,134.7956);
   7->SetBinContent(25,127.4227);
   7->SetBinContent(26,119.5137);
   7->SetBinContent(27,115.2175);
   7->SetBinContent(28,111.556);
   7->SetBinContent(29,104.8188);
   7->SetBinContent(30,97.88627);
   7->SetBinContent(31,99.05796);
   7->SetBinContent(32,88.9033);
   7->SetBinContent(33,86.26699);
   7->SetBinContent(34,82.55663);
   7->SetBinContent(35,78.35807);
   7->SetBinContent(36,70.79089);
   7->SetBinContent(37,71.035);
   7->SetBinContent(38,67.7152);
   7->SetBinContent(39,64.10249);
   7->SetBinContent(40,60.29449);
   7->SetBinContent(41,59.75746);
   7->SetBinContent(42,57.41408);
   7->SetBinContent(43,52.58085);
   7->SetBinContent(44,51.60444);
   7->SetBinContent(45,45.30659);
   7->SetBinContent(46,46.08772);
   7->SetBinContent(47,43.74434);
   7->SetBinContent(48,38.86229);
   7->SetBinContent(49,40.0828);
   7->SetBinContent(50,35.15193);
   7->SetBinContent(51,797.5397);
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
   8->SetBinContent(1,1.174024);
   8->SetBinContent(2,3.375319);
   8->SetBinContent(3,5.576613);
   8->SetBinContent(4,5.136354);
   8->SetBinContent(5,6.603883);
   8->SetBinContent(6,8.364918);
   8->SetBinContent(7,8.071411);
   8->SetBinContent(8,9.685698);
   8->SetBinContent(9,12.03375);
   8->SetBinContent(10,10.41946);
   8->SetBinContent(11,11.29998);
   8->SetBinContent(12,9.245438);
   8->SetBinContent(13,8.218164);
   8->SetBinContent(14,9.979204);
   8->SetBinContent(15,10.27271);
   8->SetBinContent(16,10.71297);
   8->SetBinContent(17,7.337647);
   8->SetBinContent(18,7.337647);
   8->SetBinContent(19,6.310377);
   8->SetBinContent(20,4.989602);
   8->SetBinContent(21,5.723366);
   8->SetBinContent(22,5.42986);
   8->SetBinContent(23,6.016871);
   8->SetBinContent(24,6.163624);
   8->SetBinContent(25,3.962332);
   8->SetBinContent(26,4.255837);
   8->SetBinContent(27,6.163624);
   8->SetBinContent(28,3.081813);
   8->SetBinContent(29,2.788307);
   8->SetBinContent(30,2.788307);
   8->SetBinContent(31,3.668826);
   8->SetBinContent(32,2.494801);
   8->SetBinContent(33,2.054542);
   8->SetBinContent(34,2.93506);
   8->SetBinContent(35,2.494801);
   8->SetBinContent(36,1.174024);
   8->SetBinContent(37,1.614283);
   8->SetBinContent(38,1.761036);
   8->SetBinContent(39,2.054542);
   8->SetBinContent(40,1.907789);
   8->SetBinContent(41,2.054542);
   8->SetBinContent(42,0.880518);
   8->SetBinContent(43,1.907789);
   8->SetBinContent(44,1.614283);
   8->SetBinContent(45,1.46753);
   8->SetBinContent(46,1.46753);
   8->SetBinContent(47,2.348048);
   8->SetBinContent(48,1.761036);
   8->SetBinContent(49,1.46753);
   8->SetBinContent(50,0.880518);
   8->SetBinContent(51,49.16212);
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
   9->SetBinContent(1,7.886198);
   9->SetBinContent(2,29.83033);
   9->SetBinContent(3,41.48824);
   9->SetBinContent(4,61.03241);
   9->SetBinContent(5,80.06226);
   9->SetBinContent(6,94.29179);
   9->SetBinContent(7,116.0647);
   9->SetBinContent(8,125.4939);
   9->SetBinContent(9,147.9517);
   9->SetBinContent(10,164.5806);
   9->SetBinContent(11,170.0665);
   9->SetBinContent(12,187.0383);
   9->SetBinContent(13,193.7241);
   9->SetBinContent(14,211.2103);
   9->SetBinContent(15,201.9529);
   9->SetBinContent(16,219.6104);
   9->SetBinContent(17,210.5245);
   9->SetBinContent(18,209.1531);
   9->SetBinContent(19,221.1533);
   9->SetBinContent(20,232.125);
   9->SetBinContent(21,228.3535);
   9->SetBinContent(22,234.1822);
   9->SetBinContent(23,226.6392);
   9->SetBinContent(24,218.5818);
   9->SetBinContent(25,230.925);
   9->SetBinContent(26,225.9534);
   9->SetBinContent(27,224.7534);
   9->SetBinContent(28,233.8393);
   9->SetBinContent(29,220.4676);
   9->SetBinContent(30,217.5533);
   9->SetBinContent(31,226.4677);
   9->SetBinContent(32,223.382);
   9->SetBinContent(33,220.4676);
   9->SetBinContent(34,211.3817);
   9->SetBinContent(35,211.3817);
   9->SetBinContent(36,212.0674);
   9->SetBinContent(37,198.8671);
   9->SetBinContent(38,207.4387);
   9->SetBinContent(39,191.8384);
   9->SetBinContent(40,186.8668);
   9->SetBinContent(41,192.3527);
   9->SetBinContent(42,185.1525);
   9->SetBinContent(43,190.2955);
   9->SetBinContent(44,187.724);
   9->SetBinContent(45,179.3238);
   9->SetBinContent(46,180.8667);
   9->SetBinContent(47,174.1808);
   9->SetBinContent(48,165.2663);
   9->SetBinContent(49,167.495);
   9->SetBinContent(50,170.4093);
   9->SetBinContent(51,7130.72);
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
   10->SetBinContent(1,119.3617);
   10->SetBinContent(2,364.9635);
   10->SetBinContent(3,585.9679);
   10->SetBinContent(4,805.5919);
   10->SetBinContent(5,1004.516);
   10->SetBinContent(6,1189.05);
   10->SetBinContent(7,1361.91);
   10->SetBinContent(8,1496.398);
   10->SetBinContent(9,1624.196);
   10->SetBinContent(10,1724.479);
   10->SetBinContent(11,1807.027);
   10->SetBinContent(12,1847.102);
   10->SetBinContent(13,1891.469);
   10->SetBinContent(14,1896.265);
   10->SetBinContent(15,1858.714);
   10->SetBinContent(16,1825.708);
   10->SetBinContent(17,1795.162);
   10->SetBinContent(18,1724.163);
   10->SetBinContent(19,1630.57);
   10->SetBinContent(20,1572.256);
   10->SetBinContent(21,1488.446);
   10->SetBinContent(22,1413.155);
   10->SetBinContent(23,1328.019);
   10->SetBinContent(24,1246.165);
   10->SetBinContent(25,1177.249);
   10->SetBinContent(26,1111.362);
   10->SetBinContent(27,1030.643);
   10->SetBinContent(28,959.6443);
   10->SetBinContent(29,909.156);
   10->SetBinContent(30,846.803);
   10->SetBinContent(31,783.8188);
   10->SetBinContent(32,729.4808);
   10->SetBinContent(33,699.9452);
   10->SetBinContent(34,632.9851);
   10->SetBinContent(35,597.6433);
   10->SetBinContent(36,555.3594);
   10->SetBinContent(37,531.5037);
   10->SetBinContent(38,489.7985);
   10->SetBinContent(39,445.8318);
   10->SetBinContent(40,423.4385);
   10->SetBinContent(41,391.8986);
   10->SetBinContent(42,372.2807);
   10->SetBinContent(43,341.2455);
   10->SetBinContent(44,313.8057);
   10->SetBinContent(45,308.2547);
   10->SetBinContent(46,287.8168);
   10->SetBinContent(47,266.2435);
   10->SetBinContent(48,251.1032);
   10->SetBinContent(49,226.0544);
   10->SetBinContent(50,211.0378);
   10->SetBinContent(51,3049.937);
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
   11->SetBinContent(1,43.90158);
   11->SetBinContent(2,219.5079);
   11->SetBinContent(3,482.9173);
   11->SetBinContent(4,468.2834);
   11->SetBinContent(5,409.748);
   11->SetBinContent(6,643.8896);
   11->SetBinContent(7,658.5235);
   11->SetBinContent(8,687.7912);
   11->SetBinContent(9,775.5943);
   11->SetBinContent(10,687.7912);
   11->SetBinContent(11,629.2558);
   11->SetBinContent(12,468.2834);
   11->SetBinContent(13,307.3111);
   11->SetBinContent(14,512.185);
   11->SetBinContent(15,409.748);
   11->SetBinContent(16,585.3542);
   11->SetBinContent(17,321.9449);
   11->SetBinContent(18,190.2402);
   11->SetBinContent(19,219.5079);
   11->SetBinContent(20,190.2402);
   11->SetBinContent(21,190.2402);
   11->SetBinContent(22,204.8741);
   11->SetBinContent(23,87.80315);
   11->SetBinContent(24,73.1693);
   11->SetBinContent(25,58.53543);
   11->SetBinContent(26,87.80315);
   11->SetBinContent(27,58.53543);
   11->SetBinContent(28,160.9725);
   11->SetBinContent(29,87.80315);
   11->SetBinContent(30,131.7047);
   11->SetBinContent(31,117.0709);
   11->SetBinContent(32,43.90158);
   11->SetBinContent(33,73.1693);
   11->SetBinContent(34,43.90158);
   11->SetBinContent(35,43.90158);
   11->SetBinContent(36,43.90158);
   11->SetBinContent(37,43.90158);
   11->SetBinContent(38,29.26772);
   11->SetBinContent(39,58.53543);
   11->SetBinContent(40,29.26772);
   11->SetBinContent(41,29.26772);
   11->SetBinContent(42,29.26772);
   11->SetBinContent(43,29.26772);
   11->SetBinContent(44,58.53543);
   11->SetBinContent(46,14.63386);
   11->SetBinContent(47,29.26772);
   11->SetBinContent(48,14.63386);
   11->SetBinContent(50,29.26772);
   11->SetBinContent(51,395.1142);
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
   12->SetBinContent(1,291.7999);
   12->SetBinContent(2,1033.989);
   12->SetBinContent(3,1801.553);
   12->SetBinContent(4,2626.209);
   12->SetBinContent(5,3565.048);
   12->SetBinContent(6,4319.917);
   12->SetBinContent(7,5284.092);
   12->SetBinContent(8,5626.628);
   12->SetBinContent(9,5271.406);
   12->SetBinContent(10,4116.932);
   12->SetBinContent(11,3063.911);
   12->SetBinContent(12,2258.286);
   12->SetBinContent(13,1890.362);
   12->SetBinContent(14,1566.844);
   12->SetBinContent(15,1173.546);
   12->SetBinContent(16,945.18);
   12->SetBinContent(17,742.1878);
   12->SetBinContent(18,843.6839);
   12->SetBinContent(19,634.3482);
   12->SetBinContent(20,482.1042);
   12->SetBinContent(21,526.5086);
   12->SetBinContent(22,317.1738);
   12->SetBinContent(23,329.8608);
   12->SetBinContent(24,310.8304);
   12->SetBinContent(25,323.5173);
   12->SetBinContent(26,291.7999);
   12->SetBinContent(27,183.9608);
   12->SetBinContent(28,196.6478);
   12->SetBinContent(29,215.6782);
   12->SetBinContent(30,164.9304);
   12->SetBinContent(31,177.6174);
   12->SetBinContent(32,158.5869);
   12->SetBinContent(33,120.5261);
   12->SetBinContent(34,152.2435);
   12->SetBinContent(35,133.213);
   12->SetBinContent(36,196.6478);
   12->SetBinContent(37,171.2739);
   12->SetBinContent(38,133.213);
   12->SetBinContent(39,158.5869);
   12->SetBinContent(40,164.9304);
   12->SetBinContent(41,139.5565);
   12->SetBinContent(42,209.3347);
   12->SetBinContent(43,101.4956);
   12->SetBinContent(44,126.8695);
   12->SetBinContent(45,126.8695);
   12->SetBinContent(46,145.9);
   12->SetBinContent(47,152.2435);
   12->SetBinContent(48,133.213);
   12->SetBinContent(49,114.1826);
   12->SetBinContent(50,126.8695);
   12->SetBinContent(51,9052.056);
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
   13->SetBinContent(1,1060.468);
   13->SetBinContent(2,2610.383);
   13->SetBinContent(3,4323.447);
   13->SetBinContent(4,5302.344);
   13->SetBinContent(5,5547.068);
   13->SetBinContent(6,6525.964);
   13->SetBinContent(7,6933.838);
   13->SetBinContent(8,5139.194);
   13->SetBinContent(9,4405.022);
   13->SetBinContent(10,4160.298);
   13->SetBinContent(11,3915.574);
   13->SetBinContent(12,4160.298);
   13->SetBinContent(13,3262.979);
   13->SetBinContent(14,2773.532);
   13->SetBinContent(15,2365.66);
   13->SetBinContent(16,2855.106);
   13->SetBinContent(17,2284.085);
   13->SetBinContent(18,1794.638);
   13->SetBinContent(19,1305.192);
   13->SetBinContent(20,1223.617);
   13->SetBinContent(21,1386.766);
   13->SetBinContent(22,897.3193);
   13->SetBinContent(23,652.5959);
   13->SetBinContent(24,571.0215);
   13->SetBinContent(25,489.447);
   13->SetBinContent(26,489.447);
   13->SetBinContent(27,571.0215);
   13->SetBinContent(28,734.1704);
   13->SetBinContent(29,489.447);
   13->SetBinContent(30,652.5959);
   13->SetBinContent(31,326.298);
   13->SetBinContent(32,407.8725);
   13->SetBinContent(33,244.7235);
   13->SetBinContent(34,571.0215);
   13->SetBinContent(35,244.7235);
   13->SetBinContent(36,571.0215);
   13->SetBinContent(37,244.7235);
   13->SetBinContent(38,81.57449);
   13->SetBinContent(39,163.149);
   13->SetBinContent(41,571.0215);
   13->SetBinContent(43,326.298);
   13->SetBinContent(44,244.7235);
   13->SetBinContent(45,163.149);
   13->SetBinContent(46,244.7235);
   13->SetBinContent(47,81.57449);
   13->SetBinContent(48,81.57449);
   13->SetBinContent(49,81.57449);
   13->SetBinContent(50,244.7235);
   13->SetBinContent(51,2691.958);
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
   14->SetBinContent(1,112.8254);
   14->SetBinContent(2,278.0341);
   14->SetBinContent(3,479.5081);
   14->SetBinContent(4,560.0977);
   14->SetBinContent(5,797.837);
   14->SetBinContent(6,991.252);
   14->SetBinContent(7,1063.782);
   14->SetBinContent(8,1273.312);
   14->SetBinContent(9,1321.665);
   14->SetBinContent(10,1567.459);
   14->SetBinContent(11,1579.548);
   14->SetBinContent(12,1531.195);
   14->SetBinContent(13,1466.724);
   14->SetBinContent(14,1575.518);
   14->SetBinContent(15,1631.93);
   14->SetBinContent(16,1567.459);
   14->SetBinContent(17,1478.812);
   14->SetBinContent(18,1418.371);
   14->SetBinContent(19,1418.371);
   14->SetBinContent(20,1228.988);
   14->SetBinContent(21,1293.459);
   14->SetBinContent(22,1136.312);
   14->SetBinContent(23,1140.341);
   14->SetBinContent(24,1128.253);
   14->SetBinContent(25,1051.694);
   14->SetBinContent(26,954.9867);
   14->SetBinContent(27,918.7214);
   14->SetBinContent(28,801.8665);
   14->SetBinContent(29,801.8665);
   14->SetBinContent(30,680.9821);
   14->SetBinContent(31,850.2202);
   14->SetBinContent(32,701.1295);
   14->SetBinContent(33,709.1884);
   14->SetBinContent(34,664.8641);
   14->SetBinContent(35,568.1566);
   14->SetBinContent(36,572.1861);
   14->SetBinContent(37,572.1861);
   14->SetBinContent(38,552.0387);
   14->SetBinContent(39,439.2133);
   14->SetBinContent(40,455.3312);
   14->SetBinContent(41,402.948);
   14->SetBinContent(42,378.7711);
   14->SetBinContent(43,362.6532);
   14->SetBinContent(44,322.3584);
   14->SetBinContent(45,330.4173);
   14->SetBinContent(46,302.211);
   14->SetBinContent(47,310.2699);
   14->SetBinContent(48,314.2994);
   14->SetBinContent(49,318.3289);
   14->SetBinContent(50,310.2699);
   14->SetBinContent(51,4388.106);
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
   15->SetBinContent(1,46.35416);
   15->SetBinContent(2,135.1996);
   15->SetBinContent(3,158.3768);
   15->SetBinContent(4,204.731);
   15->SetBinContent(5,123.6111);
   15->SetBinContent(6,154.5139);
   15->SetBinContent(7,181.5539);
   15->SetBinContent(8,193.1425);
   15->SetBinContent(9,208.5939);
   15->SetBinContent(10,197.0053);
   15->SetBinContent(11,220.1824);
   15->SetBinContent(12,139.0625);
   15->SetBinContent(13,115.8854);
   15->SetBinContent(14,100.434);
   15->SetBinContent(15,115.8854);
   15->SetBinContent(16,100.434);
   15->SetBinContent(17,127.4739);
   15->SetBinContent(18,65.6684);
   15->SetBinContent(19,65.6684);
   15->SetBinContent(20,57.9427);
   15->SetBinContent(21,30.90277);
   15->SetBinContent(22,34.76562);
   15->SetBinContent(23,42.49131);
   15->SetBinContent(24,27.03993);
   15->SetBinContent(25,27.03993);
   15->SetBinContent(26,30.90277);
   15->SetBinContent(27,30.90277);
   15->SetBinContent(28,19.31424);
   15->SetBinContent(29,30.90277);
   15->SetBinContent(30,19.31424);
   15->SetBinContent(31,19.31424);
   15->SetBinContent(32,7.725694);
   15->SetBinContent(33,3.862847);
   15->SetBinContent(35,15.45139);
   15->SetBinContent(36,19.31424);
   15->SetBinContent(37,27.03993);
   15->SetBinContent(38,11.58854);
   15->SetBinContent(39,3.862847);
   15->SetBinContent(40,7.725694);
   15->SetBinContent(41,3.862847);
   15->SetBinContent(42,30.90277);
   15->SetBinContent(43,3.862847);
   15->SetBinContent(44,11.58854);
   15->SetBinContent(45,3.862847);
   15->SetBinContent(46,7.725694);
   15->SetBinContent(49,3.862847);
   15->SetBinContent(50,7.725694);
   15->SetBinContent(51,181.5539);
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
   16->SetBinContent(1,412.9998);
   16->SetBinContent(2,1084.896);
   16->SetBinContent(3,1423.926);
   16->SetBinContent(4,2200.61);
   16->SetBinContent(5,2786.196);
   16->SetBinContent(6,2706.063);
   16->SetBinContent(7,2743.048);
   16->SetBinContent(8,2878.657);
   16->SetBinContent(9,3193.024);
   16->SetBinContent(10,2958.79);
   16->SetBinContent(11,2878.657);
   16->SetBinContent(12,2755.376);
   16->SetBinContent(13,2428.681);
   16->SetBinContent(14,2749.212);
   16->SetBinContent(15,2305.399);
   16->SetBinContent(16,2021.852);
   16->SetBinContent(17,1713.643);
   16->SetBinContent(18,1806.105);
   16->SetBinContent(19,1473.24);
   16->SetBinContent(20,1300.642);
   16->SetBinContent(21,1220.508);
   16->SetBinContent(22,1109.553);
   16->SetBinContent(23,893.8062);
   16->SetBinContent(24,819.8359);
   16->SetBinContent(25,702.7164);
   16->SetBinContent(26,708.8806);
   16->SetBinContent(27,560.9402);
   16->SetBinContent(28,523.9551);
   16->SetBinContent(29,542.4476);
   16->SetBinContent(30,480.8058);
   16->SetBinContent(31,437.6565);
   16->SetBinContent(32,369.8505);
   16->SetBinContent(33,412.9998);
   16->SetBinContent(34,376.0146);
   16->SetBinContent(35,332.8654);
   16->SetBinContent(36,271.2235);
   16->SetBinContent(37,345.1937);
   16->SetBinContent(38,265.0593);
   16->SetBinContent(39,221.9101);
   16->SetBinContent(40,228.0743);
   16->SetBinContent(41,221.9101);
   16->SetBinContent(42,147.9401);
   16->SetBinContent(43,160.2684);
   16->SetBinContent(44,129.4476);
   16->SetBinContent(45,203.4176);
   16->SetBinContent(46,172.5968);
   16->SetBinContent(47,172.5968);
   16->SetBinContent(48,178.7609);
   16->SetBinContent(49,117.1192);
   16->SetBinContent(50,92.46255);
   16->SetBinContent(51,2188.282);
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
   17->SetBinContent(1,374.8028);
   17->SetBinContent(2,562.2042);
   17->SetBinContent(3,726.1804);
   17->SetBinContent(4,1147.833);
   17->SetBinContent(5,937.0069);
   17->SetBinContent(6,1311.81);
   17->SetBinContent(7,1710.038);
   17->SetBinContent(8,1827.163);
   17->SetBinContent(9,2178.542);
   17->SetBinContent(10,2389.369);
   17->SetBinContent(11,1967.714);
   17->SetBinContent(12,1264.959);
   17->SetBinContent(13,702.7552);
   17->SetBinContent(14,445.0783);
   17->SetBinContent(15,445.0783);
   17->SetBinContent(16,562.2042);
   17->SetBinContent(17,351.3776);
   17->SetBinContent(18,281.1021);
   17->SetBinContent(19,257.6769);
   17->SetBinContent(20,374.8028);
   17->SetBinContent(21,257.6769);
   17->SetBinContent(22,304.5273);
   17->SetBinContent(23,304.5273);
   17->SetBinContent(24,234.2517);
   17->SetBinContent(25,187.4014);
   17->SetBinContent(26,163.9762);
   17->SetBinContent(27,163.9762);
   17->SetBinContent(28,140.5511);
   17->SetBinContent(29,234.2517);
   17->SetBinContent(30,187.4014);
   17->SetBinContent(31,187.4014);
   17->SetBinContent(32,187.4014);
   17->SetBinContent(33,327.9524);
   17->SetBinContent(34,257.6769);
   17->SetBinContent(35,210.8266);
   17->SetBinContent(36,210.8266);
   17->SetBinContent(37,187.4014);
   17->SetBinContent(38,281.1021);
   17->SetBinContent(39,257.6769);
   17->SetBinContent(40,187.4014);
   17->SetBinContent(41,281.1021);
   17->SetBinContent(42,234.2517);
   17->SetBinContent(43,234.2517);
   17->SetBinContent(44,187.4014);
   17->SetBinContent(45,187.4014);
   17->SetBinContent(46,281.1021);
   17->SetBinContent(47,327.9524);
   17->SetBinContent(48,117.1259);
   17->SetBinContent(49,187.4014);
   17->SetBinContent(50,257.6769);
   17->SetBinContent(51,22464.8);
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
