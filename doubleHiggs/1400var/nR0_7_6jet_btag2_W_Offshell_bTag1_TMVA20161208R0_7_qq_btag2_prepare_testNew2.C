{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:01:42 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.239788,1.31746,5.907535);
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
   
   TH1F *THStack_stack_18 = new TH1F("THStack_stack_18","",50,0,1);
   THStack_stack_18->SetMinimum(0.02551117);
   THStack_stack_18->SetMaximum(149882);
   THStack_stack_18->SetDirectory(0);
   THStack_stack_18->SetStats(0);
   THStack_stack_18->SetLineWidth(2);
   THStack_stack_18->SetMarkerSize(1.2);
   THStack_stack_18->GetXaxis()->SetTitle("Highest B tag of W* jets");
   THStack_stack_18->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_18->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_18->GetXaxis()->SetLabelColor(ci);
   THStack_stack_18->GetXaxis()->SetLabelFont(42);
   THStack_stack_18->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_18->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_18->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_18->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_18->GetXaxis()->SetTitleColor(ci);
   THStack_stack_18->GetXaxis()->SetTitleFont(42);
   THStack_stack_18->GetYaxis()->SetTitle("Number of events");
   THStack_stack_18->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_18->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_18->GetYaxis()->SetLabelColor(ci);
   THStack_stack_18->GetYaxis()->SetLabelFont(42);
   THStack_stack_18->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_18->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_18->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_18->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_18->GetYaxis()->SetTitleColor(ci);
   THStack_stack_18->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_18->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_18->GetZaxis()->SetLabelColor(ci);
   THStack_stack_18->GetZaxis()->SetLabelFont(42);
   THStack_stack_18->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_18->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_18->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_18->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_18->GetZaxis()->SetTitleColor(ci);
   THStack_stack_18->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_18);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,0.02823);
   0->SetBinContent(2,0.1467961);
   0->SetBinContent(3,0.8901879);
   0->SetBinContent(4,1.656148);
   0->SetBinContent(5,1.889511);
   0->SetBinContent(6,1.748364);
   0->SetBinContent(7,1.366327);
   0->SetBinContent(8,1.163075);
   0->SetBinContent(9,1.087797);
   0->SetBinContent(10,0.7640928);
   0->SetBinContent(11,0.6060034);
   0->SetBinContent(12,0.9522945);
   0->SetBinContent(13,0.3669894);
   0->SetBinContent(14,0.284182);
   0->SetBinContent(15,0.2314862);
   0->SetBinContent(16,0.2164302);
   0->SetBinContent(17,0.1825541);
   0->SetBinContent(18,0.2051382);
   0->SetBinContent(19,0.1674981);
   0->SetBinContent(20,0.1185661);
   0->SetBinContent(21,0.1204481);
   0->SetBinContent(22,0.09033605);
   0->SetBinContent(23,0.09033605);
   0->SetBinContent(24,0.08657205);
   0->SetBinContent(25,0.09598206);
   0->SetBinContent(26,0.05457802);
   0->SetBinContent(27,0.06210603);
   0->SetBinContent(28,0.05646002);
   0->SetBinContent(29,0.04705001);
   0->SetBinContent(30,0.06022403);
   0->SetBinContent(31,0.04328601);
   0->SetBinContent(32,0.05834202);
   0->SetBinContent(33,0.04516801);
   0->SetBinContent(34,0.026348);
   0->SetBinContent(35,0.030112);
   0->SetBinContent(36,0.031994);
   0->SetBinContent(37,0.033876);
   0->SetBinContent(38,0.01882);
   0->SetBinContent(39,0.022584);
   0->SetBinContent(40,0.04140401);
   0->SetBinContent(41,0.02823);
   0->SetBinContent(42,0.020702);
   0->SetBinContent(43,0.04516801);
   0->SetBinContent(44,0.030112);
   0->SetBinContent(45,0.04893202);
   0->SetBinContent(46,0.04705001);
   0->SetBinContent(47,0.06587003);
   0->SetBinContent(48,0.1185661);
   0->SetBinContent(49,0.2145482);
   0->SetBinContent(50,0.8732498);
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
   1->SetBinContent(1,0.1016281);
   1->SetBinContent(2,0.04799103);
   1->SetBinContent(3,0.2521873);
   1->SetBinContent(4,0.4657961);
   1->SetBinContent(5,0.6681076);
   1->SetBinContent(6,0.6765764);
   1->SetBinContent(7,0.6793994);
   1->SetBinContent(8,0.5561312);
   1->SetBinContent(9,0.6229407);
   1->SetBinContent(10,0.5382526);
   1->SetBinContent(11,0.3472291);
   1->SetBinContent(12,0.5805966);
   1->SetBinContent(13,0.2559513);
   1->SetBinContent(14,0.2145475);
   1->SetBinContent(15,0.1590289);
   1->SetBinContent(16,0.1533829);
   1->SetBinContent(17,0.1580879);
   1->SetBinContent(18,0.1590289);
   1->SetBinContent(19,0.1157431);
   1->SetBinContent(20,0.1298581);
   1->SetBinContent(21,0.1176251);
   1->SetBinContent(22,0.1053921);
   1->SetBinContent(23,0.08657207);
   1->SetBinContent(24,0.09692308);
   1->SetBinContent(25,0.09221807);
   1->SetBinContent(26,0.08374906);
   1->SetBinContent(27,0.08939507);
   1->SetBinContent(28,0.06492905);
   1->SetBinContent(29,0.06587005);
   1->SetBinContent(30,0.07057505);
   1->SetBinContent(31,0.06492905);
   1->SetBinContent(32,0.06116504);
   1->SetBinContent(33,0.05081403);
   1->SetBinContent(34,0.05551904);
   1->SetBinContent(35,0.04893203);
   1->SetBinContent(36,0.05269603);
   1->SetBinContent(37,0.04140402);
   1->SetBinContent(38,0.04799103);
   1->SetBinContent(39,0.04046302);
   1->SetBinContent(40,0.05269603);
   1->SetBinContent(41,0.04610903);
   1->SetBinContent(42,0.04610903);
   1->SetBinContent(43,0.04987303);
   1->SetBinContent(44,0.06587005);
   1->SetBinContent(45,0.05646004);
   1->SetBinContent(46,0.09033607);
   1->SetBinContent(47,0.1025691);
   1->SetBinContent(48,0.1769077);
   1->SetBinContent(49,0.2935916);
   1->SetBinContent(50,1.207301);
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
   2->SetBinContent(1,0.3124118);
   2->SetBinContent(2,0.2041965);
   2->SetBinContent(3,1.085908);
   2->SetBinContent(4,2.179394);
   2->SetBinContent(5,2.675321);
   2->SetBinContent(6,2.38454);
   2->SetBinContent(7,2.137988);
   2->SetBinContent(8,1.706993);
   2->SetBinContent(9,1.669351);
   2->SetBinContent(10,1.357868);
   2->SetBinContent(11,1.031327);
   2->SetBinContent(12,1.753104);
   2->SetBinContent(13,0.6427012);
   2->SetBinContent(14,0.4723832);
   2->SetBinContent(15,0.4206277);
   2->SetBinContent(16,0.3199399);
   2->SetBinContent(17,0.3208809);
   2->SetBinContent(18,0.3020607);
   2->SetBinContent(19,0.2747715);
   2->SetBinContent(20,0.2220754);
   2->SetBinContent(21,0.2211344);
   2->SetBinContent(22,0.2060785);
   2->SetBinContent(23,0.1834947);
   2->SetBinContent(24,0.1750257);
   2->SetBinContent(25,0.1627928);
   2->SetBinContent(26,0.144914);
   2->SetBinContent(27,0.1232711);
   2->SetBinContent(28,0.1260941);
   2->SetBinContent(29,0.1044511);
   2->SetBinContent(30,0.09598207);
   2->SetBinContent(31,0.08280806);
   2->SetBinContent(32,0.09410007);
   2->SetBinContent(33,0.07245705);
   2->SetBinContent(34,0.06304704);
   2->SetBinContent(35,0.06869305);
   2->SetBinContent(36,0.05928304);
   2->SetBinContent(37,0.06869305);
   2->SetBinContent(38,0.06963405);
   2->SetBinContent(39,0.04610903);
   2->SetBinContent(40,0.05646004);
   2->SetBinContent(41,0.05175503);
   2->SetBinContent(42,0.04893203);
   2->SetBinContent(43,0.05175503);
   2->SetBinContent(44,0.06963405);
   2->SetBinContent(45,0.07528006);
   2->SetBinContent(46,0.09974608);
   2->SetBinContent(47,0.132681);
   2->SetBinContent(48,0.1844357);
   2->SetBinContent(49,0.3105298);
   2->SetBinContent(50,1.471733);
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
   3->SetBinContent(1,1.140445);
   3->SetBinContent(2,0.9560612);
   3->SetBinContent(3,4.206669);
   3->SetBinContent(4,8.22201);
   3->SetBinContent(5,10.03176);
   3->SetBinContent(6,9.041521);
   3->SetBinContent(7,8.058107);
   3->SetBinContent(8,6.781121);
   3->SetBinContent(9,6.979156);
   3->SetBinContent(10,5.900208);
   3->SetBinContent(11,4.097408);
   3->SetBinContent(12,7.491314);
   3->SetBinContent(13,2.772581);
   3->SetBinContent(14,2.43113);
   3->SetBinContent(15,2.123824);
   3->SetBinContent(16,1.584331);
   3->SetBinContent(17,1.563844);
   3->SetBinContent(18,1.304341);
   3->SetBinContent(19,1.188248);
   3->SetBinContent(20,1.147274);
   3->SetBinContent(21,1.051668);
   3->SetBinContent(22,0.887771);
   3->SetBinContent(23,0.880942);
   3->SetBinContent(24,0.9355742);
   3->SetBinContent(25,0.9219161);
   3->SetBinContent(26,0.7033874);
   3->SetBinContent(27,0.7648486);
   3->SetBinContent(28,0.6214391);
   3->SetBinContent(29,0.6487552);
   3->SetBinContent(30,0.7785066);
   3->SetBinContent(31,0.587294);
   3->SetBinContent(32,0.4575427);
   3->SetBinContent(33,0.4165688);
   3->SetBinContent(34,0.4643717);
   3->SetBinContent(35,0.3755948);
   3->SetBinContent(36,0.4233977);
   3->SetBinContent(37,0.3755948);
   3->SetBinContent(38,0.2799889);
   3->SetBinContent(39,0.3619368);
   3->SetBinContent(40,0.4233977);
   3->SetBinContent(41,0.3414498);
   3->SetBinContent(42,0.2731599);
   3->SetBinContent(43,0.3619368);
   3->SetBinContent(44,0.4916877);
   3->SetBinContent(45,0.4507137);
   3->SetBinContent(46,0.6077811);
   3->SetBinContent(47,0.7033874);
   3->SetBinContent(48,1.338487);
   3->SetBinContent(49,2.035047);
   3->SetBinContent(50,8.549814);
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
   4->SetBinContent(1,4.229811);
   4->SetBinContent(2,1.641426);
   4->SetBinContent(3,5.629222);
   4->SetBinContent(4,9.701347);
   4->SetBinContent(5,12.96343);
   4->SetBinContent(6,12.93712);
   4->SetBinContent(7,13.17389);
   4->SetBinContent(8,12.21631);
   4->SetBinContent(9,12.76349);
   4->SetBinContent(10,11.42183);
   4->SetBinContent(11,7.933516);
   4->SetBinContent(12,15.45208);
   4->SetBinContent(13,4.829558);
   4->SetBinContent(14,3.745804);
   4->SetBinContent(15,2.925096);
   4->SetBinContent(16,2.719919);
   4->SetBinContent(17,2.714658);
   4->SetBinContent(18,2.178042);
   4->SetBinContent(19,1.967604);
   4->SetBinContent(20,1.909734);
   4->SetBinContent(21,1.604599);
   4->SetBinContent(22,1.594077);
   4->SetBinContent(23,1.299464);
   4->SetBinContent(24,1.194246);
   4->SetBinContent(25,1.27316);
   4->SetBinContent(26,1.004852);
   4->SetBinContent(27,0.8364995);
   4->SetBinContent(28,0.8838485);
   4->SetBinContent(29,0.8101944);
   4->SetBinContent(30,0.7260184);
   4->SetBinContent(31,0.7470624);
   4->SetBinContent(32,0.6734083);
   4->SetBinContent(33,0.6313203);
   4->SetBinContent(34,0.5050562);
   4->SetBinContent(35,0.4419242);
   4->SetBinContent(36,0.3998362);
   4->SetBinContent(37,0.4208802);
   4->SetBinContent(38,0.3682701);
   4->SetBinContent(39,0.3367041);
   4->SetBinContent(40,0.3051381);
   4->SetBinContent(41,0.3472261);
   4->SetBinContent(42,0.2683111);
   4->SetBinContent(43,0.4577072);
   4->SetBinContent(44,0.3840531);
   4->SetBinContent(45,0.4682292);
   4->SetBinContent(46,0.4892732);
   4->SetBinContent(47,0.6681473);
   4->SetBinContent(48,0.9732856);
   4->SetBinContent(49,1.88869);
   4->SetBinContent(50,7.691512);
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
   5->SetBinContent(1,6.212934);
   5->SetBinContent(2,6.684176);
   5->SetBinContent(3,24.59139);
   5->SetBinContent(4,42.36286);
   5->SetBinContent(5,49.48137);
   5->SetBinContent(6,47.75755);
   5->SetBinContent(7,41.65597);
   5->SetBinContent(8,36.11246);
   5->SetBinContent(9,34.98392);
   5->SetBinContent(10,30.54415);
   5->SetBinContent(11,19.76718);
   5->SetBinContent(12,43.82624);
   5->SetBinContent(13,11.47087);
   5->SetBinContent(14,8.147501);
   5->SetBinContent(15,6.064121);
   5->SetBinContent(16,5.654884);
   5->SetBinContent(17,5.245648);
   5->SetBinContent(18,4.241158);
   5->SetBinContent(19,3.955933);
   5->SetBinContent(20,3.769917);
   5->SetBinContent(21,2.901839);
   5->SetBinContent(22,3.174664);
   5->SetBinContent(23,2.67862);
   5->SetBinContent(24,2.839834);
   5->SetBinContent(25,2.4554);
   5->SetBinContent(26,1.984158);
   5->SetBinContent(27,1.971757);
   5->SetBinContent(28,2.207378);
   5->SetBinContent(29,1.711336);
   5->SetBinContent(30,1.748539);
   5->SetBinContent(31,1.612128);
   5->SetBinContent(32,1.215297);
   5->SetBinContent(33,1.463317);
   5->SetBinContent(34,1.178094);
   5->SetBinContent(35,1.116089);
   5->SetBinContent(36,1.091287);
   5->SetBinContent(37,1.041683);
   5->SetBinContent(38,1.054084);
   5->SetBinContent(39,0.8308663);
   5->SetBinContent(40,0.9052722);
   5->SetBinContent(41,0.6820545);
   5->SetBinContent(42,0.8928712);
   5->SetBinContent(43,0.9548761);
   5->SetBinContent(44,1.413713);
   5->SetBinContent(45,1.326906);
   5->SetBinContent(46,1.847747);
   5->SetBinContent(47,2.058564);
   5->SetBinContent(48,3.534296);
   5->SetBinContent(49,6.262538);
   5->SetBinContent(50,28.77073);
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
   6->SetBinContent(1,187.4916);
   6->SetBinContent(2,116.4387);
   6->SetBinContent(3,410.3396);
   6->SetBinContent(4,771.1832);
   6->SetBinContent(5,998.2831);
   6->SetBinContent(6,1049.231);
   6->SetBinContent(7,1061.835);
   6->SetBinContent(8,983.0216);
   6->SetBinContent(9,989.1718);
   6->SetBinContent(10,796.5431);
   6->SetBinContent(11,563.7487);
   6->SetBinContent(12,1145.431);
   6->SetBinContent(13,320.7809);
   6->SetBinContent(14,226.5106);
   6->SetBinContent(15,196.5251);
   6->SetBinContent(16,163.1237);
   6->SetBinContent(17,147.182);
   6->SetBinContent(18,128.128);
   6->SetBinContent(19,117.8049);
   6->SetBinContent(20,104.3698);
   6->SetBinContent(21,93.7431);
   6->SetBinContent(22,82.96461);
   6->SetBinContent(23,76.58861);
   6->SetBinContent(24,80.61156);
   6->SetBinContent(25,70.74393);
   6->SetBinContent(26,61.40763);
   6->SetBinContent(27,59.73773);
   6->SetBinContent(28,52.9822);
   6->SetBinContent(29,49.11105);
   6->SetBinContent(30,42.20371);
   6->SetBinContent(31,39.39523);
   6->SetBinContent(32,37.87713);
   6->SetBinContent(33,34.91684);
   6->SetBinContent(34,32.10836);
   6->SetBinContent(35,28.76847);
   6->SetBinContent(36,25.80811);
   6->SetBinContent(37,25.20085);
   6->SetBinContent(38,24.36588);
   6->SetBinContent(39,21.1778);
   6->SetBinContent(40,23.15137);
   6->SetBinContent(41,21.63324);
   6->SetBinContent(42,24.13816);
   6->SetBinContent(43,25.80811);
   6->SetBinContent(44,28.0094);
   6->SetBinContent(45,30.28661);
   6->SetBinContent(46,40.91333);
   6->SetBinContent(47,52.14724);
   6->SetBinContent(48,77.87899);
   6->SetBinContent(49,141.7923);
   6->SetBinContent(50,622.2889);
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
   7->SetBinContent(1,55.16833);
   7->SetBinContent(2,64.15131);
   7->SetBinContent(3,219.2683);
   7->SetBinContent(4,365.655);
   7->SetBinContent(5,430.1081);
   7->SetBinContent(6,393.5847);
   7->SetBinContent(7,367.2175);
   7->SetBinContent(8,325.5671);
   7->SetBinContent(9,317.7058);
   7->SetBinContent(10,270.8796);
   7->SetBinContent(11,424.2487);
   7->SetBinContent(12,896.0261);
   7->SetBinContent(13,223.3698);
   7->SetBinContent(14,158.9167);
   7->SetBinContent(15,120.3437);
   7->SetBinContent(16,104.1841);
   7->SetBinContent(17,88.07335);
   7->SetBinContent(18,76.69817);
   7->SetBinContent(19,72.89017);
   7->SetBinContent(20,64.44423);
   7->SetBinContent(21,55.65654);
   7->SetBinContent(22,48.187);
   7->SetBinContent(23,42.42619);
   7->SetBinContent(24,41.01039);
   7->SetBinContent(25,33.73614);
   7->SetBinContent(26,30.61157);
   7->SetBinContent(27,27.87752);
   7->SetBinContent(28,24.21584);
   7->SetBinContent(29,21.28649);
   7->SetBinContent(30,18.74773);
   7->SetBinContent(31,18.94302);
   7->SetBinContent(32,15.72074);
   7->SetBinContent(33,13.81667);
   7->SetBinContent(34,10.74085);
   7->SetBinContent(35,10.74085);
   7->SetBinContent(36,10.10616);
   7->SetBinContent(37,9.422649);
   7->SetBinContent(38,8.592669);
   7->SetBinContent(39,6.590964);
   7->SetBinContent(40,7.323293);
   7->SetBinContent(41,6.835073);
   7->SetBinContent(42,7.079183);
   7->SetBinContent(43,7.323293);
   7->SetBinContent(44,7.811512);
   7->SetBinContent(45,8.690313);
   7->SetBinContent(46,9.471472);
   7->SetBinContent(47,15.96485);
   7->SetBinContent(48,20.50533);
   7->SetBinContent(49,35.44485);
   7->SetBinContent(50,130.7429);
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
   8->SetBinContent(1,2.201295);
   8->SetBinContent(2,3.375319);
   8->SetBinContent(3,7.044141);
   8->SetBinContent(4,16.43635);
   8->SetBinContent(5,18.34414);
   8->SetBinContent(6,20.10518);
   8->SetBinContent(7,18.34414);
   8->SetBinContent(8,14.23505);
   8->SetBinContent(9,17.17012);
   8->SetBinContent(10,13.35453);
   8->SetBinContent(11,25.53506);
   8->SetBinContent(12,47.25435);
   8->SetBinContent(13,16.43635);
   8->SetBinContent(14,8.805178);
   8->SetBinContent(15,7.777905);
   8->SetBinContent(16,4.696096);
   8->SetBinContent(17,5.870119);
   8->SetBinContent(18,4.40259);
   8->SetBinContent(19,4.255837);
   8->SetBinContent(20,4.549343);
   8->SetBinContent(21,2.641554);
   8->SetBinContent(22,3.081813);
   8->SetBinContent(23,2.788307);
   8->SetBinContent(24,3.668826);
   8->SetBinContent(25,1.907789);
   8->SetBinContent(26,1.46753);
   8->SetBinContent(27,1.320777);
   8->SetBinContent(28,1.320777);
   8->SetBinContent(29,1.027271);
   8->SetBinContent(30,0.733765);
   8->SetBinContent(31,1.320777);
   8->SetBinContent(32,1.027271);
   8->SetBinContent(33,0.440259);
   8->SetBinContent(35,0.733765);
   8->SetBinContent(36,0.440259);
   8->SetBinContent(37,0.293506);
   8->SetBinContent(38,0.440259);
   8->SetBinContent(40,0.733765);
   8->SetBinContent(41,0.293506);
   8->SetBinContent(42,0.146753);
   8->SetBinContent(43,0.293506);
   8->SetBinContent(44,0.733765);
   8->SetBinContent(45,0.440259);
   8->SetBinContent(47,0.587012);
   8->SetBinContent(48,0.293506);
   8->SetBinContent(49,0.587012);
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
   9->SetBinContent(1,60.51809);
   9->SetBinContent(2,163.2092);
   9->SetBinContent(3,729.4928);
   9->SetBinContent(4,1166.805);
   9->SetBinContent(5,1195.427);
   9->SetBinContent(6,1000.895);
   9->SetBinContent(7,864.5936);
   9->SetBinContent(8,712.348);
   9->SetBinContent(9,704.1185);
   9->SetBinContent(10,534.2138);
   9->SetBinContent(11,483.8082);
   9->SetBinContent(12,751.4381);
   9->SetBinContent(13,310.9889);
   9->SetBinContent(14,245.8396);
   9->SetBinContent(15,220.9819);
   9->SetBinContent(16,191.3241);
   9->SetBinContent(17,177.2666);
   9->SetBinContent(18,159.6091);
   9->SetBinContent(19,152.7518);
   9->SetBinContent(20,139.7229);
   9->SetBinContent(21,126.1797);
   9->SetBinContent(22,124.4653);
   9->SetBinContent(23,116.579);
   9->SetBinContent(24,110.2357);
   9->SetBinContent(25,93.26315);
   9->SetBinContent(26,103.2067);
   9->SetBinContent(27,89.66291);
   9->SetBinContent(28,87.94851);
   9->SetBinContent(29,86.57699);
   9->SetBinContent(30,83.49107);
   9->SetBinContent(31,72.00458);
   9->SetBinContent(32,65.31841);
   9->SetBinContent(33,75.43338);
   9->SetBinContent(34,67.89001);
   9->SetBinContent(35,66.68993);
   9->SetBinContent(36,61.20385);
   9->SetBinContent(37,58.97513);
   9->SetBinContent(38,69.77586);
   9->SetBinContent(39,64.46121);
   9->SetBinContent(40,64.11833);
   9->SetBinContent(41,69.77586);
   9->SetBinContent(42,73.71898);
   9->SetBinContent(43,89.49147);
   9->SetBinContent(44,96.17764);
   9->SetBinContent(45,114.5217);
   9->SetBinContent(46,140.9229);
   9->SetBinContent(47,184.2953);
   9->SetBinContent(48,290.4151);
   9->SetBinContent(49,539.5287);
   9->SetBinContent(50,2950.255);
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
   10->SetBinContent(1,755.1667);
   10->SetBinContent(2,558.01);
   10->SetBinContent(3,1863.953);
   10->SetBinContent(4,3227.879);
   10->SetBinContent(5,3867.966);
   10->SetBinContent(6,3805.985);
   10->SetBinContent(7,3630.437);
   10->SetBinContent(8,3258.743);
   10->SetBinContent(9,3292.694);
   10->SetBinContent(10,2899.395);
   10->SetBinContent(11,3019.703);
   10->SetBinContent(12,6482.987);
   10->SetBinContent(13,1712.866);
   10->SetBinContent(14,1168.729);
   10->SetBinContent(15,949.736);
   10->SetBinContent(16,819.918);
   10->SetBinContent(17,732.5101);
   10->SetBinContent(18,635.3833);
   10->SetBinContent(19,594.2354);
   10->SetBinContent(20,527.3384);
   10->SetBinContent(21,479.3903);
   10->SetBinContent(22,418.5182);
   10->SetBinContent(23,382.6258);
   10->SetBinContent(24,364.0173);
   10->SetBinContent(25,323.9616);
   10->SetBinContent(26,292.9263);
   10->SetBinContent(27,257.3493);
   10->SetBinContent(28,237.033);
   10->SetBinContent(29,221.0068);
   10->SetBinContent(30,197.5354);
   10->SetBinContent(31,175.2629);
   10->SetBinContent(32,155.8927);
   10->SetBinContent(33,147.3118);
   10->SetBinContent(34,121.4436);
   10->SetBinContent(35,118.7308);
   10->SetBinContent(36,102.8327);
   10->SetBinContent(37,94.63138);
   10->SetBinContent(38,89.71056);
   10->SetBinContent(39,84.72665);
   10->SetBinContent(40,83.02328);
   10->SetBinContent(41,82.83402);
   10->SetBinContent(42,84.979);
   10->SetBinContent(43,88.63807);
   10->SetBinContent(44,96.20856);
   10->SetBinContent(45,109.3308);
   10->SetBinContent(46,134.8189);
   10->SetBinContent(47,182.5819);
   10->SetBinContent(48,267.1897);
   10->SetBinContent(49,460.0879);
   10->SetBinContent(50,1862.185);
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
   11->SetBinContent(1,190.2402);
   11->SetBinContent(2,58.53543);
   11->SetBinContent(3,248.7757);
   11->SetBinContent(4,439.0157);
   11->SetBinContent(5,717.0589);
   11->SetBinContent(6,614.6219);
   11->SetBinContent(7,673.1573);
   11->SetBinContent(8,687.7912);
   11->SetBinContent(9,702.425);
   11->SetBinContent(10,658.5235);
   11->SetBinContent(11,834.1297);
   11->SetBinContent(12,2092.645);
   11->SetBinContent(13,556.0865);
   11->SetBinContent(14,468.2834);
   11->SetBinContent(15,278.0434);
   11->SetBinContent(16,248.7757);
   11->SetBinContent(17,175.6063);
   11->SetBinContent(18,146.3386);
   11->SetBinContent(19,160.9725);
   11->SetBinContent(20,146.3386);
   11->SetBinContent(21,58.53543);
   11->SetBinContent(22,73.1693);
   11->SetBinContent(23,131.7047);
   11->SetBinContent(24,73.1693);
   11->SetBinContent(25,29.26772);
   11->SetBinContent(26,14.63386);
   11->SetBinContent(27,87.80315);
   11->SetBinContent(28,14.63386);
   11->SetBinContent(29,58.53543);
   11->SetBinContent(30,29.26772);
   11->SetBinContent(31,58.53543);
   11->SetBinContent(32,43.90158);
   11->SetBinContent(33,58.53543);
   11->SetBinContent(34,14.63386);
   11->SetBinContent(35,29.26772);
   11->SetBinContent(38,14.63386);
   11->SetBinContent(40,43.90158);
   11->SetBinContent(43,43.90158);
   11->SetBinContent(44,14.63386);
   11->SetBinContent(46,29.26772);
   11->SetBinContent(48,58.53543);
   11->SetBinContent(49,29.26772);
   11->SetBinContent(50,102.437);
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
   12->SetBinContent(1,2232.912);
   12->SetBinContent(2,386.9521);
   12->SetBinContent(3,1370.195);
   12->SetBinContent(4,1998.202);
   12->SetBinContent(5,2657.927);
   12->SetBinContent(6,3596.765);
   12->SetBinContent(7,4237.454);
   12->SetBinContent(8,4389.692);
   12->SetBinContent(9,5556.853);
   12->SetBinContent(10,3387.43);
   12->SetBinContent(11,5163.57);
   12->SetBinContent(12,12160.49);
   12->SetBinContent(13,2594.491);
   12->SetBinContent(14,1852.301);
   12->SetBinContent(15,1484.378);
   12->SetBinContent(16,1148.172);
   12->SetBinContent(17,1027.646);
   12->SetBinContent(18,723.1573);
   12->SetBinContent(19,742.1878);
   12->SetBinContent(20,710.4703);
   12->SetBinContent(21,513.8216);
   12->SetBinContent(22,475.7607);
   12->SetBinContent(23,399.639);
   12->SetBinContent(24,336.2043);
   12->SetBinContent(25,361.5782);
   12->SetBinContent(26,247.3956);
   12->SetBinContent(27,285.4565);
   12->SetBinContent(28,209.3347);
   12->SetBinContent(29,158.5869);
   12->SetBinContent(30,183.9608);
   12->SetBinContent(31,120.5261);
   12->SetBinContent(32,139.5565);
   12->SetBinContent(33,101.4956);
   12->SetBinContent(34,69.77827);
   12->SetBinContent(35,38.06087);
   12->SetBinContent(36,69.77827);
   12->SetBinContent(37,38.06087);
   12->SetBinContent(38,38.06087);
   12->SetBinContent(39,25.37391);
   12->SetBinContent(40,57.09131);
   12->SetBinContent(41,19.03043);
   12->SetBinContent(42,63.43479);
   12->SetBinContent(43,50.74783);
   12->SetBinContent(44,69.77827);
   12->SetBinContent(45,44.40435);
   12->SetBinContent(46,38.06087);
   12->SetBinContent(47,44.40435);
   12->SetBinContent(48,101.4956);
   12->SetBinContent(49,126.8695);
   12->SetBinContent(50,545.5391);
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
   13->SetBinContent(1,1386.766);
   13->SetBinContent(2,489.447);
   13->SetBinContent(3,1631.49);
   13->SetBinContent(4,3834);
   13->SetBinContent(5,4486.597);
   13->SetBinContent(6,6036.516);
   13->SetBinContent(7,5383.918);
   13->SetBinContent(8,5791.792);
   13->SetBinContent(9,5954.941);
   13->SetBinContent(10,3834);
   13->SetBinContent(11,6362.815);
   13->SetBinContent(12,15009.69);
   13->SetBinContent(13,3752.426);
   13->SetBinContent(14,2528.809);
   13->SetBinContent(15,2284.085);
   13->SetBinContent(16,978.8938);
   13->SetBinContent(17,1631.49);
   13->SetBinContent(18,1549.915);
   13->SetBinContent(19,1305.192);
   13->SetBinContent(20,1223.617);
   13->SetBinContent(21,1142.043);
   13->SetBinContent(22,734.1704);
   13->SetBinContent(23,571.0215);
   13->SetBinContent(24,571.0215);
   13->SetBinContent(25,571.0215);
   13->SetBinContent(26,652.5959);
   13->SetBinContent(27,734.1704);
   13->SetBinContent(28,407.8725);
   13->SetBinContent(29,244.7235);
   13->SetBinContent(30,244.7235);
   13->SetBinContent(31,81.57449);
   13->SetBinContent(32,244.7235);
   13->SetBinContent(33,163.149);
   13->SetBinContent(34,163.149);
   13->SetBinContent(35,407.8725);
   13->SetBinContent(36,163.149);
   13->SetBinContent(37,326.298);
   13->SetBinContent(39,163.149);
   13->SetBinContent(40,81.57449);
   13->SetBinContent(41,81.57449);
   13->SetBinContent(42,81.57449);
   13->SetBinContent(43,163.149);
   13->SetBinContent(45,244.7235);
   13->SetBinContent(46,407.8725);
   13->SetBinContent(48,163.149);
   13->SetBinContent(49,244.7235);
   13->SetBinContent(50,1957.787);
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
   14->SetBinContent(1,3759.515);
   14->SetBinContent(2,398.9185);
   14->SetBinContent(3,1196.753);
   14->SetBinContent(4,1772.96);
   14->SetBinContent(5,2075.167);
   14->SetBinContent(6,2208.142);
   14->SetBinContent(7,2715.864);
   14->SetBinContent(8,2885.105);
   14->SetBinContent(9,3404.916);
   14->SetBinContent(10,3263.882);
   14->SetBinContent(11,3215.527);
   14->SetBinContent(12,9223.263);
   14->SetBinContent(13,1793.107);
   14->SetBinContent(14,1083.929);
   14->SetBinContent(15,850.2202);
   14->SetBinContent(16,749.4832);
   14->SetBinContent(17,644.7167);
   14->SetBinContent(18,548.0092);
   14->SetBinContent(19,568.1566);
   14->SetBinContent(20,543.9797);
   14->SetBinContent(21,406.9774);
   14->SetBinContent(22,334.4468);
   14->SetBinContent(23,302.211);
   14->SetBinContent(24,290.1225);
   14->SetBinContent(25,306.2404);
   14->SetBinContent(26,197.4445);
   14->SetBinContent(27,225.6509);
   14->SetBinContent(28,201.474);
   14->SetBinContent(29,132.9728);
   14->SetBinContent(30,124.9139);
   14->SetBinContent(31,92.67803);
   14->SetBinContent(32,124.9139);
   14->SetBinContent(33,88.64855);
   14->SetBinContent(34,60.4422);
   14->SetBinContent(35,40.2948);
   14->SetBinContent(36,84.61907);
   14->SetBinContent(37,40.2948);
   14->SetBinContent(38,40.2948);
   14->SetBinContent(39,20.1474);
   14->SetBinContent(40,28.20636);
   14->SetBinContent(41,40.2948);
   14->SetBinContent(42,36.26532);
   14->SetBinContent(43,28.20636);
   14->SetBinContent(44,28.20636);
   14->SetBinContent(45,36.26532);
   14->SetBinContent(46,80.58959);
   14->SetBinContent(47,80.58959);
   14->SetBinContent(48,72.53063);
   14->SetBinContent(49,153.1202);
   14->SetBinContent(50,475.4786);
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
   15->SetBinContent(1,289.7138);
   15->SetBinContent(2,7.725694);
   15->SetBinContent(3,54.07985);
   15->SetBinContent(4,112.0226);
   15->SetBinContent(5,139.0625);
   15->SetBinContent(6,208.5939);
   15->SetBinContent(7,208.5939);
   15->SetBinContent(8,227.9081);
   15->SetBinContent(9,220.1824);
   15->SetBinContent(10,231.771);
   15->SetBinContent(11,247.2224);
   15->SetBinContent(12,629.645);
   15->SetBinContent(13,100.434);
   15->SetBinContent(14,69.53124);
   15->SetBinContent(15,77.25694);
   15->SetBinContent(16,69.53124);
   15->SetBinContent(17,38.62847);
   15->SetBinContent(18,34.76562);
   15->SetBinContent(19,46.35416);
   15->SetBinContent(20,46.35416);
   15->SetBinContent(21,11.58854);
   15->SetBinContent(22,11.58854);
   15->SetBinContent(23,19.31424);
   15->SetBinContent(24,23.17708);
   15->SetBinContent(25,19.31424);
   15->SetBinContent(26,3.862847);
   15->SetBinContent(27,23.17708);
   15->SetBinContent(28,27.03993);
   15->SetBinContent(29,11.58854);
   15->SetBinContent(30,15.45139);
   15->SetBinContent(32,3.862847);
   15->SetBinContent(33,15.45139);
   15->SetBinContent(35,7.725694);
   15->SetBinContent(36,3.862847);
   15->SetBinContent(37,3.862847);
   15->SetBinContent(39,7.725694);
   15->SetBinContent(42,7.725694);
   15->SetBinContent(43,3.862847);
   15->SetBinContent(44,3.862847);
   15->SetBinContent(45,7.725694);
   15->SetBinContent(47,7.725694);
   15->SetBinContent(48,11.58854);
   15->SetBinContent(49,7.725694);
   15->SetBinContent(50,57.9427);
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
   16->SetBinContent(1,2570.454);
   16->SetBinContent(2,406.8356);
   16->SetBinContent(3,973.9406);
   16->SetBinContent(4,2028.016);
   16->SetBinContent(5,2484.157);
   16->SetBinContent(6,2699.899);
   16->SetBinContent(7,3359.454);
   16->SetBinContent(8,3316.306);
   16->SetBinContent(9,3741.626);
   16->SetBinContent(10,3180.696);
   16->SetBinContent(11,5553.86);
   16->SetBinContent(12,14091.09);
   16->SetBinContent(13,2841.673);
   16->SetBinContent(14,1818.434);
   16->SetBinContent(15,1343.792);
   16->SetBinContent(16,1091.06);
   16->SetBinContent(17,1072.568);
   16->SetBinContent(18,819.8359);
   16->SetBinContent(19,634.9104);
   16->SetBinContent(20,770.5225);
   16->SetBinContent(21,523.9551);
   16->SetBinContent(22,499.2983);
   16->SetBinContent(23,369.8505);
   16->SetBinContent(24,295.8802);
   16->SetBinContent(25,215.7459);
   16->SetBinContent(26,197.2534);
   16->SetBinContent(27,215.7459);
   16->SetBinContent(28,209.5818);
   16->SetBinContent(29,154.1042);
   16->SetBinContent(30,154.1042);
   16->SetBinContent(31,123.2834);
   16->SetBinContent(32,123.2834);
   16->SetBinContent(33,110.9551);
   16->SetBinContent(34,86.29838);
   16->SetBinContent(35,36.98502);
   16->SetBinContent(36,24.65668);
   16->SetBinContent(37,24.65668);
   16->SetBinContent(38,12.32834);
   16->SetBinContent(39,18.49251);
   16->SetBinContent(40,18.49251);
   16->SetBinContent(41,43.14919);
   16->SetBinContent(42,12.32834);
   16->SetBinContent(44,6.16417);
   16->SetBinContent(45,12.32834);
   16->SetBinContent(46,30.82085);
   16->SetBinContent(47,6.16417);
   16->SetBinContent(48,12.32834);
   16->SetBinContent(49,55.47753);
   16->SetBinContent(50,36.98502);
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
   17->SetBinContent(1,2178.542);
   17->SetBinContent(2,749.6055);
   17->SetBinContent(3,1756.888);
   17->SetBinContent(4,2834.45);
   17->SetBinContent(5,3279.531);
   17->SetBinContent(6,2600.197);
   17->SetBinContent(7,2928.151);
   17->SetBinContent(8,2811.025);
   17->SetBinContent(9,2928.151);
   17->SetBinContent(10,2811.025);
   17->SetBinContent(11,2928.151);
   17->SetBinContent(12,6535.646);
   17->SetBinContent(13,1358.66);
   17->SetBinContent(14,937.0069);
   17->SetBinContent(15,749.6055);
   17->SetBinContent(16,726.1804);
   17->SetBinContent(17,421.6531);
   17->SetBinContent(18,398.2279);
   17->SetBinContent(19,421.6531);
   17->SetBinContent(20,445.0783);
   17->SetBinContent(21,93.70071);
   17->SetBinContent(22,351.3776);
   17->SetBinContent(23,210.8266);
   17->SetBinContent(24,398.2279);
   17->SetBinContent(25,281.1021);
   17->SetBinContent(26,327.9524);
   17->SetBinContent(27,140.5511);
   17->SetBinContent(28,70.27553);
   17->SetBinContent(29,163.9762);
   17->SetBinContent(30,210.8266);
   17->SetBinContent(31,210.8266);
   17->SetBinContent(32,163.9762);
   17->SetBinContent(33,210.8266);
   17->SetBinContent(34,70.27553);
   17->SetBinContent(35,93.70071);
   17->SetBinContent(36,163.9762);
   17->SetBinContent(37,117.1259);
   17->SetBinContent(38,93.70071);
   17->SetBinContent(39,93.70071);
   17->SetBinContent(40,163.9762);
   17->SetBinContent(41,117.1259);
   17->SetBinContent(42,23.42518);
   17->SetBinContent(43,304.5273);
   17->SetBinContent(44,70.27553);
   17->SetBinContent(45,257.6769);
   17->SetBinContent(46,281.1021);
   17->SetBinContent(47,374.8028);
   17->SetBinContent(48,585.6293);
   17->SetBinContent(49,585.6293);
   17->SetBinContent(50,3021.852);
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
