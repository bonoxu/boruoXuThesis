{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 00:57:19 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-134.9206,-3.225515,658.7302,5.856193);
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
   
   TH1F *THStack_stack_6 = new TH1F("THStack_stack_6","",50,0,500);
   THStack_stack_6->SetMinimum(0.02565619);
   THStack_stack_6->SetMaximum(134789.7);
   THStack_stack_6->SetDirectory(0);
   THStack_stack_6->SetStats(0);
   THStack_stack_6->SetLineWidth(2);
   THStack_stack_6->SetMarkerSize(1.2);
   THStack_stack_6->GetXaxis()->SetTitle("E_{W*} / GeV");
   THStack_stack_6->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_6->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_6->GetXaxis()->SetLabelColor(ci);
   THStack_stack_6->GetXaxis()->SetLabelFont(42);
   THStack_stack_6->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_6->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_6->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_6->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_6->GetXaxis()->SetTitleColor(ci);
   THStack_stack_6->GetXaxis()->SetTitleFont(42);
   THStack_stack_6->GetYaxis()->SetTitle("Number of events");
   THStack_stack_6->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_6->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_6->GetYaxis()->SetLabelColor(ci);
   THStack_stack_6->GetYaxis()->SetLabelFont(42);
   THStack_stack_6->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_6->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_6->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_6->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_6->GetYaxis()->SetTitleColor(ci);
   THStack_stack_6->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_6->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_6->GetZaxis()->SetLabelColor(ci);
   THStack_stack_6->GetZaxis()->SetLabelFont(42);
   THStack_stack_6->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_6->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_6->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_6->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_6->GetZaxis()->SetTitleColor(ci);
   THStack_stack_6->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_6);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,500);
   0->SetBinContent(1,0.001882);
   0->SetBinContent(2,0.07528004);
   0->SetBinContent(3,0.4592067);
   0->SetBinContent(4,0.9805247);
   0->SetBinContent(5,1.377618);
   0->SetBinContent(6,1.469834);
   0->SetBinContent(7,1.435959);
   0->SetBinContent(8,1.362563);
   0->SetBinContent(9,1.270347);
   0->SetBinContent(10,1.038866);
   0->SetBinContent(11,0.9729967);
   0->SetBinContent(12,0.8205533);
   0->SetBinContent(13,0.7132784);
   0->SetBinContent(14,0.6398797);
   0->SetBinContent(15,0.5796552);
   0->SetBinContent(16,0.4855545);
   0->SetBinContent(17,0.3820453);
   0->SetBinContent(18,0.3462875);
   0->SetBinContent(19,0.3030018);
   0->SetBinContent(20,0.2615981);
   0->SetBinContent(21,0.2503062);
   0->SetBinContent(22,0.1900821);
   0->SetBinContent(23,0.1787901);
   0->SetBinContent(24,0.1430321);
   0->SetBinContent(25,0.1317401);
   0->SetBinContent(26,0.1148021);
   0->SetBinContent(27,0.1035101);
   0->SetBinContent(28,0.06963404);
   0->SetBinContent(29,0.07716204);
   0->SetBinContent(30,0.06587003);
   0->SetBinContent(31,0.04705001);
   0->SetBinContent(32,0.03764001);
   0->SetBinContent(33,0.033876);
   0->SetBinContent(34,0.024466);
   0->SetBinContent(35,0.016938);
   0->SetBinContent(36,0.04705001);
   0->SetBinContent(37,0.022584);
   0->SetBinContent(38,0.035758);
   0->SetBinContent(39,0.011292);
   0->SetBinContent(40,0.011292);
   0->SetBinContent(41,0.00941);
   0->SetBinContent(42,0.013174);
   0->SetBinContent(43,0.005646);
   0->SetBinContent(44,0.007528);
   0->SetBinContent(45,0.003764);
   0->SetBinContent(47,0.005646);
   0->SetBinContent(48,0.015056);
   0->SetBinContent(49,0.007528);
   0->SetBinContent(50,0.005646);
   0->SetBinContent(51,0.016938);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,500);
   1->SetBinContent(1,0.03858102);
   1->SetBinContent(2,0.4827343);
   1->SetBinContent(3,0.9099391);
   1->SetBinContent(4,0.960752);
   1->SetBinContent(5,0.9918042);
   1->SetBinContent(6,0.9221718);
   1->SetBinContent(7,0.8403067);
   1->SetBinContent(8,0.7349171);
   1->SetBinContent(9,0.608826);
   1->SetBinContent(10,0.4977904);
   1->SetBinContent(11,0.448858);
   1->SetBinContent(12,0.3980435);
   1->SetBinContent(13,0.3237039);
   1->SetBinContent(14,0.2822995);
   1->SetBinContent(15,0.2531283);
   1->SetBinContent(16,0.2023146);
   1->SetBinContent(17,0.1872587);
   1->SetBinContent(18,0.1674978);
   1->SetBinContent(19,0.1590289);
   1->SetBinContent(20,0.1279761);
   1->SetBinContent(21,0.1082151);
   1->SetBinContent(22,0.09692308);
   1->SetBinContent(23,0.07810306);
   1->SetBinContent(24,0.06304704);
   1->SetBinContent(25,0.06681105);
   1->SetBinContent(26,0.06210604);
   1->SetBinContent(27,0.04799103);
   1->SetBinContent(28,0.04516803);
   1->SetBinContent(29,0.03105301);
   1->SetBinContent(30,0.03011201);
   1->SetBinContent(31,0.02258401);
   1->SetBinContent(32,0.02728901);
   1->SetBinContent(33,0.02164301);
   1->SetBinContent(34,0.017879);
   1->SetBinContent(35,0.017879);
   1->SetBinContent(36,0.016938);
   1->SetBinContent(37,0.013174);
   1->SetBinContent(38,0.014115);
   1->SetBinContent(39,0.00941);
   1->SetBinContent(40,0.008469);
   1->SetBinContent(41,0.008469);
   1->SetBinContent(42,0.007528);
   1->SetBinContent(43,0.004705);
   1->SetBinContent(44,0.008469);
   1->SetBinContent(45,0.005646);
   1->SetBinContent(46,0.004705);
   1->SetBinContent(47,0.004705);
   1->SetBinContent(48,0.003764);
   1->SetBinContent(49,0.003764);
   1->SetBinContent(51,0.01882);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,500);
   2->SetBinContent(1,0.1260941);
   2->SetBinContent(2,1.058617);
   2->SetBinContent(3,1.806743);
   2->SetBinContent(4,2.058941);
   2->SetBinContent(5,2.287613);
   2->SetBinContent(6,2.153986);
   2->SetBinContent(7,2.155868);
   2->SetBinContent(8,1.825564);
   2->SetBinContent(9,1.499023);
   2->SetBinContent(10,1.360691);
   2->SetBinContent(11,1.216712);
   2->SetBinContent(12,1.043561);
   2->SetBinContent(13,0.8751229);
   2->SetBinContent(14,0.8384247);
   2->SetBinContent(15,0.7057468);
   2->SetBinContent(16,0.6295275);
   2->SetBinContent(17,0.5834196);
   2->SetBinContent(18,0.4799113);
   2->SetBinContent(19,0.4319198);
   2->SetBinContent(20,0.3594622);
   2->SetBinContent(21,0.334055);
   2->SetBinContent(22,0.2738304);
   2->SetBinContent(23,0.2296034);
   2->SetBinContent(24,0.2173705);
   2->SetBinContent(25,0.1994916);
   2->SetBinContent(26,0.1722028);
   2->SetBinContent(27,0.1515009);
   2->SetBinContent(28,0.1195071);
   2->SetBinContent(29,0.1044511);
   2->SetBinContent(30,0.09692308);
   2->SetBinContent(31,0.08563107);
   2->SetBinContent(32,0.09410007);
   2->SetBinContent(33,0.07151605);
   2->SetBinContent(34,0.05740104);
   2->SetBinContent(35,0.04705003);
   2->SetBinContent(36,0.04987303);
   2->SetBinContent(37,0.04799103);
   2->SetBinContent(38,0.03481702);
   2->SetBinContent(39,0.03293502);
   2->SetBinContent(40,0.02728901);
   2->SetBinContent(41,0.02728901);
   2->SetBinContent(42,0.02540701);
   2->SetBinContent(43,0.017879);
   2->SetBinContent(44,0.02823001);
   2->SetBinContent(45,0.011292);
   2->SetBinContent(46,0.015997);
   2->SetBinContent(47,0.017879);
   2->SetBinContent(48,0.015997);
   2->SetBinContent(49,0.005646);
   2->SetBinContent(50,0.013174);
   2->SetBinContent(51,0.07151605);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,500);
   3->SetBinContent(1,0.5053457);
   3->SetBinContent(2,5.907036);
   3->SetBinContent(3,10.10006);
   3->SetBinContent(4,11.34298);
   3->SetBinContent(5,11.88249);
   3->SetBinContent(6,11.15176);
   3->SetBinContent(7,9.806398);
   3->SetBinContent(8,8.201522);
   3->SetBinContent(9,6.863066);
   3->SetBinContent(10,5.729488);
   3->SetBinContent(11,4.732485);
   3->SetBinContent(12,4.295443);
   3->SetBinContent(13,3.919857);
   3->SetBinContent(14,3.004768);
   3->SetBinContent(15,2.57454);
   3->SetBinContent(16,2.15114);
   3->SetBinContent(17,1.898466);
   3->SetBinContent(18,1.413606);
   3->SetBinContent(19,1.324829);
   3->SetBinContent(20,0.9902064);
   3->SetBinContent(21,1.140445);
   3->SetBinContent(22,0.7170454);
   3->SetBinContent(23,0.7238744);
   3->SetBinContent(24,0.5463198);
   3->SetBinContent(25,0.5463198);
   3->SetBinContent(26,0.5463198);
   3->SetBinContent(27,0.2458439);
   3->SetBinContent(28,0.2526729);
   3->SetBinContent(29,0.2731599);
   3->SetBinContent(30,0.184383);
   3->SetBinContent(31,0.2663309);
   3->SetBinContent(32,0.2116989);
   3->SetBinContent(33,0.177554);
   3->SetBinContent(34,0.150238);
   3->SetBinContent(35,0.102435);
   3->SetBinContent(36,0.09560601);
   3->SetBinContent(37,0.102435);
   3->SetBinContent(38,0.081948);
   3->SetBinContent(39,0.075119);
   3->SetBinContent(40,0.040974);
   3->SetBinContent(41,0.034145);
   3->SetBinContent(42,0.020487);
   3->SetBinContent(43,0.034145);
   3->SetBinContent(44,0.006829);
   3->SetBinContent(45,0.040974);
   3->SetBinContent(46,0.020487);
   3->SetBinContent(47,0.006829);
   3->SetBinContent(48,0.013658);
   3->SetBinContent(49,0.013658);
   3->SetBinContent(50,0.020487);
   3->SetBinContent(51,0.047803);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,500);
   4->SetBinContent(1,2.851443);
   4->SetBinContent(2,20.65478);
   4->SetBinContent(3,22.95887);
   4->SetBinContent(4,20.42858);
   4->SetBinContent(5,17.75101);
   4->SetBinContent(6,14.91542);
   4->SetBinContent(7,12.94764);
   4->SetBinContent(8,9.759223);
   4->SetBinContent(9,7.596815);
   4->SetBinContent(10,6.129012);
   4->SetBinContent(11,5.445089);
   4->SetBinContent(12,4.640164);
   4->SetBinContent(13,3.966763);
   4->SetBinContent(14,3.235492);
   4->SetBinContent(15,2.867226);
   4->SetBinContent(16,2.38848);
   4->SetBinContent(17,1.920256);
   4->SetBinContent(18,1.694035);
   4->SetBinContent(19,1.462554);
   4->SetBinContent(20,1.10481);
   4->SetBinContent(21,0.9575025);
   4->SetBinContent(22,0.9259365);
   4->SetBinContent(23,0.7733674);
   4->SetBinContent(24,0.6523643);
   4->SetBinContent(25,0.5261002);
   4->SetBinContent(26,0.5313612);
   4->SetBinContent(27,0.3945751);
   4->SetBinContent(28,0.3787921);
   4->SetBinContent(29,0.3840531);
   4->SetBinContent(30,0.3367041);
   4->SetBinContent(31,0.3209211);
   4->SetBinContent(32,0.205179);
   4->SetBinContent(33,0.21044);
   4->SetBinContent(34,0.178874);
   4->SetBinContent(35,0.168352);
   4->SetBinContent(36,0.147308);
   4->SetBinContent(37,0.163091);
   4->SetBinContent(38,0.10522);
   4->SetBinContent(39,0.09469797);
   4->SetBinContent(40,0.063132);
   4->SetBinContent(41,0.06839299);
   4->SetBinContent(42,0.06839299);
   4->SetBinContent(43,0.057871);
   4->SetBinContent(44,0.057871);
   4->SetBinContent(45,0.031566);
   4->SetBinContent(46,0.047349);
   4->SetBinContent(47,0.031566);
   4->SetBinContent(48,0.026305);
   4->SetBinContent(49,0.026305);
   4->SetBinContent(50,0.015783);
   4->SetBinContent(51,0.07891499);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,500);
   5->SetBinContent(1,1.872549);
   5->SetBinContent(2,33.80577);
   5->SetBinContent(3,55.86818);
   5->SetBinContent(4,57.85243);
   5->SetBinContent(5,57.70361);
   5->SetBinContent(6,49.35735);
   5->SetBinContent(7,41.49475);
   5->SetBinContent(8,32.93766);
   5->SetBinContent(9,26.9725);
   5->SetBinContent(10,22.70635);
   5->SetBinContent(11,18.13017);
   5->SetBinContent(12,16.0219);
   5->SetBinContent(13,13.77739);
   5->SetBinContent(14,11.53287);
   5->SetBinContent(15,10.33001);
   5->SetBinContent(16,8.631125);
   5->SetBinContent(17,7.800275);
   5->SetBinContent(18,6.894995);
   5->SetBinContent(19,5.468868);
   5->SetBinContent(20,4.241158);
   5->SetBinContent(21,3.906329);
   5->SetBinContent(22,3.521895);
   5->SetBinContent(23,3.162263);
   5->SetBinContent(24,2.852235);
   5->SetBinContent(25,1.996559);
   5->SetBinContent(26,1.971757);
   5->SetBinContent(27,1.88495);
   5->SetBinContent(28,1.674133);
   5->SetBinContent(29,1.178094);
   5->SetBinContent(30,1.190495);
   5->SetBinContent(31,0.8308663);
   5->SetBinContent(32,1.054084);
   5->SetBinContent(33,0.6324505);
   5->SetBinContent(34,0.7192574);
   5->SetBinContent(35,0.7192574);
   5->SetBinContent(36,0.6324505);
   5->SetBinContent(37,0.6076486);
   5->SetBinContent(38,0.3968318);
   5->SetBinContent(39,0.3844308);
   5->SetBinContent(40,0.260421);
   5->SetBinContent(41,0.24802);
   5->SetBinContent(42,0.272822);
   5->SetBinContent(43,0.3100249);
   5->SetBinContent(44,0.198416);
   5->SetBinContent(45,0.210817);
   5->SetBinContent(46,0.111609);
   5->SetBinContent(47,0.210817);
   5->SetBinContent(48,0.062005);
   5->SetBinContent(49,0.062005);
   5->SetBinContent(50,0.148812);
   5->SetBinContent(51,0.6448515);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,500);
   6->SetBinContent(1,70.36441);
   6->SetBinContent(2,1020.226);
   6->SetBinContent(3,1530.157);
   6->SetBinContent(4,1497.66);
   6->SetBinContent(5,1313.307);
   6->SetBinContent(6,1131.081);
   6->SetBinContent(7,927.4425);
   6->SetBinContent(8,752.4291);
   6->SetBinContent(9,599.4347);
   6->SetBinContent(10,490.1834);
   6->SetBinContent(11,434.9303);
   6->SetBinContent(12,368.8238);
   6->SetBinContent(13,321.6157);
   6->SetBinContent(14,280.0999);
   6->SetBinContent(15,235.1646);
   6->SetBinContent(16,201.6872);
   6->SetBinContent(17,174.8901);
   6->SetBinContent(18,149.4594);
   6->SetBinContent(19,125.699);
   6->SetBinContent(20,117.8049);
   6->SetBinContent(21,98.06968);
   6->SetBinContent(22,81.29471);
   6->SetBinContent(23,70.44032);
   6->SetBinContent(24,64.74745);
   6->SetBinContent(25,55.33525);
   6->SetBinContent(26,46.30257);
   6->SetBinContent(27,41.14104);
   6->SetBinContent(28,35.44818);
   6->SetBinContent(29,32.56379);
   6->SetBinContent(30,28.92028);
   6->SetBinContent(31,27.17443);
   6->SetBinContent(32,20.72235);
   6->SetBinContent(33,19.88738);
   6->SetBinContent(34,19.05241);
   6->SetBinContent(35,15.5607);
   6->SetBinContent(36,12.14494);
   6->SetBinContent(37,10.01958);
   6->SetBinContent(38,10.77864);
   6->SetBinContent(39,9.336426);
   6->SetBinContent(40,7.818309);
   6->SetBinContent(41,5.99657);
   6->SetBinContent(42,5.768853);
   6->SetBinContent(43,5.541135);
   6->SetBinContent(44,4.857983);
   6->SetBinContent(45,3.339865);
   6->SetBinContent(46,3.339865);
   6->SetBinContent(47,3.643489);
   6->SetBinContent(48,2.732617);
   6->SetBinContent(49,2.884429);
   6->SetBinContent(50,1.89765);
   6->SetBinContent(51,15.94023);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,500);
   7->SetBinContent(1,11.81495);
   7->SetBinContent(2,349.9323);
   7->SetBinContent(3,625.4206);
   7->SetBinContent(4,640.1179);
   7->SetBinContent(5,590.1667);
   7->SetBinContent(6,504.571);
   7->SetBinContent(7,432.9402);
   7->SetBinContent(8,346.3679);
   7->SetBinContent(9,279.3269);
   7->SetBinContent(10,237.9695);
   7->SetBinContent(11,205.4499);
   7->SetBinContent(12,181.3777);
   7->SetBinContent(13,160.5769);
   7->SetBinContent(14,136.6999);
   7->SetBinContent(15,115.7546);
   7->SetBinContent(16,104.8188);
   7->SetBinContent(17,93.54124);
   7->SetBinContent(18,81.38494);
   7->SetBinContent(19,73.23192);
   7->SetBinContent(20,62.05202);
   7->SetBinContent(21,56.82823);
   7->SetBinContent(22,47.84526);
   7->SetBinContent(23,42.13326);
   7->SetBinContent(24,40.71747);
   7->SetBinContent(25,32.66209);
   7->SetBinContent(26,29.29337);
   7->SetBinContent(27,28.51221);
   7->SetBinContent(28,25.09464);
   7->SetBinContent(29,22.1653);
   7->SetBinContent(30,18.11304);
   7->SetBinContent(31,17.13659);
   7->SetBinContent(32,14.25607);
   7->SetBinContent(33,11.96141);
   7->SetBinContent(34,12.40082);
   7->SetBinContent(35,10.64321);
   7->SetBinContent(36,9.813229);
   7->SetBinContent(37,8.885603);
   7->SetBinContent(38,8.690313);
   7->SetBinContent(39,7.128005);
   7->SetBinContent(40,7.567402);
   7->SetBinContent(41,6.542142);
   7->SetBinContent(42,5.321594);
   7->SetBinContent(43,4.97984);
   7->SetBinContent(44,4.052224);
   7->SetBinContent(45,4.149868);
   7->SetBinContent(46,4.198689);
   7->SetBinContent(47,3.368717);
   7->SetBinContent(48,2.538744);
   7->SetBinContent(49,2.4411);
   7->SetBinContent(50,2.538744);
   7->SetBinContent(51,18.65008);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,500);
   8->SetBinContent(1,0.293506);
   8->SetBinContent(2,9.538944);
   8->SetBinContent(3,18.05064);
   8->SetBinContent(4,19.51817);
   8->SetBinContent(5,19.81168);
   8->SetBinContent(6,18.63765);
   8->SetBinContent(7,15.55583);
   8->SetBinContent(8,13.79479);
   8->SetBinContent(9,12.91427);
   8->SetBinContent(10,10.71297);
   8->SetBinContent(11,10.41946);
   8->SetBinContent(12,11.00648);
   8->SetBinContent(13,9.098684);
   8->SetBinContent(14,9.098684);
   8->SetBinContent(15,8.364918);
   8->SetBinContent(16,6.897388);
   8->SetBinContent(17,4.989602);
   8->SetBinContent(18,7.190894);
   8->SetBinContent(19,6.897388);
   8->SetBinContent(20,5.283107);
   8->SetBinContent(21,4.989602);
   8->SetBinContent(22,4.255837);
   8->SetBinContent(23,4.842849);
   8->SetBinContent(24,4.255837);
   8->SetBinContent(25,4.109085);
   8->SetBinContent(26,2.93506);
   8->SetBinContent(27,2.93506);
   8->SetBinContent(28,2.641554);
   8->SetBinContent(29,2.494801);
   8->SetBinContent(30,1.614283);
   8->SetBinContent(31,3.081813);
   8->SetBinContent(32,1.614283);
   8->SetBinContent(33,1.46753);
   8->SetBinContent(34,2.93506);
   8->SetBinContent(35,2.201295);
   8->SetBinContent(36,0.587012);
   8->SetBinContent(37,1.761036);
   8->SetBinContent(38,2.201295);
   8->SetBinContent(39,1.614283);
   8->SetBinContent(40,1.614283);
   8->SetBinContent(41,1.027271);
   8->SetBinContent(42,1.614283);
   8->SetBinContent(43,1.027271);
   8->SetBinContent(44,1.174024);
   8->SetBinContent(45,1.320777);
   8->SetBinContent(46,1.46753);
   8->SetBinContent(47,1.027271);
   8->SetBinContent(48,1.027271);
   8->SetBinContent(49,0.880518);
   8->SetBinContent(50,0.880518);
   8->SetBinContent(51,6.016871);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,500);
   9->SetBinContent(1,9.600589);
   9->SetBinContent(2,196.8099);
   9->SetBinContent(3,407.5139);
   9->SetBinContent(4,527.1844);
   9->SetBinContent(5,590.6201);
   9->SetBinContent(6,605.879);
   9->SetBinContent(7,603.4787);
   9->SetBinContent(8,586.5054);
   9->SetBinContent(9,541.5861);
   9->SetBinContent(10,529.4133);
   9->SetBinContent(11,517.4119);
   9->SetBinContent(12,519.9836);
   9->SetBinContent(13,509.8683);
   9->SetBinContent(14,483.8082);
   9->SetBinContent(15,483.8082);
   9->SetBinContent(16,460.4913);
   9->SetBinContent(17,436.4886);
   9->SetBinContent(18,443.8609);
   9->SetBinContent(19,439.4032);
   9->SetBinContent(20,418.8295);
   9->SetBinContent(21,396.7127);
   9->SetBinContent(22,380.4252);
   9->SetBinContent(23,360.1944);
   9->SetBinContent(24,355.9082);
   9->SetBinContent(25,340.3064);
   9->SetBinContent(26,331.0482);
   9->SetBinContent(27,311.3318);
   9->SetBinContent(28,291.7867);
   9->SetBinContent(29,271.8988);
   9->SetBinContent(30,268.2984);
   9->SetBinContent(31,251.3255);
   9->SetBinContent(32,234.8679);
   9->SetBinContent(33,241.7252);
   9->SetBinContent(34,207.6102);
   9->SetBinContent(35,214.296);
   9->SetBinContent(36,199.3814);
   9->SetBinContent(37,182.581);
   9->SetBinContent(38,170.7522);
   9->SetBinContent(39,173.838);
   9->SetBinContent(40,172.9808);
   9->SetBinContent(41,150.6946);
   9->SetBinContent(42,134.4085);
   9->SetBinContent(43,131.3227);
   9->SetBinContent(44,117.9505);
   9->SetBinContent(45,108.5213);
   9->SetBinContent(46,107.1498);
   9->SetBinContent(47,94.29179);
   9->SetBinContent(48,91.89163);
   9->SetBinContent(49,84.51971);
   9->SetBinContent(50,73.3761);
   9->SetBinContent(51,438.546);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,500);
   10->SetBinContent(1,271.4792);
   10->SetBinContent(2,5033.627);
   10->SetBinContent(3,7421.702);
   10->SetBinContent(4,6720.831);
   10->SetBinContent(5,5694.311);
   10->SetBinContent(6,4633.777);
   10->SetBinContent(7,3721.392);
   10->SetBinContent(8,2912.812);
   10->SetBinContent(9,2292.881);
   10->SetBinContent(10,1875.06);
   10->SetBinContent(11,1561.969);
   10->SetBinContent(12,1342.282);
   10->SetBinContent(13,1110.352);
   10->SetBinContent(14,949.6729);
   10->SetBinContent(15,824.2726);
   10->SetBinContent(16,703.858);
   10->SetBinContent(17,596.318);
   10->SetBinContent(18,504.8745);
   10->SetBinContent(19,432.9005);
   10->SetBinContent(20,372.0915);
   10->SetBinContent(21,326.6109);
   10->SetBinContent(22,288.4476);
   10->SetBinContent(23,247.8853);
   10->SetBinContent(24,212.7414);
   10->SetBinContent(25,181.2569);
   10->SetBinContent(26,164.4736);
   10->SetBinContent(27,137.7844);
   10->SetBinContent(28,116.2704);
   10->SetBinContent(29,109.0784);
   10->SetBinContent(30,96.33474);
   10->SetBinContent(31,78.98569);
   10->SetBinContent(32,72.3615);
   10->SetBinContent(33,65.3588);
   10->SetBinContent(34,55.70641);
   10->SetBinContent(35,51.2272);
   10->SetBinContent(36,45.67551);
   10->SetBinContent(37,39.1775);
   10->SetBinContent(38,30.84995);
   10->SetBinContent(39,26.74927);
   10->SetBinContent(40,26.37074);
   10->SetBinContent(41,23.84724);
   10->SetBinContent(42,18.23246);
   10->SetBinContent(43,17.34924);
   10->SetBinContent(44,15.51969);
   10->SetBinContent(45,12.80689);
   10->SetBinContent(46,12.42836);
   10->SetBinContent(47,8.958496);
   10->SetBinContent(48,7.444378);
   10->SetBinContent(49,5.804091);
   10->SetBinContent(50,5.677916);
   10->SetBinContent(51,30.5976);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,500);
   11->SetBinContent(1,73.1693);
   11->SetBinContent(2,1024.37);
   11->SetBinContent(3,1434.119);
   11->SetBinContent(4,1580.458);
   11->SetBinContent(5,1141.441);
   11->SetBinContent(6,848.7635);
   11->SetBinContent(7,892.6651);
   11->SetBinContent(8,629.2558);
   11->SetBinContent(9,497.5511);
   11->SetBinContent(10,424.3819);
   11->SetBinContent(11,219.5079);
   11->SetBinContent(12,292.6772);
   11->SetBinContent(13,248.7757);
   11->SetBinContent(14,248.7757);
   11->SetBinContent(15,248.7757);
   11->SetBinContent(16,146.3386);
   11->SetBinContent(17,29.26772);
   11->SetBinContent(18,117.0709);
   11->SetBinContent(19,131.7047);
   11->SetBinContent(20,160.9725);
   11->SetBinContent(21,58.53543);
   11->SetBinContent(22,87.80315);
   11->SetBinContent(23,43.90158);
   11->SetBinContent(24,43.90158);
   11->SetBinContent(25,73.1693);
   11->SetBinContent(26,43.90158);
   11->SetBinContent(27,58.53543);
   11->SetBinContent(28,43.90158);
   11->SetBinContent(29,43.90158);
   11->SetBinContent(30,43.90158);
   11->SetBinContent(31,43.90158);
   11->SetBinContent(32,43.90158);
   11->SetBinContent(33,14.63386);
   11->SetBinContent(34,29.26772);
   11->SetBinContent(35,14.63386);
   11->SetBinContent(39,29.26772);
   11->SetBinContent(40,14.63386);
   11->SetBinContent(47,29.26772);
   11->SetBinContent(49,14.63386);
   11->SetBinContent(50,14.63386);
   11->SetBinContent(51,29.26772);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,500);
   12->SetBinContent(1,957.867);
   12->SetBinContent(2,6952.37);
   12->SetBinContent(3,5239.689);
   12->SetBinContent(4,4243.797);
   12->SetBinContent(5,4021.78);
   12->SetBinContent(6,3679.231);
   12->SetBinContent(7,3323.995);
   12->SetBinContent(8,2740.392);
   12->SetBinContent(9,2366.125);
   12->SetBinContent(10,2258.286);
   12->SetBinContent(11,1896.706);
   12->SetBinContent(12,1947.454);
   12->SetBinContent(13,1693.714);
   12->SetBinContent(14,1681.027);
   12->SetBinContent(15,1560.5);
   12->SetBinContent(16,1535.126);
   12->SetBinContent(17,1338.477);
   12->SetBinContent(18,1198.92);
   12->SetBinContent(19,1072.05);
   12->SetBinContent(20,964.2105);
   12->SetBinContent(21,995.928);
   12->SetBinContent(22,748.5313);
   12->SetBinContent(23,748.5313);
   12->SetBinContent(24,748.5313);
   12->SetBinContent(25,716.8138);
   12->SetBinContent(26,602.6307);
   12->SetBinContent(27,596.2872);
   12->SetBinContent(28,488.4477);
   12->SetBinContent(29,539.1956);
   12->SetBinContent(30,437.6999);
   12->SetBinContent(31,279.113);
   12->SetBinContent(32,412.326);
   12->SetBinContent(33,323.5173);
   12->SetBinContent(34,310.8304);
   12->SetBinContent(35,298.1434);
   12->SetBinContent(36,253.7391);
   12->SetBinContent(37,222.0217);
   12->SetBinContent(38,215.6782);
   12->SetBinContent(39,202.9913);
   12->SetBinContent(40,190.3043);
   12->SetBinContent(41,158.5869);
   12->SetBinContent(42,158.5869);
   12->SetBinContent(43,177.6174);
   12->SetBinContent(44,177.6174);
   12->SetBinContent(45,190.3043);
   12->SetBinContent(46,139.5565);
   12->SetBinContent(47,133.213);
   12->SetBinContent(48,120.5261);
   12->SetBinContent(49,120.5261);
   12->SetBinContent(50,95.15217);
   12->SetBinContent(51,919.806);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,500);
   13->SetBinContent(1,407.8725);
   13->SetBinContent(2,11175.71);
   13->SetBinContent(3,14764.97);
   13->SetBinContent(4,11583.58);
   13->SetBinContent(5,8075.884);
   13->SetBinContent(6,7096.987);
   13->SetBinContent(7,5873.367);
   13->SetBinContent(8,2773.532);
   13->SetBinContent(9,3507.702);
   13->SetBinContent(10,2365.66);
   13->SetBinContent(11,2691.958);
   13->SetBinContent(12,1631.49);
   13->SetBinContent(13,2202.511);
   13->SetBinContent(14,1223.617);
   13->SetBinContent(15,1305.192);
   13->SetBinContent(16,734.1704);
   13->SetBinContent(17,978.8938);
   13->SetBinContent(18,897.3193);
   13->SetBinContent(19,734.1704);
   13->SetBinContent(20,407.8725);
   13->SetBinContent(21,407.8725);
   13->SetBinContent(22,1060.468);
   13->SetBinContent(23,163.149);
   13->SetBinContent(24,244.7235);
   13->SetBinContent(25,489.447);
   13->SetBinContent(26,734.1704);
   13->SetBinContent(27,489.447);
   13->SetBinContent(28,81.57449);
   13->SetBinContent(29,163.149);
   13->SetBinContent(30,489.447);
   13->SetBinContent(31,163.149);
   13->SetBinContent(32,163.149);
   13->SetBinContent(33,163.149);
   13->SetBinContent(34,81.57449);
   13->SetBinContent(36,163.149);
   13->SetBinContent(37,244.7235);
   13->SetBinContent(39,163.149);
   13->SetBinContent(40,81.57449);
   13->SetBinContent(42,81.57449);
   13->SetBinContent(45,81.57449);
   13->SetBinContent(48,81.57449);
   13->SetBinContent(51,244.7235);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,500);
   14->SetBinContent(1,3163.143);
   14->SetBinContent(2,16000.54);
   14->SetBinContent(3,9460.991);
   14->SetBinContent(4,5250.375);
   14->SetBinContent(5,3275.97);
   14->SetBinContent(6,2300.821);
   14->SetBinContent(7,1752.813);
   14->SetBinContent(8,1237.047);
   14->SetBinContent(9,914.6919);
   14->SetBinContent(10,725.3063);
   14->SetBinContent(11,576.2156);
   14->SetBinContent(12,415.0364);
   14->SetBinContent(13,334.4468);
   14->SetBinContent(14,261.9162);
   14->SetBinContent(15,213.5624);
   14->SetBinContent(16,193.415);
   14->SetBinContent(17,137.0023);
   14->SetBinContent(18,128.9433);
   14->SetBinContent(19,76.56011);
   14->SetBinContent(20,108.796);
   14->SetBinContent(21,72.53063);
   14->SetBinContent(22,68.50115);
   14->SetBinContent(23,64.47167);
   14->SetBinContent(24,48.35376);
   14->SetBinContent(25,20.1474);
   14->SetBinContent(26,28.20636);
   14->SetBinContent(27,16.11792);
   14->SetBinContent(28,24.17688);
   14->SetBinContent(29,24.17688);
   14->SetBinContent(30,16.11792);
   14->SetBinContent(31,20.1474);
   14->SetBinContent(32,16.11792);
   14->SetBinContent(33,8.058958);
   14->SetBinContent(34,16.11792);
   14->SetBinContent(35,12.08844);
   14->SetBinContent(36,4.029479);
   14->SetBinContent(37,12.08844);
   14->SetBinContent(38,8.058958);
   14->SetBinContent(39,8.058958);
   14->SetBinContent(40,4.029479);
   14->SetBinContent(41,4.029479);
   14->SetBinContent(45,4.029479);
   14->SetBinContent(46,4.029479);
   14->SetBinContent(48,8.058958);
   14->SetBinContent(49,4.029479);
   14->SetBinContent(50,4.029479);
   14->SetBinContent(51,28.20636);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,500);
   15->SetBinContent(1,177.691);
   15->SetBinContent(2,772.5706);
   15->SetBinContent(3,641.2335);
   15->SetBinContent(4,378.5594);
   15->SetBinContent(5,235.6339);
   15->SetBinContent(6,139.0625);
   15->SetBinContent(7,92.70832);
   15->SetBinContent(8,123.6111);
   15->SetBinContent(9,104.2969);
   15->SetBinContent(10,88.84547);
   15->SetBinContent(11,65.6684);
   15->SetBinContent(12,50.21701);
   15->SetBinContent(13,57.9427);
   15->SetBinContent(14,19.31424);
   15->SetBinContent(15,69.53124);
   15->SetBinContent(16,46.35416);
   15->SetBinContent(17,30.90277);
   15->SetBinContent(18,15.45139);
   15->SetBinContent(19,27.03993);
   15->SetBinContent(20,30.90277);
   15->SetBinContent(21,7.725694);
   15->SetBinContent(22,3.862847);
   15->SetBinContent(23,19.31424);
   15->SetBinContent(24,23.17708);
   15->SetBinContent(25,15.45139);
   15->SetBinContent(26,19.31424);
   15->SetBinContent(27,15.45139);
   15->SetBinContent(28,11.58854);
   15->SetBinContent(29,11.58854);
   15->SetBinContent(30,3.862847);
   15->SetBinContent(31,7.725694);
   15->SetBinContent(32,15.45139);
   15->SetBinContent(33,11.58854);
   15->SetBinContent(36,3.862847);
   15->SetBinContent(37,7.725694);
   15->SetBinContent(38,7.725694);
   15->SetBinContent(40,3.862847);
   15->SetBinContent(42,3.862847);
   15->SetBinContent(43,3.862847);
   15->SetBinContent(50,3.862847);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,500);
   16->SetBinContent(1,955.448);
   16->SetBinContent(2,12476.1);
   16->SetBinContent(3,10817.97);
   16->SetBinContent(4,6977.759);
   16->SetBinContent(5,4949.782);
   16->SetBinContent(6,3784.774);
   16->SetBinContent(7,2810.853);
   16->SetBinContent(8,2348.548);
   16->SetBinContent(9,1775.285);
   16->SetBinContent(10,1602.687);
   16->SetBinContent(11,1251.329);
   16->SetBinContent(12,1060.239);
   16->SetBinContent(13,826.0001);
   16->SetBinContent(14,745.8657);
   16->SetBinContent(15,622.582);
   16->SetBinContent(16,585.5969);
   16->SetBinContent(17,542.4476);
   16->SetBinContent(18,400.6714);
   16->SetBinContent(19,382.1788);
   16->SetBinContent(20,308.2086);
   16->SetBinContent(21,289.7161);
   16->SetBinContent(22,265.0593);
   16->SetBinContent(23,252.731);
   16->SetBinContent(24,234.2384);
   16->SetBinContent(25,246.5668);
   16->SetBinContent(26,184.9251);
   16->SetBinContent(27,141.7759);
   16->SetBinContent(28,172.5968);
   16->SetBinContent(29,104.7909);
   16->SetBinContent(30,104.7909);
   16->SetBinContent(31,73.97004);
   16->SetBinContent(32,104.7909);
   16->SetBinContent(33,129.4476);
   16->SetBinContent(34,92.46255);
   16->SetBinContent(35,36.98502);
   16->SetBinContent(36,30.82085);
   16->SetBinContent(37,55.47753);
   16->SetBinContent(38,73.97004);
   16->SetBinContent(39,18.49251);
   16->SetBinContent(40,80.13421);
   16->SetBinContent(41,61.6417);
   16->SetBinContent(42,49.31336);
   16->SetBinContent(43,24.65668);
   16->SetBinContent(44,36.98502);
   16->SetBinContent(45,18.49251);
   16->SetBinContent(46,12.32834);
   16->SetBinContent(47,49.31336);
   16->SetBinContent(48,18.49251);
   16->SetBinContent(49,30.82085);
   16->SetBinContent(50,30.82085);
   16->SetBinContent(51,178.7609);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,500);
   17->SetBinContent(1,983.8572);
   17->SetBinContent(2,7355.531);
   17->SetBinContent(3,5013.002);
   17->SetBinContent(4,3396.657);
   17->SetBinContent(5,2248.818);
   17->SetBinContent(6,1991.14);
   17->SetBinContent(7,1756.888);
   17->SetBinContent(8,1452.361);
   17->SetBinContent(9,1194.684);
   17->SetBinContent(10,1100.983);
   17->SetBinContent(11,983.8572);
   17->SetBinContent(12,1264.959);
   17->SetBinContent(13,655.9048);
   17->SetBinContent(14,655.9048);
   17->SetBinContent(15,679.33);
   17->SetBinContent(16,655.9048);
   17->SetBinContent(17,609.0545);
   17->SetBinContent(18,749.6055);
   17->SetBinContent(19,632.4797);
   17->SetBinContent(20,983.8572);
   17->SetBinContent(21,609.0545);
   17->SetBinContent(22,445.0783);
   17->SetBinContent(23,398.2279);
   17->SetBinContent(24,491.9286);
   17->SetBinContent(25,679.33);
   17->SetBinContent(26,327.9524);
   17->SetBinContent(27,421.6531);
   17->SetBinContent(28,421.6531);
   17->SetBinContent(29,468.5034);
   17->SetBinContent(30,562.2042);
   17->SetBinContent(31,491.9286);
   17->SetBinContent(32,257.6769);
   17->SetBinContent(33,327.9524);
   17->SetBinContent(34,421.6531);
   17->SetBinContent(35,327.9524);
   17->SetBinContent(36,491.9286);
   17->SetBinContent(37,445.0783);
   17->SetBinContent(38,327.9524);
   17->SetBinContent(39,538.779);
   17->SetBinContent(40,351.3776);
   17->SetBinContent(41,257.6769);
   17->SetBinContent(42,234.2517);
   17->SetBinContent(43,210.8266);
   17->SetBinContent(44,210.8266);
   17->SetBinContent(45,281.1021);
   17->SetBinContent(46,374.8028);
   17->SetBinContent(47,421.6531);
   17->SetBinContent(48,351.3776);
   17->SetBinContent(49,281.1021);
   17->SetBinContent(50,281.1021);
   17->SetBinContent(51,2975.002);
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
