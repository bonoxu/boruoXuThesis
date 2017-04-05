{
//=========Macro generated from canvas: canvas1/
//=========  (Wed Apr  5 14:18:08 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.01587302,-3.926084,1.253968,8.438715);
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
   
   TH1F *THStack_stack_7 = new TH1F("THStack_stack_7","",40,0.2,1);
   THStack_stack_7->SetMinimum(0.01993334);
   THStack_stack_7->SetMaximum(2.815343e+07);
   THStack_stack_7->SetDirectory(0);
   THStack_stack_7->SetStats(0);
   THStack_stack_7->SetLineWidth(2);
   THStack_stack_7->SetMarkerSize(1.2);
   THStack_stack_7->GetXaxis()->SetTitle("Highest b-tag");
   THStack_stack_7->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_7->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_7->GetXaxis()->SetLabelColor(ci);
   THStack_stack_7->GetXaxis()->SetLabelFont(42);
   THStack_stack_7->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_7->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_7->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_7->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_7->GetXaxis()->SetTitleColor(ci);
   THStack_stack_7->GetXaxis()->SetTitleFont(42);
   THStack_stack_7->GetYaxis()->SetTitle("Number of events");
   THStack_stack_7->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_7->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_7->GetYaxis()->SetLabelColor(ci);
   THStack_stack_7->GetYaxis()->SetLabelFont(42);
   THStack_stack_7->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_7->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_7->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_7->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_7->GetYaxis()->SetTitleColor(ci);
   THStack_stack_7->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_7->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_7->GetZaxis()->SetLabelColor(ci);
   THStack_stack_7->GetZaxis()->SetLabelFont(42);
   THStack_stack_7->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_7->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_7->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_7->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_7->GetZaxis()->SetTitleColor(ci);
   THStack_stack_7->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_7);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",40,0.2,1);
   0->SetBinContent(1,0.9602038);
   0->SetBinContent(2,1.177982);
   0->SetBinContent(3,0.9899008);
   0->SetBinContent(4,1.346266);
   0->SetBinContent(5,1.682832);
   0->SetBinContent(6,1.247275);
   0->SetBinContent(7,1.385862);
   0->SetBinContent(8,1.326468);
   0->SetBinContent(9,1.276972);
   0->SetBinContent(10,1.128487);
   0->SetBinContent(11,1.088891);
   0->SetBinContent(12,1.128487);
   0->SetBinContent(13,1.128487);
   0->SetBinContent(14,1.168083);
   0->SetBinContent(15,1.118588);
   0->SetBinContent(16,1.039396);
   0->SetBinContent(17,1.237376);
   0->SetBinContent(18,1.227477);
   0->SetBinContent(19,1.148285);
   0->SetBinContent(20,1.247275);
   0->SetBinContent(21,1.366064);
   0->SetBinContent(22,1.326468);
   0->SetBinContent(23,1.148285);
   0->SetBinContent(24,1.078992);
   0->SetBinContent(25,1.346266);
   0->SetBinContent(26,1.435357);
   0->SetBinContent(27,1.524448);
   0->SetBinContent(28,1.286871);
   0->SetBinContent(29,1.742226);
   0->SetBinContent(30,1.682832);
   0->SetBinContent(31,2.286669);
   0->SetBinContent(32,1.91051);
   0->SetBinContent(33,2.336164);
   0->SetBinContent(34,2.73212);
   0->SetBinContent(35,3.137975);
   0->SetBinContent(36,4.405044);
   0->SetBinContent(37,6.602653);
   0->SetBinContent(38,10.30493);
   0->SetBinContent(39,20.22387);
   0->SetBinContent(40,142.2314);
   0->SetEntries(23657);
   0->SetStats(0);

   ci = TColor::GetColor("#63c1e5");
   0->SetFillColor(ci);

   ci = TColor::GetColor("#63c1e5");
   0->SetLineColor(ci);
   0->SetLineWidth(2);
   0->SetMarkerSize(1.2);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",40,0.2,1);
   1->SetBinContent(1,0.108889);
   1->SetBinContent(2,0.158384);
   1->SetBinContent(3,0.19798);
   1->SetBinContent(4,0.178182);
   1->SetBinContent(5,0.267273);
   1->SetBinContent(6,0.267273);
   1->SetBinContent(7,0.267273);
   1->SetBinContent(8,0.336566);
   1->SetBinContent(9,0.277172);
   1->SetBinContent(10,0.356364);
   1->SetBinContent(11,0.3959599);
   1->SetBinContent(12,0.4553539);
   1->SetBinContent(13,0.584041);
   1->SetBinContent(14,0.5048488);
   1->SetBinContent(15,0.6236371);
   1->SetBinContent(16,0.5246469);
   1->SetBinContent(17,0.4850508);
   1->SetBinContent(18,0.5345459);
   1->SetBinContent(19,0.6830312);
   1->SetBinContent(20,0.7127283);
   1->SetBinContent(21,0.8216175);
   1->SetBinContent(22,0.6434351);
   1->SetBinContent(23,0.9503047);
   1->SetBinContent(24,0.8117185);
   1->SetBinContent(25,1.019598);
   1->SetBinContent(26,1.009699);
   1->SetBinContent(27,1.148285);
   1->SetBinContent(28,1.108689);
   1->SetBinContent(29,1.356165);
   1->SetBinContent(30,1.752125);
   1->SetBinContent(31,1.60364);
   1->SetBinContent(32,2.157983);
   1->SetBinContent(33,2.197579);
   1->SetBinContent(34,2.593535);
   1->SetBinContent(35,3.543829);
   1->SetBinContent(36,5.008891);
   1->SetBinContent(37,9.037841);
   1->SetBinContent(38,15.65047);
   1->SetBinContent(39,36.96331);
   1->SetBinContent(40,494.8338);
   1->SetEntries(59842);
   1->SetStats(0);

   ci = TColor::GetColor("#f0916e");
   1->SetFillColor(ci);

   ci = TColor::GetColor("#f0916e");
   1->SetLineColor(ci);
   1->SetLineWidth(2);
   1->SetMarkerSize(1.2);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",40,0.2,1);
   2->SetBinContent(1,9.839671);
   2->SetBinContent(2,13.05689);
   2->SetBinContent(3,9.532798);
   2->SetBinContent(4,11.26515);
   2->SetBinContent(5,15.63067);
   2->SetBinContent(6,10.78009);
   2->SetBinContent(7,6.889728);
   2->SetBinContent(8,6.008704);
   2->SetBinContent(9,5.563243);
   2->SetBinContent(10,5.295966);
   2->SetBinContent(11,4.949496);
   2->SetBinContent(12,4.919799);
   2->SetBinContent(13,4.306052);
   2->SetBinContent(14,4.395144);
   2->SetBinContent(15,4.21696);
   2->SetBinContent(16,3.929887);
   2->SetBinContent(17,3.514133);
   2->SetBinContent(18,3.335953);
   2->SetBinContent(19,3.256761);
   2->SetBinContent(20,3.058783);
   2->SetBinContent(21,3.058783);
   2->SetBinContent(22,2.959794);
   2->SetBinContent(23,3.108278);
   2->SetBinContent(24,2.939996);
   2->SetBinContent(25,3.078581);
   2->SetBinContent(26,2.850906);
   2->SetBinContent(27,3.128076);
   2->SetBinContent(28,3.316155);
   2->SetBinContent(29,3.038985);
   2->SetBinContent(30,3.395346);
   2->SetBinContent(31,3.316155);
   2->SetBinContent(32,3.434942);
   2->SetBinContent(33,4.197162);
   2->SetBinContent(34,5.078185);
   2->SetBinContent(35,6.266082);
   2->SetBinContent(36,7.919238);
   2->SetBinContent(37,11.15626);
   2->SetBinContent(38,17.5016);
   2->SetBinContent(39,34.84489);
   2->SetBinContent(40,237.4582);
   2->SetEntries(50083);
   2->SetStats(0);

   ci = TColor::GetColor("#62eee3");
   2->SetFillColor(ci);

   ci = TColor::GetColor("#62eee3");
   2->SetLineColor(ci);
   2->SetLineWidth(2);
   2->SetMarkerSize(1.2);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",40,0.2,1);
   3->SetBinContent(1,4.153098);
   3->SetBinContent(2,7.495817);
   3->SetBinContent(3,7.191933);
   3->SetBinContent(4,8.103584);
   3->SetBinContent(5,10.56842);
   3->SetBinContent(6,8.576292);
   3->SetBinContent(7,6.786755);
   3->SetBinContent(8,6.280282);
   3->SetBinContent(9,7.698406);
   3->SetBinContent(10,7.259463);
   3->SetBinContent(11,7.394522);
   3->SetBinContent(12,7.86723);
   3->SetBinContent(13,7.158168);
   3->SetBinContent(14,7.86723);
   3->SetBinContent(15,6.989344);
   3->SetBinContent(16,7.630876);
   3->SetBinContent(17,8.339938);
   3->SetBinContent(18,8.677587);
   3->SetBinContent(19,7.698406);
   3->SetBinContent(20,8.745116);
   3->SetBinContent(21,6.88805);
   3->SetBinContent(22,8.103584);
   3->SetBinContent(23,9.623002);
   3->SetBinContent(24,9.893121);
   3->SetBinContent(25,9.285354);
   3->SetBinContent(26,10.63595);
   3->SetBinContent(27,11.14242);
   3->SetBinContent(28,11.00736);
   3->SetBinContent(29,11.95278);
   3->SetBinContent(30,12.89819);
   3->SetBinContent(31,13.64102);
   3->SetBinContent(32,16.7474);
   3->SetBinContent(33,18.3344);
   3->SetBinContent(34,22.48759);
   3->SetBinContent(35,28.05894);
   3->SetBinContent(36,37.41176);
   3->SetBinContent(37,55.34039);
   3->SetBinContent(38,103.1882);
   3->SetBinContent(39,221.9492);
   3->SetBinContent(40,2294.686);
   3->SetEntries(90777);
   3->SetStats(0);

   ci = TColor::GetColor("#f67ea6");
   3->SetFillColor(ci);

   ci = TColor::GetColor("#f67ea6");
   3->SetLineColor(ci);
   3->SetLineWidth(2);
   3->SetMarkerSize(1.2);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",40,0.2,1);
   4->SetBinContent(1,56.67631);
   4->SetBinContent(2,74.80309);
   4->SetBinContent(3,59.45327);
   4->SetBinContent(4,75.30601);
   4->SetBinContent(5,111.1004);
   4->SetBinContent(6,71.47948);
   4->SetBinContent(7,47.12093);
   4->SetBinContent(8,41.78567);
   4->SetBinContent(9,40.25506);
   4->SetBinContent(10,36.82212);
   4->SetBinContent(11,34.96352);
   4->SetBinContent(12,32.8644);
   4->SetBinContent(13,30.89647);
   4->SetBinContent(14,29.58452);
   4->SetBinContent(15,26.80756);
   4->SetBinContent(16,27.00435);
   4->SetBinContent(17,24.94897);
   4->SetBinContent(18,22.76238);
   4->SetBinContent(19,21.86588);
   4->SetBinContent(20,20.64139);
   4->SetBinContent(21,21.12244);
   4->SetBinContent(22,19.6793);
   4->SetBinContent(23,19.02332);
   4->SetBinContent(24,17.99563);
   4->SetBinContent(25,17.99563);
   4->SetBinContent(26,17.95189);
   4->SetBinContent(27,18.25802);
   4->SetBinContent(28,17.73324);
   4->SetBinContent(29,17.47085);
   4->SetBinContent(30,18.30175);
   4->SetBinContent(31,21.05684);
   4->SetBinContent(32,21.80028);
   4->SetBinContent(33,24.48978);
   4->SetBinContent(34,28.18511);
   4->SetBinContent(35,33.97956);
   4->SetBinContent(36,45.54659);
   4->SetBinContent(37,63.62965);
   4->SetBinContent(38,98.11208);
   4->SetBinContent(39,188.7897);
   4->SetBinContent(40,1317.602);
   4->SetEntries(133370);
   4->SetStats(0);

   ci = TColor::GetColor("#48c9a8");
   4->SetFillColor(ci);

   ci = TColor::GetColor("#48c9a8");
   4->SetLineColor(ci);
   4->SetLineWidth(2);
   4->SetMarkerSize(1.2);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",40,0.2,1);
   5->SetBinContent(1,179.6326);
   5->SetBinContent(2,241.3311);
   5->SetBinContent(3,171.0262);
   5->SetBinContent(4,202.8931);
   5->SetBinContent(5,296.0619);
   5->SetBinContent(6,166.7812);
   5->SetBinContent(7,93.56876);
   5->SetBinContent(8,82.98523);
   5->SetBinContent(9,78.39128);
   5->SetBinContent(10,72.69246);
   5->SetBinContent(11,65.01649);
   5->SetBinContent(12,64.02792);
   5->SetBinContent(13,55.6536);
   5->SetBinContent(14,51.46643);
   5->SetBinContent(15,50.41964);
   5->SetBinContent(16,45.82539);
   5->SetBinContent(17,46.34879);
   5->SetBinContent(18,44.1389);
   5->SetBinContent(19,40.06804);
   5->SetBinContent(20,39.13756);
   5->SetBinContent(21,40.24251);
   5->SetBinContent(22,36.63689);
   5->SetBinContent(23,38.14893);
   5->SetBinContent(24,40.1262);
   5->SetBinContent(25,39.48649);
   5->SetBinContent(26,38.9631);
   5->SetBinContent(27,39.6028);
   5->SetBinContent(28,38.49786);
   5->SetBinContent(29,40.35882);
   5->SetBinContent(30,43.84812);
   5->SetBinContent(31,44.37152);
   5->SetBinContent(32,49.77994);
   5->SetBinContent(33,56.58408);
   5->SetBinContent(34,67.05179);
   5->SetBinContent(35,84.32271);
   5->SetBinContent(36,112.2353);
   5->SetBinContent(37,156.6629);
   5->SetBinContent(38,254.8222);
   5->SetBinContent(39,492.6065);
   5->SetBinContent(40,3470.895);
   5->SetEntries(125092);
   5->SetStats(0);

   ci = TColor::GetColor("#e2a0e3");
   5->SetFillColor(ci);

   ci = TColor::GetColor("#e2a0e3");
   5->SetLineColor(ci);
   5->SetLineWidth(2);
   5->SetMarkerSize(1.2);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",40,0.2,1);
   6->SetBinContent(1,5924.467);
   6->SetBinContent(2,8149.297);
   6->SetBinContent(3,5931.483);
   6->SetBinContent(4,7305.668);
   6->SetBinContent(5,10707.37);
   6->SetBinContent(6,6334.881);
   6->SetBinContent(7,3669.821);
   6->SetBinContent(8,3290.1);
   6->SetBinContent(9,2965.627);
   6->SetBinContent(10,2766.559);
   6->SetBinContent(11,2570.999);
   6->SetBinContent(12,2472.78);
   6->SetBinContent(13,2278.096);
   6->SetBinContent(14,2118.491);
   6->SetBinContent(15,1971.173);
   6->SetBinContent(16,1800.191);
   6->SetBinContent(17,1821.235);
   6->SetBinContent(18,1714.262);
   6->SetBinContent(19,1634.47);
   6->SetBinContent(20,1455.597);
   6->SetBinContent(21,1497.684);
   6->SetBinContent(22,1404.74);
   6->SetBinContent(23,1424.031);
   6->SetBinContent(24,1374.051);
   6->SetBinContent(25,1353.884);
   6->SetBinContent(26,1392.465);
   6->SetBinContent(27,1390.711);
   6->SetBinContent(28,1373.174);
   6->SetBinContent(29,1416.139);
   6->SetBinContent(30,1484.532);
   6->SetBinContent(31,1580.107);
   6->SetBinContent(32,1637.101);
   6->SetBinContent(33,1940.484);
   6->SetBinContent(34,2219.34);
   6->SetBinContent(35,2741.127);
   6->SetBinContent(36,3560.202);
   6->SetBinContent(37,5104.516);
   6->SetBinContent(38,8082.649);
   6->SetBinContent(39,16168.16);
   6->SetBinContent(40,109006.8);
   6->SetEntries(277338);
   6->SetStats(0);

   ci = TColor::GetColor("#a6c973");
   6->SetFillColor(ci);

   ci = TColor::GetColor("#a6c973");
   6->SetLineColor(ci);
   6->SetLineWidth(2);
   6->SetMarkerSize(1.2);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",40,0.2,1);
   7->SetBinContent(1,12657.83);
   7->SetBinContent(2,16967.12);
   7->SetBinContent(3,12100.02);
   7->SetBinContent(4,15334.49);
   7->SetBinContent(5,21996.47);
   7->SetBinContent(6,11442.94);
   7->SetBinContent(7,5436.436);
   7->SetBinContent(8,4615.625);
   7->SetBinContent(9,4045.203);
   7->SetBinContent(10,3611.031);
   7->SetBinContent(11,3168.567);
   7->SetBinContent(12,2778.751);
   7->SetBinContent(13,2456.645);
   7->SetBinContent(14,2236.242);
   7->SetBinContent(15,1913.978);
   7->SetBinContent(16,1737.95);
   7->SetBinContent(17,1557.089);
   7->SetBinContent(18,1396.8);
   7->SetBinContent(19,1288.283);
   7->SetBinContent(20,1194.816);
   7->SetBinContent(21,1100.244);
   7->SetBinContent(22,1012.431);
   7->SetBinContent(23,950.2761);
   7->SetBinContent(24,856.7672);
   7->SetBinContent(25,811.3248);
   7->SetBinContent(26,758.2858);
   7->SetBinContent(27,707.871);
   7->SetBinContent(28,656.4894);
   7->SetBinContent(29,635.0804);
   7->SetBinContent(30,618.5057);
   7->SetBinContent(31,631.4893);
   7->SetBinContent(32,626.3787);
   7->SetBinContent(33,667.1249);
   7->SetBinContent(34,696.8212);
   7->SetBinContent(35,797.3745);
   7->SetBinContent(36,972.9282);
   7->SetBinContent(37,1228.089);
   7->SetBinContent(38,1767.357);
   7->SetBinContent(39,3164.836);
   7->SetBinContent(40,20404.38);
   7->SetEntries(1209642);
   7->SetStats(0);

   ci = TColor::GetColor("#b196e4");
   7->SetFillColor(ci);

   ci = TColor::GetColor("#b196e4");
   7->SetLineColor(ci);
   7->SetLineWidth(2);
   7->SetMarkerSize(1.2);
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
   
   TH1F *8 = new TH1F("8","qqqqll",40,0.2,1);
   8->SetBinContent(1,8397.662);
   8->SetBinContent(2,14322.17);
   8->SetBinContent(3,8415.215);
   8->SetBinContent(4,10595.45);
   8->SetBinContent(5,15328.22);
   8->SetBinContent(6,8254.469);
   8->SetBinContent(7,3877.371);
   8->SetBinContent(8,3286.121);
   8->SetBinContent(9,2769.701);
   8->SetBinContent(10,2602.488);
   8->SetBinContent(11,2191.385);
   8->SetBinContent(12,1916.084);
   8->SetBinContent(13,1592.744);
   8->SetBinContent(14,1470.799);
   8->SetBinContent(15,1320.215);
   8->SetBinContent(16,1152.078);
   8->SetBinContent(17,1043.99);
   8->SetBinContent(18,985.7865);
   8->SetBinContent(19,838.8881);
   8->SetBinContent(20,756.662);
   8->SetBinContent(21,728.9453);
   8->SetBinContent(22,667.9686);
   8->SetBinContent(23,543.2436);
   8->SetBinContent(24,582.0469);
   8->SetBinContent(25,486.8864);
   8->SetBinContent(26,405.5841);
   8->SetBinContent(27,418.5186);
   8->SetBinContent(28,354.7702);
   8->SetBinContent(29,330.7491);
   8->SetBinContent(30,347.3791);
   8->SetBinContent(31,327.0535);
   8->SetBinContent(32,308.5757);
   8->SetBinContent(33,303.0324);
   8->SetBinContent(34,266.0768);
   8->SetBinContent(35,273.468);
   8->SetBinContent(36,319.6624);
   8->SetBinContent(37,329.8252);
   8->SetBinContent(38,381.563);
   8->SetBinContent(39,438.8441);
   8->SetBinContent(40,463.7891);
   8->SetEntries(107589);
   8->SetStats(0);

   ci = TColor::GetColor("#77bd7d");
   8->SetFillColor(ci);

   ci = TColor::GetColor("#77bd7d");
   8->SetLineColor(ci);
   8->SetLineWidth(2);
   8->SetMarkerSize(1.2);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",40,0.2,1);
   9->SetBinContent(1,3064.429);
   9->SetBinContent(2,6138.843);
   9->SetBinContent(3,3170.337);
   9->SetBinContent(4,3923.12);
   9->SetBinContent(5,5745.093);
   9->SetBinContent(6,3230.981);
   9->SetBinContent(7,1636.971);
   9->SetBinContent(8,1430.81);
   9->SetBinContent(9,1317.4);
   9->SetBinContent(10,1147.724);
   9->SetBinContent(11,1094.535);
   9->SetBinContent(12,958.7063);
   9->SetBinContent(13,902.8802);
   9->SetBinContent(14,818.0422);
   9->SetBinContent(15,738.0396);
   9->SetBinContent(16,723.5336);
   9->SetBinContent(17,671.2241);
   9->SetBinContent(18,632.9811);
   9->SetBinContent(19,591.661);
   9->SetBinContent(20,543.7473);
   9->SetBinContent(21,534.0767);
   9->SetBinContent(22,538.0328);
   9->SetBinContent(23,516.9332);
   9->SetBinContent(24,504.6251);
   9->SetBinContent(25,455.3927);
   9->SetBinContent(26,495.394);
   9->SetBinContent(27,484.8442);
   9->SetBinContent(28,473.8549);
   9->SetBinContent(29,466.8217);
   9->SetBinContent(30,494.9545);
   9->SetBinContent(31,565.2865);
   9->SetBinContent(32,578.0342);
   9->SetBinContent(33,647.4871);
   9->SetBinContent(34,746.3915);
   9->SetBinContent(35,826.8337);
   9->SetBinContent(36,1136.295);
   9->SetBinContent(37,1556.968);
   9->SetBinContent(38,2379.321);
   9->SetBinContent(39,4611.304);
   9->SetBinContent(40,27593.82);
   9->SetEntries(191320);
   9->SetStats(0);

   ci = TColor::GetColor("#e798b9");
   9->SetFillColor(ci);

   ci = TColor::GetColor("#e798b9");
   9->SetLineColor(ci);
   9->SetLineWidth(2);
   9->SetMarkerSize(1.2);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",40,0.2,1);
   10->SetBinContent(1,68566.3);
   10->SetBinContent(2,96125.8);
   10->SetBinContent(3,67254.24);
   10->SetBinContent(4,86675.2);
   10->SetBinContent(5,126238.6);
   10->SetBinContent(6,66109.27);
   10->SetBinContent(7,31268.19);
   10->SetBinContent(8,26692.84);
   10->SetBinContent(9,23690.72);
   10->SetBinContent(10,21229.61);
   10->SetBinContent(11,18793.51);
   10->SetBinContent(12,16680.16);
   10->SetBinContent(13,14964.24);
   10->SetBinContent(14,13761.52);
   10->SetBinContent(15,12285.21);
   10->SetBinContent(16,10962.78);
   10->SetBinContent(17,9993.071);
   10->SetBinContent(18,9367.04);
   10->SetBinContent(19,8595.597);
   10->SetBinContent(20,7972.269);
   10->SetBinContent(21,7503.822);
   10->SetBinContent(22,7097.174);
   10->SetBinContent(23,6675.66);
   10->SetBinContent(24,6279.506);
   10->SetBinContent(25,5985.378);
   10->SetBinContent(26,5778.411);
   10->SetBinContent(27,5498.275);
   10->SetBinContent(28,5190.739);
   10->SetBinContent(29,5183.16);
   10->SetBinContent(30,5174.123);
   10->SetBinContent(31,5373.22);
   10->SetBinContent(32,5617.209);
   10->SetBinContent(33,6049.218);
   10->SetBinContent(34,6784.682);
   10->SetBinContent(35,7987.136);
   10->SetBinContent(36,10122.13);
   10->SetBinContent(37,13721.81);
   10->SetBinContent(38,20890.28);
   10->SetBinContent(39,39170.33);
   10->SetBinContent(40,239543);
   10->SetEntries(3949038);
   10->SetStats(0);

   ci = TColor::GetColor("#9aebb2");
   10->SetFillColor(ci);

   ci = TColor::GetColor("#9aebb2");
   10->SetLineColor(ci);
   10->SetLineWidth(2);
   10->SetMarkerSize(1.2);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",40,0.2,1);
   11->SetBinContent(1,172120.1);
   11->SetBinContent(2,312340.9);
   11->SetBinContent(3,178874.5);
   11->SetBinContent(4,236943.2);
   11->SetBinContent(5,366161.4);
   11->SetBinContent(6,194339.1);
   11->SetBinContent(7,87248.08);
   11->SetBinContent(8,72058.52);
   11->SetBinContent(9,61453.85);
   11->SetBinContent(10,53814.2);
   11->SetBinContent(11,47610.81);
   11->SetBinContent(12,41162.95);
   11->SetBinContent(13,35784.63);
   11->SetBinContent(14,31628.66);
   11->SetBinContent(15,26983.76);
   11->SetBinContent(16,24080.69);
   11->SetBinContent(17,19527.46);
   11->SetBinContent(18,19252.43);
   11->SetBinContent(19,16043.77);
   11->SetBinContent(20,15096.42);
   11->SetBinContent(21,12284.94);
   11->SetBinContent(22,12040.46);
   11->SetBinContent(23,10573.6);
   11->SetBinContent(24,9809.615);
   11->SetBinContent(25,8556.673);
   11->SetBinContent(26,7792.684);
   11->SetBinContent(27,7150.933);
   11->SetBinContent(28,5561.835);
   11->SetBinContent(29,4950.644);
   11->SetBinContent(30,5592.395);
   11->SetBinContent(31,4125.536);
   11->SetBinContent(32,4950.644);
   11->SetBinContent(33,4033.857);
   11->SetBinContent(34,4247.774);
   11->SetBinContent(35,4736.727);
   11->SetBinContent(36,4094.976);
   11->SetBinContent(37,4583.929);
   11->SetBinContent(38,5959.11);
   11->SetBinContent(39,5684.074);
   11->SetBinContent(40,7731.565);
   11->SetEntries(70253);
   11->SetStats(0);

   ci = TColor::GetColor("#ea908f");
   11->SetFillColor(ci);

   ci = TColor::GetColor("#ea908f");
   11->SetLineColor(ci);
   11->SetLineWidth(2);
   11->SetMarkerSize(1.2);
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
   
   TH1F *12 = new TH1F("12","qqqq",40,0.2,1);
   12->SetBinContent(1,73836.42);
   12->SetBinContent(2,134212.1);
   12->SetBinContent(3,85724.55);
   12->SetBinContent(4,121481.6);
   12->SetBinContent(5,187578.6);
   12->SetBinContent(6,98864.73);
   12->SetBinContent(7,39765.46);
   12->SetBinContent(8,33777.22);
   12->SetBinContent(9,29640.47);
   12->SetBinContent(10,26505.21);
   12->SetBinContent(11,22811.55);
   12->SetBinContent(12,19774.48);
   12->SetBinContent(13,17267.13);
   12->SetBinContent(14,15387.61);
   12->SetBinContent(15,13094.12);
   12->SetBinContent(16,11358.26);
   12->SetBinContent(17,10163.55);
   12->SetBinContent(18,8947.375);
   12->SetBinContent(19,7792.757);
   12->SetBinContent(20,7084.811);
   12->SetBinContent(21,6467.773);
   12->SetBinContent(22,5855.031);
   12->SetBinContent(23,5289.533);
   12->SetBinContent(24,4844.293);
   12->SetBinContent(25,4370.42);
   12->SetBinContent(26,3929.418);
   12->SetBinContent(27,3652.301);
   12->SetBinContent(28,3186.143);
   12->SetBinContent(29,3045.794);
   12->SetBinContent(30,2973.472);
   12->SetBinContent(31,2795.888);
   12->SetBinContent(32,2773.69);
   12->SetBinContent(33,2851.025);
   12->SetBinContent(34,2767.245);
   12->SetBinContent(35,2983.497);
   12->SetBinContent(36,3320.763);
   12->SetBinContent(37,3856.379);
   12->SetBinContent(38,4671.78);
   12->SetBinContent(39,6638.854);
   12->SetBinContent(40,20656.86);
   12->SetEntries(1481868);
   12->SetStats(0);

   ci = TColor::GetColor("#4ac7d0");
   12->SetFillColor(ci);

   ci = TColor::GetColor("#4ac7d0");
   12->SetLineColor(ci);
   12->SetLineWidth(2);
   12->SetMarkerSize(1.2);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",40,0.2,1);
   13->SetBinContent(1,2101667);
   13->SetBinContent(2,3110481);
   13->SetBinContent(3,2134321);
   13->SetBinContent(4,2870258);
   13->SetBinContent(5,4478826);
   13->SetBinContent(6,2322277);
   13->SetBinContent(7,986897.3);
   13->SetBinContent(8,817677.7);
   13->SetBinContent(9,728404.8);
   13->SetBinContent(10,642447.8);
   13->SetBinContent(11,555765.5);
   13->SetBinContent(12,484471.5);
   13->SetBinContent(13,414887.3);
   13->SetBinContent(14,375354.4);
   13->SetBinContent(15,321003.1);
   13->SetBinContent(16,275304.4);
   13->SetBinContent(17,236038.4);
   13->SetBinContent(18,219826);
   13->SetBinContent(19,193616.8);
   13->SetBinContent(20,170360);
   13->SetBinContent(21,159068.3);
   13->SetBinContent(22,145238.5);
   13->SetBinContent(23,122292.5);
   13->SetBinContent(24,111933.1);
   13->SetBinContent(25,99760.84);
   13->SetBinContent(26,89971.23);
   13->SetBinContent(27,82667.88);
   13->SetBinContent(28,66196.47);
   13->SetBinContent(29,64746.16);
   13->SetBinContent(30,60343.42);
   13->SetBinContent(31,53868.81);
   13->SetBinContent(32,52263.11);
   13->SetBinContent(33,48274.75);
   13->SetBinContent(34,47290.61);
   13->SetBinContent(35,49673.27);
   13->SetBinContent(36,49362.48);
   13->SetBinContent(37,53920.61);
   13->SetBinContent(38,58996.7);
   13->SetBinContent(39,65108.73);
   13->SetBinContent(40,84687.95);
   13->SetEntries(482878);
   13->SetStats(0);

   ci = TColor::GetColor("#ccac60");
   13->SetFillColor(ci);

   ci = TColor::GetColor("#ccac60");
   13->SetLineColor(ci);
   13->SetLineWidth(2);
   13->SetMarkerSize(1.2);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",40,0.2,1);
   14->SetBinContent(1,210281.4);
   14->SetBinContent(2,315056.1);
   14->SetBinContent(3,235570.9);
   14->SetBinContent(4,356958.6);
   14->SetBinContent(5,740250.9);
   14->SetBinContent(6,342889.4);
   14->SetBinContent(7,95162.55);
   14->SetBinContent(8,76008.14);
   14->SetBinContent(9,62456);
   14->SetBinContent(10,56450.21);
   14->SetBinContent(11,50342.64);
   14->SetBinContent(12,42328.75);
   14->SetBinContent(13,36924.47);
   14->SetBinContent(14,36471.03);
   14->SetBinContent(15,30900.18);
   14->SetBinContent(16,26689.65);
   14->SetBinContent(17,22423.6);
   14->SetBinContent(18,21951.65);
   14->SetBinContent(19,19684.44);
   14->SetBinContent(20,17380.22);
   14->SetBinContent(21,17731.87);
   14->SetBinContent(22,16121.66);
   14->SetBinContent(23,14696.41);
   14->SetBinContent(24,14613.12);
   14->SetBinContent(25,13521.04);
   14->SetBinContent(26,13465.51);
   14->SetBinContent(27,11975.47);
   14->SetBinContent(28,11679.32);
   14->SetBinContent(29,11642.3);
   14->SetBinContent(30,11429.44);
   14->SetBinContent(31,11392.42);
   14->SetBinContent(32,11938.45);
   14->SetBinContent(33,12651.08);
   14->SetBinContent(34,14937.04);
   14->SetBinContent(35,17509.78);
   14->SetBinContent(36,22932.56);
   14->SetBinContent(37,31362.87);
   14->SetBinContent(38,48834.25);
   14->SetBinContent(39,91431.66);
   14->SetBinContent(40,564981.9);
   14->SetEntries(406481);
   14->SetStats(0);

   ci = TColor::GetColor("#79a9eb");
   14->SetFillColor(ci);

   ci = TColor::GetColor("#79a9eb");
   14->SetLineColor(ci);
   14->SetLineWidth(2);
   14->SetMarkerSize(1.2);
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
   
   TH1F *15 = new TH1F("15","qqll",40,0.2,1);
   15->SetBinContent(1,250879.3);
   15->SetBinContent(2,403768);
   15->SetBinContent(3,326093.4);
   15->SetBinContent(4,564375.6);
   15->SetBinContent(5,1498302);
   15->SetBinContent(6,759550.3);
   15->SetBinContent(7,162952.3);
   15->SetBinContent(8,126996.2);
   15->SetBinContent(9,101417.5);
   15->SetBinContent(10,96593.42);
   15->SetBinContent(11,82485.84);
   15->SetBinContent(12,69163.58);
   15->SetBinContent(13,59683.74);
   15->SetBinContent(14,59936.16);
   15->SetBinContent(15,45688.35);
   15->SetBinContent(16,38115.69);
   15->SetBinContent(17,34862.25);
   15->SetBinContent(18,29140.69);
   15->SetBinContent(19,23839.83);
   15->SetBinContent(20,20305.93);
   15->SetBinContent(21,20810.77);
   15->SetBinContent(22,18118.27);
   15->SetBinContent(23,15257.49);
   15->SetBinContent(24,14472.18);
   15->SetBinContent(25,13013.74);
   15->SetBinContent(26,10321.24);
   15->SetBinContent(27,9676.163);
   15->SetBinContent(28,7348.272);
   15->SetBinContent(29,6703.194);
   15->SetBinContent(30,6338.585);
   15->SetBinContent(31,5749.601);
   15->SetBinContent(32,4880.147);
   15->SetBinContent(33,5581.319);
   15->SetBinContent(34,5917.882);
   15->SetBinContent(35,6562.96);
   15->SetBinContent(36,7208.038);
   15->SetBinContent(37,9928.585);
   15->SetBinContent(38,16912.26);
   15->SetBinContent(39,29140.69);
   15->SetBinContent(40,120910.1);
   15->SetEntries(181477);
   15->SetStats(0);

   ci = TColor::GetColor("#e2d689");
   15->SetFillColor(ci);

   ci = TColor::GetColor("#e2d689");
   15->SetLineColor(ci);
   15->SetLineWidth(2);
   15->SetMarkerSize(1.2);
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
   
   TH1F *16 = new TH1F("16","qql#nu",40,0.2,1);
   16->SetBinContent(1,415254.1);
   16->SetBinContent(2,790157.2);
   16->SetBinContent(3,498926);
   16->SetBinContent(4,763360.9);
   16->SetBinContent(5,1579244);
   16->SetBinContent(6,756167.8);
   16->SetBinContent(7,218861.6);
   16->SetBinContent(8,172653.5);
   16->SetBinContent(9,141479.7);
   16->SetBinContent(10,128009.5);
   16->SetBinContent(11,106785.7);
   16->SetBinContent(12,88768.35);
   16->SetBinContent(13,76271.92);
   16->SetBinContent(14,69933.46);
   16->SetBinContent(15,58719.21);
   16->SetBinContent(16,48692.89);
   16->SetBinContent(17,43626.63);
   16->SetBinContent(18,36659.2);
   16->SetBinContent(19,32623.21);
   16->SetBinContent(20,28258.74);
   16->SetBinContent(21,27377.35);
   16->SetBinContent(22,23915.51);
   16->SetBinContent(23,21398.77);
   16->SetBinContent(24,18255.51);
   16->SetBinContent(25,16269.72);
   16->SetBinContent(26,13646.55);
   16->SetBinContent(27,11915.47);
   16->SetBinContent(28,10003.85);
   16->SetBinContent(29,8665.714);
   16->SetBinContent(30,7847.981);
   16->SetBinContent(31,7083.368);
   16->SetBinContent(32,6318.754);
   16->SetBinContent(33,6318.754);
   16->SetBinContent(34,6223.178);
   16->SetBinContent(35,6233.797);
   16->SetBinContent(36,6042.644);
   16->SetBinContent(37,6966.552);
   16->SetBinContent(38,8612.613);
   16->SetBinContent(39,8803.775);
   16->SetBinContent(40,10226.87);
   16->SetEntries(591789);
   16->SetStats(0);

   ci = TColor::GetColor("#c2b0e8");
   16->SetFillColor(ci);

   ci = TColor::GetColor("#c2b0e8");
   16->SetLineColor(ci);
   16->SetLineWidth(2);
   16->SetMarkerSize(1.2);
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
   
   TH1F *17 = new TH1F("17","qq",40,0.2,1);
   17->SetBinContent(1,389797.9);
   17->SetBinContent(2,627878.8);
   17->SetBinContent(3,469279.8);
   17->SetBinContent(4,781187.1);
   17->SetBinContent(5,1769644);
   17->SetBinContent(6,868331.4);
   17->SetBinContent(7,212030.1);
   17->SetBinContent(8,170058.7);
   17->SetBinContent(9,143172.6);
   17->SetBinContent(10,128635);
   17->SetBinContent(11,111118.8);
   17->SetBinContent(12,96886.81);
   17->SetBinContent(13,81742.55);
   17->SetBinContent(14,76086.27);
   17->SetBinContent(15,66172.55);
   17->SetBinContent(16,56441.3);
   17->SetBinContent(17,48534.66);
   17->SetBinContent(18,42695.91);
   17->SetBinContent(19,37769.46);
   17->SetBinContent(20,34424.35);
   17->SetBinContent(21,35032.55);
   17->SetBinContent(22,31200.87);
   17->SetBinContent(23,32478.1);
   17->SetBinContent(24,27247.55);
   17->SetBinContent(25,23476.69);
   17->SetBinContent(26,24875.56);
   17->SetBinContent(27,21165.52);
   17->SetBinContent(28,19097.63);
   17->SetBinContent(29,17942.04);
   17->SetBinContent(30,18063.68);
   17->SetBinContent(31,18550.25);
   17->SetBinContent(32,19340.91);
   17->SetBinContent(33,19340.91);
   17->SetBinContent(34,22990.13);
   17->SetBinContent(35,27916.57);
   17->SetBinContent(36,35823.21);
   17->SetBinContent(37,47561.54);
   17->SetBinContent(38,71099);
   17->SetBinContent(39,132710.2);
   17->SetBinContent(40,546694.1);
   17->SetEntries(121737);
   17->SetStats(0);

   ci = TColor::GetColor("#aec48b");
   17->SetFillColor(ci);

   ci = TColor::GetColor("#aec48b");
   17->SetLineColor(ci);
   17->SetLineWidth(2);
   17->SetMarkerSize(1.2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
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
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
