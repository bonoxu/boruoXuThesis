{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:03:10 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.23589,1.31746,5.893508);
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
   
   TH1F *THStack_stack_22 = new TH1F("THStack_stack_22","",50,0,1);
   THStack_stack_22->SetMinimum(0.02555063);
   THStack_stack_22->SetMaximum(145598.3);
   THStack_stack_22->SetDirectory(0);
   THStack_stack_22->SetStats(0);
   THStack_stack_22->SetLineWidth(2);
   THStack_stack_22->SetMarkerSize(1.2);
   THStack_stack_22->GetXaxis()->SetTitle("Sphericity");
   THStack_stack_22->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_22->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_22->GetXaxis()->SetLabelColor(ci);
   THStack_stack_22->GetXaxis()->SetLabelFont(42);
   THStack_stack_22->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_22->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_22->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_22->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_22->GetXaxis()->SetTitleColor(ci);
   THStack_stack_22->GetXaxis()->SetTitleFont(42);
   THStack_stack_22->GetYaxis()->SetTitle("Number of events");
   THStack_stack_22->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_22->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_22->GetYaxis()->SetLabelColor(ci);
   THStack_stack_22->GetYaxis()->SetLabelFont(42);
   THStack_stack_22->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_22->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_22->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_22->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_22->GetYaxis()->SetTitleColor(ci);
   THStack_stack_22->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_22->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_22->GetZaxis()->SetLabelColor(ci);
   THStack_stack_22->GetZaxis()->SetLabelFont(42);
   THStack_stack_22->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_22->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_22->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_22->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_22->GetZaxis()->SetTitleColor(ci);
   THStack_stack_22->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_22);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,0.1053921);
   0->SetBinContent(2,0.5081385);
   0->SetBinContent(3,0.7452726);
   0->SetBinContent(4,0.8280814);
   0->SetBinContent(5,0.893952);
   0->SetBinContent(6,0.8600757);
   0->SetBinContent(7,0.9240642);
   0->SetBinContent(8,0.8619577);
   0->SetBinContent(9,0.781031);
   0->SetBinContent(10,0.7942051);
   0->SetBinContent(11,0.7433906);
   0->SetBinContent(12,0.7565647);
   0->SetBinContent(13,0.6586999);
   0->SetBinContent(14,0.5721271);
   0->SetBinContent(15,0.6078854);
   0->SetBinContent(16,0.4799086);
   0->SetBinContent(17,0.560835);
   0->SetBinContent(18,0.4855545);
   0->SetBinContent(19,0.4460328);
   0->SetBinContent(20,0.3745173);
   0->SetBinContent(21,0.3745173);
   0->SetBinContent(22,0.27289);
   0->SetBinContent(23,0.3331136);
   0->SetBinContent(24,0.3255857);
   0->SetBinContent(25,0.2615981);
   0->SetBinContent(26,0.276654);
   0->SetBinContent(27,0.274772);
   0->SetBinContent(28,0.2107842);
   0->SetBinContent(29,0.2277222);
   0->SetBinContent(30,0.2107842);
   0->SetBinContent(31,0.1524421);
   0->SetBinContent(32,0.1242121);
   0->SetBinContent(33,0.1449141);
   0->SetBinContent(34,0.09033605);
   0->SetBinContent(35,0.1148021);
   0->SetBinContent(36,0.06210603);
   0->SetBinContent(37,0.09410006);
   0->SetBinContent(38,0.04328601);
   0->SetBinContent(39,0.04705001);
   0->SetBinContent(40,0.01882);
   0->SetBinContent(41,0.013174);
   0->SetBinContent(42,0.005646);
   0->SetBinContent(43,0.007528);
   0->SetBinContent(44,0.001882);
   0->SetBinContent(45,0.001882);
   0->SetBinContent(46,0.001882);
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
   1->SetBinContent(1,0.1458549);
   1->SetBinContent(2,0.3971025);
   1->SetBinContent(3,0.4808523);
   1->SetBinContent(4,0.5542492);
   1->SetBinContent(5,0.5787147);
   1->SetBinContent(6,0.6229407);
   1->SetBinContent(7,0.5598951);
   1->SetBinContent(8,0.519433);
   1->SetBinContent(9,0.5363706);
   1->SetBinContent(10,0.4714422);
   1->SetBinContent(11,0.4563861);
   1->SetBinContent(12,0.4432119);
   1->SetBinContent(13,0.3923975);
   1->SetBinContent(14,0.3566392);
   1->SetBinContent(15,0.335937);
   1->SetBinContent(16,0.3048837);
   1->SetBinContent(17,0.3142938);
   1->SetBinContent(18,0.2540693);
   1->SetBinContent(19,0.2747715);
   1->SetBinContent(20,0.2324263);
   1->SetBinContent(21,0.2023146);
   1->SetBinContent(22,0.2041965);
   1->SetBinContent(23,0.2023146);
   1->SetBinContent(24,0.1787897);
   1->SetBinContent(25,0.1618518);
   1->SetBinContent(26,0.1458549);
   1->SetBinContent(27,0.1627928);
   1->SetBinContent(28,0.1289171);
   1->SetBinContent(29,0.1129201);
   1->SetBinContent(30,0.09692308);
   1->SetBinContent(31,0.09598207);
   1->SetBinContent(32,0.1044511);
   1->SetBinContent(33,0.08280806);
   1->SetBinContent(34,0.06775205);
   1->SetBinContent(35,0.06210604);
   1->SetBinContent(36,0.04987303);
   1->SetBinContent(37,0.03575802);
   1->SetBinContent(38,0.02823001);
   1->SetBinContent(39,0.02352501);
   1->SetBinContent(40,0.008469);
   1->SetBinContent(41,0.00941);
   1->SetBinContent(42,0.004705);
   1->SetBinContent(43,0.001882);
   1->SetBinContent(44,0.003764);
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
   2->SetBinContent(1,0.3218219);
   2->SetBinContent(2,0.9645159);
   2->SetBinContent(3,1.276938);
   2->SetBinContent(4,1.384217);
   2->SetBinContent(5,1.46891);
   2->SetBinContent(6,1.506552);
   2->SetBinContent(7,1.37857);
   2->SetBinContent(8,1.328695);
   2->SetBinContent(9,1.302346);
   2->SetBinContent(10,1.195068);
   2->SetBinContent(11,1.088731);
   2->SetBinContent(12,1.025681);
   2->SetBinContent(13,0.9786305);
   2->SetBinContent(14,0.9193489);
   2->SetBinContent(15,0.8685361);
   2->SetBinContent(16,0.8092544);
   2->SetBinContent(17,0.7772611);
   2->SetBinContent(18,0.7113926);
   2->SetBinContent(19,0.6643437);
   2->SetBinContent(20,0.6652847);
   2->SetBinContent(21,0.5608361);
   2->SetBinContent(22,0.5269608);
   2->SetBinContent(23,0.5024954);
   2->SetBinContent(24,0.4827343);
   2->SetBinContent(25,0.4629731);
   2->SetBinContent(26,0.4130997);
   2->SetBinContent(27,0.3679313);
   2->SetBinContent(28,0.3434651);
   2->SetBinContent(29,0.2898276);
   2->SetBinContent(30,0.2568923);
   2->SetBinContent(31,0.2399543);
   2->SetBinContent(32,0.1938456);
   2->SetBinContent(33,0.1863177);
   2->SetBinContent(34,0.1834947);
   2->SetBinContent(35,0.132681);
   2->SetBinContent(36,0.09786408);
   2->SetBinContent(37,0.1035101);
   2->SetBinContent(38,0.08469006);
   2->SetBinContent(39,0.05551904);
   2->SetBinContent(40,0.03011201);
   2->SetBinContent(41,0.01882);
   2->SetBinContent(42,0.015997);
   2->SetBinContent(43,0.000941);
   2->SetBinContent(44,0.003764);
   2->SetBinContent(45,0.001882);
   2->SetBinContent(46,0.000941);
   2->SetBinContent(47,0.000941);
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
   3->SetBinContent(1,1.277025);
   3->SetBinContent(2,3.55109);
   3->SetBinContent(3,5.039781);
   3->SetBinContent(4,5.388049);
   3->SetBinContent(5,5.620227);
   3->SetBinContent(6,5.88655);
   3->SetBinContent(7,5.517796);
   3->SetBinContent(8,5.128555);
   3->SetBinContent(9,5.312932);
   3->SetBinContent(10,4.862232);
   3->SetBinContent(11,4.889547);
   3->SetBinContent(12,4.397875);
   3->SetBinContent(13,4.076922);
   3->SetBinContent(14,4.165696);
   3->SetBinContent(15,3.885712);
   3->SetBinContent(16,3.305245);
   3->SetBinContent(17,3.387193);
   3->SetBinContent(18,3.660354);
   3->SetBinContent(19,3.025255);
   3->SetBinContent(20,2.902333);
   3->SetBinContent(21,2.806726);
   3->SetBinContent(22,2.793068);
   3->SetBinContent(23,2.451617);
   3->SetBinContent(24,2.246747);
   3->SetBinContent(25,2.144311);
   3->SetBinContent(26,2.062363);
   3->SetBinContent(27,2.028218);
   3->SetBinContent(28,1.837005);
   3->SetBinContent(29,1.495554);
   3->SetBinContent(30,1.420435);
   3->SetBinContent(31,1.372632);
   3->SetBinContent(32,1.058497);
   3->SetBinContent(33,1.154103);
   3->SetBinContent(34,1.1063);
   3->SetBinContent(35,0.7853357);
   3->SetBinContent(36,0.7238744);
   3->SetBinContent(37,0.6077811);
   3->SetBinContent(38,0.3960818);
   3->SetBinContent(39,0.2321859);
   3->SetBinContent(40,0.3209628);
   3->SetBinContent(41,0.06829);
   3->SetBinContent(42,0.054632);
   3->SetBinContent(43,0.034145);
   3->SetBinContent(44,0.013658);
   3->SetBinContent(45,0.020487);
   3->SetBinContent(46,0.020487);
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
   4->SetBinContent(1,2.356914);
   4->SetBinContent(2,5.308304);
   4->SetBinContent(3,7.307463);
   4->SetBinContent(4,7.944037);
   4->SetBinContent(5,8.438606);
   4->SetBinContent(6,8.149228);
   4->SetBinContent(7,8.08083);
   4->SetBinContent(8,8.128182);
   4->SetBinContent(9,7.460031);
   4->SetBinContent(10,7.265376);
   4->SetBinContent(11,6.681411);
   4->SetBinContent(12,6.960241);
   4->SetBinContent(13,6.523582);
   4->SetBinContent(14,6.002749);
   4->SetBinContent(15,5.797572);
   4->SetBinContent(16,5.555569);
   4->SetBinContent(17,5.213607);
   4->SetBinContent(18,4.976865);
   4->SetBinContent(19,4.619121);
   4->SetBinContent(20,4.592816);
   4->SetBinContent(21,4.093026);
   4->SetBinContent(22,4.292942);
   4->SetBinContent(23,3.693194);
   4->SetBinContent(24,3.666889);
   4->SetBinContent(25,3.409103);
   4->SetBinContent(26,3.298623);
   4->SetBinContent(27,2.814616);
   4->SetBinContent(28,2.756746);
   4->SetBinContent(29,2.572613);
   4->SetBinContent(30,2.304305);
   4->SetBinContent(31,2.225391);
   4->SetBinContent(32,1.893951);
   4->SetBinContent(33,1.66247);
   4->SetBinContent(34,1.530946);
   4->SetBinContent(35,1.341552);
   4->SetBinContent(36,1.125853);
   4->SetBinContent(37,0.8470215);
   4->SetBinContent(38,0.6471033);
   4->SetBinContent(39,0.4787512);
   4->SetBinContent(40,0.2840941);
   4->SetBinContent(41,0.189396);
   4->SetBinContent(42,0.152569);
   4->SetBinContent(43,0.042088);
   4->SetBinContent(44,0.026305);
   4->SetBinContent(45,0.010522);
   4->SetBinContent(46,0.010522);
   4->SetBinContent(47,0.010522);
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
   5->SetBinContent(1,5.332456);
   5->SetBinContent(2,15.63748);
   5->SetBinContent(3,21.09415);
   5->SetBinContent(4,23.67368);
   5->SetBinContent(5,25.19907);
   5->SetBinContent(6,24.78982);
   5->SetBinContent(7,23.8969);
   5->SetBinContent(8,23.62407);
   5->SetBinContent(9,23.27682);
   5->SetBinContent(10,21.85064);
   5->SetBinContent(11,21.4786);
   5->SetBinContent(12,20.05241);
   5->SetBinContent(13,18.87426);
   5->SetBinContent(14,18.22938);
   5->SetBinContent(15,17.33647);
   5->SetBinContent(16,16.71639);
   5->SetBinContent(17,15.14145);
   5->SetBinContent(18,15.51347);
   5->SetBinContent(19,13.69058);
   5->SetBinContent(20,13.25656);
   5->SetBinContent(21,13.49217);
   5->SetBinContent(22,12.84734);
   5->SetBinContent(23,11.65688);
   5->SetBinContent(24,11.03685);
   5->SetBinContent(25,10.34241);
   5->SetBinContent(26,9.561172);
   5->SetBinContent(27,8.990744);
   5->SetBinContent(28,7.750671);
   5->SetBinContent(29,7.316632);
   5->SetBinContent(30,6.510561);
   5->SetBinContent(31,5.791296);
   5->SetBinContent(32,5.890505);
   5->SetBinContent(33,5.38206);
   5->SetBinContent(34,4.563587);
   5->SetBinContent(35,4.067543);
   5->SetBinContent(36,3.24907);
   5->SetBinContent(37,2.418196);
   5->SetBinContent(38,2.194977);
   5->SetBinContent(39,1.388911);
   5->SetBinContent(40,0.7812623);
   5->SetBinContent(41,0.6448515);
   5->SetBinContent(42,0.5084407);
   5->SetBinContent(43,0.223218);
   5->SetBinContent(44,0.037203);
   5->SetBinContent(45,0.049604);
   5->SetBinContent(46,0.074406);
   5->SetBinContent(48,0.012401);
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
   6->SetBinContent(1,234.785);
   6->SetBinContent(2,618.2648);
   6->SetBinContent(3,765.0331);
   6->SetBinContent(4,826.9142);
   6->SetBinContent(5,801.4784);
   6->SetBinContent(6,779.4594);
   6->SetBinContent(7,719.2487);
   6->SetBinContent(8,663.2899);
   6->SetBinContent(9,617.8092);
   6->SetBinContent(10,561.319);
   6->SetBinContent(11,508.247);
   6->SetBinContent(12,486.3127);
   6->SetBinContent(13,442.52);
   6->SetBinContent(14,407.1519);
   6->SetBinContent(15,373.3776);
   6->SetBinContent(16,339.2998);
   6->SetBinContent(17,313.3429);
   6->SetBinContent(18,292.0158);
   6->SetBinContent(19,286.5512);
   6->SetBinContent(20,248.1456);
   6->SetBinContent(21,235.6201);
   6->SetBinContent(22,214.1368);
   6->SetBinContent(23,197.512);
   6->SetBinContent(24,186.6565);
   6->SetBinContent(25,177.6989);
   6->SetBinContent(26,160.8463);
   6->SetBinContent(27,139.9704);
   6->SetBinContent(28,131.9236);
   6->SetBinContent(29,120.917);
   6->SetBinContent(30,109);
   6->SetBinContent(31,98.29739);
   6->SetBinContent(32,87.06348);
   6->SetBinContent(33,75.29823);
   6->SetBinContent(34,63.91249);
   6->SetBinContent(35,56.24611);
   6->SetBinContent(36,48.50381);
   6->SetBinContent(37,38.02894);
   6->SetBinContent(38,29.60345);
   6->SetBinContent(39,18.90059);
   6->SetBinContent(40,11.84132);
   6->SetBinContent(41,7.362875);
   6->SetBinContent(42,5.46523);
   6->SetBinContent(43,3.036241);
   6->SetBinContent(44,1.13859);
   6->SetBinContent(45,0.455436);
   6->SetBinContent(46,0.227718);
   6->SetBinContent(48,0.075906);
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
   7->SetBinContent(1,212.6277);
   7->SetBinContent(2,393.8288);
   7->SetBinContent(3,399.7859);
   7->SetBinContent(4,353.448);
   7->SetBinContent(5,328.448);
   7->SetBinContent(6,301.2019);
   7->SetBinContent(7,271.8562);
   7->SetBinContent(8,258.3308);
   7->SetBinContent(9,249.7859);
   7->SetBinContent(10,228.8386);
   7->SetBinContent(11,207.6472);
   7->SetBinContent(12,201.5437);
   7->SetBinContent(13,181.6218);
   7->SetBinContent(14,169.6101);
   7->SetBinContent(15,161.3093);
   7->SetBinContent(16,148.321);
   7->SetBinContent(17,143.3894);
   7->SetBinContent(18,134.1609);
   7->SetBinContent(19,126.2998);
   7->SetBinContent(20,120.3437);
   7->SetBinContent(21,113.46);
   7->SetBinContent(22,104.477);
   7->SetBinContent(23,100.1808);
   7->SetBinContent(24,96.03109);
   7->SetBinContent(25,88.31745);
   7->SetBinContent(26,84.21653);
   7->SetBinContent(27,76.74699);
   7->SetBinContent(28,68.00813);
   7->SetBinContent(29,62.19849);
   7->SetBinContent(30,58.78105);
   7->SetBinContent(31,52.33675);
   7->SetBinContent(32,48.33347);
   7->SetBinContent(33,41.44978);
   7->SetBinContent(34,37.20239);
   7->SetBinContent(35,32.32034);
   7->SetBinContent(36,25.72933);
   7->SetBinContent(37,19.67535);
   7->SetBinContent(38,14.64665);
   7->SetBinContent(39,10.74085);
   7->SetBinContent(40,7.860334);
   7->SetBinContent(41,3.417539);
   7->SetBinContent(42,2.245812);
   7->SetBinContent(43,1.171728);
   7->SetBinContent(44,1.171728);
   7->SetBinContent(45,0.48822);
   7->SetBinContent(46,0.292932);
   7->SetBinContent(48,0.048822);
   7->SetBinContent(49,0.048822);
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
   8->SetBinContent(1,39.18302);
   8->SetBinContent(2,42.2648);
   8->SetBinContent(3,37.422);
   8->SetBinContent(4,28.32337);
   8->SetBinContent(5,19.37142);
   8->SetBinContent(6,17.90388);
   8->SetBinContent(7,10.85972);
   8->SetBinContent(8,11.887);
   8->SetBinContent(9,9.245438);
   8->SetBinContent(10,6.603883);
   8->SetBinContent(11,7.777905);
   8->SetBinContent(12,6.45713);
   8->SetBinContent(13,6.750636);
   8->SetBinContent(14,3.962332);
   8->SetBinContent(15,4.842849);
   8->SetBinContent(16,3.962332);
   8->SetBinContent(17,3.228566);
   8->SetBinContent(18,2.494801);
   8->SetBinContent(19,2.641554);
   8->SetBinContent(20,2.494801);
   8->SetBinContent(21,2.93506);
   8->SetBinContent(22,1.761036);
   8->SetBinContent(23,1.761036);
   8->SetBinContent(24,2.348048);
   8->SetBinContent(25,0.880518);
   8->SetBinContent(26,2.348048);
   8->SetBinContent(27,1.027271);
   8->SetBinContent(28,0.880518);
   8->SetBinContent(29,1.907789);
   8->SetBinContent(30,0.880518);
   8->SetBinContent(31,0.880518);
   8->SetBinContent(32,0.293506);
   8->SetBinContent(33,1.320777);
   8->SetBinContent(34,0.880518);
   8->SetBinContent(35,0.587012);
   8->SetBinContent(36,0.146753);
   8->SetBinContent(37,0.293506);
   8->SetBinContent(38,0.146753);
   8->SetBinContent(39,0.146753);
   8->SetBinContent(40,0.293506);
   8->SetBinContent(43,0.146753);
   8->SetBinContent(44,0.146753);
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
   9->SetBinContent(1,643.5975);
   9->SetBinContent(2,1661.599);
   9->SetBinContent(3,1863.321);
   9->SetBinContent(4,1636.919);
   9->SetBinContent(5,1372.812);
   9->SetBinContent(6,1109.048);
   9->SetBinContent(7,905.2267);
   9->SetBinContent(8,767.3828);
   9->SetBinContent(9,649.7696);
   9->SetBinContent(10,555.3019);
   9->SetBinContent(11,503.3532);
   9->SetBinContent(12,442.3178);
   9->SetBinContent(13,390.8835);
   9->SetBinContent(14,357.7941);
   9->SetBinContent(15,322.133);
   9->SetBinContent(16,286.8147);
   9->SetBinContent(17,266.241);
   9->SetBinContent(18,236.9251);
   9->SetBinContent(19,235.2108);
   9->SetBinContent(20,209.1531);
   9->SetBinContent(21,195.4385);
   9->SetBinContent(22,168.1807);
   9->SetBinContent(23,171.2665);
   9->SetBinContent(24,157.5519);
   9->SetBinContent(25,137.8371);
   9->SetBinContent(26,127.8941);
   9->SetBinContent(27,112.6359);
   9->SetBinContent(28,109.8928);
   9->SetBinContent(29,88.11995);
   9->SetBinContent(30,87.26275);
   9->SetBinContent(31,79.71938);
   9->SetBinContent(32,73.3761);
   9->SetBinContent(33,62.23249);
   9->SetBinContent(34,54.51769);
   9->SetBinContent(35,40.63104);
   9->SetBinContent(36,38.40232);
   9->SetBinContent(37,29.83033);
   9->SetBinContent(38,20.57267);
   9->SetBinContent(39,11.31498);
   9->SetBinContent(40,7.886198);
   9->SetBinContent(41,4.457414);
   9->SetBinContent(42,2.914463);
   9->SetBinContent(43,1.885829);
   9->SetBinContent(44,1.200073);
   9->SetBinContent(45,0.514317);
   9->SetBinContent(46,0.171439);
   9->SetBinContent(47,0.342878);
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
   10->SetBinContent(1,1014.803);
   10->SetBinContent(2,2416.779);
   10->SetBinContent(3,2834.328);
   10->SetBinContent(4,2880.625);
   10->SetBinContent(5,2818.896);
   10->SetBinContent(6,2655.63);
   10->SetBinContent(7,2532.11);
   10->SetBinContent(8,2383.584);
   10->SetBinContent(9,2233.609);
   10->SetBinContent(10,2103.727);
   10->SetBinContent(11,1999.324);
   10->SetBinContent(12,1870.074);
   10->SetBinContent(13,1767.457);
   10->SetBinContent(14,1689.263);
   10->SetBinContent(15,1588.539);
   10->SetBinContent(16,1498.985);
   10->SetBinContent(17,1415.427);
   10->SetBinContent(18,1349.035);
   10->SetBinContent(19,1274.376);
   10->SetBinContent(20,1207.605);
   10->SetBinContent(21,1131.431);
   10->SetBinContent(22,1083.277);
   10->SetBinContent(23,1007.797);
   10->SetBinContent(24,950.9982);
   10->SetBinContent(25,897.5437);
   10->SetBinContent(26,847.4972);
   10->SetBinContent(27,782.4304);
   10->SetBinContent(28,726.6409);
   10->SetBinContent(29,676.2157);
   10->SetBinContent(30,619.795);
   10->SetBinContent(31,558.01);
   10->SetBinContent(32,520.0176);
   10->SetBinContent(33,454.8522);
   10->SetBinContent(34,412.3364);
   10->SetBinContent(35,336.4514);
   10->SetBinContent(36,291.097);
   10->SetBinContent(37,226.5592);
   10->SetBinContent(38,168.0069);
   10->SetBinContent(39,117.6583);
   10->SetBinContent(40,78.9226);
   10->SetBinContent(41,46.93726);
   10->SetBinContent(42,32.49023);
   10->SetBinContent(43,19.36803);
   10->SetBinContent(44,11.6713);
   10->SetBinContent(45,5.173212);
   10->SetBinContent(46,2.018815);
   10->SetBinContent(47,0.567792);
   10->SetBinContent(48,0.126176);
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
   11->SetBinContent(1,1170.709);
   11->SetBinContent(2,1068.271);
   11->SetBinContent(3,1097.539);
   11->SetBinContent(4,760.9604);
   11->SetBinContent(5,936.5667);
   11->SetBinContent(6,878.0312);
   11->SetBinContent(7,643.8896);
   11->SetBinContent(8,512.185);
   11->SetBinContent(9,380.4803);
   11->SetBinContent(10,497.5511);
   11->SetBinContent(11,380.4803);
   11->SetBinContent(12,248.7757);
   11->SetBinContent(13,482.9173);
   11->SetBinContent(14,87.80315);
   11->SetBinContent(15,219.5079);
   11->SetBinContent(16,160.9725);
   11->SetBinContent(17,160.9725);
   11->SetBinContent(18,278.0434);
   11->SetBinContent(19,146.3386);
   11->SetBinContent(20,160.9725);
   11->SetBinContent(21,29.26772);
   11->SetBinContent(22,160.9725);
   11->SetBinContent(23,146.3386);
   11->SetBinContent(24,102.437);
   11->SetBinContent(25,29.26772);
   11->SetBinContent(26,43.90158);
   11->SetBinContent(27,102.437);
   11->SetBinContent(28,29.26772);
   11->SetBinContent(29,14.63386);
   11->SetBinContent(30,43.90158);
   11->SetBinContent(31,43.90158);
   11->SetBinContent(32,73.1693);
   11->SetBinContent(34,29.26772);
   11->SetBinContent(35,14.63386);
   11->SetBinContent(36,14.63386);
   11->SetBinContent(37,29.26772);
   11->SetBinContent(38,14.63386);
   11->SetBinContent(39,14.63386);
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
   12->SetBinContent(1,14685.31);
   12->SetBinContent(2,15915.99);
   12->SetBinContent(3,9768.899);
   12->SetBinContent(4,6019.911);
   12->SetBinContent(5,4047.154);
   12->SetBinContent(6,2480.308);
   12->SetBinContent(7,1896.706);
   12->SetBinContent(8,1160.859);
   12->SetBinContent(9,945.18);
   12->SetBinContent(10,773.9053);
   12->SetBinContent(11,583.6002);
   12->SetBinContent(12,520.1651);
   12->SetBinContent(13,463.0738);
   12->SetBinContent(14,425.0129);
   12->SetBinContent(15,304.4869);
   12->SetBinContent(16,266.426);
   12->SetBinContent(17,266.426);
   12->SetBinContent(18,260.0826);
   12->SetBinContent(19,209.3347);
   12->SetBinContent(20,158.5869);
   12->SetBinContent(21,164.9304);
   12->SetBinContent(22,145.9);
   12->SetBinContent(23,88.80869);
   12->SetBinContent(24,101.4956);
   12->SetBinContent(25,101.4956);
   12->SetBinContent(26,114.1826);
   12->SetBinContent(27,133.213);
   12->SetBinContent(28,50.74783);
   12->SetBinContent(29,50.74783);
   12->SetBinContent(30,50.74783);
   12->SetBinContent(31,82.46522);
   12->SetBinContent(32,25.37391);
   12->SetBinContent(33,50.74783);
   12->SetBinContent(34,25.37391);
   12->SetBinContent(35,12.68696);
   12->SetBinContent(37,31.71739);
   12->SetBinContent(38,6.343478);
   12->SetBinContent(40,6.343478);
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
   13->SetBinContent(1,8728.479);
   13->SetBinContent(2,8646.904);
   13->SetBinContent(3,9707.369);
   13->SetBinContent(4,8483.756);
   13->SetBinContent(5,6281.24);
   13->SetBinContent(6,5873.367);
   13->SetBinContent(7,5873.367);
   13->SetBinContent(8,4160.298);
   13->SetBinContent(9,3018.255);
   13->SetBinContent(10,3099.83);
   13->SetBinContent(11,2855.106);
   13->SetBinContent(12,2039.362);
   13->SetBinContent(13,1957.787);
   13->SetBinContent(14,2284.085);
   13->SetBinContent(15,1713.064);
   13->SetBinContent(16,1794.638);
   13->SetBinContent(17,1305.192);
   13->SetBinContent(18,1060.468);
   13->SetBinContent(19,652.5959);
   13->SetBinContent(20,652.5959);
   13->SetBinContent(21,1060.468);
   13->SetBinContent(22,978.8938);
   13->SetBinContent(23,571.0215);
   13->SetBinContent(24,652.5959);
   13->SetBinContent(25,163.149);
   13->SetBinContent(26,489.447);
   13->SetBinContent(27,407.8725);
   13->SetBinContent(28,244.7235);
   13->SetBinContent(29,407.8725);
   13->SetBinContent(30,407.8725);
   13->SetBinContent(31,81.57449);
   13->SetBinContent(32,244.7235);
   13->SetBinContent(33,326.298);
   13->SetBinContent(36,81.57449);
   13->SetBinContent(38,81.57449);
   13->SetBinContent(39,81.57449);
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
   14->SetBinContent(1,7083.706);
   14->SetBinContent(2,6535.721);
   14->SetBinContent(3,4605.688);
   14->SetBinContent(4,4110.084);
   14->SetBinContent(5,3155.084);
   14->SetBinContent(6,2470.062);
   14->SetBinContent(7,2300.821);
   14->SetBinContent(8,1829.372);
   14->SetBinContent(9,1595.665);
   14->SetBinContent(10,1474.783);
   14->SetBinContent(11,1144.37);
   14->SetBinContent(12,1152.429);
   14->SetBinContent(13,1027.517);
   14->SetBinContent(14,850.2202);
   14->SetBinContent(15,838.1318);
   14->SetBinContent(16,680.9821);
   14->SetBinContent(17,745.4537);
   14->SetBinContent(18,556.0682);
   14->SetBinContent(19,564.1271);
   14->SetBinContent(20,463.3902);
   14->SetBinContent(21,370.7121);
   14->SetBinContent(22,402.948);
   14->SetBinContent(23,435.1838);
   14->SetBinContent(24,362.6532);
   14->SetBinContent(25,286.093);
   14->SetBinContent(26,302.211);
   14->SetBinContent(27,290.1225);
   14->SetBinContent(28,221.6214);
   14->SetBinContent(29,274.0046);
   14->SetBinContent(30,112.8254);
   14->SetBinContent(31,165.2087);
   14->SetBinContent(32,92.67803);
   14->SetBinContent(33,137.0023);
   14->SetBinContent(34,124.9139);
   14->SetBinContent(35,112.8254);
   14->SetBinContent(36,52.38324);
   14->SetBinContent(37,60.4422);
   14->SetBinContent(38,44.32428);
   14->SetBinContent(39,16.11792);
   14->SetBinContent(40,16.11792);
   14->SetBinContent(41,4.029479);
   14->SetBinContent(42,8.058958);
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
   15->SetBinContent(1,741.6677);
   15->SetBinContent(2,536.9365);
   15->SetBinContent(3,366.9709);
   15->SetBinContent(4,274.2624);
   15->SetBinContent(5,189.2796);
   15->SetBinContent(6,139.0625);
   15->SetBinContent(7,135.1996);
   15->SetBinContent(8,131.3368);
   15->SetBinContent(9,81.11978);
   15->SetBinContent(10,112.0226);
   15->SetBinContent(11,88.84547);
   15->SetBinContent(12,96.57117);
   15->SetBinContent(13,50.21701);
   15->SetBinContent(14,30.90277);
   15->SetBinContent(15,54.07985);
   15->SetBinContent(16,46.35416);
   15->SetBinContent(17,23.17708);
   15->SetBinContent(18,34.76562);
   15->SetBinContent(19,34.76562);
   15->SetBinContent(20,30.90277);
   15->SetBinContent(21,7.725694);
   15->SetBinContent(22,19.31424);
   15->SetBinContent(23,7.725694);
   15->SetBinContent(24,23.17708);
   15->SetBinContent(25,23.17708);
   15->SetBinContent(26,7.725694);
   15->SetBinContent(27,19.31424);
   15->SetBinContent(28,7.725694);
   15->SetBinContent(29,15.45139);
   15->SetBinContent(30,7.725694);
   15->SetBinContent(31,7.725694);
   15->SetBinContent(32,11.58854);
   15->SetBinContent(33,3.862847);
   15->SetBinContent(34,3.862847);
   15->SetBinContent(35,3.862847);
   15->SetBinContent(38,3.862847);
   15->SetBinContent(39,3.862847);
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
   16->SetBinContent(1,20606.5);
   16->SetBinContent(2,9936.509);
   16->SetBinContent(3,5572.353);
   16->SetBinContent(4,3840.251);
   16->SetBinContent(5,2484.157);
   16->SetBinContent(6,2243.759);
   16->SetBinContent(7,1725.971);
   16->SetBinContent(8,1423.926);
   16->SetBinContent(9,1171.194);
   16->SetBinContent(10,1010.926);
   16->SetBinContent(11,838.3285);
   16->SetBinContent(12,875.3136);
   16->SetBinContent(13,789.015);
   16->SetBinContent(14,622.582);
   16->SetBinContent(15,462.3132);
   16->SetBinContent(16,622.582);
   16->SetBinContent(17,480.8058);
   16->SetBinContent(18,449.9849);
   16->SetBinContent(19,425.3281);
   16->SetBinContent(20,295.8802);
   16->SetBinContent(21,258.8951);
   16->SetBinContent(22,326.7012);
   16->SetBinContent(23,228.0743);
   16->SetBinContent(24,166.4326);
   16->SetBinContent(25,234.2384);
   16->SetBinContent(26,184.9251);
   16->SetBinContent(27,191.0893);
   16->SetBinContent(28,154.1042);
   16->SetBinContent(29,123.2834);
   16->SetBinContent(30,135.6117);
   16->SetBinContent(31,104.7909);
   16->SetBinContent(32,73.97004);
   16->SetBinContent(33,104.7909);
   16->SetBinContent(34,80.13421);
   16->SetBinContent(35,55.47753);
   16->SetBinContent(36,30.82085);
   16->SetBinContent(37,43.14919);
   16->SetBinContent(38,24.65668);
   16->SetBinContent(39,12.32834);
   16->SetBinContent(41,6.16417);
   16->SetBinContent(42,6.16417);
   16->SetBinContent(43,6.16417);
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
   17->SetBinContent(1,12063.93);
   17->SetBinContent(2,10658.45);
   17->SetBinContent(3,5575.209);
   17->SetBinContent(4,3302.956);
   17->SetBinContent(5,2553.346);
   17->SetBinContent(6,2436.22);
   17->SetBinContent(7,1335.235);
   17->SetBinContent(8,1499.211);
   17->SetBinContent(9,1054.133);
   17->SetBinContent(10,866.7314);
   17->SetBinContent(11,913.5817);
   17->SetBinContent(12,538.779);
   17->SetBinContent(13,632.4797);
   17->SetBinContent(14,726.1804);
   17->SetBinContent(15,609.0545);
   17->SetBinContent(16,632.4797);
   17->SetBinContent(17,609.0545);
   17->SetBinContent(18,187.4014);
   17->SetBinContent(19,445.0783);
   17->SetBinContent(20,304.5273);
   17->SetBinContent(21,257.6769);
   17->SetBinContent(22,304.5273);
   17->SetBinContent(23,93.70071);
   17->SetBinContent(24,117.1259);
   17->SetBinContent(25,234.2517);
   17->SetBinContent(26,187.4014);
   17->SetBinContent(27,210.8266);
   17->SetBinContent(28,93.70071);
   17->SetBinContent(29,70.27553);
   17->SetBinContent(30,93.70071);
   17->SetBinContent(31,163.9762);
   17->SetBinContent(32,23.42518);
   17->SetBinContent(33,93.70071);
   17->SetBinContent(34,70.27553);
   17->SetBinContent(35,46.85035);
   17->SetBinContent(37,46.85035);
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
