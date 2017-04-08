{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:43:25 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.264936,1.31746,5.998146);
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
   THStack_stack_16->SetMinimum(0.02525913);
   THStack_stack_16->SetMaximum(180758.7);
   THStack_stack_16->SetDirectory(0);
   THStack_stack_16->SetStats(0);
   THStack_stack_16->SetLineWidth(2);
   THStack_stack_16->SetMarkerSize(1.2);
   THStack_stack_16->GetXaxis()->SetTitle("Highest B tag of W jets");
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
   0->SetBinContent(1,0.06929299);
   0->SetBinContent(2,0.247475);
   0->SetBinContent(3,2.553939);
   0->SetBinContent(4,6.998618);
   0->SetBinContent(5,10.04755);
   0->SetBinContent(6,9.74068);
   0->SetBinContent(7,9.136832);
   0->SetBinContent(8,6.652148);
   0->SetBinContent(9,5.800822);
   0->SetBinContent(10,4.157565);
   0->SetBinContent(11,3.009289);
   0->SetBinContent(12,3.029087);
   0->SetBinContent(13,2.167882);
   0->SetBinContent(14,2.217377);
   0->SetBinContent(15,2.870704);
   0->SetBinContent(16,1.514549);
   0->SetBinContent(17,1.069093);
   0->SetBinContent(18,0.7523243);
   0->SetBinContent(19,0.7721224);
   0->SetBinContent(20,0.4949498);
   0->SetBinContent(21,0.564243);
   0->SetBinContent(22,0.4553539);
   0->SetBinContent(23,0.3959599);
   0->SetBinContent(24,0.257374);
   0->SetBinContent(25,0.4454549);
   0->SetBinContent(26,0.356364);
   0->SetBinContent(27,0.3860609);
   0->SetBinContent(28,0.287071);
   0->SetBinContent(29,0.168283);
   0->SetBinContent(30,0.207879);
   0->SetBinContent(31,0.257374);
   0->SetBinContent(32,0.247475);
   0->SetBinContent(33,0.19798);
   0->SetBinContent(34,0.188081);
   0->SetBinContent(35,0.207879);
   0->SetBinContent(36,0.207879);
   0->SetBinContent(37,0.158384);
   0->SetBinContent(38,0.178182);
   0->SetBinContent(39,0.287071);
   0->SetBinContent(40,0.19798);
   0->SetBinContent(41,0.257374);
   0->SetBinContent(42,0.207879);
   0->SetBinContent(43,0.178182);
   0->SetBinContent(44,0.316768);
   0->SetBinContent(45,0.4058589);
   0->SetBinContent(46,0.5147479);
   0->SetBinContent(47,0.6236371);
   0->SetBinContent(48,0.8216175);
   0->SetBinContent(49,1.474953);
   0->SetBinContent(50,6.315578);
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
   1->SetBinContent(1,0.1534191);
   1->SetBinContent(2,0.07423501);
   1->SetBinContent(3,0.2870421);
   1->SetBinContent(4,0.7670939);
   1->SetBinContent(5,1.479746);
   1->SetBinContent(6,1.786582);
   1->SetBinContent(7,2.459654);
   1->SetBinContent(8,1.964746);
   1->SetBinContent(9,1.850919);
   1->SetBinContent(10,1.717297);
   1->SetBinContent(11,1.375818);
   1->SetBinContent(12,1.826174);
   1->SetBinContent(13,1.504491);
   1->SetBinContent(14,1.504491);
   1->SetBinContent(15,1.638113);
   1->SetBinContent(16,1.331277);
   1->SetBinContent(17,0.8462775);
   1->SetBinContent(18,0.742349);
   1->SetBinContent(19,0.9007162);
   1->SetBinContent(20,0.7176042);
   1->SetBinContent(21,0.7571959);
   1->SetBinContent(22,0.6730634);
   1->SetBinContent(23,0.7027572);
   1->SetBinContent(24,0.6433696);
   1->SetBinContent(25,0.7027572);
   1->SetBinContent(26,0.5493391);
   1->SetBinContent(27,0.6532675);
   1->SetBinContent(28,0.5245942);
   1->SetBinContent(29,0.6087267);
   1->SetBinContent(30,0.4998493);
   1->SetBinContent(31,0.5146962);
   1->SetBinContent(32,0.5196452);
   1->SetBinContent(33,0.4454103);
   1->SetBinContent(34,0.5196452);
   1->SetBinContent(35,0.4008692);
   1->SetBinContent(36,0.564186);
   1->SetBinContent(37,0.6285226);
   1->SetBinContent(38,0.569135);
   1->SetBinContent(39,0.5196452);
   1->SetBinContent(40,0.6334716);
   1->SetBinContent(41,0.6334716);
   1->SetBinContent(42,0.6483185);
   1->SetBinContent(43,0.7176042);
   1->SetBinContent(44,0.7720429);
   1->SetBinContent(45,0.9056652);
   1->SetBinContent(46,1.311481);
   1->SetBinContent(47,1.707399);
   1->SetBinContent(48,2.330977);
   1->SetBinContent(49,3.62764);
   1->SetBinContent(50,17.42013);
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
   2->SetBinContent(1,0.6285226);
   2->SetBinContent(2,0.4454103);
   2->SetBinContent(3,3.46432);
   2->SetBinContent(4,8.284709);
   2->SetBinContent(5,12.783);
   2->SetBinContent(6,12.34752);
   2->SetBinContent(7,12.52567);
   2->SetBinContent(8,8.626163);
   2->SetBinContent(9,7.755183);
   2->SetBinContent(10,5.439008);
   2->SetBinContent(11,4.028516);
   2->SetBinContent(12,4.691695);
   2->SetBinContent(13,3.251509);
   2->SetBinContent(14,3.414829);
   2->SetBinContent(15,4.058211);
   2->SetBinContent(16,2.286436);
   2->SetBinContent(17,1.232297);
   2->SetBinContent(18,1.138267);
   2->SetBinContent(19,1.034338);
   2->SetBinContent(20,0.9650528);
   2->SetBinContent(21,0.747298);
   2->SetBinContent(22,0.752247);
   2->SetBinContent(23,0.6483185);
   2->SetBinContent(24,0.6235737);
   2->SetBinContent(25,0.6384206);
   2->SetBinContent(26,0.4998493);
   2->SetBinContent(27,0.5196452);
   2->SetBinContent(28,0.4503593);
   2->SetBinContent(29,0.4602573);
   2->SetBinContent(30,0.4949003);
   2->SetBinContent(31,0.4256142);
   2->SetBinContent(32,0.3612772);
   2->SetBinContent(33,0.3365322);
   2->SetBinContent(34,0.3315832);
   2->SetBinContent(35,0.3216852);
   2->SetBinContent(36,0.5047983);
   2->SetBinContent(37,0.4701553);
   2->SetBinContent(38,0.4850023);
   2->SetBinContent(39,0.4157162);
   2->SetBinContent(40,0.4751043);
   2->SetBinContent(41,0.5988288);
   2->SetBinContent(42,0.4454103);
   2->SetBinContent(43,0.559237);
   2->SetBinContent(44,0.7670939);
   2->SetBinContent(45,0.8363795);
   2->SetBinContent(46,0.9551549);
   2->SetBinContent(47,1.370869);
   2->SetBinContent(48,2.083523);
   2->SetBinContent(49,3.390083);
   2->SetBinContent(50,15.35628);
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
   3->SetBinContent(1,2.160959);
   3->SetBinContent(2,1.688249);
   3->SetBinContent(3,12.45925);
   3->SetBinContent(4,28.05894);
   3->SetBinContent(5,40.21416);
   3->SetBinContent(6,39.13372);
   3->SetBinContent(7,36.83778);
   3->SetBinContent(8,27.41739);
   3->SetBinContent(9,24.68237);
   3->SetBinContent(10,18.70582);
   3->SetBinContent(11,15.39679);
   3->SetBinContent(12,17.82791);
   3->SetBinContent(13,12.39172);
   3->SetBinContent(14,12.66184);
   3->SetBinContent(15,14.18126);
   3->SetBinContent(16,9.386648);
   3->SetBinContent(17,6.043929);
   3->SetBinContent(18,5.672515);
   3->SetBinContent(19,5.098513);
   3->SetBinContent(20,5.030983);
   3->SetBinContent(21,4.760865);
   3->SetBinContent(22,4.254392);
   3->SetBinContent(23,4.254392);
   3->SetBinContent(24,4.085568);
   3->SetBinContent(25,3.376502);
   3->SetBinContent(26,3.444032);
   3->SetBinContent(27,3.477797);
   3->SetBinContent(28,3.140146);
   3->SetBinContent(29,2.7012);
   3->SetBinContent(30,2.971321);
   3->SetBinContent(31,2.937556);
   3->SetBinContent(32,2.262254);
   3->SetBinContent(33,2.734966);
   3->SetBinContent(34,1.992134);
   3->SetBinContent(35,2.127194);
   3->SetBinContent(36,2.734966);
   3->SetBinContent(37,3.241442);
   3->SetBinContent(38,3.140146);
   3->SetBinContent(39,2.63367);
   3->SetBinContent(40,3.140146);
   3->SetBinContent(41,3.579093);
   3->SetBinContent(42,3.308972);
   3->SetBinContent(43,4.220627);
   3->SetBinContent(44,4.592041);
   3->SetBinContent(45,5.503691);
   3->SetBinContent(46,6.550401);
   3->SetBinContent(47,9.116529);
   3->SetBinContent(48,13.06702);
   3->SetBinContent(49,20.29281);
   3->SetBinContent(50,98.89974);
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
   4->SetBinContent(1,2.645787);
   4->SetBinContent(2,1.771145);
   4->SetBinContent(3,7.674946);
   4->SetBinContent(4,18.03936);
   4->SetBinContent(5,29.10348);
   4->SetBinContent(6,35.24778);
   4->SetBinContent(7,41.50141);
   4->SetBinContent(8,33.43291);
   4->SetBinContent(9,35.16032);
   4->SetBinContent(10,28.60056);
   4->SetBinContent(11,21.77842);
   4->SetBinContent(12,23.33089);
   4->SetBinContent(13,16.50875);
   4->SetBinContent(14,16.94607);
   4->SetBinContent(15,19.6137);
   4->SetBinContent(16,12.55103);
   4->SetBinContent(17,9.358617);
   4->SetBinContent(18,7.303227);
   4->SetBinContent(19,6.384861);
   4->SetBinContent(20,5.750752);
   4->SetBinContent(21,4.766789);
   4->SetBinContent(22,4.723057);
   4->SetBinContent(23,4.110814);
   4->SetBinContent(24,4.067082);
   4->SetBinContent(25,3.695359);
   4->SetBinContent(26,3.432966);
   4->SetBinContent(27,3.126841);
   4->SetBinContent(28,2.886314);
   4->SetBinContent(29,2.492725);
   4->SetBinContent(30,2.339662);
   4->SetBinContent(31,2.033537);
   4->SetBinContent(32,2.558323);
   4->SetBinContent(33,2.142867);
   4->SetBinContent(34,2.055403);
   4->SetBinContent(35,2.121001);
   4->SetBinContent(36,3.957752);
   4->SetBinContent(37,3.214305);
   4->SetBinContent(38,3.586029);
   4->SetBinContent(39,2.711385);
   4->SetBinContent(40,3.345502);
   4->SetBinContent(41,3.236171);
   4->SetBinContent(42,3.236171);
   4->SetBinContent(43,4.154545);
   4->SetBinContent(44,3.957752);
   4->SetBinContent(45,4.65746);
   4->SetBinContent(46,6.188069);
   4->SetBinContent(47,8.899434);
   4->SetBinContent(48,10.82363);
   4->SetBinContent(49,19.70116);
   4->SetBinContent(50,91.09315);
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
   5->SetBinContent(1,5.466482);
   5->SetBinContent(2,11.45635);
   5->SetBinContent(3,75.65817);
   5->SetBinContent(4,182.4239);
   5->SetBinContent(5,253.8917);
   5->SetBinContent(6,230.9801);
   5->SetBinContent(7,230.922);
   5->SetBinContent(8,137.8219);
   5->SetBinContent(9,131.1345);
   5->SetBinContent(10,89.26556);
   5->SetBinContent(11,62.74852);
   5->SetBinContent(12,67.57515);
   5->SetBinContent(13,41.75454);
   5->SetBinContent(14,48.7913);
   5->SetBinContent(15,64.43498);
   5->SetBinContent(16,29.83282);
   5->SetBinContent(17,13.5499);
   5->SetBinContent(18,11.57266);
   5->SetBinContent(19,9.537269);
   5->SetBinContent(20,9.537269);
   5->SetBinContent(21,8.257878);
   5->SetBinContent(22,6.57141);
   5->SetBinContent(23,6.629564);
   5->SetBinContent(24,7.211105);
   5->SetBinContent(25,6.280639);
   5->SetBinContent(26,5.815406);
   5->SetBinContent(27,5.524636);
   5->SetBinContent(28,4.3034);
   5->SetBinContent(29,3.838167);
   5->SetBinContent(30,4.361554);
   5->SetBinContent(31,4.245245);
   5->SetBinContent(32,5.001249);
   5->SetBinContent(33,4.3034);
   5->SetBinContent(34,3.082164);
   5->SetBinContent(35,4.477862);
   5->SetBinContent(36,6.106177);
   5->SetBinContent(37,6.048023);
   5->SetBinContent(38,6.222485);
   5->SetBinContent(39,5.699098);
   5->SetBinContent(40,6.222485);
   5->SetBinContent(41,7.211105);
   5->SetBinContent(42,6.164331);
   5->SetBinContent(43,6.978488);
   5->SetBinContent(44,8.14157);
   5->SetBinContent(45,11.28189);
   5->SetBinContent(46,14.65483);
   5->SetBinContent(47,18.60927);
   5->SetBinContent(48,27.33224);
   5->SetBinContent(49,49.25654);
   5->SetBinContent(50,232.6084);
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
   6->SetBinContent(1,297.3251);
   6->SetBinContent(2,172.7819);
   6->SetBinContent(3,1188.433);
   6->SetBinContent(4,2824.071);
   6->SetBinContent(5,4885.788);
   6->SetBinContent(6,5175.182);
   6->SetBinContent(7,5998.641);
   6->SetBinContent(8,4052.682);
   6->SetBinContent(9,4107.053);
   6->SetBinContent(10,2947.721);
   6->SetBinContent(11,2083.045);
   6->SetBinContent(12,2449.612);
   6->SetBinContent(13,1467.343);
   6->SetBinContent(14,1763.795);
   6->SetBinContent(15,2152.325);
   6->SetBinContent(16,1045.47);
   6->SetBinContent(17,537.6437);
   6->SetBinContent(18,491.1588);
   6->SetBinContent(19,427.1323);
   6->SetBinContent(20,413.0991);
   6->SetBinContent(21,347.3184);
   6->SetBinContent(22,333.2852);
   6->SetBinContent(23,283.2919);
   6->SetBinContent(24,252.5944);
   6->SetBinContent(25,251.7173);
   6->SetBinContent(26,223.6514);
   6->SetBinContent(27,242.9467);
   6->SetBinContent(28,223.6514);
   6->SetBinContent(29,185.9378);
   6->SetBinContent(30,183.3066);
   6->SetBinContent(31,172.7819);
   6->SetBinContent(32,178.0443);
   6->SetBinContent(33,134.1913);
   6->SetBinContent(34,156.9948);
   6->SetBinContent(35,147.3472);
   6->SetBinContent(36,253.4714);
   6->SetBinContent(37,256.1026);
   6->SetBinContent(38,256.9797);
   6->SetBinContent(39,236.8073);
   6->SetBinContent(40,269.2587);
   6->SetBinContent(41,253.4714);
   6->SetBinContent(42,286.8002);
   6->SetBinContent(43,276.2753);
   6->SetBinContent(44,338.5477);
   6->SetBinContent(45,424.501);
   6->SetBinContent(46,503.4378);
   6->SetBinContent(47,713.9359);
   6->SetBinContent(48,1020.035);
   6->SetBinContent(49,1801.509);
   6->SetBinContent(50,8432.187);
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
   7->SetBinContent(1,27.89922);
   7->SetBinContent(2,93.78004);
   7->SetBinContent(3,617.1245);
   7->SetBinContent(4,1169.136);
   7->SetBinContent(5,1412.539);
   7->SetBinContent(6,1201.028);
   7->SetBinContent(7,1083.814);
   7->SetBinContent(8,728.5894);
   7->SetBinContent(9,682.7327);
   7->SetBinContent(10,492.3998);
   7->SetBinContent(11,336.1832);
   7->SetBinContent(12,375.1338);
   7->SetBinContent(13,251.0997);
   7->SetBinContent(14,292.1221);
   7->SetBinContent(15,362.4265);
   7->SetBinContent(16,180.381);
   7->SetBinContent(17,89.22225);
   7->SetBinContent(18,85.21692);
   7->SetBinContent(19,73.20092);
   7->SetBinContent(20,68.50501);
   7->SetBinContent(21,58.69885);
   7->SetBinContent(22,57.45581);
   7->SetBinContent(23,52.89802);
   7->SetBinContent(24,45.71605);
   7->SetBinContent(25,43.50621);
   7->SetBinContent(26,43.22998);
   7->SetBinContent(27,36.73857);
   7->SetBinContent(28,35.63366);
   7->SetBinContent(29,31.35209);
   7->SetBinContent(30,30.38529);
   7->SetBinContent(31,29.14225);
   7->SetBinContent(32,30.66152);
   7->SetBinContent(33,27.20864);
   7->SetBinContent(34,24.86069);
   7->SetBinContent(35,28.86602);
   7->SetBinContent(36,70.99108);
   7->SetBinContent(37,62.98041);
   7->SetBinContent(38,62.42795);
   7->SetBinContent(39,57.17958);
   7->SetBinContent(40,61.0468);
   7->SetBinContent(41,55.93655);
   7->SetBinContent(42,60.90869);
   7->SetBinContent(43,58.00827);
   7->SetBinContent(44,65.05214);
   7->SetBinContent(45,81.62593);
   7->SetBinContent(46,97.0948);
   7->SetBinContent(47,124.0272);
   7->SetBinContent(48,176.0992);
   7->SetBinContent(49,290.0503);
   7->SetBinContent(50,1320.728);
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
   8->SetBinContent(1,11.08656);
   8->SetBinContent(2,28.64027);
   8->SetBinContent(3,132.115);
   8->SetBinContent(4,230.0456);
   8->SetBinContent(5,241.1321);
   8->SetBinContent(6,209.7204);
   8->SetBinContent(7,195.8623);
   8->SetBinContent(8,127.4956);
   8->SetBinContent(9,128.4195);
   8->SetBinContent(10,92.38809);
   8->SetBinContent(11,60.97612);
   8->SetBinContent(12,71.13882);
   8->SetBinContent(13,39.72684);
   8->SetBinContent(14,48.04178);
   8->SetBinContent(15,48.96566);
   8->SetBinContent(16,35.10744);
   8->SetBinContent(17,9.2388);
   8->SetBinContent(18,14.78208);
   8->SetBinContent(19,9.2388);
   8->SetBinContent(20,4.6194);
   8->SetBinContent(21,9.2388);
   8->SetBinContent(22,3.69552);
   8->SetBinContent(23,4.6194);
   8->SetBinContent(24,5.54328);
   8->SetBinContent(25,3.69552);
   8->SetBinContent(26,4.6194);
   8->SetBinContent(27,2.77164);
   8->SetBinContent(28,3.69552);
   8->SetBinContent(29,3.69552);
   8->SetBinContent(31,2.77164);
   8->SetBinContent(32,0.92388);
   8->SetBinContent(33,2.77164);
   8->SetBinContent(34,1.84776);
   8->SetBinContent(35,6.46716);
   8->SetBinContent(36,15.70596);
   8->SetBinContent(37,20.32536);
   8->SetBinContent(38,22.17311);
   8->SetBinContent(39,19.40148);
   8->SetBinContent(40,18.4776);
   8->SetBinContent(41,17.55372);
   8->SetBinContent(42,14.78208);
   8->SetBinContent(43,8.31492);
   8->SetBinContent(44,12.01044);
   8->SetBinContent(45,13.8582);
   8->SetBinContent(46,14.78208);
   8->SetBinContent(47,9.2388);
   8->SetBinContent(48,25.86863);
   8->SetBinContent(49,22.17311);
   8->SetBinContent(50,30.48803);
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
   9->SetBinContent(1,37.80249);
   9->SetBinContent(2,108.5726);
   9->SetBinContent(3,665.5096);
   9->SetBinContent(4,1116.953);
   9->SetBinContent(5,1332.785);
   9->SetBinContent(6,1097.612);
   9->SetBinContent(7,1051.896);
   9->SetBinContent(8,702.434);
   9->SetBinContent(9,653.6411);
   9->SetBinContent(10,541.1099);
   9->SetBinContent(11,355.6091);
   9->SetBinContent(12,430.7765);
   9->SetBinContent(13,275.6064);
   9->SetBinContent(14,310.3329);
   9->SetBinContent(15,353.4113);
   9->SetBinContent(16,223.7377);
   9->SetBinContent(17,153.4081);
   9->SetBinContent(18,133.6279);
   9->SetBinContent(19,109.8913);
   9->SetBinContent(20,107.2539);
   9->SetBinContent(21,90.1108);
   9->SetBinContent(22,91.86907);
   9->SetBinContent(23,76.48421);
   9->SetBinContent(24,80.00075);
   9->SetBinContent(25,74.72594);
   9->SetBinContent(26,80.87988);
   9->SetBinContent(27,64.61588);
   9->SetBinContent(28,58.46198);
   9->SetBinContent(29,56.70373);
   9->SetBinContent(30,62.41806);
   9->SetBinContent(31,55.38504);
   9->SetBinContent(32,52.74765);
   9->SetBinContent(33,51.86853);
   9->SetBinContent(34,53.18722);
   9->SetBinContent(35,48.79158);
   9->SetBinContent(36,89.67123);
   9->SetBinContent(37,94.50648);
   9->SetBinContent(38,76.48421);
   9->SetBinContent(39,85.71513);
   9->SetBinContent(40,80.44032);
   9->SetBinContent(41,92.30864);
   9->SetBinContent(42,92.30864);
   9->SetBinContent(43,104.177);
   9->SetBinContent(44,103.2978);
   9->SetBinContent(45,127.0345);
   9->SetBinContent(46,181.5399);
   9->SetBinContent(47,225.9355);
   9->SetBinContent(48,320.0035);
   9->SetBinContent(49,530.9996);
   9->SetBinContent(50,2503.247);
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
   10->SetBinContent(1,443.9877);
   10->SetBinContent(2,650.6955);
   10->SetBinContent(3,4042.995);
   10->SetBinContent(4,8806.092);
   10->SetBinContent(5,12647.5);
   10->SetBinContent(6,12272.96);
   10->SetBinContent(7,12752.55);
   10->SetBinContent(8,8651.854);
   10->SetBinContent(9,8527.59);
   10->SetBinContent(10,6339.734);
   10->SetBinContent(11,4576.762);
   10->SetBinContent(12,5142.496);
   10->SetBinContent(13,3498.048);
   10->SetBinContent(14,3926.782);
   10->SetBinContent(15,4940.822);
   10->SetBinContent(16,2562.812);
   10->SetBinContent(17,1359.034);
   10->SetBinContent(18,1179.693);
   10->SetBinContent(19,1065.567);
   10->SetBinContent(20,1000.352);
   10->SetBinContent(21,901.9473);
   10->SetBinContent(22,838.1882);
   10->SetBinContent(23,741.2393);
   10->SetBinContent(24,714.1635);
   10->SetBinContent(25,681.265);
   10->SetBinContent(26,606.1514);
   10->SetBinContent(27,581.4047);
   10->SetBinContent(28,537.7341);
   10->SetBinContent(29,516.481);
   10->SetBinContent(30,478.0508);
   10->SetBinContent(31,460.2914);
   10->SetBinContent(32,448.0636);
   10->SetBinContent(33,420.4055);
   10->SetBinContent(34,435.8358);
   10->SetBinContent(35,401.7727);
   10->SetBinContent(36,770.062);
   10->SetBinContent(37,720.5685);
   10->SetBinContent(38,722.8976);
   10->SetBinContent(39,683.3029);
   10->SetBinContent(40,714.4547);
   10->SetBinContent(41,720.2774);
   10->SetBinContent(42,734.8343);
   10->SetBinContent(43,812.8592);
   10->SetBinContent(44,917.0865);
   10->SetBinContent(45,1052.757);
   10->SetBinContent(46,1305.173);
   10->SetBinContent(47,1764.88);
   10->SetBinContent(48,2610.87);
   10->SetBinContent(49,4429.508);
   10->SetBinContent(50,20615.21);
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
   11->SetBinContent(1,152.6042);
   11->SetBinContent(2,122.0833);
   11->SetBinContent(3,915.6248);
   11->SetBinContent(4,1556.563);
   11->SetBinContent(5,3418.331);
   11->SetBinContent(6,3143.644);
   11->SetBinContent(7,3113.123);
   11->SetBinContent(8,2594.271);
   11->SetBinContent(9,2289.063);
   11->SetBinContent(10,1648.125);
   11->SetBinContent(11,946.1456);
   11->SetBinContent(12,1068.229);
   11->SetBinContent(13,732.4999);
   11->SetBinContent(14,946.1456);
   11->SetBinContent(15,1098.75);
   11->SetBinContent(16,549.375);
   11->SetBinContent(17,274.6875);
   11->SetBinContent(18,244.1666);
   11->SetBinContent(19,122.0833);
   11->SetBinContent(20,244.1666);
   11->SetBinContent(21,152.6042);
   11->SetBinContent(23,122.0833);
   11->SetBinContent(24,61.04166);
   11->SetBinContent(25,152.6042);
   11->SetBinContent(26,122.0833);
   11->SetBinContent(27,122.0833);
   11->SetBinContent(28,30.52083);
   11->SetBinContent(29,30.52083);
   11->SetBinContent(30,122.0833);
   11->SetBinContent(33,61.04166);
   11->SetBinContent(34,91.5625);
   11->SetBinContent(36,701.9791);
   11->SetBinContent(37,640.9374);
   11->SetBinContent(38,579.8958);
   11->SetBinContent(39,335.7292);
   11->SetBinContent(40,305.2083);
   11->SetBinContent(41,183.125);
   11->SetBinContent(42,396.7708);
   11->SetBinContent(43,274.6875);
   11->SetBinContent(44,122.0833);
   11->SetBinContent(45,305.2083);
   11->SetBinContent(46,244.1666);
   11->SetBinContent(47,335.7292);
   11->SetBinContent(48,488.3334);
   11->SetBinContent(49,396.7708);
   11->SetBinContent(50,579.8958);
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
   12->SetBinContent(1,155.3627);
   12->SetBinContent(2,82.33504);
   12->SetBinContent(3,547.7013);
   12->SetBinContent(4,992.3015);
   12->SetBinContent(5,1465.539);
   12->SetBinContent(6,1369.603);
   12->SetBinContent(7,1527.11);
   12->SetBinContent(8,951.4928);
   12->SetBinContent(9,1068.907);
   12->SetBinContent(10,734.5623);
   12->SetBinContent(11,496.8694);
   12->SetBinContent(12,670.1274);
   12->SetBinContent(13,376.5911);
   12->SetBinContent(14,463.936);
   12->SetBinContent(15,529.8027);
   12->SetBinContent(16,282.8026);
   12->SetBinContent(17,142.4755);
   12->SetBinContent(18,108.8255);
   12->SetBinContent(19,88.77866);
   12->SetBinContent(20,61.57227);
   12->SetBinContent(21,78.0393);
   12->SetBinContent(22,60.14036);
   12->SetBinContent(23,51.54887);
   12->SetBinContent(24,46.53716);
   12->SetBinContent(25,47.96908);
   12->SetBinContent(26,29.35419);
   12->SetBinContent(27,38.66163);
   12->SetBinContent(28,27.92228);
   12->SetBinContent(29,26.49036);
   12->SetBinContent(30,33.64993);
   12->SetBinContent(31,20.76272);
   12->SetBinContent(32,18.61485);
   12->SetBinContent(33,28.63823);
   12->SetBinContent(34,21.47867);
   12->SetBinContent(35,23.62654);
   12->SetBinContent(36,157.5106);
   12->SetBinContent(37,158.9425);
   12->SetBinContent(38,133.884);
   12->SetBinContent(39,123.8606);
   12->SetBinContent(40,118.8489);
   12->SetBinContent(41,113.1212);
   12->SetBinContent(42,108.8255);
   12->SetBinContent(43,120.2808);
   12->SetBinContent(44,133.884);
   12->SetBinContent(45,112.4053);
   12->SetBinContent(46,129.5882);
   12->SetBinContent(47,152.4989);
   12->SetBinContent(48,196.8883);
   12->SetBinContent(49,282.0867);
   12->SetBinContent(50,867.7275);
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
   13->SetBinContent(1,1612.342);
   13->SetBinContent(2,1664.353);
   13->SetBinContent(3,9518.024);
   13->SetBinContent(4,23144.96);
   13->SetBinContent(5,40360.84);
   13->SetBinContent(6,37968.3);
   13->SetBinContent(7,41921.2);
   13->SetBinContent(8,27930.04);
   13->SetBinContent(9,27878.03);
   13->SetBinContent(10,19296.1);
   13->SetBinContent(11,12430.63);
   13->SetBinContent(12,13002.74);
   13->SetBinContent(13,9205.96);
   13->SetBinContent(14,10558.24);
   13->SetBinContent(15,12950.73);
   13->SetBinContent(16,6605.408);
   13->SetBinContent(17,2808.594);
   13->SetBinContent(18,2392.506);
   13->SetBinContent(19,2496.528);
   13->SetBinContent(20,1144.243);
   13->SetBinContent(21,1508.32);
   13->SetBinContent(22,1248.265);
   13->SetBinContent(23,1352.287);
   13->SetBinContent(24,1040.221);
   13->SetBinContent(25,1040.221);
   13->SetBinContent(26,780.1655);
   13->SetBinContent(27,364.0772);
   13->SetBinContent(28,416.0882);
   13->SetBinContent(29,416.0882);
   13->SetBinContent(30,364.0772);
   13->SetBinContent(31,832.1765);
   13->SetBinContent(32,884.1876);
   13->SetBinContent(33,468.0992);
   13->SetBinContent(34,468.0992);
   13->SetBinContent(35,416.0882);
   13->SetBinContent(36,4889.038);
   13->SetBinContent(37,5669.206);
   13->SetBinContent(38,4108.869);
   13->SetBinContent(39,3952.836);
   13->SetBinContent(40,3952.836);
   13->SetBinContent(41,3380.715);
   13->SetBinContent(42,4264.903);
   13->SetBinContent(43,3484.737);
   13->SetBinContent(44,3016.638);
   13->SetBinContent(45,3796.803);
   13->SetBinContent(46,2912.616);
   13->SetBinContent(47,3588.759);
   13->SetBinContent(48,3120.66);
   13->SetBinContent(49,4576.97);
   13->SetBinContent(50,6397.363);
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
   14->SetBinContent(1,2211.838);
   14->SetBinContent(2,203.6007);
   14->SetBinContent(3,749.6207);
   14->SetBinContent(4,1452.966);
   14->SetBinContent(5,2433.95);
   14->SetBinContent(6,2767.117);
   14->SetBinContent(7,3766.618);
   14->SetBinContent(8,2813.39);
   14->SetBinContent(9,3544.506);
   14->SetBinContent(10,3183.575);
   14->SetBinContent(11,2285.875);
   14->SetBinContent(12,2730.098);
   14->SetBinContent(13,1638.056);
   14->SetBinContent(14,2720.844);
   14->SetBinContent(15,3738.854);
   14->SetBinContent(16,1749.11);
   14->SetBinContent(17,758.8753);
   14->SetBinContent(18,712.6024);
   14->SetBinContent(19,694.0933);
   14->SetBinContent(20,592.2929);
   14->SetBinContent(21,583.0383);
   14->SetBinContent(22,564.5292);
   14->SetBinContent(23,425.7105);
   14->SetBinContent(24,555.2746);
   14->SetBinContent(25,462.7289);
   14->SetBinContent(26,388.6922);
   14->SetBinContent(27,425.7105);
   14->SetBinContent(28,425.7105);
   14->SetBinContent(29,323.9102);
   14->SetBinContent(30,444.2197);
   14->SetBinContent(31,407.2014);
   14->SetBinContent(32,314.6556);
   14->SetBinContent(33,296.1465);
   14->SetBinContent(34,370.1831);
   14->SetBinContent(35,296.1465);
   14->SetBinContent(36,666.3295);
   14->SetBinContent(37,629.3112);
   14->SetBinContent(38,499.7472);
   14->SetBinContent(39,694.0933);
   14->SetBinContent(40,601.5475);
   14->SetBinContent(41,620.0566);
   14->SetBinContent(42,962.476);
   14->SetBinContent(43,703.3478);
   14->SetBinContent(44,823.6573);
   14->SetBinContent(45,1008.749);
   14->SetBinContent(46,1286.385);
   14->SetBinContent(47,1906.437);
   14->SetBinContent(48,2350.658);
   14->SetBinContent(49,4210.837);
   14->SetBinContent(50,18999.65);
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
   15->SetBinContent(1,673.1221);
   15->SetBinContent(3,476.7948);
   15->SetBinContent(4,701.1689);
   15->SetBinContent(5,953.5897);
   15->SetBinContent(6,1177.964);
   15->SetBinContent(7,1430.385);
   15->SetBinContent(8,617.0286);
   15->SetBinContent(9,1149.917);
   15->SetBinContent(10,1037.73);
   15->SetBinContent(11,673.1221);
   15->SetBinContent(12,785.3091);
   15->SetBinContent(13,953.5897);
   15->SetBinContent(14,869.4494);
   15->SetBinContent(15,981.6364);
   15->SetBinContent(16,560.9351);
   15->SetBinContent(17,280.4676);
   15->SetBinContent(18,196.3273);
   15->SetBinContent(19,224.374);
   15->SetBinContent(20,224.374);
   15->SetBinContent(21,336.5611);
   15->SetBinContent(22,140.2338);
   15->SetBinContent(23,252.4208);
   15->SetBinContent(24,56.09351);
   15->SetBinContent(25,168.2805);
   15->SetBinContent(26,168.2805);
   15->SetBinContent(27,84.14027);
   15->SetBinContent(28,196.3273);
   15->SetBinContent(29,112.187);
   15->SetBinContent(30,224.374);
   15->SetBinContent(31,140.2338);
   15->SetBinContent(32,56.09351);
   15->SetBinContent(33,84.14027);
   15->SetBinContent(34,112.187);
   15->SetBinContent(35,28.04676);
   15->SetBinContent(36,224.374);
   15->SetBinContent(37,280.4676);
   15->SetBinContent(38,140.2338);
   15->SetBinContent(39,252.4208);
   15->SetBinContent(40,280.4676);
   15->SetBinContent(41,112.187);
   15->SetBinContent(42,420.7013);
   15->SetBinContent(43,196.3273);
   15->SetBinContent(44,140.2338);
   15->SetBinContent(45,224.374);
   15->SetBinContent(46,224.374);
   15->SetBinContent(47,504.8416);
   15->SetBinContent(48,981.6364);
   15->SetBinContent(49,1262.104);
   15->SetBinContent(50,6142.257);
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
   16->SetBinContent(1,414.1716);
   16->SetBinContent(2,95.57809);
   16->SetBinContent(3,424.7914);
   16->SetBinContent(4,690.2864);
   16->SetBinContent(5,881.443);
   16->SetBinContent(6,1040.74);
   16->SetBinContent(7,998.2609);
   16->SetBinContent(8,796.4845);
   16->SetBinContent(9,732.7656);
   16->SetBinContent(10,817.7241);
   16->SetBinContent(11,350.4529);
   16->SetBinContent(12,530.9892);
   16->SetBinContent(13,339.8331);
   16->SetBinContent(14,467.2705);
   16->SetBinContent(15,775.2449);
   16->SetBinContent(16,233.6353);
   16->SetBinContent(17,74.33852);
   16->SetBinContent(18,84.95831);
   16->SetBinContent(19,42.47915);
   16->SetBinContent(20,95.57809);
   16->SetBinContent(21,31.85936);
   16->SetBinContent(22,10.61979);
   16->SetBinContent(23,10.61979);
   16->SetBinContent(24,21.23957);
   16->SetBinContent(25,31.85936);
   16->SetBinContent(26,31.85936);
   16->SetBinContent(27,21.23957);
   16->SetBinContent(29,10.61979);
   16->SetBinContent(30,10.61979);
   16->SetBinContent(32,21.23957);
   16->SetBinContent(36,361.0727);
   16->SetBinContent(37,254.8748);
   16->SetBinContent(38,212.3957);
   16->SetBinContent(39,233.6353);
   16->SetBinContent(40,212.3957);
   16->SetBinContent(41,106.1979);
   16->SetBinContent(42,180.5364);
   16->SetBinContent(43,191.1562);
   16->SetBinContent(44,106.1979);
   16->SetBinContent(45,138.0573);
   16->SetBinContent(46,148.677);
   16->SetBinContent(47,244.2551);
   16->SetBinContent(48,138.0573);
   16->SetBinContent(49,223.0155);
   16->SetBinContent(50,191.1562);
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
   17->SetBinContent(1,2493.643);
   17->SetBinContent(2,182.4617);
   17->SetBinContent(3,1459.693);
   17->SetBinContent(4,3101.849);
   17->SetBinContent(5,3284.31);
   17->SetBinContent(6,3649.234);
   17->SetBinContent(7,4014.157);
   17->SetBinContent(8,3770.875);
   17->SetBinContent(9,3770.875);
   17->SetBinContent(10,3405.951);
   17->SetBinContent(11,2372.002);
   17->SetBinContent(12,3223.49);
   17->SetBinContent(13,1642.155);
   17->SetBinContent(14,2189.54);
   17->SetBinContent(15,2919.387);
   17->SetBinContent(16,1277.232);
   17->SetBinContent(17,547.3851);
   17->SetBinContent(18,547.3851);
   17->SetBinContent(19,608.2056);
   17->SetBinContent(20,790.6673);
   17->SetBinContent(21,1094.77);
   17->SetBinContent(22,486.5645);
   17->SetBinContent(23,486.5645);
   17->SetBinContent(24,425.7439);
   17->SetBinContent(25,304.1028);
   17->SetBinContent(26,60.82056);
   17->SetBinContent(27,182.4617);
   17->SetBinContent(28,547.3851);
   17->SetBinContent(29,425.7439);
   17->SetBinContent(30,60.82056);
   17->SetBinContent(31,364.9234);
   17->SetBinContent(32,121.6411);
   17->SetBinContent(33,182.4617);
   17->SetBinContent(34,304.1028);
   17->SetBinContent(35,243.2822);
   17->SetBinContent(36,425.7439);
   17->SetBinContent(37,425.7439);
   17->SetBinContent(38,669.0262);
   17->SetBinContent(39,790.6673);
   17->SetBinContent(40,425.7439);
   17->SetBinContent(41,486.5645);
   17->SetBinContent(42,547.3851);
   17->SetBinContent(43,364.9234);
   17->SetBinContent(44,669.0262);
   17->SetBinContent(45,608.2056);
   17->SetBinContent(46,912.3084);
   17->SetBinContent(47,1642.155);
   17->SetBinContent(48,2128.72);
   17->SetBinContent(49,3831.695);
   17->SetBinContent(50,16239.07);
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
