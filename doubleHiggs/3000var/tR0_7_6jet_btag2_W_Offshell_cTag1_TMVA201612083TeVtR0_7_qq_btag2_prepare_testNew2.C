{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:44:12 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.290235,1.31746,6.089479);
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
   
   TH1F *THStack_stack_20 = new TH1F("THStack_stack_20","",50,0,1);
   THStack_stack_20->SetMinimum(0.02500999);
   THStack_stack_20->SetMaximum(218324.4);
   THStack_stack_20->SetDirectory(0);
   THStack_stack_20->SetStats(0);
   THStack_stack_20->SetLineWidth(2);
   THStack_stack_20->SetMarkerSize(1.2);
   THStack_stack_20->GetXaxis()->SetTitle("Highest C tag of W* jets");
   THStack_stack_20->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_20->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_20->GetXaxis()->SetLabelColor(ci);
   THStack_stack_20->GetXaxis()->SetLabelFont(42);
   THStack_stack_20->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_20->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_20->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_20->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_20->GetXaxis()->SetTitleColor(ci);
   THStack_stack_20->GetXaxis()->SetTitleFont(42);
   THStack_stack_20->GetYaxis()->SetTitle("Number of events");
   THStack_stack_20->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_20->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_20->GetYaxis()->SetLabelColor(ci);
   THStack_stack_20->GetYaxis()->SetLabelFont(42);
   THStack_stack_20->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_20->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_20->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_20->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_20->GetYaxis()->SetTitleColor(ci);
   THStack_stack_20->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_20->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_20->GetZaxis()->SetLabelColor(ci);
   THStack_stack_20->GetZaxis()->SetLabelFont(42);
   THStack_stack_20->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_20->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_20->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_20->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_20->GetZaxis()->SetTitleColor(ci);
   THStack_stack_20->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_20);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,0.4652528);
   0->SetBinContent(2,0.049495);
   0->SetBinContent(3,0.039596);
   0->SetBinContent(4,0.049495);
   0->SetBinContent(5,0.05939399);
   0->SetBinContent(6,0.138586);
   0->SetBinContent(7,0.356364);
   0->SetBinContent(8,0.7424253);
   0->SetBinContent(9,1.445256);
   0->SetBinContent(10,2.36586);
   0->SetBinContent(11,2.593535);
   0->SetBinContent(12,3.118177);
   0->SetBinContent(13,3.761605);
   0->SetBinContent(14,5.305865);
   0->SetBinContent(15,6.642249);
   0->SetBinContent(16,7.09761);
   0->SetBinContent(17,7.394584);
   0->SetBinContent(18,7.315391);
   0->SetBinContent(19,7.364886);
   0->SetBinContent(20,4.820807);
   0->SetBinContent(21,3.227065);
   0->SetBinContent(22,3.038985);
   0->SetBinContent(23,1.900611);
   0->SetBinContent(24,1.366064);
   0->SetBinContent(25,1.474953);
   0->SetBinContent(26,1.187881);
   0->SetBinContent(27,1.336367);
   0->SetBinContent(28,1.247275);
   0->SetBinContent(29,0.9305067);
   0->SetBinContent(30,0.9997998);
   0->SetBinContent(31,0.9404057);
   0->SetBinContent(32,0.8810116);
   0->SetBinContent(33,0.8315165);
   0->SetBinContent(34,0.9206077);
   0->SetBinContent(35,0.6731322);
   0->SetBinContent(36,0.7523243);
   0->SetBinContent(37,0.7226273);
   0->SetBinContent(38,0.7622234);
   0->SetBinContent(39,0.603839);
   0->SetBinContent(40,0.5345459);
   0->SetBinContent(41,0.5444449);
   0->SetBinContent(42,0.6137381);
   0->SetBinContent(43,0.4058589);
   0->SetBinContent(44,0.5444449);
   0->SetBinContent(45,0.584041);
   0->SetBinContent(46,0.4157579);
   0->SetBinContent(47,0.564243);
   0->SetBinContent(48,0.6335361);
   0->SetBinContent(49,0.287071);
   0->SetBinContent(50,0.019798);
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
   1->SetBinContent(1,1.727195);
   1->SetBinContent(2,0.2771441);
   1->SetBinContent(3,0.1682661);
   1->SetBinContent(4,0.1831131);
   1->SetBinContent(5,0.123725);
   1->SetBinContent(6,0.1633171);
   1->SetBinContent(7,0.3117872);
   1->SetBinContent(8,0.5493391);
   1->SetBinContent(9,0.9650528);
   1->SetBinContent(10,1.489644);
   1->SetBinContent(11,1.761838);
   1->SetBinContent(12,1.791531);
   1->SetBinContent(13,2.469552);
   1->SetBinContent(14,3.35544);
   1->SetBinContent(15,3.904789);
   1->SetBinContent(16,4.320513);
   1->SetBinContent(17,4.775829);
   1->SetBinContent(18,4.721389);
   1->SetBinContent(19,5.533041);
   1->SetBinContent(20,3.360389);
   1->SetBinContent(21,2.509145);
   1->SetBinContent(22,2.632872);
   1->SetBinContent(23,1.870715);
   1->SetBinContent(24,1.544083);
   1->SetBinContent(25,1.450052);
   1->SetBinContent(26,1.257042);
   1->SetBinContent(27,1.143216);
   1->SetBinContent(28,1.167961);
   1->SetBinContent(29,1.034338);
   1->SetBinContent(30,0.9502059);
   1->SetBinContent(31,0.9007162);
   1->SetBinContent(32,0.9254611);
   1->SetBinContent(33,0.7027572);
   1->SetBinContent(34,0.8066857);
   1->SetBinContent(35,0.7077062);
   1->SetBinContent(36,0.5790329);
   1->SetBinContent(37,0.4751043);
   1->SetBinContent(38,0.4998493);
   1->SetBinContent(39,0.6334716);
   1->SetBinContent(40,0.4800533);
   1->SetBinContent(41,0.3810732);
   1->SetBinContent(42,0.4058182);
   1->SetBinContent(43,0.3414812);
   1->SetBinContent(44,0.3414812);
   1->SetBinContent(45,0.2820931);
   1->SetBinContent(46,0.2573481);
   1->SetBinContent(47,0.1781641);
   1->SetBinContent(48,0.1633171);
   1->SetBinContent(49,0.059388);
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
   2->SetBinContent(1,2.781345);
   2->SetBinContent(2,0.2573481);
   2->SetBinContent(3,0.09403102);
   2->SetBinContent(4,0.113827);
   2->SetBinContent(5,0.1831131);
   2->SetBinContent(6,0.2425011);
   2->SetBinContent(7,0.5097473);
   2->SetBinContent(8,1.321379);
   2->SetBinContent(9,2.558636);
   2->SetBinContent(10,3.345541);
   2->SetBinContent(11,4.256175);
   2->SetBinContent(12,4.939149);
   2->SetBinContent(13,6.394183);
   2->SetBinContent(14,7.869012);
   2->SetBinContent(15,9.794037);
   2->SetBinContent(16,10.4522);
   2->SetBinContent(17,11.45677);
   2->SetBinContent(18,11.36275);
   2->SetBinContent(19,12.37227);
   2->SetBinContent(20,6.834652);
   2->SetBinContent(21,5.082673);
   2->SetBinContent(22,4.053262);
   2->SetBinContent(23,2.712058);
   2->SetBinContent(24,2.365621);
   2->SetBinContent(25,2.024134);
   2->SetBinContent(26,1.662858);
   2->SetBinContent(27,1.534185);
   2->SetBinContent(28,1.628215);
   2->SetBinContent(29,1.484695);
   2->SetBinContent(30,1.36592);
   2->SetBinContent(31,1.163012);
   2->SetBinContent(32,1.07393);
   2->SetBinContent(33,1.103624);
   2->SetBinContent(34,0.9996957);
   2->SetBinContent(35,0.9106141);
   2->SetBinContent(36,0.7126552);
   2->SetBinContent(37,0.7670939);
   2->SetBinContent(38,0.747298);
   2->SetBinContent(39,0.7176042);
   2->SetBinContent(40,0.6285226);
   2->SetBinContent(41,0.5790329);
   2->SetBinContent(42,0.5344921);
   2->SetBinContent(43,0.5097473);
   2->SetBinContent(44,0.4701553);
   2->SetBinContent(45,0.5245942);
   2->SetBinContent(46,0.6285226);
   2->SetBinContent(47,0.6037778);
   2->SetBinContent(48,0.5245942);
   2->SetBinContent(49,0.4256142);
   2->SetBinContent(50,0.04949);
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
   3->SetBinContent(1,12.42548);
   3->SetBinContent(2,1.181775);
   3->SetBinContent(3,1.181775);
   3->SetBinContent(4,0.6753);
   3->SetBinContent(5,0.8778901);
   3->SetBinContent(6,1.01295);
   3->SetBinContent(7,2.734966);
   3->SetBinContent(8,5.199808);
   3->SetBinContent(9,11.58136);
   3->SetBinContent(10,15.36302);
   3->SetBinContent(11,18.50323);
   3->SetBinContent(12,21.00189);
   3->SetBinContent(13,23.73692);
   3->SetBinContent(14,30.08489);
   3->SetBinContent(15,37.34423);
   3->SetBinContent(16,37.34423);
   3->SetBinContent(17,42.27376);
   3->SetBinContent(18,42.30753);
   3->SetBinContent(19,46.89941);
   3->SetBinContent(20,27.55246);
   3->SetBinContent(21,21.40708);
   3->SetBinContent(22,19.34737);
   3->SetBinContent(23,14.72149);
   3->SetBinContent(24,10.50089);
   3->SetBinContent(25,8.947705);
   3->SetBinContent(26,8.643822);
   3->SetBinContent(27,6.88805);
   3->SetBinContent(28,8.677587);
   3->SetBinContent(29,8.204879);
   3->SetBinContent(30,6.82052);
   3->SetBinContent(31,6.381577);
   3->SetBinContent(32,5.976399);
   3->SetBinContent(33,5.638751);
   3->SetBinContent(34,5.740045);
   3->SetBinContent(35,4.929689);
   3->SetBinContent(36,4.592041);
   3->SetBinContent(37,4.423216);
   3->SetBinContent(38,4.760865);
   3->SetBinContent(39,3.815448);
   3->SetBinContent(40,3.444032);
   3->SetBinContent(41,3.241442);
   3->SetBinContent(42,3.038851);
   3->SetBinContent(43,2.836261);
   3->SetBinContent(44,2.971321);
   3->SetBinContent(45,3.140146);
   3->SetBinContent(46,2.870026);
   3->SetBinContent(47,2.532375);
   3->SetBinContent(48,2.194724);
   3->SetBinContent(49,1.41813);
   3->SetBinContent(50,0.20259);
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
   4->SetBinContent(1,21.4067);
   4->SetBinContent(2,0.9621044);
   4->SetBinContent(3,0.7653102);
   4->SetBinContent(4,0.5466499);
   4->SetBinContent(5,0.7215781);
   4->SetBinContent(6,0.9839704);
   4->SetBinContent(7,2.470859);
   4->SetBinContent(8,4.679326);
   4->SetBinContent(9,9.8178);
   4->SetBinContent(10,12.59476);
   4->SetBinContent(11,14.86881);
   4->SetBinContent(12,18.43294);
   4->SetBinContent(13,22.49999);
   4->SetBinContent(14,30.3061);
   4->SetBinContent(15,34.74487);
   4->SetBinContent(16,38.1778);
   4->SetBinContent(17,41.65447);
   4->SetBinContent(18,46.44309);
   4->SetBinContent(19,58.27251);
   4->SetBinContent(20,28.92855);
   4->SetBinContent(21,21.05684);
   4->SetBinContent(22,18.97959);
   4->SetBinContent(23,13.05394);
   4->SetBinContent(24,10.49564);
   4->SetBinContent(25,8.680776);
   4->SetBinContent(26,8.221593);
   4->SetBinContent(27,7.937336);
   4->SetBinContent(28,9.030629);
   4->SetBinContent(29,7.368824);
   4->SetBinContent(30,6.931508);
   4->SetBinContent(31,6.494191);
   4->SetBinContent(32,5.96941);
   4->SetBinContent(33,5.772618);
   4->SetBinContent(34,5.750752);
   4->SetBinContent(35,5.007313);
   4->SetBinContent(36,4.788655);
   4->SetBinContent(37,4.766789);
   4->SetBinContent(38,4.416935);
   4->SetBinContent(39,4.526265);
   4->SetBinContent(40,4.373204);
   4->SetBinContent(41,4.985447);
   4->SetBinContent(42,4.307606);
   4->SetBinContent(43,4.832386);
   4->SetBinContent(44,4.263875);
   4->SetBinContent(45,4.482533);
   4->SetBinContent(46,4.679326);
   4->SetBinContent(47,4.373204);
   4->SetBinContent(48,4.088948);
   4->SetBinContent(49,2.79885);
   4->SetBinContent(50,0.3061239);
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
   5->SetBinContent(1,46.63956);
   5->SetBinContent(2,3.140318);
   5->SetBinContent(3,2.093544);
   5->SetBinContent(4,2.442468);
   5->SetBinContent(5,3.547396);
   5->SetBinContent(6,6.338793);
   5->SetBinContent(7,12.96836);
   5->SetBinContent(8,25.93656);
   5->SetBinContent(9,55.01389);
   5->SetBinContent(10,69.7849);
   5->SetBinContent(11,82.22926);
   5->SetBinContent(12,98.33716);
   5->SetBinContent(13,113.9217);
   5->SetBinContent(14,150.4407);
   5->SetBinContent(15,175.0968);
   5->SetBinContent(16,180.0397);
   5->SetBinContent(17,190.3906);
   5->SetBinContent(18,198.1247);
   5->SetBinContent(19,230.922);
   5->SetBinContent(20,120.0276);
   5->SetBinContent(21,78.91464);
   5->SetBinContent(22,66.41212);
   5->SetBinContent(23,42.39425);
   5->SetBinContent(24,32.15895);
   5->SetBinContent(25,25.87841);
   5->SetBinContent(26,21.10985);
   5->SetBinContent(27,18.55111);
   5->SetBinContent(28,18.26035);
   5->SetBinContent(29,16.4576);
   5->SetBinContent(30,15.17822);
   5->SetBinContent(31,12.50313);
   5->SetBinContent(32,9.886193);
   5->SetBinContent(33,10.06066);
   5->SetBinContent(34,8.723111);
   5->SetBinContent(35,7.501875);
   5->SetBinContent(36,5.699098);
   5->SetBinContent(37,6.164331);
   5->SetBinContent(38,7.036643);
   5->SetBinContent(39,5.117557);
   5->SetBinContent(40,4.943095);
   5->SetBinContent(41,4.012629);
   5->SetBinContent(42,3.31478);
   5->SetBinContent(43,2.675085);
   5->SetBinContent(44,2.733239);
   5->SetBinContent(45,1.977236);
   5->SetBinContent(46,2.268006);
   5->SetBinContent(47,1.279388);
   5->SetBinContent(48,1.337542);
   5->SetBinContent(49,0.8141559);
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
   6->SetBinContent(1,1953.243);
   6->SetBinContent(2,122.7894);
   6->SetBinContent(3,74.55073);
   6->SetBinContent(4,50.8699);
   6->SetBinContent(5,86.82967);
   6->SetBinContent(6,157.8719);
   6->SetBinContent(7,281.5378);
   6->SetBinContent(8,569.2184);
   6->SetBinContent(9,1134.932);
   6->SetBinContent(10,1379.636);
   6->SetBinContent(11,1740.114);
   6->SetBinContent(12,2152.325);
   6->SetBinContent(13,2646.926);
   6->SetBinContent(14,3583.512);
   6->SetBinContent(15,4669.18);
   6->SetBinContent(16,5105.903);
   6->SetBinContent(17,5711.877);
   6->SetBinContent(18,6125.799);
   6->SetBinContent(19,7072.909);
   6->SetBinContent(20,3743.118);
   6->SetBinContent(21,2482.059);
   6->SetBinContent(22,2133.032);
   6->SetBinContent(23,1245.443);
   6->SetBinContent(24,963.0252);
   6->SetBinContent(25,766.5604);
   6->SetBinContent(26,680.607);
   6->SetBinContent(27,606.0556);
   6->SetBinContent(28,588.5141);
   6->SetBinContent(29,525.3647);
   6->SetBinContent(30,509.5773);
   6->SetBinContent(31,440.2884);
   6->SetBinContent(32,381.5244);
   6->SetBinContent(33,356.0892);
   6->SetBinContent(34,309.6042);
   6->SetBinContent(35,294.6939);
   6->SetBinContent(36,256.9797);
   6->SetBinContent(37,224.5284);
   6->SetBinContent(38,196.4625);
   6->SetBinContent(39,239.4385);
   6->SetBinContent(40,192.9543);
   6->SetBinContent(41,196.4625);
   6->SetBinContent(42,184.1837);
   6->SetBinContent(43,160.5031);
   6->SetBinContent(44,169.2737);
   6->SetBinContent(45,174.536);
   6->SetBinContent(46,139.4536);
   6->SetBinContent(47,138.5766);
   6->SetBinContent(48,135.0683);
   6->SetBinContent(49,56.13231);
   6->SetBinContent(50,10.5248);
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
   7->SetBinContent(1,257.039);
   7->SetBinContent(2,21.13159);
   7->SetBinContent(3,18.23117);
   7->SetBinContent(4,17.40248);
   7->SetBinContent(5,21.54593);
   7->SetBinContent(6,39.08653);
   7->SetBinContent(7,97.78538);
   7->SetBinContent(8,187.9777);
   7->SetBinContent(9,358.5591);
   7->SetBinContent(10,459.8029);
   7->SetBinContent(11,546.1295);
   7->SetBinContent(12,605.6603);
   7->SetBinContent(13,675.4122);
   7->SetBinContent(14,831.6288);
   7->SetBinContent(15,933.287);
   7->SetBinContent(16,971.6851);
   7->SetBinContent(17,999.3096);
   7->SetBinContent(18,1026.657);
   7->SetBinContent(19,1233.887);
   7->SetBinContent(20,593.9199);
   7->SetBinContent(21,450.4106);
   7->SetBinContent(22,392.1229);
   7->SetBinContent(23,252.6191);
   7->SetBinContent(24,184.5247);
   7->SetBinContent(25,157.7289);
   7->SetBinContent(26,138.1155);
   7->SetBinContent(27,132.0381);
   7->SetBinContent(28,117.1215);
   7->SetBinContent(29,105.1055);
   7->SetBinContent(30,98.8903);
   7->SetBinContent(31,83.83577);
   7->SetBinContent(32,79.69232);
   7->SetBinContent(33,74.44395);
   7->SetBinContent(34,66.98575);
   7->SetBinContent(35,57.87016);
   7->SetBinContent(36,56.62712);
   7->SetBinContent(37,51.37876);
   7->SetBinContent(38,49.16892);
   7->SetBinContent(39,52.75991);
   7->SetBinContent(40,43.78244);
   7->SetBinContent(41,44.3349);
   7->SetBinContent(42,43.92055);
   7->SetBinContent(43,33.97628);
   7->SetBinContent(44,31.21398);
   7->SetBinContent(45,37.0148);
   7->SetBinContent(46,34.66685);
   7->SetBinContent(47,32.3189);
   7->SetBinContent(48,27.48487);
   7->SetBinContent(49,14.36395);
   7->SetBinContent(50,2.7623);
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
   8->SetBinContent(1,35.10744);
   8->SetBinContent(2,1.84776);
   8->SetBinContent(3,1.84776);
   8->SetBinContent(5,3.69552);
   8->SetBinContent(6,6.46716);
   8->SetBinContent(7,17.55372);
   8->SetBinContent(8,42.49849);
   8->SetBinContent(9,72.0627);
   8->SetBinContent(10,72.98658);
   8->SetBinContent(11,101.6269);
   8->SetBinContent(12,109.018);
   8->SetBinContent(13,123.8001);
   8->SetBinContent(14,147.8208);
   8->SetBinContent(15,154.2879);
   8->SetBinContent(16,155.2118);
   8->SetBinContent(17,156.1357);
   8->SetBinContent(18,175.537);
   8->SetBinContent(19,178.3087);
   8->SetBinContent(20,88.69257);
   8->SetBinContent(21,60.97612);
   8->SetBinContent(22,47.1179);
   8->SetBinContent(23,37.87908);
   8->SetBinContent(24,22.17311);
   8->SetBinContent(25,15.70596);
   8->SetBinContent(26,18.4776);
   8->SetBinContent(27,14.78208);
   8->SetBinContent(28,14.78208);
   8->SetBinContent(29,14.78208);
   8->SetBinContent(30,8.31492);
   8->SetBinContent(31,9.2388);
   8->SetBinContent(32,8.31492);
   8->SetBinContent(33,8.31492);
   8->SetBinContent(34,12.93432);
   8->SetBinContent(35,12.93432);
   8->SetBinContent(36,8.31492);
   8->SetBinContent(37,7.39104);
   8->SetBinContent(38,3.69552);
   8->SetBinContent(39,8.31492);
   8->SetBinContent(40,12.01044);
   8->SetBinContent(41,9.2388);
   8->SetBinContent(42,11.08656);
   8->SetBinContent(43,4.6194);
   8->SetBinContent(44,8.31492);
   8->SetBinContent(45,5.54328);
   8->SetBinContent(46,9.2388);
   8->SetBinContent(47,9.2388);
   8->SetBinContent(48,6.46716);
   8->SetBinContent(49,4.6194);
   8->SetBinContent(50,0.92388);
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
   9->SetBinContent(1,335.3887);
   9->SetBinContent(2,50.54984);
   9->SetBinContent(3,33.84641);
   9->SetBinContent(4,28.57165);
   9->SetBinContent(5,29.01121);
   9->SetBinContent(6,74.28637);
   9->SetBinContent(7,154.2872);
   9->SetBinContent(8,314.2891);
   9->SetBinContent(9,479.5693);
   9->SetBinContent(10,583.7487);
   9->SetBinContent(11,697.1591);
   9->SetBinContent(12,742.4353);
   9->SetBinContent(13,792.1073);
   9->SetBinContent(14,953.871);
   9->SetBinContent(15,1032.115);
   9->SetBinContent(16,1000.026);
   9->SetBinContent(17,982.8829);
   9->SetBinContent(18,957.8271);
   9->SetBinContent(19,1070.358);
   9->SetBinContent(20,578.0342);
   9->SetBinContent(21,438.2493);
   9->SetBinContent(22,408.7977);
   9->SetBinContent(23,292.3103);
   9->SetBinContent(24,229.0124);
   9->SetBinContent(25,219.7816);
   9->SetBinContent(26,203.0784);
   9->SetBinContent(27,203.0784);
   9->SetBinContent(28,204.8366);
   9->SetBinContent(29,170.9905);
   9->SetBinContent(30,174.9465);
   9->SetBinContent(31,146.8147);
   9->SetBinContent(32,151.6499);
   9->SetBinContent(33,143.7378);
   9->SetBinContent(34,147.6938);
   9->SetBinContent(35,124.3971);
   9->SetBinContent(36,118.6827);
   9->SetBinContent(37,112.0892);
   9->SetBinContent(38,110.3309);
   9->SetBinContent(39,105.4957);
   9->SetBinContent(40,106.8144);
   9->SetBinContent(41,98.90215);
   9->SetBinContent(42,94.06691);
   9->SetBinContent(43,94.50648);
   9->SetBinContent(44,90.55037);
   9->SetBinContent(45,79.56118);
   9->SetBinContent(46,76.48421);
   9->SetBinContent(47,81.31945);
   9->SetBinContent(48,80.87988);
   9->SetBinContent(49,59.78067);
   9->SetBinContent(50,8.791278);
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
   10->SetBinContent(1,4221.432);
   10->SetBinContent(2,276.2924);
   10->SetBinContent(3,181.0904);
   10->SetBinContent(4,171.774);
   10->SetBinContent(5,209.6219);
   10->SetBinContent(6,420.1144);
   10->SetBinContent(7,910.9726);
   10->SetBinContent(8,1734.892);
   10->SetBinContent(9,3237.37);
   10->SetBinContent(10,4258.682);
   10->SetBinContent(11,5108.738);
   10->SetBinContent(12,5916.889);
   10->SetBinContent(13,7043.119);
   10->SetBinContent(14,9037.449);
   10->SetBinContent(15,10879.87);
   10->SetBinContent(16,11440.37);
   10->SetBinContent(17,12494.71);
   10->SetBinContent(18,13533.35);
   10->SetBinContent(19,16220.59);
   10->SetBinContent(20,8042.176);
   10->SetBinContent(21,5704.738);
   10->SetBinContent(22,4979.818);
   10->SetBinContent(23,3094.653);
   10->SetBinContent(24,2254.66);
   10->SetBinContent(25,1869.98);
   10->SetBinContent(26,1696.462);
   10->SetBinContent(27,1556.425);
   10->SetBinContent(28,1490.919);
   10->SetBinContent(29,1355.249);
   10->SetBinContent(30,1198.326);
   10->SetBinContent(31,1067.605);
   10->SetBinContent(32,1008.213);
   10->SetBinContent(33,902.2385);
   10->SetBinContent(34,823.3401);
   10->SetBinContent(35,735.9988);
   10->SetBinContent(36,653.0246);
   10->SetBinContent(37,606.7337);
   10->SetBinContent(38,602.6578);
   10->SetBinContent(39,561.6074);
   10->SetBinContent(40,549.3796);
   10->SetBinContent(41,532.2025);
   10->SetBinContent(42,486.7849);
   10->SetBinContent(43,456.7978);
   10->SetBinContent(44,401.4816);
   10->SetBinContent(45,433.2156);
   10->SetBinContent(46,407.0132);
   10->SetBinContent(47,364.216);
   10->SetBinContent(48,345.8743);
   10->SetBinContent(49,220.394);
   10->SetBinContent(50,26.20289);
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
   11->SetBinContent(1,1129.271);
   11->SetBinContent(5,61.04166);
   11->SetBinContent(6,152.6042);
   11->SetBinContent(7,244.1666);
   11->SetBinContent(8,213.6458);
   11->SetBinContent(9,732.4999);
   11->SetBinContent(10,854.5831);
   11->SetBinContent(11,1220.833);
   11->SetBinContent(12,1556.563);
   11->SetBinContent(13,1495.521);
   11->SetBinContent(14,1953.334);
   11->SetBinContent(15,2655.312);
   11->SetBinContent(16,2777.395);
   11->SetBinContent(17,2594.271);
   11->SetBinContent(18,3357.289);
   11->SetBinContent(19,3326.769);
   11->SetBinContent(20,1648.125);
   11->SetBinContent(21,1129.271);
   11->SetBinContent(22,946.1456);
   11->SetBinContent(23,518.8542);
   11->SetBinContent(24,274.6875);
   11->SetBinContent(25,396.7708);
   11->SetBinContent(26,183.125);
   11->SetBinContent(27,213.6458);
   11->SetBinContent(28,213.6458);
   11->SetBinContent(29,183.125);
   11->SetBinContent(30,244.1666);
   11->SetBinContent(31,152.6042);
   11->SetBinContent(32,91.5625);
   11->SetBinContent(33,61.04166);
   11->SetBinContent(34,213.6458);
   11->SetBinContent(35,61.04166);
   11->SetBinContent(36,152.6042);
   11->SetBinContent(37,61.04166);
   11->SetBinContent(38,122.0833);
   11->SetBinContent(39,30.52083);
   11->SetBinContent(40,183.125);
   11->SetBinContent(42,152.6042);
   11->SetBinContent(43,61.04166);
   11->SetBinContent(44,61.04166);
   11->SetBinContent(45,152.6042);
   11->SetBinContent(46,122.0833);
   11->SetBinContent(47,91.5625);
   11->SetBinContent(48,61.04166);
   11->SetBinContent(49,30.52083);
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
   12->SetBinContent(1,646.5013);
   12->SetBinContent(2,25.77441);
   12->SetBinContent(3,15.03507);
   12->SetBinContent(4,18.61485);
   12->SetBinContent(5,25.05845);
   12->SetBinContent(6,37.22971);
   12->SetBinContent(7,93.07441);
   12->SetBinContent(8,158.2265);
   12->SetBinContent(9,371.5795);
   12->SetBinContent(10,431.7186);
   12->SetBinContent(11,521.2114);
   12->SetBinContent(12,585.6462);
   12->SetBinContent(13,750.313);
   12->SetBinContent(14,1028.099);
   12->SetBinContent(15,1159.116);
   12->SetBinContent(16,1328.078);
   12->SetBinContent(17,1340.965);
   12->SetBinContent(18,1361.728);
   12->SetBinContent(19,1501.337);
   12->SetBinContent(20,848.3971);
   12->SetBinContent(21,539.11);
   12->SetBinContent(22,459.6404);
   12->SetBinContent(23,276.3591);
   12->SetBinContent(24,197.6042);
   12->SetBinContent(25,166.1021);
   12->SetBinContent(26,136.7478);
   12->SetBinContent(27,120.2808);
   12->SetBinContent(28,128.1563);
   12->SetBinContent(29,110.2574);
   12->SetBinContent(30,102.3819);
   12->SetBinContent(31,91.64249);
   12->SetBinContent(32,87.34675);
   12->SetBinContent(33,78.75526);
   12->SetBinContent(34,74.45951);
   12->SetBinContent(35,71.59568);
   12->SetBinContent(36,64.4361);
   12->SetBinContent(37,65.86802);
   12->SetBinContent(38,48.68504);
   12->SetBinContent(39,46.53716);
   12->SetBinContent(40,54.4127);
   12->SetBinContent(41,55.84461);
   12->SetBinContent(42,44.38929);
   12->SetBinContent(43,44.38929);
   12->SetBinContent(44,44.38929);
   12->SetBinContent(45,45.10525);
   12->SetBinContent(46,51.54887);
   12->SetBinContent(47,42.24142);
   12->SetBinContent(48,42.24142);
   12->SetBinContent(49,37.94567);
   12->SetBinContent(50,4.295736);
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
   13->SetBinContent(1,9361.992);
   13->SetBinContent(2,208.0441);
   13->SetBinContent(3,260.0551);
   13->SetBinContent(4,260.0551);
   13->SetBinContent(5,572.1213);
   13->SetBinContent(6,624.1323);
   13->SetBinContent(7,2652.561);
   13->SetBinContent(8,3484.737);
   13->SetBinContent(9,6397.363);
   13->SetBinContent(10,10090.14);
   13->SetBinContent(11,11962.53);
   13->SetBinContent(12,15031.16);
   13->SetBinContent(13,18671.96);
   13->SetBinContent(14,25329.46);
   13->SetBinContent(15,28554.18);
   13->SetBinContent(16,32611.1);
   13->SetBinContent(17,34431.51);
   13->SetBinContent(18,36616);
   13->SetBinContent(19,43013.44);
   13->SetBinContent(20,21272.54);
   13->SetBinContent(21,14771.11);
   13->SetBinContent(22,11338.4);
   13->SetBinContent(23,6761.442);
   13->SetBinContent(24,4576.97);
   13->SetBinContent(25,3900.825);
   13->SetBinContent(26,3172.671);
   13->SetBinContent(27,2860.605);
   13->SetBinContent(28,2288.484);
   13->SetBinContent(29,2548.539);
   13->SetBinContent(30,2340.495);
   13->SetBinContent(31,1872.396);
   13->SetBinContent(32,1612.342);
   13->SetBinContent(33,1196.254);
   13->SetBinContent(34,1872.396);
   13->SetBinContent(35,1248.265);
   13->SetBinContent(36,1144.243);
   13->SetBinContent(37,728.1544);
   13->SetBinContent(38,1248.265);
   13->SetBinContent(39,832.1765);
   13->SetBinContent(40,1248.265);
   13->SetBinContent(41,1092.232);
   13->SetBinContent(42,1248.265);
   13->SetBinContent(43,728.1544);
   13->SetBinContent(44,1456.309);
   13->SetBinContent(45,936.1986);
   13->SetBinContent(46,1040.221);
   13->SetBinContent(47,884.1876);
   13->SetBinContent(48,624.1323);
   13->SetBinContent(49,572.1213);
   13->SetBinContent(50,52.01103);
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
   14->SetBinContent(1,9550.694);
   14->SetBinContent(2,185.0915);
   14->SetBinContent(3,111.0549);
   14->SetBinContent(4,138.8186);
   14->SetBinContent(5,157.3278);
   14->SetBinContent(6,222.1098);
   14->SetBinContent(7,583.0383);
   14->SetBinContent(8,721.857);
   14->SetBinContent(9,2036);
   14->SetBinContent(10,1915.692);
   14->SetBinContent(11,2230.348);
   14->SetBinContent(12,2369.167);
   14->SetBinContent(13,3165.066);
   14->SetBinContent(14,3868.419);
   14->SetBinContent(15,4599.522);
   14->SetBinContent(16,5090.005);
   14->SetBinContent(17,6700.27);
   14->SetBinContent(18,8828.813);
   14->SetBinContent(19,11012.97);
   14->SetBinContent(20,4497.724);
   14->SetBinContent(21,3313.14);
   14->SetBinContent(22,2859.663);
   14->SetBinContent(23,1471.475);
   14->SetBinContent(24,795.8936);
   14->SetBinContent(25,879.1848);
   14->SetBinContent(26,629.3112);
   14->SetBinContent(27,934.7123);
   14->SetBinContent(28,518.2563);
   14->SetBinContent(29,536.7654);
   14->SetBinContent(30,444.2197);
   14->SetBinContent(31,342.4193);
   14->SetBinContent(32,259.1281);
   14->SetBinContent(33,212.8553);
   14->SetBinContent(34,231.3644);
   14->SetBinContent(35,249.8736);
   14->SetBinContent(36,240.619);
   14->SetBinContent(37,175.837);
   14->SetBinContent(38,222.1098);
   14->SetBinContent(39,83.29119);
   14->SetBinContent(40,129.5641);
   14->SetBinContent(41,111.0549);
   14->SetBinContent(42,83.29119);
   14->SetBinContent(43,64.78204);
   14->SetBinContent(44,64.78204);
   14->SetBinContent(45,46.27288);
   14->SetBinContent(46,46.27288);
   14->SetBinContent(47,46.27288);
   14->SetBinContent(49,18.50915);
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
   15->SetBinContent(1,3113.194);
   15->SetBinContent(2,28.04676);
   15->SetBinContent(5,84.14027);
   15->SetBinContent(6,56.09351);
   15->SetBinContent(7,224.374);
   15->SetBinContent(8,280.4676);
   15->SetBinContent(9,757.2624);
   15->SetBinContent(10,897.4962);
   15->SetBinContent(11,981.6364);
   15->SetBinContent(12,1121.87);
   15->SetBinContent(13,925.5429);
   15->SetBinContent(14,1570.618);
   15->SetBinContent(15,1458.431);
   15->SetBinContent(16,1682.805);
   15->SetBinContent(17,2019.366);
   15->SetBinContent(18,2664.444);
   15->SetBinContent(19,3646.085);
   15->SetBinContent(20,1093.823);
   15->SetBinContent(21,1009.683);
   15->SetBinContent(22,869.4494);
   15->SetBinContent(23,588.9819);
   15->SetBinContent(24,336.5611);
   15->SetBinContent(25,112.187);
   15->SetBinContent(26,140.2338);
   15->SetBinContent(27,280.4676);
   15->SetBinContent(28,280.4676);
   15->SetBinContent(29,84.14027);
   15->SetBinContent(30,196.3273);
   15->SetBinContent(31,112.187);
   15->SetBinContent(32,168.2805);
   15->SetBinContent(33,56.09351);
   15->SetBinContent(34,112.187);
   15->SetBinContent(35,56.09351);
   15->SetBinContent(36,28.04676);
   15->SetBinContent(38,112.187);
   15->SetBinContent(39,28.04676);
   15->SetBinContent(40,28.04676);
   15->SetBinContent(41,112.187);
   15->SetBinContent(42,28.04676);
   15->SetBinContent(45,56.09351);
   15->SetBinContent(46,56.09351);
   15->SetBinContent(47,56.09351);
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
   16->SetBinContent(1,1061.98);
   16->SetBinContent(2,31.85936);
   16->SetBinContent(3,10.61979);
   16->SetBinContent(4,10.61979);
   16->SetBinContent(5,31.85936);
   16->SetBinContent(6,53.09894);
   16->SetBinContent(7,74.33852);
   16->SetBinContent(8,127.4375);
   16->SetBinContent(9,414.1716);
   16->SetBinContent(10,307.9738);
   16->SetBinContent(11,414.1716);
   16->SetBinContent(12,467.2705);
   16->SetBinContent(13,552.2288);
   16->SetBinContent(14,754.0052);
   16->SetBinContent(15,892.0628);
   16->SetBinContent(16,807.1043);
   16->SetBinContent(17,1125.698);
   16->SetBinContent(18,1316.854);
   16->SetBinContent(19,1688.545);
   16->SetBinContent(20,732.7656);
   16->SetBinContent(21,584.0883);
   16->SetBinContent(22,467.2705);
   16->SetBinContent(23,212.3957);
   16->SetBinContent(24,148.677);
   16->SetBinContent(25,63.71873);
   16->SetBinContent(26,63.71873);
   16->SetBinContent(27,63.71873);
   16->SetBinContent(28,53.09894);
   16->SetBinContent(29,63.71873);
   16->SetBinContent(30,31.85936);
   16->SetBinContent(31,10.61979);
   16->SetBinContent(32,31.85936);
   16->SetBinContent(33,31.85936);
   16->SetBinContent(34,95.57809);
   16->SetBinContent(36,42.47915);
   16->SetBinContent(37,31.85936);
   16->SetBinContent(38,21.23957);
   16->SetBinContent(39,10.61979);
   16->SetBinContent(40,21.23957);
   16->SetBinContent(41,10.61979);
   16->SetBinContent(42,10.61979);
   16->SetBinContent(43,21.23957);
   16->SetBinContent(44,21.23957);
   16->SetBinContent(45,21.23957);
   16->SetBinContent(46,10.61979);
   16->SetBinContent(48,10.61979);
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
   17->SetBinContent(1,9305.558);
   17->SetBinContent(2,121.6411);
   17->SetBinContent(3,60.82056);
   17->SetBinContent(4,243.2822);
   17->SetBinContent(7,486.5645);
   17->SetBinContent(8,1094.77);
   17->SetBinContent(9,2189.54);
   17->SetBinContent(10,2007.078);
   17->SetBinContent(11,1946.258);
   17->SetBinContent(12,3162.669);
   17->SetBinContent(13,4074.978);
   17->SetBinContent(14,3953.336);
   17->SetBinContent(15,5352.214);
   17->SetBinContent(16,4865.648);
   17->SetBinContent(17,6629.451);
   17->SetBinContent(18,7845.867);
   17->SetBinContent(19,8940.636);
   17->SetBinContent(20,3710.054);
   17->SetBinContent(21,3101.849);
   17->SetBinContent(22,2311.181);
   17->SetBinContent(23,1520.514);
   17->SetBinContent(24,669.0262);
   17->SetBinContent(25,790.6673);
   17->SetBinContent(26,364.9234);
   17->SetBinContent(27,608.2056);
   17->SetBinContent(28,486.5645);
   17->SetBinContent(29,364.9234);
   17->SetBinContent(30,608.2056);
   17->SetBinContent(31,121.6411);
   17->SetBinContent(32,425.7439);
   17->SetBinContent(33,547.3851);
   17->SetBinContent(34,182.4617);
   17->SetBinContent(35,364.9234);
   17->SetBinContent(36,304.1028);
   17->SetBinContent(37,121.6411);
   17->SetBinContent(38,304.1028);
   17->SetBinContent(39,182.4617);
   17->SetBinContent(40,243.2822);
   17->SetBinContent(42,182.4617);
   17->SetBinContent(43,304.1028);
   17->SetBinContent(44,121.6411);
   17->SetBinContent(45,121.6411);
   17->SetBinContent(46,60.82056);
   17->SetBinContent(47,60.82056);
   17->SetBinContent(48,182.4617);
   17->SetBinContent(49,60.82056);
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
