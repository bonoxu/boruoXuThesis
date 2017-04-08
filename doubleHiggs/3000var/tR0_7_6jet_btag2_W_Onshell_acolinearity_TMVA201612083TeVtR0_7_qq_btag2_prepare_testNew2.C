{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:44:48 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.8478413,-3.0922,4.13946,5.379549);
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
   
   TH1F *THStack_stack_23 = new TH1F("THStack_stack_23","",50,0,3.142);
   THStack_stack_23->SetMinimum(0.02708413);
   THStack_stack_23->SetMaximum(50327.96);
   THStack_stack_23->SetDirectory(0);
   THStack_stack_23->SetStats(0);
   THStack_stack_23->SetLineWidth(2);
   THStack_stack_23->SetMarkerSize(1.2);
   THStack_stack_23->GetXaxis()->SetTitle("Acolinearity of W sub-jets");
   THStack_stack_23->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_23->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_23->GetXaxis()->SetLabelColor(ci);
   THStack_stack_23->GetXaxis()->SetLabelFont(42);
   THStack_stack_23->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_23->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_23->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_23->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_23->GetXaxis()->SetTitleColor(ci);
   THStack_stack_23->GetXaxis()->SetTitleFont(42);
   THStack_stack_23->GetYaxis()->SetTitle("Number of events");
   THStack_stack_23->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_23->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_23->GetYaxis()->SetLabelColor(ci);
   THStack_stack_23->GetYaxis()->SetLabelFont(42);
   THStack_stack_23->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_23->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_23->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_23->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_23->GetYaxis()->SetTitleColor(ci);
   THStack_stack_23->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_23->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_23->GetZaxis()->SetLabelColor(ci);
   THStack_stack_23->GetZaxis()->SetLabelFont(42);
   THStack_stack_23->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_23->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_23->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_23->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_23->GetZaxis()->SetTitleColor(ci);
   THStack_stack_23->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_23);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,3.142);
   0->SetBinContent(1,0.019798);
   0->SetBinContent(2,0.217778);
   0->SetBinContent(3,0.326667);
   0->SetBinContent(4,0.4058589);
   0->SetBinContent(5,0.5147479);
   0->SetBinContent(6,0.574142);
   0->SetBinContent(7,0.6731322);
   0->SetBinContent(8,0.8612136);
   0->SetBinContent(9,0.9997998);
   0->SetBinContent(10,0.9008096);
   0->SetBinContent(11,1.128487);
   0->SetBinContent(12,1.19778);
   0->SetBinContent(13,1.128487);
   0->SetBinContent(14,1.078992);
   0->SetBinContent(15,1.19778);
   0->SetBinContent(16,1.395761);
   0->SetBinContent(17,1.474953);
   0->SetBinContent(18,1.415559);
   0->SetBinContent(19,1.425458);
   0->SetBinContent(20,1.593741);
   0->SetBinContent(21,1.564044);
   0->SetBinContent(22,1.455155);
   0->SetBinContent(23,1.573943);
   0->SetBinContent(24,1.781822);
   0->SetBinContent(25,1.841217);
   0->SetBinContent(26,1.841217);
   0->SetBinContent(27,1.890712);
   0->SetBinContent(28,2.049095);
   0->SetBinContent(29,2.0095);
   0->SetBinContent(30,2.019399);
   0->SetBinContent(31,2.336164);
   0->SetBinContent(32,2.682625);
   0->SetBinContent(33,2.524243);
   0->SetBinContent(34,2.474748);
   0->SetBinContent(35,3.157772);
   0->SetBinContent(36,3.009289);
   0->SetBinContent(37,3.276559);
   0->SetBinContent(38,3.227065);
   0->SetBinContent(39,3.514133);
   0->SetBinContent(40,3.642818);
   0->SetBinContent(41,4.058574);
   0->SetBinContent(42,3.910089);
   0->SetBinContent(43,3.702212);
   0->SetBinContent(44,3.880392);
   0->SetBinContent(45,3.395346);
   0->SetBinContent(46,2.563838);
   0->SetBinContent(47,1.465054);
   0->SetBinContent(48,0.584041);
   0->SetBinContent(49,0.09898999);
   0->SetBinContent(50,0.009899);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,3.142);
   1->SetBinContent(1,0.04949);
   1->SetBinContent(2,0.2622971);
   1->SetBinContent(3,0.4107672);
   1->SetBinContent(4,0.6136757);
   1->SetBinContent(5,0.6285226);
   1->SetBinContent(6,0.6879103);
   1->SetBinContent(7,0.9897977);
   1->SetBinContent(8,1.049185);
   1->SetBinContent(9,1.148165);
   1->SetBinContent(10,1.311481);
   1->SetBinContent(11,1.257042);
   1->SetBinContent(12,1.375818);
   1->SetBinContent(13,1.212502);
   1->SetBinContent(14,1.41046);
   1->SetBinContent(15,1.455001);
   1->SetBinContent(16,1.380767);
   1->SetBinContent(17,1.519338);
   1->SetBinContent(18,1.26694);
   1->SetBinContent(19,1.356022);
   1->SetBinContent(20,1.440154);
   1->SetBinContent(21,1.351073);
   1->SetBinContent(22,1.450052);
   1->SetBinContent(23,1.662858);
   1->SetBinContent(24,1.45995);
   1->SetBinContent(25,1.484695);
   1->SetBinContent(26,1.504491);
   1->SetBinContent(27,1.613368);
   1->SetBinContent(28,1.529236);
   1->SetBinContent(29,1.667807);
   1->SetBinContent(30,1.687603);
   1->SetBinContent(31,1.643062);
   1->SetBinContent(32,1.65296);
   1->SetBinContent(33,1.623266);
   1->SetBinContent(34,1.781633);
   1->SetBinContent(35,1.850919);
   1->SetBinContent(36,1.836072);
   1->SetBinContent(37,1.841021);
   1->SetBinContent(38,1.855868);
   1->SetBinContent(39,2.088472);
   1->SetBinContent(40,1.98949);
   1->SetBinContent(41,2.271588);
   1->SetBinContent(42,2.053828);
   1->SetBinContent(43,2.088472);
   1->SetBinContent(44,1.984541);
   1->SetBinContent(45,1.682654);
   1->SetBinContent(46,1.291685);
   1->SetBinContent(47,0.6334716);
   1->SetBinContent(48,0.1732151);
   1->SetBinContent(49,0.039592);
   1->SetBinContent(50,0.014847);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,3.142);
   2->SetBinContent(1,0.1435211);
   2->SetBinContent(2,0.4206652);
   2->SetBinContent(3,0.7374001);
   2->SetBinContent(4,0.9947467);
   2->SetBinContent(5,1.054134);
   2->SetBinContent(6,1.489644);
   2->SetBinContent(7,1.697501);
   2->SetBinContent(8,2.103319);
   2->SetBinContent(9,2.187454);
   2->SetBinContent(10,2.251792);
   2->SetBinContent(11,2.390367);
   2->SetBinContent(12,2.791243);
   2->SetBinContent(13,2.934767);
   2->SetBinContent(14,2.825887);
   2->SetBinContent(15,2.548738);
   2->SetBinContent(16,2.637821);
   2->SetBinContent(17,2.80609);
   2->SetBinContent(18,2.504196);
   2->SetBinContent(19,2.880327);
   2->SetBinContent(20,2.865479);
   2->SetBinContent(21,2.776396);
   2->SetBinContent(22,2.850632);
   2->SetBinContent(23,2.840734);
   2->SetBinContent(24,2.825887);
   2->SetBinContent(25,2.75165);
   2->SetBinContent(26,2.880327);
   2->SetBinContent(27,3.117883);
   2->SetBinContent(28,2.910021);
   2->SetBinContent(29,3.187171);
   2->SetBinContent(30,3.206967);
   2->SetBinContent(31,3.211916);
   2->SetBinContent(32,3.24656);
   2->SetBinContent(33,3.508862);
   2->SetBinContent(34,3.662283);
   2->SetBinContent(35,3.637538);
   2->SetBinContent(36,3.825603);
   2->SetBinContent(37,4.087905);
   2->SetBinContent(38,4.127498);
   2->SetBinContent(39,4.320513);
   2->SetBinContent(40,4.513527);
   2->SetBinContent(41,4.439291);
   2->SetBinContent(42,4.384851);
   2->SetBinContent(43,4.320513);
   2->SetBinContent(44,4.55312);
   2->SetBinContent(45,4.003771);
   2->SetBinContent(46,2.875378);
   2->SetBinContent(47,1.534185);
   2->SetBinContent(48,0.6285226);
   2->SetBinContent(49,0.1781641);
   2->SetBinContent(50,0.054439);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,3.142);
   3->SetBinContent(1,0.4051799);
   3->SetBinContent(2,1.01295);
   3->SetBinContent(3,2.329785);
   3->SetBinContent(4,2.734966);
   3->SetBinContent(5,4.220627);
   3->SetBinContent(6,5.064748);
   3->SetBinContent(7,6.617931);
   3->SetBinContent(8,6.178988);
   3->SetBinContent(9,7.158168);
   3->SetBinContent(10,8.00229);
   3->SetBinContent(11,8.947705);
   3->SetBinContent(12,9.150294);
   3->SetBinContent(13,10.43336);
   3->SetBinContent(14,9.015235);
   3->SetBinContent(15,10.56842);
   3->SetBinContent(16,9.623002);
   3->SetBinContent(17,11.07489);
   3->SetBinContent(18,10.06194);
   3->SetBinContent(19,10.39959);
   3->SetBinContent(20,11.34501);
   3->SetBinContent(21,11.00736);
   3->SetBinContent(22,11.37877);
   3->SetBinContent(23,12.83066);
   3->SetBinContent(24,13.03325);
   3->SetBinContent(25,13.13455);
   3->SetBinContent(26,11.88525);
   3->SetBinContent(27,13.03325);
   3->SetBinContent(28,14.82279);
   3->SetBinContent(29,13.43843);
   3->SetBinContent(30,13.67478);
   3->SetBinContent(31,15.90326);
   3->SetBinContent(32,17.55778);
   3->SetBinContent(33,16.00456);
   3->SetBinContent(34,15.02538);
   3->SetBinContent(35,17.11883);
   3->SetBinContent(36,16.81494);
   3->SetBinContent(37,17.49025);
   3->SetBinContent(38,18.53699);
   3->SetBinContent(39,20.73177);
   3->SetBinContent(40,19.27984);
   3->SetBinContent(41,19.92139);
   3->SetBinContent(42,19.58373);
   3->SetBinContent(43,19.07724);
   3->SetBinContent(44,19.27984);
   3->SetBinContent(45,17.18636);
   3->SetBinContent(46,13.77608);
   3->SetBinContent(47,8.137349);
   3->SetBinContent(48,2.464845);
   3->SetBinContent(49,0.8441251);
   3->SetBinContent(50,0.27012);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,3.142);
   4->SetBinContent(1,0.5466499);
   4->SetBinContent(2,2.121001);
   4->SetBinContent(3,2.930046);
   4->SetBinContent(4,4.985447);
   4->SetBinContent(5,6.253666);
   4->SetBinContent(6,7.106434);
   4->SetBinContent(7,8.615178);
   4->SetBinContent(8,9.227422);
   4->SetBinContent(9,10.73617);
   4->SetBinContent(10,10.93296);
   4->SetBinContent(11,12.04812);
   4->SetBinContent(12,11.19535);
   4->SetBinContent(13,12.33237);
   4->SetBinContent(14,12.94462);
   4->SetBinContent(15,12.46357);
   4->SetBinContent(16,12.74782);
   4->SetBinContent(17,12.39797);
   4->SetBinContent(18,12.96648);
   4->SetBinContent(19,13.29447);
   4->SetBinContent(20,13.88485);
   4->SetBinContent(21,13.99418);
   4->SetBinContent(22,12.96648);
   4->SetBinContent(23,13.86298);
   4->SetBinContent(24,13.86298);
   4->SetBinContent(25,13.64432);
   4->SetBinContent(26,13.75365);
   4->SetBinContent(27,14.80321);
   4->SetBinContent(28,13.75365);
   4->SetBinContent(29,14.73761);
   4->SetBinContent(30,14.56269);
   4->SetBinContent(31,14.65015);
   4->SetBinContent(32,15.28426);
   4->SetBinContent(33,16.61808);
   4->SetBinContent(34,16.31196);
   4->SetBinContent(35,16.24636);
   4->SetBinContent(36,17.12099);
   4->SetBinContent(37,17.27405);
   4->SetBinContent(38,16.0277);
   4->SetBinContent(39,17.25219);
   4->SetBinContent(40,16.31196);
   4->SetBinContent(41,15.91837);
   4->SetBinContent(42,16.96793);
   4->SetBinContent(43,15.76531);
   4->SetBinContent(44,14.91254);
   4->SetBinContent(45,14.01604);
   4->SetBinContent(46,11.74199);
   4->SetBinContent(47,6.537922);
   4->SetBinContent(48,2.470859);
   4->SetBinContent(49,0.6778461);
   4->SetBinContent(50,0.240526);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,3.142);
   5->SetBinContent(1,1.74462);
   5->SetBinContent(2,5.117557);
   5->SetBinContent(3,9.072036);
   5->SetBinContent(4,12.85205);
   5->SetBinContent(5,16.69021);
   5->SetBinContent(6,19.94679);
   5->SetBinContent(7,23.84305);
   5->SetBinContent(8,31.11219);
   5->SetBinContent(9,30.12359);
   5->SetBinContent(10,31.40296);
   5->SetBinContent(11,35.41564);
   5->SetBinContent(12,36.69505);
   5->SetBinContent(13,39.48649);
   5->SetBinContent(14,39.77727);
   5->SetBinContent(15,40.18435);
   5->SetBinContent(16,41.98716);
   5->SetBinContent(17,43.90628);
   5->SetBinContent(18,44.83676);
   5->SetBinContent(19,43.26657);
   5->SetBinContent(20,44.72045);
   5->SetBinContent(21,46.87218);
   5->SetBinContent(22,46.40694);
   5->SetBinContent(23,49.48916);
   5->SetBinContent(24,47.57005);
   5->SetBinContent(25,50.41964);
   5->SetBinContent(26,50.71042);
   5->SetBinContent(27,49.37285);
   5->SetBinContent(28,54.54865);
   5->SetBinContent(29,53.73448);
   5->SetBinContent(30,56.64223);
   5->SetBinContent(31,58.91028);
   5->SetBinContent(32,58.91028);
   5->SetBinContent(33,63.1556);
   5->SetBinContent(34,61.35279);
   5->SetBinContent(35,65.3654);
   5->SetBinContent(36,62.57405);
   5->SetBinContent(37,64.08607);
   5->SetBinContent(38,64.95834);
   5->SetBinContent(39,74.84406);
   5->SetBinContent(40,73.50658);
   5->SetBinContent(41,72.34355);
   5->SetBinContent(42,69.20338);
   5->SetBinContent(43,69.72675);
   5->SetBinContent(44,70.36641);
   5->SetBinContent(45,63.85346);
   5->SetBinContent(46,54.43234);
   5->SetBinContent(47,34.48516);
   5->SetBinContent(48,16.22499);
   5->SetBinContent(49,2.965855);
   5->SetBinContent(50,1.628312);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,3.142);
   6->SetBinContent(1,99.10862);
   6->SetBinContent(2,283.2919);
   6->SetBinContent(3,442.9196);
   6->SetBinContent(4,603.4244);
   6->SetBinContent(5,756.9125);
   6->SetBinContent(6,1000.739);
   6->SetBinContent(7,1141.948);
   6->SetBinContent(8,1275.264);
   6->SetBinContent(9,1356.832);
   6->SetBinContent(10,1512.951);
   6->SetBinContent(11,1510.32);
   6->SetBinContent(12,1482.254);
   6->SetBinContent(13,1493.656);
   6->SetBinContent(14,1532.247);
   6->SetBinContent(15,1476.114);
   6->SetBinContent(16,1435.769);
   6->SetBinContent(17,1412.965);
   6->SetBinContent(18,1371.742);
   6->SetBinContent(19,1342.799);
   6->SetBinContent(20,1267.37);
   6->SetBinContent(21,1315.609);
   6->SetBinContent(22,1348.061);
   6->SetBinContent(23,1245.443);
   6->SetBinContent(24,1292.805);
   6->SetBinContent(25,1263.862);
   6->SetBinContent(26,1270.001);
   6->SetBinContent(27,1238.427);
   6->SetBinContent(28,1272.633);
   6->SetBinContent(29,1280.526);
   6->SetBinContent(30,1336.659);
   6->SetBinContent(31,1334.028);
   6->SetBinContent(32,1381.39);
   6->SetBinContent(33,1455.941);
   6->SetBinContent(34,1477.868);
   6->SetBinContent(35,1504.181);
   6->SetBinContent(36,1519.091);
   6->SetBinContent(37,1625.217);
   6->SetBinContent(38,1638.373);
   6->SetBinContent(39,1720.818);
   6->SetBinContent(40,1688.366);
   6->SetBinContent(41,1806.771);
   6->SetBinContent(42,1764.672);
   6->SetBinContent(43,1783.968);
   6->SetBinContent(44,1818.173);
   6->SetBinContent(45,1737.483);
   6->SetBinContent(46,1460.327);
   6->SetBinContent(47,1026.175);
   6->SetBinContent(48,556.0623);
   6->SetBinContent(49,125.4206);
   6->SetBinContent(50,36.83682);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,3.142);
   7->SetBinContent(1,8.839357);
   7->SetBinContent(2,25.96561);
   7->SetBinContent(3,49.30703);
   7->SetBinContent(4,66.70952);
   7->SetBinContent(5,75.68699);
   7->SetBinContent(6,103.5862);
   7->SetBinContent(7,115.6022);
   7->SetBinContent(8,139.9111);
   7->SetBinContent(9,144.6073);
   7->SetBinContent(10,157.7289);
   7->SetBinContent(11,168.6406);
   7->SetBinContent(12,178.171);
   7->SetBinContent(13,188.9446);
   7->SetBinContent(14,207.453);
   7->SetBinContent(15,215.1879);
   7->SetBinContent(16,214.3591);
   7->SetBinContent(17,219.3316);
   7->SetBinContent(18,223.3371);
   7->SetBinContent(19,221.8178);
   7->SetBinContent(20,228.0333);
   7->SetBinContent(21,242.8124);
   7->SetBinContent(22,245.0224);
   7->SetBinContent(23,248.6135);
   7->SetBinContent(24,251.5141);
   7->SetBinContent(25,264.7739);
   7->SetBinContent(26,269.6082);
   7->SetBinContent(27,266.8457);
   7->SetBinContent(28,272.3706);
   7->SetBinContent(29,282.8679);
   7->SetBinContent(30,296.8183);
   7->SetBinContent(31,317.3986);
   7->SetBinContent(32,305.1057);
   7->SetBinContent(33,320.0229);
   7->SetBinContent(34,338.6694);
   7->SetBinContent(35,339.9125);
   7->SetBinContent(36,380.5206);
   7->SetBinContent(37,373.2001);
   7->SetBinContent(38,400.8246);
   7->SetBinContent(39,419.8855);
   7->SetBinContent(40,429.2778);
   7->SetBinContent(41,452.7587);
   7->SetBinContent(42,475.687);
   7->SetBinContent(43,500.9634);
   7->SetBinContent(44,519.8862);
   7->SetBinContent(45,546.682);
   7->SetBinContent(46,520.8531);
   7->SetBinContent(47,397.2334);
   7->SetBinContent(48,165.6019);
   7->SetBinContent(49,33.14759);
   7->SetBinContent(50,11.32543);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,3.142);
   8->SetBinContent(2,5.54328);
   8->SetBinContent(3,12.01044);
   8->SetBinContent(4,12.93432);
   8->SetBinContent(5,12.01044);
   8->SetBinContent(6,15.70596);
   8->SetBinContent(7,15.70596);
   8->SetBinContent(8,19.40148);
   8->SetBinContent(9,20.32536);
   8->SetBinContent(10,26.79251);
   8->SetBinContent(11,27.71639);
   8->SetBinContent(12,24.02087);
   8->SetBinContent(13,36.9552);
   8->SetBinContent(14,22.17311);
   8->SetBinContent(15,21.24924);
   8->SetBinContent(16,24.94475);
   8->SetBinContent(17,29.56415);
   8->SetBinContent(18,29.56415);
   8->SetBinContent(19,32.33579);
   8->SetBinContent(20,24.94475);
   8->SetBinContent(21,12.01044);
   8->SetBinContent(22,23.09699);
   8->SetBinContent(23,30.48803);
   8->SetBinContent(24,31.41191);
   8->SetBinContent(25,25.86863);
   8->SetBinContent(26,21.24924);
   8->SetBinContent(27,13.8582);
   8->SetBinContent(28,36.9552);
   8->SetBinContent(29,35.10744);
   8->SetBinContent(30,30.48803);
   8->SetBinContent(31,26.79251);
   8->SetBinContent(32,26.79251);
   8->SetBinContent(33,25.86863);
   8->SetBinContent(34,36.03132);
   8->SetBinContent(35,36.9552);
   8->SetBinContent(36,44.34625);
   8->SetBinContent(37,45.27013);
   8->SetBinContent(38,48.96566);
   8->SetBinContent(39,58.20448);
   8->SetBinContent(40,69.29105);
   8->SetBinContent(41,67.44329);
   8->SetBinContent(42,71.13882);
   8->SetBinContent(43,93.31197);
   8->SetBinContent(44,132.115);
   8->SetBinContent(45,156.1357);
   8->SetBinContent(46,189.3951);
   8->SetBinContent(47,157.0596);
   8->SetBinContent(48,86.8448);
   8->SetBinContent(49,9.2388);
   8->SetBinContent(50,4.6194);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,3.142);
   9->SetBinContent(1,7.033023);
   9->SetBinContent(2,19.78037);
   9->SetBinContent(3,30.76947);
   9->SetBinContent(4,42.63769);
   9->SetBinContent(5,48.79158);
   9->SetBinContent(6,65.93459);
   9->SetBinContent(7,87.03383);
   9->SetBinContent(8,99.34172);
   9->SetBinContent(9,110.3309);
   9->SetBinContent(10,115.1662);
   9->SetBinContent(11,129.6719);
   9->SetBinContent(12,127.9136);
   9->SetBinContent(13,136.7048);
   9->SetBinContent(14,134.507);
   9->SetBinContent(15,132.7488);
   9->SetBinContent(16,155.1663);
   9->SetBinContent(17,148.5729);
   9->SetBinContent(18,152.9685);
   9->SetBinContent(19,156.9246);
   9->SetBinContent(20,168.7927);
   9->SetBinContent(21,171.4301);
   9->SetBinContent(22,175.8257);
   9->SetBinContent(23,188.1333);
   9->SetBinContent(24,192.9685);
   9->SetBinContent(25,194.2872);
   9->SetBinContent(26,215.386);
   9->SetBinContent(27,210.9904);
   9->SetBinContent(28,236.0454);
   9->SetBinContent(29,254.9464);
   9->SetBinContent(30,257.5839);
   9->SetBinContent(31,293.1895);
   9->SetBinContent(32,336.2678);
   9->SetBinContent(33,305.9371);
   9->SetBinContent(34,368.3568);
   9->SetBinContent(35,394.2917);
   9->SetBinContent(36,407.479);
   9->SetBinContent(37,460.228);
   9->SetBinContent(38,494.9545);
   9->SetBinContent(39,557.3741);
   9->SetBinContent(40,577.5946);
   9->SetBinContent(41,681.3344);
   9->SetBinContent(42,729.248);
   9->SetBinContent(43,812.7673);
   9->SetBinContent(44,878.264);
   9->SetBinContent(45,981.1246);
   9->SetBinContent(46,1033.874);
   9->SetBinContent(47,994.3119);
   9->SetBinContent(48,724.4127);
   9->SetBinContent(49,225.9355);
   9->SetBinContent(50,42.63769);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,3.142);
   10->SetBinContent(1,146.7361);
   10->SetBinContent(2,466.6964);
   10->SetBinContent(3,755.7962);
   10->SetBinContent(4,1058.288);
   10->SetBinContent(5,1370.679);
   10->SetBinContent(6,1653.665);
   10->SetBinContent(7,1892.398);
   10->SetBinContent(8,2234.854);
   10->SetBinContent(9,2436.115);
   10->SetBinContent(10,2619.608);
   10->SetBinContent(11,2802.519);
   10->SetBinContent(12,2948.732);
   10->SetBinContent(13,2999.12);
   10->SetBinContent(14,3064.071);
   10->SetBinContent(15,3075.43);
   10->SetBinContent(16,3160.769);
   10->SetBinContent(17,3151.448);
   10->SetBinContent(18,3230.962);
   10->SetBinContent(19,3196.302);
   10->SetBinContent(20,3154.944);
   10->SetBinContent(21,3198.924);
   10->SetBinContent(22,3200.963);
   10->SetBinContent(23,3213.778);
   10->SetBinContent(24,3241.156);
   10->SetBinContent(25,3238.535);
   10->SetBinContent(26,3320.379);
   10->SetBinContent(27,3337.855);
   10->SetBinContent(28,3465.135);
   10->SetBinContent(29,3437.466);
   10->SetBinContent(30,3533.873);
   10->SetBinContent(31,3616.008);
   10->SetBinContent(32,3702.512);
   10->SetBinContent(33,3845.521);
   10->SetBinContent(34,3858.045);
   10->SetBinContent(35,3956.49);
   10->SetBinContent(36,4120.74);
   10->SetBinContent(37,4226.961);
   10->SetBinContent(38,4257.809);
   10->SetBinContent(39,4449.588);
   10->SetBinContent(40,4549.697);
   10->SetBinContent(41,4539.803);
   10->SetBinContent(42,4576.762);
   10->SetBinContent(43,4607.318);
   10->SetBinContent(44,4526.707);
   10->SetBinContent(45,4402.443);
   10->SetBinContent(46,4058.14);
   10->SetBinContent(47,3397.563);
   10->SetBinContent(48,1980.03);
   10->SetBinContent(49,401.1905);
   10->SetBinContent(50,80.35547);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,3.142);
   11->SetBinContent(2,183.125);
   11->SetBinContent(3,274.6875);
   11->SetBinContent(4,244.1666);
   11->SetBinContent(5,488.3334);
   11->SetBinContent(6,396.7708);
   11->SetBinContent(7,549.375);
   11->SetBinContent(8,305.2083);
   11->SetBinContent(9,610.4166);
   11->SetBinContent(10,579.8958);
   11->SetBinContent(11,457.8125);
   11->SetBinContent(12,732.4999);
   11->SetBinContent(13,701.9791);
   11->SetBinContent(14,732.4999);
   11->SetBinContent(15,640.9374);
   11->SetBinContent(16,671.4583);
   11->SetBinContent(17,671.4583);
   11->SetBinContent(18,885.1039);
   11->SetBinContent(19,518.8542);
   11->SetBinContent(20,366.25);
   11->SetBinContent(21,763.0207);
   11->SetBinContent(22,824.0623);
   11->SetBinContent(23,763.0207);
   11->SetBinContent(24,793.5415);
   11->SetBinContent(25,488.3334);
   11->SetBinContent(26,793.5415);
   11->SetBinContent(27,549.375);
   11->SetBinContent(28,457.8125);
   11->SetBinContent(29,610.4166);
   11->SetBinContent(30,610.4166);
   11->SetBinContent(31,946.1456);
   11->SetBinContent(32,854.5831);
   11->SetBinContent(33,671.4583);
   11->SetBinContent(34,824.0623);
   11->SetBinContent(35,579.8958);
   11->SetBinContent(36,854.5831);
   11->SetBinContent(37,1068.229);
   11->SetBinContent(38,976.6664);
   11->SetBinContent(39,701.9791);
   11->SetBinContent(40,1129.271);
   11->SetBinContent(41,915.6248);
   11->SetBinContent(42,1190.312);
   11->SetBinContent(43,763.0207);
   11->SetBinContent(44,946.1456);
   11->SetBinContent(45,1007.187);
   11->SetBinContent(46,885.1039);
   11->SetBinContent(47,701.9791);
   11->SetBinContent(48,305.2083);
   11->SetBinContent(49,152.6042);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,3.142);
   12->SetBinContent(1,24.3425);
   12->SetBinContent(2,65.86802);
   12->SetBinContent(3,117.417);
   12->SetBinContent(4,161.8063);
   12->SetBinContent(5,205.4798);
   12->SetBinContent(6,246.2893);
   12->SetBinContent(7,287.0983);
   12->SetBinContent(8,316.4519);
   12->SetBinContent(9,282.8026);
   12->SetBinContent(10,337.9302);
   12->SetBinContent(11,309.2925);
   12->SetBinContent(12,297.8374);
   12->SetBinContent(13,279.2229);
   12->SetBinContent(14,274.9272);
   12->SetBinContent(15,244.8574);
   12->SetBinContent(16,247.0053);
   12->SetBinContent(17,243.4255);
   12->SetBinContent(18,232.6861);
   12->SetBinContent(19,237.6978);
   12->SetBinContent(20,203.3319);
   12->SetBinContent(21,196.1723);
   12->SetBinContent(22,184.717);
   12->SetBinContent(23,181.8531);
   12->SetBinContent(24,174.6936);
   12->SetBinContent(25,180.4212);
   12->SetBinContent(26,202.6159);
   12->SetBinContent(27,210.4915);
   12->SetBinContent(28,214.0712);
   12->SetBinContent(29,208.3436);
   12->SetBinContent(30,203.3319);
   12->SetBinContent(31,226.9585);
   12->SetBinContent(32,236.2659);
   12->SetBinContent(33,268.4838);
   12->SetBinContent(34,262.0403);
   12->SetBinContent(35,303.5649);
   12->SetBinContent(36,324.3273);
   12->SetBinContent(37,334.3505);
   12->SetBinContent(38,393.0577);
   12->SetBinContent(39,413.1041);
   12->SetBinContent(40,421.6954);
   12->SetBinContent(41,461.0723);
   12->SetBinContent(42,472.5273);
   12->SetBinContent(43,531.9506);
   12->SetBinContent(44,591.3738);
   12->SetBinContent(45,662.2521);
   12->SetBinContent(46,745.3014);
   12->SetBinContent(47,824.0551);
   12->SetBinContent(48,991.5856);
   12->SetBinContent(49,453.9128);
   12->SetBinContent(50,90.21058);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,3.142);
   13->SetBinContent(1,468.0992);
   13->SetBinContent(2,2080.44);
   13->SetBinContent(3,3640.77);
   13->SetBinContent(4,4056.858);
   13->SetBinContent(5,4837.026);
   13->SetBinContent(6,6501.386);
   13->SetBinContent(7,7697.644);
   13->SetBinContent(8,7437.588);
   13->SetBinContent(9,7801.667);
   13->SetBinContent(10,8373.788);
   13->SetBinContent(11,9257.971);
   13->SetBinContent(12,9882.1);
   13->SetBinContent(13,9570.035);
   13->SetBinContent(14,8893.896);
   13->SetBinContent(15,9466.014);
   13->SetBinContent(16,8113.734);
   13->SetBinContent(17,9049.928);
   13->SetBinContent(18,8581.831);
   13->SetBinContent(19,7645.633);
   13->SetBinContent(20,9309.981);
   13->SetBinContent(21,8165.745);
   13->SetBinContent(22,7229.543);
   13->SetBinContent(23,7177.532);
   13->SetBinContent(24,7281.554);
   13->SetBinContent(25,5617.195);
   13->SetBinContent(26,5617.195);
   13->SetBinContent(27,6813.453);
   13->SetBinContent(28,6917.476);
   13->SetBinContent(29,7125.521);
   13->SetBinContent(30,7229.543);
   13->SetBinContent(31,8269.767);
   13->SetBinContent(32,8633.842);
   13->SetBinContent(33,8165.745);
   13->SetBinContent(34,7957.7);
   13->SetBinContent(35,9309.981);
   13->SetBinContent(36,9466.014);
   13->SetBinContent(37,10766.28);
   13->SetBinContent(38,9466.014);
   13->SetBinContent(39,10558.24);
   13->SetBinContent(40,10818.29);
   13->SetBinContent(41,11754.49);
   13->SetBinContent(42,10818.29);
   13->SetBinContent(43,9726.067);
   13->SetBinContent(44,10402.21);
   13->SetBinContent(45,10350.2);
   13->SetBinContent(46,8477.81);
   13->SetBinContent(47,6657.419);
   13->SetBinContent(48,2964.627);
   13->SetBinContent(49,676.1434);
   13->SetBinContent(50,520.1102);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,3.142);
   14->SetBinContent(1,231.3644);
   14->SetBinContent(2,675.5841);
   14->SetBinContent(3,1388.184);
   14->SetBinContent(4,1915.692);
   14->SetBinContent(5,2045.255);
   14->SetBinContent(6,2156.311);
   14->SetBinContent(7,2572.769);
   14->SetBinContent(8,3313.14);
   14->SetBinContent(9,2711.589);
   14->SetBinContent(10,3007.737);
   14->SetBinContent(11,3192.83);
   14->SetBinContent(12,3331.65);
   14->SetBinContent(13,3387.177);
   14->SetBinContent(14,3174.321);
   14->SetBinContent(15,2591.279);
   14->SetBinContent(16,2452.459);
   14->SetBinContent(17,2313.639);
   14->SetBinContent(18,2507.987);
   14->SetBinContent(19,2341.403);
   14->SetBinContent(20,1887.928);
   14->SetBinContent(21,2165.565);
   14->SetBinContent(22,2082.273);
   14->SetBinContent(23,1850.91);
   14->SetBinContent(24,1860.165);
   14->SetBinContent(25,1758.365);
   14->SetBinContent(26,1341.912);
   14->SetBinContent(27,1786.128);
   14->SetBinContent(28,1638.056);
   14->SetBinContent(29,1508.493);
   14->SetBinContent(30,1351.166);
   14->SetBinContent(31,1378.93);
   14->SetBinContent(32,1489.984);
   14->SetBinContent(33,1295.639);
   14->SetBinContent(34,1434.457);
   14->SetBinContent(35,1221.603);
   14->SetBinContent(36,1184.585);
   14->SetBinContent(37,1156.821);
   14->SetBinContent(38,1008.749);
   14->SetBinContent(39,1267.875);
   14->SetBinContent(40,1193.839);
   14->SetBinContent(41,990.2397);
   14->SetBinContent(42,990.2397);
   14->SetBinContent(43,1082.785);
   14->SetBinContent(44,953.2214);
   14->SetBinContent(45,768.1299);
   14->SetBinContent(46,620.0566);
   14->SetBinContent(47,296.1465);
   14->SetBinContent(48,111.0549);
   14->SetBinContent(50,9.254577);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,3.142);
   15->SetBinContent(1,112.187);
   15->SetBinContent(2,252.4208);
   15->SetBinContent(3,280.4676);
   15->SetBinContent(4,364.6078);
   15->SetBinContent(5,588.9819);
   15->SetBinContent(6,729.2156);
   15->SetBinContent(7,953.5897);
   15->SetBinContent(8,701.1689);
   15->SetBinContent(9,953.5897);
   15->SetBinContent(10,953.5897);
   15->SetBinContent(11,925.5429);
   15->SetBinContent(12,869.4494);
   15->SetBinContent(13,953.5897);
   15->SetBinContent(14,1009.683);
   15->SetBinContent(15,1177.964);
   15->SetBinContent(16,953.5897);
   15->SetBinContent(17,757.2624);
   15->SetBinContent(18,673.1221);
   15->SetBinContent(19,981.6364);
   15->SetBinContent(20,504.8416);
   15->SetBinContent(21,560.9351);
   15->SetBinContent(22,448.7481);
   15->SetBinContent(23,588.9819);
   15->SetBinContent(24,645.0754);
   15->SetBinContent(25,336.5611);
   15->SetBinContent(26,588.9819);
   15->SetBinContent(27,420.7013);
   15->SetBinContent(28,532.8884);
   15->SetBinContent(29,588.9819);
   15->SetBinContent(30,364.6078);
   15->SetBinContent(31,588.9819);
   15->SetBinContent(32,729.2156);
   15->SetBinContent(33,504.8416);
   15->SetBinContent(34,673.1221);
   15->SetBinContent(35,280.4676);
   15->SetBinContent(36,729.2156);
   15->SetBinContent(37,336.5611);
   15->SetBinContent(38,645.0754);
   15->SetBinContent(39,532.8884);
   15->SetBinContent(40,560.9351);
   15->SetBinContent(41,308.5143);
   15->SetBinContent(42,364.6078);
   15->SetBinContent(43,308.5143);
   15->SetBinContent(44,448.7481);
   15->SetBinContent(45,392.6546);
   15->SetBinContent(46,168.2805);
   15->SetBinContent(47,84.14027);
   15->SetBinContent(48,56.09351);
   15->SetBinContent(49,28.04676);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,3.142);
   16->SetBinContent(1,42.47915);
   16->SetBinContent(2,63.71873);
   16->SetBinContent(3,223.0155);
   16->SetBinContent(4,276.1144);
   16->SetBinContent(5,276.1144);
   16->SetBinContent(6,201.7759);
   16->SetBinContent(7,414.1716);
   16->SetBinContent(8,446.0309);
   16->SetBinContent(9,435.4111);
   16->SetBinContent(10,509.7496);
   16->SetBinContent(11,414.1716);
   16->SetBinContent(12,446.0309);
   16->SetBinContent(13,361.0727);
   16->SetBinContent(14,361.0727);
   16->SetBinContent(15,329.2133);
   16->SetBinContent(16,318.5935);
   16->SetBinContent(17,350.4529);
   16->SetBinContent(18,361.0727);
   16->SetBinContent(19,276.1144);
   16->SetBinContent(20,244.2551);
   16->SetBinContent(21,307.9738);
   16->SetBinContent(22,339.8331);
   16->SetBinContent(23,297.354);
   16->SetBinContent(24,244.2551);
   16->SetBinContent(25,191.1562);
   16->SetBinContent(26,191.1562);
   16->SetBinContent(27,159.2968);
   16->SetBinContent(28,180.5364);
   16->SetBinContent(29,180.5364);
   16->SetBinContent(30,223.0155);
   16->SetBinContent(31,127.4375);
   16->SetBinContent(32,138.0573);
   16->SetBinContent(33,169.9166);
   16->SetBinContent(34,318.5935);
   16->SetBinContent(35,106.1979);
   16->SetBinContent(36,339.8331);
   16->SetBinContent(37,265.4946);
   16->SetBinContent(38,265.4946);
   16->SetBinContent(39,297.354);
   16->SetBinContent(40,233.6353);
   16->SetBinContent(41,371.6924);
   16->SetBinContent(42,254.8748);
   16->SetBinContent(43,371.6924);
   16->SetBinContent(44,297.354);
   16->SetBinContent(45,244.2551);
   16->SetBinContent(46,233.6353);
   16->SetBinContent(47,191.1562);
   16->SetBinContent(48,84.95831);
   16->SetBinContent(49,31.85936);
   16->SetBinContent(50,21.23957);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,3.142);
   17->SetBinContent(1,425.7439);
   17->SetBinContent(2,851.4879);
   17->SetBinContent(3,547.3851);
   17->SetBinContent(4,1581.335);
   17->SetBinContent(5,2189.54);
   17->SetBinContent(6,1946.258);
   17->SetBinContent(7,2797.746);
   17->SetBinContent(8,2615.284);
   17->SetBinContent(9,4074.978);
   17->SetBinContent(10,4135.798);
   17->SetBinContent(11,3284.31);
   17->SetBinContent(12,2736.925);
   17->SetBinContent(13,1946.258);
   17->SetBinContent(14,2676.105);
   17->SetBinContent(15,2797.746);
   17->SetBinContent(16,1946.258);
   17->SetBinContent(17,1702.976);
   17->SetBinContent(18,1702.976);
   17->SetBinContent(19,2007.078);
   17->SetBinContent(20,1033.95);
   17->SetBinContent(21,2007.078);
   17->SetBinContent(22,1033.95);
   17->SetBinContent(23,1520.514);
   17->SetBinContent(24,912.3084);
   17->SetBinContent(25,1155.591);
   17->SetBinContent(26,1155.591);
   17->SetBinContent(27,973.129);
   17->SetBinContent(28,729.8467);
   17->SetBinContent(29,912.3084);
   17->SetBinContent(30,1459.693);
   17->SetBinContent(31,912.3084);
   17->SetBinContent(32,1155.591);
   17->SetBinContent(33,912.3084);
   17->SetBinContent(34,1642.155);
   17->SetBinContent(35,1398.873);
   17->SetBinContent(36,1094.77);
   17->SetBinContent(37,973.129);
   17->SetBinContent(38,1398.873);
   17->SetBinContent(39,1398.873);
   17->SetBinContent(40,1338.052);
   17->SetBinContent(41,1763.796);
   17->SetBinContent(42,1642.155);
   17->SetBinContent(43,1581.335);
   17->SetBinContent(44,1824.617);
   17->SetBinContent(45,1398.873);
   17->SetBinContent(46,1277.232);
   17->SetBinContent(47,1398.873);
   17->SetBinContent(48,1277.232);
   17->SetBinContent(49,790.6673);
   17->SetBinContent(50,669.0262);
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
