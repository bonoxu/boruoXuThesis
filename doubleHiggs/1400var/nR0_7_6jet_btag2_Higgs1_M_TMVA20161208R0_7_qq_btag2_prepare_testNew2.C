{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 00:55:30 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-53.96825,-3.063368,263.4921,5.277186);
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
   
   TH1F *THStack_stack_1 = new TH1F("THStack_stack_1","",50,0,200);
   THStack_stack_1->SetMinimum(0.02741141);
   THStack_stack_1->SetMaximum(40732.53);
   THStack_stack_1->SetDirectory(0);
   THStack_stack_1->SetStats(0);
   THStack_stack_1->SetLineWidth(2);
   THStack_stack_1->SetMarkerSize(1.2);
   THStack_stack_1->GetXaxis()->SetTitle("M_{H#rightarrowbb} / GeV");
   THStack_stack_1->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetXaxis()->SetLabelColor(ci);
   THStack_stack_1->GetXaxis()->SetLabelFont(42);
   THStack_stack_1->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_1->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_1->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_1->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_1->GetXaxis()->SetTitleColor(ci);
   THStack_stack_1->GetXaxis()->SetTitleFont(42);
   THStack_stack_1->GetYaxis()->SetTitle("Number of events");
   THStack_stack_1->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetYaxis()->SetLabelColor(ci);
   THStack_stack_1->GetYaxis()->SetLabelFont(42);
   THStack_stack_1->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_1->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_1->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_1->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_1->GetYaxis()->SetTitleColor(ci);
   THStack_stack_1->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetZaxis()->SetLabelColor(ci);
   THStack_stack_1->GetZaxis()->SetLabelFont(42);
   THStack_stack_1->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_1->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_1->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_1->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_1->GetZaxis()->SetTitleColor(ci);
   THStack_stack_1->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_1);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,200);
   0->SetBinContent(3,0.013174);
   0->SetBinContent(4,0.022584);
   0->SetBinContent(5,0.02823);
   0->SetBinContent(6,0.04893202);
   0->SetBinContent(7,0.08280805);
   0->SetBinContent(8,0.08092605);
   0->SetBinContent(9,0.06398803);
   0->SetBinContent(10,0.09598206);
   0->SetBinContent(11,0.08845405);
   0->SetBinContent(12,0.1016281);
   0->SetBinContent(13,0.1223301);
   0->SetBinContent(14,0.1242121);
   0->SetBinContent(15,0.1524421);
   0->SetBinContent(16,0.1674981);
   0->SetBinContent(17,0.1750261);
   0->SetBinContent(18,0.1957282);
   0->SetBinContent(19,0.2634801);
   0->SetBinContent(20,0.2917099);
   0->SetBinContent(21,0.4403869);
   0->SetBinContent(22,0.4912005);
   0->SetBinContent(23,0.5683631);
   0->SetBinContent(24,0.7528007);
   0->SetBinContent(25,0.8299634);
   0->SetBinContent(26,0.9579405);
   0->SetBinContent(27,1.06145);
   0->SetBinContent(28,1.219534);
   0->SetBinContent(29,1.424667);
   0->SetBinContent(30,1.490536);
   0->SetBinContent(31,1.47548);
   0->SetBinContent(32,1.323042);
   0->SetBinContent(33,0.9391204);
   0->SetBinContent(34,0.5250767);
   0->SetBinContent(35,0.2992378);
   0->SetBinContent(36,0.1693801);
   0->SetBinContent(37,0.1110381);
   0->SetBinContent(38,0.07716204);
   0->SetBinContent(39,0.05834202);
   0->SetBinContent(40,0.031994);
   0->SetBinContent(41,0.02823);
   0->SetBinContent(42,0.033876);
   0->SetBinContent(43,0.016938);
   0->SetBinContent(44,0.016938);
   0->SetBinContent(45,0.013174);
   0->SetBinContent(46,0.01882);
   0->SetBinContent(47,0.007528);
   0->SetBinContent(48,0.007528);
   0->SetBinContent(49,0.00941);
   0->SetBinContent(50,0.015056);
   0->SetBinContent(51,0.1467961);
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
   1->SetBinContent(2,0.000941);
   1->SetBinContent(3,0.011292);
   1->SetBinContent(4,0.019761);
   1->SetBinContent(5,0.03481702);
   1->SetBinContent(6,0.03293502);
   1->SetBinContent(7,0.05269603);
   1->SetBinContent(8,0.03481702);
   1->SetBinContent(9,0.04987303);
   1->SetBinContent(10,0.04610903);
   1->SetBinContent(11,0.05457804);
   1->SetBinContent(12,0.06681105);
   1->SetBinContent(13,0.07810306);
   1->SetBinContent(14,0.08939507);
   1->SetBinContent(15,0.1025691);
   1->SetBinContent(16,0.1063331);
   1->SetBinContent(17,0.1251531);
   1->SetBinContent(18,0.1543239);
   1->SetBinContent(19,0.2446593);
   1->SetBinContent(20,0.2757125);
   1->SetBinContent(21,0.3095888);
   1->SetBinContent(22,0.3764004);
   1->SetBinContent(23,0.4695602);
   1->SetBinContent(24,0.5297838);
   1->SetBinContent(25,0.6624618);
   1->SetBinContent(26,0.6436422);
   1->SetBinContent(27,0.7575006);
   1->SetBinContent(28,0.7791431);
   1->SetBinContent(29,0.7876119);
   1->SetBinContent(30,0.8017266);
   1->SetBinContent(31,0.7010419);
   1->SetBinContent(32,0.5947113);
   1->SetBinContent(33,0.4234508);
   1->SetBinContent(34,0.2794765);
   1->SetBinContent(35,0.1872587);
   1->SetBinContent(36,0.1232711);
   1->SetBinContent(37,0.06587005);
   1->SetBinContent(38,0.04987303);
   1->SetBinContent(39,0.03387602);
   1->SetBinContent(40,0.03011201);
   1->SetBinContent(41,0.011292);
   1->SetBinContent(42,0.015056);
   1->SetBinContent(43,0.016938);
   1->SetBinContent(44,0.016938);
   1->SetBinContent(45,0.015056);
   1->SetBinContent(46,0.006587);
   1->SetBinContent(47,0.00941);
   1->SetBinContent(48,0.007528);
   1->SetBinContent(49,0.005646);
   1->SetBinContent(50,0.008469);
   1->SetBinContent(51,0.1072741);
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
   2->SetBinContent(2,0.012233);
   2->SetBinContent(3,0.03293502);
   2->SetBinContent(4,0.07245705);
   2->SetBinContent(5,0.07904406);
   2->SetBinContent(6,0.1063331);
   2->SetBinContent(7,0.1279761);
   2->SetBinContent(8,0.140209);
   2->SetBinContent(9,0.143032);
   2->SetBinContent(10,0.1496189);
   2->SetBinContent(11,0.1863177);
   2->SetBinContent(12,0.1674978);
   2->SetBinContent(13,0.1674978);
   2->SetBinContent(14,0.2361903);
   2->SetBinContent(15,0.2728894);
   2->SetBinContent(16,0.2634794);
   2->SetBinContent(17,0.334055);
   2->SetBinContent(18,0.4046306);
   2->SetBinContent(19,0.5307248);
   2->SetBinContent(20,0.6229407);
   2->SetBinContent(21,0.7593825);
   2->SetBinContent(22,0.871359);
   2->SetBinContent(23,1.02474);
   2->SetBinContent(24,1.164014);
   2->SetBinContent(25,1.355986);
   2->SetBinContent(26,1.467028);
   2->SetBinContent(27,1.708875);
   2->SetBinContent(28,1.816153);
   2->SetBinContent(29,1.999656);
   2->SetBinContent(30,2.108816);
   2->SetBinContent(31,1.99495);
   2->SetBinContent(32,1.714521);
   2->SetBinContent(33,1.217653);
   2->SetBinContent(34,0.73774);
   2->SetBinContent(35,0.4733242);
   2->SetBinContent(36,0.3208809);
   2->SetBinContent(37,0.2023146);
   2->SetBinContent(38,0.1486779);
   2->SetBinContent(39,0.1467959);
   2->SetBinContent(40,0.1053921);
   2->SetBinContent(41,0.07245705);
   2->SetBinContent(42,0.05646004);
   2->SetBinContent(43,0.07057505);
   2->SetBinContent(44,0.04610903);
   2->SetBinContent(45,0.04516803);
   2->SetBinContent(46,0.03105301);
   2->SetBinContent(47,0.03387602);
   2->SetBinContent(48,0.03199401);
   2->SetBinContent(49,0.02823001);
   2->SetBinContent(50,0.02352501);
   2->SetBinContent(51,0.3669903);
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
   3->SetBinContent(1,0.013658);
   3->SetBinContent(2,0.013658);
   3->SetBinContent(3,0.08877701);
   3->SetBinContent(4,0.170725);
   3->SetBinContent(5,0.2731599);
   3->SetBinContent(6,0.3755948);
   3->SetBinContent(7,0.3551078);
   3->SetBinContent(8,0.5053457);
   3->SetBinContent(9,0.5121747);
   3->SetBinContent(10,0.4370557);
   3->SetBinContent(11,0.7170454);
   3->SetBinContent(12,0.6897293);
   3->SetBinContent(13,0.887771);
   3->SetBinContent(14,1.03801);
   3->SetBinContent(15,1.475067);
   3->SetBinContent(16,1.877979);
   3->SetBinContent(17,2.704291);
   3->SetBinContent(18,3.41451);
   3->SetBinContent(19,4.684684);
   3->SetBinContent(20,5.524624);
   3->SetBinContent(21,6.712833);
   3->SetBinContent(22,8.454205);
   3->SetBinContent(23,8.338107);
   3->SetBinContent(24,7.62789);
   3->SetBinContent(25,6.289448);
   3->SetBinContent(26,5.162699);
   3->SetBinContent(27,5.497309);
   3->SetBinContent(28,5.531453);
   3->SetBinContent(29,5.347076);
   3->SetBinContent(30,5.292446);
   3->SetBinContent(31,4.752972);
   3->SetBinContent(32,4.397875);
   3->SetBinContent(33,3.503287);
   3->SetBinContent(34,2.793068);
   3->SetBinContent(35,2.110166);
   3->SetBinContent(36,1.618477);
   3->SetBinContent(37,1.17459);
   3->SetBinContent(38,0.6829003);
   3->SetBinContent(39,0.5531489);
   3->SetBinContent(40,0.3073049);
   3->SetBinContent(41,0.2253569);
   3->SetBinContent(42,0.2253569);
   3->SetBinContent(43,0.150238);
   3->SetBinContent(44,0.163896);
   3->SetBinContent(45,0.170725);
   3->SetBinContent(46,0.116093);
   3->SetBinContent(47,0.102435);
   3->SetBinContent(48,0.116093);
   3->SetBinContent(49,0.08877701);
   3->SetBinContent(50,0.06829);
   3->SetBinContent(51,1.201906);
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
   4->SetBinContent(1,0.005261);
   4->SetBinContent(2,0.08417598);
   4->SetBinContent(3,0.21044);
   4->SetBinContent(4,0.4208802);
   4->SetBinContent(5,0.6050153);
   4->SetBinContent(6,0.4787512);
   4->SetBinContent(7,0.4787512);
   4->SetBinContent(8,0.4682292);
   4->SetBinContent(9,0.6365813);
   4->SetBinContent(10,0.5997543);
   4->SetBinContent(11,0.6050153);
   4->SetBinContent(12,0.8838485);
   4->SetBinContent(13,0.8207164);
   4->SetBinContent(14,1.357335);
   4->SetBinContent(15,1.473076);
   4->SetBinContent(16,2.041258);
   4->SetBinContent(17,2.751485);
   4->SetBinContent(18,3.61428);
   4->SetBinContent(19,4.955821);
   4->SetBinContent(20,6.150055);
   4->SetBinContent(21,7.254854);
   4->SetBinContent(22,9.538243);
   4->SetBinContent(23,10.23275);
   4->SetBinContent(24,10.65366);
   4->SetBinContent(25,10.61157);
   4->SetBinContent(26,10.68523);
   4->SetBinContent(27,11.19033);
   4->SetBinContent(28,11.10615);
   4->SetBinContent(29,11.04827);
   4->SetBinContent(30,10.96409);
   4->SetBinContent(31,10.05386);
   4->SetBinContent(32,8.264979);
   4->SetBinContent(33,6.039576);
   4->SetBinContent(34,4.040417);
   4->SetBinContent(35,2.693615);
   4->SetBinContent(36,2.062301);
   4->SetBinContent(37,1.309986);
   4->SetBinContent(38,0.9417195);
   4->SetBinContent(39,0.7470624);
   4->SetBinContent(40,0.5629272);
   4->SetBinContent(41,0.4524462);
   4->SetBinContent(42,0.3472261);
   4->SetBinContent(43,0.2788331);
   4->SetBinContent(44,0.2946161);
   4->SetBinContent(45,0.220962);
   4->SetBinContent(46,0.15783);
   4->SetBinContent(47,0.189396);
   4->SetBinContent(48,0.184135);
   4->SetBinContent(49,0.15783);
   4->SetBinContent(50,0.163091);
   4->SetBinContent(51,1.657209);
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
   5->SetBinContent(1,0.012401);
   5->SetBinContent(2,0.186015);
   5->SetBinContent(3,0.9548761);
   5->SetBinContent(4,1.339307);
   5->SetBinContent(5,1.736138);
   5->SetBinContent(6,2.108169);
   5->SetBinContent(7,2.00896);
   5->SetBinContent(8,1.971757);
   5->SetBinContent(9,2.058564);
   5->SetBinContent(10,2.108169);
   5->SetBinContent(11,2.281784);
   5->SetBinContent(12,2.281784);
   5->SetBinContent(13,2.765427);
   5->SetBinContent(14,2.864636);
   5->SetBinContent(15,3.745115);
   5->SetBinContent(16,4.439576);
   5->SetBinContent(17,5.084434);
   5->SetBinContent(18,6.770984);
   5->SetBinContent(19,8.841936);
   5->SetBinContent(20,10.83844);
   5->SetBinContent(21,13.20696);
   5->SetBinContent(22,18.09296);
   5->SetBinContent(23,21.5406);
   5->SetBinContent(24,25.05025);
   5->SetBinContent(25,27.29494);
   5->SetBinContent(26,32.14396);
   5->SetBinContent(27,35.56679);
   5->SetBinContent(28,38.0223);
   5->SetBinContent(29,41.60636);
   5->SetBinContent(30,41.48235);
   5->SetBinContent(31,40.16778);
   5->SetBinContent(32,34.0538);
   5->SetBinContent(33,22.89238);
   5->SetBinContent(34,13.61618);
   5->SetBinContent(35,9.213955);
   5->SetBinContent(36,5.344857);
   5->SetBinContent(37,4.228757);
   5->SetBinContent(38,3.149862);
   5->SetBinContent(39,2.629015);
   5->SetBinContent(40,2.256982);
   5->SetBinContent(41,1.686534);
   5->SetBinContent(42,1.463317);
   5->SetBinContent(43,1.426114);
   5->SetBinContent(44,1.240099);
   5->SetBinContent(45,1.178094);
   5->SetBinContent(46,0.9672771);
   5->SetBinContent(47,0.9920791);
   5->SetBinContent(48,0.7564604);
   5->SetBinContent(49,0.8184653);
   5->SetBinContent(50,0.4712377);
   5->SetBinContent(51,8.494719);
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
   6->SetBinContent(1,0.151812);
   6->SetBinContent(2,8.121933);
   6->SetBinContent(3,30.59023);
   6->SetBinContent(4,43.19047);
   6->SetBinContent(5,47.66886);
   6->SetBinContent(6,48.73153);
   6->SetBinContent(7,51.91953);
   6->SetBinContent(8,52.67858);
   6->SetBinContent(9,54.12077);
   6->SetBinContent(10,57.08106);
   6->SetBinContent(11,61.71125);
   6->SetBinContent(12,67.1005);
   6->SetBinContent(13,72.33794);
   6->SetBinContent(14,89.94786);
   6->SetBinContent(15,115.2242);
   6->SetBinContent(16,150.7499);
   6->SetBinContent(17,193.5646);
   6->SetBinContent(18,231.2931);
   6->SetBinContent(19,325.4865);
   6->SetBinContent(20,392.5796);
   6->SetBinContent(21,448.2123);
   6->SetBinContent(22,482.0624);
   6->SetBinContent(23,540.287);
   6->SetBinContent(24,604.2941);
   6->SetBinContent(25,686.4479);
   6->SetBinContent(26,725.171);
   6->SetBinContent(27,821.7511);
   6->SetBinContent(28,877.6339);
   6->SetBinContent(29,907.8531);
   6->SetBinContent(30,894.7936);
   6->SetBinContent(31,840.1256);
   6->SetBinContent(32,683.3348);
   6->SetBinContent(33,489.1968);
   6->SetBinContent(34,321.9193);
   6->SetBinContent(35,221.5763);
   6->SetBinContent(36,152.4959);
   6->SetBinContent(37,104.4457);
   6->SetBinContent(38,76.96813);
   6->SetBinContent(39,60.95221);
   6->SetBinContent(40,48.80743);
   6->SetBinContent(41,39.24342);
   6->SetBinContent(42,40.60971);
   6->SetBinContent(43,30.96977);
   6->SetBinContent(44,26.8708);
   6->SetBinContent(45,23.83453);
   6->SetBinContent(46,21.02598);
   6->SetBinContent(47,19.65966);
   6->SetBinContent(48,15.40889);
   6->SetBinContent(49,16.31976);
   6->SetBinContent(50,14.57393);
   6->SetBinContent(51,173.3718);
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
   7->SetBinContent(2,5.46806);
   7->SetBinContent(3,19.52889);
   7->SetBinContent(4,35.15193);
   7->SetBinContent(5,42.32854);
   7->SetBinContent(6,39.35049);
   7->SetBinContent(7,37.34885);
   7->SetBinContent(8,37.73942);
   7->SetBinContent(9,37.34885);
   7->SetBinContent(10,40.96157);
   7->SetBinContent(11,48.28465);
   7->SetBinContent(12,52.67849);
   7->SetBinContent(13,71.66966);
   7->SetBinContent(14,97.15396);
   7->SetBinContent(15,129.9616);
   7->SetBinContent(16,174.1023);
   7->SetBinContent(17,228.0085);
   7->SetBinContent(18,288.0671);
   7->SetBinContent(19,347.0515);
   7->SetBinContent(20,414.8737);
   7->SetBinContent(21,419.5124);
   7->SetBinContent(22,384.7468);
   7->SetBinContent(23,342.8523);
   7->SetBinContent(24,285.2351);
   7->SetBinContent(25,223.321);
   7->SetBinContent(26,194.8542);
   7->SetBinContent(27,183.5749);
   7->SetBinContent(28,173.614);
   7->SetBinContent(29,168.2917);
   7->SetBinContent(30,164.1413);
   7->SetBinContent(31,156.6706);
   7->SetBinContent(32,144.903);
   7->SetBinContent(33,132.5007);
   7->SetBinContent(34,111.6048);
   7->SetBinContent(35,94.37119);
   7->SetBinContent(36,77.4793);
   7->SetBinContent(37,57.75582);
   7->SetBinContent(38,43.98844);
   7->SetBinContent(39,28.65868);
   7->SetBinContent(40,24.26466);
   7->SetBinContent(41,18.2595);
   7->SetBinContent(42,14.50018);
   7->SetBinContent(43,13.47491);
   7->SetBinContent(44,11.52201);
   7->SetBinContent(45,9.715584);
   7->SetBinContent(46,8.543846);
   7->SetBinContent(47,9.03207);
   7->SetBinContent(48,7.079183);
   7->SetBinContent(49,6.151567);
   7->SetBinContent(50,5.516881);
   7->SetBinContent(51,80.7991);
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
   8->SetBinContent(2,0.293506);
   8->SetBinContent(3,1.761036);
   8->SetBinContent(4,2.641554);
   8->SetBinContent(5,3.228566);
   8->SetBinContent(6,3.081813);
   8->SetBinContent(7,2.788307);
   8->SetBinContent(8,2.788307);
   8->SetBinContent(9,3.668826);
   8->SetBinContent(10,5.136354);
   8->SetBinContent(11,5.283107);
   8->SetBinContent(12,5.576613);
   8->SetBinContent(13,4.549343);
   8->SetBinContent(14,7.631153);
   8->SetBinContent(15,7.044141);
   8->SetBinContent(16,9.538944);
   8->SetBinContent(17,12.47401);
   8->SetBinContent(18,10.85972);
   8->SetBinContent(19,13.50128);
   8->SetBinContent(20,15.40908);
   8->SetBinContent(21,16.72986);
   8->SetBinContent(22,12.47401);
   8->SetBinContent(23,7.777905);
   8->SetBinContent(24,8.364918);
   8->SetBinContent(25,6.45713);
   8->SetBinContent(26,6.163624);
   8->SetBinContent(27,8.364918);
   8->SetBinContent(28,7.631153);
   8->SetBinContent(29,6.750636);
   8->SetBinContent(30,5.723366);
   8->SetBinContent(31,4.842849);
   8->SetBinContent(32,5.723366);
   8->SetBinContent(33,5.283107);
   8->SetBinContent(34,5.283107);
   8->SetBinContent(35,4.255837);
   8->SetBinContent(36,3.962332);
   8->SetBinContent(37,3.815579);
   8->SetBinContent(38,2.93506);
   8->SetBinContent(39,2.641554);
   8->SetBinContent(40,2.641554);
   8->SetBinContent(41,2.788307);
   8->SetBinContent(42,2.641554);
   8->SetBinContent(43,2.201295);
   8->SetBinContent(44,2.201295);
   8->SetBinContent(45,1.027271);
   8->SetBinContent(46,2.201295);
   8->SetBinContent(47,1.320777);
   8->SetBinContent(48,0.733765);
   8->SetBinContent(49,1.761036);
   8->SetBinContent(50,1.174024);
   8->SetBinContent(51,26.56233);
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
   9->SetBinContent(2,6.514684);
   9->SetBinContent(3,23.65856);
   9->SetBinContent(4,52.11753);
   9->SetBinContent(5,81.43378);
   9->SetBinContent(6,116.579);
   9->SetBinContent(7,152.4089);
   9->SetBinContent(8,192.1812);
   9->SetBinContent(9,219.2676);
   9->SetBinContent(10,226.982);
   9->SetBinContent(11,254.2398);
   9->SetBinContent(12,266.241);
   9->SetBinContent(13,307.0456);
   9->SetBinContent(14,301.3878);
   9->SetBinContent(15,331.734);
   9->SetBinContent(16,355.2224);
   9->SetBinContent(17,386.083);
   9->SetBinContent(18,413.8575);
   9->SetBinContent(19,433.574);
   9->SetBinContent(20,476.093);
   9->SetBinContent(21,505.5821);
   9->SetBinContent(22,524.0984);
   9->SetBinContent(23,520.8409);
   9->SetBinContent(24,528.0417);
   9->SetBinContent(25,494.438);
   9->SetBinContent(26,526.8416);
   9->SetBinContent(27,512.4399);
   9->SetBinContent(28,516.5547);
   9->SetBinContent(29,527.5273);
   9->SetBinContent(30,525.2985);
   9->SetBinContent(31,509.6968);
   9->SetBinContent(32,496.3239);
   9->SetBinContent(33,478.1504);
   9->SetBinContent(34,449.1758);
   9->SetBinContent(35,387.626);
   9->SetBinContent(36,336.5346);
   9->SetBinContent(37,306.3598);
   9->SetBinContent(38,254.2398);
   9->SetBinContent(39,221.1533);
   9->SetBinContent(40,192.0098);
   9->SetBinContent(41,167.3235);
   9->SetBinContent(42,149.666);
   9->SetBinContent(43,131.6656);
   9->SetBinContent(44,122.2365);
   9->SetBinContent(45,121.0365);
   9->SetBinContent(46,96.52052);
   9->SetBinContent(47,92.74883);
   9->SetBinContent(48,89.32003);
   9->SetBinContent(49,78.00498);
   9->SetBinContent(50,75.43338);
   9->SetBinContent(51,1668.797);
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
   10->SetBinContent(1,0.63088);
   10->SetBinContent(2,32.93184);
   10->SetBinContent(3,133.8725);
   10->SetBinContent(4,215.3914);
   10->SetBinContent(5,242.4592);
   10->SetBinContent(6,240.0615);
   10->SetBinContent(7,219.4925);
   10->SetBinContent(8,230.9758);
   10->SetBinContent(9,239.5568);
   10->SetBinContent(10,251.3556);
   10->SetBinContent(11,289.1415);
   10->SetBinContent(12,353.7983);
   10->SetBinContent(13,454.7892);
   10->SetBinContent(14,603.7019);
   10->SetBinContent(15,834.0547);
   10->SetBinContent(16,1135.407);
   10->SetBinContent(17,1545.561);
   10->SetBinContent(18,1994.023);
   10->SetBinContent(19,2495.388);
   10->SetBinContent(20,2977.5);
   10->SetBinContent(21,3280.474);
   10->SetBinContent(22,3338.36);
   10->SetBinContent(23,3257.546);
   10->SetBinContent(24,2851.209);
   10->SetBinContent(25,2474.413);
   10->SetBinContent(26,2269.953);
   10->SetBinContent(27,2163.251);
   10->SetBinContent(28,2116.766);
   10->SetBinContent(29,2078.217);
   10->SetBinContent(30,1985.377);
   10->SetBinContent(31,1863.321);
   10->SetBinContent(32,1751.553);
   10->SetBinContent(33,1568.722);
   10->SetBinContent(34,1317.859);
   10->SetBinContent(35,1049.64);
   10->SetBinContent(36,796.3778);
   10->SetBinContent(37,583.6959);
   10->SetBinContent(38,408.2362);
   10->SetBinContent(39,296.7742);
   10->SetBinContent(40,222.1425);
   10->SetBinContent(41,173.8748);
   10->SetBinContent(42,138.7308);
   10->SetBinContent(43,118.2892);
   10->SetBinContent(44,91.35083);
   10->SetBinContent(45,79.86891);
   10->SetBinContent(46,72.74003);
   10->SetBinContent(47,62.45677);
   10->SetBinContent(48,56.21111);
   10->SetBinContent(49,48.38827);
   10->SetBinContent(50,42.83657);
   10->SetBinContent(51,487.4014);
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
   11->SetBinContent(2,29.26772);
   11->SetBinContent(3,102.437);
   11->SetBinContent(4,43.90158);
   11->SetBinContent(5,131.7047);
   11->SetBinContent(6,58.53543);
   11->SetBinContent(7,87.80315);
   11->SetBinContent(8,43.90158);
   11->SetBinContent(9,131.7047);
   11->SetBinContent(10,131.7047);
   11->SetBinContent(11,117.0709);
   11->SetBinContent(12,204.8741);
   11->SetBinContent(13,146.3386);
   11->SetBinContent(14,234.1418);
   11->SetBinContent(15,204.8741);
   11->SetBinContent(16,307.3111);
   11->SetBinContent(17,409.748);
   11->SetBinContent(18,482.9173);
   11->SetBinContent(19,482.9173);
   11->SetBinContent(20,424.3819);
   11->SetBinContent(21,629.2558);
   11->SetBinContent(22,629.2558);
   11->SetBinContent(23,409.748);
   11->SetBinContent(24,409.748);
   11->SetBinContent(25,512.185);
   11->SetBinContent(26,380.4803);
   11->SetBinContent(27,336.5788);
   11->SetBinContent(28,439.0157);
   11->SetBinContent(29,278.0434);
   11->SetBinContent(30,439.0157);
   11->SetBinContent(31,321.9449);
   11->SetBinContent(32,453.6496);
   11->SetBinContent(33,409.748);
   11->SetBinContent(34,190.2402);
   11->SetBinContent(35,190.2402);
   11->SetBinContent(36,175.6063);
   11->SetBinContent(37,131.7047);
   11->SetBinContent(38,117.0709);
   11->SetBinContent(39,43.90158);
   11->SetBinContent(40,73.1693);
   11->SetBinContent(41,87.80315);
   11->SetBinContent(42,73.1693);
   11->SetBinContent(43,58.53543);
   11->SetBinContent(44,43.90158);
   11->SetBinContent(45,14.63386);
   11->SetBinContent(46,29.26772);
   11->SetBinContent(47,29.26772);
   11->SetBinContent(48,14.63386);
   11->SetBinContent(49,43.90158);
   11->SetBinContent(50,73.1693);
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
   12->SetBinContent(2,437.6999);
   12->SetBinContent(3,1014.959);
   12->SetBinContent(4,989.5845);
   12->SetBinContent(5,1002.272);
   12->SetBinContent(6,1268.699);
   12->SetBinContent(7,1414.599);
   12->SetBinContent(8,1319.447);
   12->SetBinContent(9,1776.179);
   12->SetBinContent(10,1598.561);
   12->SetBinContent(11,1623.935);
   12->SetBinContent(12,1313.103);
   12->SetBinContent(13,1554.156);
   12->SetBinContent(14,1642.966);
   12->SetBinContent(15,1750.805);
   12->SetBinContent(16,1922.08);
   12->SetBinContent(17,1839.614);
   12->SetBinContent(18,2093.354);
   12->SetBinContent(19,2467.621);
   12->SetBinContent(20,2607.178);
   12->SetBinContent(21,2537.4);
   12->SetBinContent(22,2251.942);
   12->SetBinContent(23,1947.454);
   12->SetBinContent(24,1706.401);
   12->SetBinContent(25,1649.309);
   12->SetBinContent(26,1674.683);
   12->SetBinContent(27,1655.653);
   12->SetBinContent(28,1795.21);
   12->SetBinContent(29,1465.347);
   12->SetBinContent(30,1769.836);
   12->SetBinContent(31,1509.752);
   12->SetBinContent(32,1522.439);
   12->SetBinContent(33,1382.882);
   12->SetBinContent(34,1021.302);
   12->SetBinContent(35,951.5235);
   12->SetBinContent(36,830.9969);
   12->SetBinContent(37,672.4092);
   12->SetBinContent(38,716.8138);
   12->SetBinContent(39,513.8216);
   12->SetBinContent(40,336.2043);
   12->SetBinContent(41,386.9521);
   12->SetBinContent(42,336.2043);
   12->SetBinContent(43,367.9216);
   12->SetBinContent(44,222.0217);
   12->SetBinContent(45,145.9);
   12->SetBinContent(46,133.213);
   12->SetBinContent(47,139.5565);
   12->SetBinContent(48,133.213);
   12->SetBinContent(49,107.8391);
   12->SetBinContent(50,95.15217);
   12->SetBinContent(51,2778.453);
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
   13->SetBinContent(2,163.149);
   13->SetBinContent(3,326.298);
   13->SetBinContent(4,163.149);
   13->SetBinContent(5,815.7449);
   13->SetBinContent(6,407.8725);
   13->SetBinContent(7,652.5959);
   13->SetBinContent(8,897.3193);
   13->SetBinContent(9,978.8938);
   13->SetBinContent(10,652.5959);
   13->SetBinContent(11,978.8938);
   13->SetBinContent(12,1549.915);
   13->SetBinContent(13,1305.192);
   13->SetBinContent(14,1223.617);
   13->SetBinContent(15,2120.936);
   13->SetBinContent(16,1876.213);
   13->SetBinContent(17,2610.383);
   13->SetBinContent(18,3018.255);
   13->SetBinContent(19,4241.873);
   13->SetBinContent(20,3426.128);
   13->SetBinContent(21,3834);
   13->SetBinContent(22,3752.426);
   13->SetBinContent(23,3834);
   13->SetBinContent(24,3834);
   13->SetBinContent(25,3752.426);
   13->SetBinContent(26,5383.918);
   13->SetBinContent(27,2447.234);
   13->SetBinContent(28,3834);
   13->SetBinContent(29,3262.979);
   13->SetBinContent(30,2936.681);
   13->SetBinContent(31,2610.383);
   13->SetBinContent(32,2610.383);
   13->SetBinContent(33,3018.255);
   13->SetBinContent(34,1876.213);
   13->SetBinContent(35,1631.49);
   13->SetBinContent(36,1468.341);
   13->SetBinContent(37,1468.341);
   13->SetBinContent(38,897.3193);
   13->SetBinContent(39,897.3193);
   13->SetBinContent(40,734.1704);
   13->SetBinContent(41,734.1704);
   13->SetBinContent(42,734.1704);
   13->SetBinContent(43,244.7235);
   13->SetBinContent(44,163.149);
   13->SetBinContent(45,163.149);
   13->SetBinContent(46,163.149);
   13->SetBinContent(47,489.447);
   13->SetBinContent(48,163.149);
   13->SetBinContent(49,81.57449);
   13->SetBinContent(51,2039.362);
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
   14->SetBinContent(3,4.029479);
   14->SetBinContent(4,24.17688);
   14->SetBinContent(5,20.1474);
   14->SetBinContent(6,28.20636);
   14->SetBinContent(7,88.64855);
   14->SetBinContent(8,124.9139);
   14->SetBinContent(9,149.0907);
   14->SetBinContent(10,181.3266);
   14->SetBinContent(11,302.211);
   14->SetBinContent(12,318.3289);
   14->SetBinContent(13,479.5081);
   14->SetBinContent(14,874.3971);
   14->SetBinContent(15,1325.694);
   14->SetBinContent(16,2042.931);
   14->SetBinContent(17,2437.826);
   14->SetBinContent(18,3098.67);
   14->SetBinContent(19,3437.152);
   14->SetBinContent(20,3356.561);
   14->SetBinContent(21,3364.62);
   14->SetBinContent(22,3324.325);
   14->SetBinContent(23,3372.679);
   14->SetBinContent(24,2901.223);
   14->SetBinContent(25,2466.032);
   14->SetBinContent(26,2300.821);
   14->SetBinContent(27,1648.048);
   14->SetBinContent(28,1676.254);
   14->SetBinContent(29,1551.342);
   14->SetBinContent(30,1241.077);
   14->SetBinContent(31,1043.635);
   14->SetBinContent(32,886.4855);
   14->SetBinContent(33,701.1295);
   14->SetBinContent(34,600.3925);
   14->SetBinContent(35,443.2428);
   14->SetBinContent(36,278.0341);
   14->SetBinContent(37,229.6803);
   14->SetBinContent(38,132.9728);
   14->SetBinContent(39,100.737);
   14->SetBinContent(40,52.38324);
   14->SetBinContent(41,44.32428);
   14->SetBinContent(42,36.26532);
   14->SetBinContent(43,40.2948);
   14->SetBinContent(44,44.32428);
   14->SetBinContent(45,28.20636);
   14->SetBinContent(46,32.23584);
   14->SetBinContent(47,16.11792);
   14->SetBinContent(48,20.1474);
   14->SetBinContent(49,24.17688);
   14->SetBinContent(50,4.029479);
   14->SetBinContent(51,177.2971);
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
   15->SetBinContent(2,23.17708);
   15->SetBinContent(3,23.17708);
   15->SetBinContent(4,23.17708);
   15->SetBinContent(5,23.17708);
   15->SetBinContent(6,57.9427);
   15->SetBinContent(7,19.31424);
   15->SetBinContent(8,34.76562);
   15->SetBinContent(9,19.31424);
   15->SetBinContent(10,57.9427);
   15->SetBinContent(11,42.49131);
   15->SetBinContent(12,61.80555);
   15->SetBinContent(13,65.6684);
   15->SetBinContent(14,57.9427);
   15->SetBinContent(15,81.11978);
   15->SetBinContent(16,84.98263);
   15->SetBinContent(17,73.39409);
   15->SetBinContent(18,92.70832);
   15->SetBinContent(19,131.3368);
   15->SetBinContent(20,139.0625);
   15->SetBinContent(21,119.7482);
   15->SetBinContent(22,135.1996);
   15->SetBinContent(23,166.1025);
   15->SetBinContent(24,158.3768);
   15->SetBinContent(25,135.1996);
   15->SetBinContent(26,166.1025);
   15->SetBinContent(27,139.0625);
   15->SetBinContent(28,150.6511);
   15->SetBinContent(29,173.8282);
   15->SetBinContent(30,127.4739);
   15->SetBinContent(31,100.434);
   15->SetBinContent(32,112.0226);
   15->SetBinContent(33,96.57117);
   15->SetBinContent(34,73.39409);
   15->SetBinContent(35,54.07985);
   15->SetBinContent(36,54.07985);
   15->SetBinContent(37,42.49131);
   15->SetBinContent(38,34.76562);
   15->SetBinContent(39,34.76562);
   15->SetBinContent(40,23.17708);
   15->SetBinContent(41,15.45139);
   15->SetBinContent(42,15.45139);
   15->SetBinContent(43,11.58854);
   15->SetBinContent(44,19.31424);
   15->SetBinContent(45,11.58854);
   15->SetBinContent(46,7.725694);
   15->SetBinContent(47,7.725694);
   15->SetBinContent(48,11.58854);
   15->SetBinContent(49,3.862847);
   15->SetBinContent(51,61.80555);
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
   16->SetBinContent(1,6.16417);
   16->SetBinContent(2,209.5818);
   16->SetBinContent(3,258.8951);
   16->SetBinContent(4,215.7459);
   16->SetBinContent(5,172.5968);
   16->SetBinContent(6,302.0444);
   16->SetBinContent(7,314.3728);
   16->SetBinContent(8,357.5221);
   16->SetBinContent(9,425.3281);
   16->SetBinContent(10,567.1044);
   16->SetBinContent(11,634.9104);
   16->SetBinContent(12,856.821);
   16->SetBinContent(13,986.2689);
   16->SetBinContent(14,1442.419);
   16->SetBinContent(15,1652.001);
   16->SetBinContent(16,2003.359);
   16->SetBinContent(17,2404.024);
   16->SetBinContent(18,2447.173);
   16->SetBinContent(19,2582.782);
   16->SetBinContent(20,2903.313);
   16->SetBinContent(21,2909.478);
   16->SetBinContent(22,2866.329);
   16->SetBinContent(23,2693.735);
   16->SetBinContent(24,2539.634);
   16->SetBinContent(25,2699.899);
   16->SetBinContent(26,2453.337);
   16->SetBinContent(27,2385.532);
   16->SetBinContent(28,2206.774);
   16->SetBinContent(29,2138.97);
   16->SetBinContent(30,2157.462);
   16->SetBinContent(31,1923.225);
   16->SetBinContent(32,1596.523);
   16->SetBinContent(33,1454.747);
   16->SetBinContent(34,1208.18);
   16->SetBinContent(35,1041.747);
   16->SetBinContent(36,739.7015);
   16->SetBinContent(37,770.5225);
   16->SetBinContent(38,493.1342);
   16->SetBinContent(39,412.9998);
   16->SetBinContent(40,283.5519);
   16->SetBinContent(41,295.8802);
   16->SetBinContent(42,178.7609);
   16->SetBinContent(43,191.0893);
   16->SetBinContent(44,184.9251);
   16->SetBinContent(45,178.7609);
   16->SetBinContent(46,98.62672);
   16->SetBinContent(47,86.29838);
   16->SetBinContent(48,86.29838);
   16->SetBinContent(49,73.97004);
   16->SetBinContent(50,55.47753);
   16->SetBinContent(51,1282.15);
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
   17->SetBinContent(2,23.42518);
   17->SetBinContent(3,163.9762);
   17->SetBinContent(4,374.8028);
   17->SetBinContent(5,327.9524);
   17->SetBinContent(6,327.9524);
   17->SetBinContent(7,585.6293);
   17->SetBinContent(8,398.2279);
   17->SetBinContent(9,562.2042);
   17->SetBinContent(10,562.2042);
   17->SetBinContent(11,421.6531);
   17->SetBinContent(12,773.0307);
   17->SetBinContent(13,679.33);
   17->SetBinContent(14,796.4559);
   17->SetBinContent(15,890.1566);
   17->SetBinContent(16,890.1566);
   17->SetBinContent(17,1475.786);
   17->SetBinContent(18,1335.235);
   17->SetBinContent(19,1499.211);
   17->SetBinContent(20,1569.487);
   17->SetBinContent(21,1686.612);
   17->SetBinContent(22,1897.439);
   17->SetBinContent(23,1686.612);
   17->SetBinContent(24,1710.038);
   17->SetBinContent(25,1569.487);
   17->SetBinContent(26,1663.187);
   17->SetBinContent(27,1405.51);
   17->SetBinContent(28,1475.786);
   17->SetBinContent(29,1780.313);
   17->SetBinContent(30,1522.636);
   17->SetBinContent(31,1124.408);
   17->SetBinContent(32,1475.786);
   17->SetBinContent(33,937.0069);
   17->SetBinContent(34,1311.81);
   17->SetBinContent(35,773.0307);
   17->SetBinContent(36,749.6055);
   17->SetBinContent(37,585.6293);
   17->SetBinContent(38,632.4797);
   17->SetBinContent(39,398.2279);
   17->SetBinContent(40,491.9286);
   17->SetBinContent(41,491.9286);
   17->SetBinContent(42,234.2517);
   17->SetBinContent(43,374.8028);
   17->SetBinContent(44,257.6769);
   17->SetBinContent(45,304.5273);
   17->SetBinContent(46,281.1021);
   17->SetBinContent(47,327.9524);
   17->SetBinContent(48,398.2279);
   17->SetBinContent(49,304.5273);
   17->SetBinContent(50,163.9762);
   17->SetBinContent(51,7378.957);
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
