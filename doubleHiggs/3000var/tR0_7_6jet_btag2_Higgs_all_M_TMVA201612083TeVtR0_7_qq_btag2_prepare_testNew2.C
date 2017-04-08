{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:40:59 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-269.8413,-3.235345,1317.46,5.891547);
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
   
   TH1F *THStack_stack_4 = new TH1F("THStack_stack_4","",50,0,1000);
   THStack_stack_4->SetMinimum(0.02555616);
   THStack_stack_4->SetMaximum(145009.3);
   THStack_stack_4->SetDirectory(0);
   THStack_stack_4->SetStats(0);
   THStack_stack_4->SetLineWidth(2);
   THStack_stack_4->SetMarkerSize(1.2);
   THStack_stack_4->GetXaxis()->SetTitle("M_{visible} / GeV");
   THStack_stack_4->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetXaxis()->SetLabelColor(ci);
   THStack_stack_4->GetXaxis()->SetLabelFont(42);
   THStack_stack_4->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_4->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_4->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_4->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_4->GetXaxis()->SetTitleColor(ci);
   THStack_stack_4->GetXaxis()->SetTitleFont(42);
   THStack_stack_4->GetYaxis()->SetTitle("Number of events");
   THStack_stack_4->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetYaxis()->SetLabelColor(ci);
   THStack_stack_4->GetYaxis()->SetLabelFont(42);
   THStack_stack_4->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_4->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_4->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_4->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_4->GetYaxis()->SetTitleColor(ci);
   THStack_stack_4->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_4->GetZaxis()->SetLabelColor(ci);
   THStack_stack_4->GetZaxis()->SetLabelFont(42);
   THStack_stack_4->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_4->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_4->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_4->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_4->GetZaxis()->SetTitleColor(ci);
   THStack_stack_4->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_4);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1000);
   0->SetBinContent(8,0.158384);
   0->SetBinContent(9,0.3860609);
   0->SetBinContent(10,0.7226273);
   0->SetBinContent(11,1.148285);
   0->SetBinContent(12,2.148084);
   0->SetBinContent(13,2.464849);
   0->SetBinContent(14,2.920199);
   0->SetBinContent(15,3.26666);
   0->SetBinContent(16,3.524032);
   0->SetBinContent(17,3.731909);
   0->SetBinContent(18,3.692313);
   0->SetBinContent(19,3.890291);
   0->SetBinContent(20,3.712111);
   0->SetBinContent(21,3.702212);
   0->SetBinContent(22,3.44484);
   0->SetBinContent(23,3.385447);
   0->SetBinContent(24,3.098379);
   0->SetBinContent(25,2.880603);
   0->SetBinContent(26,3.296357);
   0->SetBinContent(27,2.979592);
   0->SetBinContent(28,2.445051);
   0->SetBinContent(29,2.157983);
   0->SetBinContent(30,2.395557);
   0->SetBinContent(31,2.286669);
   0->SetBinContent(32,2.049095);
   0->SetBinContent(33,1.960005);
   0->SetBinContent(34,1.682832);
   0->SetBinContent(35,1.80162);
   0->SetBinContent(36,1.474953);
   0->SetBinContent(37,1.385862);
   0->SetBinContent(38,1.356165);
   0->SetBinContent(39,1.148285);
   0->SetBinContent(40,1.148285);
   0->SetBinContent(41,0.9503047);
   0->SetBinContent(42,0.8612136);
   0->SetBinContent(43,0.9404057);
   0->SetBinContent(44,0.9305067);
   0->SetBinContent(45,0.564243);
   0->SetBinContent(46,0.6632332);
   0->SetBinContent(47,0.5345459);
   0->SetBinContent(48,0.603839);
   0->SetBinContent(49,0.4256569);
   0->SetBinContent(50,0.3959599);
   0->SetBinContent(51,5.355361);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,1000);
   1->SetBinContent(8,0.3909712);
   1->SetBinContent(9,1.009594);
   1->SetBinContent(10,1.21745);
   1->SetBinContent(11,1.623266);
   1->SetBinContent(12,1.930103);
   1->SetBinContent(13,2.365621);
   1->SetBinContent(14,2.786294);
   1->SetBinContent(15,2.825887);
   1->SetBinContent(16,2.964461);
   1->SetBinContent(17,2.870429);
   1->SetBinContent(18,2.905072);
   1->SetBinContent(19,2.815989);
   1->SetBinContent(20,2.80609);
   1->SetBinContent(21,2.80609);
   1->SetBinContent(22,2.538839);
   1->SetBinContent(23,2.420061);
   1->SetBinContent(24,2.217148);
   1->SetBinContent(25,2.202301);
   1->SetBinContent(26,2.034032);
   1->SetBinContent(27,1.633164);
   1->SetBinContent(28,1.722246);
   1->SetBinContent(29,1.648011);
   1->SetBinContent(30,1.45995);
   1->SetBinContent(31,1.479746);
   1->SetBinContent(32,1.435205);
   1->SetBinContent(33,1.07393);
   1->SetBinContent(34,1.07393);
   1->SetBinContent(35,0.8809203);
   1->SetBinContent(36,0.8413285);
   1->SetBinContent(37,0.8561754);
   1->SetBinContent(38,0.8512264);
   1->SetBinContent(39,0.7621449);
   1->SetBinContent(40,0.6681144);
   1->SetBinContent(41,0.6681144);
   1->SetBinContent(42,0.5493391);
   1->SetBinContent(43,0.4602573);
   1->SetBinContent(44,0.4355122);
   1->SetBinContent(45,0.4800533);
   1->SetBinContent(46,0.4652063);
   1->SetBinContent(47,0.4454103);
   1->SetBinContent(48,0.2969401);
   1->SetBinContent(49,0.3167362);
   1->SetBinContent(50,0.2078581);
   1->SetBinContent(51,3.19212);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,1000);
   2->SetBinContent(8,0.9848487);
   2->SetBinContent(9,1.954848);
   2->SetBinContent(10,2.484399);
   2->SetBinContent(11,3.271305);
   2->SetBinContent(12,3.731571);
   2->SetBinContent(13,4.543222);
   2->SetBinContent(14,5.112368);
   2->SetBinContent(15,5.42911);
   2->SetBinContent(16,5.632022);
   2->SetBinContent(17,5.597379);
   2->SetBinContent(18,5.493448);
   2->SetBinContent(19,5.577582);
   2->SetBinContent(20,5.478601);
   2->SetBinContent(21,5.478601);
   2->SetBinContent(22,5.171757);
   2->SetBinContent(23,4.691695);
   2->SetBinContent(24,4.671898);
   2->SetBinContent(25,4.439291);
   2->SetBinContent(26,4.06316);
   2->SetBinContent(27,3.894891);
   2->SetBinContent(28,3.642487);
   2->SetBinContent(29,3.167374);
   2->SetBinContent(30,3.127781);
   2->SetBinContent(31,2.721956);
   2->SetBinContent(32,2.682363);
   2->SetBinContent(33,2.286436);
   2->SetBinContent(34,2.439857);
   2->SetBinContent(35,2.04393);
   2->SetBinContent(36,1.954848);
   2->SetBinContent(37,1.707399);
   2->SetBinContent(38,1.633164);
   2->SetBinContent(39,1.430256);
   2->SetBinContent(40,1.356022);
   2->SetBinContent(41,1.380767);
   2->SetBinContent(42,1.197655);
   2->SetBinContent(43,1.113522);
   2->SetBinContent(44,1.024441);
   2->SetBinContent(45,1.014543);
   2->SetBinContent(46,0.8462775);
   2->SetBinContent(47,0.7868898);
   2->SetBinContent(48,0.7769918);
   2->SetBinContent(49,0.752247);
   2->SetBinContent(50,0.6087267);
   2->SetBinContent(51,7.329561);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,1000);
   3->SetBinContent(8,5.402397);
   3->SetBinContent(9,12.56054);
   3->SetBinContent(10,17.69285);
   3->SetBinContent(11,23.77069);
   3->SetBinContent(12,27.48493);
   3->SetBinContent(13,28.22777);
   3->SetBinContent(14,27.51869);
   3->SetBinContent(15,28.56543);
   3->SetBinContent(16,25.76287);
   3->SetBinContent(17,25.22262);
   3->SetBinContent(18,23.83822);
   3->SetBinContent(19,23.33173);
   3->SetBinContent(20,22.58889);
   3->SetBinContent(21,19.34737);
   3->SetBinContent(22,18.50323);
   3->SetBinContent(23,17.72661);
   3->SetBinContent(24,16.91623);
   3->SetBinContent(25,15.73444);
   3->SetBinContent(26,13.30337);
   3->SetBinContent(27,13.64102);
   3->SetBinContent(28,12.18913);
   3->SetBinContent(29,10.93983);
   3->SetBinContent(30,10.33206);
   3->SetBinContent(31,9.487943);
   3->SetBinContent(32,8.643822);
   3->SetBinContent(33,8.339938);
   3->SetBinContent(34,7.732171);
   3->SetBinContent(35,8.00229);
   3->SetBinContent(36,5.908869);
   3->SetBinContent(37,6.111458);
   3->SetBinContent(38,4.963454);
   3->SetBinContent(39,4.592041);
   3->SetBinContent(40,4.490746);
   3->SetBinContent(41,4.389452);
   3->SetBinContent(42,3.950508);
   3->SetBinContent(43,3.849213);
   3->SetBinContent(44,3.680388);
   3->SetBinContent(45,2.802496);
   3->SetBinContent(46,2.49861);
   3->SetBinContent(47,2.7012);
   3->SetBinContent(48,2.532375);
   3->SetBinContent(49,2.49861);
   3->SetBinContent(50,1.755779);
   3->SetBinContent(51,28.05894);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,1000);
   4->SetBinContent(8,11.65453);
   4->SetBinContent(9,23.965);
   4->SetBinContent(10,21.77842);
   4->SetBinContent(11,25.58307);
   4->SetBinContent(12,29.30027);
   4->SetBinContent(13,30.61222);
   4->SetBinContent(14,31.63991);
   4->SetBinContent(15,29.51893);
   4->SetBinContent(16,28.14138);
   4->SetBinContent(17,25.53934);
   4->SetBinContent(18,23.74634);
   4->SetBinContent(19,23.87754);
   4->SetBinContent(20,22.34693);
   4->SetBinContent(21,18.82653);
   4->SetBinContent(22,19.32944);
   4->SetBinContent(23,16.33382);
   4->SetBinContent(24,16.1589);
   4->SetBinContent(25,15.30613);
   4->SetBinContent(26,13.49126);
   4->SetBinContent(27,12.15744);
   4->SetBinContent(28,10.95482);
   4->SetBinContent(29,10.80176);
   4->SetBinContent(30,9.555409);
   4->SetBinContent(31,9.314885);
   4->SetBinContent(32,9.096227);
   4->SetBinContent(33,7.828007);
   4->SetBinContent(34,7.106434);
   4->SetBinContent(35,6.734715);
   4->SetBinContent(36,6.056874);
   4->SetBinContent(37,5.247838);
   4->SetBinContent(38,5.335301);
   4->SetBinContent(39,4.832386);
   4->SetBinContent(40,4.679326);
   4->SetBinContent(41,3.91402);
   4->SetBinContent(42,4.110814);
   4->SetBinContent(43,4.067082);
   4->SetBinContent(44,2.820716);
   4->SetBinContent(45,3.214305);
   4->SetBinContent(46,2.623921);
   4->SetBinContent(47,2.711385);
   4->SetBinContent(48,2.536457);
   4->SetBinContent(49,2.208466);
   4->SetBinContent(50,1.967939);
   4->SetBinContent(51,24.9927);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,1000);
   5->SetBinContent(8,7.269259);
   5->SetBinContent(9,23.55228);
   5->SetBinContent(10,34.427);
   5->SetBinContent(11,60.48047);
   5->SetBinContent(12,83.21783);
   5->SetBinContent(13,104.7338);
   5->SetBinContent(14,104.5012);
   5->SetBinContent(15,106.1294);
   5->SetBinContent(16,100.3725);
   5->SetBinContent(17,98.1627);
   5->SetBinContent(18,98.97682);
   5->SetBinContent(19,91.1264);
   5->SetBinContent(20,86.99767);
   5->SetBinContent(21,81.18254);
   5->SetBinContent(22,79.49615);
   5->SetBinContent(23,73.91364);
   5->SetBinContent(24,71.70389);
   5->SetBinContent(25,62.5159);
   5->SetBinContent(26,54.78127);
   5->SetBinContent(27,56.46777);
   5->SetBinContent(28,52.1643);
   5->SetBinContent(29,46.23248);
   5->SetBinContent(30,46.40694);
   5->SetBinContent(31,41.98716);
   5->SetBinContent(32,38.73048);
   5->SetBinContent(33,35.35748);
   5->SetBinContent(34,32.97313);
   5->SetBinContent(35,31.11219);
   5->SetBinContent(36,27.79746);
   5->SetBinContent(37,26.69255);
   5->SetBinContent(38,25.06427);
   5->SetBinContent(39,22.97075);
   5->SetBinContent(40,21.28431);
   5->SetBinContent(41,19.59787);
   5->SetBinContent(42,18.66742);
   5->SetBinContent(43,17.03913);
   5->SetBinContent(44,16.57391);
   5->SetBinContent(45,14.59668);
   5->SetBinContent(46,13.49175);
   5->SetBinContent(47,11.34005);
   5->SetBinContent(48,11.74712);
   5->SetBinContent(49,10.70035);
   5->SetBinContent(50,10.7585);
   5->SetBinContent(51,127.5291);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,1000);
   6->SetBinContent(8,559.5706);
   6->SetBinContent(9,1329.643);
   6->SetBinContent(10,1753.27);
   6->SetBinContent(11,2191.788);
   6->SetBinContent(12,2646.049);
   6->SetBinContent(13,2824.071);
   6->SetBinContent(14,2995.077);
   6->SetBinContent(15,3009.108);
   6->SetBinContent(16,3032.786);
   6->SetBinContent(17,2904.75);
   6->SetBinContent(18,2764.438);
   6->SetBinContent(19,2724.975);
   6->SetBinContent(20,2480.305);
   6->SetBinContent(21,2352.27);
   6->SetBinContent(22,2235.635);
   6->SetBinContent(23,2043.582);
   6->SetBinContent(24,1865.536);
   6->SetBinContent(25,1769.057);
   6->SetBinContent(26,1656.792);
   6->SetBinContent(27,1496.287);
   6->SetBinContent(28,1476.114);
   6->SetBinContent(29,1325.257);
   6->SetBinContent(30,1238.427);
   6->SetBinContent(31,1093.709);
   6->SetBinContent(32,1090.201);
   6->SetBinContent(33,978.8126);
   6->SetBinContent(34,839.3576);
   6->SetBinContent(35,781.4706);
   6->SetBinContent(36,726.2149);
   6->SetBinContent(37,670.9592);
   6->SetBinContent(38,651.6635);
   6->SetBinContent(39,594.6536);
   6->SetBinContent(40,549.0457);
   6->SetBinContent(41,464.8465);
   6->SetBinContent(42,427.1323);
   6->SetBinContent(43,399.9429);
   6->SetBinContent(44,401.6971);
   6->SetBinContent(45,337.6706);
   6->SetBinContent(46,344.6872);
   6->SetBinContent(47,297.3251);
   6->SetBinContent(48,274.5212);
   6->SetBinContent(49,278.9066);
   6->SetBinContent(50,248.2091);
   6->SetBinContent(51,2996.831);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,1000);
   7->SetBinContent(8,67.53821);
   7->SetBinContent(9,239.0831);
   7->SetBinContent(10,394.1947);
   7->SetBinContent(11,497.6485);
   7->SetBinContent(12,556.6268);
   7->SetBinContent(13,579.8314);
   7->SetBinContent(14,586.1851);
   7->SetBinContent(15,556.6268);
   7->SetBinContent(16,544.7483);
   7->SetBinContent(17,500.4109);
   7->SetBinContent(18,477.6207);
   7->SetBinContent(19,467.5378);
   7->SetBinContent(20,430.1066);
   7->SetBinContent(21,412.7031);
   7->SetBinContent(22,385.7692);
   7->SetBinContent(23,358.6972);
   7->SetBinContent(24,337.8407);
   7->SetBinContent(25,322.2328);
   7->SetBinContent(26,300.1332);
   7->SetBinContent(27,284.2491);
   7->SetBinContent(28,276.238);
   7->SetBinContent(29,246.2655);
   7->SetBinContent(30,235.63);
   7->SetBinContent(31,210.4917);
   7->SetBinContent(32,214.4973);
   7->SetBinContent(33,200.685);
   7->SetBinContent(34,184.939);
   7->SetBinContent(35,173.4749);
   7->SetBinContent(36,167.95);
   7->SetBinContent(37,142.9498);
   7->SetBinContent(38,142.121);
   7->SetBinContent(39,141.8448);
   7->SetBinContent(40,138.1155);
   7->SetBinContent(41,120.4362);
   7->SetBinContent(42,114.4973);
   7->SetBinContent(43,101.1001);
   7->SetBinContent(44,95.29931);
   7->SetBinContent(45,100.5477);
   7->SetBinContent(46,97.37103);
   7->SetBinContent(47,82.73085);
   7->SetBinContent(48,82.04028);
   7->SetBinContent(49,77.48248);
   7->SetBinContent(50,69.88616);
   7->SetBinContent(51,1127.027);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,1000);
   8->SetBinContent(8,7.39104);
   8->SetBinContent(9,37.87908);
   8->SetBinContent(10,36.9552);
   8->SetBinContent(11,35.10744);
   8->SetBinContent(12,31.41191);
   8->SetBinContent(13,37.87908);
   8->SetBinContent(14,31.41191);
   8->SetBinContent(15,41.57461);
   8->SetBinContent(16,36.9552);
   8->SetBinContent(17,32.33579);
   8->SetBinContent(18,40.65073);
   8->SetBinContent(19,37.87908);
   8->SetBinContent(20,37.87908);
   8->SetBinContent(21,36.9552);
   8->SetBinContent(22,36.03132);
   8->SetBinContent(23,39.72684);
   8->SetBinContent(24,42.49849);
   8->SetBinContent(25,37.87908);
   8->SetBinContent(26,25.86863);
   8->SetBinContent(27,38.80296);
   8->SetBinContent(28,26.79251);
   8->SetBinContent(29,35.10744);
   8->SetBinContent(30,41.57461);
   8->SetBinContent(31,32.33579);
   8->SetBinContent(32,33.25967);
   8->SetBinContent(33,40.65073);
   8->SetBinContent(34,30.48803);
   8->SetBinContent(35,31.41191);
   8->SetBinContent(36,27.71639);
   8->SetBinContent(37,36.9552);
   8->SetBinContent(38,31.41191);
   8->SetBinContent(39,28.64027);
   8->SetBinContent(40,37.87908);
   8->SetBinContent(41,28.64027);
   8->SetBinContent(42,24.02087);
   8->SetBinContent(43,23.09699);
   8->SetBinContent(44,24.02087);
   8->SetBinContent(45,25.86863);
   8->SetBinContent(46,33.25967);
   8->SetBinContent(47,28.64027);
   8->SetBinContent(48,24.94475);
   8->SetBinContent(49,22.17311);
   8->SetBinContent(50,25.86863);
   8->SetBinContent(51,662.4253);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,1000);
   9->SetBinContent(8,46.59376);
   9->SetBinContent(9,139.3422);
   9->SetBinContent(10,210.1113);
   9->SetBinContent(11,259.3422);
   9->SetBinContent(12,286.1562);
   9->SetBinContent(13,322.2014);
   9->SetBinContent(14,305.9371);
   9->SetBinContent(15,328.3555);
   9->SetBinContent(16,307.6954);
   9->SetBinContent(17,294.5082);
   9->SetBinContent(18,318.6848);
   9->SetBinContent(19,310.3329);
   9->SetBinContent(20,298.9039);
   9->SetBinContent(21,274.7273);
   9->SetBinContent(22,262.4192);
   9->SetBinContent(23,264.1775);
   9->SetBinContent(24,267.6941);
   9->SetBinContent(25,265.4962);
   9->SetBinContent(26,243.0783);
   9->SetBinContent(27,229.452);
   9->SetBinContent(28,251.43);
   9->SetBinContent(29,221.5399);
   9->SetBinContent(30,227.6937);
   9->SetBinContent(31,226.8146);
   9->SetBinContent(32,211.8696);
   9->SetBinContent(33,200.8806);
   9->SetBinContent(34,196.0454);
   9->SetBinContent(35,186.3751);
   9->SetBinContent(36,185.0564);
   9->SetBinContent(37,193.8476);
   9->SetBinContent(38,174.507);
   9->SetBinContent(39,190.7707);
   9->SetBinContent(40,170.5509);
   9->SetBinContent(41,174.0674);
   9->SetBinContent(42,156.9246);
   9->SetBinContent(43,160.4411);
   9->SetBinContent(44,156.485);
   9->SetBinContent(45,156.485);
   9->SetBinContent(46,153.4081);
   9->SetBinContent(47,136.2653);
   9->SetBinContent(48,163.518);
   9->SetBinContent(49,149.4521);
   9->SetBinContent(50,143.2982);
   9->SetBinContent(51,6043.921);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,1000);
   10->SetBinContent(8,2077.282);
   10->SetBinContent(9,7682.48);
   10->SetBinContent(10,9673.609);
   10->SetBinContent(11,9128.537);
   10->SetBinContent(12,8396.342);
   10->SetBinContent(13,7809.072);
   10->SetBinContent(14,7358.289);
   10->SetBinContent(15,6885.68);
   10->SetBinContent(16,6486.988);
   10->SetBinContent(17,6026.602);
   10->SetBinContent(18,5674.764);
   10->SetBinContent(19,5229.801);
   10->SetBinContent(20,4831.109);
   10->SetBinContent(21,4545.041);
   10->SetBinContent(22,4236.564);
   10->SetBinContent(23,3892.413);
   10->SetBinContent(24,3688.24);
   10->SetBinContent(25,3385.621);
   10->SetBinContent(26,3116.789);
   10->SetBinContent(27,2873.004);
   10->SetBinContent(28,2657.181);
   10->SetBinContent(29,2499.609);
   10->SetBinContent(30,2304.756);
   10->SetBinContent(31,2170.777);
   10->SetBinContent(32,2063.011);
   10->SetBinContent(33,1887.74);
   10->SetBinContent(34,1720.918);
   10->SetBinContent(35,1635.614);
   10->SetBinContent(36,1485.678);
   10->SetBinContent(37,1439.096);
   10->SetBinContent(38,1297.604);
   10->SetBinContent(39,1203.566);
   10->SetBinContent(40,1130.782);
   10->SetBinContent(41,1035.288);
   10->SetBinContent(42,963.6685);
   10->SetBinContent(43,905.441);
   10->SetBinContent(44,850.7071);
   10->SetBinContent(45,785.2011);
   10->SetBinContent(46,719.9863);
   10->SetBinContent(47,676.3156);
   10->SetBinContent(48,647.7841);
   10->SetBinContent(49,607.6071);
   10->SetBinContent(50,552.5821);
   10->SetBinContent(51,7498.85);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,1000);
   11->SetBinContent(8,457.8125);
   11->SetBinContent(9,1129.271);
   11->SetBinContent(10,1556.563);
   11->SetBinContent(11,1465);
   11->SetBinContent(12,1800.73);
   11->SetBinContent(13,1495.521);
   11->SetBinContent(14,1495.521);
   11->SetBinContent(15,1403.958);
   11->SetBinContent(16,854.5831);
   11->SetBinContent(17,915.6248);
   11->SetBinContent(18,701.9791);
   11->SetBinContent(19,1220.833);
   11->SetBinContent(20,885.1039);
   11->SetBinContent(21,976.6664);
   11->SetBinContent(22,854.5831);
   11->SetBinContent(23,885.1039);
   11->SetBinContent(24,701.9791);
   11->SetBinContent(25,488.3334);
   11->SetBinContent(26,549.375);
   11->SetBinContent(27,610.4166);
   11->SetBinContent(28,610.4166);
   11->SetBinContent(29,427.2917);
   11->SetBinContent(30,274.6875);
   11->SetBinContent(31,366.25);
   11->SetBinContent(32,579.8958);
   11->SetBinContent(33,305.2083);
   11->SetBinContent(34,457.8125);
   11->SetBinContent(35,244.1666);
   11->SetBinContent(36,366.25);
   11->SetBinContent(37,457.8125);
   11->SetBinContent(38,305.2083);
   11->SetBinContent(39,305.2083);
   11->SetBinContent(40,244.1666);
   11->SetBinContent(41,213.6458);
   11->SetBinContent(42,183.125);
   11->SetBinContent(43,213.6458);
   11->SetBinContent(44,335.7292);
   11->SetBinContent(45,366.25);
   11->SetBinContent(46,152.6042);
   11->SetBinContent(47,274.6875);
   11->SetBinContent(48,366.25);
   11->SetBinContent(49,152.6042);
   11->SetBinContent(50,213.6458);
   11->SetBinContent(51,4272.913);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,1000);
   12->SetBinContent(8,259.8925);
   12->SetBinContent(9,544.1216);
   12->SetBinContent(10,592.8057);
   12->SetBinContent(11,569.8955);
   12->SetBinContent(12,528.3708);
   12->SetBinContent(13,514.052);
   12->SetBinContent(14,459.6404);
   12->SetBinContent(15,423.1273);
   12->SetBinContent(16,385.1824);
   12->SetBinContent(17,385.8983);
   12->SetBinContent(18,383.0345);
   12->SetBinContent(19,327.907);
   12->SetBinContent(20,313.5881);
   12->SetBinContent(21,292.1099);
   12->SetBinContent(22,267.0519);
   12->SetBinContent(23,262.0403);
   12->SetBinContent(24,263.4722);
   12->SetBinContent(25,240.5617);
   12->SetBinContent(26,216.9351);
   12->SetBinContent(27,199.7521);
   12->SetBinContent(28,223.3787);
   12->SetBinContent(29,203.3319);
   12->SetBinContent(30,201.184);
   12->SetBinContent(31,187.5808);
   12->SetBinContent(32,179.7053);
   12->SetBinContent(33,180.4212);
   12->SetBinContent(34,164.6702);
   12->SetBinContent(35,163.9542);
   12->SetBinContent(36,157.5106);
   12->SetBinContent(37,149.6351);
   12->SetBinContent(38,153.9308);
   12->SetBinContent(39,143.1914);
   12->SetBinContent(40,142.4755);
   12->SetBinContent(41,139.6116);
   12->SetBinContent(42,143.1914);
   12->SetBinContent(43,130.3042);
   12->SetBinContent(44,141.0436);
   12->SetBinContent(45,148.9191);
   12->SetBinContent(46,119.5648);
   12->SetBinContent(47,120.9968);
   12->SetBinContent(48,118.1329);
   12->SetBinContent(49,128.8723);
   12->SetBinContent(50,116.701);
   12->SetBinContent(51,4593.04);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,1000);
   13->SetBinContent(8,7593.622);
   13->SetBinContent(9,17995.8);
   13->SetBinContent(10,19296.1);
   13->SetBinContent(11,20908.46);
   13->SetBinContent(12,20128.29);
   13->SetBinContent(13,18359.89);
   13->SetBinContent(14,19400.12);
   13->SetBinContent(15,17631.72);
   13->SetBinContent(16,17423.68);
   13->SetBinContent(17,15499.26);
   13->SetBinContent(18,13990.95);
   13->SetBinContent(19,13574.86);
   13->SetBinContent(20,12274.59);
   13->SetBinContent(21,11598.45);
   13->SetBinContent(22,10870.3);
   13->SetBinContent(23,9205.96);
   13->SetBinContent(24,9726.067);
   13->SetBinContent(25,8841.885);
   13->SetBinContent(26,7125.521);
   13->SetBinContent(27,7021.498);
   13->SetBinContent(28,7073.509);
   13->SetBinContent(29,6761.442);
   13->SetBinContent(30,5513.172);
   13->SetBinContent(31,4368.925);
   13->SetBinContent(32,4316.914);
   13->SetBinContent(33,4680.993);
   13->SetBinContent(34,4524.959);
   13->SetBinContent(35,4264.903);
   13->SetBinContent(36,3328.704);
   13->SetBinContent(37,3380.715);
   13->SetBinContent(38,2756.583);
   13->SetBinContent(39,3692.781);
   13->SetBinContent(40,2548.539);
   13->SetBinContent(41,1716.364);
   13->SetBinContent(42,2548.539);
   13->SetBinContent(43,2132.451);
   13->SetBinContent(44,2236.473);
   13->SetBinContent(45,1976.418);
   13->SetBinContent(46,1560.331);
   13->SetBinContent(47,1664.353);
   13->SetBinContent(48,1872.396);
   13->SetBinContent(49,936.1986);
   13->SetBinContent(50,1456.309);
   13->SetBinContent(51,23821.12);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,1000);
   14->SetBinContent(8,12984.26);
   14->SetBinContent(9,18638.75);
   14->SetBinContent(10,12660.33);
   14->SetBinContent(11,8606.696);
   14->SetBinContent(12,6579.962);
   14->SetBinContent(13,4497.724);
   14->SetBinContent(14,3285.376);
   14->SetBinContent(15,2609.788);
   14->SetBinContent(16,1841.656);
   14->SetBinContent(17,1564.02);
   14->SetBinContent(18,1341.912);
   14->SetBinContent(19,1129.058);
   14->SetBinContent(20,962.476);
   14->SetBinContent(21,684.8387);
   14->SetBinContent(22,749.6207);
   14->SetBinContent(23,509.0017);
   14->SetBinContent(24,462.7289);
   14->SetBinContent(25,453.4743);
   14->SetBinContent(26,360.9285);
   14->SetBinContent(27,277.6373);
   14->SetBinContent(28,185.0915);
   14->SetBinContent(29,212.8553);
   14->SetBinContent(30,222.1098);
   14->SetBinContent(31,222.1098);
   14->SetBinContent(32,194.3461);
   14->SetBinContent(33,101.8003);
   14->SetBinContent(34,120.3095);
   14->SetBinContent(35,111.0549);
   14->SetBinContent(36,148.0732);
   14->SetBinContent(37,92.54577);
   14->SetBinContent(38,111.0549);
   14->SetBinContent(39,111.0549);
   14->SetBinContent(40,83.29119);
   14->SetBinContent(41,64.78204);
   14->SetBinContent(42,92.54577);
   14->SetBinContent(43,74.03661);
   14->SetBinContent(44,55.52746);
   14->SetBinContent(45,18.50915);
   14->SetBinContent(46,18.50915);
   14->SetBinContent(47,27.76373);
   14->SetBinContent(48,46.27288);
   14->SetBinContent(49,18.50915);
   14->SetBinContent(50,64.78204);
   14->SetBinContent(51,397.9468);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,1000);
   15->SetBinContent(8,2075.46);
   15->SetBinContent(9,4066.788);
   15->SetBinContent(10,3169.288);
   15->SetBinContent(11,2215.694);
   15->SetBinContent(12,2131.554);
   15->SetBinContent(13,1598.665);
   15->SetBinContent(14,1206.01);
   15->SetBinContent(15,1206.01);
   15->SetBinContent(16,1037.73);
   15->SetBinContent(17,1009.683);
   15->SetBinContent(18,645.0754);
   15->SetBinContent(19,420.7013);
   15->SetBinContent(20,588.9819);
   15->SetBinContent(21,532.8884);
   15->SetBinContent(22,645.0754);
   15->SetBinContent(23,532.8884);
   15->SetBinContent(24,168.2805);
   15->SetBinContent(25,252.4208);
   15->SetBinContent(26,308.5143);
   15->SetBinContent(27,336.5611);
   15->SetBinContent(28,280.4676);
   15->SetBinContent(29,224.374);
   15->SetBinContent(30,168.2805);
   15->SetBinContent(31,168.2805);
   15->SetBinContent(32,140.2338);
   15->SetBinContent(33,140.2338);
   15->SetBinContent(34,112.187);
   15->SetBinContent(35,168.2805);
   15->SetBinContent(36,140.2338);
   15->SetBinContent(37,112.187);
   15->SetBinContent(38,28.04676);
   15->SetBinContent(39,140.2338);
   15->SetBinContent(40,112.187);
   15->SetBinContent(41,112.187);
   15->SetBinContent(42,84.14027);
   15->SetBinContent(43,28.04676);
   15->SetBinContent(44,56.09351);
   15->SetBinContent(45,56.09351);
   15->SetBinContent(46,84.14027);
   15->SetBinContent(47,56.09351);
   15->SetBinContent(48,84.14027);
   15->SetBinContent(49,28.04676);
   15->SetBinContent(51,841.4026);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,1000);
   16->SetBinContent(8,1221.276);
   16->SetBinContent(9,1847.841);
   16->SetBinContent(10,1412.431);
   16->SetBinContent(11,998.2609);
   16->SetBinContent(12,796.4845);
   16->SetBinContent(13,690.2864);
   16->SetBinContent(14,456.6507);
   16->SetBinContent(15,414.1716);
   16->SetBinContent(16,329.2133);
   16->SetBinContent(17,201.7759);
   16->SetBinContent(18,244.2551);
   16->SetBinContent(19,307.9738);
   16->SetBinContent(20,148.677);
   16->SetBinContent(21,254.8748);
   16->SetBinContent(22,127.4375);
   16->SetBinContent(23,233.6353);
   16->SetBinContent(24,116.8177);
   16->SetBinContent(25,148.677);
   16->SetBinContent(26,74.33852);
   16->SetBinContent(27,138.0573);
   16->SetBinContent(28,191.1562);
   16->SetBinContent(29,138.0573);
   16->SetBinContent(30,106.1979);
   16->SetBinContent(31,138.0573);
   16->SetBinContent(32,53.09894);
   16->SetBinContent(33,42.47915);
   16->SetBinContent(34,106.1979);
   16->SetBinContent(35,106.1979);
   16->SetBinContent(36,84.95831);
   16->SetBinContent(37,84.95831);
   16->SetBinContent(38,116.8177);
   16->SetBinContent(39,84.95831);
   16->SetBinContent(40,42.47915);
   16->SetBinContent(41,42.47915);
   16->SetBinContent(42,74.33852);
   16->SetBinContent(43,31.85936);
   16->SetBinContent(44,53.09894);
   16->SetBinContent(45,31.85936);
   16->SetBinContent(46,116.8177);
   16->SetBinContent(47,10.61979);
   16->SetBinContent(48,53.09894);
   16->SetBinContent(49,53.09894);
   16->SetBinContent(50,42.47915);
   16->SetBinContent(51,1061.98);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,1000);
   17->SetBinContent(8,10096.22);
   17->SetBinContent(9,13258.88);
   17->SetBinContent(10,9244.737);
   17->SetBinContent(11,5899.602);
   17->SetBinContent(12,4865.648);
   17->SetBinContent(13,3649.234);
   17->SetBinContent(14,2067.899);
   17->SetBinContent(15,2067.899);
   17->SetBinContent(16,1094.77);
   17->SetBinContent(17,1581.335);
   17->SetBinContent(18,1338.052);
   17->SetBinContent(19,669.0262);
   17->SetBinContent(20,973.129);
   17->SetBinContent(21,425.7439);
   17->SetBinContent(22,729.8467);
   17->SetBinContent(23,547.3851);
   17->SetBinContent(24,608.2056);
   17->SetBinContent(25,790.6673);
   17->SetBinContent(26,364.9234);
   17->SetBinContent(27,425.7439);
   17->SetBinContent(28,912.3084);
   17->SetBinContent(29,669.0262);
   17->SetBinContent(30,304.1028);
   17->SetBinContent(31,425.7439);
   17->SetBinContent(32,669.0262);
   17->SetBinContent(33,121.6411);
   17->SetBinContent(34,304.1028);
   17->SetBinContent(35,304.1028);
   17->SetBinContent(36,669.0262);
   17->SetBinContent(37,60.82056);
   17->SetBinContent(38,304.1028);
   17->SetBinContent(39,121.6411);
   17->SetBinContent(40,304.1028);
   17->SetBinContent(41,486.5645);
   17->SetBinContent(42,121.6411);
   17->SetBinContent(43,304.1028);
   17->SetBinContent(44,364.9234);
   17->SetBinContent(45,364.9234);
   17->SetBinContent(46,182.4617);
   17->SetBinContent(47,486.5645);
   17->SetBinContent(48,121.6411);
   17->SetBinContent(49,304.1028);
   17->SetBinContent(50,364.9234);
   17->SetBinContent(51,11738.37);
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
