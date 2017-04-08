{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:05:00 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-53.96825,-3.142521,263.4921,5.55883);
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
   
   TH1F *THStack_stack_27 = new TH1F("THStack_stack_27","",50,0,200);
   THStack_stack_27->SetMinimum(0.02652908);
   THStack_stack_27->SetMaximum(72899.01);
   THStack_stack_27->SetDirectory(0);
   THStack_stack_27->SetStats(0);
   THStack_stack_27->SetLineWidth(2);
   THStack_stack_27->SetMarkerSize(1.2);
   THStack_stack_27->GetXaxis()->SetTitle("N_{PFO,visible}");
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
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,200);
   0->SetBinContent(11,0.001882);
   0->SetBinContent(12,0.001882);
   0->SetBinContent(13,0.007528);
   0->SetBinContent(14,0.03764001);
   0->SetBinContent(15,0.06587003);
   0->SetBinContent(16,0.1750261);
   0->SetBinContent(17,0.3067658);
   0->SetBinContent(18,0.4742626);
   0->SetBinContent(19,0.6361157);
   0->SetBinContent(20,0.9617046);
   0->SetBinContent(21,1.159311);
   0->SetBinContent(22,1.424667);
   0->SetBinContent(23,1.462306);
   0->SetBinContent(24,1.488654);
   0->SetBinContent(25,1.477362);
   0->SetBinContent(26,1.383264);
   0->SetBinContent(27,1.30234);
   0->SetBinContent(28,1.116026);
   0->SetBinContent(29,0.8167893);
   0->SetBinContent(30,0.6812841);
   0->SetBinContent(31,0.5533069);
   0->SetBinContent(32,0.3858092);
   0->SetBinContent(33,0.2691261);
   0->SetBinContent(34,0.1825541);
   0->SetBinContent(35,0.1035101);
   0->SetBinContent(36,0.06398803);
   0->SetBinContent(37,0.03764001);
   0->SetBinContent(38,0.033876);
   0->SetBinContent(39,0.030112);
   0->SetBinContent(40,0.020702);
   0->SetBinContent(41,0.007528);
   0->SetBinContent(42,0.003764);
   0->SetBinContent(44,0.001882);
   0->SetBinContent(45,0.001882);
   0->SetBinContent(46,0.001882);
   0->SetBinContent(48,0.001882);
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
   1->SetBinContent(9,0.000941);
   1->SetBinContent(10,0.001882);
   1->SetBinContent(11,0.005646);
   1->SetBinContent(12,0.014115);
   1->SetBinContent(13,0.03764002);
   1->SetBinContent(14,0.07528006);
   1->SetBinContent(15,0.1477369);
   1->SetBinContent(16,0.2324263);
   1->SetBinContent(17,0.3086478);
   1->SetBinContent(18,0.4930854);
   1->SetBinContent(19,0.5551902);
   1->SetBinContent(20,0.6793994);
   1->SetBinContent(21,0.8120773);
   1->SetBinContent(22,0.9118211);
   1->SetBinContent(23,0.916526);
   1->SetBinContent(24,0.8214871);
   1->SetBinContent(25,0.8525394);
   1->SetBinContent(26,0.7697333);
   1->SetBinContent(27,0.6135309);
   1->SetBinContent(28,0.5401345);
   1->SetBinContent(29,0.4290968);
   1->SetBinContent(30,0.3519341);
   1->SetBinContent(31,0.2493642);
   1->SetBinContent(32,0.1769077);
   1->SetBinContent(33,0.14115);
   1->SetBinContent(34,0.09033607);
   1->SetBinContent(35,0.06116504);
   1->SetBinContent(36,0.03952202);
   1->SetBinContent(37,0.02917101);
   1->SetBinContent(38,0.016938);
   1->SetBinContent(39,0.013174);
   1->SetBinContent(40,0.00941);
   1->SetBinContent(41,0.003764);
   1->SetBinContent(42,0.002823);
   1->SetBinContent(44,0.000941);
   1->SetBinContent(45,0.000941);
   1->SetBinContent(50,0.000941);
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
   2->SetBinContent(7,0.006587);
   2->SetBinContent(8,0.00941);
   2->SetBinContent(9,0.02823001);
   2->SetBinContent(10,0.05081403);
   2->SetBinContent(11,0.1166841);
   2->SetBinContent(12,0.1816127);
   2->SetBinContent(13,0.2964146);
   2->SetBinContent(14,0.4385069);
   2->SetBinContent(15,0.6586978);
   2->SetBinContent(16,0.8318379);
   2->SetBinContent(17,1.020976);
   2->SetBinContent(18,1.260941);
   2->SetBinContent(19,1.506552);
   2->SetBinContent(20,1.636415);
   2->SetBinContent(21,1.765337);
   2->SetBinContent(22,1.910257);
   2->SetBinContent(23,1.883908);
   2->SetBinContent(24,1.925314);
   2->SetBinContent(25,1.817094);
   2->SetBinContent(26,1.643943);
   2->SetBinContent(27,1.475497);
   2->SetBinContent(28,1.240238);
   2->SetBinContent(29,1.105669);
   2->SetBinContent(30,0.8835917);
   2->SetBinContent(31,0.6342324);
   2->SetBinContent(32,0.5288428);
   2->SetBinContent(33,0.4149817);
   2->SetBinContent(34,0.3039427);
   2->SetBinContent(35,0.1759667);
   2->SetBinContent(36,0.1552649);
   2->SetBinContent(37,0.1053921);
   2->SetBinContent(38,0.06963405);
   2->SetBinContent(39,0.04046302);
   2->SetBinContent(40,0.03199401);
   2->SetBinContent(41,0.01882);
   2->SetBinContent(42,0.007528);
   2->SetBinContent(43,0.005646);
   2->SetBinContent(44,0.004705);
   2->SetBinContent(45,0.001882);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,200);
   3->SetBinContent(7,0.006829);
   3->SetBinContent(8,0.027316);
   3->SetBinContent(9,0.034145);
   3->SetBinContent(10,0.157067);
   3->SetBinContent(11,0.2595019);
   3->SetBinContent(12,0.4916877);
   3->SetBinContent(13,0.8399678);
   3->SetBinContent(14,1.352145);
   3->SetBinContent(15,2.144311);
   3->SetBinContent(16,2.984281);
   3->SetBinContent(17,4.233984);
   3->SetBinContent(18,5.927523);
   3->SetBinContent(19,7.088416);
   3->SetBinContent(20,8.242497);
   3->SetBinContent(21,9.23274);
   3->SetBinContent(22,9.895179);
   3->SetBinContent(23,10.35274);
   3->SetBinContent(24,9.14396);
   3->SetBinContent(25,8.317619);
   3->SetBinContent(26,7.921528);
   3->SetBinContent(27,6.514798);
   3->SetBinContent(28,4.855403);
   3->SetBinContent(29,4.02912);
   3->SetBinContent(30,3.168665);
   3->SetBinContent(31,2.321866);
   3->SetBinContent(32,1.659451);
   3->SetBinContent(33,1.099471);
   3->SetBinContent(34,0.880942);
   3->SetBinContent(35,0.5258328);
   3->SetBinContent(36,0.3482788);
   3->SetBinContent(37,0.184383);
   3->SetBinContent(38,0.116093);
   3->SetBinContent(39,0.08877701);
   3->SetBinContent(40,0.040974);
   3->SetBinContent(41,0.020487);
   3->SetBinContent(42,0.006829);
   3->SetBinContent(43,0.006829);
   3->SetBinContent(48,0.006829);
   3->SetBinContent(49,0.006829);
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
   4->SetBinContent(6,0.010522);
   4->SetBinContent(7,0.010522);
   4->SetBinContent(8,0.05261);
   4->SetBinContent(9,0.173613);
   4->SetBinContent(10,0.6365813);
   4->SetBinContent(11,0.9259365);
   4->SetBinContent(12,1.715079);
   4->SetBinContent(13,3.309145);
   4->SetBinContent(14,4.803254);
   4->SetBinContent(15,6.776108);
   4->SetBinContent(16,8.985794);
   4->SetBinContent(17,11.05353);
   4->SetBinContent(18,13.12127);
   4->SetBinContent(19,13.65267);
   4->SetBinContent(20,13.98414);
   4->SetBinContent(21,14.91015);
   4->SetBinContent(22,14.85228);
   4->SetBinContent(23,13.46852);
   4->SetBinContent(24,11.12193);
   4->SetBinContent(25,10.31693);
   4->SetBinContent(26,7.938776);
   4->SetBinContent(27,6.265796);
   4->SetBinContent(28,4.524424);
   4->SetBinContent(29,3.303884);
   4->SetBinContent(30,2.462133);
   4->SetBinContent(31,1.473076);
   4->SetBinContent(32,1.041678);
   4->SetBinContent(33,0.7365404);
   4->SetBinContent(34,0.4734902);
   4->SetBinContent(35,0.257789);
   4->SetBinContent(36,0.178874);
   4->SetBinContent(37,0.115742);
   4->SetBinContent(38,0.063132);
   4->SetBinContent(39,0.010522);
   4->SetBinContent(40,0.010522);
   4->SetBinContent(41,0.005261);
   4->SetBinContent(42,0.005261);
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
   5->SetBinContent(7,0.012401);
   5->SetBinContent(8,0.062005);
   5->SetBinContent(9,0.086807);
   5->SetBinContent(10,0.4092328);
   5->SetBinContent(11,1.091287);
   5->SetBinContent(12,2.492603);
   5->SetBinContent(13,5.15884);
   5->SetBinContent(14,8.879138);
   5->SetBinContent(15,15.14145);
   5->SetBinContent(16,23.42564);
   5->SetBinContent(17,30.87899);
   5->SetBinContent(18,38.94002);
   5->SetBinContent(19,45.28963);
   5->SetBinContent(20,48.43963);
   5->SetBinContent(21,50.75873);
   5->SetBinContent(22,49.01011);
   5->SetBinContent(23,43.29298);
   5->SetBinContent(24,37.11699);
   5->SetBinContent(25,31.17663);
   5->SetBinContent(26,24.71541);
   5->SetBinContent(27,18.51462);
   5->SetBinContent(28,13.60378);
   5->SetBinContent(29,9.251157);
   5->SetBinContent(30,6.448555);
   5->SetBinContent(31,4.03034);
   5->SetBinContent(32,2.666219);
   5->SetBinContent(33,2.033762);
   5->SetBinContent(34,0.9672771);
   5->SetBinContent(35,0.5704456);
   5->SetBinContent(36,0.5084407);
   5->SetBinContent(37,0.186015);
   5->SetBinContent(38,0.148812);
   5->SetBinContent(39,0.049604);
   5->SetBinContent(40,0.062005);
   5->SetBinContent(42,0.012401);
   5->SetBinContent(43,0.024802);
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
   6->SetBinContent(6,0.227718);
   6->SetBinContent(7,0.227718);
   6->SetBinContent(8,2.504899);
   6->SetBinContent(9,8.121933);
   6->SetBinContent(10,20.57054);
   6->SetBinContent(11,46.07486);
   6->SetBinContent(12,95.79253);
   6->SetBinContent(13,175.2697);
   6->SetBinContent(14,314.1778);
   6->SetBinContent(15,502.9342);
   6->SetBinContent(16,695.1036);
   6->SetBinContent(17,921.1405);
   6->SetBinContent(18,1096.382);
   6->SetBinContent(19,1220.675);
   6->SetBinContent(20,1238.518);
   6->SetBinContent(21,1203.971);
   6->SetBinContent(22,1095.015);
   6->SetBinContent(23,939.5909);
   6->SetBinContent(24,786.8243);
   6->SetBinContent(25,621.4537);
   6->SetBinContent(26,473.7896);
   6->SetBinContent(27,343.3223);
   6->SetBinContent(28,245.7923);
   6->SetBinContent(29,165.2492);
   6->SetBinContent(30,111.9603);
   6->SetBinContent(31,71.04755);
   6->SetBinContent(32,44.63266);
   6->SetBinContent(33,27.32624);
   6->SetBinContent(34,15.4848);
   6->SetBinContent(35,9.412332);
   6->SetBinContent(36,5.541135);
   6->SetBinContent(37,2.960335);
   6->SetBinContent(38,1.51812);
   6->SetBinContent(39,1.13859);
   6->SetBinContent(40,0.9867779);
   6->SetBinContent(41,0.227718);
   6->SetBinContent(42,0.075906);
   6->SetBinContent(43,0.075906);
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
   7->SetBinContent(7,0.195288);
   7->SetBinContent(8,1.367016);
   7->SetBinContent(9,4.97984);
   7->SetBinContent(10,14.01196);
   7->SetBinContent(11,34.90783);
   7->SetBinContent(12,79.67622);
   7->SetBinContent(13,141.9245);
   7->SetBinContent(14,229.7663);
   7->SetBinContent(15,330.9382);
   7->SetBinContent(16,438.1648);
   7->SetBinContent(17,519.61);
   7->SetBinContent(18,581.4265);
   7->SetBinContent(19,596.2214);
   7->SetBinContent(20,566.2897);
   7->SetBinContent(21,511.0163);
   7->SetBinContent(22,430.6941);
   7->SetBinContent(23,355.987);
   7->SetBinContent(24,271.1237);
   7->SetBinContent(25,201.8366);
   7->SetBinContent(26,145.9773);
   7->SetBinContent(27,99.88791);
   7->SetBinContent(28,71.47438);
   7->SetBinContent(29,43.01203);
   7->SetBinContent(30,29.78159);
   7->SetBinContent(31,17.77128);
   7->SetBinContent(32,10.44792);
   7->SetBinContent(33,5.565703);
   7->SetBinContent(34,4.393977);
   7->SetBinContent(35,2.392278);
   7->SetBinContent(36,1.318194);
   7->SetBinContent(37,0.8299739);
   7->SetBinContent(38,0.390576);
   7->SetBinContent(39,0.24411);
   7->SetBinContent(40,0.292932);
   7->SetBinContent(41,0.097644);
   7->SetBinContent(42,0.146466);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,200);
   8->SetBinContent(8,0.880518);
   8->SetBinContent(9,1.320777);
   8->SetBinContent(10,3.228566);
   8->SetBinContent(11,4.842849);
   8->SetBinContent(12,8.951931);
   8->SetBinContent(13,13.20778);
   8->SetBinContent(14,17.90388);
   8->SetBinContent(15,24.06752);
   8->SetBinContent(16,23.92077);
   8->SetBinContent(17,28.32337);
   8->SetBinContent(18,29.35064);
   8->SetBinContent(19,28.76363);
   8->SetBinContent(20,23.187);
   8->SetBinContent(21,20.6922);
   8->SetBinContent(22,15.55583);
   8->SetBinContent(23,11.15323);
   8->SetBinContent(24,10.12596);
   8->SetBinContent(25,7.044141);
   8->SetBinContent(26,5.42986);
   8->SetBinContent(27,4.696096);
   8->SetBinContent(28,1.46753);
   8->SetBinContent(29,2.054542);
   8->SetBinContent(30,0.733765);
   8->SetBinContent(31,1.174024);
   8->SetBinContent(32,0.733765);
   8->SetBinContent(33,0.146753);
   8->SetBinContent(34,0.146753);
   8->SetBinContent(35,0.293506);
   8->SetBinContent(36,0.146753);
   8->SetBinContent(41,0.146753);
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
   9->SetBinContent(8,0.685756);
   9->SetBinContent(9,2.571585);
   9->SetBinContent(10,7.37188);
   9->SetBinContent(11,21.94418);
   9->SetBinContent(12,45.08848);
   9->SetBinContent(13,86.91987);
   9->SetBinContent(14,146.0659);
   9->SetBinContent(15,236.7537);
   9->SetBinContent(16,367.0523);
   9->SetBinContent(17,526.3272);
   9->SetBinContent(18,681.1445);
   9->SetBinContent(19,842.9912);
   9->SetBinContent(20,971.7485);
   9->SetBinContent(21,1054.718);
   9->SetBinContent(22,1132.699);
   9->SetBinContent(23,1139.041);
   9->SetBinContent(24,1127.386);
   9->SetBinContent(25,1091.224);
   9->SetBinContent(26,1012.724);
   9->SetBinContent(27,896.8258);
   9->SetBinContent(28,799.7864);
   9->SetBinContent(29,682.3447);
   9->SetBinContent(30,601.4213);
   9->SetBinContent(31,512.4399);
   9->SetBinContent(32,435.9743);
   9->SetBinContent(33,357.7941);
   9->SetBinContent(34,290.4151);
   9->SetBinContent(35,242.9253);
   9->SetBinContent(36,190.4669);
   9->SetBinContent(37,156.009);
   9->SetBinContent(38,131.3227);
   9->SetBinContent(39,96.69196);
   9->SetBinContent(40,74.91906);
   9->SetBinContent(41,59.66089);
   9->SetBinContent(42,46.46);
   9->SetBinContent(43,32.91623);
   9->SetBinContent(44,28.8017);
   9->SetBinContent(45,19.71548);
   9->SetBinContent(46,14.57232);
   9->SetBinContent(47,9.943467);
   9->SetBinContent(48,6.686123);
   9->SetBinContent(49,6.343245);
   9->SetBinContent(50,3.771658);
   9->SetBinContent(51,9.943467);
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
   10->SetBinContent(5,0.063088);
   10->SetBinContent(7,0.504704);
   10->SetBinContent(8,7.507466);
   10->SetBinContent(9,29.90364);
   10->SetBinContent(10,100.1831);
   10->SetBinContent(11,280.815);
   10->SetBinContent(12,628.8198);
   10->SetBinContent(13,1184.57);
   10->SetBinContent(14,1964.487);
   10->SetBinContent(15,2928.433);
   10->SetBinContent(16,3860.218);
   10->SetBinContent(17,4660.988);
   10->SetBinContent(18,5157.714);
   10->SetBinContent(19,5290.997);
   10->SetBinContent(20,5118.346);
   10->SetBinContent(21,4613.936);
   10->SetBinContent(22,3940.906);
   10->SetBinContent(23,3214.399);
   10->SetBinContent(24,2507.923);
   10->SetBinContent(25,1879.919);
   10->SetBinContent(26,1337.928);
   10->SetBinContent(27,941.4054);
   10->SetBinContent(28,641.0001);
   10->SetBinContent(29,432.7112);
   10->SetBinContent(30,291.917);
   10->SetBinContent(31,187.0617);
   10->SetBinContent(32,116.7751);
   10->SetBinContent(33,70.02727);
   10->SetBinContent(34,43.53053);
   10->SetBinContent(35,29.39894);
   10->SetBinContent(36,17.66467);
   10->SetBinContent(37,11.1035);
   10->SetBinContent(38,9.273938);
   10->SetBinContent(39,4.479245);
   10->SetBinContent(40,2.334255);
   10->SetBinContent(41,1.387936);
   10->SetBinContent(42,0.883232);
   10->SetBinContent(43,0.441616);
   10->SetBinContent(44,0.567792);
   10->SetBinContent(45,0.441616);
   10->SetBinContent(46,0.189264);
   10->SetBinContent(47,0.189264);
   10->SetBinContent(48,0.063088);
   10->SetBinContent(49,0.063088);
   10->SetBinContent(51,0.063088);
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
   11->SetBinContent(7,14.63386);
   11->SetBinContent(8,29.26772);
   11->SetBinContent(9,87.80315);
   11->SetBinContent(10,219.5079);
   11->SetBinContent(11,307.3111);
   11->SetBinContent(12,482.9173);
   11->SetBinContent(13,614.6219);
   11->SetBinContent(14,687.7912);
   11->SetBinContent(15,1214.611);
   11->SetBinContent(16,1039.004);
   11->SetBinContent(17,1317.048);
   11->SetBinContent(18,892.6651);
   11->SetBinContent(19,834.1297);
   11->SetBinContent(20,965.8344);
   11->SetBinContent(21,746.3266);
   11->SetBinContent(22,512.185);
   11->SetBinContent(23,424.3819);
   11->SetBinContent(24,263.4095);
   11->SetBinContent(25,190.2402);
   11->SetBinContent(26,117.0709);
   11->SetBinContent(27,87.80315);
   11->SetBinContent(28,43.90158);
   11->SetBinContent(29,58.53543);
   11->SetBinContent(31,14.63386);
   11->SetBinContent(32,14.63386);
   11->SetBinContent(34,29.26772);
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
   12->SetBinContent(5,19.03043);
   12->SetBinContent(6,69.77827);
   12->SetBinContent(7,234.7086);
   12->SetBinContent(8,742.1878);
   12->SetBinContent(9,2188.507);
   12->SetBinContent(10,3450.865);
   12->SetBinContent(11,5131.854);
   12->SetBinContent(12,6356.104);
   12->SetBinContent(13,6857.221);
   12->SetBinContent(14,6165.806);
   12->SetBinContent(15,5607.599);
   12->SetBinContent(16,4662.453);
   12->SetBinContent(17,4028.124);
   12->SetBinContent(18,3482.582);
   12->SetBinContent(19,2670.614);
   12->SetBinContent(20,2251.942);
   12->SetBinContent(21,1731.775);
   12->SetBinContent(22,1452.66);
   12->SetBinContent(23,1116.455);
   12->SetBinContent(24,964.2105);
   12->SetBinContent(25,545.5391);
   12->SetBinContent(26,596.2872);
   12->SetBinContent(27,482.1042);
   12->SetBinContent(28,317.1738);
   12->SetBinContent(29,152.2435);
   12->SetBinContent(30,196.6478);
   12->SetBinContent(31,164.9304);
   12->SetBinContent(32,126.8695);
   12->SetBinContent(33,114.1826);
   12->SetBinContent(34,76.12174);
   12->SetBinContent(35,63.43479);
   12->SetBinContent(36,101.4956);
   12->SetBinContent(37,44.40435);
   12->SetBinContent(38,57.09131);
   12->SetBinContent(39,25.37391);
   12->SetBinContent(40,12.68696);
   12->SetBinContent(41,44.40435);
   12->SetBinContent(42,12.68696);
   12->SetBinContent(43,19.03043);
   12->SetBinContent(44,12.68696);
   12->SetBinContent(45,12.68696);
   12->SetBinContent(46,12.68696);
   12->SetBinContent(47,6.343478);
   12->SetBinContent(49,6.343478);
   12->SetBinContent(50,6.343478);
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
   13->SetBinContent(7,81.57449);
   13->SetBinContent(8,244.7235);
   13->SetBinContent(9,734.1704);
   13->SetBinContent(10,1876.213);
   13->SetBinContent(11,4405.022);
   13->SetBinContent(12,4405.022);
   13->SetBinContent(13,5791.792);
   13->SetBinContent(14,6444.39);
   13->SetBinContent(15,7749.585);
   13->SetBinContent(16,9544.221);
   13->SetBinContent(17,8728.479);
   13->SetBinContent(18,6362.815);
   13->SetBinContent(19,6444.39);
   13->SetBinContent(20,6036.516);
   13->SetBinContent(21,3589.277);
   13->SetBinContent(22,4160.298);
   13->SetBinContent(23,1713.064);
   13->SetBinContent(24,2039.362);
   13->SetBinContent(25,2039.362);
   13->SetBinContent(26,815.7449);
   13->SetBinContent(27,326.298);
   13->SetBinContent(28,326.298);
   13->SetBinContent(29,571.0215);
   13->SetBinContent(30,407.8725);
   13->SetBinContent(31,244.7235);
   13->SetBinContent(32,244.7235);
   13->SetBinContent(33,326.298);
   13->SetBinContent(34,326.298);
   13->SetBinContent(35,81.57449);
   13->SetBinContent(36,163.149);
   13->SetBinContent(37,81.57449);
   13->SetBinContent(38,81.57449);
   13->SetBinContent(41,81.57449);
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
   14->SetBinContent(5,4.029479);
   14->SetBinContent(6,4.029479);
   14->SetBinContent(7,52.38324);
   14->SetBinContent(8,205.5035);
   14->SetBinContent(9,676.9526);
   14->SetBinContent(10,1490.901);
   14->SetBinContent(11,2965.696);
   14->SetBinContent(12,4198.729);
   14->SetBinContent(13,5193.965);
   14->SetBinContent(14,5907.151);
   14->SetBinContent(15,6152.938);
   14->SetBinContent(16,5306.786);
   14->SetBinContent(17,4355.872);
   14->SetBinContent(18,3437.152);
   14->SetBinContent(19,2329.028);
   14->SetBinContent(20,1724.607);
   14->SetBinContent(21,991.252);
   14->SetBinContent(22,801.8665);
   14->SetBinContent(23,439.2133);
   14->SetBinContent(24,269.9751);
   14->SetBinContent(25,189.3855);
   14->SetBinContent(26,124.9139);
   14->SetBinContent(27,68.50115);
   14->SetBinContent(28,52.38324);
   14->SetBinContent(29,32.23584);
   14->SetBinContent(30,24.17688);
   14->SetBinContent(31,24.17688);
   14->SetBinContent(32,8.058958);
   14->SetBinContent(34,16.11792);
   14->SetBinContent(35,8.058958);
   14->SetBinContent(36,12.08844);
   14->SetBinContent(43,4.029479);
   14->SetBinContent(44,4.029479);
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
   15->SetBinContent(6,42.49131);
   15->SetBinContent(7,30.90277);
   15->SetBinContent(8,127.4739);
   15->SetBinContent(9,169.9653);
   15->SetBinContent(10,289.7138);
   15->SetBinContent(11,355.3823);
   15->SetBinContent(12,324.4795);
   15->SetBinContent(13,366.9709);
   15->SetBinContent(14,312.8909);
   15->SetBinContent(15,305.1652);
   15->SetBinContent(16,231.771);
   15->SetBinContent(17,227.9081);
   15->SetBinContent(18,166.1025);
   15->SetBinContent(19,119.7482);
   15->SetBinContent(20,108.1597);
   15->SetBinContent(21,34.76562);
   15->SetBinContent(22,46.35416);
   15->SetBinContent(23,42.49131);
   15->SetBinContent(24,30.90277);
   15->SetBinContent(25,15.45139);
   15->SetBinContent(26,7.725694);
   15->SetBinContent(30,3.862847);
   15->SetBinContent(32,11.58854);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,200);
   16->SetBinContent(5,18.49251);
   16->SetBinContent(6,61.6417);
   16->SetBinContent(7,412.9998);
   16->SetBinContent(8,1214.344);
   16->SetBinContent(9,2514.978);
   16->SetBinContent(10,4549.118);
   16->SetBinContent(11,6145.61);
   16->SetBinContent(12,7242.813);
   16->SetBinContent(13,7816.071);
   16->SetBinContent(14,7329.11);
   16->SetBinContent(15,6275.056);
   16->SetBinContent(16,4715.548);
   16->SetBinContent(17,3575.196);
   16->SetBinContent(18,2410.188);
   16->SetBinContent(19,1645.837);
   16->SetBinContent(20,949.2838);
   16->SetBinContent(21,690.3881);
   16->SetBinContent(22,363.6863);
   16->SetBinContent(23,209.5818);
   16->SetBinContent(24,80.13421);
   16->SetBinContent(25,43.14919);
   16->SetBinContent(26,67.80587);
   16->SetBinContent(27,24.65668);
   16->SetBinContent(28,30.82085);
   16->SetBinContent(29,12.32834);
   16->SetBinContent(30,12.32834);
   16->SetBinContent(34,6.16417);
   16->SetBinContent(36,6.16417);
   16->SetBinContent(40,6.16417);
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
   17->SetBinContent(6,46.85035);
   17->SetBinContent(7,281.1021);
   17->SetBinContent(8,749.6055);
   17->SetBinContent(9,1592.912);
   17->SetBinContent(10,2037.99);
   17->SetBinContent(11,2483.071);
   17->SetBinContent(12,2717.323);
   17->SetBinContent(13,3232.68);
   17->SetBinContent(14,2647.048);
   17->SetBinContent(15,3232.68);
   17->SetBinContent(16,2365.944);
   17->SetBinContent(17,2225.392);
   17->SetBinContent(18,2014.565);
   17->SetBinContent(19,1874.014);
   17->SetBinContent(20,1733.463);
   17->SetBinContent(21,1733.463);
   17->SetBinContent(22,1311.81);
   17->SetBinContent(23,1733.463);
   17->SetBinContent(24,1452.361);
   17->SetBinContent(25,1686.612);
   17->SetBinContent(26,1522.636);
   17->SetBinContent(27,1194.684);
   17->SetBinContent(28,1335.235);
   17->SetBinContent(29,1194.684);
   17->SetBinContent(30,890.1566);
   17->SetBinContent(31,1054.133);
   17->SetBinContent(32,726.1804);
   17->SetBinContent(33,1054.133);
   17->SetBinContent(34,468.5034);
   17->SetBinContent(35,515.3538);
   17->SetBinContent(36,327.9524);
   17->SetBinContent(37,234.2517);
   17->SetBinContent(38,304.5273);
   17->SetBinContent(39,210.8266);
   17->SetBinContent(40,234.2517);
   17->SetBinContent(41,46.85035);
   17->SetBinContent(42,93.70071);
   17->SetBinContent(43,163.9762);
   17->SetBinContent(44,46.85035);
   17->SetBinContent(45,93.70071);
   17->SetBinContent(46,23.42518);
   17->SetBinContent(47,23.42518);
   17->SetBinContent(49,23.42518);
   17->SetBinContent(50,46.85035);
   17->SetBinContent(51,70.27553);
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
