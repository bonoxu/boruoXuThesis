{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:02:48 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.227068,1.31746,5.861776);
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
   
   TH1F *THStack_stack_21 = new TH1F("THStack_stack_21","",50,0,1);
   THStack_stack_21->SetMinimum(0.02564035);
   THStack_stack_21->SetMaximum(136354.3);
   THStack_stack_21->SetDirectory(0);
   THStack_stack_21->SetStats(0);
   THStack_stack_21->SetLineWidth(2);
   THStack_stack_21->SetMarkerSize(1.2);
   THStack_stack_21->GetXaxis()->SetTitle("Highest C tag of W* jets");
   THStack_stack_21->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_21->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_21->GetXaxis()->SetLabelColor(ci);
   THStack_stack_21->GetXaxis()->SetLabelFont(42);
   THStack_stack_21->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_21->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_21->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_21->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_21->GetXaxis()->SetTitleColor(ci);
   THStack_stack_21->GetXaxis()->SetTitleFont(42);
   THStack_stack_21->GetYaxis()->SetTitle("Number of events");
   THStack_stack_21->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_21->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_21->GetYaxis()->SetLabelColor(ci);
   THStack_stack_21->GetYaxis()->SetLabelFont(42);
   THStack_stack_21->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_21->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_21->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_21->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_21->GetYaxis()->SetTitleColor(ci);
   THStack_stack_21->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_21->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_21->GetZaxis()->SetLabelColor(ci);
   THStack_stack_21->GetZaxis()->SetLabelFont(42);
   THStack_stack_21->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_21->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_21->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_21->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_21->GetZaxis()->SetTitleColor(ci);
   THStack_stack_21->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_21);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,0.05457802);
   0->SetBinContent(2,0.013174);
   0->SetBinContent(3,0.007528);
   0->SetBinContent(4,0.007528);
   0->SetBinContent(5,0.007528);
   0->SetBinContent(6,0.05081402);
   0->SetBinContent(7,0.1260941);
   0->SetBinContent(8,0.2126662);
   0->SetBinContent(9,0.4065111);
   0->SetBinContent(10,0.5664811);
   0->SetBinContent(11,0.7019863);
   0->SetBinContent(12,0.7132784);
   0->SetBinContent(13,0.8299634);
   0->SetBinContent(14,0.9259462);
   0->SetBinContent(15,0.9598225);
   0->SetBinContent(16,1.085915);
   0->SetBinContent(17,0.9805247);
   0->SetBinContent(18,0.9108901);
   0->SetBinContent(19,1.172485);
   0->SetBinContent(20,0.6944582);
   0->SetBinContent(21,0.4836726);
   0->SetBinContent(22,0.4309769);
   0->SetBinContent(23,0.3500515);
   0->SetBinContent(24,0.3575794);
   0->SetBinContent(25,0.3387596);
   0->SetBinContent(26,0.3368776);
   0->SetBinContent(27,0.2935919);
   0->SetBinContent(28,0.2540702);
   0->SetBinContent(29,0.2860639);
   0->SetBinContent(30,0.2371322);
   0->SetBinContent(31,0.2314862);
   0->SetBinContent(32,0.2183122);
   0->SetBinContent(33,0.1976102);
   0->SetBinContent(34,0.2145482);
   0->SetBinContent(35,0.1637341);
   0->SetBinContent(36,0.1449141);
   0->SetBinContent(37,0.1298581);
   0->SetBinContent(38,0.1355041);
   0->SetBinContent(39,0.1825541);
   0->SetBinContent(40,0.1204481);
   0->SetBinContent(41,0.1449141);
   0->SetBinContent(42,0.09410006);
   0->SetBinContent(43,0.1317401);
   0->SetBinContent(44,0.1091561);
   0->SetBinContent(45,0.1411501);
   0->SetBinContent(46,0.1580881);
   0->SetBinContent(47,0.1373861);
   0->SetBinContent(48,0.1449141);
   0->SetBinContent(49,0.07528004);
   0->SetBinContent(50,0.007528);
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
   1->SetBinContent(1,0.1910226);
   1->SetBinContent(2,0.03764002);
   1->SetBinContent(3,0.01882);
   1->SetBinContent(4,0.015056);
   1->SetBinContent(5,0.02352501);
   1->SetBinContent(6,0.03952202);
   1->SetBinContent(7,0.06869305);
   1->SetBinContent(8,0.1279761);
   1->SetBinContent(9,0.2098425);
   1->SetBinContent(10,0.2832405);
   1->SetBinContent(11,0.3208809);
   1->SetBinContent(12,0.3952205);
   1->SetBinContent(13,0.4300378);
   1->SetBinContent(14,0.4987314);
   1->SetBinContent(15,0.4883803);
   1->SetBinContent(16,0.5457804);
   1->SetBinContent(17,0.606003);
   1->SetBinContent(18,0.5937703);
   1->SetBinContent(19,0.7866709);
   1->SetBinContent(20,0.4874393);
   1->SetBinContent(21,0.3180578);
   1->SetBinContent(22,0.3114708);
   1->SetBinContent(23,0.3001787);
   1->SetBinContent(24,0.2747715);
   1->SetBinContent(25,0.2465412);
   1->SetBinContent(26,0.2173705);
   1->SetBinContent(27,0.2220754);
   1->SetBinContent(28,0.2305444);
   1->SetBinContent(29,0.2277214);
   1->SetBinContent(30,0.2051375);
   1->SetBinContent(31,0.1806717);
   1->SetBinContent(32,0.1665568);
   1->SetBinContent(33,0.1637338);
   1->SetBinContent(34,0.1486779);
   1->SetBinContent(35,0.1035101);
   1->SetBinContent(36,0.1204481);
   1->SetBinContent(37,0.08186706);
   1->SetBinContent(38,0.08469006);
   1->SetBinContent(39,0.09315907);
   1->SetBinContent(40,0.08092606);
   1->SetBinContent(41,0.07245705);
   1->SetBinContent(42,0.07151605);
   1->SetBinContent(43,0.08374906);
   1->SetBinContent(44,0.05834204);
   1->SetBinContent(45,0.04987303);
   1->SetBinContent(46,0.05740104);
   1->SetBinContent(47,0.03011201);
   1->SetBinContent(48,0.02728901);
   1->SetBinContent(49,0.006587);
   1->SetBinContent(50,0.003764);
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
   2->SetBinContent(1,0.4102767);
   2->SetBinContent(2,0.019761);
   2->SetBinContent(3,0.015997);
   2->SetBinContent(4,0.02258401);
   2->SetBinContent(5,0.03858102);
   2->SetBinContent(6,0.08186706);
   2->SetBinContent(7,0.1562059);
   2->SetBinContent(8,0.3152348);
   2->SetBinContent(9,0.5815376);
   2->SetBinContent(10,0.8167822);
   2->SetBinContent(11,1.010625);
   2->SetBinContent(12,1.194127);
   2->SetBinContent(13,1.230827);
   2->SetBinContent(14,1.376688);
   2->SetBinContent(15,1.560191);
   2->SetBinContent(16,1.64112);
   2->SetBinContent(17,1.600655);
   2->SetBinContent(18,1.662764);
   2->SetBinContent(19,2.12199);
   2->SetBinContent(20,1.290113);
   2->SetBinContent(21,0.7923168);
   2->SetBinContent(22,0.6793994);
   2->SetBinContent(23,0.6163538);
   2->SetBinContent(24,0.5796556);
   2->SetBinContent(25,0.5401345);
   2->SetBinContent(26,0.5260199);
   2->SetBinContent(27,0.5072003);
   2->SetBinContent(28,0.454504);
   2->SetBinContent(29,0.4130997);
   2->SetBinContent(30,0.4262738);
   2->SetBinContent(31,0.3613442);
   2->SetBinContent(32,0.3538162);
   2->SetBinContent(33,0.2672434);
   2->SetBinContent(34,0.2446593);
   2->SetBinContent(35,0.2352493);
   2->SetBinContent(36,0.2230164);
   2->SetBinContent(37,0.1881997);
   2->SetBinContent(38,0.1571469);
   2->SetBinContent(39,0.1656158);
   2->SetBinContent(40,0.1533829);
   2->SetBinContent(41,0.1223301);
   2->SetBinContent(42,0.1091561);
   2->SetBinContent(43,0.1157431);
   2->SetBinContent(44,0.1279761);
   2->SetBinContent(45,0.143032);
   2->SetBinContent(46,0.139268);
   2->SetBinContent(47,0.1458549);
   2->SetBinContent(48,0.13174);
   2->SetBinContent(49,0.1072741);
   2->SetBinContent(50,0.019761);
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
   3->SetBinContent(1,1.830176);
   3->SetBinContent(2,0.177554);
   3->SetBinContent(3,0.143409);
   3->SetBinContent(4,0.170725);
   3->SetBinContent(5,0.2185279);
   3->SetBinContent(6,0.4575427);
   3->SetBinContent(7,0.8058227);
   3->SetBinContent(8,1.45458);
   3->SetBinContent(9,2.731607);
   3->SetBinContent(10,3.400851);
   3->SetBinContent(11,3.76279);
   3->SetBinContent(12,4.725657);
   3->SetBinContent(13,5.299274);
   3->SetBinContent(14,5.893379);
   3->SetBinContent(15,5.729488);
   3->SetBinContent(16,6.972327);
   3->SetBinContent(17,6.466997);
   3->SetBinContent(18,6.644545);
   3->SetBinContent(19,9.014204);
   3->SetBinContent(20,5.654371);
   3->SetBinContent(21,3.428168);
   3->SetBinContent(22,3.20281);
   3->SetBinContent(23,2.629172);
   3->SetBinContent(24,2.403814);
   3->SetBinContent(25,2.649659);
   3->SetBinContent(26,2.328695);
   3->SetBinContent(27,2.458446);
   3->SetBinContent(28,2.267234);
   3->SetBinContent(29,2.274063);
   3->SetBinContent(30,2.253576);
   3->SetBinContent(31,1.727741);
   3->SetBinContent(32,1.714083);
   3->SetBinContent(33,1.440922);
   3->SetBinContent(34,1.372632);
   3->SetBinContent(35,1.222393);
   3->SetBinContent(36,0.9697193);
   3->SetBinContent(37,0.9765483);
   3->SetBinContent(38,0.8467969);
   3->SetBinContent(39,0.7307035);
   3->SetBinContent(40,0.7648486);
   3->SetBinContent(41,0.6555842);
   3->SetBinContent(42,0.6897293);
   3->SetBinContent(43,0.6214391);
   3->SetBinContent(44,0.5531489);
   3->SetBinContent(45,0.6692423);
   3->SetBinContent(46,0.5053457);
   3->SetBinContent(47,0.6419262);
   3->SetBinContent(48,0.6214391);
   3->SetBinContent(49,0.2799889);
   3->SetBinContent(50,0.081948);
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
   4->SetBinContent(1,5.087345);
   4->SetBinContent(2,0.2683111);
   4->SetBinContent(3,0.147308);
   4->SetBinContent(4,0.121003);
   4->SetBinContent(5,0.2998771);
   4->SetBinContent(6,0.5103172);
   4->SetBinContent(7,1.11007);
   4->SetBinContent(8,1.841342);
   4->SetBinContent(9,2.872487);
   4->SetBinContent(10,4.103548);
   4->SetBinContent(11,4.945299);
   4->SetBinContent(12,5.808094);
   4->SetBinContent(13,6.602497);
   4->SetBinContent(14,7.34429);
   4->SetBinContent(15,8.522789);
   4->SetBinContent(16,9.56455);
   4->SetBinContent(17,10.46425);
   4->SetBinContent(18,10.85886);
   4->SetBinContent(19,16.80412);
   4->SetBinContent(20,9.00684);
   4->SetBinContent(21,5.039996);
   4->SetBinContent(22,4.629642);
   4->SetBinContent(23,3.78263);
   4->SetBinContent(24,3.524844);
   4->SetBinContent(25,3.603758);
   4->SetBinContent(26,3.235492);
   4->SetBinContent(27,3.356494);
   4->SetBinContent(28,3.39332);
   4->SetBinContent(29,3.361755);
   4->SetBinContent(30,2.988228);
   4->SetBinContent(31,2.693615);
   4->SetBinContent(32,2.235913);
   4->SetBinContent(33,2.041258);
   4->SetBinContent(34,2.104389);
   4->SetBinContent(35,1.962343);
   4->SetBinContent(36,1.762428);
   4->SetBinContent(37,1.599338);
   4->SetBinContent(38,1.352074);
   4->SetBinContent(39,1.452032);
   4->SetBinContent(40,1.210028);
   4->SetBinContent(41,1.11007);
   4->SetBinContent(42,1.252116);
   4->SetBinContent(43,1.241594);
   4->SetBinContent(44,1.22055);
   4->SetBinContent(45,1.194246);
   4->SetBinContent(46,1.341552);
   4->SetBinContent(47,1.478337);
   4->SetBinContent(48,1.283682);
   4->SetBinContent(49,0.8733265);
   4->SetBinContent(50,0.136786);
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
   5->SetBinContent(1,8.693129);
   5->SetBinContent(2,0.5704456);
   5->SetBinContent(3,0.3224259);
   5->SetBinContent(4,0.5828466);
   5->SetBinContent(5,1.215297);
   5->SetBinContent(6,2.405795);
   5->SetBinContent(7,4.662796);
   5->SetBinContent(8,8.53192);
   5->SetBinContent(9,13.14495);
   5->SetBinContent(10,18.06816);
   5->SetBinContent(11,22.01186);
   5->SetBinContent(12,25.18667);
   5->SetBinContent(13,27.44376);
   5->SetBinContent(14,30.06049);
   5->SetBinContent(15,32.81364);
   5->SetBinContent(16,37.10459);
   5->SetBinContent(17,36.96817);
   5->SetBinContent(18,39.07644);
   5->SetBinContent(19,55.2605);
   5->SetBinContent(20,29.06836);
   5->SetBinContent(21,16.0343);
   5->SetBinContent(22,13.33096);
   5->SetBinContent(23,10.49122);
   5->SetBinContent(24,9.561172);
   5->SetBinContent(25,8.767532);
   5->SetBinContent(26,7.688665);
   5->SetBinContent(27,7.490248);
   5->SetBinContent(28,6.981802);
   5->SetBinContent(29,5.964912);
   5->SetBinContent(30,5.878104);
   5->SetBinContent(31,4.513983);
   5->SetBinContent(32,3.732713);
   5->SetBinContent(33,3.236669);
   5->SetBinContent(34,2.728224);
   5->SetBinContent(35,2.951444);
   5->SetBinContent(36,2.256982);
   5->SetBinContent(37,1.984158);
   5->SetBinContent(38,1.574925);
   5->SetBinContent(39,1.450916);
   5->SetBinContent(40,1.041683);
   5->SetBinContent(41,0.7440594);
   5->SetBinContent(42,0.6448515);
   5->SetBinContent(43,0.6944554);
   5->SetBinContent(44,0.6200495);
   5->SetBinContent(45,0.4836387);
   5->SetBinContent(46,0.4092328);
   5->SetBinContent(47,0.4712377);
   5->SetBinContent(48,0.2976239);
   5->SetBinContent(49,0.198416);
   5->SetBinContent(50,0.037203);
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
   6->SetBinContent(1,244.6537);
   6->SetBinContent(2,14.95345);
   6->SetBinContent(3,12.37266);
   6->SetBinContent(4,13.73896);
   6->SetBinContent(5,21.86096);
   6->SetBinContent(6,41.36876);
   6->SetBinContent(7,83.19233);
   6->SetBinContent(8,141.7923);
   6->SetBinContent(9,234.4055);
   6->SetBinContent(10,321.0844);
   6->SetBinContent(11,396.3745);
   6->SetBinContent(12,464.1507);
   6->SetBinContent(13,540.5148);
   6->SetBinContent(14,640.3597);
   6->SetBinContent(15,742.7103);
   6->SetBinContent(16,880.8229);
   6->SetBinContent(17,935.7946);
   6->SetBinContent(18,986.5143);
   6->SetBinContent(19,1434.108);
   6->SetBinContent(20,731.0175);
   6->SetBinContent(21,404.5714);
   6->SetBinContent(22,355.9972);
   6->SetBinContent(23,282.5287);
   6->SetBinContent(24,257.8621);
   6->SetBinContent(25,233.2668);
   6->SetBinContent(26,213.7573);
   6->SetBinContent(27,216.7179);
   6->SetBinContent(28,193.1091);
   6->SetBinContent(29,173.4478);
   6->SetBinContent(30,163.731);
   6->SetBinContent(31,137.9966);
   6->SetBinContent(32,118.8676);
   6->SetBinContent(33,103.2312);
   6->SetBinContent(34,91.16234);
   6->SetBinContent(35,84.63452);
   6->SetBinContent(36,72.71746);
   6->SetBinContent(37,65.27879);
   6->SetBinContent(38,53.43763);
   6->SetBinContent(39,51.31229);
   6->SetBinContent(40,42.50733);
   6->SetBinContent(41,38.25666);
   6->SetBinContent(42,34.2337);
   6->SetBinContent(43,36.89037);
   6->SetBinContent(44,36.66265);
   6->SetBinContent(45,33.55056);
   6->SetBinContent(46,35.90361);
   6->SetBinContent(47,38.25666);
   6->SetBinContent(48,29.52754);
   6->SetBinContent(49,19.20422);
   6->SetBinContent(50,4.250737);
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
   7->SetBinContent(1,66.88525);
   7->SetBinContent(2,5.272772);
   7->SetBinContent(3,3.661648);
   7->SetBinContent(4,4.393977);
   7->SetBinContent(5,10.35028);
   7->SetBinContent(6,19.18713);
   7->SetBinContent(7,39.05757);
   7->SetBinContent(8,66.25059);
   7->SetBinContent(9,107.3574);
   7->SetBinContent(10,142.3152);
   7->SetBinContent(11,169.1218);
   7->SetBinContent(12,195.8308);
   7->SetBinContent(13,221.9538);
   7->SetBinContent(14,243.3894);
   7->SetBinContent(15,277.3737);
   7->SetBinContent(16,337.4812);
   7->SetBinContent(17,404.6687);
   7->SetBinContent(18,396.5144);
   7->SetBinContent(19,765.8991);
   7->SetBinContent(20,387.4812);
   7->SetBinContent(21,204.7663);
   7->SetBinContent(22,162.6277);
   7->SetBinContent(23,138.653);
   7->SetBinContent(24,128.7898);
   7->SetBinContent(25,124.2005);
   7->SetBinContent(26,114.0459);
   7->SetBinContent(27,111.8978);
   7->SetBinContent(28,103.403);
   7->SetBinContent(29,96.22637);
   7->SetBinContent(30,91.73489);
   7->SetBinContent(31,76.06351);
   7->SetBinContent(32,66.73879);
   7->SetBinContent(33,52.28793);
   7->SetBinContent(34,52.14146);
   7->SetBinContent(35,47.06413);
   7->SetBinContent(36,42.52383);
   7->SetBinContent(37,35.44485);
   7->SetBinContent(38,29.78159);
   7->SetBinContent(39,28.12163);
   7->SetBinContent(40,27.24283);
   7->SetBinContent(41,17.57599);
   7->SetBinContent(42,14.89076);
   7->SetBinContent(43,16.0625);
   7->SetBinContent(44,15.96485);
   7->SetBinContent(45,14.25607);
   7->SetBinContent(46,17.77128);
   7->SetBinContent(47,19.23595);
   7->SetBinContent(48,16.01367);
   7->SetBinContent(49,11.91259);
   7->SetBinContent(50,2.148169);
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
   8->SetBinContent(3,0.146753);
   8->SetBinContent(4,0.146753);
   8->SetBinContent(5,0.146753);
   8->SetBinContent(6,0.880518);
   8->SetBinContent(7,1.174024);
   8->SetBinContent(8,2.201295);
   8->SetBinContent(9,3.228566);
   8->SetBinContent(10,6.016871);
   8->SetBinContent(11,5.723366);
   8->SetBinContent(12,7.777905);
   8->SetBinContent(13,8.218164);
   8->SetBinContent(14,11.29998);
   8->SetBinContent(15,13.94154);
   8->SetBinContent(16,17.46362);
   8->SetBinContent(17,22.74674);
   8->SetBinContent(18,19.81168);
   8->SetBinContent(19,38.74277);
   8->SetBinContent(20,17.61038);
   8->SetBinContent(21,10.27271);
   8->SetBinContent(22,9.832451);
   8->SetBinContent(23,6.45713);
   8->SetBinContent(24,7.777905);
   8->SetBinContent(25,4.989602);
   8->SetBinContent(26,8.071411);
   8->SetBinContent(27,4.549343);
   8->SetBinContent(28,5.42986);
   8->SetBinContent(29,4.989602);
   8->SetBinContent(30,4.255837);
   8->SetBinContent(31,5.42986);
   8->SetBinContent(32,5.136354);
   8->SetBinContent(33,2.494801);
   8->SetBinContent(34,3.522073);
   8->SetBinContent(35,3.228566);
   8->SetBinContent(36,2.201295);
   8->SetBinContent(37,2.201295);
   8->SetBinContent(38,1.907789);
   8->SetBinContent(39,2.201295);
   8->SetBinContent(40,2.201295);
   8->SetBinContent(41,1.46753);
   8->SetBinContent(42,1.46753);
   8->SetBinContent(43,1.174024);
   8->SetBinContent(44,1.320777);
   8->SetBinContent(45,1.027271);
   8->SetBinContent(46,1.46753);
   8->SetBinContent(47,1.320777);
   8->SetBinContent(48,1.761036);
   8->SetBinContent(49,1.46753);
   8->SetBinContent(50,0.587012);
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
   9->SetBinContent(1,253.5541);
   9->SetBinContent(2,38.05944);
   9->SetBinContent(3,30.34465);
   9->SetBinContent(4,26.57301);
   9->SetBinContent(5,54.51769);
   9->SetBinContent(6,107.3212);
   9->SetBinContent(7,244.811);
   9->SetBinContent(8,398.2558);
   9->SetBinContent(9,600.907);
   9->SetBinContent(10,688.3453);
   9->SetBinContent(11,761.3821);
   9->SetBinContent(12,770.2974);
   9->SetBinContent(13,805.9585);
   9->SetBinContent(14,780.5842);
   9->SetBinContent(15,833.0472);
   9->SetBinContent(16,857.2214);
   9->SetBinContent(17,827.7324);
   9->SetBinContent(18,784.0132);
   9->SetBinContent(19,1005.009);
   9->SetBinContent(20,595.935);
   9->SetBinContent(21,422.4299);
   9->SetBinContent(22,376.139);
   9->SetBinContent(23,330.8768);
   9->SetBinContent(24,306.1883);
   9->SetBinContent(25,293.3297);
   9->SetBinContent(26,282.8714);
   9->SetBinContent(27,285.1003);
   9->SetBinContent(28,271.5559);
   9->SetBinContent(29,266.0695);
   9->SetBinContent(30,246.1825);
   9->SetBinContent(31,233.6679);
   9->SetBinContent(32,217.039);
   9->SetBinContent(33,192.0098);
   9->SetBinContent(34,181.7239);
   9->SetBinContent(35,173.4951);
   9->SetBinContent(36,151.2089);
   9->SetBinContent(37,136.4657);
   9->SetBinContent(38,129.437);
   9->SetBinContent(39,120.6936);
   9->SetBinContent(40,110.4072);
   9->SetBinContent(41,104.2353);
   9->SetBinContent(42,105.4354);
   9->SetBinContent(43,110.5786);
   9->SetBinContent(44,108.007);
   9->SetBinContent(45,101.1494);
   9->SetBinContent(46,112.8073);
   9->SetBinContent(47,123.2652);
   9->SetBinContent(48,119.3221);
   9->SetBinContent(49,104.5782);
   9->SetBinContent(50,22.45849);
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
   10->SetBinContent(1,955.6052);
   10->SetBinContent(2,57.22051);
   10->SetBinContent(3,40.62851);
   10->SetBinContent(4,53.11983);
   10->SetBinContent(5,97.5334);
   10->SetBinContent(6,197.5354);
   10->SetBinContent(7,345.2195);
   10->SetBinContent(8,617.2075);
   10->SetBinContent(9,988.9906);
   10->SetBinContent(10,1345.312);
   10->SetBinContent(11,1620.41);
   10->SetBinContent(12,1851.457);
   10->SetBinContent(13,2154.055);
   10->SetBinContent(14,2375.144);
   10->SetBinContent(15,2704.698);
   10->SetBinContent(16,3140.199);
   10->SetBinContent(17,3518.759);
   10->SetBinContent(18,3758.24);
   10->SetBinContent(19,6619.42);
   10->SetBinContent(20,3263.656);
   10->SetBinContent(21,1728.707);
   10->SetBinContent(22,1409.432);
   10->SetBinContent(23,1195.425);
   10->SetBinContent(24,1099.181);
   10->SetBinContent(25,1051.659);
   10->SetBinContent(26,977.3783);
   10->SetBinContent(27,941.3423);
   10->SetBinContent(28,885.2372);
   10->SetBinContent(29,835.4431);
   10->SetBinContent(30,772.9639);
   10->SetBinContent(31,635.3202);
   10->SetBinContent(32,545.0724);
   10->SetBinContent(33,462.4218);
   10->SetBinContent(34,414.2919);
   10->SetBinContent(35,370.7668);
   10->SetBinContent(36,313.4903);
   10->SetBinContent(37,274.3177);
   10->SetBinContent(38,246.371);
   10->SetBinContent(39,225.108);
   10->SetBinContent(40,199.9331);
   10->SetBinContent(41,139.7403);
   10->SetBinContent(42,139.8665);
   10->SetBinContent(43,146.176);
   10->SetBinContent(44,142.5796);
   10->SetBinContent(45,145.8606);
   10->SetBinContent(46,144.9772);
   10->SetBinContent(47,146.9332);
   10->SetBinContent(48,131.0332);
   10->SetBinContent(49,86.55618);
   10->SetBinContent(50,15.4566);
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
   11->SetBinContent(3,14.63386);
   11->SetBinContent(7,29.26772);
   11->SetBinContent(8,87.80315);
   11->SetBinContent(9,73.1693);
   11->SetBinContent(10,146.3386);
   11->SetBinContent(11,321.9449);
   11->SetBinContent(12,204.8741);
   11->SetBinContent(13,321.9449);
   11->SetBinContent(14,424.3819);
   11->SetBinContent(15,556.0865);
   11->SetBinContent(16,819.4958);
   11->SetBinContent(17,848.7635);
   11->SetBinContent(18,1009.736);
   11->SetBinContent(19,1580.458);
   11->SetBinContent(20,863.3974);
   11->SetBinContent(21,439.0157);
   11->SetBinContent(22,248.7757);
   11->SetBinContent(23,307.3111);
   11->SetBinContent(24,321.9449);
   11->SetBinContent(25,175.6063);
   11->SetBinContent(26,263.4095);
   11->SetBinContent(27,160.9725);
   11->SetBinContent(28,307.3111);
   11->SetBinContent(29,131.7047);
   11->SetBinContent(30,175.6063);
   11->SetBinContent(31,175.6063);
   11->SetBinContent(32,146.3386);
   11->SetBinContent(33,58.53543);
   11->SetBinContent(34,87.80315);
   11->SetBinContent(35,117.0709);
   11->SetBinContent(36,58.53543);
   11->SetBinContent(37,43.90158);
   11->SetBinContent(38,87.80315);
   11->SetBinContent(39,29.26772);
   11->SetBinContent(40,43.90158);
   11->SetBinContent(41,29.26772);
   11->SetBinContent(42,58.53543);
   11->SetBinContent(43,73.1693);
   11->SetBinContent(44,58.53543);
   11->SetBinContent(45,14.63386);
   11->SetBinContent(46,43.90158);
   11->SetBinContent(47,43.90158);
   11->SetBinContent(49,14.63386);
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
   12->SetBinContent(2,25.37391);
   12->SetBinContent(3,6.343478);
   12->SetBinContent(4,19.03043);
   12->SetBinContent(5,44.40435);
   12->SetBinContent(6,126.8695);
   12->SetBinContent(7,323.5173);
   12->SetBinContent(8,355.2347);
   12->SetBinContent(9,608.9742);
   12->SetBinContent(10,850.0274);
   12->SetBinContent(11,913.4625);
   12->SetBinContent(12,1084.737);
   12->SetBinContent(13,1300.416);
   12->SetBinContent(14,2340.751);
   12->SetBinContent(15,3412.804);
   12->SetBinContent(16,5087.451);
   12->SetBinContent(17,6286.328);
   12->SetBinContent(18,5569.539);
   12->SetBinContent(19,9952.868);
   12->SetBinContent(20,4840.064);
   12->SetBinContent(21,2213.881);
   12->SetBinContent(22,1953.797);
   12->SetBinContent(23,1579.531);
   12->SetBinContent(24,1490.721);
   12->SetBinContent(25,1148.172);
   12->SetBinContent(26,1116.455);
   12->SetBinContent(27,1046.676);
   12->SetBinContent(28,811.9664);
   12->SetBinContent(29,856.3709);
   12->SetBinContent(30,653.3787);
   12->SetBinContent(31,494.7911);
   12->SetBinContent(32,380.6086);
   12->SetBinContent(33,361.5782);
   12->SetBinContent(34,342.5477);
   12->SetBinContent(35,336.2043);
   12->SetBinContent(36,234.7086);
   12->SetBinContent(37,183.9608);
   12->SetBinContent(38,183.9608);
   12->SetBinContent(39,202.9913);
   12->SetBinContent(40,202.9913);
   12->SetBinContent(41,145.9);
   12->SetBinContent(42,120.5261);
   12->SetBinContent(43,171.2739);
   12->SetBinContent(44,152.2435);
   12->SetBinContent(45,152.2435);
   12->SetBinContent(46,158.5869);
   12->SetBinContent(47,82.46522);
   12->SetBinContent(48,114.1826);
   12->SetBinContent(49,95.15217);
   12->SetBinContent(50,25.37391);
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
   13->SetBinContent(1,1631.49);
   13->SetBinContent(5,326.298);
   13->SetBinContent(6,244.7235);
   13->SetBinContent(7,81.57449);
   13->SetBinContent(8,734.1704);
   13->SetBinContent(9,815.7449);
   13->SetBinContent(10,1631.49);
   13->SetBinContent(11,1631.49);
   13->SetBinContent(12,1713.064);
   13->SetBinContent(13,3181.404);
   13->SetBinContent(14,3915.574);
   13->SetBinContent(15,4323.447);
   13->SetBinContent(16,5628.643);
   13->SetBinContent(17,6199.666);
   13->SetBinContent(18,5873.367);
   13->SetBinContent(19,12888.76);
   13->SetBinContent(20,5954.941);
   13->SetBinContent(21,3099.83);
   13->SetBinContent(22,2691.958);
   13->SetBinContent(23,2936.681);
   13->SetBinContent(24,2447.234);
   13->SetBinContent(25,2120.936);
   13->SetBinContent(26,1468.341);
   13->SetBinContent(27,1468.341);
   13->SetBinContent(28,1549.915);
   13->SetBinContent(29,1305.192);
   13->SetBinContent(30,1876.213);
   13->SetBinContent(31,1223.617);
   13->SetBinContent(32,734.1704);
   13->SetBinContent(33,1060.468);
   13->SetBinContent(34,978.8938);
   13->SetBinContent(35,326.298);
   13->SetBinContent(36,815.7449);
   13->SetBinContent(37,326.298);
   13->SetBinContent(38,81.57449);
   13->SetBinContent(39,81.57449);
   13->SetBinContent(40,244.7235);
   13->SetBinContent(41,407.8725);
   13->SetBinContent(42,326.298);
   13->SetBinContent(43,244.7235);
   13->SetBinContent(44,326.298);
   13->SetBinContent(45,163.149);
   13->SetBinContent(46,244.7235);
   13->SetBinContent(47,652.5959);
   13->SetBinContent(48,326.298);
   13->SetBinContent(49,163.149);
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
   14->SetBinContent(1,3856.224);
   14->SetBinContent(2,28.20636);
   14->SetBinContent(3,20.1474);
   14->SetBinContent(4,60.4422);
   14->SetBinContent(5,72.53063);
   14->SetBinContent(6,157.1497);
   14->SetBinContent(7,229.6803);
   14->SetBinContent(8,423.0954);
   14->SetBinContent(9,680.9821);
   14->SetBinContent(10,862.3087);
   14->SetBinContent(11,938.8688);
   14->SetBinContent(12,1216.9);
   14->SetBinContent(13,1462.695);
   14->SetBinContent(14,1531.195);
   14->SetBinContent(15,1889.813);
   14->SetBinContent(16,2800.484);
   14->SetBinContent(17,3400.886);
   14->SetBinContent(18,3892.49);
   14->SetBinContent(19,9005.681);
   14->SetBinContent(20,3892.49);
   14->SetBinContent(21,1639.989);
   14->SetBinContent(22,1079.9);
   14->SetBinContent(23,926.7803);
   14->SetBinContent(24,902.6035);
   14->SetBinContent(25,793.8075);
   14->SetBinContent(26,701.1295);
   14->SetBinContent(27,624.5693);
   14->SetBinContent(28,564.1271);
   14->SetBinContent(29,608.4514);
   14->SetBinContent(30,660.8347);
   14->SetBinContent(31,382.8006);
   14->SetBinContent(32,302.211);
   14->SetBinContent(33,173.2676);
   14->SetBinContent(34,193.415);
   14->SetBinContent(35,201.474);
   14->SetBinContent(36,153.1202);
   14->SetBinContent(37,84.61907);
   14->SetBinContent(38,100.737);
   14->SetBinContent(39,80.58959);
   14->SetBinContent(40,92.67803);
   14->SetBinContent(41,44.32428);
   14->SetBinContent(42,40.2948);
   14->SetBinContent(43,52.38324);
   14->SetBinContent(44,60.4422);
   14->SetBinContent(45,48.35376);
   14->SetBinContent(46,48.35376);
   14->SetBinContent(47,44.32428);
   14->SetBinContent(48,32.23584);
   14->SetBinContent(49,8.058958);
   14->SetBinContent(50,8.058958);
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
   15->SetBinContent(1,297.4395);
   15->SetBinContent(3,7.725694);
   15->SetBinContent(6,3.862847);
   15->SetBinContent(7,19.31424);
   15->SetBinContent(8,19.31424);
   15->SetBinContent(9,42.49131);
   15->SetBinContent(10,34.76562);
   15->SetBinContent(11,57.9427);
   15->SetBinContent(12,88.84547);
   15->SetBinContent(13,119.7482);
   15->SetBinContent(14,115.8854);
   15->SetBinContent(15,162.2396);
   15->SetBinContent(16,193.1425);
   15->SetBinContent(17,270.3995);
   15->SetBinContent(18,347.6566);
   15->SetBinContent(19,594.8793);
   15->SetBinContent(20,316.7538);
   15->SetBinContent(21,81.11978);
   15->SetBinContent(22,61.80555);
   15->SetBinContent(23,54.07985);
   15->SetBinContent(24,54.07985);
   15->SetBinContent(25,65.6684);
   15->SetBinContent(26,34.76562);
   15->SetBinContent(27,50.21701);
   15->SetBinContent(28,42.49131);
   15->SetBinContent(29,23.17708);
   15->SetBinContent(30,19.31424);
   15->SetBinContent(31,30.90277);
   15->SetBinContent(32,30.90277);
   15->SetBinContent(33,15.45139);
   15->SetBinContent(34,7.725694);
   15->SetBinContent(35,19.31424);
   15->SetBinContent(36,11.58854);
   15->SetBinContent(37,3.862847);
   15->SetBinContent(38,3.862847);
   15->SetBinContent(39,3.862847);
   15->SetBinContent(40,11.58854);
   15->SetBinContent(42,11.58854);
   15->SetBinContent(44,11.58854);
   15->SetBinContent(45,7.725694);
   15->SetBinContent(46,3.862847);
   15->SetBinContent(47,7.725694);
   15->SetBinContent(48,3.862847);
   15->SetBinContent(49,11.58854);
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
   16->SetBinContent(1,2576.618);
   16->SetBinContent(2,6.16417);
   16->SetBinContent(3,12.32834);
   16->SetBinContent(4,18.49251);
   16->SetBinContent(5,12.32834);
   16->SetBinContent(6,123.2834);
   16->SetBinContent(7,191.0893);
   16->SetBinContent(8,326.7012);
   16->SetBinContent(9,579.4327);
   16->SetBinContent(10,708.8806);
   16->SetBinContent(11,930.7913);
   16->SetBinContent(12,1134.209);
   16->SetBinContent(13,1639.672);
   16->SetBinContent(14,1812.27);
   16->SetBinContent(15,2299.235);
   16->SetBinContent(16,3803.267);
   16->SetBinContent(17,4869.649);
   16->SetBinContent(18,4943.618);
   16->SetBinContent(19,12174.06);
   16->SetBinContent(20,5128.54);
   16->SetBinContent(21,2342.384);
   16->SetBinContent(22,1762.956);
   16->SetBinContent(23,1294.478);
   16->SetBinContent(24,1263.657);
   16->SetBinContent(25,1091.06);
   16->SetBinContent(26,930.7913);
   16->SetBinContent(27,961.6122);
   16->SetBinContent(28,899.9703);
   16->SetBinContent(29,819.8359);
   16->SetBinContent(30,801.3434);
   16->SetBinContent(31,548.6118);
   16->SetBinContent(32,382.1788);
   16->SetBinContent(33,314.3728);
   16->SetBinContent(34,289.7161);
   16->SetBinContent(35,184.9251);
   16->SetBinContent(36,141.7759);
   16->SetBinContent(37,184.9251);
   16->SetBinContent(38,117.1192);
   16->SetBinContent(39,123.2834);
   16->SetBinContent(40,135.6117);
   16->SetBinContent(41,49.31336);
   16->SetBinContent(42,61.6417);
   16->SetBinContent(43,80.13421);
   16->SetBinContent(44,98.62672);
   16->SetBinContent(45,73.97004);
   16->SetBinContent(46,36.98502);
   16->SetBinContent(47,80.13421);
   16->SetBinContent(48,36.98502);
   16->SetBinContent(49,30.82085);
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
   17->SetBinContent(1,2365.944);
   17->SetBinContent(2,23.42518);
   17->SetBinContent(4,140.5511);
   17->SetBinContent(5,140.5511);
   17->SetBinContent(6,210.8266);
   17->SetBinContent(7,538.779);
   17->SetBinContent(8,937.0069);
   17->SetBinContent(9,1428.936);
   17->SetBinContent(10,1475.786);
   17->SetBinContent(11,1920.864);
   17->SetBinContent(12,2084.841);
   17->SetBinContent(13,1616.337);
   17->SetBinContent(14,2131.691);
   17->SetBinContent(15,2319.094);
   17->SetBinContent(16,3162.404);
   17->SetBinContent(17,3209.255);
   17->SetBinContent(18,3607.485);
   17->SetBinContent(19,6980.727);
   17->SetBinContent(20,2295.668);
   17->SetBinContent(21,1358.66);
   17->SetBinContent(22,1147.833);
   17->SetBinContent(23,1264.959);
   17->SetBinContent(24,1007.282);
   17->SetBinContent(25,796.4559);
   17->SetBinContent(26,796.4559);
   17->SetBinContent(27,351.3776);
   17->SetBinContent(28,679.33);
   17->SetBinContent(29,491.9286);
   17->SetBinContent(30,562.2042);
   17->SetBinContent(31,515.3538);
   17->SetBinContent(32,468.5034);
   17->SetBinContent(33,398.2279);
   17->SetBinContent(34,234.2517);
   17->SetBinContent(35,304.5273);
   17->SetBinContent(36,398.2279);
   17->SetBinContent(37,210.8266);
   17->SetBinContent(38,187.4014);
   17->SetBinContent(39,163.9762);
   17->SetBinContent(40,163.9762);
   17->SetBinContent(41,140.5511);
   17->SetBinContent(42,117.1259);
   17->SetBinContent(43,140.5511);
   17->SetBinContent(44,140.5511);
   17->SetBinContent(45,70.27553);
   17->SetBinContent(46,117.1259);
   17->SetBinContent(47,93.70071);
   17->SetBinContent(48,70.27553);
   17->SetBinContent(49,46.85035);
   17->SetBinContent(50,23.42518);
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
