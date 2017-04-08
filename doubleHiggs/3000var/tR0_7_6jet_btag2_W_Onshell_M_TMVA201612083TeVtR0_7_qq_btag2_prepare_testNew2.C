{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:40:47 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-53.96825,-3.262061,263.4921,5.987776);
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
   THStack_stack_3->SetMinimum(0.02528773);
   THStack_stack_3->SetMaximum(176925);
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
   0->SetBinContent(4,0.019798);
   0->SetBinContent(5,0.049495);
   0->SetBinContent(6,0.108889);
   0->SetBinContent(7,0.247475);
   0->SetBinContent(8,0.326667);
   0->SetBinContent(9,0.4553539);
   0->SetBinContent(10,0.9701028);
   0->SetBinContent(11,1.623438);
   0->SetBinContent(12,2.157983);
   0->SetBinContent(13,2.811311);
   0->SetBinContent(14,3.781403);
   0->SetBinContent(15,5.335563);
   0->SetBinContent(16,6.662047);
   0->SetBinContent(17,8.305305);
   0->SetBinContent(18,10.00796);
   0->SetBinContent(19,11.69081);
   0->SetBinContent(20,13.69044);
   0->SetBinContent(21,10.99787);
   0->SetBinContent(22,5.781024);
   0->SetBinContent(23,2.751917);
   0->SetBinContent(24,1.267073);
   0->SetBinContent(25,0.6236371);
   0->SetBinContent(26,0.267273);
   0->SetBinContent(27,0.05939399);
   0->SetBinContent(28,0.039596);
   0->SetBinContent(29,0.009899);
   0->SetBinContent(30,0.029697);
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
   1->SetBinContent(3,0.024745);
   1->SetBinContent(4,0.069286);
   1->SetBinContent(5,0.1534191);
   1->SetBinContent(6,0.2227051);
   1->SetBinContent(7,0.2771441);
   1->SetBinContent(8,0.4206652);
   1->SetBinContent(9,0.6186247);
   1->SetBinContent(10,0.8611244);
   1->SetBinContent(11,1.202604);
   1->SetBinContent(12,1.529236);
   1->SetBinContent(13,2.063726);
   1->SetBinContent(14,2.959512);
   1->SetBinContent(15,3.632589);
   1->SetBinContent(16,4.290818);
   1->SetBinContent(17,5.508295);
   1->SetBinContent(18,7.106852);
   1->SetBinContent(19,7.82942);
   1->SetBinContent(20,9.03195);
   1->SetBinContent(21,7.834369);
   1->SetBinContent(22,4.894608);
   1->SetBinContent(23,2.939716);
   1->SetBinContent(24,1.722246);
   1->SetBinContent(25,0.7819408);
   1->SetBinContent(26,0.3860222);
   1->SetBinContent(27,0.128674);
   1->SetBinContent(28,0.069286);
   1->SetBinContent(29,0.054439);
   1->SetBinContent(30,0.004949);
   1->SetBinContent(31,0.009898);
   1->SetBinContent(32,0.004949);
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
   2->SetBinContent(2,0.004949);
   2->SetBinContent(3,0.064337);
   2->SetBinContent(4,0.1484701);
   2->SetBinContent(5,0.2820931);
   2->SetBinContent(6,0.569135);
   2->SetBinContent(7,0.6829613);
   2->SetBinContent(8,1.034338);
   2->SetBinContent(9,1.385716);
   2->SetBinContent(10,1.816276);
   2->SetBinContent(11,2.583381);
   2->SetBinContent(12,3.157476);
   2->SetBinContent(13,4.582815);
   2->SetBinContent(14,5.889375);
   2->SetBinContent(15,7.507729);
   2->SetBinContent(16,8.898337);
   2->SetBinContent(17,11.62997);
   2->SetBinContent(18,13.58963);
   2->SetBinContent(19,15.67299);
   2->SetBinContent(20,17.1578);
   2->SetBinContent(21,15.45525);
   2->SetBinContent(22,10.07116);
   2->SetBinContent(23,5.661717);
   2->SetBinContent(24,3.350491);
   2->SetBinContent(25,1.766787);
   2->SetBinContent(26,0.9452569);
   2->SetBinContent(27,0.3959202);
   2->SetBinContent(28,0.2227051);
   2->SetBinContent(29,0.108878);
   2->SetBinContent(30,0.024745);
   2->SetBinContent(31,0.029694);
   2->SetBinContent(32,0.014847);
   2->SetBinContent(33,0.009898);
   2->SetBinContent(34,0.009898);
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
   3->SetBinContent(3,0.06753);
   3->SetBinContent(4,0.5402399);
   3->SetBinContent(5,0.9454201);
   3->SetBinContent(6,1.28307);
   3->SetBinContent(7,2.464845);
   3->SetBinContent(8,3.714153);
   3->SetBinContent(9,6.077693);
   3->SetBinContent(10,9.386648);
   3->SetBinContent(11,12.22289);
   3->SetBinContent(12,15.16044);
   3->SetBinContent(13,21.67721);
   3->SetBinContent(14,26.91091);
   3->SetBinContent(15,35.85862);
   3->SetBinContent(16,43.86066);
   3->SetBinContent(17,51.39001);
   3->SetBinContent(18,61.5867);
   3->SetBinContent(19,67.63085);
   3->SetBinContent(20,70.33227);
   3->SetBinContent(21,60.77637);
   3->SetBinContent(22,35.25087);
   3->SetBinContent(23,20.56294);
   3->SetBinContent(24,9.926886);
   3->SetBinContent(25,5.098513);
   3->SetBinContent(26,2.56614);
   3->SetBinContent(27,1.181775);
   3->SetBinContent(28,0.60777);
   3->SetBinContent(29,0.236355);
   3->SetBinContent(30,0.168825);
   3->SetBinContent(31,0.033765);
   3->SetBinContent(32,0.033765);
   3->SetBinContent(34,0.033765);
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
   4->SetBinContent(2,0.153062);
   4->SetBinContent(3,0.590382);
   4->SetBinContent(4,1.42129);
   4->SetBinContent(5,2.711385);
   4->SetBinContent(6,4.132679);
   4->SetBinContent(7,4.569996);
   4->SetBinContent(8,6.319264);
   4->SetBinContent(9,6.319264);
   4->SetBinContent(10,9.883397);
   4->SetBinContent(11,13.92858);
   4->SetBinContent(12,17.14286);
   4->SetBinContent(13,22.47812);
   4->SetBinContent(14,27.52913);
   4->SetBinContent(15,35.42271);
   4->SetBinContent(16,43.33814);
   4->SetBinContent(17,52.58739);
   4->SetBinContent(18,58.68797);
   4->SetBinContent(19,64.70107);
   4->SetBinContent(20,71.17336);
   4->SetBinContent(21,63.19233);
   4->SetBinContent(22,40.32066);
   4->SetBinContent(23,23.70261);
   4->SetBinContent(24,11.4796);
   4->SetBinContent(25,5.553959);
   4->SetBinContent(26,2.427126);
   4->SetBinContent(27,1.180764);
   4->SetBinContent(28,0.6778461);
   4->SetBinContent(29,0.240526);
   4->SetBinContent(30,0.087464);
   4->SetBinContent(31,0.021866);
   4->SetBinContent(32,0.043732);
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
   5->SetBinContent(2,0.058154);
   5->SetBinContent(3,0.6396939);
   5->SetBinContent(4,1.628312);
   5->SetBinContent(5,2.558777);
   5->SetBinContent(6,4.59417);
   5->SetBinContent(7,5.524636);
   5->SetBinContent(8,9.13019);
   5->SetBinContent(9,14.88745);
   5->SetBinContent(10,18.55111);
   5->SetBinContent(11,32.15895);
   5->SetBinContent(12,46.23248);
   5->SetBinContent(13,68.15666);
   5->SetBinContent(14,94.61548);
   5->SetBinContent(15,125.7264);
   5->SetBinContent(16,164.1062);
   5->SetBinContent(17,201.4393);
   5->SetBinContent(18,236.8534);
   5->SetBinContent(19,266.4551);
   5->SetBinContent(20,295.8874);
   5->SetBinContent(21,261.4528);
   5->SetBinContent(22,159.5123);
   5->SetBinContent(23,101.6518);
   5->SetBinContent(24,49.9544);
   5->SetBinContent(25,20.23755);
   5->SetBinContent(26,8.548649);
   5->SetBinContent(27,5.466482);
   5->SetBinContent(28,2.616931);
   5->SetBinContent(29,0.9304639);
   5->SetBinContent(30,0.5815399);
   5->SetBinContent(31,0.29077);
   5->SetBinContent(32,0.174462);
   5->SetBinContent(33,0.174462);
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
   6->SetBinContent(2,7.893603);
   6->SetBinContent(3,35.08269);
   6->SetBinContent(4,86.82967);
   6->SetBinContent(5,182.4296);
   6->SetBinContent(6,256.1026);
   6->SetBinContent(7,460.4611);
   6->SetBinContent(8,577.1121);
   6->SetBinContent(9,765.6833);
   6->SetBinContent(10,1145.457);
   6->SetBinContent(11,1697.137);
   6->SetBinContent(12,2224.235);
   6->SetBinContent(13,2959.122);
   6->SetBinContent(14,3645.776);
   6->SetBinContent(15,4396.448);
   6->SetBinContent(16,5037.5);
   6->SetBinContent(17,5550.518);
   6->SetBinContent(18,6019.688);
   6->SetBinContent(19,6599.354);
   6->SetBinContent(20,7161.481);
   6->SetBinContent(21,6071.428);
   6->SetBinContent(22,3726.456);
   6->SetBinContent(23,2087.43);
   6->SetBinContent(24,1185.802);
   6->SetBinContent(25,654.2947);
   6->SetBinContent(26,296.4481);
   6->SetBinContent(27,141.2077);
   6->SetBinContent(28,79.81313);
   6->SetBinContent(29,36.83682);
   6->SetBinContent(30,15.7872);
   6->SetBinContent(31,11.40187);
   6->SetBinContent(32,2.631201);
   6->SetBinContent(34,0.877067);
   6->SetBinContent(35,0.877067);
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
   7->SetBinContent(2,0.138115);
   7->SetBinContent(3,1.519265);
   7->SetBinContent(4,7.458208);
   7->SetBinContent(5,10.08239);
   7->SetBinContent(6,21.54593);
   7->SetBinContent(7,31.35209);
   7->SetBinContent(8,49.44515);
   7->SetBinContent(9,88.39356);
   7->SetBinContent(10,128.3088);
   7->SetBinContent(11,208.558);
   7->SetBinContent(12,331.6252);
   7->SetBinContent(13,478.4495);
   7->SetBinContent(14,658.8375);
   7->SetBinContent(15,842.9549);
   7->SetBinContent(16,1048.609);
   7->SetBinContent(17,1231.54);
   7->SetBinContent(18,1378.299);
   7->SetBinContent(19,1489.439);
   7->SetBinContent(20,1606.929);
   7->SetBinContent(21,1393.072);
   7->SetBinContent(22,865.7451);
   7->SetBinContent(23,511.737);
   7->SetBinContent(24,248.3373);
   7->SetBinContent(25,116.569);
   7->SetBinContent(26,51.65499);
   7->SetBinContent(27,22.92708);
   7->SetBinContent(28,9.944277);
   7->SetBinContent(29,5.386484);
   7->SetBinContent(30,1.795495);
   7->SetBinContent(31,1.243035);
   7->SetBinContent(32,0.55246);
   7->SetBinContent(33,0.27623);
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
   8->SetBinContent(4,0.92388);
   8->SetBinContent(5,5.54328);
   8->SetBinContent(6,0.92388);
   8->SetBinContent(7,5.54328);
   8->SetBinContent(8,7.39104);
   8->SetBinContent(9,14.78208);
   8->SetBinContent(10,25.86863);
   8->SetBinContent(11,44.34625);
   8->SetBinContent(12,79.45375);
   8->SetBinContent(13,88.69257);
   8->SetBinContent(14,117.3329);
   8->SetBinContent(15,169.0699);
   8->SetBinContent(16,170.9177);
   8->SetBinContent(17,178.3087);
   8->SetBinContent(18,218.0352);
   8->SetBinContent(19,198.6339);
   8->SetBinContent(20,268.8485);
   8->SetBinContent(21,225.4262);
   8->SetBinContent(22,111.7896);
   8->SetBinContent(23,52.66119);
   8->SetBinContent(24,37.87908);
   8->SetBinContent(25,16.62984);
   8->SetBinContent(26,12.01044);
   8->SetBinContent(27,5.54328);
   8->SetBinContent(28,1.84776);
   8->SetBinContent(29,0.92388);
   8->SetBinContent(30,0.92388);
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
   9->SetBinContent(2,1.318692);
   9->SetBinContent(3,3.516512);
   9->SetBinContent(4,5.274768);
   9->SetBinContent(5,15.38473);
   9->SetBinContent(6,21.09906);
   9->SetBinContent(7,39.12118);
   9->SetBinContent(8,54.06635);
   9->SetBinContent(9,91.4295);
   9->SetBinContent(10,138.4631);
   9->SetBinContent(11,193.8476);
   9->SetBinContent(12,267.2545);
   9->SetBinContent(13,381.1045);
   9->SetBinContent(14,494.5149);
   9->SetBinContent(15,670.7845);
   9->SetBinContent(16,895.847);
   9->SetBinContent(17,1122.668);
   9->SetBinContent(18,1418.942);
   9->SetBinContent(19,1812.801);
   9->SetBinContent(20,2463.696);
   9->SetBinContent(21,2327.466);
   9->SetBinContent(22,1324.872);
   9->SetBinContent(23,705.0714);
   9->SetBinContent(24,402.2041);
   9->SetBinContent(25,210.9904);
   9->SetBinContent(26,126.1553);
   9->SetBinContent(27,73.40723);
   9->SetBinContent(28,48.35202);
   9->SetBinContent(29,32.08816);
   9->SetBinContent(30,23.29688);
   9->SetBinContent(31,18.46168);
   9->SetBinContent(32,15.38473);
   9->SetBinContent(33,10.9891);
   9->SetBinContent(34,10.10997);
   9->SetBinContent(35,4.39564);
   9->SetBinContent(36,6.593459);
   9->SetBinContent(37,4.39564);
   9->SetBinContent(38,4.835204);
   9->SetBinContent(39,4.39564);
   9->SetBinContent(40,3.076948);
   9->SetBinContent(41,4.835204);
   9->SetBinContent(42,3.076948);
   9->SetBinContent(43,3.076948);
   9->SetBinContent(44,3.516512);
   9->SetBinContent(45,1.758256);
   9->SetBinContent(46,0.879128);
   9->SetBinContent(47,0.439564);
   9->SetBinContent(48,1.318692);
   9->SetBinContent(49,1.318692);
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
   10->SetBinContent(2,6.405145);
   10->SetBinContent(3,56.77279);
   10->SetBinContent(4,173.2296);
   10->SetBinContent(5,376.4438);
   10->SetBinContent(6,655.936);
   10->SetBinContent(7,1017.529);
   10->SetBinContent(8,1575.058);
   10->SetBinContent(9,2319.611);
   10->SetBinContent(10,3249.021);
   10->SetBinContent(11,4550.861);
   10->SetBinContent(12,6186.369);
   10->SetBinContent(13,7833.227);
   10->SetBinContent(14,9369.789);
   10->SetBinContent(15,11040.8);
   10->SetBinContent(16,12227.27);
   10->SetBinContent(17,13253.39);
   10->SetBinContent(18,14308.91);
   10->SetBinContent(19,15434.26);
   10->SetBinContent(20,16652.75);
   10->SetBinContent(21,14110.43);
   10->SetBinContent(22,8230.754);
   10->SetBinContent(23,4479.271);
   10->SetBinContent(24,2372.911);
   10->SetBinContent(25,1194.25);
   10->SetBinContent(26,545.8859);
   10->SetBinContent(27,252.4191);
   10->SetBinContent(28,119.9512);
   10->SetBinContent(29,59.10192);
   10->SetBinContent(30,27.07632);
   10->SetBinContent(31,18.92431);
   10->SetBinContent(32,8.443147);
   10->SetBinContent(33,2.620287);
   10->SetBinContent(34,0.291143);
   10->SetBinContent(35,1.164572);
   10->SetBinContent(36,1.455715);
   10->SetBinContent(37,0.582286);
   10->SetBinContent(38,0.291143);
   10->SetBinContent(39,0.291143);
   10->SetBinContent(40,0.291143);
   10->SetBinContent(41,0.291143);
   10->SetBinContent(42,0.291143);
   10->SetBinContent(44,0.291143);
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
   11->SetBinContent(4,30.52083);
   11->SetBinContent(6,152.6042);
   11->SetBinContent(7,244.1666);
   11->SetBinContent(8,274.6875);
   11->SetBinContent(9,274.6875);
   11->SetBinContent(10,701.9791);
   11->SetBinContent(11,824.0623);
   11->SetBinContent(12,976.6664);
   11->SetBinContent(13,1648.125);
   11->SetBinContent(14,2655.312);
   11->SetBinContent(15,2502.708);
   11->SetBinContent(16,2166.98);
   11->SetBinContent(17,2777.395);
   11->SetBinContent(18,2838.437);
   11->SetBinContent(19,3143.644);
   11->SetBinContent(20,4181.35);
   11->SetBinContent(21,3204.686);
   11->SetBinContent(22,1770.209);
   11->SetBinContent(23,732.4999);
   11->SetBinContent(24,427.2917);
   11->SetBinContent(25,274.6875);
   11->SetBinContent(26,122.0833);
   11->SetBinContent(27,91.5625);
   11->SetBinContent(28,30.52083);
   11->SetBinContent(29,30.52083);
   11->SetBinContent(30,61.04166);
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
   12->SetBinContent(2,11.45529);
   12->SetBinContent(3,30.7861);
   12->SetBinContent(4,60.14036);
   12->SetBinContent(5,94.50632);
   12->SetBinContent(6,129.5882);
   12->SetBinContent(7,163.9542);
   12->SetBinContent(8,232.6861);
   12->SetBinContent(9,298.5533);
   12->SetBinContent(10,380.1708);
   12->SetBinContent(11,524.0752);
   12->SetBinContent(12,648.6492);
   12->SetBinContent(13,813.3159);
   12->SetBinContent(14,922.1392);
   12->SetBinContent(15,1036.69);
   12->SetBinContent(16,1194.197);
   12->SetBinContent(17,1348.841);
   12->SetBinContent(18,1290.134);
   12->SetBinContent(19,1353.852);
   12->SetBinContent(20,1526.395);
   12->SetBinContent(21,1277.247);
   12->SetBinContent(22,871.3073);
   12->SetBinContent(23,532.6665);
   12->SetBinContent(24,325.0432);
   12->SetBinContent(25,185.4329);
   12->SetBinContent(26,129.5882);
   12->SetBinContent(27,71.59568);
   12->SetBinContent(28,36.51376);
   12->SetBinContent(29,34.36588);
   12->SetBinContent(30,17.18294);
   12->SetBinContent(31,5.011692);
   12->SetBinContent(32,7.875515);
   12->SetBinContent(33,5.011692);
   12->SetBinContent(34,4.295736);
   12->SetBinContent(35,1.431912);
   12->SetBinContent(36,3.57978);
   12->SetBinContent(38,1.431912);
   12->SetBinContent(39,0.715956);
   12->SetBinContent(40,0.715956);
   12->SetBinContent(41,0.715956);
   12->SetBinContent(42,2.147868);
   12->SetBinContent(44,2.147868);
   12->SetBinContent(46,0.715956);
   12->SetBinContent(47,1.431912);
   12->SetBinContent(49,0.715956);
   12->SetBinContent(50,1.431912);
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
   13->SetBinContent(3,104.0221);
   13->SetBinContent(4,416.0882);
   13->SetBinContent(5,936.1986);
   13->SetBinContent(6,1716.364);
   13->SetBinContent(7,2704.572);
   13->SetBinContent(8,4160.88);
   13->SetBinContent(9,6553.397);
   13->SetBinContent(10,8633.842);
   13->SetBinContent(11,11858.51);
   13->SetBinContent(12,15031.16);
   13->SetBinContent(13,21532.6);
   13->SetBinContent(14,22884.91);
   13->SetBinContent(15,30270.57);
   13->SetBinContent(16,33911.39);
   13->SetBinContent(17,34483.52);
   13->SetBinContent(18,33703.34);
   13->SetBinContent(19,36563.99);
   13->SetBinContent(20,36459.96);
   13->SetBinContent(21,31726.9);
   13->SetBinContent(22,19608.17);
   13->SetBinContent(23,10454.22);
   13->SetBinContent(24,6865.464);
   13->SetBinContent(25,3432.726);
   13->SetBinContent(26,1976.418);
   13->SetBinContent(27,832.1765);
   13->SetBinContent(28,156.0331);
   13->SetBinContent(29,520.1102);
   13->SetBinContent(30,104.0221);
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
   14->SetBinContent(2,138.8186);
   14->SetBinContent(3,536.7654);
   14->SetBinContent(4,1369.675);
   14->SetBinContent(5,1582.529);
   14->SetBinContent(6,2147.056);
   14->SetBinContent(7,2794.881);
   14->SetBinContent(8,3886.928);
   14->SetBinContent(9,4719.829);
   14->SetBinContent(10,5275.093);
   14->SetBinContent(11,6191.278);
   14->SetBinContent(12,6663.252);
   14->SetBinContent(13,7098.208);
   14->SetBinContent(14,6552.199);
   14->SetBinContent(15,6107.988);
   14->SetBinContent(16,5173.294);
   14->SetBinContent(17,4904.917);
   14->SetBinContent(18,3951.71);
   14->SetBinContent(19,3553.761);
   14->SetBinContent(20,3498.233);
   14->SetBinContent(21,2470.968);
   14->SetBinContent(22,1832.401);
   14->SetBinContent(23,1101.294);
   14->SetBinContent(24,675.5841);
   14->SetBinContent(25,416.456);
   14->SetBinContent(26,157.3278);
   14->SetBinContent(27,129.5641);
   14->SetBinContent(28,37.01831);
   14->SetBinContent(29,18.50915);
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
   15->SetBinContent(2,168.2805);
   15->SetBinContent(3,392.6546);
   15->SetBinContent(4,645.0754);
   15->SetBinContent(5,560.9351);
   15->SetBinContent(6,813.3559);
   15->SetBinContent(7,1037.73);
   15->SetBinContent(8,1009.683);
   15->SetBinContent(9,1206.01);
   15->SetBinContent(10,1738.899);
   15->SetBinContent(11,1458.431);
   15->SetBinContent(12,1402.338);
   15->SetBinContent(13,1879.133);
   15->SetBinContent(14,1766.946);
   15->SetBinContent(15,1570.618);
   15->SetBinContent(16,1879.133);
   15->SetBinContent(17,1654.759);
   15->SetBinContent(18,1710.852);
   15->SetBinContent(19,1542.572);
   15->SetBinContent(20,1626.712);
   15->SetBinContent(21,1374.291);
   15->SetBinContent(22,504.8416);
   15->SetBinContent(23,673.1221);
   15->SetBinContent(24,504.8416);
   15->SetBinContent(25,168.2805);
   15->SetBinContent(26,140.2338);
   15->SetBinContent(27,28.04676);
   15->SetBinContent(28,28.04676);
   15->SetBinContent(29,28.04676);
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
   16->SetBinContent(2,10.61979);
   16->SetBinContent(3,31.85936);
   16->SetBinContent(4,84.95831);
   16->SetBinContent(5,223.0155);
   16->SetBinContent(6,244.2551);
   16->SetBinContent(7,339.8331);
   16->SetBinContent(8,403.5518);
   16->SetBinContent(9,637.1873);
   16->SetBinContent(10,520.3694);
   16->SetBinContent(11,732.7656);
   16->SetBinContent(12,860.2034);
   16->SetBinContent(13,807.1043);
   16->SetBinContent(14,1008.881);
   16->SetBinContent(15,870.8232);
   16->SetBinContent(16,849.5836);
   16->SetBinContent(17,923.9222);
   16->SetBinContent(18,892.0628);
   16->SetBinContent(19,934.5421);
   16->SetBinContent(20,849.5836);
   16->SetBinContent(21,690.2864);
   16->SetBinContent(22,467.2705);
   16->SetBinContent(23,244.2551);
   16->SetBinContent(24,127.4375);
   16->SetBinContent(25,95.57809);
   16->SetBinContent(26,31.85936);
   16->SetBinContent(27,53.09894);
   16->SetBinContent(28,53.09894);
   16->SetBinContent(29,10.61979);
   16->SetBinContent(30,21.23957);
   16->SetBinContent(33,10.61979);
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
   17->SetBinContent(3,1094.77);
   17->SetBinContent(4,1459.693);
   17->SetBinContent(5,912.3084);
   17->SetBinContent(6,1642.155);
   17->SetBinContent(7,2615.284);
   17->SetBinContent(8,3284.31);
   17->SetBinContent(9,3223.49);
   17->SetBinContent(10,4318.261);
   17->SetBinContent(11,5473.856);
   17->SetBinContent(12,5960.422);
   17->SetBinContent(13,4744.006);
   17->SetBinContent(14,5899.602);
   17->SetBinContent(15,5108.931);
   17->SetBinContent(16,4500.723);
   17->SetBinContent(17,4196.619);
   17->SetBinContent(18,4804.827);
   17->SetBinContent(19,4379.082);
   17->SetBinContent(20,4318.261);
   17->SetBinContent(21,4500.723);
   17->SetBinContent(22,2797.746);
   17->SetBinContent(23,1702.976);
   17->SetBinContent(24,1398.873);
   17->SetBinContent(25,1094.77);
   17->SetBinContent(26,304.1028);
   17->SetBinContent(27,182.4617);
   17->SetBinContent(28,121.6411);
   17->SetBinContent(29,182.4617);
   17->SetBinContent(30,60.82056);
   17->SetBinContent(31,121.6411);
   17->SetBinContent(37,60.82056);
   17->SetBinContent(38,60.82056);
   17->SetBinContent(40,60.82056);
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
