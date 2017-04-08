{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:40:34 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-53.96825,-3.150866,263.4921,5.588635);
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
   
   TH1F *THStack_stack_2 = new TH1F("THStack_stack_2","",50,0,200);
   THStack_stack_2->SetMinimum(0.02643897);
   THStack_stack_2->SetMaximum(77530.97);
   THStack_stack_2->SetDirectory(0);
   THStack_stack_2->SetStats(0);
   THStack_stack_2->SetLineWidth(2);
   THStack_stack_2->SetMarkerSize(1.2);
   THStack_stack_2->GetXaxis()->SetTitle("M_{H#rightarrowWW*} / GeV");
   THStack_stack_2->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetXaxis()->SetLabelColor(ci);
   THStack_stack_2->GetXaxis()->SetLabelFont(42);
   THStack_stack_2->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_2->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_2->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_2->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_2->GetXaxis()->SetTitleColor(ci);
   THStack_stack_2->GetXaxis()->SetTitleFont(42);
   THStack_stack_2->GetYaxis()->SetTitle("Number of events");
   THStack_stack_2->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetYaxis()->SetLabelColor(ci);
   THStack_stack_2->GetYaxis()->SetLabelFont(42);
   THStack_stack_2->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_2->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_2->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_2->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_2->GetYaxis()->SetTitleColor(ci);
   THStack_stack_2->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetZaxis()->SetLabelColor(ci);
   THStack_stack_2->GetZaxis()->SetLabelFont(42);
   THStack_stack_2->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_2->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_2->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_2->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_2->GetZaxis()->SetTitleColor(ci);
   THStack_stack_2->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_2);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,200);
   0->SetBinContent(8,0.029697);
   0->SetBinContent(9,0.07919199);
   0->SetBinContent(10,0.049495);
   0->SetBinContent(11,0.09898999);
   0->SetBinContent(12,0.148485);
   0->SetBinContent(13,0.207879);
   0->SetBinContent(14,0.287071);
   0->SetBinContent(15,0.267273);
   0->SetBinContent(16,0.4454549);
   0->SetBinContent(17,0.7127283);
   0->SetBinContent(18,0.9503047);
   0->SetBinContent(19,1.09879);
   0->SetBinContent(20,1.356165);
   0->SetBinContent(21,1.593741);
   0->SetBinContent(22,1.851116);
   0->SetBinContent(23,2.128287);
   0->SetBinContent(24,2.613333);
   0->SetBinContent(25,3.029087);
   0->SetBinContent(26,3.919988);
   0->SetBinContent(27,4.603026);
   0->SetBinContent(28,4.523833);
   0->SetBinContent(29,4.9099);
   0->SetBinContent(30,5.286067);
   0->SetBinContent(31,5.553344);
   0->SetBinContent(32,5.771125);
   0->SetBinContent(33,4.959395);
   0->SetBinContent(34,3.246862);
   0->SetBinContent(35,2.652928);
   0->SetBinContent(36,1.821419);
   0->SetBinContent(37,1.672933);
   0->SetBinContent(38,1.395761);
   0->SetBinContent(39,1.326468);
   0->SetBinContent(40,1.286871);
   0->SetBinContent(41,1.177982);
   0->SetBinContent(42,0.9008096);
   0->SetBinContent(43,0.8810116);
   0->SetBinContent(44,0.8810116);
   0->SetBinContent(45,0.7721224);
   0->SetBinContent(46,0.6434351);
   0->SetBinContent(47,0.7028292);
   0->SetBinContent(48,0.7028292);
   0->SetBinContent(49,0.5345459);
   0->SetBinContent(50,0.6434351);
   0->SetBinContent(51,12.35405);
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
   1->SetBinContent(5,0.034643);
   1->SetBinContent(6,0.044541);
   1->SetBinContent(7,0.039592);
   1->SetBinContent(8,0.103929);
   1->SetBinContent(9,0.133623);
   1->SetBinContent(10,0.2128071);
   1->SetBinContent(11,0.1831131);
   1->SetBinContent(12,0.2474501);
   1->SetBinContent(13,0.3167362);
   1->SetBinContent(14,0.4652063);
   1->SetBinContent(15,0.6483185);
   1->SetBinContent(16,0.5295432);
   1->SetBinContent(17,0.7126552);
   1->SetBinContent(18,0.8710223);
   1->SetBinContent(19,1.059083);
   1->SetBinContent(20,1.148165);
   1->SetBinContent(21,1.311481);
   1->SetBinContent(22,1.301583);
   1->SetBinContent(23,1.677705);
   1->SetBinContent(24,1.994439);
   1->SetBinContent(25,2.157759);
   1->SetBinContent(26,2.464603);
   1->SetBinContent(27,2.855581);
   1->SetBinContent(28,3.063443);
   1->SetBinContent(29,3.152527);
   1->SetBinContent(30,3.399981);
   1->SetBinContent(31,3.513811);
   1->SetBinContent(32,3.009003);
   1->SetBinContent(33,2.687312);
   1->SetBinContent(34,2.538839);
   1->SetBinContent(35,2.241894);
   1->SetBinContent(36,1.836072);
   1->SetBinContent(37,1.563879);
   1->SetBinContent(38,1.484695);
   1->SetBinContent(39,1.291685);
   1->SetBinContent(40,1.138267);
   1->SetBinContent(41,1.07393);
   1->SetBinContent(42,0.8017367);
   1->SetBinContent(43,0.7720429);
   1->SetBinContent(44,0.7126552);
   1->SetBinContent(45,0.8462775);
   1->SetBinContent(46,0.6483185);
   1->SetBinContent(47,0.5344921);
   1->SetBinContent(48,0.6730634);
   1->SetBinContent(49,0.4899513);
   1->SetBinContent(50,0.554288);
   1->SetBinContent(51,8.091713);
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
   2->SetBinContent(4,0.004949);
   2->SetBinContent(5,0.044541);
   2->SetBinContent(6,0.08413301);
   2->SetBinContent(7,0.09898002);
   2->SetBinContent(8,0.1979601);
   2->SetBinContent(9,0.3167362);
   2->SetBinContent(10,0.3761242);
   2->SetBinContent(11,0.5196452);
   2->SetBinContent(12,0.5493391);
   2->SetBinContent(13,0.6928593);
   2->SetBinContent(14,0.6334716);
   2->SetBinContent(15,1.098675);
   2->SetBinContent(16,1.212502);
   2->SetBinContent(17,1.484695);
   2->SetBinContent(18,1.811327);
   2->SetBinContent(19,1.84597);
   2->SetBinContent(20,2.241894);
   2->SetBinContent(21,2.593279);
   2->SetBinContent(22,3.048596);
   2->SetBinContent(23,3.241611);
   2->SetBinContent(24,3.657334);
   2->SetBinContent(25,4.078007);
   2->SetBinContent(26,4.780778);
   2->SetBinContent(27,5.231146);
   2->SetBinContent(28,5.587481);
   2->SetBinContent(29,6.220964);
   2->SetBinContent(30,7.131598);
   2->SetBinContent(31,7.176139);
   2->SetBinContent(32,6.270455);
   2->SetBinContent(33,5.186604);
   2->SetBinContent(34,4.419495);
   2->SetBinContent(35,3.672182);
   2->SetBinContent(36,3.02385);
   2->SetBinContent(37,3.098087);
   2->SetBinContent(38,2.637821);
   2->SetBinContent(39,2.360672);
   2->SetBinContent(40,2.157759);
   2->SetBinContent(41,1.974643);
   2->SetBinContent(42,1.870715);
   2->SetBinContent(43,1.60347);
   2->SetBinContent(44,1.499542);
   2->SetBinContent(45,1.356022);
   2->SetBinContent(46,1.41046);
   2->SetBinContent(47,1.252093);
   2->SetBinContent(48,1.143216);
   2->SetBinContent(49,1.17291);
   2->SetBinContent(50,1.158063);
   2->SetBinContent(51,21.49857);
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
   3->SetBinContent(4,0.033765);
   3->SetBinContent(5,0.033765);
   3->SetBinContent(6,0.13506);
   3->SetBinContent(7,0.4389449);
   3->SetBinContent(8,0.5402399);
   3->SetBinContent(9,1.01295);
   3->SetBinContent(10,1.046715);
   3->SetBinContent(11,2.025899);
   3->SetBinContent(12,2.194724);
   3->SetBinContent(13,3.308972);
   3->SetBinContent(14,3.173912);
   3->SetBinContent(15,4.65957);
   3->SetBinContent(16,5.84134);
   3->SetBinContent(17,7.732171);
   3->SetBinContent(18,8.00229);
   3->SetBinContent(19,10.8723);
   3->SetBinContent(20,12.96572);
   3->SetBinContent(21,13.64102);
   3->SetBinContent(22,15.63314);
   3->SetBinContent(23,17.92921);
   3->SetBinContent(24,20.25905);
   3->SetBinContent(25,20.96813);
   3->SetBinContent(26,22.0824);
   3->SetBinContent(27,24.446);
   3->SetBinContent(28,26.30312);
   3->SetBinContent(29,27.61999);
   3->SetBinContent(30,31.87448);
   3->SetBinContent(31,32.38094);
   3->SetBinContent(32,30.76021);
   3->SetBinContent(33,27.55246);
   3->SetBinContent(34,22.0824);
   3->SetBinContent(35,17.59155);
   3->SetBinContent(36,14.35008);
   3->SetBinContent(37,11.71642);
   3->SetBinContent(38,10.90607);
   3->SetBinContent(39,7.900995);
   3->SetBinContent(40,8.069819);
   3->SetBinContent(41,5.942634);
   3->SetBinContent(42,5.740045);
   3->SetBinContent(43,5.672515);
   3->SetBinContent(44,5.132278);
   3->SetBinContent(45,3.747918);
   3->SetBinContent(46,3.038851);
   3->SetBinContent(47,3.444032);
   3->SetBinContent(48,3.376502);
   3->SetBinContent(49,2.903791);
   3->SetBinContent(50,2.870026);
   3->SetBinContent(51,57.63633);
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
   4->SetBinContent(3,0.065598);
   4->SetBinContent(4,0.196794);
   4->SetBinContent(5,0.4154539);
   4->SetBinContent(6,0.8090422);
   4->SetBinContent(7,1.42129);
   4->SetBinContent(8,1.880475);
   4->SetBinContent(9,2.79885);
   4->SetBinContent(10,3.258038);
   4->SetBinContent(11,2.973778);
   4->SetBinContent(12,3.782824);
   4->SetBinContent(13,4.91985);
   4->SetBinContent(14,5.269703);
   4->SetBinContent(15,6.166203);
   4->SetBinContent(16,8.068532);
   4->SetBinContent(17,8.265325);
   4->SetBinContent(18,10.29885);
   4->SetBinContent(19,11.91692);
   4->SetBinContent(20,14.60642);
   4->SetBinContent(21,17.40525);
   4->SetBinContent(22,19.91982);
   4->SetBinContent(23,22.43439);
   4->SetBinContent(24,25.12389);
   4->SetBinContent(25,23.1997);
   4->SetBinContent(26,23.83381);
   4->SetBinContent(27,22.54372);
   4->SetBinContent(28,22.12827);
   4->SetBinContent(29,24.13993);
   4->SetBinContent(30,23.70261);
   4->SetBinContent(31,23.59328);
   4->SetBinContent(32,23.65888);
   4->SetBinContent(33,20.26967);
   4->SetBinContent(34,17.99563);
   4->SetBinContent(35,15.30613);
   4->SetBinContent(36,13.29447);
   4->SetBinContent(37,12.15744);
   4->SetBinContent(38,9.664739);
   4->SetBinContent(39,10.27698);
   4->SetBinContent(40,8.39652);
   4->SetBinContent(41,7.565617);
   4->SetBinContent(42,5.794484);
   4->SetBinContent(43,6.931508);
   4->SetBinContent(44,5.81635);
   4->SetBinContent(45,5.072911);
   4->SetBinContent(46,4.854252);
   4->SetBinContent(47,4.067082);
   4->SetBinContent(48,4.132679);
   4->SetBinContent(49,4.001484);
   4->SetBinContent(50,3.848422);
   4->SetBinContent(51,73.7754);
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
   5->SetBinContent(3,0.058154);
   5->SetBinContent(5,0.6396939);
   5->SetBinContent(6,0.7560019);
   5->SetBinContent(7,1.046772);
   5->SetBinContent(8,1.395696);
   5->SetBinContent(9,1.860928);
   5->SetBinContent(10,2.733239);
   5->SetBinContent(11,3.372934);
   5->SetBinContent(12,5.001249);
   5->SetBinContent(13,5.989869);
   5->SetBinContent(14,7.676338);
   5->SetBinContent(15,10.70035);
   5->SetBinContent(16,14.07329);
   5->SetBinContent(17,15.81791);
   5->SetBinContent(18,22.67999);
   5->SetBinContent(19,29.25129);
   5->SetBinContent(20,41.98716);
   5->SetBinContent(21,56.58408);
   5->SetBinContent(22,76.87935);
   5->SetBinContent(23,98.39531);
   5->SetBinContent(24,105.0827);
   5->SetBinContent(25,94.61548);
   5->SetBinContent(26,87.11397);
   5->SetBinContent(27,86.70691);
   5->SetBinContent(28,80.25212);
   5->SetBinContent(29,80.60103);
   5->SetBinContent(30,81.5896);
   5->SetBinContent(31,75.25111);
   5->SetBinContent(32,71.93649);
   5->SetBinContent(33,72.63431);
   5->SetBinContent(34,67.10994);
   5->SetBinContent(35,58.5032);
   5->SetBinContent(36,53.9671);
   5->SetBinContent(37,49.54732);
   5->SetBinContent(38,43.38288);
   5->SetBinContent(39,38.9631);
   5->SetBinContent(40,33.03128);
   5->SetBinContent(41,32.91497);
   5->SetBinContent(42,30.70512);
   5->SetBinContent(43,26.16918);
   5->SetBinContent(44,27.33224);
   5->SetBinContent(45,24.71535);
   5->SetBinContent(46,21.86584);
   5->SetBinContent(47,19.77233);
   5->SetBinContent(48,19.65602);
   5->SetBinContent(49,19.1908);
   5->SetBinContent(50,16.86467);
   5->SetBinContent(51,384.475);
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
   6->SetBinContent(2,0.877067);
   6->SetBinContent(3,4.385335);
   6->SetBinContent(4,10.5248);
   6->SetBinContent(5,18.41841);
   6->SetBinContent(6,35.95975);
   6->SetBinContent(7,74.55073);
   6->SetBinContent(8,98.23155);
   6->SetBinContent(9,165.7654);
   6->SetBinContent(10,227.1596);
   6->SetBinContent(11,281.5378);
   6->SetBinContent(12,369.2453);
   6->SetBinContent(13,438.5342);
   6->SetBinContent(14,579.7433);
   6->SetBinContent(15,676.2216);
   6->SetBinContent(16,846.3742);
   6->SetBinContent(17,1046.347);
   6->SetBinContent(18,1369.988);
   6->SetBinContent(19,1760.286);
   6->SetBinContent(20,2190.911);
   6->SetBinContent(21,2352.27);
   6->SetBinContent(22,2291.76);
   6->SetBinContent(23,2148.817);
   6->SetBinContent(24,2089.184);
   6->SetBinContent(25,2172.495);
   6->SetBinContent(26,2140.924);
   6->SetBinContent(27,2218.096);
   6->SetBinContent(28,2246.159);
   6->SetBinContent(29,2338.239);
   6->SetBinContent(30,2135.663);
   6->SetBinContent(31,2192.665);
   6->SetBinContent(32,2128.647);
   6->SetBinContent(33,2001.482);
   6->SetBinContent(34,1823.436);
   6->SetBinContent(35,1683.104);
   6->SetBinContent(36,1474.36);
   6->SetBinContent(37,1286.666);
   6->SetBinContent(38,1135.809);
   6->SetBinContent(39,1072.66);
   6->SetBinContent(40,919.1714);
   6->SetBinContent(41,831.4639);
   6->SetBinContent(42,785.856);
   6->SetBinContent(43,685.8694);
   6->SetBinContent(44,652.5406);
   6->SetBinContent(45,606.9327);
   6->SetBinContent(46,566.5872);
   6->SetBinContent(47,563.0789);
   6->SetBinContent(48,517.471);
   6->SetBinContent(49,449.9362);
   6->SetBinContent(50,406.0825);
   6->SetBinContent(51,9010.099);
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
   7->SetBinContent(5,0.27623);
   7->SetBinContent(6,2.900415);
   7->SetBinContent(7,3.176645);
   7->SetBinContent(8,5.662714);
   7->SetBinContent(9,11.18731);
   7->SetBinContent(10,10.91108);
   7->SetBinContent(11,17.5406);
   7->SetBinContent(12,28.45168);
   7->SetBinContent(13,33.00947);
   7->SetBinContent(14,52.75991);
   7->SetBinContent(15,69.74805);
   7->SetBinContent(16,92.12267);
   7->SetBinContent(17,128.585);
   7->SetBinContent(18,163.3919);
   7->SetBinContent(19,219.4697);
   7->SetBinContent(20,309.6637);
   7->SetBinContent(21,417.9518);
   7->SetBinContent(22,533.8366);
   7->SetBinContent(23,658.5613);
   7->SetBinContent(24,684.8046);
   7->SetBinContent(25,580.7983);
   7->SetBinContent(26,503.1734);
   7->SetBinContent(27,453.5874);
   7->SetBinContent(28,440.742);
   7->SetBinContent(29,424.1673);
   7->SetBinContent(30,422.7861);
   7->SetBinContent(31,387.5648);
   7->SetBinContent(32,386.0455);
   7->SetBinContent(33,388.8079);
   7->SetBinContent(34,348.8905);
   7->SetBinContent(35,332.3158);
   7->SetBinContent(36,316.4317);
   7->SetBinContent(37,272.9231);
   7->SetBinContent(38,237.1494);
   7->SetBinContent(39,219.6078);
   7->SetBinContent(40,189.6352);
   7->SetBinContent(41,163.8063);
   7->SetBinContent(42,152.6184);
   7->SetBinContent(43,149.7178);
   7->SetBinContent(44,131.2094);
   7->SetBinContent(45,124.5797);
   7->SetBinContent(46,115.326);
   7->SetBinContent(47,109.9395);
   7->SetBinContent(48,104.553);
   7->SetBinContent(49,107.3153);
   7->SetBinContent(50,91.15586);
   7->SetBinContent(51,2244.257);
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
   8->SetBinContent(7,0.92388);
   8->SetBinContent(8,0.92388);
   8->SetBinContent(9,0.92388);
   8->SetBinContent(10,0.92388);
   8->SetBinContent(11,4.6194);
   8->SetBinContent(12,1.84776);
   8->SetBinContent(13,4.6194);
   8->SetBinContent(14,5.54328);
   8->SetBinContent(15,4.6194);
   8->SetBinContent(16,13.8582);
   8->SetBinContent(17,15.70596);
   8->SetBinContent(18,33.25967);
   8->SetBinContent(19,47.1179);
   8->SetBinContent(20,72.98658);
   8->SetBinContent(21,98.85526);
   8->SetBinContent(22,84.07316);
   8->SetBinContent(23,63.74776);
   8->SetBinContent(24,47.1179);
   8->SetBinContent(25,31.41191);
   8->SetBinContent(26,36.03132);
   8->SetBinContent(27,28.64027);
   8->SetBinContent(28,26.79251);
   8->SetBinContent(29,36.9552);
   8->SetBinContent(30,36.03132);
   8->SetBinContent(31,38.80296);
   8->SetBinContent(32,32.33579);
   8->SetBinContent(33,36.9552);
   8->SetBinContent(34,27.71639);
   8->SetBinContent(35,31.41191);
   8->SetBinContent(36,28.64027);
   8->SetBinContent(37,40.65073);
   8->SetBinContent(38,35.10744);
   8->SetBinContent(39,28.64027);
   8->SetBinContent(40,28.64027);
   8->SetBinContent(41,24.02087);
   8->SetBinContent(42,24.94475);
   8->SetBinContent(43,24.02087);
   8->SetBinContent(44,21.24924);
   8->SetBinContent(45,22.17311);
   8->SetBinContent(46,22.17311);
   8->SetBinContent(47,17.55372);
   8->SetBinContent(48,23.09699);
   8->SetBinContent(49,12.01044);
   8->SetBinContent(50,18.4776);
   8->SetBinContent(51,824.1059);
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
   9->SetBinContent(4,0.439564);
   9->SetBinContent(5,0.439564);
   9->SetBinContent(6,0.879128);
   9->SetBinContent(7,3.516512);
   9->SetBinContent(8,5.274768);
   9->SetBinContent(9,7.033023);
   9->SetBinContent(10,6.153895);
   9->SetBinContent(11,16.26386);
   9->SetBinContent(12,21.53863);
   9->SetBinContent(13,26.81339);
   9->SetBinContent(14,36.04423);
   9->SetBinContent(15,54.94547);
   9->SetBinContent(16,58.90155);
   9->SetBinContent(17,78.68204);
   9->SetBinContent(18,111.21);
   9->SetBinContent(19,141.54);
   9->SetBinContent(20,185.9355);
   9->SetBinContent(21,231.6498);
   9->SetBinContent(22,220.2212);
   9->SetBinContent(23,208.3531);
   9->SetBinContent(24,202.1992);
   9->SetBinContent(25,236.4849);
   9->SetBinContent(26,221.5399);
   9->SetBinContent(27,243.5179);
   9->SetBinContent(28,235.1662);
   9->SetBinContent(29,239.5618);
   9->SetBinContent(30,266.3754);
   9->SetBinContent(31,267.2545);
   9->SetBinContent(32,271.6503);
   9->SetBinContent(33,276.046);
   9->SetBinContent(34,296.2665);
   9->SetBinContent(35,274.7273);
   9->SetBinContent(36,291.8707);
   9->SetBinContent(37,299.7831);
   9->SetBinContent(38,298.4644);
   9->SetBinContent(39,280.4418);
   9->SetBinContent(40,297.1456);
   9->SetBinContent(41,338.4657);
   9->SetBinContent(42,338.9053);
   9->SetBinContent(43,378.9066);
   9->SetBinContent(44,375.8296);
   9->SetBinContent(45,340.6636);
   9->SetBinContent(46,297.5852);
   9->SetBinContent(47,250.9904);
   9->SetBinContent(48,226.375);
   9->SetBinContent(49,205.2762);
   9->SetBinContent(50,176.2652);
   9->SetBinContent(51,6623.12);
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
   10->SetBinContent(3,1.164572);
   10->SetBinContent(4,13.39258);
   10->SetBinContent(5,36.10174);
   10->SetBinContent(6,82.10234);
   10->SetBinContent(7,145.2804);
   10->SetBinContent(8,241.647);
   10->SetBinContent(9,374.9881);
   10->SetBinContent(10,529.2911);
   10->SetBinContent(11,704.2648);
   10->SetBinContent(12,989.5798);
   10->SetBinContent(13,1270.237);
   10->SetBinContent(14,1643.184);
   10->SetBinContent(15,2060.389);
   10->SetBinContent(16,2539.512);
   10->SetBinContent(17,3003.489);
   10->SetBinContent(18,3791.055);
   10->SetBinContent(19,4858.465);
   10->SetBinContent(20,5973.346);
   10->SetBinContent(21,6614.744);
   10->SetBinContent(22,6334.496);
   10->SetBinContent(23,5859.559);
   10->SetBinContent(24,5614.523);
   10->SetBinContent(25,5346.789);
   10->SetBinContent(26,5248.426);
   10->SetBinContent(27,5141.623);
   10->SetBinContent(28,5084.002);
   10->SetBinContent(29,4919.578);
   10->SetBinContent(30,4815.104);
   10->SetBinContent(31,4713.248);
   10->SetBinContent(32,4692.295);
   10->SetBinContent(33,4518.268);
   10->SetBinContent(34,4259.846);
   10->SetBinContent(35,3960.568);
   10->SetBinContent(36,3642.512);
   10->SetBinContent(37,3237.661);
   10->SetBinContent(38,2863.684);
   10->SetBinContent(39,2585.531);
   10->SetBinContent(40,2283.786);
   10->SetBinContent(41,2087.477);
   10->SetBinContent(42,1883.081);
   10->SetBinContent(43,1718.589);
   10->SetBinContent(44,1612.032);
   10->SetBinContent(45,1455.691);
   10->SetBinContent(46,1301.971);
   10->SetBinContent(47,1166.3);
   10->SetBinContent(48,1053.63);
   10->SetBinContent(49,977.0609);
   10->SetBinContent(50,862.0615);
   10->SetBinContent(51,17632.01);
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
   11->SetBinContent(9,61.04166);
   11->SetBinContent(10,91.5625);
   11->SetBinContent(11,152.6042);
   11->SetBinContent(12,61.04166);
   11->SetBinContent(13,244.1666);
   11->SetBinContent(14,152.6042);
   11->SetBinContent(15,213.6458);
   11->SetBinContent(16,396.7708);
   11->SetBinContent(17,701.9791);
   11->SetBinContent(18,1007.187);
   11->SetBinContent(19,640.9374);
   11->SetBinContent(20,1007.187);
   11->SetBinContent(21,1465);
   11->SetBinContent(22,824.0623);
   11->SetBinContent(23,1098.75);
   11->SetBinContent(24,1220.833);
   11->SetBinContent(25,1037.708);
   11->SetBinContent(26,640.9374);
   11->SetBinContent(27,885.1039);
   11->SetBinContent(28,1251.354);
   11->SetBinContent(29,1037.708);
   11->SetBinContent(30,763.0207);
   11->SetBinContent(31,701.9791);
   11->SetBinContent(32,701.9791);
   11->SetBinContent(33,1037.708);
   11->SetBinContent(34,671.4583);
   11->SetBinContent(35,671.4583);
   11->SetBinContent(36,640.9374);
   11->SetBinContent(37,518.8542);
   11->SetBinContent(38,579.8958);
   11->SetBinContent(39,610.4166);
   11->SetBinContent(40,488.3334);
   11->SetBinContent(41,305.2083);
   11->SetBinContent(42,274.6875);
   11->SetBinContent(43,335.7292);
   11->SetBinContent(44,274.6875);
   11->SetBinContent(45,244.1666);
   11->SetBinContent(46,305.2083);
   11->SetBinContent(47,366.25);
   11->SetBinContent(48,244.1666);
   11->SetBinContent(49,244.1666);
   11->SetBinContent(50,274.6875);
   11->SetBinContent(51,7691.265);
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
   12->SetBinContent(2,0.715956);
   12->SetBinContent(3,4.295736);
   12->SetBinContent(4,12.88721);
   12->SetBinContent(5,17.18294);
   12->SetBinContent(6,34.36588);
   12->SetBinContent(7,32.21801);
   12->SetBinContent(8,54.4127);
   12->SetBinContent(9,72.31164);
   12->SetBinContent(10,87.34675);
   12->SetBinContent(11,110.9734);
   12->SetBinContent(12,113.8372);
   12->SetBinContent(13,143.9074);
   12->SetBinContent(14,195.4563);
   12->SetBinContent(15,203.3319);
   12->SetBinContent(16,252.017);
   12->SetBinContent(17,252.017);
   12->SetBinContent(18,349.3853);
   12->SetBinContent(19,440.3099);
   12->SetBinContent(20,483.9824);
   12->SetBinContent(21,516.1998);
   12->SetBinContent(22,570.6115);
   12->SetBinContent(23,539.8259);
   12->SetBinContent(24,522.6433);
   12->SetBinContent(25,432.4346);
   12->SetBinContent(26,398.7853);
   12->SetBinContent(27,338.6461);
   12->SetBinContent(28,335.0664);
   12->SetBinContent(29,273.4954);
   12->SetBinContent(30,262.0403);
   12->SetBinContent(31,282.0867);
   12->SetBinContent(32,262.7562);
   12->SetBinContent(33,264.9041);
   12->SetBinContent(34,251.301);
   12->SetBinContent(35,213.3553);
   12->SetBinContent(36,226.2425);
   12->SetBinContent(37,230.5383);
   12->SetBinContent(38,177.5574);
   12->SetBinContent(39,178.2734);
   12->SetBinContent(40,162.5223);
   12->SetBinContent(41,154.6468);
   12->SetBinContent(42,131.0202);
   12->SetBinContent(43,143.9074);
   12->SetBinContent(44,120.2808);
   12->SetBinContent(45,120.9968);
   12->SetBinContent(46,91.64249);
   12->SetBinContent(47,105.9616);
   12->SetBinContent(48,117.417);
   12->SetBinContent(49,91.64249);
   12->SetBinContent(50,99.51803);
   12->SetBinContent(51,5103.42);
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
   13->SetBinContent(5,156.0331);
   13->SetBinContent(6,52.01103);
   13->SetBinContent(7,468.0992);
   13->SetBinContent(8,312.0662);
   13->SetBinContent(9,988.2097);
   13->SetBinContent(10,1092.232);
   13->SetBinContent(11,1404.298);
   13->SetBinContent(12,1612.342);
   13->SetBinContent(13,3068.649);
   13->SetBinContent(14,3744.792);
   13->SetBinContent(15,4680.993);
   13->SetBinContent(16,6033.285);
   13->SetBinContent(17,9049.928);
   13->SetBinContent(18,9830.089);
   13->SetBinContent(19,12118.56);
   13->SetBinContent(20,15603.28);
   13->SetBinContent(21,15967.36);
   13->SetBinContent(22,15707.3);
   13->SetBinContent(23,14198.99);
   13->SetBinContent(24,14146.98);
   13->SetBinContent(25,13782.91);
   13->SetBinContent(26,11910.52);
   13->SetBinContent(27,12638.67);
   13->SetBinContent(28,13574.86);
   13->SetBinContent(29,11650.46);
   13->SetBinContent(30,10662.26);
   13->SetBinContent(31,11286.39);
   13->SetBinContent(32,10610.25);
   13->SetBinContent(33,9674.057);
   13->SetBinContent(34,9153.949);
   13->SetBinContent(35,9830.089);
   13->SetBinContent(36,8477.81);
   13->SetBinContent(37,6657.419);
   13->SetBinContent(38,7281.554);
   13->SetBinContent(39,6137.307);
   13->SetBinContent(40,6033.285);
   13->SetBinContent(41,5253.116);
   13->SetBinContent(42,3952.836);
   13->SetBinContent(43,4212.892);
   13->SetBinContent(44,3640.77);
   13->SetBinContent(45,3172.671);
   13->SetBinContent(46,2860.605);
   13->SetBinContent(47,2756.583);
   13->SetBinContent(48,2340.495);
   13->SetBinContent(49,2444.517);
   13->SetBinContent(50,1872.396);
   13->SetBinContent(51,55496.25);
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
   14->SetBinContent(1,9.254577);
   14->SetBinContent(3,74.03661);
   14->SetBinContent(4,194.3461);
   14->SetBinContent(5,388.6922);
   14->SetBinContent(6,814.4028);
   14->SetBinContent(7,999.4943);
   14->SetBinContent(8,1332.657);
   14->SetBinContent(9,1489.984);
   14->SetBinContent(10,2304.385);
   14->SetBinContent(11,2461.714);
   14->SetBinContent(12,3294.631);
   14->SetBinContent(13,3563.016);
   14->SetBinContent(14,3720.344);
   14->SetBinContent(15,4284.873);
   14->SetBinContent(16,4655.048);
   14->SetBinContent(17,4469.96);
   14->SetBinContent(18,5062.242);
   14->SetBinContent(19,4618.031);
   14->SetBinContent(20,4756.847);
   14->SetBinContent(21,3979.474);
   14->SetBinContent(22,3664.817);
   14->SetBinContent(23,3840.655);
   14->SetBinContent(24,2813.39);
   14->SetBinContent(25,2674.57);
   14->SetBinContent(26,2091.528);
   14->SetBinContent(27,2026.746);
   14->SetBinContent(28,1702.838);
   14->SetBinContent(29,1545.511);
   14->SetBinContent(30,1212.348);
   14->SetBinContent(31,1212.348);
   14->SetBinContent(32,1212.348);
   14->SetBinContent(33,962.476);
   14->SetBinContent(34,805.1482);
   14->SetBinContent(35,647.8204);
   14->SetBinContent(36,416.456);
   14->SetBinContent(37,333.1648);
   14->SetBinContent(38,416.456);
   14->SetBinContent(39,323.9102);
   14->SetBinContent(40,268.3827);
   14->SetBinContent(41,166.5824);
   14->SetBinContent(42,268.3827);
   14->SetBinContent(43,148.0732);
   14->SetBinContent(44,157.3278);
   14->SetBinContent(45,148.0732);
   14->SetBinContent(46,101.8003);
   14->SetBinContent(47,92.54577);
   14->SetBinContent(48,83.29119);
   14->SetBinContent(49,101.8003);
   14->SetBinContent(50,37.01831);
   14->SetBinContent(51,1045.767);
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
   15->SetBinContent(3,84.14027);
   15->SetBinContent(4,112.187);
   15->SetBinContent(5,420.7013);
   15->SetBinContent(6,364.6078);
   15->SetBinContent(7,448.7481);
   15->SetBinContent(8,476.7948);
   15->SetBinContent(9,504.8416);
   15->SetBinContent(10,476.7948);
   15->SetBinContent(11,897.4962);
   15->SetBinContent(12,897.4962);
   15->SetBinContent(13,1093.823);
   15->SetBinContent(14,1009.683);
   15->SetBinContent(15,1262.104);
   15->SetBinContent(16,1065.777);
   15->SetBinContent(17,1121.87);
   15->SetBinContent(18,953.5897);
   15->SetBinContent(19,1346.244);
   15->SetBinContent(20,925.5429);
   15->SetBinContent(21,953.5897);
   15->SetBinContent(22,897.4962);
   15->SetBinContent(23,897.4962);
   15->SetBinContent(24,1037.73);
   15->SetBinContent(25,1037.73);
   15->SetBinContent(26,673.1221);
   15->SetBinContent(27,701.1689);
   15->SetBinContent(28,588.9819);
   15->SetBinContent(29,560.9351);
   15->SetBinContent(30,476.7948);
   15->SetBinContent(31,476.7948);
   15->SetBinContent(32,757.2624);
   15->SetBinContent(33,420.7013);
   15->SetBinContent(34,448.7481);
   15->SetBinContent(35,280.4676);
   15->SetBinContent(36,280.4676);
   15->SetBinContent(37,112.187);
   15->SetBinContent(38,168.2805);
   15->SetBinContent(39,280.4676);
   15->SetBinContent(40,224.374);
   15->SetBinContent(41,168.2805);
   15->SetBinContent(42,140.2338);
   15->SetBinContent(43,84.14027);
   15->SetBinContent(44,112.187);
   15->SetBinContent(45,140.2338);
   15->SetBinContent(46,56.09351);
   15->SetBinContent(47,112.187);
   15->SetBinContent(48,196.3273);
   15->SetBinContent(49,56.09351);
   15->SetBinContent(50,56.09351);
   15->SetBinContent(51,1654.759);
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
   16->SetBinContent(3,10.61979);
   16->SetBinContent(5,10.61979);
   16->SetBinContent(6,53.09894);
   16->SetBinContent(7,127.4375);
   16->SetBinContent(8,106.1979);
   16->SetBinContent(9,159.2968);
   16->SetBinContent(10,201.7759);
   16->SetBinContent(11,244.2551);
   16->SetBinContent(12,318.5935);
   16->SetBinContent(13,371.6924);
   16->SetBinContent(14,276.1144);
   16->SetBinContent(15,424.7914);
   16->SetBinContent(16,477.8903);
   16->SetBinContent(17,467.2705);
   16->SetBinContent(18,573.4684);
   16->SetBinContent(19,722.1458);
   16->SetBinContent(20,637.1873);
   16->SetBinContent(21,658.4269);
   16->SetBinContent(22,584.0883);
   16->SetBinContent(23,509.7496);
   16->SetBinContent(24,446.0309);
   16->SetBinContent(25,414.1716);
   16->SetBinContent(26,254.8748);
   16->SetBinContent(27,361.0727);
   16->SetBinContent(28,382.3122);
   16->SetBinContent(29,392.932);
   16->SetBinContent(30,286.7342);
   16->SetBinContent(31,276.1144);
   16->SetBinContent(32,244.2551);
   16->SetBinContent(33,212.3957);
   16->SetBinContent(34,212.3957);
   16->SetBinContent(35,148.677);
   16->SetBinContent(36,127.4375);
   16->SetBinContent(37,127.4375);
   16->SetBinContent(38,106.1979);
   16->SetBinContent(39,74.33852);
   16->SetBinContent(40,127.4375);
   16->SetBinContent(41,116.8177);
   16->SetBinContent(42,127.4375);
   16->SetBinContent(43,106.1979);
   16->SetBinContent(44,63.71873);
   16->SetBinContent(45,42.47915);
   16->SetBinContent(46,42.47915);
   16->SetBinContent(47,21.23957);
   16->SetBinContent(48,53.09894);
   16->SetBinContent(49,84.95831);
   16->SetBinContent(50,42.47915);
   16->SetBinContent(51,1200.036);
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
   17->SetBinContent(1,60.82056);
   17->SetBinContent(4,60.82056);
   17->SetBinContent(5,1216.411);
   17->SetBinContent(6,851.4879);
   17->SetBinContent(7,851.4879);
   17->SetBinContent(8,790.6673);
   17->SetBinContent(9,1277.232);
   17->SetBinContent(10,1277.232);
   17->SetBinContent(11,1885.437);
   17->SetBinContent(12,2250.361);
   17->SetBinContent(13,2797.746);
   17->SetBinContent(14,2980.208);
   17->SetBinContent(15,3345.131);
   17->SetBinContent(16,3770.875);
   17->SetBinContent(17,2858.566);
   17->SetBinContent(18,3405.951);
   17->SetBinContent(19,3041.028);
   17->SetBinContent(20,3770.875);
   17->SetBinContent(21,3345.131);
   17->SetBinContent(22,3041.028);
   17->SetBinContent(23,2980.208);
   17->SetBinContent(24,2554.464);
   17->SetBinContent(25,1581.335);
   17->SetBinContent(26,1338.052);
   17->SetBinContent(27,1581.335);
   17->SetBinContent(28,1277.232);
   17->SetBinContent(29,1155.591);
   17->SetBinContent(30,973.129);
   17->SetBinContent(31,1642.155);
   17->SetBinContent(32,1155.591);
   17->SetBinContent(33,851.4879);
   17->SetBinContent(34,912.3084);
   17->SetBinContent(35,790.6673);
   17->SetBinContent(36,486.5645);
   17->SetBinContent(37,547.3851);
   17->SetBinContent(38,912.3084);
   17->SetBinContent(39,608.2056);
   17->SetBinContent(40,243.2822);
   17->SetBinContent(41,304.1028);
   17->SetBinContent(42,547.3851);
   17->SetBinContent(43,304.1028);
   17->SetBinContent(44,425.7439);
   17->SetBinContent(45,182.4617);
   17->SetBinContent(46,608.2056);
   17->SetBinContent(47,182.4617);
   17->SetBinContent(48,304.1028);
   17->SetBinContent(49,182.4617);
   17->SetBinContent(50,243.2822);
   17->SetBinContent(51,12954.78);
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
