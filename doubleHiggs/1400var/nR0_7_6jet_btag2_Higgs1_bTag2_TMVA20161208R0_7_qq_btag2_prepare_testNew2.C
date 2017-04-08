{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:00:59 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.200191,1.31746,5.765242);
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
   
   TH1F *THStack_stack_16 = new TH1F("THStack_stack_16","",50,0,1);
   THStack_stack_16->SetMinimum(0.02591712);
   THStack_stack_16->SetMaximum(111688.3);
   THStack_stack_16->SetDirectory(0);
   THStack_stack_16->SetStats(0);
   THStack_stack_16->SetLineWidth(2);
   THStack_stack_16->SetMarkerSize(1.2);
   THStack_stack_16->GetXaxis()->SetTitle("Lowest B tag of H#rightarrowbb jets");
   THStack_stack_16->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_16->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_16->GetXaxis()->SetLabelColor(ci);
   THStack_stack_16->GetXaxis()->SetLabelFont(42);
   THStack_stack_16->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_16->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_16->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_16->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_16->GetXaxis()->SetTitleColor(ci);
   THStack_stack_16->GetXaxis()->SetTitleFont(42);
   THStack_stack_16->GetYaxis()->SetTitle("Number of events");
   THStack_stack_16->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_16->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_16->GetYaxis()->SetLabelColor(ci);
   THStack_stack_16->GetYaxis()->SetLabelFont(42);
   THStack_stack_16->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_16->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_16->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_16->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_16->GetYaxis()->SetTitleColor(ci);
   THStack_stack_16->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_16->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_16->GetZaxis()->SetLabelColor(ci);
   THStack_stack_16->GetZaxis()->SetLabelFont(42);
   THStack_stack_16->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_16->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_16->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_16->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_16->GetZaxis()->SetTitleColor(ci);
   THStack_stack_16->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_16);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,0.2917099);
   0->SetBinContent(2,0.4874365);
   0->SetBinContent(3,1.076505);
   0->SetBinContent(4,1.104735);
   0->SetBinContent(5,1.012519);
   0->SetBinContent(6,0.6906942);
   0->SetBinContent(7,0.5871832);
   0->SetBinContent(8,0.4403869);
   0->SetBinContent(9,0.3613434);
   0->SetBinContent(10,0.27289);
   0->SetBinContent(11,0.3500515);
   0->SetBinContent(12,0.3613434);
   0->SetBinContent(13,0.278536);
   0->SetBinContent(14,0.2540702);
   0->SetBinContent(15,0.2296042);
   0->SetBinContent(16,0.1994922);
   0->SetBinContent(17,0.2296042);
   0->SetBinContent(18,0.1994922);
   0->SetBinContent(19,0.1900821);
   0->SetBinContent(20,0.1562061);
   0->SetBinContent(21,0.1373861);
   0->SetBinContent(22,0.1505601);
   0->SetBinContent(23,0.1166841);
   0->SetBinContent(24,0.1298581);
   0->SetBinContent(25,0.1166841);
   0->SetBinContent(26,0.1599701);
   0->SetBinContent(27,0.1769081);
   0->SetBinContent(28,0.1260941);
   0->SetBinContent(29,0.1223301);
   0->SetBinContent(30,0.1129201);
   0->SetBinContent(31,0.1486781);
   0->SetBinContent(32,0.1336221);
   0->SetBinContent(33,0.1411501);
   0->SetBinContent(34,0.09974606);
   0->SetBinContent(35,0.1185661);
   0->SetBinContent(36,0.1317401);
   0->SetBinContent(37,0.1242121);
   0->SetBinContent(38,0.1392681);
   0->SetBinContent(39,0.1373861);
   0->SetBinContent(40,0.1185661);
   0->SetBinContent(41,0.1449141);
   0->SetBinContent(42,0.1110381);
   0->SetBinContent(43,0.1674981);
   0->SetBinContent(44,0.1693801);
   0->SetBinContent(45,0.2446602);
   0->SetBinContent(46,0.3387596);
   0->SetBinContent(47,0.3989832);
   0->SetBinContent(48,0.5344868);
   0->SetBinContent(49,0.8506656);
   0->SetBinContent(50,2.30356);
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
   1->SetBinContent(1,0.3905155);
   1->SetBinContent(2,0.2418363);
   1->SetBinContent(3,0.6822223);
   1->SetBinContent(4,0.8054905);
   1->SetBinContent(5,0.8214871);
   1->SetBinContent(6,0.7292712);
   1->SetBinContent(7,0.6492881);
   1->SetBinContent(8,0.5363706);
   1->SetBinContent(9,0.5523673);
   1->SetBinContent(10,0.4422709);
   1->SetBinContent(11,0.3208809);
   1->SetBinContent(12,0.3434651);
   1->SetBinContent(13,0.2305444);
   1->SetBinContent(14,0.2201934);
   1->SetBinContent(15,0.1825537);
   1->SetBinContent(16,0.1533829);
   1->SetBinContent(17,0.134563);
   1->SetBinContent(18,0.1279761);
   1->SetBinContent(19,0.1298581);
   1->SetBinContent(20,0.1223301);
   1->SetBinContent(21,0.1129201);
   1->SetBinContent(22,0.08845407);
   1->SetBinContent(23,0.08186706);
   1->SetBinContent(24,0.08469006);
   1->SetBinContent(25,0.07339805);
   1->SetBinContent(26,0.07528006);
   1->SetBinContent(27,0.07433905);
   1->SetBinContent(28,0.06210604);
   1->SetBinContent(29,0.06492905);
   1->SetBinContent(30,0.06210604);
   1->SetBinContent(31,0.05457804);
   1->SetBinContent(32,0.05363704);
   1->SetBinContent(33,0.05928304);
   1->SetBinContent(34,0.05363704);
   1->SetBinContent(35,0.04705003);
   1->SetBinContent(36,0.04610903);
   1->SetBinContent(37,0.03858102);
   1->SetBinContent(38,0.03858102);
   1->SetBinContent(39,0.03199401);
   1->SetBinContent(40,0.03669902);
   1->SetBinContent(41,0.03669902);
   1->SetBinContent(42,0.06304704);
   1->SetBinContent(43,0.05834204);
   1->SetBinContent(44,0.05551904);
   1->SetBinContent(45,0.06116504);
   1->SetBinContent(46,0.09974608);
   1->SetBinContent(47,0.09692308);
   1->SetBinContent(48,0.1618518);
   1->SetBinContent(49,0.2333673);
   1->SetBinContent(50,0.4836753);
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
   2->SetBinContent(1,0.870418);
   2->SetBinContent(2,0.9993321);
   2->SetBinContent(3,2.18504);
   2->SetBinContent(4,2.200097);
   2->SetBinContent(5,1.938488);
   2->SetBinContent(6,1.499023);
   2->SetBinContent(7,1.156485);
   2->SetBinContent(8,0.8318379);
   2->SetBinContent(9,0.7951397);
   2->SetBinContent(10,0.6050621);
   2->SetBinContent(11,0.6135309);
   2->SetBinContent(12,0.6342324);
   2->SetBinContent(13,0.4319198);
   2->SetBinContent(14,0.3764004);
   2->SetBinContent(15,0.3538162);
   2->SetBinContent(16,0.3180578);
   2->SetBinContent(17,0.3001787);
   2->SetBinContent(18,0.2559513);
   2->SetBinContent(19,0.2568923);
   2->SetBinContent(20,0.2192524);
   2->SetBinContent(21,0.1947866);
   2->SetBinContent(22,0.2107835);
   2->SetBinContent(23,0.1900816);
   2->SetBinContent(24,0.2126655);
   2->SetBinContent(25,0.1656158);
   2->SetBinContent(26,0.1590289);
   2->SetBinContent(27,0.1458549);
   2->SetBinContent(28,0.1599699);
   2->SetBinContent(29,0.138327);
   2->SetBinContent(30,0.140209);
   2->SetBinContent(31,0.13174);
   2->SetBinContent(32,0.143973);
   2->SetBinContent(33,0.1157431);
   2->SetBinContent(34,0.1232711);
   2->SetBinContent(35,0.134563);
   2->SetBinContent(36,0.144914);
   2->SetBinContent(37,0.139268);
   2->SetBinContent(38,0.136445);
   2->SetBinContent(39,0.1665568);
   2->SetBinContent(40,0.1599699);
   2->SetBinContent(41,0.1515009);
   2->SetBinContent(42,0.1834947);
   2->SetBinContent(43,0.2032555);
   2->SetBinContent(44,0.2230164);
   2->SetBinContent(45,0.2597153);
   2->SetBinContent(46,0.3246449);
   2->SetBinContent(47,0.4366249);
   2->SetBinContent(48,0.6351734);
   2->SetBinContent(49,1.037915);
   2->SetBinContent(50,2.784481);
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
   3->SetBinContent(1,4.445676);
   3->SetBinContent(2,4.677855);
   3->SetBinContent(3,10.14786);
   3->SetBinContent(4,10.96737);
   3->SetBinContent(5,8.809326);
   3->SetBinContent(6,7.655205);
   3->SetBinContent(7,6.002639);
   3->SetBinContent(8,4.671026);
   3->SetBinContent(9,4.152039);
   3->SetBinContent(10,3.195981);
   3->SetBinContent(11,2.595027);
   3->SetBinContent(12,3.291587);
   3->SetBinContent(13,2.08285);
   3->SetBinContent(14,1.864321);
   3->SetBinContent(15,1.597989);
   3->SetBinContent(16,1.427264);
   3->SetBinContent(17,1.236051);
   3->SetBinContent(18,1.208735);
   3->SetBinContent(19,1.058497);
   3->SetBinContent(20,1.126787);
   3->SetBinContent(21,1.065326);
   3->SetBinContent(22,1.092642);
   3->SetBinContent(23,0.9082581);
   3->SetBinContent(24,0.887771);
   3->SetBinContent(25,0.7443615);
   3->SetBinContent(26,0.8126518);
   3->SetBinContent(27,0.5394908);
   3->SetBinContent(28,0.7170454);
   3->SetBinContent(29,0.587294);
   3->SetBinContent(30,0.594123);
   3->SetBinContent(31,0.6282681);
   3->SetBinContent(32,0.5668069);
   3->SetBinContent(33,0.5258328);
   3->SetBinContent(34,0.5121747);
   3->SetBinContent(35,0.5394908);
   3->SetBinContent(36,0.6077811);
   3->SetBinContent(37,0.4575427);
   3->SetBinContent(38,0.5258328);
   3->SetBinContent(39,0.5258328);
   3->SetBinContent(40,0.5258328);
   3->SetBinContent(41,0.4643717);
   3->SetBinContent(42,0.580465);
   3->SetBinContent(43,0.6282681);
   3->SetBinContent(44,0.7716776);
   3->SetBinContent(45,0.9765483);
   3->SetBinContent(46,1.044839);
   3->SetBinContent(47,1.317999);
   3->SetBinContent(48,1.898466);
   3->SetBinContent(49,2.956965);
   3->SetBinContent(50,8.317619);
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
   4->SetBinContent(1,6.797152);
   4->SetBinContent(2,6.62354);
   4->SetBinContent(3,13.07392);
   4->SetBinContent(4,14.97329);
   4->SetBinContent(5,14.18934);
   4->SetBinContent(6,12.29523);
   4->SetBinContent(7,10.117);
   4->SetBinContent(8,8.78586);
   4->SetBinContent(9,7.801992);
   4->SetBinContent(10,5.986966);
   4->SetBinContent(11,5.176781);
   4->SetBinContent(12,5.823877);
   4->SetBinContent(13,3.740543);
   4->SetBinContent(14,2.825138);
   4->SetBinContent(15,2.356914);
   4->SetBinContent(16,2.120172);
   4->SetBinContent(17,1.909734);
   4->SetBinContent(18,1.688774);
   4->SetBinContent(19,1.562512);
   4->SetBinContent(20,1.367857);
   4->SetBinContent(21,1.483598);
   4->SetBinContent(22,1.357335);
   4->SetBinContent(23,1.173202);
   4->SetBinContent(24,1.010113);
   4->SetBinContent(25,0.9575025);
   4->SetBinContent(26,0.8364995);
   4->SetBinContent(27,0.8417605);
   4->SetBinContent(28,0.8943705);
   4->SetBinContent(29,0.8312384);
   4->SetBinContent(30,0.7418014);
   4->SetBinContent(31,0.7418014);
   4->SetBinContent(32,0.6839303);
   4->SetBinContent(33,0.6839303);
   4->SetBinContent(34,0.6681473);
   4->SetBinContent(35,0.6997133);
   4->SetBinContent(36,0.6418423);
   4->SetBinContent(37,0.6734083);
   4->SetBinContent(38,0.7102354);
   4->SetBinContent(39,0.6628863);
   4->SetBinContent(40,0.6471033);
   4->SetBinContent(41,0.7102354);
   4->SetBinContent(42,0.7628454);
   4->SetBinContent(43,0.9469805);
   4->SetBinContent(44,0.9469805);
   4->SetBinContent(45,1.262638);
   4->SetBinContent(46,1.509902);
   4->SetBinContent(47,1.809776);
   4->SetBinContent(48,2.593657);
   4->SetBinContent(49,4.61386);
   4->SetBinContent(50,11.43235);
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
   5->SetBinContent(1,14.0998);
   5->SetBinContent(2,26.32761);
   5->SetBinContent(3,53.15223);
   5->SetBinContent(4,48.40243);
   5->SetBinContent(5,38.66719);
   5->SetBinContent(6,27.51817);
   5->SetBinContent(7,19.1471);
   5->SetBinContent(8,14.37262);
   5->SetBinContent(9,12.0909);
   5->SetBinContent(10,7.465446);
   5->SetBinContent(11,9.350362);
   5->SetBinContent(12,10.39201);
   5->SetBinContent(13,6.746181);
   5->SetBinContent(14,5.679687);
   5->SetBinContent(15,4.563587);
   5->SetBinContent(16,4.898417);
   5->SetBinContent(17,3.844323);
   5->SetBinContent(18,3.869126);
   5->SetBinContent(19,3.707911);
   5->SetBinContent(20,4.03034);
   5->SetBinContent(21,3.955933);
   5->SetBinContent(22,3.831922);
   5->SetBinContent(23,3.211867);
   5->SetBinContent(24,3.236669);
   5->SetBinContent(25,2.926642);
   5->SetBinContent(26,3.211867);
   5->SetBinContent(27,2.740625);
   5->SetBinContent(28,2.666219);
   5->SetBinContent(29,2.802631);
   5->SetBinContent(30,2.554609);
   5->SetBinContent(31,2.864636);
   5->SetBinContent(32,2.393394);
   5->SetBinContent(33,2.182575);
   5->SetBinContent(34,2.815032);
   5->SetBinContent(35,2.604213);
   5->SetBinContent(36,2.67862);
   5->SetBinContent(37,2.629015);
   5->SetBinContent(38,2.67862);
   5->SetBinContent(39,3.187065);
   5->SetBinContent(40,2.926642);
   5->SetBinContent(41,3.819521);
   5->SetBinContent(42,3.236669);
   5->SetBinContent(43,3.931131);
   5->SetBinContent(44,4.650395);
   5->SetBinContent(45,5.741692);
   5->SetBinContent(46,6.696577);
   5->SetBinContent(47,9.139551);
   5->SetBinContent(48,13.24416);
   5->SetBinContent(49,23.69848);
   5->SetBinContent(50,64.87146);
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
   6->SetBinContent(1,328.5983);
   6->SetBinContent(2,472.4994);
   6->SetBinContent(3,1057.583);
   6->SetBinContent(4,1129.334);
   6->SetBinContent(5,1032.223);
   6->SetBinContent(6,887.1249);
   6->SetBinContent(7,693.3573);
   6->SetBinContent(8,530.1886);
   6->SetBinContent(9,451.7036);
   6->SetBinContent(10,287.3861);
   6->SetBinContent(11,271.7513);
   6->SetBinContent(12,325.4106);
   6->SetBinContent(13,185.8974);
   6->SetBinContent(14,152.9514);
   6->SetBinContent(15,138.6039);
   6->SetBinContent(16,124.3328);
   6->SetBinContent(17,110.1385);
   6->SetBinContent(18,106.0397);
   6->SetBinContent(19,95.3371);
   6->SetBinContent(20,93.05996);
   6->SetBinContent(21,86.07671);
   6->SetBinContent(22,87.29119);
   6->SetBinContent(23,75.37413);
   6->SetBinContent(24,79.24528);
   6->SetBinContent(25,71.04755);
   6->SetBinContent(26,64.36793);
   6->SetBinContent(27,66.41736);
   6->SetBinContent(28,64.82336);
   6->SetBinContent(29,63.76068);
   6->SetBinContent(30,62.16668);
   6->SetBinContent(31,61.71125);
   6->SetBinContent(32,53.20991);
   6->SetBinContent(33,54.50029);
   6->SetBinContent(34,59.43411);
   6->SetBinContent(35,51.69181);
   6->SetBinContent(36,59.43411);
   6->SetBinContent(37,53.51353);
   6->SetBinContent(38,57.08106);
   6->SetBinContent(39,59.73773);
   6->SetBinContent(40,65.58241);
   6->SetBinContent(41,68.92222);
   6->SetBinContent(42,77.04404);
   6->SetBinContent(43,84.02728);
   6->SetBinContent(44,94.12263);
   6->SetBinContent(45,110.8976);
   6->SetBinContent(46,139.7426);
   6->SetBinContent(47,184.4551);
   6->SetBinContent(48,271.4477);
   6->SetBinContent(49,468.325);
   6->SetBinContent(50,1235.709);
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
   7->SetBinContent(1,198.9558);
   7->SetBinContent(2,511.9929);
   7->SetBinContent(3,911.4557);
   7->SetBinContent(4,825.2253);
   7->SetBinContent(5,647.5886);
   7->SetBinContent(6,479.2292);
   7->SetBinContent(7,337.7741);
   7->SetBinContent(8,236.8952);
   7->SetBinContent(9,213.3601);
   7->SetBinContent(10,132.5007);
   7->SetBinContent(11,158.6726);
   7->SetBinContent(12,168.8777);
   7->SetBinContent(13,75.13592);
   7->SetBinContent(14,52.77613);
   7->SetBinContent(15,40.66865);
   7->SetBinContent(16,35.7866);
   7->SetBinContent(17,29.24454);
   7->SetBinContent(18,24.50877);
   7->SetBinContent(19,23.28821);
   7->SetBinContent(20,20.2124);
   7->SetBinContent(21,18.11304);
   7->SetBinContent(22,17.23423);
   7->SetBinContent(23,12.84022);
   7->SetBinContent(24,14.1096);
   7->SetBinContent(25,11.91259);
   7->SetBinContent(26,11.52201);
   7->SetBinContent(27,11.32672);
   7->SetBinContent(28,10.35028);
   7->SetBinContent(29,10.49674);
   7->SetBinContent(30,10.3991);
   7->SetBinContent(31,9.080893);
   7->SetBinContent(32,9.569117);
   7->SetBinContent(33,9.373827);
   7->SetBinContent(34,8.983248);
   7->SetBinContent(35,9.422649);
   7->SetBinContent(36,7.420937);
   7->SetBinContent(37,8.787958);
   7->SetBinContent(38,8.397379);
   7->SetBinContent(39,9.520294);
   7->SetBinContent(40,10.10616);
   7->SetBinContent(41,9.764406);
   7->SetBinContent(42,10.64321);
   7->SetBinContent(43,11.7173);
   7->SetBinContent(44,13.91431);
   7->SetBinContent(45,15.76956);
   7->SetBinContent(46,20.2124);
   7->SetBinContent(47,25.53404);
   7->SetBinContent(48,37.83706);
   7->SetBinContent(49,68.83807);
   7->SetBinContent(50,186.8464);
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
   8->SetBinContent(1,28.91038);
   8->SetBinContent(2,21.71947);
   8->SetBinContent(3,39.62328);
   8->SetBinContent(4,34.92723);
   8->SetBinContent(5,30.81817);
   8->SetBinContent(6,27.14934);
   8->SetBinContent(7,20.39869);
   8->SetBinContent(8,16.2896);
   8->SetBinContent(9,17.75713);
   8->SetBinContent(10,8.951931);
   8->SetBinContent(11,11.44674);
   8->SetBinContent(12,11.59349);
   8->SetBinContent(13,3.081813);
   8->SetBinContent(14,2.201295);
   8->SetBinContent(15,1.907789);
   8->SetBinContent(16,2.201295);
   8->SetBinContent(17,1.320777);
   8->SetBinContent(18,2.348048);
   8->SetBinContent(19,1.027271);
   8->SetBinContent(20,0.733765);
   8->SetBinContent(21,0.293506);
   8->SetBinContent(22,0.440259);
   8->SetBinContent(23,0.440259);
   8->SetBinContent(24,0.293506);
   8->SetBinContent(25,0.587012);
   8->SetBinContent(26,0.587012);
   8->SetBinContent(27,0.440259);
   8->SetBinContent(28,0.146753);
   8->SetBinContent(29,0.293506);
   8->SetBinContent(30,0.146753);
   8->SetBinContent(31,0.146753);
   8->SetBinContent(32,0.146753);
   8->SetBinContent(33,0.146753);
   8->SetBinContent(34,0.146753);
   8->SetBinContent(35,0.293506);
   8->SetBinContent(36,0.146753);
   8->SetBinContent(47,0.146753);
   8->SetBinContent(49,0.146753);
   8->SetBinContent(50,0.293506);
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
   9->SetBinContent(1,1158.236);
   9->SetBinContent(2,1229.875);
   9->SetBinContent(3,2191.869);
   9->SetBinContent(4,2021.168);
   9->SetBinContent(5,1574.363);
   9->SetBinContent(6,1181.716);
   9->SetBinContent(7,934.8872);
   9->SetBinContent(8,719.0345);
   9->SetBinContent(9,728.9785);
   9->SetBinContent(10,528.556);
   9->SetBinContent(11,420.7154);
   9->SetBinContent(12,491.6948);
   9->SetBinContent(13,261.0976);
   9->SetBinContent(14,212.7531);
   9->SetBinContent(15,180.5238);
   9->SetBinContent(16,167.495);
   9->SetBinContent(17,140.2372);
   9->SetBinContent(18,125.151);
   9->SetBinContent(19,119.8364);
   9->SetBinContent(20,110.5786);
   9->SetBinContent(21,93.94891);
   9->SetBinContent(22,85.37691);
   9->SetBinContent(23,82.63387);
   9->SetBinContent(24,75.9477);
   9->SetBinContent(25,71.6617);
   9->SetBinContent(26,63.26114);
   9->SetBinContent(27,61.20385);
   9->SetBinContent(28,54.34625);
   9->SetBinContent(29,48.34584);
   9->SetBinContent(30,45.77424);
   9->SetBinContent(31,35.48783);
   9->SetBinContent(32,34.97351);
   9->SetBinContent(33,34.11631);
   9->SetBinContent(34,27.60164);
   9->SetBinContent(35,30.85896);
   9->SetBinContent(36,31.0304);
   9->SetBinContent(37,26.05869);
   9->SetBinContent(38,24.85863);
   9->SetBinContent(39,23.48712);
   9->SetBinContent(40,19.3726);
   9->SetBinContent(41,24.51575);
   9->SetBinContent(42,27.77308);
   9->SetBinContent(43,27.4302);
   9->SetBinContent(44,30.51609);
   9->SetBinContent(45,39.6024);
   9->SetBinContent(46,44.7456);
   9->SetBinContent(47,56.74641);
   9->SetBinContent(48,77.14778);
   9->SetBinContent(49,123.4366);
   9->SetBinContent(50,280.6426);
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
   10->SetBinContent(1,1651.397);
   10->SetBinContent(2,3877.099);
   10->SetBinContent(3,7219.446);
   10->SetBinContent(4,6995.208);
   10->SetBinContent(5,5608.584);
   10->SetBinContent(6,4160.861);
   10->SetBinContent(7,3024.868);
   10->SetBinContent(8,2266.048);
   10->SetBinContent(9,1947.889);
   10->SetBinContent(10,1294.318);
   10->SetBinContent(11,1331.806);
   10->SetBinContent(12,1566.766);
   10->SetBinContent(13,728.7235);
   10->SetBinContent(14,578.2053);
   10->SetBinContent(15,477.3087);
   10->SetBinContent(16,396.4403);
   10->SetBinContent(17,336.1991);
   10->SetBinContent(18,299.7389);
   10->SetBinContent(19,267.0636);
   10->SetBinContent(20,243.7841);
   10->SetBinContent(21,222.3318);
   10->SetBinContent(22,210.4699);
   10->SetBinContent(23,197.4093);
   10->SetBinContent(24,176.7141);
   10->SetBinContent(25,158.9843);
   10->SetBinContent(26,153.2427);
   10->SetBinContent(27,142.201);
   10->SetBinContent(28,132.1689);
   10->SetBinContent(29,127.9416);
   10->SetBinContent(30,123.5254);
   10->SetBinContent(31,121.2543);
   10->SetBinContent(32,116.2704);
   10->SetBinContent(33,111.7281);
   10->SetBinContent(34,102.8327);
   10->SetBinContent(35,111.1603);
   10->SetBinContent(36,107.6905);
   10->SetBinContent(37,101.6341);
   10->SetBinContent(38,102.9589);
   10->SetBinContent(39,111.4126);
   10->SetBinContent(40,112.7375);
   10->SetBinContent(41,116.1442);
   10->SetBinContent(42,135.9546);
   10->SetBinContent(43,142.0118);
   10->SetBinContent(44,163.7165);
   10->SetBinContent(45,193.4343);
   10->SetBinContent(46,237.727);
   10->SetBinContent(47,304.8484);
   10->SetBinContent(48,451.509);
   10->SetBinContent(49,775.299);
   10->SetBinContent(50,1976.857);
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
   11->SetBinContent(1,1404.851);
   11->SetBinContent(2,614.6219);
   11->SetBinContent(3,1126.807);
   11->SetBinContent(4,1243.878);
   11->SetBinContent(5,1243.878);
   11->SetBinContent(6,951.2005);
   11->SetBinContent(7,1039.004);
   11->SetBinContent(8,673.1573);
   11->SetBinContent(9,980.4682);
   11->SetBinContent(10,453.6496);
   11->SetBinContent(11,365.8465);
   11->SetBinContent(12,395.1142);
   11->SetBinContent(13,219.5079);
   11->SetBinContent(14,58.53543);
   11->SetBinContent(15,73.1693);
   11->SetBinContent(16,14.63386);
   11->SetBinContent(17,29.26772);
   11->SetBinContent(18,58.53543);
   11->SetBinContent(19,14.63386);
   11->SetBinContent(21,29.26772);
   11->SetBinContent(28,14.63386);
   11->SetBinContent(29,43.90158);
   11->SetBinContent(32,14.63386);
   11->SetBinContent(35,14.63386);
   11->SetBinContent(38,14.63386);
   11->SetBinContent(39,14.63386);
   11->SetBinContent(45,14.63386);
   11->SetBinContent(48,14.63386);
   11->SetBinContent(49,29.26772);
   11->SetBinContent(50,43.90158);
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
   12->SetBinContent(1,5150.884);
   12->SetBinContent(2,2340.751);
   12->SetBinContent(3,4516.558);
   12->SetBinContent(4,5163.57);
   12->SetBinContent(5,6584.461);
   12->SetBinContent(6,7428.115);
   12->SetBinContent(7,6831.848);
   12->SetBinContent(8,5246.033);
   12->SetBinContent(9,5683.718);
   12->SetBinContent(10,2404.186);
   12->SetBinContent(11,2518.369);
   12->SetBinContent(12,3190.781);
   12->SetBinContent(13,837.3404);
   12->SetBinContent(14,583.6002);
   12->SetBinContent(15,475.7607);
   12->SetBinContent(16,329.8608);
   12->SetBinContent(17,279.113);
   12->SetBinContent(18,196.6478);
   12->SetBinContent(19,202.9913);
   12->SetBinContent(20,114.1826);
   12->SetBinContent(21,126.8695);
   12->SetBinContent(22,69.77827);
   12->SetBinContent(23,76.12174);
   12->SetBinContent(24,69.77827);
   12->SetBinContent(25,63.43479);
   12->SetBinContent(26,101.4956);
   12->SetBinContent(27,25.37391);
   12->SetBinContent(28,69.77827);
   12->SetBinContent(29,25.37391);
   12->SetBinContent(30,76.12174);
   12->SetBinContent(31,19.03043);
   12->SetBinContent(32,31.71739);
   12->SetBinContent(33,44.40435);
   12->SetBinContent(34,50.74783);
   12->SetBinContent(35,25.37391);
   12->SetBinContent(36,50.74783);
   12->SetBinContent(37,25.37391);
   12->SetBinContent(38,12.68696);
   12->SetBinContent(39,12.68696);
   12->SetBinContent(40,82.46522);
   12->SetBinContent(41,50.74783);
   12->SetBinContent(42,44.40435);
   12->SetBinContent(43,31.71739);
   12->SetBinContent(44,38.06087);
   12->SetBinContent(45,63.43479);
   12->SetBinContent(46,76.12174);
   12->SetBinContent(47,88.80869);
   12->SetBinContent(48,95.15217);
   12->SetBinContent(49,247.3956);
   12->SetBinContent(50,520.1651);
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
   13->SetBinContent(1,10849.41);
   13->SetBinContent(2,3344.553);
   13->SetBinContent(3,7994.309);
   13->SetBinContent(4,10604.69);
   13->SetBinContent(5,9054.775);
   13->SetBinContent(6,8320.607);
   13->SetBinContent(7,7423.286);
   13->SetBinContent(8,6281.24);
   13->SetBinContent(9,7341.711);
   13->SetBinContent(10,3344.553);
   13->SetBinContent(11,3589.277);
   13->SetBinContent(12,3181.404);
   13->SetBinContent(13,978.8938);
   13->SetBinContent(14,652.5959);
   13->SetBinContent(15,652.5959);
   13->SetBinContent(16,489.447);
   13->SetBinContent(17,244.7235);
   13->SetBinContent(18,163.149);
   13->SetBinContent(19,81.57449);
   13->SetBinContent(20,81.57449);
   13->SetBinContent(21,163.149);
   13->SetBinContent(22,81.57449);
   13->SetBinContent(23,244.7235);
   13->SetBinContent(24,163.149);
   13->SetBinContent(25,81.57449);
   13->SetBinContent(26,163.149);
   13->SetBinContent(27,81.57449);
   13->SetBinContent(32,81.57449);
   13->SetBinContent(36,81.57449);
   13->SetBinContent(46,163.149);
   13->SetBinContent(47,244.7235);
   13->SetBinContent(48,163.149);
   13->SetBinContent(49,81.57449);
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
   14->SetBinContent(1,8900.919);
   14->SetBinContent(2,2284.703);
   14->SetBinContent(3,4005.317);
   14->SetBinContent(4,4110.084);
   14->SetBinContent(5,3956.963);
   14->SetBinContent(6,3586.245);
   14->SetBinContent(7,3034.198);
   14->SetBinContent(8,3070.464);
   14->SetBinContent(9,3336.413);
   14->SetBinContent(10,1881.754);
   14->SetBinContent(11,1281.371);
   14->SetBinContent(12,2659.45);
   14->SetBinContent(13,556.0682);
   14->SetBinContent(14,378.7711);
   14->SetBinContent(15,302.211);
   14->SetBinContent(16,278.0341);
   14->SetBinContent(17,209.5329);
   14->SetBinContent(18,165.2087);
   14->SetBinContent(19,124.9139);
   14->SetBinContent(20,141.0318);
   14->SetBinContent(21,137.0023);
   14->SetBinContent(22,88.64855);
   14->SetBinContent(23,88.64855);
   14->SetBinContent(24,56.41272);
   14->SetBinContent(25,76.56011);
   14->SetBinContent(26,72.53063);
   14->SetBinContent(27,52.38324);
   14->SetBinContent(28,44.32428);
   14->SetBinContent(29,76.56011);
   14->SetBinContent(30,68.50115);
   14->SetBinContent(31,52.38324);
   14->SetBinContent(32,48.35376);
   14->SetBinContent(33,40.2948);
   14->SetBinContent(34,44.32428);
   14->SetBinContent(35,40.2948);
   14->SetBinContent(36,56.41272);
   14->SetBinContent(37,40.2948);
   14->SetBinContent(38,32.23584);
   14->SetBinContent(39,20.1474);
   14->SetBinContent(40,48.35376);
   14->SetBinContent(41,36.26532);
   14->SetBinContent(42,24.17688);
   14->SetBinContent(43,48.35376);
   14->SetBinContent(44,52.38324);
   14->SetBinContent(45,40.2948);
   14->SetBinContent(46,60.4422);
   14->SetBinContent(47,124.9139);
   14->SetBinContent(48,132.9728);
   14->SetBinContent(49,338.4763);
   14->SetBinContent(50,769.6306);
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
   15->SetBinContent(1,780.2963);
   15->SetBinContent(2,84.98263);
   15->SetBinContent(3,142.9254);
   15->SetBinContent(4,166.1025);
   15->SetBinContent(5,204.731);
   15->SetBinContent(6,281.9881);
   15->SetBinContent(7,281.9881);
   15->SetBinContent(8,200.8682);
   15->SetBinContent(9,320.6166);
   15->SetBinContent(10,146.7882);
   15->SetBinContent(11,135.1996);
   15->SetBinContent(12,239.4967);
   15->SetBinContent(13,57.9427);
   15->SetBinContent(14,46.35416);
   15->SetBinContent(15,27.03993);
   15->SetBinContent(16,30.90277);
   15->SetBinContent(17,38.62847);
   15->SetBinContent(18,15.45139);
   15->SetBinContent(19,15.45139);
   15->SetBinContent(20,23.17708);
   15->SetBinContent(22,11.58854);
   15->SetBinContent(23,3.862847);
   15->SetBinContent(25,3.862847);
   15->SetBinContent(26,11.58854);
   15->SetBinContent(28,7.725694);
   15->SetBinContent(29,7.725694);
   15->SetBinContent(30,7.725694);
   15->SetBinContent(31,3.862847);
   15->SetBinContent(35,3.862847);
   15->SetBinContent(40,7.725694);
   15->SetBinContent(42,3.862847);
   15->SetBinContent(44,3.862847);
   15->SetBinContent(45,3.862847);
   15->SetBinContent(46,15.45139);
   15->SetBinContent(48,3.862847);
   15->SetBinContent(49,7.725694);
   15->SetBinContent(50,27.03993);
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
   16->SetBinContent(1,14109.58);
   16->SetBinContent(2,2077.329);
   16->SetBinContent(3,4019.009);
   16->SetBinContent(4,4468.985);
   16->SetBinContent(5,5091.556);
   16->SetBinContent(6,4684.728);
   16->SetBinContent(7,4647.743);
   16->SetBinContent(8,3581.36);
   16->SetBinContent(9,6157.938);
   16->SetBinContent(10,2613.603);
   16->SetBinContent(11,2040.344);
   16->SetBinContent(12,3045.087);
   16->SetBinContent(13,585.5969);
   16->SetBinContent(14,326.7012);
   16->SetBinContent(15,221.9101);
   16->SetBinContent(16,203.4176);
   16->SetBinContent(17,123.2834);
   16->SetBinContent(18,80.13421);
   16->SetBinContent(19,86.29838);
   16->SetBinContent(20,80.13421);
   16->SetBinContent(21,49.31336);
   16->SetBinContent(22,36.98502);
   16->SetBinContent(23,24.65668);
   16->SetBinContent(24,36.98502);
   16->SetBinContent(25,12.32834);
   16->SetBinContent(26,12.32834);
   16->SetBinContent(33,6.16417);
   16->SetBinContent(34,6.16417);
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
   17->SetBinContent(1,7519.508);
   17->SetBinContent(2,2319.094);
   17->SetBinContent(3,4849.025);
   17->SetBinContent(4,5106.703);
   17->SetBinContent(5,4661.623);
   17->SetBinContent(6,5013.002);
   17->SetBinContent(7,3584.059);
   17->SetBinContent(8,2623.622);
   17->SetBinContent(9,3560.634);
   17->SetBinContent(10,1780.313);
   17->SetBinContent(11,1264.959);
   17->SetBinContent(12,2201.967);
   17->SetBinContent(13,632.4797);
   17->SetBinContent(14,351.3776);
   17->SetBinContent(15,374.8028);
   17->SetBinContent(16,93.70071);
   17->SetBinContent(17,163.9762);
   17->SetBinContent(18,140.5511);
   17->SetBinContent(19,210.8266);
   17->SetBinContent(20,117.1259);
   17->SetBinContent(21,46.85035);
   17->SetBinContent(22,257.6769);
   17->SetBinContent(23,23.42518);
   17->SetBinContent(24,93.70071);
   17->SetBinContent(25,140.5511);
   17->SetBinContent(26,187.4014);
   17->SetBinContent(27,93.70071);
   17->SetBinContent(28,46.85035);
   17->SetBinContent(29,70.27553);
   17->SetBinContent(30,23.42518);
   17->SetBinContent(32,93.70071);
   17->SetBinContent(33,70.27553);
   17->SetBinContent(36,70.27553);
   17->SetBinContent(37,70.27553);
   17->SetBinContent(38,23.42518);
   17->SetBinContent(39,70.27553);
   17->SetBinContent(40,70.27553);
   17->SetBinContent(41,23.42518);
   17->SetBinContent(42,23.42518);
   17->SetBinContent(43,70.27553);
   17->SetBinContent(44,70.27553);
   17->SetBinContent(45,140.5511);
   17->SetBinContent(46,46.85035);
   17->SetBinContent(47,23.42518);
   17->SetBinContent(48,163.9762);
   17->SetBinContent(49,163.9762);
   17->SetBinContent(50,304.5273);
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
