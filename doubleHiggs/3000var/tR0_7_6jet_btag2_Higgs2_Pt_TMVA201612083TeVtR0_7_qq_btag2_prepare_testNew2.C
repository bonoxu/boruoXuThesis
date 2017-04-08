{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:41:49 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-53.96825,-3.142891,263.4921,5.560151);
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
   
   TH1F *THStack_stack_8 = new TH1F("THStack_stack_8","",50,0,200);
   THStack_stack_8->SetMinimum(0.02652507);
   THStack_stack_8->SetMaximum(73098.37);
   THStack_stack_8->SetDirectory(0);
   THStack_stack_8->SetStats(0);
   THStack_stack_8->SetLineWidth(2);
   THStack_stack_8->SetMarkerSize(1.2);
   THStack_stack_8->GetXaxis()->SetTitle("P_{T,H#rightarrowWW*} / GeV");
   THStack_stack_8->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetXaxis()->SetLabelColor(ci);
   THStack_stack_8->GetXaxis()->SetLabelFont(42);
   THStack_stack_8->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_8->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_8->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_8->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_8->GetXaxis()->SetTitleColor(ci);
   THStack_stack_8->GetXaxis()->SetTitleFont(42);
   THStack_stack_8->GetYaxis()->SetTitle("Number of events");
   THStack_stack_8->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetYaxis()->SetLabelColor(ci);
   THStack_stack_8->GetYaxis()->SetLabelFont(42);
   THStack_stack_8->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_8->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_8->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_8->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_8->GetYaxis()->SetTitleColor(ci);
   THStack_stack_8->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetZaxis()->SetLabelColor(ci);
   THStack_stack_8->GetZaxis()->SetLabelFont(42);
   THStack_stack_8->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_8->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_8->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_8->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_8->GetZaxis()->SetTitleColor(ci);
   THStack_stack_8->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_8);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,200);
   0->SetBinContent(1,0.118788);
   0->SetBinContent(2,0.4553539);
   0->SetBinContent(3,0.7226273);
   0->SetBinContent(4,0.9899008);
   0->SetBinContent(5,1.247275);
   0->SetBinContent(6,1.663034);
   0->SetBinContent(7,1.771923);
   0->SetBinContent(8,1.80162);
   0->SetBinContent(9,2.039196);
   0->SetBinContent(10,2.108489);
   0->SetBinContent(11,2.237175);
   0->SetBinContent(12,2.385658);
   0->SetBinContent(13,2.494546);
   0->SetBinContent(14,2.494546);
   0->SetBinContent(15,2.573737);
   0->SetBinContent(16,2.514344);
   0->SetBinContent(17,2.623232);
   0->SetBinContent(18,2.504445);
   0->SetBinContent(19,2.256972);
   0->SetBinContent(20,2.237175);
   0->SetBinContent(21,2.197579);
   0->SetBinContent(22,2.355961);
   0->SetBinContent(23,2.148084);
   0->SetBinContent(24,1.930308);
   0->SetBinContent(25,1.999601);
   0->SetBinContent(26,1.781822);
   0->SetBinContent(27,1.870914);
   0->SetBinContent(28,1.890712);
   0->SetBinContent(29,1.80162);
   0->SetBinContent(30,1.890712);
   0->SetBinContent(31,1.60364);
   0->SetBinContent(32,1.712529);
   0->SetBinContent(33,1.544246);
   0->SetBinContent(34,1.474953);
   0->SetBinContent(35,1.207679);
   0->SetBinContent(36,1.19778);
   0->SetBinContent(37,1.009699);
   0->SetBinContent(38,1.138386);
   0->SetBinContent(39,1.138386);
   0->SetBinContent(40,0.9107087);
   0->SetBinContent(41,0.9404057);
   0->SetBinContent(42,0.8117185);
   0->SetBinContent(43,0.8909106);
   0->SetBinContent(44,0.7424253);
   0->SetBinContent(45,0.7325263);
   0->SetBinContent(46,0.7622234);
   0->SetBinContent(47,0.6929302);
   0->SetBinContent(48,0.564243);
   0->SetBinContent(49,0.7127283);
   0->SetBinContent(50,0.7127283);
   0->SetBinContent(51,12.46294);
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
   1->SetBinContent(1,0.1930111);
   1->SetBinContent(2,0.4602573);
   1->SetBinContent(3,0.9650528);
   1->SetBinContent(4,1.158063);
   1->SetBinContent(5,1.455001);
   1->SetBinContent(6,1.727195);
   1->SetBinContent(7,1.850919);
   1->SetBinContent(8,1.84597);
   1->SetBinContent(9,2.167657);
   1->SetBinContent(10,2.024134);
   1->SetBinContent(11,2.15281);
   1->SetBinContent(12,2.37057);
   1->SetBinContent(13,2.157759);
   1->SetBinContent(14,2.286436);
   1->SetBinContent(15,2.345825);
   1->SetBinContent(16,2.103319);
   1->SetBinContent(17,2.009286);
   1->SetBinContent(18,1.979592);
   1->SetBinContent(19,1.890511);
   1->SetBinContent(20,1.930103);
   1->SetBinContent(21,2.053828);
   1->SetBinContent(22,1.598521);
   1->SetBinContent(23,1.811327);
   1->SetBinContent(24,1.529236);
   1->SetBinContent(25,1.430256);
   1->SetBinContent(26,1.519338);
   1->SetBinContent(27,1.31643);
   1->SetBinContent(28,1.024441);
   1->SetBinContent(29,1.252093);
   1->SetBinContent(30,1.009594);
   1->SetBinContent(31,1.088777);
   1->SetBinContent(32,1.024441);
   1->SetBinContent(33,0.9502059);
   1->SetBinContent(34,0.8264816);
   1->SetBinContent(35,0.8165836);
   1->SetBinContent(36,0.6631655);
   1->SetBinContent(37,0.6730634);
   1->SetBinContent(38,0.6186247);
   1->SetBinContent(39,0.6235737);
   1->SetBinContent(40,0.5839819);
   1->SetBinContent(41,0.4701553);
   1->SetBinContent(42,0.4899513);
   1->SetBinContent(43,0.5295432);
   1->SetBinContent(44,0.5047983);
   1->SetBinContent(45,0.4206652);
   1->SetBinContent(46,0.3909712);
   1->SetBinContent(47,0.4008692);
   1->SetBinContent(48,0.3068382);
   1->SetBinContent(49,0.3266342);
   1->SetBinContent(50,0.2721951);
   1->SetBinContent(51,5.033182);
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
   2->SetBinContent(1,0.2622971);
   2->SetBinContent(2,0.9848487);
   2->SetBinContent(3,1.672756);
   2->SetBinContent(4,2.157759);
   2->SetBinContent(5,2.766498);
   2->SetBinContent(6,2.86053);
   2->SetBinContent(7,3.385134);
   2->SetBinContent(8,3.528658);
   2->SetBinContent(9,4.003771);
   2->SetBinContent(10,3.949331);
   2->SetBinContent(11,4.00872);
   2->SetBinContent(12,4.048313);
   2->SetBinContent(13,4.429393);
   2->SetBinContent(14,4.043364);
   2->SetBinContent(15,3.894891);
   2->SetBinContent(16,3.95428);
   2->SetBinContent(17,4.142345);
   2->SetBinContent(18,3.850349);
   2->SetBinContent(19,3.79096);
   2->SetBinContent(20,3.781062);
   2->SetBinContent(21,3.380185);
   2->SetBinContent(22,3.202018);
   2->SetBinContent(23,3.038698);
   2->SetBinContent(24,2.999105);
   2->SetBinContent(25,3.004054);
   2->SetBinContent(26,2.825887);
   2->SetBinContent(27,2.707108);
   2->SetBinContent(28,2.553687);
   2->SetBinContent(29,2.484399);
   2->SetBinContent(30,2.251792);
   2->SetBinContent(31,1.979592);
   2->SetBinContent(32,1.974643);
   2->SetBinContent(33,1.920205);
   2->SetBinContent(34,1.850919);
   2->SetBinContent(35,1.65296);
   2->SetBinContent(36,1.534185);
   2->SetBinContent(37,1.667807);
   2->SetBinContent(38,1.549032);
   2->SetBinContent(39,1.455001);
   2->SetBinContent(40,1.271889);
   2->SetBinContent(41,1.257042);
   2->SetBinContent(42,1.07393);
   2->SetBinContent(43,1.128369);
   2->SetBinContent(44,0.9155631);
   2->SetBinContent(45,0.935359);
   2->SetBinContent(46,0.935359);
   2->SetBinContent(47,0.93041);
   2->SetBinContent(48,0.8363795);
   2->SetBinContent(49,0.6334716);
   2->SetBinContent(50,0.6483185);
   2->SetBinContent(51,14.61399);
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
   3->SetBinContent(1,1.28307);
   3->SetBinContent(2,3.680388);
   3->SetBinContent(3,5.334867);
   3->SetBinContent(4,8.036055);
   3->SetBinContent(5,9.454178);
   3->SetBinContent(6,10.56842);
   3->SetBinContent(7,12.59431);
   3->SetBinContent(8,12.96572);
   3->SetBinContent(9,13.20208);
   3->SetBinContent(10,12.45925);
   3->SetBinContent(11,14.58643);
   3->SetBinContent(12,13.43843);
   3->SetBinContent(13,14.31631);
   3->SetBinContent(14,13.84361);
   3->SetBinContent(15,13.23584);
   3->SetBinContent(16,12.72937);
   3->SetBinContent(17,14.21502);
   3->SetBinContent(18,13.91114);
   3->SetBinContent(19,14.28255);
   3->SetBinContent(20,12.02031);
   3->SetBinContent(21,12.52678);
   3->SetBinContent(22,11.64889);
   3->SetBinContent(23,11.75019);
   3->SetBinContent(24,11.78395);
   3->SetBinContent(25,10.60218);
   3->SetBinContent(26,10.26453);
   3->SetBinContent(27,10.93983);
   3->SetBinContent(28,10.23077);
   3->SetBinContent(29,9.690532);
   3->SetBinContent(30,9.690532);
   3->SetBinContent(31,9.049);
   3->SetBinContent(32,8.91394);
   3->SetBinContent(33,8.474998);
   3->SetBinContent(34,7.326993);
   3->SetBinContent(35,8.00229);
   3->SetBinContent(36,7.394522);
   3->SetBinContent(37,6.212753);
   3->SetBinContent(38,7.394522);
   3->SetBinContent(39,6.415342);
   3->SetBinContent(40,6.010164);
   3->SetBinContent(41,6.010164);
   3->SetBinContent(42,5.469926);
   3->SetBinContent(43,6.482872);
   3->SetBinContent(44,5.199808);
   3->SetBinContent(45,4.693335);
   3->SetBinContent(46,5.976399);
   3->SetBinContent(47,4.119333);
   3->SetBinContent(48,5.368632);
   3->SetBinContent(49,3.882978);
   3->SetBinContent(50,4.423216);
   3->SetBinContent(51,105.4844);
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
   4->SetBinContent(1,2.29593);
   4->SetBinContent(2,7.1283);
   4->SetBinContent(3,9.424214);
   4->SetBinContent(4,11.12975);
   4->SetBinContent(5,12.26677);
   4->SetBinContent(6,13.90671);
   4->SetBinContent(7,15.9621);
   4->SetBinContent(8,15.65598);
   4->SetBinContent(9,18.08309);
   4->SetBinContent(10,17.73324);
   4->SetBinContent(11,17.29592);
   4->SetBinContent(12,16.61808);
   4->SetBinContent(13,17.12099);
   4->SetBinContent(14,16.70554);
   4->SetBinContent(15,15.91837);
   4->SetBinContent(16,16.74927);
   4->SetBinContent(17,16.44315);
   4->SetBinContent(18,15.9621);
   4->SetBinContent(19,15.98397);
   4->SetBinContent(20,15.1968);
   4->SetBinContent(21,13.2726);
   4->SetBinContent(22,14.03791);
   4->SetBinContent(23,14.32216);
   4->SetBinContent(24,12.81342);
   4->SetBinContent(25,10.93296);
   4->SetBinContent(26,12.22304);
   4->SetBinContent(27,10.53937);
   4->SetBinContent(28,9.795934);
   4->SetBinContent(29,9.030629);
   4->SetBinContent(30,10.29885);
   4->SetBinContent(31,8.65891);
   4->SetBinContent(32,8.221593);
   4->SetBinContent(33,8.352788);
   4->SetBinContent(34,8.090398);
   4->SetBinContent(35,7.871739);
   4->SetBinContent(36,7.346959);
   4->SetBinContent(37,6.669117);
   4->SetBinContent(38,6.319264);
   4->SetBinContent(39,5.532094);
   4->SetBinContent(40,5.335301);
   4->SetBinContent(41,4.876118);
   4->SetBinContent(42,5.007313);
   4->SetBinContent(43,4.941716);
   4->SetBinContent(44,4.679326);
   4->SetBinContent(45,4.744923);
   4->SetBinContent(46,3.586029);
   4->SetBinContent(47,4.110814);
   4->SetBinContent(48,3.826556);
   4->SetBinContent(49,3.236171);
   4->SetBinContent(50,3.739091);
   4->SetBinContent(51,72.02613);
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
   5->SetBinContent(1,5.233865);
   5->SetBinContent(2,12.67759);
   5->SetBinContent(3,21.57508);
   5->SetBinContent(4,27.68116);
   5->SetBinContent(5,31.51927);
   5->SetBinContent(6,41.40561);
   5->SetBinContent(7,45.9417);
   5->SetBinContent(8,51.52459);
   5->SetBinContent(9,53.03662);
   5->SetBinContent(10,56.64223);
   5->SetBinContent(11,57.16563);
   5->SetBinContent(12,60.306);
   5->SetBinContent(13,61.70173);
   5->SetBinContent(14,62.92298);
   5->SetBinContent(15,64.60944);
   5->SetBinContent(16,59.84076);
   5->SetBinContent(17,55.82806);
   5->SetBinContent(18,57.28194);
   5->SetBinContent(19,58.79397);
   5->SetBinContent(20,58.32873);
   5->SetBinContent(21,52.68769);
   5->SetBinContent(22,53.26924);
   5->SetBinContent(23,53.56002);
   5->SetBinContent(24,47.27927);
   5->SetBinContent(25,47.45374);
   5->SetBinContent(26,45.82539);
   5->SetBinContent(27,43.78997);
   5->SetBinContent(28,40.24251);
   5->SetBinContent(29,41.05668);
   5->SetBinContent(30,34.07807);
   5->SetBinContent(31,35.88088);
   5->SetBinContent(32,37.2766);
   5->SetBinContent(33,31.86819);
   5->SetBinContent(34,33.14759);
   5->SetBinContent(35,31.98449);
   5->SetBinContent(36,30.2399);
   5->SetBinContent(37,27.91377);
   5->SetBinContent(38,27.39039);
   5->SetBinContent(39,25.47134);
   5->SetBinContent(40,22.67999);
   5->SetBinContent(41,22.50553);
   5->SetBinContent(42,21.22616);
   5->SetBinContent(43,20.76093);
   5->SetBinContent(44,19.83048);
   5->SetBinContent(45,20.1794);
   5->SetBinContent(46,17.38805);
   5->SetBinContent(47,16.22499);
   5->SetBinContent(48,16.39945);
   5->SetBinContent(49,16.05053);
   5->SetBinContent(50,15.00375);
   5->SetBinContent(51,308.1605);
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
   6->SetBinContent(1,231.5449);
   6->SetBinContent(2,707.7963);
   6->SetBinContent(3,1148.088);
   6->SetBinContent(4,1489.27);
   6->SetBinContent(5,1783.09);
   6->SetBinContent(6,2083.045);
   6->SetBinContent(7,2223.358);
   6->SetBinContent(8,2340.87);
   6->SetBinContent(9,2363.67);
   6->SetBinContent(10,2377.702);
   6->SetBinContent(11,2361.917);
   6->SetBinContent(12,2365.424);
   6->SetBinContent(13,2283.868);
   6->SetBinContent(14,2325.084);
   6->SetBinContent(15,2173.372);
   6->SetBinContent(16,2158.463);
   6->SetBinContent(17,2075.153);
   6->SetBinContent(18,1880.446);
   6->SetBinContent(19,1832.207);
   6->SetBinContent(20,1783.968);
   6->SetBinContent(21,1596.273);
   6->SetBinContent(22,1534.878);
   6->SetBinContent(23,1404.194);
   6->SetBinContent(24,1271.756);
   6->SetBinContent(25,1217.377);
   6->SetBinContent(26,1143.703);
   6->SetBinContent(27,1098.095);
   6->SetBinContent(28,1053.364);
   6->SetBinContent(29,939.3442);
   6->SetBinContent(30,943.7296);
   6->SetBinContent(31,840.2347);
   6->SetBinContent(32,777.0853);
   6->SetBinContent(33,734.9857);
   6->SetBinContent(34,673.5904);
   6->SetBinContent(35,620.9659);
   6->SetBinContent(36,613.0722);
   6->SetBinContent(37,540.275);
   6->SetBinContent(38,549.0457);
   6->SetBinContent(39,476.2485);
   6->SetBinContent(40,443.7967);
   6->SetBinContent(41,362.2287);
   6->SetBinContent(42,363.9828);
   6->SetBinContent(43,328.0228);
   6->SetBinContent(44,323.6374);
   6->SetBinContent(45,301.7105);
   6->SetBinContent(46,283.2919);
   6->SetBinContent(47,279.7836);
   6->SetBinContent(48,253.4714);
   6->SetBinContent(49,228.9137);
   6->SetBinContent(50,210.4955);
   6->SetBinContent(51,3727.333);
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
   7->SetBinContent(1,18.09306);
   7->SetBinContent(2,48.20211);
   7->SetBinContent(3,75.27264);
   7->SetBinContent(4,112.1493);
   7->SetBinContent(5,139.773);
   7->SetBinContent(6,159.6626);
   7->SetBinContent(7,188.9446);
   7->SetBinContent(8,200.8231);
   7->SetBinContent(9,221.4034);
   7->SetBinContent(10,240.8787);
   7->SetBinContent(11,240.6024);
   7->SetBinContent(12,256.3484);
   7->SetBinContent(13,259.9396);
   7->SetBinContent(14,251.9285);
   7->SetBinContent(15,264.6357);
   7->SetBinContent(16,252.2047);
   7->SetBinContent(17,265.6026);
   7->SetBinContent(18,250.1329);
   7->SetBinContent(19,247.5086);
   7->SetBinContent(20,243.6411);
   7->SetBinContent(21,234.1107);
   7->SetBinContent(22,232.0388);
   7->SetBinContent(23,225.2708);
   7->SetBinContent(24,232.3151);
   7->SetBinContent(25,225.1327);
   7->SetBinContent(26,213.5304);
   7->SetBinContent(27,206.6243);
   7->SetBinContent(28,204.4143);
   7->SetBinContent(29,187.5634);
   7->SetBinContent(30,193.2264);
   7->SetBinContent(31,185.4915);
   7->SetBinContent(32,179.9666);
   7->SetBinContent(33,172.508);
   7->SetBinContent(34,168.6406);
   7->SetBinContent(35,159.2482);
   7->SetBinContent(36,160.4913);
   7->SetBinContent(37,153.8615);
   7->SetBinContent(38,154.5521);
   7->SetBinContent(39,152.4802);
   7->SetBinContent(40,143.226);
   7->SetBinContent(41,133.2812);
   7->SetBinContent(42,129.69);
   7->SetBinContent(43,125.5465);
   7->SetBinContent(44,127.8944);
   7->SetBinContent(45,122.7842);
   7->SetBinContent(46,121.5411);
   7->SetBinContent(47,111.735);
   7->SetBinContent(48,111.735);
   7->SetBinContent(49,118.6407);
   7->SetBinContent(50,100.962);
   7->SetBinContent(51,3917.522);
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
   8->SetBinContent(1,0.92388);
   8->SetBinContent(2,13.8582);
   8->SetBinContent(3,10.16268);
   8->SetBinContent(4,19.40148);
   8->SetBinContent(5,14.78208);
   8->SetBinContent(6,24.02087);
   8->SetBinContent(7,30.48803);
   8->SetBinContent(8,29.56415);
   8->SetBinContent(9,29.56415);
   8->SetBinContent(10,28.64027);
   8->SetBinContent(11,29.56415);
   8->SetBinContent(12,26.79251);
   8->SetBinContent(13,24.94475);
   8->SetBinContent(14,17.55372);
   8->SetBinContent(15,24.02087);
   8->SetBinContent(16,28.64027);
   8->SetBinContent(17,20.32536);
   8->SetBinContent(18,26.79251);
   8->SetBinContent(19,21.24924);
   8->SetBinContent(20,26.79251);
   8->SetBinContent(21,23.09699);
   8->SetBinContent(22,22.17311);
   8->SetBinContent(23,20.32536);
   8->SetBinContent(24,15.70596);
   8->SetBinContent(25,36.9552);
   8->SetBinContent(26,15.70596);
   8->SetBinContent(27,21.24924);
   8->SetBinContent(28,16.62984);
   8->SetBinContent(29,29.56415);
   8->SetBinContent(30,18.4776);
   8->SetBinContent(31,24.02087);
   8->SetBinContent(32,19.40148);
   8->SetBinContent(33,25.86863);
   8->SetBinContent(34,21.24924);
   8->SetBinContent(35,23.09699);
   8->SetBinContent(36,22.17311);
   8->SetBinContent(37,21.24924);
   8->SetBinContent(38,23.09699);
   8->SetBinContent(39,19.40148);
   8->SetBinContent(40,25.86863);
   8->SetBinContent(41,24.94475);
   8->SetBinContent(42,18.4776);
   8->SetBinContent(43,18.4776);
   8->SetBinContent(44,22.17311);
   8->SetBinContent(45,25.86863);
   8->SetBinContent(46,19.40148);
   8->SetBinContent(47,22.17311);
   8->SetBinContent(48,16.62984);
   8->SetBinContent(49,20.32536);
   8->SetBinContent(50,20.32536);
   8->SetBinContent(51,958.0698);
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
   9->SetBinContent(1,17.14299);
   9->SetBinContent(2,47.91245);
   9->SetBinContent(3,73.8468);
   9->SetBinContent(4,87.4734);
   9->SetBinContent(5,105.4957);
   9->SetBinContent(6,138.9026);
   9->SetBinContent(7,144.1773);
   9->SetBinContent(8,156.485);
   9->SetBinContent(9,172.7487);
   9->SetBinContent(10,168.7927);
   9->SetBinContent(11,198.2432);
   9->SetBinContent(12,185.496);
   9->SetBinContent(13,198.2432);
   9->SetBinContent(14,181.5399);
   9->SetBinContent(15,176.7048);
   9->SetBinContent(16,179.7817);
   9->SetBinContent(17,187.6938);
   9->SetBinContent(18,191.6498);
   9->SetBinContent(19,188.1333);
   9->SetBinContent(20,184.1773);
   9->SetBinContent(21,182.8586);
   9->SetBinContent(22,172.3092);
   9->SetBinContent(23,166.5949);
   9->SetBinContent(24,164.3971);
   9->SetBinContent(25,161.3202);
   9->SetBinContent(26,161.7597);
   9->SetBinContent(27,169.2323);
   9->SetBinContent(28,149.0125);
   9->SetBinContent(29,160.8806);
   9->SetBinContent(30,160.4411);
   9->SetBinContent(31,158.6828);
   9->SetBinContent(32,146.3751);
   9->SetBinContent(33,154.7268);
   9->SetBinContent(34,153.4081);
   9->SetBinContent(35,160.0015);
   9->SetBinContent(36,155.1663);
   9->SetBinContent(37,142.8587);
   9->SetBinContent(38,135.8257);
   9->SetBinContent(39,118.2431);
   9->SetBinContent(40,141.9795);
   9->SetBinContent(41,128.3532);
   9->SetBinContent(42,127.0345);
   9->SetBinContent(43,128.3532);
   9->SetBinContent(44,123.0784);
   9->SetBinContent(45,123.9575);
   9->SetBinContent(46,116.9244);
   9->SetBinContent(47,106.8144);
   9->SetBinContent(48,119.5618);
   9->SetBinContent(49,119.5618);
   9->SetBinContent(50,106.3748);
   9->SetBinContent(51,8165.601);
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
   10->SetBinContent(1,369.4565);
   10->SetBinContent(2,1115.351);
   10->SetBinContent(3,1771.576);
   10->SetBinContent(4,2395.338);
   10->SetBinContent(5,2918.149);
   10->SetBinContent(6,3385.039);
   10->SetBinContent(7,3769.502);
   10->SetBinContent(8,3970.18);
   10->SetBinContent(9,4146.35);
   10->SetBinContent(10,4301.461);
   10->SetBinContent(11,4354.426);
   10->SetBinContent(12,4381.199);
   10->SetBinContent(13,4300.588);
   10->SetBinContent(14,4210.955);
   10->SetBinContent(15,4039.791);
   10->SetBinContent(16,3852.511);
   10->SetBinContent(17,3874.064);
   10->SetBinContent(18,3754.939);
   10->SetBinContent(19,3595.911);
   10->SetBinContent(20,3468.922);
   10->SetBinContent(21,3303.195);
   10->SetBinContent(22,3229.797);
   10->SetBinContent(23,3069.022);
   10->SetBinContent(24,2889.897);
   10->SetBinContent(25,2849.121);
   10->SetBinContent(26,2716.889);
   10->SetBinContent(27,2585.24);
   10->SetBinContent(28,2523.784);
   10->SetBinContent(29,2415.144);
   10->SetBinContent(30,2292.232);
   10->SetBinContent(31,2241.262);
   10->SetBinContent(32,2229.029);
   10->SetBinContent(33,2051.36);
   10->SetBinContent(34,1998.954);
   10->SetBinContent(35,1876.968);
   10->SetBinContent(36,1844.651);
   10->SetBinContent(37,1736.348);
   10->SetBinContent(38,1685.981);
   10->SetBinContent(39,1600.096);
   10->SetBinContent(40,1577.096);
   10->SetBinContent(41,1459.767);
   10->SetBinContent(42,1398.919);
   10->SetBinContent(43,1405.324);
   10->SetBinContent(44,1349.135);
   10->SetBinContent(45,1246.946);
   10->SetBinContent(46,1221.325);
   10->SetBinContent(47,1145.63);
   10->SetBinContent(48,1128.744);
   10->SetBinContent(49,1075.465);
   10->SetBinContent(50,993.3646);
   10->SetBinContent(51,24629.19);
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
   11->SetBinContent(1,91.5625);
   11->SetBinContent(2,396.7708);
   11->SetBinContent(3,579.8958);
   11->SetBinContent(4,946.1456);
   11->SetBinContent(5,915.6248);
   11->SetBinContent(6,793.5415);
   11->SetBinContent(7,1037.708);
   11->SetBinContent(8,1159.792);
   11->SetBinContent(9,1098.75);
   11->SetBinContent(10,1159.792);
   11->SetBinContent(11,1190.312);
   11->SetBinContent(12,1281.875);
   11->SetBinContent(13,1098.75);
   11->SetBinContent(14,1281.875);
   11->SetBinContent(15,1068.229);
   11->SetBinContent(16,885.1039);
   11->SetBinContent(17,671.4583);
   11->SetBinContent(18,610.4166);
   11->SetBinContent(19,671.4583);
   11->SetBinContent(20,701.9791);
   11->SetBinContent(21,610.4166);
   11->SetBinContent(22,274.6875);
   11->SetBinContent(23,640.9374);
   11->SetBinContent(24,518.8542);
   11->SetBinContent(25,488.3334);
   11->SetBinContent(26,396.7708);
   11->SetBinContent(27,396.7708);
   11->SetBinContent(28,549.375);
   11->SetBinContent(29,518.8542);
   11->SetBinContent(30,457.8125);
   11->SetBinContent(31,366.25);
   11->SetBinContent(32,335.7292);
   11->SetBinContent(33,366.25);
   11->SetBinContent(34,366.25);
   11->SetBinContent(35,366.25);
   11->SetBinContent(36,518.8542);
   11->SetBinContent(37,488.3334);
   11->SetBinContent(38,427.2917);
   11->SetBinContent(39,213.6458);
   11->SetBinContent(40,305.2083);
   11->SetBinContent(41,335.7292);
   11->SetBinContent(42,305.2083);
   11->SetBinContent(43,305.2083);
   11->SetBinContent(44,305.2083);
   11->SetBinContent(45,152.6042);
   11->SetBinContent(46,183.125);
   11->SetBinContent(47,213.6458);
   11->SetBinContent(48,30.52083);
   11->SetBinContent(49,244.1666);
   11->SetBinContent(50,213.6458);
   11->SetBinContent(51,3601.455);
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
   12->SetBinContent(1,120.9968);
   12->SetBinContent(2,310.0084);
   12->SetBinContent(3,423.8433);
   12->SetBinContent(4,469.6636);
   12->SetBinContent(5,499.7332);
   12->SetBinContent(6,549.8491);
   12->SetBinContent(7,500.4491);
   12->SetBinContent(8,465.3679);
   12->SetBinContent(9,442.4578);
   12->SetBinContent(10,389.478);
   12->SetBinContent(11,354.3969);
   12->SetBinContent(12,342.9418);
   12->SetBinContent(13,293.5417);
   12->SetBinContent(14,263.4722);
   12->SetBinContent(15,244.8574);
   12->SetBinContent(16,246.2893);
   12->SetBinContent(17,213.3553);
   12->SetBinContent(18,213.3553);
   12->SetBinContent(19,192.5925);
   12->SetBinContent(20,183.2851);
   12->SetBinContent(21,144.6234);
   12->SetBinContent(22,165.3861);
   12->SetBinContent(23,153.9308);
   12->SetBinContent(24,161.8063);
   12->SetBinContent(25,160.3744);
   12->SetBinContent(26,160.3744);
   12->SetBinContent(27,143.9074);
   12->SetBinContent(28,157.5106);
   12->SetBinContent(29,138.8957);
   12->SetBinContent(30,141.0436);
   12->SetBinContent(31,120.9968);
   12->SetBinContent(32,123.8606);
   12->SetBinContent(33,145.3393);
   12->SetBinContent(34,115.9851);
   12->SetBinContent(35,108.8255);
   12->SetBinContent(36,119.5648);
   12->SetBinContent(37,134.5999);
   12->SetBinContent(38,128.8723);
   12->SetBinContent(39,107.3936);
   12->SetBinContent(40,108.8255);
   12->SetBinContent(41,108.1095);
   12->SetBinContent(42,129.5882);
   12->SetBinContent(43,108.1095);
   12->SetBinContent(44,128.1563);
   12->SetBinContent(45,112.4053);
   12->SetBinContent(46,123.8606);
   12->SetBinContent(47,108.1095);
   12->SetBinContent(48,100.9499);
   12->SetBinContent(49,100.234);
   12->SetBinContent(50,80.90313);
   12->SetBinContent(51,5018.237);
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
   13->SetBinContent(1,2236.473);
   13->SetBinContent(2,5201.105);
   13->SetBinContent(3,8633.842);
   13->SetBinContent(4,10714.27);
   13->SetBinContent(5,11286.39);
   13->SetBinContent(6,14355.02);
   13->SetBinContent(7,14719.1);
   13->SetBinContent(8,15811.32);
   13->SetBinContent(9,16331.43);
   13->SetBinContent(10,15811.32);
   13->SetBinContent(11,14927.14);
   13->SetBinContent(12,14094.97);
   13->SetBinContent(13,14094.97);
   13->SetBinContent(14,14146.98);
   13->SetBinContent(15,12326.6);
   13->SetBinContent(16,10402.21);
   13->SetBinContent(17,10090.14);
   13->SetBinContent(18,9778.078);
   13->SetBinContent(19,8529.82);
   13->SetBinContent(20,8997.917);
   13->SetBinContent(21,7957.7);
   13->SetBinContent(22,6605.408);
   13->SetBinContent(23,6241.33);
   13->SetBinContent(24,7489.599);
   13->SetBinContent(25,4733.004);
   13->SetBinContent(26,5097.083);
   13->SetBinContent(27,6293.341);
   13->SetBinContent(28,5461.161);
   13->SetBinContent(29,4576.97);
   13->SetBinContent(30,5357.139);
   13->SetBinContent(31,3952.836);
   13->SetBinContent(32,4889.038);
   13->SetBinContent(33,4368.925);
   13->SetBinContent(34,3744.792);
   13->SetBinContent(35,3744.792);
   13->SetBinContent(36,3588.759);
   13->SetBinContent(37,3848.814);
   13->SetBinContent(38,2704.572);
   13->SetBinContent(39,3432.726);
   13->SetBinContent(40,2756.583);
   13->SetBinContent(41,3276.693);
   13->SetBinContent(42,2236.473);
   13->SetBinContent(43,1872.396);
   13->SetBinContent(44,2496.528);
   13->SetBinContent(45,2080.44);
   13->SetBinContent(46,1560.331);
   13->SetBinContent(47,1976.418);
   13->SetBinContent(48,1976.418);
   13->SetBinContent(49,1404.298);
   13->SetBinContent(50,1716.364);
   13->SetBinContent(51,27669.98);
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
   14->SetBinContent(1,1184.585);
   14->SetBinContent(2,3609.289);
   14->SetBinContent(3,4016.493);
   14->SetBinContent(4,4664.303);
   14->SetBinContent(5,4201.583);
   14->SetBinContent(6,4053.511);
   14->SetBinContent(7,4062.766);
   14->SetBinContent(8,3729.599);
   14->SetBinContent(9,3738.854);
   14->SetBinContent(10,3433.451);
   14->SetBinContent(11,2646.806);
   14->SetBinContent(12,2896.682);
   14->SetBinContent(13,2637.552);
   14->SetBinContent(14,2387.677);
   14->SetBinContent(15,2202.584);
   14->SetBinContent(16,2137.801);
   14->SetBinContent(17,1915.692);
   14->SetBinContent(18,1915.692);
   14->SetBinContent(19,1749.11);
   14->SetBinContent(20,1628.802);
   14->SetBinContent(21,1351.166);
   14->SetBinContent(22,1258.621);
   14->SetBinContent(23,1240.112);
   14->SetBinContent(24,1101.294);
   14->SetBinContent(25,1018.003);
   14->SetBinContent(26,1166.076);
   14->SetBinContent(27,1138.312);
   14->SetBinContent(28,860.6757);
   14->SetBinContent(29,795.8936);
   14->SetBinContent(30,740.3661);
   14->SetBinContent(31,573.7838);
   14->SetBinContent(32,629.3112);
   14->SetBinContent(33,657.075);
   14->SetBinContent(34,712.6024);
   14->SetBinContent(35,499.7472);
   14->SetBinContent(36,407.2014);
   14->SetBinContent(37,527.5109);
   14->SetBinContent(38,499.7472);
   14->SetBinContent(39,509.0017);
   14->SetBinContent(40,360.9285);
   14->SetBinContent(41,388.6922);
   14->SetBinContent(42,416.456);
   14->SetBinContent(43,333.1648);
   14->SetBinContent(44,333.1648);
   14->SetBinContent(45,296.1465);
   14->SetBinContent(46,360.9285);
   14->SetBinContent(47,388.6922);
   14->SetBinContent(48,305.401);
   14->SetBinContent(49,342.4193);
   14->SetBinContent(50,222.1098);
   14->SetBinContent(51,4747.592);
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
   15->SetBinContent(1,729.2156);
   15->SetBinContent(2,1206.01);
   15->SetBinContent(3,1626.712);
   15->SetBinContent(4,1458.431);
   15->SetBinContent(5,1430.385);
   15->SetBinContent(6,1121.87);
   15->SetBinContent(7,869.4494);
   15->SetBinContent(8,1177.964);
   15->SetBinContent(9,953.5897);
   15->SetBinContent(10,981.6364);
   15->SetBinContent(11,645.0754);
   15->SetBinContent(12,560.9351);
   15->SetBinContent(13,701.1689);
   15->SetBinContent(14,785.3091);
   15->SetBinContent(15,588.9819);
   15->SetBinContent(16,757.2624);
   15->SetBinContent(17,532.8884);
   15->SetBinContent(18,701.1689);
   15->SetBinContent(19,560.9351);
   15->SetBinContent(20,588.9819);
   15->SetBinContent(21,364.6078);
   15->SetBinContent(22,364.6078);
   15->SetBinContent(23,560.9351);
   15->SetBinContent(24,364.6078);
   15->SetBinContent(25,476.7948);
   15->SetBinContent(26,392.6546);
   15->SetBinContent(27,196.3273);
   15->SetBinContent(28,308.5143);
   15->SetBinContent(29,196.3273);
   15->SetBinContent(30,252.4208);
   15->SetBinContent(31,308.5143);
   15->SetBinContent(32,364.6078);
   15->SetBinContent(33,224.374);
   15->SetBinContent(34,308.5143);
   15->SetBinContent(35,308.5143);
   15->SetBinContent(36,56.09351);
   15->SetBinContent(37,224.374);
   15->SetBinContent(38,224.374);
   15->SetBinContent(39,112.187);
   15->SetBinContent(40,140.2338);
   15->SetBinContent(41,56.09351);
   15->SetBinContent(42,196.3273);
   15->SetBinContent(43,84.14027);
   15->SetBinContent(44,140.2338);
   15->SetBinContent(45,112.187);
   15->SetBinContent(46,112.187);
   15->SetBinContent(47,224.374);
   15->SetBinContent(48,56.09351);
   15->SetBinContent(49,84.14027);
   15->SetBinContent(50,84.14027);
   15->SetBinContent(51,2636.397);
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
   16->SetBinContent(1,127.4375);
   16->SetBinContent(2,446.0309);
   16->SetBinContent(3,520.3694);
   16->SetBinContent(4,562.8486);
   16->SetBinContent(5,615.9477);
   16->SetBinContent(6,456.6507);
   16->SetBinContent(7,584.0883);
   16->SetBinContent(8,499.1298);
   16->SetBinContent(9,594.7081);
   16->SetBinContent(10,403.5518);
   16->SetBinContent(11,371.6924);
   16->SetBinContent(12,361.0727);
   16->SetBinContent(13,424.7914);
   16->SetBinContent(14,403.5518);
   16->SetBinContent(15,318.5935);
   16->SetBinContent(16,361.0727);
   16->SetBinContent(17,339.8331);
   16->SetBinContent(18,276.1144);
   16->SetBinContent(19,286.7342);
   16->SetBinContent(20,233.6353);
   16->SetBinContent(21,191.1562);
   16->SetBinContent(22,191.1562);
   16->SetBinContent(23,233.6353);
   16->SetBinContent(24,233.6353);
   16->SetBinContent(25,286.7342);
   16->SetBinContent(26,180.5364);
   16->SetBinContent(27,138.0573);
   16->SetBinContent(28,95.57809);
   16->SetBinContent(29,95.57809);
   16->SetBinContent(30,95.57809);
   16->SetBinContent(31,74.33852);
   16->SetBinContent(32,74.33852);
   16->SetBinContent(33,159.2968);
   16->SetBinContent(34,148.677);
   16->SetBinContent(35,95.57809);
   16->SetBinContent(36,74.33852);
   16->SetBinContent(37,74.33852);
   16->SetBinContent(38,63.71873);
   16->SetBinContent(39,53.09894);
   16->SetBinContent(40,74.33852);
   16->SetBinContent(41,10.61979);
   16->SetBinContent(42,63.71873);
   16->SetBinContent(43,31.85936);
   16->SetBinContent(44,21.23957);
   16->SetBinContent(45,116.8177);
   16->SetBinContent(46,53.09894);
   16->SetBinContent(47,10.61979);
   16->SetBinContent(48,95.57809);
   16->SetBinContent(49,84.95831);
   16->SetBinContent(50,74.33852);
   16->SetBinContent(51,1646.066);
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
   17->SetBinContent(1,2007.078);
   17->SetBinContent(2,4074.978);
   17->SetBinContent(3,5899.602);
   17->SetBinContent(4,5169.752);
   17->SetBinContent(5,4500.723);
   17->SetBinContent(6,4500.723);
   17->SetBinContent(7,4379.082);
   17->SetBinContent(8,5048.11);
   17->SetBinContent(9,3892.516);
   17->SetBinContent(10,3649.234);
   17->SetBinContent(11,3041.028);
   17->SetBinContent(12,1763.796);
   17->SetBinContent(13,1459.693);
   17->SetBinContent(14,425.7439);
   17->SetBinContent(15,912.3084);
   17->SetBinContent(16,729.8467);
   17->SetBinContent(17,729.8467);
   17->SetBinContent(18,425.7439);
   17->SetBinContent(19,425.7439);
   17->SetBinContent(20,790.6673);
   17->SetBinContent(21,790.6673);
   17->SetBinContent(22,425.7439);
   17->SetBinContent(23,425.7439);
   17->SetBinContent(24,182.4617);
   17->SetBinContent(25,182.4617);
   17->SetBinContent(26,243.2822);
   17->SetBinContent(27,729.8467);
   17->SetBinContent(28,729.8467);
   17->SetBinContent(29,851.4879);
   17->SetBinContent(30,182.4617);
   17->SetBinContent(31,364.9234);
   17->SetBinContent(32,425.7439);
   17->SetBinContent(33,304.1028);
   17->SetBinContent(34,425.7439);
   17->SetBinContent(35,304.1028);
   17->SetBinContent(36,243.2822);
   17->SetBinContent(37,364.9234);
   17->SetBinContent(38,364.9234);
   17->SetBinContent(39,243.2822);
   17->SetBinContent(40,425.7439);
   17->SetBinContent(41,364.9234);
   17->SetBinContent(42,364.9234);
   17->SetBinContent(43,182.4617);
   17->SetBinContent(44,182.4617);
   17->SetBinContent(45,121.6411);
   17->SetBinContent(46,304.1028);
   17->SetBinContent(47,182.4617);
   17->SetBinContent(48,243.2822);
   17->SetBinContent(49,121.6411);
   17->SetBinContent(50,425.7439);
   17->SetBinContent(51,16178.25);
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
