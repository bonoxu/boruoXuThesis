{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:40:22 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-53.96825,-3.206817,263.4921,5.789019);
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
   THStack_stack_1->SetMinimum(0.0258484);
   THStack_stack_1->SetMaximum(117314.5);
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
   0->SetBinContent(2,0.009899);
   0->SetBinContent(3,0.158384);
   0->SetBinContent(4,0.3959599);
   0->SetBinContent(5,0.316768);
   0->SetBinContent(6,0.5246469);
   0->SetBinContent(7,0.59394);
   0->SetBinContent(8,0.6137381);
   0->SetBinContent(9,0.7721224);
   0->SetBinContent(10,0.6335361);
   0->SetBinContent(11,0.6137381);
   0->SetBinContent(12,0.7919204);
   0->SetBinContent(13,0.8216175);
   0->SetBinContent(14,1.108689);
   0->SetBinContent(15,1.019598);
   0->SetBinContent(16,1.435357);
   0->SetBinContent(17,1.415559);
   0->SetBinContent(18,1.583842);
   0->SetBinContent(19,1.960005);
   0->SetBinContent(20,2.306467);
   0->SetBinContent(21,2.524243);
   0->SetBinContent(22,2.880603);
   0->SetBinContent(23,3.286458);
   0->SetBinContent(24,4.21696);
   0->SetBinContent(25,4.880202);
   0->SetBinContent(26,5.107882);
   0->SetBinContent(27,5.988906);
   0->SetBinContent(28,6.256183);
   0->SetBinContent(29,6.869929);
   0->SetBinContent(30,6.414569);
   0->SetBinContent(31,6.17699);
   0->SetBinContent(32,5.157378);
   0->SetBinContent(33,3.514133);
   0->SetBinContent(34,2.207478);
   0->SetBinContent(35,1.326468);
   0->SetBinContent(36,0.8711126);
   0->SetBinContent(37,0.7325263);
   0->SetBinContent(38,0.564243);
   0->SetBinContent(39,0.4751518);
   0->SetBinContent(40,0.287071);
   0->SetBinContent(41,0.19798);
   0->SetBinContent(42,0.148485);
   0->SetBinContent(43,0.168283);
   0->SetBinContent(44,0.19798);
   0->SetBinContent(45,0.138586);
   0->SetBinContent(46,0.108889);
   0->SetBinContent(47,0.07919199);
   0->SetBinContent(48,0.09898999);
   0->SetBinContent(49,0.128687);
   0->SetBinContent(50,0.148485);
   0->SetBinContent(51,1.841217);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,200);
   1->SetBinContent(1,0.004949);
   1->SetBinContent(2,0.039592);
   1->SetBinContent(3,0.1880621);
   1->SetBinContent(4,0.3117872);
   1->SetBinContent(5,0.3365322);
   1->SetBinContent(6,0.3761242);
   1->SetBinContent(7,0.4553083);
   1->SetBinContent(8,0.4454103);
   1->SetBinContent(9,0.6087267);
   1->SetBinContent(10,0.6087267);
   1->SetBinContent(11,0.6235737);
   1->SetBinContent(12,0.6978083);
   1->SetBinContent(13,0.6978083);
   1->SetBinContent(14,0.9007162);
   1->SetBinContent(15,0.9452569);
   1->SetBinContent(16,1.093726);
   1->SetBinContent(17,1.321379);
   1->SetBinContent(18,1.583675);
   1->SetBinContent(19,1.60347);
   1->SetBinContent(20,2.004337);
   1->SetBinContent(21,2.350774);
   1->SetBinContent(22,2.514094);
   1->SetBinContent(23,2.964461);
   1->SetBinContent(24,3.375236);
   1->SetBinContent(25,3.914687);
   1->SetBinContent(26,3.865196);
   1->SetBinContent(27,4.092854);
   1->SetBinContent(28,4.048313);
   1->SetBinContent(29,4.256175);
   1->SetBinContent(30,4.053262);
   1->SetBinContent(31,3.667233);
   1->SetBinContent(32,2.890225);
   1->SetBinContent(33,2.326028);
   1->SetBinContent(34,1.474797);
   1->SetBinContent(35,1.113522);
   1->SetBinContent(36,0.7720429);
   1->SetBinContent(37,0.554288);
   1->SetBinContent(38,0.3563282);
   1->SetBinContent(39,0.4107672);
   1->SetBinContent(40,0.2870421);
   1->SetBinContent(41,0.2128071);
   1->SetBinContent(42,0.123725);
   1->SetBinContent(43,0.08413301);
   1->SetBinContent(44,0.09403102);
   1->SetBinContent(45,0.103929);
   1->SetBinContent(46,0.08413301);
   1->SetBinContent(47,0.07918401);
   1->SetBinContent(48,0.054439);
   1->SetBinContent(49,0.08413301);
   1->SetBinContent(50,0.09898002);
   1->SetBinContent(51,1.479746);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,200);
   2->SetBinContent(1,0.004949);
   2->SetBinContent(2,0.113827);
   2->SetBinContent(3,0.3810732);
   2->SetBinContent(4,0.4998493);
   2->SetBinContent(5,0.7027572);
   2->SetBinContent(6,0.7769918);
   2->SetBinContent(7,0.8165836);
   2->SetBinContent(8,1.02939);
   2->SetBinContent(9,0.9601039);
   2->SetBinContent(10,1.054134);
   2->SetBinContent(11,1.252093);
   2->SetBinContent(12,1.197655);
   2->SetBinContent(13,1.489644);
   2->SetBinContent(14,1.504491);
   2->SetBinContent(15,1.707399);
   2->SetBinContent(16,1.870715);
   2->SetBinContent(17,2.276537);
   2->SetBinContent(18,2.692261);
   2->SetBinContent(19,3.177272);
   2->SetBinContent(20,3.647436);
   2->SetBinContent(21,4.330411);
   2->SetBinContent(22,5.216299);
   2->SetBinContent(23,5.493448);
   2->SetBinContent(24,6.725772);
   2->SetBinContent(25,7.052412);
   2->SetBinContent(26,7.487932);
   2->SetBinContent(27,8.428219);
   2->SetBinContent(28,8.641009);
   2->SetBinContent(29,8.774622);
   2->SetBinContent(30,8.81916);
   2->SetBinContent(31,8.175839);
   2->SetBinContent(32,6.795059);
   2->SetBinContent(33,4.637255);
   2->SetBinContent(34,3.310898);
   2->SetBinContent(35,2.301283);
   2->SetBinContent(36,1.643062);
   2->SetBinContent(37,1.014543);
   2->SetBinContent(38,0.9947467);
   2->SetBinContent(39,0.7918388);
   2->SetBinContent(40,0.5740839);
   2->SetBinContent(41,0.4751043);
   2->SetBinContent(42,0.4602573);
   2->SetBinContent(43,0.4157162);
   2->SetBinContent(44,0.3761242);
   2->SetBinContent(45,0.2969401);
   2->SetBinContent(46,0.2721951);
   2->SetBinContent(47,0.2474501);
   2->SetBinContent(48,0.1831131);
   2->SetBinContent(49,0.1880621);
   2->SetBinContent(50,0.2177561);
   2->SetBinContent(51,3.231712);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,200);
   3->SetBinContent(1,0.06753);
   3->SetBinContent(2,0.06753);
   3->SetBinContent(3,1.046715);
   3->SetBinContent(4,2.768731);
   3->SetBinContent(5,2.768731);
   3->SetBinContent(6,3.376502);
   3->SetBinContent(7,3.342737);
   3->SetBinContent(8,4.051803);
   3->SetBinContent(9,3.747918);
   3->SetBinContent(10,4.018038);
   3->SetBinContent(11,4.65957);
   3->SetBinContent(12,6.314047);
   3->SetBinContent(13,6.584166);
   3->SetBinContent(14,8.407468);
   3->SetBinContent(15,9.791826);
   3->SetBinContent(16,12.86443);
   3->SetBinContent(17,15.97079);
   3->SetBinContent(18,20.39411);
   3->SetBinContent(19,24.31094);
   3->SetBinContent(20,29.91606);
   3->SetBinContent(21,31.84071);
   3->SetBinContent(22,36.66896);
   3->SetBinContent(23,35.04829);
   3->SetBinContent(24,28.86932);
   3->SetBinContent(25,25.89793);
   3->SetBinContent(26,26.13429);
   3->SetBinContent(27,23.39927);
   3->SetBinContent(28,22.35253);
   3->SetBinContent(29,21.64344);
   3->SetBinContent(30,21.03566);
   3->SetBinContent(31,20.76553);
   3->SetBinContent(32,16.7474);
   3->SetBinContent(33,15.12667);
   3->SetBinContent(34,12.99949);
   3->SetBinContent(35,9.758061);
   3->SetBinContent(36,8.272408);
   3->SetBinContent(37,6.381577);
   3->SetBinContent(38,5.301102);
   3->SetBinContent(39,3.714153);
   3->SetBinContent(40,2.7012);
   3->SetBinContent(41,2.29602);
   3->SetBinContent(42,1.688249);
   3->SetBinContent(43,1.114245);
   3->SetBinContent(44,1.384365);
   3->SetBinContent(45,1.3506);
   3->SetBinContent(46,0.8103601);
   3->SetBinContent(47,0.9454201);
   3->SetBinContent(48,0.8103601);
   3->SetBinContent(49,0.8441251);
   3->SetBinContent(50,0.8778901);
   3->SetBinContent(51,16.34221);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,200);
   4->SetBinContent(2,0.4373199);
   4->SetBinContent(3,1.465022);
   4->SetBinContent(4,2.492725);
   4->SetBinContent(5,2.930046);
   4->SetBinContent(6,2.29593);
   4->SetBinContent(7,2.667653);
   4->SetBinContent(8,2.864448);
   4->SetBinContent(9,3.104975);
   4->SetBinContent(10,3.236171);
   4->SetBinContent(11,3.214305);
   4->SetBinContent(12,3.564163);
   4->SetBinContent(13,3.979618);
   4->SetBinContent(14,5.466496);
   4->SetBinContent(15,6.319264);
   4->SetBinContent(16,9.118093);
   4->SetBinContent(17,10.97669);
   4->SetBinContent(18,13.38193);
   4->SetBinContent(19,16.20263);
   4->SetBinContent(20,20.81632);
   4->SetBinContent(21,26.28278);
   4->SetBinContent(22,28.77549);
   4->SetBinContent(23,31.31193);
   4->SetBinContent(24,34.22009);
   4->SetBinContent(25,32.1647);
   4->SetBinContent(26,32.82067);
   4->SetBinContent(27,35.11658);
   4->SetBinContent(28,35.83816);
   4->SetBinContent(29,38.52766);
   4->SetBinContent(30,34.15449);
   4->SetBinContent(31,31.83671);
   4->SetBinContent(32,25.62681);
   4->SetBinContent(33,17.90816);
   4->SetBinContent(34,14.12537);
   4->SetBinContent(35,9.380483);
   4->SetBinContent(36,6.909642);
   4->SetBinContent(37,5.357167);
   4->SetBinContent(38,4.220143);
   4->SetBinContent(39,3.192439);
   4->SetBinContent(40,2.558323);
   4->SetBinContent(41,1.814877);
   4->SetBinContent(42,1.705547);
   4->SetBinContent(43,1.31196);
   4->SetBinContent(44,1.268228);
   4->SetBinContent(45,1.268228);
   4->SetBinContent(46,1.180764);
   4->SetBinContent(47,1.0933);
   4->SetBinContent(48,0.9621044);
   4->SetBinContent(49,0.8309082);
   4->SetBinContent(50,0.612248);
   4->SetBinContent(51,15.10933);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,200);
   5->SetBinContent(2,1.16308);
   5->SetBinContent(3,6.338793);
   5->SetBinContent(4,9.479115);
   5->SetBinContent(5,12.50313);
   5->SetBinContent(6,13.31729);
   5->SetBinContent(7,13.20098);
   5->SetBinContent(8,13.78252);
   5->SetBinContent(9,13.25913);
   5->SetBinContent(10,12.44497);
   5->SetBinContent(11,13.49175);
   5->SetBinContent(12,15.46899);
   5->SetBinContent(13,17.85328);
   5->SetBinContent(14,17.67882);
   5->SetBinContent(15,22.85445);
   5->SetBinContent(16,26.5181);
   5->SetBinContent(17,29.94913);
   5->SetBinContent(18,34.83409);
   5->SetBinContent(19,47.27927);
   5->SetBinContent(20,53.21109);
   5->SetBinContent(21,68.56372);
   5->SetBinContent(22,78.39128);
   5->SetBinContent(23,93.56876);
   5->SetBinContent(24,105.2572);
   5->SetBinContent(25,116.8874);
   5->SetBinContent(26,130.4948);
   5->SetBinContent(27,137.3566);
   5->SetBinContent(28,147.8239);
   5->SetBinContent(29,160.0938);
   5->SetBinContent(30,154.8602);
   5->SetBinContent(31,146.4282);
   5->SetBinContent(32,115.3173);
   5->SetBinContent(33,80.65918);
   5->SetBinContent(34,50.53595);
   5->SetBinContent(35,33.2639);
   5->SetBinContent(36,26.34364);
   5->SetBinContent(37,17.62066);
   5->SetBinContent(38,15.64345);
   5->SetBinContent(39,12.73574);
   5->SetBinContent(40,10.23512);
   5->SetBinContent(41,7.908954);
   5->SetBinContent(42,7.269259);
   5->SetBinContent(43,6.804026);
   5->SetBinContent(44,5.815406);
   5->SetBinContent(45,5.699098);
   5->SetBinContent(46,4.59417);
   5->SetBinContent(47,5.001249);
   5->SetBinContent(48,4.187091);
   5->SetBinContent(49,4.361554);
   5->SetBinContent(50,3.954475);
   5->SetBinContent(51,68.50557);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,200);
   6->SetBinContent(1,1.754134);
   6->SetBinContent(2,87.70674);
   6->SetBinContent(3,226.2826);
   6->SetBinContent(4,369.2453);
   6->SetBinContent(5,385.0327);
   6->SetBinContent(6,367.4911);
   6->SetBinContent(7,378.0161);
   6->SetBinContent(8,392.9263);
   6->SetBinContent(9,391.1722);
   6->SetBinContent(10,435.903);
   6->SetBinContent(11,467.4777);
   6->SetBinContent(12,502.5607);
   6->SetBinContent(13,605.1785);
   6->SetBinContent(14,642.8928);
   6->SetBinContent(15,813.0453);
   6->SetBinContent(16,984.075);
   6->SetBinContent(17,1211.237);
   6->SetBinContent(18,1434.892);
   6->SetBinContent(19,1717.31);
   6->SetBinContent(20,2037.442);
   6->SetBinContent(21,2301.407);
   6->SetBinContent(22,2461.012);
   6->SetBinContent(23,2767.069);
   6->SetBinContent(24,3084.526);
   6->SetBinContent(25,3377.428);
   6->SetBinContent(26,3505.463);
   6->SetBinContent(27,3764.165);
   6->SetBinContent(28,3902.723);
   6->SetBinContent(29,4003.573);
   6->SetBinContent(30,3859.752);
   6->SetBinContent(31,3508.971);
   6->SetBinContent(32,2839.856);
   6->SetBinContent(33,2038.319);
   6->SetBinContent(34,1377.005);
   6->SetBinContent(35,1047.224);
   6->SetBinContent(36,795.5038);
   6->SetBinContent(37,586.7599);
   6->SetBinContent(38,423.624);
   6->SetBinContent(39,364.8599);
   6->SetBinContent(40,296.4481);
   6->SetBinContent(41,257.8568);
   6->SetBinContent(42,185.9378);
   6->SetBinContent(43,175.4131);
   6->SetBinContent(44,158.7489);
   6->SetBinContent(45,149.1013);
   6->SetBinContent(46,107.8793);
   6->SetBinContent(47,100.8628);
   6->SetBinContent(48,114.8958);
   6->SetBinContent(49,110.5105);
   6->SetBinContent(50,91.21501);
   6->SetBinContent(51,1912.021);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,200);
   7->SetBinContent(1,0.138115);
   7->SetBinContent(2,5.800828);
   7->SetBinContent(3,31.35209);
   7->SetBinContent(4,56.48901);
   7->SetBinContent(5,74.8583);
   7->SetBinContent(6,85.21692);
   7->SetBinContent(7,85.76938);
   7->SetBinContent(8,84.94069);
   7->SetBinContent(9,79.55421);
   7->SetBinContent(10,93.08947);
   7->SetBinContent(11,107.3153);
   7->SetBinContent(12,131.3475);
   7->SetBinContent(13,161.3201);
   7->SetBinContent(14,199.9944);
   7->SetBinContent(15,260.2158);
   7->SetBinContent(16,368.9183);
   7->SetBinContent(17,455.5211);
   7->SetBinContent(18,600.2736);
   7->SetBinContent(19,731.6281);
   7->SetBinContent(20,845.7173);
   7->SetBinContent(21,946.9612);
   7->SetBinContent(22,954.696);
   7->SetBinContent(23,934.392);
   7->SetBinContent(24,750.2747);
   7->SetBinContent(25,517.9525);
   7->SetBinContent(26,399.1671);
   7->SetBinContent(27,353.3104);
   7->SetBinContent(28,333.5589);
   7->SetBinContent(29,313.2549);
   7->SetBinContent(30,303.5863);
   7->SetBinContent(31,307.1775);
   7->SetBinContent(32,278.1718);
   7->SetBinContent(33,269.7463);
   7->SetBinContent(34,232.7294);
   7->SetBinContent(35,204.4143);
   7->SetBinContent(36,167.3975);
   7->SetBinContent(37,141.5686);
   7->SetBinContent(38,97.37103);
   7->SetBinContent(39,86.04561);
   7->SetBinContent(40,65.32837);
   7->SetBinContent(41,52.62179);
   7->SetBinContent(42,48.61646);
   7->SetBinContent(43,38.39595);
   7->SetBinContent(44,35.35743);
   7->SetBinContent(45,30.38529);
   7->SetBinContent(46,27.7611);
   7->SetBinContent(47,26.24184);
   7->SetBinContent(48,23.89388);
   7->SetBinContent(49,22.78897);
   7->SetBinContent(50,20.57913);
   7->SetBinContent(51,400.2721);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,200);
   8->SetBinContent(2,2.77164);
   8->SetBinContent(3,2.77164);
   8->SetBinContent(4,11.08656);
   8->SetBinContent(5,16.62984);
   8->SetBinContent(6,17.55372);
   8->SetBinContent(7,16.62984);
   8->SetBinContent(8,15.70596);
   8->SetBinContent(9,19.40148);
   8->SetBinContent(10,18.4776);
   8->SetBinContent(11,26.79251);
   8->SetBinContent(12,31.41191);
   8->SetBinContent(13,39.72684);
   8->SetBinContent(14,50.81342);
   8->SetBinContent(15,79.45375);
   8->SetBinContent(16,83.14928);
   8->SetBinContent(17,105.3224);
   8->SetBinContent(18,142.2776);
   8->SetBinContent(19,161.6789);
   8->SetBinContent(20,215.2636);
   8->SetBinContent(21,206.9487);
   8->SetBinContent(22,131.1911);
   8->SetBinContent(23,76.68211);
   8->SetBinContent(24,44.34625);
   8->SetBinContent(25,24.94475);
   8->SetBinContent(26,24.94475);
   8->SetBinContent(27,22.17311);
   8->SetBinContent(28,25.86863);
   8->SetBinContent(29,20.32536);
   8->SetBinContent(30,14.78208);
   8->SetBinContent(31,19.40148);
   8->SetBinContent(32,12.93432);
   8->SetBinContent(33,16.62984);
   8->SetBinContent(34,18.4776);
   8->SetBinContent(35,18.4776);
   8->SetBinContent(36,15.70596);
   8->SetBinContent(37,12.93432);
   8->SetBinContent(38,17.55372);
   8->SetBinContent(39,10.16268);
   8->SetBinContent(40,12.01044);
   8->SetBinContent(41,6.46716);
   8->SetBinContent(42,4.6194);
   8->SetBinContent(43,9.2388);
   8->SetBinContent(44,11.08656);
   8->SetBinContent(45,3.69552);
   8->SetBinContent(46,0.92388);
   8->SetBinContent(47,4.6194);
   8->SetBinContent(48,6.46716);
   8->SetBinContent(49,7.39104);
   8->SetBinContent(50,2.77164);
   8->SetBinContent(51,199.5578);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,200);
   9->SetBinContent(2,8.351714);
   9->SetBinContent(3,34.72554);
   9->SetBinContent(4,61.09937);
   9->SetBinContent(5,82.19859);
   9->SetBinContent(6,87.03383);
   9->SetBinContent(7,112.9683);
   9->SetBinContent(8,118.6827);
   9->SetBinContent(9,138.9026);
   9->SetBinContent(10,153.8477);
   9->SetBinContent(11,158.2433);
   9->SetBinContent(12,185.496);
   9->SetBinContent(13,209.6718);
   9->SetBinContent(14,224.6168);
   9->SetBinContent(15,261.9796);
   9->SetBinContent(16,272.969);
   9->SetBinContent(17,333.1908);
   9->SetBinContent(18,372.313);
   9->SetBinContent(19,467.2612);
   9->SetBinContent(20,481.7672);
   9->SetBinContent(21,533.1975);
   9->SetBinContent(22,560.8907);
   9->SetBinContent(23,570.1218);
   9->SetBinContent(24,524.8456);
   9->SetBinContent(25,485.7234);
   9->SetBinContent(26,467.7008);
   9->SetBinContent(27,463.7446);
   9->SetBinContent(28,461.1072);
   9->SetBinContent(29,448.7991);
   9->SetBinContent(30,421.985);
   9->SetBinContent(31,406.5999);
   9->SetBinContent(32,441.7659);
   9->SetBinContent(33,403.9624);
   9->SetBinContent(34,362.2028);
   9->SetBinContent(35,312.5308);
   9->SetBinContent(36,304.1788);
   9->SetBinContent(37,233.8476);
   9->SetBinContent(38,221.1003);
   9->SetBinContent(39,194.7267);
   9->SetBinContent(40,181.9795);
   9->SetBinContent(41,149.0125);
   9->SetBinContent(42,150.3312);
   9->SetBinContent(43,139.3422);
   9->SetBinContent(44,136.2653);
   9->SetBinContent(45,140.2213);
   9->SetBinContent(46,122.6388);
   9->SetBinContent(47,116.9244);
   9->SetBinContent(48,93.62734);
   9->SetBinContent(49,83.07772);
   9->SetBinContent(50,81.75902);
   9->SetBinContent(51,2488.306);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,200);
   10->SetBinContent(1,2.329144);
   10->SetBinContent(2,104.8117);
   10->SetBinContent(3,427.3929);
   10->SetBinContent(4,691.1636);
   10->SetBinContent(5,869.9222);
   10->SetBinContent(6,929.8965);
   10->SetBinContent(7,976.4786);
   10->SetBinContent(8,992.2);
   10->SetBinContent(9,1048.099);
   10->SetBinContent(10,1113.022);
   10->SetBinContent(11,1286.54);
   10->SetBinContent(12,1447.248);
   10->SetBinContent(13,1771.576);
   10->SetBinContent(14,2199.903);
   10->SetBinContent(15,2836.014);
   10->SetBinContent(16,3736.007);
   10->SetBinContent(17,4778.145);
   10->SetBinContent(18,5995.463);
   10->SetBinContent(19,7165.346);
   10->SetBinContent(20,8447.852);
   10->SetBinContent(21,9118.352);
   10->SetBinContent(22,9344.762);
   10->SetBinContent(23,8769.133);
   10->SetBinContent(24,7573.35);
   10->SetBinContent(25,6411.324);
   10->SetBinContent(26,5845.008);
   10->SetBinContent(27,5574.945);
   10->SetBinContent(28,5459.994);
   10->SetBinContent(29,5356.102);
   10->SetBinContent(30,5121.543);
   10->SetBinContent(31,4905.609);
   10->SetBinContent(32,4632.055);
   10->SetBinContent(33,4154.498);
   10->SetBinContent(34,3557.173);
   10->SetBinContent(35,2960.091);
   10->SetBinContent(36,2370.29);
   10->SetBinContent(37,1890.36);
   10->SetBinContent(38,1443.755);
   10->SetBinContent(39,1150.288);
   10->SetBinContent(40,871.3779);
   10->SetBinContent(41,711.8344);
   10->SetBinContent(42,597.4173);
   10->SetBinContent(43,483.8736);
   10->SetBinContent(44,434.6713);
   10->SetBinContent(45,398.5702);
   10->SetBinContent(46,342.0895);
   10->SetBinContent(47,297.5454);
   10->SetBinContent(48,283.862);
   10->SetBinContent(49,265.8114);
   10->SetBinContent(50,234.9508);
   10->SetBinContent(51,4359.664);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,200);
   11->SetBinContent(2,61.04166);
   11->SetBinContent(3,91.5625);
   11->SetBinContent(4,91.5625);
   11->SetBinContent(5,274.6875);
   11->SetBinContent(6,305.2083);
   11->SetBinContent(7,91.5625);
   11->SetBinContent(8,213.6458);
   11->SetBinContent(9,335.7292);
   11->SetBinContent(10,427.2917);
   11->SetBinContent(11,427.2917);
   11->SetBinContent(12,549.375);
   11->SetBinContent(13,732.4999);
   11->SetBinContent(14,732.4999);
   11->SetBinContent(15,793.5415);
   11->SetBinContent(16,793.5415);
   11->SetBinContent(17,1861.772);
   11->SetBinContent(18,1495.521);
   11->SetBinContent(19,1831.251);
   11->SetBinContent(20,1922.813);
   11->SetBinContent(21,1983.855);
   11->SetBinContent(22,1495.521);
   11->SetBinContent(23,1037.708);
   11->SetBinContent(24,824.0623);
   11->SetBinContent(25,701.9791);
   11->SetBinContent(26,640.9374);
   11->SetBinContent(27,854.5831);
   11->SetBinContent(28,1068.229);
   11->SetBinContent(29,671.4583);
   11->SetBinContent(30,976.6664);
   11->SetBinContent(31,763.0207);
   11->SetBinContent(32,640.9374);
   11->SetBinContent(33,579.8958);
   11->SetBinContent(34,610.4166);
   11->SetBinContent(35,396.7708);
   11->SetBinContent(36,305.2083);
   11->SetBinContent(37,457.8125);
   11->SetBinContent(38,305.2083);
   11->SetBinContent(39,244.1666);
   11->SetBinContent(40,152.6042);
   11->SetBinContent(41,183.125);
   11->SetBinContent(42,183.125);
   11->SetBinContent(43,183.125);
   11->SetBinContent(44,91.5625);
   11->SetBinContent(45,91.5625);
   11->SetBinContent(46,152.6042);
   11->SetBinContent(47,122.0833);
   11->SetBinContent(48,183.125);
   11->SetBinContent(49,61.04166);
   11->SetBinContent(51,3143.644);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,200);
   12->SetBinContent(1,1.431912);
   12->SetBinContent(2,15.03507);
   12->SetBinContent(3,64.4361);
   12->SetBinContent(4,92.35845);
   12->SetBinContent(5,130.3042);
   12->SetBinContent(6,173.9776);
   12->SetBinContent(7,158.9425);
   12->SetBinContent(8,185.4329);
   12->SetBinContent(9,184.001);
   12->SetBinContent(10,209.7755);
   12->SetBinContent(11,197.6042);
   12->SetBinContent(12,231.2542);
   12->SetBinContent(13,266.3359);
   12->SetBinContent(14,326.4751);
   12->SetBinContent(15,385.8983);
   12->SetBinContent(16,489.71);
   12->SetBinContent(17,584.2144);
   12->SetBinContent(18,681.5825);
   12->SetBinContent(19,742.4376);
   12->SetBinContent(20,862.7159);
   12->SetBinContent(21,917.1276);
   12->SetBinContent(22,823.3391);
   12->SetBinContent(23,699.4811);
   12->SetBinContent(24,566.3158);
   12->SetBinContent(25,468.9476);
   12->SetBinContent(26,405.9447);
   12->SetBinContent(27,377.307);
   12->SetBinContent(28,360.1244);
   12->SetBinContent(29,337.2142);
   12->SetBinContent(30,313.5881);
   12->SetBinContent(31,292.1099);
   12->SetBinContent(32,279.9388);
   12->SetBinContent(33,279.2229);
   12->SetBinContent(34,231.2542);
   12->SetBinContent(35,208.3436);
   12->SetBinContent(36,188.2968);
   12->SetBinContent(37,151.067);
   12->SetBinContent(38,128.8723);
   12->SetBinContent(39,115.9851);
   12->SetBinContent(40,92.35845);
   12->SetBinContent(41,85.91483);
   12->SetBinContent(42,62.28823);
   12->SetBinContent(43,71.59568);
   12->SetBinContent(44,56.56057);
   12->SetBinContent(45,55.84461);
   12->SetBinContent(46,54.4127);
   12->SetBinContent(47,53.69674);
   12->SetBinContent(48,50.11695);
   12->SetBinContent(49,37.22971);
   12->SetBinContent(50,49.40099);
   12->SetBinContent(51,1782.702);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,200);
   13->SetBinContent(2,364.0772);
   13->SetBinContent(3,1716.364);
   13->SetBinContent(4,2704.572);
   13->SetBinContent(5,2860.605);
   13->SetBinContent(6,3744.792);
   13->SetBinContent(7,3328.704);
   13->SetBinContent(8,3900.825);
   13->SetBinContent(9,4264.903);
   13->SetBinContent(10,4993.06);
   13->SetBinContent(11,4628.981);
   13->SetBinContent(12,6865.464);
   13->SetBinContent(13,7437.588);
   13->SetBinContent(14,9934.11);
   13->SetBinContent(15,13158.78);
   13->SetBinContent(16,14719.1);
   13->SetBinContent(17,17579.71);
   13->SetBinContent(18,23769.11);
   13->SetBinContent(19,22572.84);
   13->SetBinContent(20,28242.11);
   13->SetBinContent(21,23405.02);
   13->SetBinContent(22,17371.66);
   13->SetBinContent(23,13990.95);
   13->SetBinContent(24,11546.44);
   13->SetBinContent(25,10298.19);
   13->SetBinContent(26,10558.24);
   13->SetBinContent(27,9466.014);
   13->SetBinContent(28,8789.874);
   13->SetBinContent(29,7645.633);
   13->SetBinContent(30,8893.896);
   13->SetBinContent(31,8425.799);
   13->SetBinContent(32,7697.644);
   13->SetBinContent(33,7437.588);
   13->SetBinContent(34,6865.464);
   13->SetBinContent(35,5149.094);
   13->SetBinContent(36,5201.105);
   13->SetBinContent(37,4733.004);
   13->SetBinContent(38,3692.781);
   13->SetBinContent(39,2392.506);
   13->SetBinContent(40,2184.462);
   13->SetBinContent(41,2288.484);
   13->SetBinContent(42,1560.331);
   13->SetBinContent(43,884.1876);
   13->SetBinContent(44,1144.243);
   13->SetBinContent(45,728.1544);
   13->SetBinContent(46,832.1765);
   13->SetBinContent(47,624.1323);
   13->SetBinContent(48,780.1655);
   13->SetBinContent(49,884.1876);
   13->SetBinContent(50,468.0992);
   13->SetBinContent(51,14875.13);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,200);
   14->SetBinContent(3,9.254577);
   14->SetBinContent(4,55.52746);
   14->SetBinContent(5,83.29119);
   14->SetBinContent(6,111.0549);
   14->SetBinContent(7,46.27288);
   14->SetBinContent(8,148.0732);
   14->SetBinContent(9,101.8003);
   14->SetBinContent(10,212.8553);
   14->SetBinContent(11,240.619);
   14->SetBinContent(12,388.6922);
   14->SetBinContent(13,499.7472);
   14->SetBinContent(14,980.9852);
   14->SetBinContent(15,1749.11);
   14->SetBinContent(16,2332.149);
   14->SetBinContent(17,3377.923);
   14->SetBinContent(18,4109.039);
   14->SetBinContent(19,5043.733);
   14->SetBinContent(20,5460.181);
   14->SetBinContent(21,5561.979);
   14->SetBinContent(22,5682.286);
   14->SetBinContent(23,5552.725);
   14->SetBinContent(24,4941.935);
   14->SetBinContent(25,4173.82);
   14->SetBinContent(26,4442.197);
   14->SetBinContent(27,3970.22);
   14->SetBinContent(28,3683.326);
   14->SetBinContent(29,3109.538);
   14->SetBinContent(30,3091.029);
   14->SetBinContent(31,2970.719);
   14->SetBinContent(32,2239.602);
   14->SetBinContent(33,1804.637);
   14->SetBinContent(34,1304.894);
   14->SetBinContent(35,1221.603);
   14->SetBinContent(36,1018.003);
   14->SetBinContent(37,694.0933);
   14->SetBinContent(38,379.4377);
   14->SetBinContent(39,342.4193);
   14->SetBinContent(40,222.1098);
   14->SetBinContent(41,175.837);
   14->SetBinContent(42,129.5641);
   14->SetBinContent(43,74.03661);
   14->SetBinContent(44,101.8003);
   14->SetBinContent(45,83.29119);
   14->SetBinContent(46,83.29119);
   14->SetBinContent(47,18.50915);
   14->SetBinContent(48,64.78204);
   14->SetBinContent(49,55.52746);
   14->SetBinContent(50,64.78204);
   14->SetBinContent(51,786.639);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,200);
   15->SetBinContent(3,28.04676);
   15->SetBinContent(4,56.09351);
   15->SetBinContent(5,56.09351);
   15->SetBinContent(6,56.09351);
   15->SetBinContent(7,112.187);
   15->SetBinContent(8,112.187);
   15->SetBinContent(9,168.2805);
   15->SetBinContent(10,28.04676);
   15->SetBinContent(11,196.3273);
   15->SetBinContent(12,252.4208);
   15->SetBinContent(13,420.7013);
   15->SetBinContent(14,532.8884);
   15->SetBinContent(15,813.3559);
   15->SetBinContent(16,645.0754);
   15->SetBinContent(17,757.2624);
   15->SetBinContent(18,1262.104);
   15->SetBinContent(19,757.2624);
   15->SetBinContent(20,1121.87);
   15->SetBinContent(21,953.5897);
   15->SetBinContent(22,1234.057);
   15->SetBinContent(23,1177.964);
   15->SetBinContent(24,1318.198);
   15->SetBinContent(25,1037.73);
   15->SetBinContent(26,1206.01);
   15->SetBinContent(27,1458.431);
   15->SetBinContent(28,1626.712);
   15->SetBinContent(29,1430.385);
   15->SetBinContent(30,1037.73);
   15->SetBinContent(31,869.4494);
   15->SetBinContent(32,1009.683);
   15->SetBinContent(33,813.3559);
   15->SetBinContent(34,981.6364);
   15->SetBinContent(35,757.2624);
   15->SetBinContent(36,504.8416);
   15->SetBinContent(37,336.5611);
   15->SetBinContent(38,308.5143);
   15->SetBinContent(39,140.2338);
   15->SetBinContent(40,168.2805);
   15->SetBinContent(41,84.14027);
   15->SetBinContent(42,112.187);
   15->SetBinContent(43,84.14027);
   15->SetBinContent(44,112.187);
   15->SetBinContent(45,112.187);
   15->SetBinContent(46,56.09351);
   15->SetBinContent(47,112.187);
   15->SetBinContent(48,28.04676);
   15->SetBinContent(49,84.14027);
   15->SetBinContent(50,56.09351);
   15->SetBinContent(51,925.5429);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,200);
   16->SetBinContent(2,53.09894);
   16->SetBinContent(3,53.09894);
   16->SetBinContent(4,106.1979);
   16->SetBinContent(5,95.57809);
   16->SetBinContent(6,95.57809);
   16->SetBinContent(7,53.09894);
   16->SetBinContent(8,84.95831);
   16->SetBinContent(9,95.57809);
   16->SetBinContent(10,116.8177);
   16->SetBinContent(11,138.0573);
   16->SetBinContent(12,201.7759);
   16->SetBinContent(13,201.7759);
   16->SetBinContent(14,254.8748);
   16->SetBinContent(15,318.5935);
   16->SetBinContent(16,286.7342);
   16->SetBinContent(17,530.9892);
   16->SetBinContent(18,552.2288);
   16->SetBinContent(19,722.1458);
   16->SetBinContent(20,743.3854);
   16->SetBinContent(21,817.7241);
   16->SetBinContent(22,371.6924);
   16->SetBinContent(23,520.3694);
   16->SetBinContent(24,552.2288);
   16->SetBinContent(25,530.9892);
   16->SetBinContent(26,435.4111);
   16->SetBinContent(27,573.4684);
   16->SetBinContent(28,382.3122);
   16->SetBinContent(29,329.2133);
   16->SetBinContent(30,382.3122);
   16->SetBinContent(31,276.1144);
   16->SetBinContent(32,446.0309);
   16->SetBinContent(33,244.2551);
   16->SetBinContent(34,265.4946);
   16->SetBinContent(35,223.0155);
   16->SetBinContent(36,159.2968);
   16->SetBinContent(37,201.7759);
   16->SetBinContent(38,95.57809);
   16->SetBinContent(39,74.33852);
   16->SetBinContent(40,63.71873);
   16->SetBinContent(41,53.09894);
   16->SetBinContent(42,53.09894);
   16->SetBinContent(43,63.71873);
   16->SetBinContent(44,95.57809);
   16->SetBinContent(45,53.09894);
   16->SetBinContent(46,42.47915);
   16->SetBinContent(47,53.09894);
   16->SetBinContent(48,31.85936);
   16->SetBinContent(49,31.85936);
   16->SetBinContent(50,74.33852);
   16->SetBinContent(51,828.3439);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,200);
   17->SetBinContent(2,60.82056);
   17->SetBinContent(4,60.82056);
   17->SetBinContent(5,243.2822);
   17->SetBinContent(6,243.2822);
   17->SetBinContent(7,364.9234);
   17->SetBinContent(8,486.5645);
   17->SetBinContent(9,547.3851);
   17->SetBinContent(10,243.2822);
   17->SetBinContent(11,486.5645);
   17->SetBinContent(12,729.8467);
   17->SetBinContent(13,912.3084);
   17->SetBinContent(14,1216.411);
   17->SetBinContent(15,1338.052);
   17->SetBinContent(16,2007.078);
   17->SetBinContent(17,2554.464);
   17->SetBinContent(18,2554.464);
   17->SetBinContent(19,2858.566);
   17->SetBinContent(20,4135.798);
   17->SetBinContent(21,4257.44);
   17->SetBinContent(22,4804.827);
   17->SetBinContent(23,4500.723);
   17->SetBinContent(24,4074.978);
   17->SetBinContent(25,2676.105);
   17->SetBinContent(26,3101.849);
   17->SetBinContent(27,3649.234);
   17->SetBinContent(28,3284.31);
   17->SetBinContent(29,3223.49);
   17->SetBinContent(30,2858.566);
   17->SetBinContent(31,1824.617);
   17->SetBinContent(32,1824.617);
   17->SetBinContent(33,1946.258);
   17->SetBinContent(34,2493.643);
   17->SetBinContent(35,1155.591);
   17->SetBinContent(36,608.2056);
   17->SetBinContent(37,973.129);
   17->SetBinContent(38,912.3084);
   17->SetBinContent(39,425.7439);
   17->SetBinContent(40,304.1028);
   17->SetBinContent(41,547.3851);
   17->SetBinContent(42,669.0262);
   17->SetBinContent(43,425.7439);
   17->SetBinContent(44,182.4617);
   17->SetBinContent(45,243.2822);
   17->SetBinContent(46,182.4617);
   17->SetBinContent(47,486.5645);
   17->SetBinContent(48,121.6411);
   17->SetBinContent(49,243.2822);
   17->SetBinContent(50,243.2822);
   17->SetBinContent(51,7420.122);
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
