{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:45:36 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-13.49206,-3.179016,65.87302,5.689336);
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
   
   TH1F *THStack_stack_27 = new TH1F("THStack_stack_27","",50,0,50);
   THStack_stack_27->SetMinimum(0.0261389);
   THStack_stack_27->SetMaximum(95470.24);
   THStack_stack_27->SetDirectory(0);
   THStack_stack_27->SetStats(0);
   THStack_stack_27->SetLineWidth(2);
   THStack_stack_27->SetMarkerSize(1.2);
   THStack_stack_27->GetXaxis()->SetTitle("N_{PFO,W}");
   THStack_stack_27->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_27->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_27->GetXaxis()->SetLabelColor(ci);
   THStack_stack_27->GetXaxis()->SetLabelFont(42);
   THStack_stack_27->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_27->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_27->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_27->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_27->GetXaxis()->SetTitleColor(ci);
   THStack_stack_27->GetXaxis()->SetTitleFont(42);
   THStack_stack_27->GetYaxis()->SetTitle("Number of events");
   THStack_stack_27->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_27->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_27->GetYaxis()->SetLabelColor(ci);
   THStack_stack_27->GetYaxis()->SetLabelFont(42);
   THStack_stack_27->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_27->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_27->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_27->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_27->GetYaxis()->SetTitleColor(ci);
   THStack_stack_27->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_27->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_27->GetZaxis()->SetLabelColor(ci);
   THStack_stack_27->GetZaxis()->SetLabelFont(42);
   THStack_stack_27->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_27->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_27->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_27->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_27->GetZaxis()->SetTitleColor(ci);
   THStack_stack_27->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_27);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,50);
   0->SetBinContent(5,0.009899);
   0->SetBinContent(6,0.05939399);
   0->SetBinContent(7,0.08909099);
   0->SetBinContent(8,0.07919199);
   0->SetBinContent(9,0.188081);
   0->SetBinContent(10,0.356364);
   0->SetBinContent(11,0.4850508);
   0->SetBinContent(12,0.6929302);
   0->SetBinContent(13,0.9503047);
   0->SetBinContent(14,1.356165);
   0->SetBinContent(15,1.187881);
   0->SetBinContent(16,1.979803);
   0->SetBinContent(17,2.355961);
   0->SetBinContent(18,2.831109);
   0->SetBinContent(19,3.246862);
   0->SetBinContent(20,3.157772);
   0->SetBinContent(21,3.415144);
   0->SetBinContent(22,3.90019);
   0->SetBinContent(23,4.484237);
   0->SetBinContent(24,3.949684);
   0->SetBinContent(25,4.088271);
   0->SetBinContent(26,3.8111);
   0->SetBinContent(27,3.850695);
   0->SetBinContent(28,3.959583);
   0->SetBinContent(29,3.870493);
   0->SetBinContent(30,4.048675);
   0->SetBinContent(31,3.484436);
   0->SetBinContent(32,3.682414);
   0->SetBinContent(33,2.712322);
   0->SetBinContent(34,2.781614);
   0->SetBinContent(35,2.494546);
   0->SetBinContent(36,2.316366);
   0->SetBinContent(37,2.138186);
   0->SetBinContent(38,1.851116);
   0->SetBinContent(39,1.494751);
   0->SetBinContent(40,1.168083);
   0->SetBinContent(41,1.187881);
   0->SetBinContent(42,1.158184);
   0->SetBinContent(43,0.8612136);
   0->SetBinContent(44,0.7622234);
   0->SetBinContent(45,0.603839);
   0->SetBinContent(46,0.6533341);
   0->SetBinContent(47,0.4256569);
   0->SetBinContent(48,0.356364);
   0->SetBinContent(49,0.247475);
   0->SetBinContent(50,0.19798);
   0->SetBinContent(51,1.088891);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,50);
   1->SetBinContent(3,0.004949);
   1->SetBinContent(4,0.019796);
   1->SetBinContent(5,0.034643);
   1->SetBinContent(6,0.04949);
   1->SetBinContent(7,0.1583681);
   1->SetBinContent(8,0.1979601);
   1->SetBinContent(9,0.3761242);
   1->SetBinContent(10,0.4602573);
   1->SetBinContent(11,0.5938798);
   1->SetBinContent(12,0.7077062);
   1->SetBinContent(13,0.8660734);
   1->SetBinContent(14,1.128369);
   1->SetBinContent(15,1.306532);
   1->SetBinContent(16,1.692552);
   1->SetBinContent(17,1.79648);
   1->SetBinContent(18,1.994439);
   1->SetBinContent(19,2.256741);
   1->SetBinContent(20,2.395316);
   1->SetBinContent(21,2.702159);
   1->SetBinContent(22,2.64277);
   1->SetBinContent(23,2.786294);
   1->SetBinContent(24,2.687312);
   1->SetBinContent(25,2.949614);
   1->SetBinContent(26,2.954563);
   1->SetBinContent(27,3.009003);
   1->SetBinContent(28,2.944665);
   1->SetBinContent(29,2.786294);
   1->SetBinContent(30,2.464603);
   1->SetBinContent(31,2.627923);
   1->SetBinContent(32,2.330977);
   1->SetBinContent(33,2.04393);
   1->SetBinContent(34,2.088472);
   1->SetBinContent(35,1.821225);
   1->SetBinContent(36,1.529236);
   1->SetBinContent(37,1.643062);
   1->SetBinContent(38,1.222399);
   1->SetBinContent(39,1.088777);
   1->SetBinContent(40,0.9502059);
   1->SetBinContent(41,0.935359);
   1->SetBinContent(42,0.7225531);
   1->SetBinContent(43,0.5394411);
   1->SetBinContent(44,0.5740839);
   1->SetBinContent(45,0.5344921);
   1->SetBinContent(46,0.3513792);
   1->SetBinContent(47,0.2919911);
   1->SetBinContent(48,0.2326031);
   1->SetBinContent(49,0.2078581);
   1->SetBinContent(50,0.1880621);
   1->SetBinContent(51,0.742349);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,50);
   2->SetBinContent(3,0.014847);
   2->SetBinContent(4,0.08413301);
   2->SetBinContent(5,0.1831131);
   2->SetBinContent(6,0.3563282);
   2->SetBinContent(7,0.564186);
   2->SetBinContent(8,0.8165836);
   2->SetBinContent(9,1.143216);
   2->SetBinContent(10,1.430256);
   2->SetBinContent(11,1.613368);
   2->SetBinContent(12,2.063726);
   2->SetBinContent(13,2.405214);
   2->SetBinContent(14,2.781345);
   2->SetBinContent(15,2.959512);
   2->SetBinContent(16,3.691978);
   2->SetBinContent(17,3.850349);
   2->SetBinContent(18,4.152244);
   2->SetBinContent(19,4.780778);
   2->SetBinContent(20,4.914404);
   2->SetBinContent(21,4.850066);
   2->SetBinContent(22,5.275688);
   2->SetBinContent(23,5.330128);
   2->SetBinContent(24,5.448906);
   2->SetBinContent(25,5.750801);
   2->SetBinContent(26,5.582531);
   2->SetBinContent(27,5.325179);
   2->SetBinContent(28,5.280637);
   2->SetBinContent(29,5.216299);
   2->SetBinContent(30,4.973793);
   2->SetBinContent(31,4.632306);
   2->SetBinContent(32,4.567967);
   2->SetBinContent(33,3.840451);
   2->SetBinContent(34,3.840451);
   2->SetBinContent(35,3.40988);
   2->SetBinContent(36,3.048596);
   2->SetBinContent(37,2.736803);
   2->SetBinContent(38,2.58833);
   2->SetBinContent(39,2.246843);
   2->SetBinContent(40,1.84597);
   2->SetBinContent(41,1.732144);
   2->SetBinContent(42,1.529236);
   2->SetBinContent(43,1.21745);
   2->SetBinContent(44,1.128369);
   2->SetBinContent(45,0.8264816);
   2->SetBinContent(46,0.8066857);
   2->SetBinContent(47,0.6186247);
   2->SetBinContent(48,0.5443901);
   2->SetBinContent(49,0.4602573);
   2->SetBinContent(50,0.4107672);
   2->SetBinContent(51,1.855868);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,50);
   3->SetBinContent(3,0.101295);
   3->SetBinContent(4,0.27012);
   3->SetBinContent(5,0.8778901);
   3->SetBinContent(6,0.74283);
   3->SetBinContent(7,1.620719);
   3->SetBinContent(8,2.29602);
   3->SetBinContent(9,3.173912);
   3->SetBinContent(10,3.275207);
   3->SetBinContent(11,5.368632);
   3->SetBinContent(12,5.672515);
   3->SetBinContent(13,6.88805);
   3->SetBinContent(14,8.711351);
   3->SetBinContent(15,11.51383);
   3->SetBinContent(16,11.91901);
   3->SetBinContent(17,13.9449);
   3->SetBinContent(18,16.37598);
   3->SetBinContent(19,19.6175);
   3->SetBinContent(20,17.86168);
   3->SetBinContent(21,20.52917);
   3->SetBinContent(22,24.81743);
   3->SetBinContent(23,23.66939);
   3->SetBinContent(24,23.43303);
   3->SetBinContent(25,25.15509);
   3->SetBinContent(26,26.77584);
   3->SetBinContent(27,24.41224);
   3->SetBinContent(28,24.07458);
   3->SetBinContent(29,22.85901);
   3->SetBinContent(30,21.50838);
   3->SetBinContent(31,21.27202);
   3->SetBinContent(32,19.75256);
   3->SetBinContent(33,18.97595);
   3->SetBinContent(34,18.19933);
   3->SetBinContent(35,15.22797);
   3->SetBinContent(36,14.89032);
   3->SetBinContent(37,12.93196);
   3->SetBinContent(38,11.64889);
   3->SetBinContent(39,10.09571);
   3->SetBinContent(40,8.745116);
   3->SetBinContent(41,6.88805);
   3->SetBinContent(42,6.449107);
   3->SetBinContent(43,6.077693);
   3->SetBinContent(44,4.625805);
   3->SetBinContent(45,4.355687);
   3->SetBinContent(46,3.511562);
   3->SetBinContent(47,3.106381);
   3->SetBinContent(48,2.667435);
   3->SetBinContent(49,1.654484);
   3->SetBinContent(50,1.620719);
   3->SetBinContent(51,7.428287);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,50);
   4->SetBinContent(3,0.153062);
   4->SetBinContent(4,0.196794);
   4->SetBinContent(5,0.612248);
   4->SetBinContent(6,1.20263);
   4->SetBinContent(7,2.274064);
   4->SetBinContent(8,2.930046);
   4->SetBinContent(9,3.91402);
   4->SetBinContent(10,5.379033);
   4->SetBinContent(11,7.215764);
   4->SetBinContent(12,8.855702);
   4->SetBinContent(13,10.56124);
   4->SetBinContent(14,13.16327);
   4->SetBinContent(15,14.14724);
   4->SetBinContent(16,16.26822);
   4->SetBinContent(17,19.15452);
   4->SetBinContent(18,21.42856);
   4->SetBinContent(19,22.52186);
   4->SetBinContent(20,24.0306);
   4->SetBinContent(21,25.67054);
   4->SetBinContent(22,27.59473);
   4->SetBinContent(23,29.12534);
   4->SetBinContent(24,28.07578);
   4->SetBinContent(25,26.98249);
   4->SetBinContent(26,26.74196);
   4->SetBinContent(27,25.97666);
   4->SetBinContent(28,24.13993);
   4->SetBinContent(29,23.33089);
   4->SetBinContent(30,21.51603);
   4->SetBinContent(31,20.24781);
   4->SetBinContent(32,19.04519);
   4->SetBinContent(33,16.42129);
   4->SetBinContent(34,15.69971);
   4->SetBinContent(35,13.3382);
   4->SetBinContent(36,10.86736);
   4->SetBinContent(37,10.84549);
   4->SetBinContent(38,8.9213);
   4->SetBinContent(39,7.784276);
   4->SetBinContent(40,5.466496);
   4->SetBinContent(41,5.510228);
   4->SetBinContent(42,4.876118);
   4->SetBinContent(43,3.870288);
   4->SetBinContent(44,2.864448);
   4->SetBinContent(45,2.208466);
   4->SetBinContent(46,2.40526);
   4->SetBinContent(47,1.42129);
   4->SetBinContent(48,1.137032);
   4->SetBinContent(49,1.246362);
   4->SetBinContent(50,0.9839704);
   4->SetBinContent(51,3.695359);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,50);
   5->SetBinContent(3,0.116308);
   5->SetBinContent(4,0.5233859);
   5->SetBinContent(5,1.860928);
   5->SetBinContent(6,3.663705);
   5->SetBinContent(7,5.640944);
   5->SetBinContent(8,8.257878);
   5->SetBinContent(9,12.91021);
   5->SetBinContent(10,20.12125);
   5->SetBinContent(11,28.379);
   5->SetBinContent(12,38.09077);
   5->SetBinContent(13,45.76724);
   5->SetBinContent(14,55.6536);
   5->SetBinContent(15,67.28439);
   5->SetBinContent(16,77.92607);
   5->SetBinContent(17,87.81178);
   5->SetBinContent(18,93.62691);
   5->SetBinContent(19,101.7099);
   5->SetBinContent(20,107.7577);
   5->SetBinContent(21,112.5842);
   5->SetBinContent(22,113.3983);
   5->SetBinContent(23,108.8044);
   5->SetBinContent(24,111.7119);
   5->SetBinContent(25,105.199);
   5->SetBinContent(26,95.83665);
   5->SetBinContent(27,93.74321);
   5->SetBinContent(28,85.89279);
   5->SetBinContent(29,76.58859);
   5->SetBinContent(30,74.6696);
   5->SetBinContent(31,64.20238);
   5->SetBinContent(32,61.70173);
   5->SetBinContent(33,50.12887);
   5->SetBinContent(34,42.85949);
   5->SetBinContent(35,40.35882);
   5->SetBinContent(36,33.08944);
   5->SetBinContent(37,31.46111);
   5->SetBinContent(38,23.61044);
   5->SetBinContent(39,21.40062);
   5->SetBinContent(40,16.69021);
   5->SetBinContent(41,14.77114);
   5->SetBinContent(42,11.74712);
   5->SetBinContent(43,10.87481);
   5->SetBinContent(44,8.664957);
   5->SetBinContent(45,7.036643);
   5->SetBinContent(46,5.350173);
   5->SetBinContent(47,4.012629);
   5->SetBinContent(48,3.256626);
   5->SetBinContent(49,2.791393);
   5->SetBinContent(50,2.209852);
   5->SetBinContent(51,9.072036);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,50);
   6->SetBinContent(3,8.77067);
   6->SetBinContent(4,33.32855);
   6->SetBinContent(5,95.60035);
   6->SetBinContent(6,164.8884);
   6->SetBinContent(7,295.571);
   6->SetBinContent(8,449.0591);
   6->SetBinContent(9,663.9426);
   6->SetBinContent(10,907.7695);
   6->SetBinContent(11,1113.882);
   6->SetBinContent(12,1443.662);
   6->SetBinContent(13,1772.566);
   6->SetBinContent(14,1971.662);
   6->SetBinContent(15,2196.172);
   6->SetBinContent(16,2571.508);
   6->SetBinContent(17,2727.606);
   6->SetBinContent(18,2974.907);
   6->SetBinContent(19,2910.012);
   6->SetBinContent(20,3159.067);
   6->SetBinContent(21,3079.264);
   6->SetBinContent(22,3119.604);
   6->SetBinContent(23,3110.834);
   6->SetBinContent(24,2947.721);
   6->SetBinContent(25,2729.36);
   6->SetBinContent(26,2604.833);
   6->SetBinContent(27,2483.813);
   6->SetBinContent(28,2252.297);
   6->SetBinContent(29,2072.522);
   6->SetBinContent(30,1847.117);
   6->SetBinContent(31,1696.26);
   6->SetBinContent(32,1552.42);
   6->SetBinContent(33,1312.978);
   6->SetBinContent(34,1127.915);
   6->SetBinContent(35,943.7296);
   6->SetBinContent(36,849.8825);
   6->SetBinContent(37,674.4675);
   6->SetBinContent(38,621.843);
   6->SetBinContent(39,488.5275);
   6->SetBinContent(40,403.4512);
   6->SetBinContent(41,342.933);
   6->SetBinContent(42,256.9797);
   6->SetBinContent(43,219.2661);
   6->SetBinContent(44,178.9213);
   6->SetBinContent(45,158.7489);
   6->SetBinContent(46,128.9289);
   6->SetBinContent(47,90.33794);
   6->SetBinContent(48,73.67366);
   6->SetBinContent(49,61.39471);
   6->SetBinContent(50,46.48457);
   6->SetBinContent(51,185.9378);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,50);
   7->SetBinContent(3,0.966805);
   7->SetBinContent(4,2.48607);
   7->SetBinContent(5,6.353288);
   7->SetBinContent(6,13.12092);
   7->SetBinContent(7,25.55126);
   7->SetBinContent(8,47.09719);
   7->SetBinContent(9,67.26198);
   7->SetBinContent(10,97.37103);
   7->SetBinContent(11,131.7619);
   7->SetBinContent(12,181.6241);
   7->SetBinContent(13,226.0996);
   7->SetBinContent(14,300.1332);
   7->SetBinContent(15,354.001);
   7->SetBinContent(16,420.438);
   7->SetBinContent(17,478.1732);
   7->SetBinContent(18,540.7427);
   7->SetBinContent(19,567.8148);
   7->SetBinContent(20,620.0251);
   7->SetBinContent(21,640.6053);
   7->SetBinContent(22,670.8542);
   7->SetBinContent(23,660.3569);
   7->SetBinContent(24,658.1469);
   7->SetBinContent(25,635.2186);
   7->SetBinContent(26,614.0858);
   7->SetBinContent(27,584.3895);
   7->SetBinContent(28,533.9747);
   7->SetBinContent(29,492.1236);
   7->SetBinContent(30,455.9355);
   7->SetBinContent(31,392.261);
   7->SetBinContent(32,357.5922);
   7->SetBinContent(33,314.6361);
   7->SetBinContent(34,270.4369);
   7->SetBinContent(35,239.0831);
   7->SetBinContent(36,210.3536);
   7->SetBinContent(37,179.5523);
   7->SetBinContent(38,150.1322);
   7->SetBinContent(39,124.3034);
   7->SetBinContent(40,105.1055);
   7->SetBinContent(41,89.6366);
   7->SetBinContent(42,70.57674);
   7->SetBinContent(43,58.83696);
   7->SetBinContent(44,49.99761);
   7->SetBinContent(45,43.78244);
   7->SetBinContent(46,35.35743);
   7->SetBinContent(47,23.47954);
   7->SetBinContent(48,19.61232);
   7->SetBinContent(49,17.81683);
   7->SetBinContent(50,12.84469);
   7->SetBinContent(51,51.37876);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,50);
   8->SetBinContent(3,1.84776);
   8->SetBinContent(5,2.77164);
   8->SetBinContent(6,3.69552);
   8->SetBinContent(7,4.6194);
   8->SetBinContent(8,8.31492);
   8->SetBinContent(9,10.16268);
   8->SetBinContent(10,13.8582);
   8->SetBinContent(11,27.71639);
   8->SetBinContent(12,34.18356);
   8->SetBinContent(13,41.57461);
   8->SetBinContent(14,53.58507);
   8->SetBinContent(15,67.44329);
   8->SetBinContent(16,80.37763);
   8->SetBinContent(17,74.83434);
   8->SetBinContent(18,84.99704);
   8->SetBinContent(19,89.61645);
   8->SetBinContent(20,97.93138);
   8->SetBinContent(21,99.77914);
   8->SetBinContent(22,99.77914);
   8->SetBinContent(23,89.61645);
   8->SetBinContent(24,99.77914);
   8->SetBinContent(25,92.38809);
   8->SetBinContent(26,93.31197);
   8->SetBinContent(27,88.69257);
   8->SetBinContent(28,80.37763);
   8->SetBinContent(29,67.44329);
   8->SetBinContent(30,70.21494);
   8->SetBinContent(31,55.43283);
   8->SetBinContent(32,61.9);
   8->SetBinContent(33,53.58507);
   8->SetBinContent(34,51.7373);
   8->SetBinContent(35,36.9552);
   8->SetBinContent(36,31.41191);
   8->SetBinContent(37,29.56415);
   8->SetBinContent(38,24.94475);
   8->SetBinContent(39,24.94475);
   8->SetBinContent(40,21.24924);
   8->SetBinContent(41,14.78208);
   8->SetBinContent(42,14.78208);
   8->SetBinContent(43,12.93432);
   8->SetBinContent(44,8.31492);
   8->SetBinContent(45,5.54328);
   8->SetBinContent(46,6.46716);
   8->SetBinContent(47,1.84776);
   8->SetBinContent(48,1.84776);
   8->SetBinContent(49,1.84776);
   8->SetBinContent(50,2.77164);
   8->SetBinContent(51,18.4776);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,50);
   9->SetBinContent(3,3.076948);
   9->SetBinContent(4,3.956076);
   9->SetBinContent(5,12.30779);
   9->SetBinContent(6,23.73645);
   9->SetBinContent(7,40.87943);
   9->SetBinContent(8,50.9894);
   9->SetBinContent(9,72.5281);
   9->SetBinContent(10,98.02302);
   9->SetBinContent(11,128.3532);
   9->SetBinContent(12,153.4081);
   9->SetBinContent(13,206.1553);
   9->SetBinContent(14,241.3201);
   9->SetBinContent(15,276.9252);
   9->SetBinContent(16,323.0806);
   9->SetBinContent(17,349.4551);
   9->SetBinContent(18,437.8097);
   9->SetBinContent(19,457.151);
   9->SetBinContent(20,483.5255);
   9->SetBinContent(21,531.4392);
   9->SetBinContent(22,538.0328);
   9->SetBinContent(23,590.7819);
   9->SetBinContent(24,593.8589);
   9->SetBinContent(25,621.5521);
   9->SetBinContent(26,638.6956);
   9->SetBinContent(27,600.4525);
   9->SetBinContent(28,625.9479);
   9->SetBinContent(29,599.1338);
   9->SetBinContent(30,555.6158);
   9->SetBinContent(31,522.6477);
   9->SetBinContent(32,512.9771);
   9->SetBinContent(33,490.5587);
   9->SetBinContent(34,459.7885);
   9->SetBinContent(35,407.479);
   9->SetBinContent(36,377.1483);
   9->SetBinContent(37,362.6423);
   9->SetBinContent(38,320.8827);
   9->SetBinContent(39,296.7061);
   9->SetBinContent(40,292.3103);
   9->SetBinContent(41,250.9904);
   9->SetBinContent(42,225.0564);
   9->SetBinContent(43,194.7267);
   9->SetBinContent(44,183.7377);
   9->SetBinContent(45,152.9685);
   9->SetBinContent(46,141.54);
   9->SetBinContent(47,108.5726);
   9->SetBinContent(48,108.5726);
   9->SetBinContent(49,102.8583);
   9->SetBinContent(50,93.62734);
   9->SetBinContent(51,603.9691);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,50);
   10->SetBinContent(3,14.8483);
   10->SetBinContent(4,48.91197);
   10->SetBinContent(5,127.521);
   10->SetBinContent(6,250.09);
   10->SetBinContent(7,430.8865);
   10->SetBinContent(8,723.7711);
   10->SetBinContent(9,1109.237);
   10->SetBinContent(10,1568.07);
   10->SetBinContent(11,2095.341);
   10->SetBinContent(12,2798.442);
   10->SetBinContent(13,3411.835);
   10->SetBinContent(14,4121.613);
   10->SetBinContent(15,4870.396);
   10->SetBinContent(16,5590.66);
   10->SetBinContent(17,6149.992);
   10->SetBinContent(18,6659.561);
   10->SetBinContent(19,7077.75);
   10->SetBinContent(20,7456.07);
   10->SetBinContent(21,7574.805);
   10->SetBinContent(22,7585.572);
   10->SetBinContent(23,7568.402);
   10->SetBinContent(24,7328.896);
   10->SetBinContent(25,7213.363);
   10->SetBinContent(26,6732.896);
   10->SetBinContent(27,6368.836);
   10->SetBinContent(28,5912.814);
   10->SetBinContent(29,5433.221);
   10->SetBinContent(30,4939.949);
   10->SetBinContent(31,4420.195);
   10->SetBinContent(32,3884.549);
   10->SetBinContent(33,3428.437);
   10->SetBinContent(34,3018.343);
   10->SetBinContent(35,2620.191);
   10->SetBinContent(36,2201.068);
   10->SetBinContent(37,1895.6);
   10->SetBinContent(38,1607.956);
   10->SetBinContent(39,1344.768);
   10->SetBinContent(40,1111.858);
   10->SetBinContent(41,920.289);
   10->SetBinContent(42,778.7961);
   10->SetBinContent(43,618.0881);
   10->SetBinContent(44,492.6077);
   10->SetBinContent(45,442.2409);
   10->SetBinContent(46,342.6718);
   10->SetBinContent(47,281.824);
   10->SetBinContent(48,233.7863);
   10->SetBinContent(49,184.2929);
   10->SetBinContent(50,154.0146);
   10->SetBinContent(51,595.0882);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,50);
   11->SetBinContent(5,30.52083);
   11->SetBinContent(6,30.52083);
   11->SetBinContent(7,213.6458);
   11->SetBinContent(8,335.7292);
   11->SetBinContent(9,549.375);
   11->SetBinContent(10,671.4583);
   11->SetBinContent(11,488.3334);
   11->SetBinContent(12,640.9374);
   11->SetBinContent(13,1068.229);
   11->SetBinContent(14,915.6248);
   11->SetBinContent(15,1342.917);
   11->SetBinContent(16,1403.958);
   11->SetBinContent(17,1526.042);
   11->SetBinContent(18,1495.521);
   11->SetBinContent(19,1831.251);
   11->SetBinContent(20,1220.833);
   11->SetBinContent(21,1373.438);
   11->SetBinContent(22,1739.688);
   11->SetBinContent(23,1220.833);
   11->SetBinContent(24,1587.084);
   11->SetBinContent(25,1495.521);
   11->SetBinContent(26,1220.833);
   11->SetBinContent(27,1281.875);
   11->SetBinContent(28,1007.187);
   11->SetBinContent(29,976.6664);
   11->SetBinContent(30,915.6248);
   11->SetBinContent(31,854.5831);
   11->SetBinContent(32,763.0207);
   11->SetBinContent(33,518.8542);
   11->SetBinContent(34,732.4999);
   11->SetBinContent(35,335.7292);
   11->SetBinContent(36,213.6458);
   11->SetBinContent(37,457.8125);
   11->SetBinContent(38,335.7292);
   11->SetBinContent(39,122.0833);
   11->SetBinContent(40,183.125);
   11->SetBinContent(41,427.2917);
   11->SetBinContent(42,61.04166);
   11->SetBinContent(43,122.0833);
   11->SetBinContent(44,152.6042);
   11->SetBinContent(45,61.04166);
   11->SetBinContent(46,61.04166);
   11->SetBinContent(47,30.52083);
   11->SetBinContent(49,30.52083);
   11->SetBinContent(50,30.52083);
   11->SetBinContent(51,61.04166);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,50);
   12->SetBinContent(3,3.57978);
   12->SetBinContent(4,24.3425);
   12->SetBinContent(5,45.82121);
   12->SetBinContent(6,78.75526);
   12->SetBinContent(7,138.8957);
   12->SetBinContent(8,198.3202);
   12->SetBinContent(9,240.5617);
   12->SetBinContent(10,320.0316);
   12->SetBinContent(11,398.7853);
   12->SetBinContent(12,437.4462);
   12->SetBinContent(13,500.4491);
   12->SetBinContent(14,589.9419);
   12->SetBinContent(15,609.2723);
   12->SetBinContent(16,657.9564);
   12->SetBinContent(17,646.5013);
   12->SetBinContent(18,662.2521);
   12->SetBinContent(19,686.5941);
   12->SetBinContent(20,667.9796);
   12->SetBinContent(21,703.7767);
   12->SetBinContent(22,691.6057);
   12->SetBinContent(23,653.6608);
   12->SetBinContent(24,632.1825);
   12->SetBinContent(25,574.1912);
   12->SetBinContent(26,554.8607);
   12->SetBinContent(27,518.3477);
   12->SetBinContent(28,496.1534);
   12->SetBinContent(29,455.3447);
   12->SetBinContent(30,374.4432);
   12->SetBinContent(31,342.2258);
   12->SetBinContent(32,322.8954);
   12->SetBinContent(33,269.9156);
   12->SetBinContent(34,257.0287);
   12->SetBinContent(35,221.2308);
   12->SetBinContent(36,227.6744);
   12->SetBinContent(37,180.4212);
   12->SetBinContent(38,166.818);
   12->SetBinContent(39,126.0085);
   12->SetBinContent(40,111.6893);
   12->SetBinContent(41,111.6893);
   12->SetBinContent(42,74.45951);
   12->SetBinContent(43,83.76696);
   12->SetBinContent(44,70.16376);
   12->SetBinContent(45,66.58398);
   12->SetBinContent(46,57.27653);
   12->SetBinContent(47,54.4127);
   12->SetBinContent(48,40.8095);
   12->SetBinContent(49,30.07014);
   12->SetBinContent(50,28.63823);
   12->SetBinContent(51,174.6936);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,50);
   13->SetBinContent(4,104.0221);
   13->SetBinContent(5,364.0772);
   13->SetBinContent(6,832.1765);
   13->SetBinContent(7,1404.298);
   13->SetBinContent(8,2964.627);
   13->SetBinContent(9,3848.814);
   13->SetBinContent(10,5461.161);
   13->SetBinContent(11,7541.61);
   13->SetBinContent(12,8997.917);
   13->SetBinContent(13,11182.37);
   13->SetBinContent(14,12274.59);
   13->SetBinContent(15,14771.11);
   13->SetBinContent(16,18984.03);
   13->SetBinContent(17,17787.76);
   13->SetBinContent(18,17891.78);
   13->SetBinContent(19,21844.67);
   13->SetBinContent(20,20232.31);
   13->SetBinContent(21,21688.64);
   13->SetBinContent(22,20024.26);
   13->SetBinContent(23,18671.96);
   13->SetBinContent(24,16799.54);
   13->SetBinContent(25,15915.35);
   13->SetBinContent(26,16435.45);
   13->SetBinContent(27,13158.78);
   13->SetBinContent(28,12898.72);
   13->SetBinContent(29,10922.31);
   13->SetBinContent(30,11078.35);
   13->SetBinContent(31,8945.906);
   13->SetBinContent(32,8737.863);
   13->SetBinContent(33,6657.419);
   13->SetBinContent(34,5357.139);
   13->SetBinContent(35,3848.814);
   13->SetBinContent(36,3796.803);
   13->SetBinContent(37,3068.649);
   13->SetBinContent(38,2080.44);
   13->SetBinContent(39,2340.495);
   13->SetBinContent(40,1716.364);
   13->SetBinContent(41,1612.342);
   13->SetBinContent(42,1196.254);
   13->SetBinContent(43,780.1655);
   13->SetBinContent(44,572.1213);
   13->SetBinContent(45,624.1323);
   13->SetBinContent(46,312.0662);
   13->SetBinContent(47,312.0662);
   13->SetBinContent(48,312.0662);
   13->SetBinContent(49,208.0441);
   13->SetBinContent(50,208.0441);
   13->SetBinContent(51,832.1765);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,50);
   14->SetBinContent(1,9.254577);
   14->SetBinContent(3,74.03661);
   14->SetBinContent(4,157.3278);
   14->SetBinContent(5,564.5292);
   14->SetBinContent(6,888.4394);
   14->SetBinContent(7,1193.839);
   14->SetBinContent(8,1758.365);
   14->SetBinContent(9,2239.602);
   14->SetBinContent(10,2683.825);
   14->SetBinContent(11,2961.464);
   14->SetBinContent(12,3202.085);
   14->SetBinContent(13,3137.302);
   14->SetBinContent(14,3535.252);
   14->SetBinContent(15,3803.636);
   14->SetBinContent(16,4072.021);
   14->SetBinContent(17,4303.381);
   14->SetBinContent(18,4164.565);
   14->SetBinContent(19,4294.127);
   14->SetBinContent(20,4294.127);
   14->SetBinContent(21,3683.326);
   14->SetBinContent(22,3803.636);
   14->SetBinContent(23,3414.941);
   14->SetBinContent(24,3276.122);
   14->SetBinContent(25,3072.52);
   14->SetBinContent(26,2683.825);
   14->SetBinContent(27,2378.422);
   14->SetBinContent(28,1832.401);
   14->SetBinContent(29,1952.71);
   14->SetBinContent(30,1739.856);
   14->SetBinContent(31,1471.475);
   14->SetBinContent(32,1110.549);
   14->SetBinContent(33,832.9119);
   14->SetBinContent(34,814.4028);
   14->SetBinContent(35,814.4028);
   14->SetBinContent(36,592.2929);
   14->SetBinContent(37,527.5109);
   14->SetBinContent(38,314.6556);
   14->SetBinContent(39,323.9102);
   14->SetBinContent(40,138.8186);
   14->SetBinContent(41,111.0549);
   14->SetBinContent(42,111.0549);
   14->SetBinContent(43,83.29119);
   14->SetBinContent(44,83.29119);
   14->SetBinContent(45,120.3095);
   14->SetBinContent(46,55.52746);
   14->SetBinContent(47,64.78204);
   14->SetBinContent(49,18.50915);
   14->SetBinContent(50,55.52746);
   14->SetBinContent(51,175.837);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,50);
   15->SetBinContent(4,56.09351);
   15->SetBinContent(5,168.2805);
   15->SetBinContent(6,280.4676);
   15->SetBinContent(7,280.4676);
   15->SetBinContent(8,420.7013);
   15->SetBinContent(9,869.4494);
   15->SetBinContent(10,925.5429);
   15->SetBinContent(11,841.4026);
   15->SetBinContent(12,897.4962);
   15->SetBinContent(13,1149.917);
   15->SetBinContent(14,841.4026);
   15->SetBinContent(15,1093.823);
   15->SetBinContent(16,1374.291);
   15->SetBinContent(17,953.5897);
   15->SetBinContent(18,981.6364);
   15->SetBinContent(19,1206.01);
   15->SetBinContent(20,1570.618);
   15->SetBinContent(21,1065.777);
   15->SetBinContent(22,1710.852);
   15->SetBinContent(23,925.5429);
   15->SetBinContent(24,1318.198);
   15->SetBinContent(25,953.5897);
   15->SetBinContent(26,953.5897);
   15->SetBinContent(27,925.5429);
   15->SetBinContent(28,560.9351);
   15->SetBinContent(29,757.2624);
   15->SetBinContent(30,448.7481);
   15->SetBinContent(31,617.0286);
   15->SetBinContent(32,701.1689);
   15->SetBinContent(33,420.7013);
   15->SetBinContent(34,196.3273);
   15->SetBinContent(35,252.4208);
   15->SetBinContent(36,476.7948);
   15->SetBinContent(37,224.374);
   15->SetBinContent(38,140.2338);
   15->SetBinContent(39,84.14027);
   15->SetBinContent(40,56.09351);
   15->SetBinContent(41,84.14027);
   15->SetBinContent(42,168.2805);
   15->SetBinContent(43,140.2338);
   15->SetBinContent(44,84.14027);
   15->SetBinContent(45,28.04676);
   15->SetBinContent(46,84.14027);
   15->SetBinContent(48,84.14027);
   15->SetBinContent(50,56.09351);
   15->SetBinContent(51,84.14027);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,50);
   16->SetBinContent(4,21.23957);
   16->SetBinContent(5,116.8177);
   16->SetBinContent(6,191.1562);
   16->SetBinContent(7,212.3957);
   16->SetBinContent(8,307.9738);
   16->SetBinContent(9,467.2705);
   16->SetBinContent(10,446.0309);
   16->SetBinContent(11,647.8071);
   16->SetBinContent(12,626.5675);
   16->SetBinContent(13,509.7496);
   16->SetBinContent(14,658.4269);
   16->SetBinContent(15,775.2449);
   16->SetBinContent(16,711.526);
   16->SetBinContent(17,669.0468);
   16->SetBinContent(18,584.0883);
   16->SetBinContent(19,594.7081);
   16->SetBinContent(20,754.0052);
   16->SetBinContent(21,573.4684);
   16->SetBinContent(22,456.6507);
   16->SetBinContent(23,424.7914);
   16->SetBinContent(24,520.3694);
   16->SetBinContent(25,244.2551);
   16->SetBinContent(26,297.354);
   16->SetBinContent(27,371.6924);
   16->SetBinContent(28,244.2551);
   16->SetBinContent(29,329.2133);
   16->SetBinContent(30,276.1144);
   16->SetBinContent(31,212.3957);
   16->SetBinContent(32,138.0573);
   16->SetBinContent(33,84.95831);
   16->SetBinContent(34,31.85936);
   16->SetBinContent(35,106.1979);
   16->SetBinContent(36,84.95831);
   16->SetBinContent(37,21.23957);
   16->SetBinContent(38,42.47915);
   16->SetBinContent(39,74.33852);
   16->SetBinContent(40,42.47915);
   16->SetBinContent(41,31.85936);
   16->SetBinContent(43,10.61979);
   16->SetBinContent(44,31.85936);
   16->SetBinContent(46,31.85936);
   16->SetBinContent(48,21.23957);
   16->SetBinContent(49,10.61979);
   16->SetBinContent(50,10.61979);
   16->SetBinContent(51,10.61979);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,50);
   17->SetBinContent(1,60.82056);
   17->SetBinContent(3,243.2822);
   17->SetBinContent(4,304.1028);
   17->SetBinContent(5,608.2056);
   17->SetBinContent(6,729.8467);
   17->SetBinContent(7,973.129);
   17->SetBinContent(8,2372.002);
   17->SetBinContent(9,1885.437);
   17->SetBinContent(10,2432.823);
   17->SetBinContent(11,2189.54);
   17->SetBinContent(12,3345.131);
   17->SetBinContent(13,2615.284);
   17->SetBinContent(14,2980.208);
   17->SetBinContent(15,3466.772);
   17->SetBinContent(16,3162.669);
   17->SetBinContent(17,3588.413);
   17->SetBinContent(18,3953.336);
   17->SetBinContent(19,3101.849);
   17->SetBinContent(20,3588.413);
   17->SetBinContent(21,2797.746);
   17->SetBinContent(22,2736.925);
   17->SetBinContent(23,3527.593);
   17->SetBinContent(24,2676.105);
   17->SetBinContent(25,2067.899);
   17->SetBinContent(26,2493.643);
   17->SetBinContent(27,2311.181);
   17->SetBinContent(28,1885.437);
   17->SetBinContent(29,1824.617);
   17->SetBinContent(30,1459.693);
   17->SetBinContent(31,1946.258);
   17->SetBinContent(32,1702.976);
   17->SetBinContent(33,1277.232);
   17->SetBinContent(34,1277.232);
   17->SetBinContent(35,1033.95);
   17->SetBinContent(36,912.3084);
   17->SetBinContent(37,669.0262);
   17->SetBinContent(38,912.3084);
   17->SetBinContent(39,547.3851);
   17->SetBinContent(40,425.7439);
   17->SetBinContent(41,608.2056);
   17->SetBinContent(42,425.7439);
   17->SetBinContent(43,182.4617);
   17->SetBinContent(44,608.2056);
   17->SetBinContent(45,364.9234);
   17->SetBinContent(46,182.4617);
   17->SetBinContent(47,243.2822);
   17->SetBinContent(48,121.6411);
   17->SetBinContent(49,182.4617);
   17->SetBinContent(50,243.2822);
   17->SetBinContent(51,1459.693);
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
