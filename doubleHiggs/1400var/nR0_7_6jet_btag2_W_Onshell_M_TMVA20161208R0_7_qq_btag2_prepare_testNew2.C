{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 00:56:14 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-53.96825,-3.13863,263.4921,5.544938);
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
   
   TH1F *THStack_stack_3 = new TH1F("THStack_stack_3","",50,0,200);
   THStack_stack_3->SetMinimum(0.02657129);
   THStack_stack_3->SetMaximum(70835.79);
   THStack_stack_3->SetDirectory(0);
   THStack_stack_3->SetStats(0);
   THStack_stack_3->SetLineWidth(2);
   THStack_stack_3->SetMarkerSize(1.2);
   THStack_stack_3->GetXaxis()->SetTitle("M_{W} / GeV");
   THStack_stack_3->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_3->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_3->GetXaxis()->SetLabelColor(ci);
   THStack_stack_3->GetXaxis()->SetLabelFont(42);
   THStack_stack_3->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_3->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_3->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_3->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_3->GetXaxis()->SetTitleColor(ci);
   THStack_stack_3->GetXaxis()->SetTitleFont(42);
   THStack_stack_3->GetYaxis()->SetTitle("Number of events");
   THStack_stack_3->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_3->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_3->GetYaxis()->SetLabelColor(ci);
   THStack_stack_3->GetYaxis()->SetLabelFont(42);
   THStack_stack_3->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_3->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_3->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_3->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_3->GetYaxis()->SetTitleColor(ci);
   THStack_stack_3->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_3->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_3->GetZaxis()->SetLabelColor(ci);
   THStack_stack_3->GetZaxis()->SetLabelFont(42);
   THStack_stack_3->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_3->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_3->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_3->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_3->GetZaxis()->SetTitleColor(ci);
   THStack_stack_3->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_3);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,200);
   0->SetBinContent(5,0.011292);
   0->SetBinContent(6,0.001882);
   0->SetBinContent(7,0.011292);
   0->SetBinContent(8,0.030112);
   0->SetBinContent(9,0.04328601);
   0->SetBinContent(10,0.08469005);
   0->SetBinContent(11,0.1336221);
   0->SetBinContent(12,0.2239582);
   0->SetBinContent(13,0.3801633);
   0->SetBinContent(14,0.6191775);
   0->SetBinContent(15,0.9259462);
   0->SetBinContent(16,1.221416);
   0->SetBinContent(17,1.548876);
   0->SetBinContent(18,2.132292);
   0->SetBinContent(19,2.456009);
   0->SetBinContent(20,2.879476);
   0->SetBinContent(21,2.352494);
   0->SetBinContent(22,1.035102);
   0->SetBinContent(23,0.4366229);
   0->SetBinContent(24,0.1223301);
   0->SetBinContent(25,0.01882);
   0->SetBinContent(26,0.007528);
   0->SetBinContent(31,0.001882);
   0->SetBinContent(33,0.001882);
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
   1->SetBinContent(2,0.000941);
   1->SetBinContent(3,0.003764);
   1->SetBinContent(4,0.007528);
   1->SetBinContent(5,0.012233);
   1->SetBinContent(6,0.014115);
   1->SetBinContent(7,0.03199401);
   1->SetBinContent(8,0.04046302);
   1->SetBinContent(9,0.07433905);
   1->SetBinContent(10,0.1091561);
   1->SetBinContent(11,0.1458549);
   1->SetBinContent(12,0.2267804);
   1->SetBinContent(13,0.3095888);
   1->SetBinContent(14,0.3867514);
   1->SetBinContent(15,0.6116489);
   1->SetBinContent(16,0.7753792);
   1->SetBinContent(17,1.010625);
   1->SetBinContent(18,1.170601);
   1->SetBinContent(19,1.403037);
   1->SetBinContent(20,1.469851);
   1->SetBinContent(21,1.28729);
   1->SetBinContent(22,0.6709306);
   1->SetBinContent(23,0.3933385);
   1->SetBinContent(24,0.1797307);
   1->SetBinContent(25,0.05081403);
   1->SetBinContent(26,0.013174);
   1->SetBinContent(27,0.006587);
   1->SetBinContent(28,0.000941);
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
   2->SetBinContent(3,0.006587);
   2->SetBinContent(4,0.02446601);
   2->SetBinContent(5,0.04046302);
   2->SetBinContent(6,0.06304704);
   2->SetBinContent(7,0.08751307);
   2->SetBinContent(8,0.1750257);
   2->SetBinContent(9,0.2201934);
   2->SetBinContent(10,0.3048837);
   2->SetBinContent(11,0.444153);
   2->SetBinContent(12,0.6116489);
   2->SetBinContent(13,0.8600672);
   2->SetBinContent(14,1.041679);
   2->SetBinContent(15,1.537606);
   2->SetBinContent(16,1.929078);
   2->SetBinContent(17,2.323373);
   2->SetBinContent(18,2.84659);
   2->SetBinContent(19,3.326519);
   2->SetBinContent(20,3.688819);
   2->SetBinContent(21,3.258765);
   2->SetBinContent(22,1.78604);
   2->SetBinContent(23,0.9344046);
   2->SetBinContent(24,0.4215688);
   2->SetBinContent(25,0.1787897);
   2->SetBinContent(26,0.05363704);
   2->SetBinContent(27,0.017879);
   2->SetBinContent(28,0.007528);
   2->SetBinContent(29,0.000941);
   2->SetBinContent(30,0.003764);
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
   3->SetBinContent(2,0.006829);
   3->SetBinContent(3,0.034145);
   3->SetBinContent(4,0.08877701);
   3->SetBinContent(5,0.13658);
   3->SetBinContent(6,0.2868179);
   3->SetBinContent(7,0.4575427);
   3->SetBinContent(8,0.6077811);
   3->SetBinContent(9,0.9833773);
   3->SetBinContent(10,1.31117);
   3->SetBinContent(11,2.212601);
   3->SetBinContent(12,3.032084);
   3->SetBinContent(13,4.561766);
   3->SetBinContent(14,5.961667);
   3->SetBinContent(15,7.709836);
   3->SetBinContent(16,9.342009);
   3->SetBinContent(17,11.54103);
   3->SetBinContent(18,12.7703);
   3->SetBinContent(19,14.2181);
   3->SetBinContent(20,15.47469);
   3->SetBinContent(21,12.47664);
   3->SetBinContent(22,6.432853);
   3->SetBinContent(23,3.100374);
   3->SetBinContent(24,1.167761);
   3->SetBinContent(25,0.4780297);
   3->SetBinContent(26,0.102435);
   3->SetBinContent(27,0.027316);
   3->SetBinContent(28,0.006829);
   3->SetBinContent(29,0.006829);
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
   4->SetBinContent(1,0.005261);
   4->SetBinContent(2,0.042088);
   4->SetBinContent(3,0.3367041);
   4->SetBinContent(4,0.8943705);
   4->SetBinContent(5,1.304725);
   4->SetBinContent(6,1.541468);
   4->SetBinContent(7,1.746645);
   4->SetBinContent(8,2.504221);
   4->SetBinContent(9,2.993489);
   4->SetBinContent(10,3.640585);
   4->SetBinContent(11,4.192984);
   4->SetBinContent(12,5.634483);
   4->SetBinContent(13,7.044416);
   4->SetBinContent(14,9.069977);
   4->SetBinContent(15,10.61683);
   4->SetBinContent(16,13.03183);
   4->SetBinContent(17,15.70463);
   4->SetBinContent(18,17.6984);
   4->SetBinContent(19,19.34493);
   4->SetBinContent(20,20.14978);
   4->SetBinContent(21,16.99876);
   4->SetBinContent(22,10.13805);
   4->SetBinContent(23,4.887429);
   4->SetBinContent(24,2.093867);
   4->SetBinContent(25,0.8470215);
   4->SetBinContent(26,0.189396);
   4->SetBinContent(27,0.042088);
   4->SetBinContent(28,0.026305);
   4->SetBinContent(29,0.021044);
   4->SetBinContent(32,0.005261);
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
   5->SetBinContent(1,0.012401);
   5->SetBinContent(2,0.024802);
   5->SetBinContent(3,0.074406);
   5->SetBinContent(4,0.260421);
   5->SetBinContent(5,0.5580446);
   5->SetBinContent(6,0.5084407);
   5->SetBinContent(7,1.054084);
   5->SetBinContent(8,1.76094);
   5->SetBinContent(9,2.691021);
   5->SetBinContent(10,4.427175);
   5->SetBinContent(11,6.026917);
   5->SetBinContent(12,9.635576);
   5->SetBinContent(13,16.09631);
   5->SetBinContent(14,22.84277);
   5->SetBinContent(15,30.44494);
   5->SetBinContent(16,42.22644);
   5->SetBinContent(17,50.72152);
   5->SetBinContent(18,59.22901);
   5->SetBinContent(19,66.52036);
   5->SetBinContent(20,70.80999);
   5->SetBinContent(21,61.4861);
   5->SetBinContent(22,36.10006);
   5->SetBinContent(23,19.39513);
   5->SetBinContent(24,8.742731);
   5->SetBinContent(25,2.728224);
   5->SetBinContent(26,0.7192574);
   5->SetBinContent(27,0.24802);
   5->SetBinContent(28,0.074406);
   5->SetBinContent(29,0.037203);
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
   6->SetBinContent(2,0.683154);
   6->SetBinContent(3,3.339865);
   6->SetBinContent(4,10.2473);
   6->SetBinContent(5,21.70914);
   6->SetBinContent(6,32.03246);
   6->SetBinContent(7,48.80743);
   6->SetBinContent(8,73.93194);
   6->SetBinContent(9,120.158);
   6->SetBinContent(10,177.7748);
   6->SetBinContent(11,264.9205);
   6->SetBinContent(12,401.9909);
   6->SetBinContent(13,562.8375);
   6->SetBinContent(14,733.1434);
   6->SetBinContent(15,933.8964);
   6->SetBinContent(16,1102.532);
   6->SetBinContent(17,1226.294);
   6->SetBinContent(18,1377.238);
   6->SetBinContent(19,1481.411);
   6->SetBinContent(20,1527.803);
   6->SetBinContent(21,1251.578);
   6->SetBinContent(22,633.0707);
   6->SetBinContent(23,309.3204);
   6->SetBinContent(24,134.8842);
   6->SetBinContent(25,50.62915);
   6->SetBinContent(26,17.76199);
   6->SetBinContent(27,4.55436);
   6->SetBinContent(28,2.125368);
   6->SetBinContent(29,0.531342);
   6->SetBinContent(30,0.227718);
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
   7->SetBinContent(2,0.195288);
   7->SetBinContent(3,0.341754);
   7->SetBinContent(4,2.050525);
   7->SetBinContent(5,4.589265);
   7->SetBinContent(6,8.934425);
   7->SetBinContent(7,16.69719);
   7->SetBinContent(8,26.90107);
   7->SetBinContent(9,46.0389);
   7->SetBinContent(10,76.45407);
   7->SetBinContent(11,121.1736);
   7->SetBinContent(12,188.5554);
   7->SetBinContent(13,274.0534);
   7->SetBinContent(14,351.2019);
   7->SetBinContent(15,441.3386);
   7->SetBinContent(16,522.6862);
   7->SetBinContent(17,581.7194);
   7->SetBinContent(18,616.6804);
   7->SetBinContent(19,652.9108);
   7->SetBinContent(20,680.7917);
   7->SetBinContent(21,559.5026);
   7->SetBinContent(22,313.7995);
   7->SetBinContent(23,155.4987);
   7->SetBinContent(24,62.78433);
   7->SetBinContent(25,27.29165);
   7->SetBinContent(26,7.420937);
   7->SetBinContent(27,3.368717);
   7->SetBinContent(28,0.7811519);
   7->SetBinContent(29,0.439398);
   7->SetBinContent(33,0.048822);
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
   8->SetBinContent(4,0.440259);
   8->SetBinContent(5,0.880518);
   8->SetBinContent(6,1.174024);
   8->SetBinContent(7,1.027271);
   8->SetBinContent(8,1.614283);
   8->SetBinContent(9,3.375319);
   8->SetBinContent(10,5.283107);
   8->SetBinContent(11,6.603883);
   8->SetBinContent(12,7.4844);
   8->SetBinContent(13,11.44674);
   8->SetBinContent(14,13.94154);
   8->SetBinContent(15,16.87661);
   8->SetBinContent(16,21.86622);
   8->SetBinContent(17,24.94804);
   8->SetBinContent(18,32.13895);
   8->SetBinContent(19,34.19347);
   8->SetBinContent(20,38.44926);
   8->SetBinContent(21,36.24799);
   8->SetBinContent(22,17.46362);
   8->SetBinContent(23,7.924658);
   8->SetBinContent(24,3.375319);
   8->SetBinContent(25,1.614283);
   8->SetBinContent(26,1.027271);
   8->SetBinContent(27,0.293506);
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
   9->SetBinContent(2,0.171439);
   9->SetBinContent(3,1.028634);
   9->SetBinContent(4,3.257341);
   9->SetBinContent(5,6.857563);
   9->SetBinContent(6,10.9721);
   9->SetBinContent(7,19.71548);
   9->SetBinContent(8,34.45919);
   9->SetBinContent(9,60.00377);
   9->SetBinContent(10,85.20547);
   9->SetBinContent(11,138.6943);
   9->SetBinContent(12,199.7243);
   9->SetBinContent(13,314.4178);
   9->SetBinContent(14,438.546);
   9->SetBinContent(15,638.2826);
   9->SetBinContent(16,893.054);
   9->SetBinContent(17,1240.159);
   9->SetBinContent(18,1600.414);
   9->SetBinContent(19,2188.099);
   9->SetBinContent(20,2999.958);
   9->SetBinContent(21,2809.89);
   9->SetBinContent(22,1395.606);
   9->SetBinContent(23,620.452);
   9->SetBinContent(24,254.4112);
   9->SetBinContent(25,115.3789);
   9->SetBinContent(26,53.14617);
   9->SetBinContent(27,26.40157);
   9->SetBinContent(28,17.14391);
   9->SetBinContent(29,8.571954);
   9->SetBinContent(30,7.200441);
   9->SetBinContent(31,5.486049);
   9->SetBinContent(32,3.943097);
   9->SetBinContent(33,2.571585);
   9->SetBinContent(34,1.542951);
   9->SetBinContent(35,1.028634);
   9->SetBinContent(36,1.200073);
   9->SetBinContent(37,1.371512);
   9->SetBinContent(38,0.342878);
   9->SetBinContent(39,0.514317);
   9->SetBinContent(40,0.342878);
   9->SetBinContent(41,0.685756);
   9->SetBinContent(42,0.171439);
   9->SetBinContent(48,0.171439);
   9->SetBinContent(50,0.171439);
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
   10->SetBinContent(2,1.640287);
   10->SetBinContent(3,12.30218);
   10->SetBinContent(4,43.46745);
   10->SetBinContent(5,103.6529);
   10->SetBinContent(6,192.0462);
   10->SetBinContent(7,323.9616);
   10->SetBinContent(8,499.0081);
   10->SetBinContent(9,727.3982);
   10->SetBinContent(10,1083.719);
   10->SetBinContent(11,1559.066);
   10->SetBinContent(12,2136.985);
   10->SetBinContent(13,2812.534);
   10->SetBinContent(14,3454.007);
   10->SetBinContent(15,4103.29);
   10->SetBinContent(16,4547.798);
   10->SetBinContent(17,4871.369);
   10->SetBinContent(18,5145.242);
   10->SetBinContent(19,5378.488);
   10->SetBinContent(20,5553.595);
   10->SetBinContent(21,4485.629);
   10->SetBinContent(22,2463.579);
   10->SetBinContent(23,1211.013);
   10->SetBinContent(24,518.8185);
   10->SetBinContent(25,192.2355);
   10->SetBinContent(26,62.07825);
   10->SetBinContent(27,17.5385);
   10->SetBinContent(28,6.245707);
   10->SetBinContent(29,1.577199);
   10->SetBinContent(30,0.31544);
   10->SetBinContent(36,0.063088);
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
   11->SetBinContent(4,29.26772);
   11->SetBinContent(5,73.1693);
   11->SetBinContent(6,117.0709);
   11->SetBinContent(7,175.6063);
   11->SetBinContent(8,234.1418);
   11->SetBinContent(9,234.1418);
   11->SetBinContent(10,453.6496);
   11->SetBinContent(11,307.3111);
   11->SetBinContent(12,497.5511);
   11->SetBinContent(13,673.1573);
   11->SetBinContent(14,687.7912);
   11->SetBinContent(15,687.7912);
   11->SetBinContent(16,717.0589);
   11->SetBinContent(17,1082.905);
   11->SetBinContent(18,1024.37);
   11->SetBinContent(19,1229.245);
   11->SetBinContent(20,1156.075);
   11->SetBinContent(21,995.1021);
   11->SetBinContent(22,468.2834);
   11->SetBinContent(23,234.1418);
   11->SetBinContent(24,87.80315);
   11->SetBinContent(25,14.63386);
   11->SetBinContent(26,14.63386);
   11->SetBinContent(27,14.63386);
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
   12->SetBinContent(2,31.71739);
   12->SetBinContent(3,158.5869);
   12->SetBinContent(4,494.7911);
   12->SetBinContent(5,691.4398);
   12->SetBinContent(6,1116.455);
   12->SetBinContent(7,1750.805);
   12->SetBinContent(8,1877.675);
   12->SetBinContent(9,2251.942);
   12->SetBinContent(10,2575.461);
   12->SetBinContent(11,2873.606);
   12->SetBinContent(12,2829.201);
   12->SetBinContent(13,3615.796);
   12->SetBinContent(14,3875.88);
   12->SetBinContent(15,4148.648);
   12->SetBinContent(16,4205.738);
   12->SetBinContent(17,4472.155);
   12->SetBinContent(18,4649.766);
   12->SetBinContent(19,4579.99);
   12->SetBinContent(20,4973.272);
   12->SetBinContent(21,4484.841);
   12->SetBinContent(22,2873.606);
   12->SetBinContent(23,1681.027);
   12->SetBinContent(24,1059.363);
   12->SetBinContent(25,551.8826);
   12->SetBinContent(26,355.2347);
   12->SetBinContent(27,95.15217);
   12->SetBinContent(28,38.06087);
   12->SetBinContent(29,31.71739);
   12->SetBinContent(30,25.37391);
   12->SetBinContent(31,12.68696);
   12->SetBinContent(40,6.343478);
   12->SetBinContent(43,6.343478);
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
   13->SetBinContent(3,244.7235);
   13->SetBinContent(4,244.7235);
   13->SetBinContent(5,571.0215);
   13->SetBinContent(6,1386.766);
   13->SetBinContent(7,2202.511);
   13->SetBinContent(8,2528.809);
   13->SetBinContent(9,3099.83);
   13->SetBinContent(10,3018.255);
   13->SetBinContent(11,3834);
   13->SetBinContent(12,3670.851);
   13->SetBinContent(13,4568.171);
   13->SetBinContent(14,5628.643);
   13->SetBinContent(15,7178.562);
   13->SetBinContent(16,5628.643);
   13->SetBinContent(17,7668.01);
   13->SetBinContent(18,5954.941);
   13->SetBinContent(19,6525.964);
   13->SetBinContent(20,7912.734);
   13->SetBinContent(21,7668.01);
   13->SetBinContent(22,3507.702);
   13->SetBinContent(23,1876.213);
   13->SetBinContent(24,978.8938);
   13->SetBinContent(25,244.7235);
   13->SetBinContent(26,244.7235);
   13->SetBinContent(27,81.57449);
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
   14->SetBinContent(1,4.029479);
   14->SetBinContent(2,36.26532);
   14->SetBinContent(3,221.6214);
   14->SetBinContent(4,652.7757);
   14->SetBinContent(5,1051.694);
   14->SetBinContent(6,1627.901);
   14->SetBinContent(7,2087.256);
   14->SetBinContent(8,2554.682);
   14->SetBinContent(9,2953.607);
   14->SetBinContent(10,3554.009);
   14->SetBinContent(11,3731.308);
   14->SetBinContent(12,4150.377);
   14->SetBinContent(13,4190.67);
   14->SetBinContent(14,3836.076);
   14->SetBinContent(15,3598.333);
   14->SetBinContent(16,2989.873);
   14->SetBinContent(17,2409.619);
   14->SetBinContent(18,1861.607);
   14->SetBinContent(19,1619.842);
   14->SetBinContent(20,1333.753);
   14->SetBinContent(21,1132.282);
   14->SetBinContent(22,753.5127);
   14->SetBinContent(23,394.889);
   14->SetBinContent(24,205.5035);
   14->SetBinContent(25,68.50115);
   14->SetBinContent(26,40.2948);
   14->SetBinContent(27,12.08844);
   14->SetBinContent(28,4.029479);
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
   15->SetBinContent(2,7.725694);
   15->SetBinContent(3,23.17708);
   15->SetBinContent(4,54.07985);
   15->SetBinContent(5,77.25694);
   15->SetBinContent(6,115.8854);
   15->SetBinContent(7,112.0226);
   15->SetBinContent(8,100.434);
   15->SetBinContent(9,131.3368);
   15->SetBinContent(10,177.691);
   15->SetBinContent(11,208.5939);
   15->SetBinContent(12,239.4967);
   15->SetBinContent(13,227.9081);
   15->SetBinContent(14,216.3196);
   15->SetBinContent(15,251.0853);
   15->SetBinContent(16,239.4967);
   15->SetBinContent(17,189.2796);
   15->SetBinContent(18,200.8682);
   15->SetBinContent(19,189.2796);
   15->SetBinContent(20,204.731);
   15->SetBinContent(21,224.0453);
   15->SetBinContent(22,88.84547);
   15->SetBinContent(23,34.76562);
   15->SetBinContent(24,46.35416);
   15->SetBinContent(25,7.725694);
   15->SetBinContent(26,7.725694);
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
   16->SetBinContent(2,30.82085);
   16->SetBinContent(3,154.1042);
   16->SetBinContent(4,443.8207);
   16->SetBinContent(5,764.3583);
   16->SetBinContent(6,1325.299);
   16->SetBinContent(7,1719.807);
   16->SetBinContent(8,2138.97);
   16->SetBinContent(9,2465.665);
   16->SetBinContent(10,3223.845);
   16->SetBinContent(11,3747.79);
   16->SetBinContent(12,4043.665);
   16->SetBinContent(13,4647.743);
   16->SetBinContent(14,4918.962);
   16->SetBinContent(15,4561.446);
   16->SetBinContent(16,4530.626);
   16->SetBinContent(17,3834.087);
   16->SetBinContent(18,3624.509);
   16->SetBinContent(19,3396.438);
   16->SetBinContent(20,3143.712);
   16->SetBinContent(21,2471.829);
   16->SetBinContent(22,1553.374);
   16->SetBinContent(23,869.1494);
   16->SetBinContent(24,437.6565);
   16->SetBinContent(25,258.8951);
   16->SetBinContent(26,92.46255);
   16->SetBinContent(27,18.49251);
   16->SetBinContent(28,12.32834);
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
   17->SetBinContent(2,93.70071);
   17->SetBinContent(3,234.2517);
   17->SetBinContent(4,398.2279);
   17->SetBinContent(5,1030.708);
   17->SetBinContent(6,1218.109);
   17->SetBinContent(7,1241.534);
   17->SetBinContent(8,1452.361);
   17->SetBinContent(9,1428.936);
   17->SetBinContent(10,2178.542);
   17->SetBinContent(11,2131.691);
   17->SetBinContent(12,2084.841);
   17->SetBinContent(13,2623.622);
   17->SetBinContent(14,2693.898);
   17->SetBinContent(15,3092.128);
   17->SetBinContent(16,3302.956);
   17->SetBinContent(17,3537.209);
   17->SetBinContent(18,3537.209);
   17->SetBinContent(19,3912.013);
   17->SetBinContent(20,4005.715);
   17->SetBinContent(21,3021.852);
   17->SetBinContent(22,2389.369);
   17->SetBinContent(23,1569.487);
   17->SetBinContent(24,866.7314);
   17->SetBinContent(25,445.0783);
   17->SetBinContent(26,234.2517);
   17->SetBinContent(27,163.9762);
   17->SetBinContent(28,70.27553);
   17->SetBinContent(29,23.42518);
   17->SetBinContent(30,46.85035);
   17->SetBinContent(35,23.42518);
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
