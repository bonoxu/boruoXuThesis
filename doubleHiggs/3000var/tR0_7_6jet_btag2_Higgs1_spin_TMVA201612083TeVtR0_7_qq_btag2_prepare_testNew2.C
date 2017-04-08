{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:46:00 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.311013,1.31746,6.164628);
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
   
   TH1F *THStack_stack_29 = new TH1F("THStack_stack_29","",50,0,1);
   THStack_stack_29->SetMinimum(0.02480859);
   THStack_stack_29->SetMaximum(255021.3);
   THStack_stack_29->SetDirectory(0);
   THStack_stack_29->SetStats(0);
   THStack_stack_29->SetLineWidth(2);
   THStack_stack_29->SetMarkerSize(1.2);
   THStack_stack_29->GetXaxis()->SetTitle("cos*(#theta_{H#rightarrowbb}) sub-jets");
   THStack_stack_29->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_29->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_29->GetXaxis()->SetLabelColor(ci);
   THStack_stack_29->GetXaxis()->SetLabelFont(42);
   THStack_stack_29->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_29->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_29->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_29->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_29->GetXaxis()->SetTitleColor(ci);
   THStack_stack_29->GetXaxis()->SetTitleFont(42);
   THStack_stack_29->GetYaxis()->SetTitle("Number of events");
   THStack_stack_29->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_29->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_29->GetYaxis()->SetLabelColor(ci);
   THStack_stack_29->GetYaxis()->SetLabelFont(42);
   THStack_stack_29->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_29->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_29->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_29->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_29->GetYaxis()->SetTitleColor(ci);
   THStack_stack_29->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_29->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_29->GetZaxis()->SetLabelColor(ci);
   THStack_stack_29->GetZaxis()->SetLabelFont(42);
   THStack_stack_29->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_29->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_29->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_29->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_29->GetZaxis()->SetTitleColor(ci);
   THStack_stack_29->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_29);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,1.930308);
   0->SetBinContent(2,1.91051);
   0->SetBinContent(3,1.663034);
   0->SetBinContent(4,1.732327);
   0->SetBinContent(5,1.841217);
   0->SetBinContent(6,1.999601);
   0->SetBinContent(7,1.70263);
   0->SetBinContent(8,1.979803);
   0->SetBinContent(9,1.613539);
   0->SetBinContent(10,1.623438);
   0->SetBinContent(11,1.762024);
   0->SetBinContent(12,1.930308);
   0->SetBinContent(13,1.900611);
   0->SetBinContent(14,1.870914);
   0->SetBinContent(15,1.771923);
   0->SetBinContent(16,1.762024);
   0->SetBinContent(17,1.682832);
   0->SetBinContent(18,1.841217);
   0->SetBinContent(19,1.880813);
   0->SetBinContent(20,1.672933);
   0->SetBinContent(21,1.653135);
   0->SetBinContent(22,1.831318);
   0->SetBinContent(23,1.712529);
   0->SetBinContent(24,1.920409);
   0->SetBinContent(25,1.781822);
   0->SetBinContent(26,1.682832);
   0->SetBinContent(27,1.930308);
   0->SetBinContent(28,1.80162);
   0->SetBinContent(29,1.653135);
   0->SetBinContent(30,1.722428);
   0->SetBinContent(31,1.920409);
   0->SetBinContent(32,1.653135);
   0->SetBinContent(33,1.771923);
   0->SetBinContent(34,1.771923);
   0->SetBinContent(35,1.682832);
   0->SetBinContent(36,1.80162);
   0->SetBinContent(37,1.60364);
   0->SetBinContent(38,1.80162);
   0->SetBinContent(39,1.465054);
   0->SetBinContent(40,1.742226);
   0->SetBinContent(41,1.821419);
   0->SetBinContent(42,1.682832);
   0->SetBinContent(43,1.920409);
   0->SetBinContent(44,1.742226);
   0->SetBinContent(45,1.732327);
   0->SetBinContent(46,1.742226);
   0->SetBinContent(47,1.930308);
   0->SetBinContent(48,1.920409);
   0->SetBinContent(49,2.167882);
   0->SetBinContent(50,2.435153);
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
   1->SetBinContent(1,1.039287);
   1->SetBinContent(2,1.083828);
   1->SetBinContent(3,1.163012);
   1->SetBinContent(4,1.118471);
   1->SetBinContent(5,1.113522);
   1->SetBinContent(6,1.138267);
   1->SetBinContent(7,1.202604);
   1->SetBinContent(8,1.197655);
   1->SetBinContent(9,0.9452569);
   1->SetBinContent(10,1.064032);
   1->SetBinContent(11,1.192706);
   1->SetBinContent(12,1.083828);
   1->SetBinContent(13,1.019492);
   1->SetBinContent(14,1.118471);
   1->SetBinContent(15,1.064032);
   1->SetBinContent(16,1.187757);
   1->SetBinContent(17,1.227348);
   1->SetBinContent(18,1.247144);
   1->SetBinContent(19,1.158063);
   1->SetBinContent(20,1.31643);
   1->SetBinContent(21,1.232297);
   1->SetBinContent(22,1.158063);
   1->SetBinContent(23,1.291685);
   1->SetBinContent(24,1.257042);
   1->SetBinContent(25,1.202604);
   1->SetBinContent(26,1.301583);
   1->SetBinContent(27,1.128369);
   1->SetBinContent(28,1.286736);
   1->SetBinContent(29,1.261991);
   1->SetBinContent(30,1.346124);
   1->SetBinContent(31,1.291685);
   1->SetBinContent(32,1.286736);
   1->SetBinContent(33,1.153114);
   1->SetBinContent(34,1.306532);
   1->SetBinContent(35,1.41046);
   1->SetBinContent(36,1.455001);
   1->SetBinContent(37,1.261991);
   1->SetBinContent(38,1.341175);
   1->SetBinContent(39,1.331277);
   1->SetBinContent(40,1.207553);
   1->SetBinContent(41,1.385716);
   1->SetBinContent(42,1.375818);
   1->SetBinContent(43,1.499542);
   1->SetBinContent(44,1.514389);
   1->SetBinContent(45,1.514389);
   1->SetBinContent(46,1.643062);
   1->SetBinContent(47,1.697501);
   1->SetBinContent(48,1.959797);
   1->SetBinContent(49,2.439857);
   1->SetBinContent(50,3.40988);
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
   2->SetBinContent(1,2.667516);
   2->SetBinContent(2,2.528941);
   2->SetBinContent(3,2.608127);
   2->SetBinContent(4,2.449756);
   2->SetBinContent(5,2.385417);
   2->SetBinContent(6,2.449756);
   2->SetBinContent(7,2.692261);
   2->SetBinContent(8,2.598228);
   2->SetBinContent(9,2.499247);
   2->SetBinContent(10,2.69721);
   2->SetBinContent(11,2.474501);
   2->SetBinContent(12,2.429959);
   2->SetBinContent(13,2.395316);
   2->SetBinContent(14,2.613076);
   2->SetBinContent(15,2.350774);
   2->SetBinContent(16,2.519043);
   2->SetBinContent(17,2.553687);
   2->SetBinContent(18,2.58833);
   2->SetBinContent(19,2.69721);
   2->SetBinContent(20,2.489348);
   2->SetBinContent(21,2.702159);
   2->SetBinContent(22,2.464603);
   2->SetBinContent(23,2.58833);
   2->SetBinContent(24,2.405214);
   2->SetBinContent(25,2.553687);
   2->SetBinContent(26,2.741752);
   2->SetBinContent(27,2.815989);
   2->SetBinContent(28,2.474501);
   2->SetBinContent(29,2.622974);
   2->SetBinContent(30,2.474501);
   2->SetBinContent(31,2.548738);
   2->SetBinContent(32,2.528941);
   2->SetBinContent(33,2.543788);
   2->SetBinContent(34,2.548738);
   2->SetBinContent(35,2.558636);
   2->SetBinContent(36,2.603178);
   2->SetBinContent(37,2.652668);
   2->SetBinContent(38,2.454705);
   2->SetBinContent(39,2.578432);
   2->SetBinContent(40,2.528941);
   2->SetBinContent(41,2.622974);
   2->SetBinContent(42,2.692261);
   2->SetBinContent(43,2.69721);
   2->SetBinContent(44,2.583381);
   2->SetBinContent(45,2.811039);
   2->SetBinContent(46,2.91497);
   2->SetBinContent(47,3.221814);
   2->SetBinContent(48,3.419778);
   2->SetBinContent(49,4.068109);
   2->SetBinContent(50,5.617175);
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
   3->SetBinContent(1,9.926886);
   3->SetBinContent(2,9.825591);
   3->SetBinContent(3,10.46712);
   3->SetBinContent(4,9.555472);
   3->SetBinContent(5,9.555472);
   3->SetBinContent(6,8.643822);
   3->SetBinContent(7,9.420413);
   3->SetBinContent(8,9.319118);
   3->SetBinContent(9,10.09571);
   3->SetBinContent(10,10.16324);
   3->SetBinContent(11,9.386648);
   3->SetBinContent(12,10.16324);
   3->SetBinContent(13,10.02818);
   3->SetBinContent(14,9.825591);
   3->SetBinContent(15,8.677587);
   3->SetBinContent(16,9.217824);
   3->SetBinContent(17,10.36583);
   3->SetBinContent(18,9.555472);
   3->SetBinContent(19,9.285354);
   3->SetBinContent(20,9.926886);
   3->SetBinContent(21,10.53465);
   3->SetBinContent(22,9.96065);
   3->SetBinContent(23,11.37877);
   3->SetBinContent(24,10.06194);
   3->SetBinContent(25,11.20995);
   3->SetBinContent(26,10.43336);
   3->SetBinContent(27,11.17618);
   3->SetBinContent(28,10.53465);
   3->SetBinContent(29,10.73724);
   3->SetBinContent(30,10.66971);
   3->SetBinContent(31,11.24371);
   3->SetBinContent(32,10.93983);
   3->SetBinContent(33,10.60218);
   3->SetBinContent(34,11.81772);
   3->SetBinContent(35,11.37877);
   3->SetBinContent(36,10.09571);
   3->SetBinContent(37,11.20995);
   3->SetBinContent(38,10.83854);
   3->SetBinContent(39,11.48007);
   3->SetBinContent(40,11.78395);
   3->SetBinContent(41,12.59431);
   3->SetBinContent(42,11.85148);
   3->SetBinContent(43,12.18913);
   3->SetBinContent(44,12.99949);
   3->SetBinContent(45,12.96572);
   3->SetBinContent(46,14.18126);
   3->SetBinContent(47,14.45137);
   3->SetBinContent(48,16.78117);
   3->SetBinContent(49,20.56294);
   3->SetBinContent(50,27.51869);
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
   4->SetBinContent(1,10.53937);
   4->SetBinContent(2,10.03646);
   4->SetBinContent(3,10.29885);
   4->SetBinContent(4,10.08019);
   4->SetBinContent(5,9.927129);
   4->SetBinContent(6,9.927129);
   4->SetBinContent(7,10.43004);
   4->SetBinContent(8,10.40818);
   4->SetBinContent(9,9.905263);
   4->SetBinContent(10,10.27698);
   4->SetBinContent(11,10.7799);
   4->SetBinContent(12,10.27698);
   4->SetBinContent(13,9.861531);
   4->SetBinContent(14,9.599141);
   4->SetBinContent(15,10.73617);
   4->SetBinContent(16,9.336751);
   4->SetBinContent(17,9.992726);
   4->SetBinContent(18,10.53937);
   4->SetBinContent(19,10.36445);
   4->SetBinContent(20,9.577275);
   4->SetBinContent(21,11.06415);
   4->SetBinContent(22,11.21721);
   4->SetBinContent(23,10.99856);
   4->SetBinContent(24,10.84549);
   4->SetBinContent(25,10.99856);
   4->SetBinContent(26,11.26095);
   4->SetBinContent(27,11.58893);
   4->SetBinContent(28,10.99856);
   4->SetBinContent(29,12.04812);
   4->SetBinContent(30,10.18952);
   4->SetBinContent(31,9.883397);
   4->SetBinContent(32,10.5831);
   4->SetBinContent(33,11.50147);
   4->SetBinContent(34,10.5831);
   4->SetBinContent(35,11.6764);
   4->SetBinContent(36,11.58893);
   4->SetBinContent(37,11.39214);
   4->SetBinContent(38,11.5452);
   4->SetBinContent(39,12.79155);
   4->SetBinContent(40,11.72013);
   4->SetBinContent(41,12.20118);
   4->SetBinContent(42,12.35424);
   4->SetBinContent(43,12.92275);
   4->SetBinContent(44,12.76969);
   4->SetBinContent(45,12.61663);
   4->SetBinContent(46,14.60642);
   4->SetBinContent(47,15.74344);
   4->SetBinContent(48,16.31196);
   4->SetBinContent(49,22.45626);
   4->SetBinContent(50,32.66761);
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
   5->SetBinContent(1,43.15026);
   5->SetBinContent(2,41.40561);
   5->SetBinContent(3,40.35882);
   5->SetBinContent(4,41.87085);
   5->SetBinContent(5,44.19705);
   5->SetBinContent(6,39.25387);
   5->SetBinContent(7,42.68502);
   5->SetBinContent(8,41.87085);
   5->SetBinContent(9,42.74318);
   5->SetBinContent(10,42.16162);
   5->SetBinContent(11,43.32473);
   5->SetBinContent(12,41.58007);
   5->SetBinContent(13,40.53328);
   5->SetBinContent(14,41.40561);
   5->SetBinContent(15,42.04531);
   5->SetBinContent(16,41.52192);
   5->SetBinContent(17,41.05668);
   5->SetBinContent(18,43.6155);
   5->SetBinContent(19,41.17299);
   5->SetBinContent(20,43.55735);
   5->SetBinContent(21,40.35882);
   5->SetBinContent(22,43.03395);
   5->SetBinContent(23,41.81269);
   5->SetBinContent(24,43.20842);
   5->SetBinContent(25,41.23114);
   5->SetBinContent(26,43.55735);
   5->SetBinContent(27,40.53328);
   5->SetBinContent(28,45.302);
   5->SetBinContent(29,43.67366);
   5->SetBinContent(30,44.7786);
   5->SetBinContent(31,44.08074);
   5->SetBinContent(32,44.60414);
   5->SetBinContent(33,38.73048);
   5->SetBinContent(34,43.96443);
   5->SetBinContent(35,43.67366);
   5->SetBinContent(36,43.32473);
   5->SetBinContent(37,41.17299);
   5->SetBinContent(38,46.29063);
   5->SetBinContent(39,41.87085);
   5->SetBinContent(40,45.76724);
   5->SetBinContent(41,45.76724);
   5->SetBinContent(42,45.302);
   5->SetBinContent(43,42.68502);
   5->SetBinContent(44,46.29063);
   5->SetBinContent(45,47.80267);
   5->SetBinContent(46,43.67366);
   5->SetBinContent(47,46.75587);
   5->SetBinContent(48,48.38422);
   5->SetBinContent(49,60.94571);
   5->SetBinContent(50,72.75061);
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
   6->SetBinContent(1,1143.703);
   6->SetBinContent(2,1126.161);
   6->SetBinContent(3,1059.503);
   6->SetBinContent(4,1094.586);
   6->SetBinContent(5,1143.703);
   6->SetBinContent(6,1058.626);
   6->SetBinContent(7,1095.464);
   6->SetBinContent(8,1186.679);
   6->SetBinContent(9,1078.799);
   6->SetBinContent(10,1083.184);
   6->SetBinContent(11,1134.932);
   6->SetBinContent(12,1079.676);
   6->SetBinContent(13,1066.52);
   6->SetBinContent(14,1113.005);
   6->SetBinContent(15,1109.497);
   6->SetBinContent(16,1066.52);
   6->SetBinContent(17,1104.234);
   6->SetBinContent(18,1105.988);
   6->SetBinContent(19,1174.4);
   6->SetBinContent(20,1105.111);
   6->SetBinContent(21,1069.151);
   6->SetBinContent(22,1116.513);
   6->SetBinContent(23,1128.792);
   6->SetBinContent(24,1175.277);
   6->SetBinContent(25,1158.613);
   6->SetBinContent(26,1150.719);
   6->SetBinContent(27,1177.031);
   6->SetBinContent(28,1165.63);
   6->SetBinContent(29,1168.261);
   6->SetBinContent(30,1161.244);
   6->SetBinContent(31,1165.63);
   6->SetBinContent(32,1134.055);
   6->SetBinContent(33,1158.613);
   6->SetBinContent(34,1235.796);
   6->SetBinContent(35,1203.344);
   6->SetBinContent(36,1148.088);
   6->SetBinContent(37,1225.271);
   6->SetBinContent(38,1242.812);
   6->SetBinContent(39,1221.762);
   6->SetBinContent(40,1290.174);
   6->SetBinContent(41,1255.968);
   6->SetBinContent(42,1251.583);
   6->SetBinContent(43,1263.862);
   6->SetBinContent(44,1426.998);
   6->SetBinContent(45,1448.925);
   6->SetBinContent(46,1510.32);
   6->SetBinContent(47,1586.626);
   6->SetBinContent(48,1820.805);
   6->SetBinContent(49,2282.991);
   6->SetBinContent(50,3648.407);
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
   7->SetBinContent(1,246.1273);
   7->SetBinContent(2,234.525);
   7->SetBinContent(3,245.8511);
   7->SetBinContent(4,234.6632);
   7->SetBinContent(5,247.3704);
   7->SetBinContent(6,241.8455);
   7->SetBinContent(7,235.7681);
   7->SetBinContent(8,241.1549);
   7->SetBinContent(9,243.2268);
   7->SetBinContent(10,228.4476);
   7->SetBinContent(11,240.4643);
   7->SetBinContent(12,245.713);
   7->SetBinContent(13,228.5858);
   7->SetBinContent(14,240.8787);
   7->SetBinContent(15,236.4588);
   7->SetBinContent(16,246.6798);
   7->SetBinContent(17,239.6356);
   7->SetBinContent(18,258.2821);
   7->SetBinContent(19,240.7406);
   7->SetBinContent(20,233.6963);
   7->SetBinContent(21,244.1936);
   7->SetBinContent(22,232.4532);
   7->SetBinContent(23,239.6356);
   7->SetBinContent(24,252.7572);
   7->SetBinContent(25,244.8842);
   7->SetBinContent(26,251.9285);
   7->SetBinContent(27,236.4588);
   7->SetBinContent(28,242.9505);
   7->SetBinContent(29,242.1218);
   7->SetBinContent(30,253.586);
   7->SetBinContent(31,246.6798);
   7->SetBinContent(32,248.7517);
   7->SetBinContent(33,261.4589);
   7->SetBinContent(34,251.376);
   7->SetBinContent(35,265.8788);
   7->SetBinContent(36,256.7628);
   7->SetBinContent(37,261.597);
   7->SetBinContent(38,244.608);
   7->SetBinContent(39,258.8346);
   7->SetBinContent(40,262.702);
   7->SetBinContent(41,254.0003);
   7->SetBinContent(42,262.1495);
   7->SetBinContent(43,255.934);
   7->SetBinContent(44,273.6137);
   7->SetBinContent(45,268.5032);
   7->SetBinContent(46,277.8955);
   7->SetBinContent(47,280.3817);
   7->SetBinContent(48,311.7355);
   7->SetBinContent(49,357.1779);
   7->SetBinContent(50,492.2617);
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
   8->SetBinContent(1,37.87908);
   8->SetBinContent(2,43.42237);
   8->SetBinContent(3,48.96566);
   8->SetBinContent(4,44.34625);
   8->SetBinContent(5,42.49849);
   8->SetBinContent(6,35.10744);
   8->SetBinContent(7,43.42237);
   8->SetBinContent(8,34.18356);
   8->SetBinContent(9,40.65073);
   8->SetBinContent(10,55.43283);
   8->SetBinContent(11,43.42237);
   8->SetBinContent(12,49.88954);
   8->SetBinContent(13,50.81342);
   8->SetBinContent(14,52.66119);
   8->SetBinContent(15,34.18356);
   8->SetBinContent(16,36.03132);
   8->SetBinContent(17,38.80296);
   8->SetBinContent(18,37.87908);
   8->SetBinContent(19,48.04178);
   8->SetBinContent(20,42.49849);
   8->SetBinContent(21,42.49849);
   8->SetBinContent(22,36.03132);
   8->SetBinContent(23,35.10744);
   8->SetBinContent(24,36.03132);
   8->SetBinContent(25,46.19402);
   8->SetBinContent(26,32.33579);
   8->SetBinContent(27,35.10744);
   8->SetBinContent(28,39.72684);
   8->SetBinContent(29,38.80296);
   8->SetBinContent(30,33.25967);
   8->SetBinContent(31,34.18356);
   8->SetBinContent(32,30.48803);
   8->SetBinContent(33,40.65073);
   8->SetBinContent(34,34.18356);
   8->SetBinContent(35,39.72684);
   8->SetBinContent(36,39.72684);
   8->SetBinContent(37,38.80296);
   8->SetBinContent(38,36.9552);
   8->SetBinContent(39,33.25967);
   8->SetBinContent(40,31.41191);
   8->SetBinContent(41,36.03132);
   8->SetBinContent(42,26.79251);
   8->SetBinContent(43,44.34625);
   8->SetBinContent(44,35.10744);
   8->SetBinContent(45,30.48803);
   8->SetBinContent(46,40.65073);
   8->SetBinContent(47,35.10744);
   8->SetBinContent(48,50.81342);
   8->SetBinContent(49,53.58507);
   8->SetBinContent(50,112.7135);
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
   9->SetBinContent(1,242.1992);
   9->SetBinContent(2,254.0673);
   9->SetBinContent(3,225.0564);
   9->SetBinContent(4,247.4739);
   9->SetBinContent(5,215.386);
   9->SetBinContent(6,256.2651);
   9->SetBinContent(7,256.7047);
   9->SetBinContent(8,237.8036);
   9->SetBinContent(9,245.2761);
   9->SetBinContent(10,240.0014);
   9->SetBinContent(11,247.4739);
   9->SetBinContent(12,237.8036);
   9->SetBinContent(13,262.8588);
   9->SetBinContent(14,242.6388);
   9->SetBinContent(15,235.1662);
   9->SetBinContent(16,246.5948);
   9->SetBinContent(17,261.54);
   9->SetBinContent(18,249.2322);
   9->SetBinContent(19,268.1337);
   9->SetBinContent(20,261.9796);
   9->SetBinContent(21,251.43);
   9->SetBinContent(22,252.7486);
   9->SetBinContent(23,272.969);
   9->SetBinContent(24,257.1443);
   9->SetBinContent(25,265.9358);
   9->SetBinContent(26,284.8375);
   9->SetBinContent(27,284.8375);
   9->SetBinContent(28,288.3541);
   9->SetBinContent(29,297.5852);
   9->SetBinContent(30,279.5626);
   9->SetBinContent(31,292.3103);
   9->SetBinContent(32,273.8481);
   9->SetBinContent(33,297.5852);
   9->SetBinContent(34,313.8495);
   9->SetBinContent(35,306.3767);
   9->SetBinContent(36,299.7831);
   9->SetBinContent(37,306.8163);
   9->SetBinContent(38,289.2333);
   9->SetBinContent(39,312.9703);
   9->SetBinContent(40,323.0806);
   9->SetBinContent(41,336.2678);
   9->SetBinContent(42,328.3555);
   9->SetBinContent(43,370.1151);
   9->SetBinContent(44,369.236);
   9->SetBinContent(45,373.1921);
   9->SetBinContent(46,393.4126);
   9->SetBinContent(47,442.645);
   9->SetBinContent(48,496.2732);
   9->SetBinContent(49,640.8934);
   9->SetBinContent(50,1032.555);
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
   10->SetBinContent(1,2474.852);
   10->SetBinContent(2,2515.92);
   10->SetBinContent(3,2511.842);
   10->SetBinContent(4,2493.201);
   10->SetBinContent(5,2498.444);
   10->SetBinContent(6,2513.59);
   10->SetBinContent(7,2487.667);
   10->SetBinContent(8,2473.687);
   10->SetBinContent(9,2553.492);
   10->SetBinContent(10,2499.318);
   10->SetBinContent(11,2618.443);
   10->SetBinContent(12,2492.619);
   10->SetBinContent(13,2551.453);
   10->SetBinContent(14,2574.172);
   10->SetBinContent(15,2568.929);
   10->SetBinContent(16,2607.375);
   10->SetBinContent(17,2621.938);
   10->SetBinContent(18,2562.521);
   10->SetBinContent(19,2603.88);
   10->SetBinContent(20,2601.55);
   10->SetBinContent(21,2624.268);
   10->SetBinContent(22,2689.802);
   10->SetBinContent(23,2650.19);
   10->SetBinContent(24,2677.569);
   10->SetBinContent(25,2694.462);
   10->SetBinContent(26,2745.141);
   10->SetBinContent(27,2787.083);
   10->SetBinContent(28,2794.655);
   10->SetBinContent(29,2794.655);
   10->SetBinContent(30,2793.781);
   10->SetBinContent(31,2800.189);
   10->SetBinContent(32,2824.946);
   10->SetBinContent(33,2947.858);
   10->SetBinContent(34,2953.683);
   10->SetBinContent(35,2961.547);
   10->SetBinContent(36,3018.925);
   10->SetBinContent(37,3065.818);
   10->SetBinContent(38,3115.332);
   10->SetBinContent(39,3132.517);
   10->SetBinContent(40,3246.399);
   10->SetBinContent(41,3203.293);
   10->SetBinContent(42,3336.398);
   10->SetBinContent(43,3431.349);
   10->SetBinContent(44,3442.417);
   10->SetBinContent(45,3667.852);
   10->SetBinContent(46,3799.501);
   10->SetBinContent(47,4052.024);
   10->SetBinContent(48,4576.471);
   10->SetBinContent(49,5561.268);
   10->SetBinContent(50,8539.521);
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
   11->SetBinContent(1,488.3334);
   11->SetBinContent(2,518.8542);
   11->SetBinContent(3,396.7708);
   11->SetBinContent(4,518.8542);
   11->SetBinContent(5,518.8542);
   11->SetBinContent(6,396.7708);
   11->SetBinContent(7,610.4166);
   11->SetBinContent(8,579.8958);
   11->SetBinContent(9,152.6042);
   11->SetBinContent(10,122.0833);
   11->SetBinContent(11,457.8125);
   11->SetBinContent(12,549.375);
   11->SetBinContent(13,366.25);
   11->SetBinContent(14,396.7708);
   11->SetBinContent(15,305.2083);
   11->SetBinContent(16,518.8542);
   11->SetBinContent(17,457.8125);
   11->SetBinContent(18,885.1039);
   11->SetBinContent(19,671.4583);
   11->SetBinContent(20,488.3334);
   11->SetBinContent(21,579.8958);
   11->SetBinContent(22,244.1666);
   11->SetBinContent(23,549.375);
   11->SetBinContent(24,488.3334);
   11->SetBinContent(25,488.3334);
   11->SetBinContent(26,396.7708);
   11->SetBinContent(27,488.3334);
   11->SetBinContent(28,427.2917);
   11->SetBinContent(29,518.8542);
   11->SetBinContent(30,457.8125);
   11->SetBinContent(31,579.8958);
   11->SetBinContent(32,854.5831);
   11->SetBinContent(33,488.3334);
   11->SetBinContent(34,488.3334);
   11->SetBinContent(35,732.4999);
   11->SetBinContent(36,701.9791);
   11->SetBinContent(37,549.375);
   11->SetBinContent(38,549.375);
   11->SetBinContent(39,335.7292);
   11->SetBinContent(40,732.4999);
   11->SetBinContent(41,701.9791);
   11->SetBinContent(42,579.8958);
   11->SetBinContent(43,824.0623);
   11->SetBinContent(44,640.9374);
   11->SetBinContent(45,946.1456);
   11->SetBinContent(46,1129.271);
   11->SetBinContent(47,1190.312);
   11->SetBinContent(48,854.5831);
   11->SetBinContent(49,2014.376);
   11->SetBinContent(50,3204.686);
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
   12->SetBinContent(1,225.5266);
   12->SetBinContent(2,219.0829);
   12->SetBinContent(3,244.8574);
   12->SetBinContent(4,259.8925);
   12->SetBinContent(5,244.1415);
   12->SetBinContent(6,225.5266);
   12->SetBinContent(7,209.0595);
   12->SetBinContent(8,250.5851);
   12->SetBinContent(9,258.4606);
   12->SetBinContent(10,247.7213);
   12->SetBinContent(11,246.2893);
   12->SetBinContent(12,241.2776);
   12->SetBinContent(13,226.9585);
   12->SetBinContent(14,237.6978);
   12->SetBinContent(15,228.3904);
   12->SetBinContent(16,242.7095);
   12->SetBinContent(17,247.7213);
   12->SetBinContent(18,234.834);
   12->SetBinContent(19,231.9702);
   12->SetBinContent(20,245.5734);
   12->SetBinContent(21,247.0053);
   12->SetBinContent(22,231.9702);
   12->SetBinContent(23,224.0947);
   12->SetBinContent(24,262.0403);
   12->SetBinContent(25,244.1415);
   12->SetBinContent(26,263.4722);
   12->SetBinContent(27,247.0053);
   12->SetBinContent(28,267.7678);
   12->SetBinContent(29,254.1649);
   12->SetBinContent(30,246.2893);
   12->SetBinContent(31,252.017);
   12->SetBinContent(32,254.8808);
   12->SetBinContent(33,264.9041);
   12->SetBinContent(34,265.62);
   12->SetBinContent(35,273.4954);
   12->SetBinContent(36,267.7678);
   12->SetBinContent(37,261.3243);
   12->SetBinContent(38,296.4055);
   12->SetBinContent(39,304.9968);
   12->SetBinContent(40,301.4171);
   12->SetBinContent(41,310.0084);
   12->SetBinContent(42,306.4287);
   12->SetBinContent(43,333.6345);
   12->SetBinContent(44,338.6461);
   12->SetBinContent(45,351.5331);
   12->SetBinContent(46,415.9679);
   12->SetBinContent(47,428.1389);
   12->SetBinContent(48,557.0085);
   12->SetBinContent(49,777.5188);
   12->SetBinContent(50,1762.656);
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
   13->SetBinContent(1,4941.049);
   13->SetBinContent(2,6241.33);
   13->SetBinContent(3,4941.049);
   13->SetBinContent(4,5409.15);
   13->SetBinContent(5,5253.116);
   13->SetBinContent(6,5565.184);
   13->SetBinContent(7,5045.071);
   13->SetBinContent(8,5253.116);
   13->SetBinContent(9,6397.363);
   13->SetBinContent(10,5721.217);
   13->SetBinContent(11,5669.206);
   13->SetBinContent(12,5097.083);
   13->SetBinContent(13,4941.049);
   13->SetBinContent(14,5409.15);
   13->SetBinContent(15,5097.083);
   13->SetBinContent(16,5253.116);
   13->SetBinContent(17,6605.408);
   13->SetBinContent(18,6501.386);
   13->SetBinContent(19,5201.105);
   13->SetBinContent(20,5929.262);
   13->SetBinContent(21,5565.184);
   13->SetBinContent(22,6709.431);
   13->SetBinContent(23,5981.273);
   13->SetBinContent(24,6293.341);
   13->SetBinContent(25,5929.262);
   13->SetBinContent(26,6345.352);
   13->SetBinContent(27,6813.453);
   13->SetBinContent(28,7333.565);
   13->SetBinContent(29,5305.127);
   13->SetBinContent(30,7073.509);
   13->SetBinContent(31,5773.229);
   13->SetBinContent(32,7073.509);
   13->SetBinContent(33,7333.565);
   13->SetBinContent(34,7177.532);
   13->SetBinContent(35,6865.464);
   13->SetBinContent(36,7905.689);
   13->SetBinContent(37,8477.81);
   13->SetBinContent(38,7801.667);
   13->SetBinContent(39,7333.565);
   13->SetBinContent(40,6709.431);
   13->SetBinContent(41,8009.711);
   13->SetBinContent(42,8789.874);
   13->SetBinContent(43,9205.96);
   13->SetBinContent(44,9101.938);
   13->SetBinContent(45,9830.089);
   13->SetBinContent(46,9153.949);
   13->SetBinContent(47,11182.37);
   13->SetBinContent(48,14459.04);
   13->SetBinContent(49,17839.77);
   13->SetBinContent(50,33755.36);
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
   14->SetBinContent(1,518.2563);
   14->SetBinContent(2,657.075);
   14->SetBinContent(3,379.4377);
   14->SetBinContent(4,388.6922);
   14->SetBinContent(5,555.2746);
   14->SetBinContent(6,703.3478);
   14->SetBinContent(7,573.7838);
   14->SetBinContent(8,583.0383);
   14->SetBinContent(9,657.075);
   14->SetBinContent(10,564.5292);
   14->SetBinContent(11,481.238);
   14->SetBinContent(12,620.0566);
   14->SetBinContent(13,527.5109);
   14->SetBinContent(14,620.0566);
   14->SetBinContent(15,499.7472);
   14->SetBinContent(16,471.9834);
   14->SetBinContent(17,518.2563);
   14->SetBinContent(18,499.7472);
   14->SetBinContent(19,462.7289);
   14->SetBinContent(20,610.8021);
   14->SetBinContent(21,536.7654);
   14->SetBinContent(22,694.0933);
   14->SetBinContent(23,657.075);
   14->SetBinContent(24,546.02);
   14->SetBinContent(25,638.5658);
   14->SetBinContent(26,564.5292);
   14->SetBinContent(27,620.0566);
   14->SetBinContent(28,647.8204);
   14->SetBinContent(29,657.075);
   14->SetBinContent(30,703.3478);
   14->SetBinContent(31,601.5475);
   14->SetBinContent(32,712.6024);
   14->SetBinContent(33,888.4394);
   14->SetBinContent(34,786.639);
   14->SetBinContent(35,869.9302);
   14->SetBinContent(36,906.9485);
   14->SetBinContent(37,897.694);
   14->SetBinContent(38,1166.076);
   14->SetBinContent(39,1008.749);
   14->SetBinContent(40,999.4943);
   14->SetBinContent(41,1249.366);
   14->SetBinContent(42,1462.22);
   14->SetBinContent(43,1582.529);
   14->SetBinContent(44,1795.383);
   14->SetBinContent(45,1915.692);
   14->SetBinContent(46,2350.658);
   14->SetBinContent(47,3600.034);
   14->SetBinContent(48,5080.75);
   14->SetBinContent(49,9504.42);
   14->SetBinContent(50,28457.15);
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
   15->SetBinContent(1,280.4676);
   15->SetBinContent(2,336.5611);
   15->SetBinContent(3,336.5611);
   15->SetBinContent(4,252.4208);
   15->SetBinContent(5,84.14027);
   15->SetBinContent(6,84.14027);
   15->SetBinContent(7,168.2805);
   15->SetBinContent(8,280.4676);
   15->SetBinContent(9,336.5611);
   15->SetBinContent(10,168.2805);
   15->SetBinContent(11,224.374);
   15->SetBinContent(12,308.5143);
   15->SetBinContent(13,140.2338);
   15->SetBinContent(14,252.4208);
   15->SetBinContent(15,168.2805);
   15->SetBinContent(16,336.5611);
   15->SetBinContent(17,392.6546);
   15->SetBinContent(18,252.4208);
   15->SetBinContent(19,280.4676);
   15->SetBinContent(20,308.5143);
   15->SetBinContent(21,448.7481);
   15->SetBinContent(22,448.7481);
   15->SetBinContent(23,224.374);
   15->SetBinContent(24,280.4676);
   15->SetBinContent(25,280.4676);
   15->SetBinContent(26,336.5611);
   15->SetBinContent(27,252.4208);
   15->SetBinContent(28,140.2338);
   15->SetBinContent(29,336.5611);
   15->SetBinContent(30,280.4676);
   15->SetBinContent(31,224.374);
   15->SetBinContent(32,168.2805);
   15->SetBinContent(33,364.6078);
   15->SetBinContent(34,532.8884);
   15->SetBinContent(35,280.4676);
   15->SetBinContent(36,392.6546);
   15->SetBinContent(37,392.6546);
   15->SetBinContent(38,617.0286);
   15->SetBinContent(39,476.7948);
   15->SetBinContent(40,336.5611);
   15->SetBinContent(41,504.8416);
   15->SetBinContent(42,476.7948);
   15->SetBinContent(43,785.3091);
   15->SetBinContent(44,701.1689);
   15->SetBinContent(45,785.3091);
   15->SetBinContent(46,841.4026);
   15->SetBinContent(47,1318.198);
   15->SetBinContent(48,1430.385);
   15->SetBinContent(49,2440.069);
   15->SetBinContent(50,6422.726);
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
   16->SetBinContent(1,63.71873);
   16->SetBinContent(2,63.71873);
   16->SetBinContent(3,74.33852);
   16->SetBinContent(4,63.71873);
   16->SetBinContent(5,169.9166);
   16->SetBinContent(6,74.33852);
   16->SetBinContent(7,74.33852);
   16->SetBinContent(8,116.8177);
   16->SetBinContent(9,106.1979);
   16->SetBinContent(10,84.95831);
   16->SetBinContent(11,138.0573);
   16->SetBinContent(12,148.677);
   16->SetBinContent(13,84.95831);
   16->SetBinContent(14,116.8177);
   16->SetBinContent(15,53.09894);
   16->SetBinContent(16,74.33852);
   16->SetBinContent(17,127.4375);
   16->SetBinContent(18,116.8177);
   16->SetBinContent(19,106.1979);
   16->SetBinContent(20,116.8177);
   16->SetBinContent(21,106.1979);
   16->SetBinContent(22,180.5364);
   16->SetBinContent(23,84.95831);
   16->SetBinContent(24,127.4375);
   16->SetBinContent(25,95.57809);
   16->SetBinContent(26,127.4375);
   16->SetBinContent(27,95.57809);
   16->SetBinContent(28,138.0573);
   16->SetBinContent(29,95.57809);
   16->SetBinContent(30,138.0573);
   16->SetBinContent(31,74.33852);
   16->SetBinContent(32,95.57809);
   16->SetBinContent(33,116.8177);
   16->SetBinContent(34,159.2968);
   16->SetBinContent(35,191.1562);
   16->SetBinContent(36,159.2968);
   16->SetBinContent(37,191.1562);
   16->SetBinContent(38,191.1562);
   16->SetBinContent(39,180.5364);
   16->SetBinContent(40,233.6353);
   16->SetBinContent(41,233.6353);
   16->SetBinContent(42,180.5364);
   16->SetBinContent(43,254.8748);
   16->SetBinContent(44,244.2551);
   16->SetBinContent(45,392.932);
   16->SetBinContent(46,456.6507);
   16->SetBinContent(47,446.0309);
   16->SetBinContent(48,764.6251);
   16->SetBinContent(49,1380.572);
   16->SetBinContent(50,3918.714);
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
   17->SetBinContent(1,608.2056);
   17->SetBinContent(2,608.2056);
   17->SetBinContent(3,669.0262);
   17->SetBinContent(4,608.2056);
   17->SetBinContent(5,486.5645);
   17->SetBinContent(6,486.5645);
   17->SetBinContent(7,547.3851);
   17->SetBinContent(8,608.2056);
   17->SetBinContent(9,364.9234);
   17->SetBinContent(10,486.5645);
   17->SetBinContent(11,790.6673);
   17->SetBinContent(12,669.0262);
   17->SetBinContent(13,851.4879);
   17->SetBinContent(14,669.0262);
   17->SetBinContent(15,608.2056);
   17->SetBinContent(16,608.2056);
   17->SetBinContent(17,1094.77);
   17->SetBinContent(18,608.2056);
   17->SetBinContent(19,547.3851);
   17->SetBinContent(20,364.9234);
   17->SetBinContent(21,973.129);
   17->SetBinContent(22,973.129);
   17->SetBinContent(23,669.0262);
   17->SetBinContent(24,547.3851);
   17->SetBinContent(25,790.6673);
   17->SetBinContent(26,304.1028);
   17->SetBinContent(27,729.8467);
   17->SetBinContent(28,425.7439);
   17->SetBinContent(29,973.129);
   17->SetBinContent(30,851.4879);
   17->SetBinContent(31,1155.591);
   17->SetBinContent(32,669.0262);
   17->SetBinContent(33,973.129);
   17->SetBinContent(34,790.6673);
   17->SetBinContent(35,851.4879);
   17->SetBinContent(36,851.4879);
   17->SetBinContent(37,912.3084);
   17->SetBinContent(38,1094.77);
   17->SetBinContent(39,1277.232);
   17->SetBinContent(40,1216.411);
   17->SetBinContent(41,1824.617);
   17->SetBinContent(42,1581.335);
   17->SetBinContent(43,1642.155);
   17->SetBinContent(44,2189.54);
   17->SetBinContent(45,2007.078);
   17->SetBinContent(46,2554.464);
   17->SetBinContent(47,3405.951);
   17->SetBinContent(48,4257.44);
   17->SetBinContent(49,8149.971);
   17->SetBinContent(50,23780.79);
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
