{
//=========Macro generated from canvas: canvas1/
//=========  (Tue Jan 24 19:04:05 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,1600,900);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2179487,-3.953669,1.064103,8.542721);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLogy();
   canvas1->SetTickx(1);
   canvas1->SetTicky(1);
   canvas1->SetLeftMargin(0.17);
   canvas1->SetRightMargin(0.05);
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
   
   TH1F *THStack_stack_1 = new TH1F("THStack_stack_1","",40,0,1);
   THStack_stack_1->SetMinimum(0.0197552);
   THStack_stack_1->SetMaximum(3.491479e+07);
   THStack_stack_1->SetDirectory(0);
   THStack_stack_1->SetStats(0);
   THStack_stack_1->SetLineWidth(2);
   THStack_stack_1->SetMarkerSize(1.2);
   THStack_stack_1->GetXaxis()->SetTitle("Highest b-tag");
   THStack_stack_1->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetXaxis()->SetLabelColor(ci);
   THStack_stack_1->GetXaxis()->SetLabelFont(42);
   THStack_stack_1->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_1->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_1->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_1->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_1->GetXaxis()->SetTitleColor(ci);
   THStack_stack_1->GetXaxis()->SetTitleFont(42);
   THStack_stack_1->GetYaxis()->SetTitle("Number of events");
   THStack_stack_1->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetYaxis()->SetLabelColor(ci);
   THStack_stack_1->GetYaxis()->SetLabelFont(42);
   THStack_stack_1->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_1->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_1->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_1->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_1->GetYaxis()->SetTitleColor(ci);
   THStack_stack_1->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_1->GetZaxis()->SetLabelColor(ci);
   THStack_stack_1->GetZaxis()->SetLabelFont(42);
   THStack_stack_1->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_1->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_1->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_1->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_1->GetZaxis()->SetTitleColor(ci);
   THStack_stack_1->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_1);
   
   
   TH1F *0 = new TH1F("0","HH#nu#nu#rightarrowbbWW*#nu#nu,hadronic",40,0,1);
   0->SetBinContent(9,1.237376);
   0->SetBinContent(10,1.40566);
   0->SetBinContent(11,1.385862);
   0->SetBinContent(12,2.128287);
   0->SetBinContent(13,1.593741);
   0->SetBinContent(14,1.692731);
   0->SetBinContent(15,1.593741);
   0->SetBinContent(16,1.484852);
   0->SetBinContent(17,1.375963);
   0->SetBinContent(18,1.415559);
   0->SetBinContent(19,1.435357);
   0->SetBinContent(20,1.40566);
   0->SetBinContent(21,1.227477);
   0->SetBinContent(22,1.682832);
   0->SetBinContent(23,1.455155);
   0->SetBinContent(24,1.534347);
   0->SetBinContent(25,1.672933);
   0->SetBinContent(26,1.544246);
   0->SetBinContent(27,1.465054);
   0->SetBinContent(28,1.583842);
   0->SetBinContent(29,1.81152);
   0->SetBinContent(30,1.752125);
   0->SetBinContent(31,1.960005);
   0->SetBinContent(32,2.148084);
   0->SetBinContent(33,2.633131);
   0->SetBinContent(34,2.633131);
   0->SetBinContent(35,3.236964);
   0->SetBinContent(36,3.90019);
   0->SetBinContent(37,5.71173);
   0->SetBinContent(38,9.800075);
   0->SetBinContent(39,19.38244);
   0->SetBinContent(40,148.8763);
   0->SetEntries(23657);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",40,0,1);
   1->SetBinContent(9,0.138586);
   1->SetBinContent(10,0.227677);
   1->SetBinContent(11,0.207879);
   1->SetBinContent(12,0.336566);
   1->SetBinContent(13,0.326667);
   1->SetBinContent(14,0.346465);
   1->SetBinContent(15,0.3761619);
   1->SetBinContent(16,0.4553539);
   1->SetBinContent(17,0.5345459);
   1->SetBinContent(18,0.6236371);
   1->SetBinContent(19,0.6929302);
   1->SetBinContent(20,0.7127283);
   1->SetBinContent(21,0.6335361);
   1->SetBinContent(22,0.6434351);
   1->SetBinContent(23,0.7820214);
   1->SetBinContent(24,0.8810116);
   1->SetBinContent(25,0.9602038);
   1->SetBinContent(26,0.9997998);
   1->SetBinContent(27,1.128487);
   1->SetBinContent(28,1.158184);
   1->SetBinContent(29,1.336367);
   1->SetBinContent(30,1.306669);
   1->SetBinContent(31,1.544246);
   1->SetBinContent(32,2.18768);
   1->SetBinContent(33,2.068893);
   1->SetBinContent(34,2.742018);
   1->SetBinContent(35,2.811311);
   1->SetBinContent(36,4.474338);
   1->SetBinContent(37,6.899627);
   1->SetBinContent(38,13.77953);
   1->SetBinContent(39,32.22162);
   1->SetBinContent(40,508.5777);
   1->SetEntries(59842);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",40,0,1);
   2->SetBinContent(9,13.04699);
   2->SetBinContent(10,14.97732);
   2->SetBinContent(11,11.69081);
   2->SetBinContent(12,19.61012);
   2->SetBinContent(13,12.59163);
   2->SetBinContent(14,8.196414);
   2->SetBinContent(15,7.077811);
   2->SetBinContent(16,6.671947);
   2->SetBinContent(17,6.226485);
   2->SetBinContent(18,5.919612);
   2->SetBinContent(19,5.345462);
   2->SetBinContent(20,5.295966);
   2->SetBinContent(21,4.860404);
   2->SetBinContent(22,4.256557);
   2->SetBinContent(23,4.21696);
   2->SetBinContent(24,3.761605);
   2->SetBinContent(25,3.791302);
   2->SetBinContent(26,3.702212);
   2->SetBinContent(27,3.860594);
   2->SetBinContent(28,3.791302);
   2->SetBinContent(29,3.573526);
   2->SetBinContent(30,3.919988);
   2->SetBinContent(31,4.127868);
   2->SetBinContent(32,4.108069);
   2->SetBinContent(33,4.09817);
   2->SetBinContent(34,4.543632);
   2->SetBinContent(35,6.038402);
   2->SetBinContent(36,7.612365);
   2->SetBinContent(37,10.33463);
   2->SetBinContent(38,16.15532);
   2->SetBinContent(39,32.88486);
   2->SetBinContent(40,249.5101);
   2->SetEntries(50083);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",40,0,1);
   3->SetBinContent(9,5.807575);
   3->SetBinContent(10,9.555472);
   3->SetBinContent(11,8.373703);
   3->SetBinContent(12,13.77608);
   3->SetBinContent(13,10.09571);
   3->SetBinContent(14,8.137349);
   3->SetBinContent(15,9.521708);
   3->SetBinContent(16,8.846411);
   3->SetBinContent(17,9.352883);
   3->SetBinContent(18,9.150294);
   3->SetBinContent(19,10.06194);
   3->SetBinContent(20,8.711351);
   3->SetBinContent(21,9.319118);
   3->SetBinContent(22,11.04113);
   3->SetBinContent(23,10.12947);
   3->SetBinContent(24,10.60218);
   3->SetBinContent(25,8.98147);
   3->SetBinContent(26,10.90607);
   3->SetBinContent(27,11.78395);
   3->SetBinContent(28,12.1216);
   3->SetBinContent(29,13.3709);
   3->SetBinContent(30,13.3709);
   3->SetBinContent(31,15.05914);
   3->SetBinContent(32,15.83573);
   3->SetBinContent(33,18.1318);
   3->SetBinContent(34,21.00189);
   3->SetBinContent(35,25.35768);
   3->SetBinContent(36,34.77818);
   3->SetBinContent(37,48.6889);
   3->SetBinContent(38,88.76943);
   3->SetBinContent(39,201.1146);
   3->SetBinContent(40,2373.827);
   3->SetEntries(90777);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",40,0,1);
   4->SetBinContent(9,73.95033);
   4->SetBinContent(10,88.57858);
   4->SetBinContent(11,77.71125);
   4->SetBinContent(12,137.0989);
   4->SetBinContent(13,83.63689);
   4->SetBinContent(14,55.77981);
   4->SetBinContent(15,51.38477);
   4->SetBinContent(16,46.66175);
   4->SetBinContent(17,43.5568);
   4->SetBinContent(18,40.25506);
   4->SetBinContent(19,36.97518);
   4->SetBinContent(20,34.32941);
   4->SetBinContent(21,32.90813);
   4->SetBinContent(22,30.76528);
   4->SetBinContent(23,27.4854);
   4->SetBinContent(24,26.06412);
   4->SetBinContent(25,26.04226);
   4->SetBinContent(26,24.07433);
   4->SetBinContent(27,23.24343);
   4->SetBinContent(28,22.45626);
   4->SetBinContent(29,22.41253);
   4->SetBinContent(30,22.76238);
   4->SetBinContent(31,21.75655);
   4->SetBinContent(32,22.78425);
   4->SetBinContent(33,26.39211);
   4->SetBinContent(34,28.90668);
   4->SetBinContent(35,32.1647);
   4->SetBinContent(36,42.04806);
   4->SetBinContent(37,58.84103);
   4->SetBinContent(38,93.14854);
   4->SetBinContent(39,180.2621);
   4->SetBinContent(40,1381.384);
   4->SetEntries(133370);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",40,0,1);
   5->SetBinContent(9,236.6208);
   5->SetBinContent(10,278.3211);
   5->SetBinContent(11,203.0094);
   5->SetBinContent(12,373.0162);
   5->SetBinContent(13,191.3792);
   5->SetBinContent(14,111.0723);
   5->SetBinContent(15,101.1284);
   5->SetBinContent(16,90.83565);
   5->SetBinContent(17,81.35699);
   5->SetBinContent(18,75.94893);
   5->SetBinContent(19,66.52843);
   5->SetBinContent(20,62.74852);
   5->SetBinContent(21,56.11884);
   5->SetBinContent(22,59.08475);
   5->SetBinContent(23,51.81536);
   5->SetBinContent(24,48.50053);
   5->SetBinContent(25,49.19839);
   5->SetBinContent(26,46.29063);
   5->SetBinContent(27,50.01256);
   5->SetBinContent(28,49.14023);
   5->SetBinContent(29,48.50053);
   5->SetBinContent(30,48.61684);
   5->SetBinContent(31,49.60547);
   5->SetBinContent(32,54.54865);
   5->SetBinContent(33,56.8167);
   5->SetBinContent(34,63.1556);
   5->SetBinContent(35,80.13582);
   5->SetBinContent(36,102.0007);
   5->SetBinContent(37,147.1842);
   5->SetBinContent(38,230.4568);
   5->SetBinContent(39,475.2729);
   5->SetBinContent(40,3634.171);
   5->SetEntries(125092);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",40,0,1);
   6->SetBinContent(9,7741.514);
   6->SetBinContent(10,9481.389);
   6->SetBinContent(11,7202.188);
   6->SetBinContent(12,13593.42);
   6->SetBinContent(13,7325.838);
   6->SetBinContent(14,4392.43);
   6->SetBinContent(15,3811.887);
   6->SetBinContent(16,3497.061);
   6->SetBinContent(17,3210.297);
   6->SetBinContent(18,2960.366);
   6->SetBinContent(19,2780.59);
   6->SetBinContent(20,2460.502);
   6->SetBinContent(21,2264.065);
   6->SetBinContent(22,2203.555);
   6->SetBinContent(23,2100.075);
   6->SetBinContent(24,1858.062);
   6->SetBinContent(25,1869.461);
   6->SetBinContent(26,1747.581);
   6->SetBinContent(27,1730.045);
   6->SetBinContent(28,1707.247);
   6->SetBinContent(29,1715.139);
   6->SetBinContent(30,1751.965);
   6->SetBinContent(31,1752.842);
   6->SetBinContent(32,1837.018);
   6->SetBinContent(33,1979.065);
   6->SetBinContent(34,2176.37);
   6->SetBinContent(35,2626.247);
   6->SetBinContent(36,3336.579);
   6->SetBinContent(37,4634.469);
   6->SetBinContent(38,7561.739);
   6->SetBinContent(39,15257.88);
   6->SetBinContent(40,114456.2);
   6->SetEntries(277338);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",40,0,1);
   7->SetBinContent(9,16535.98);
   7->SetBinContent(10,19686.75);
   7->SetBinContent(11,14644.08);
   7->SetBinContent(12,28225.61);
   7->SetBinContent(13,12884.34);
   7->SetBinContent(14,6442.412);
   7->SetBinContent(15,5218.935);
   7->SetBinContent(16,4601.807);
   7->SetBinContent(17,3917.798);
   7->SetBinContent(18,3293.07);
   7->SetBinContent(19,2886.81);
   7->SetBinContent(20,2457.75);
   7->SetBinContent(21,2143.935);
   7->SetBinContent(22,1867.175);
   7->SetBinContent(23,1656.631);
   7->SetBinContent(24,1506.835);
   7->SetBinContent(25,1361.87);
   7->SetBinContent(26,1240.1);
   7->SetBinContent(27,1109.356);
   7->SetBinContent(28,1019.476);
   7->SetBinContent(29,939.0882);
   7->SetBinContent(30,866.5739);
   7->SetBinContent(31,793.2308);
   7->SetBinContent(32,777.3467);
   7->SetBinContent(33,787.2915);
   7->SetBinContent(34,796.4076);
   7->SetBinContent(35,858.7009);
   7->SetBinContent(36,976.7957);
   7->SetBinContent(37,1259.428);
   7->SetBinContent(38,1721.382);
   7->SetBinContent(39,3117.301);
   7->SetBinContent(40,21443.58);
   7->SetEntries(1209642);
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
   
   TH1F *8 = new TH1F("8","qqqqll",40,0,1);
   8->SetBinContent(9,11886.96);
   8->SetBinContent(10,15415.06);
   8->SetBinContent(11,10096.58);
   8->SetBinContent(12,19660.05);
   8->SetBinContent(13,9277.146);
   8->SetBinContent(14,4584.1);
   8->SetBinContent(15,3667.662);
   8->SetBinContent(16,3261.178);
   8->SetBinContent(17,2688.404);
   8->SetBinContent(18,2235.729);
   8->SetBinContent(19,1917.008);
   8->SetBinContent(20,1650.021);
   8->SetBinContent(21,1442.16);
   8->SetBinContent(22,1233.375);
   8->SetBinContent(23,1118.82);
   8->SetBinContent(24,983.0148);
   8->SetBinContent(25,901.7126);
   8->SetBinContent(26,776.0637);
   8->SetBinContent(27,717.8586);
   8->SetBinContent(28,613.4592);
   8->SetBinContent(29,510.9075);
   8->SetBinContent(30,497.973);
   8->SetBinContent(31,407.4319);
   8->SetBinContent(32,440.6919);
   8->SetBinContent(33,402.8124);
   8->SetBinContent(34,384.3347);
   8->SetBinContent(35,338.1402);
   8->SetBinContent(36,352.9224);
   8->SetBinContent(37,418.5186);
   8->SetBinContent(38,428.6813);
   8->SetBinContent(39,490.5819);
   8->SetBinContent(40,595.9053);
   8->SetEntries(107589);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",40,0,1);
   9->SetBinContent(9,4552.417);
   9->SetBinContent(10,6364.722);
   9->SetBinContent(11,3824.683);
   9->SetBinContent(12,7299.438);
   9->SetBinContent(13,3653.296);
   9->SetBinContent(14,1966.213);
   9->SetBinContent(15,1681.807);
   9->SetBinContent(16,1462.459);
   9->SetBinContent(17,1334.543);
   9->SetBinContent(18,1186.846);
   9->SetBinContent(19,1043.544);
   9->SetBinContent(20,947.2773);
   9->SetBinContent(21,905.0781);
   9->SetBinContent(22,809.6903);
   9->SetBinContent(23,759.5787);
   9->SetBinContent(24,688.8071);
   9->SetBinContent(25,673.422);
   9->SetBinContent(26,660.6743);
   9->SetBinContent(27,624.1896);
   9->SetBinContent(28,590.7819);
   9->SetBinContent(29,615.3981);
   9->SetBinContent(30,597.3755);
   9->SetBinContent(31,592.5402);
   9->SetBinContent(32,610.5627);
   9->SetBinContent(33,704.1923);
   9->SetBinContent(34,760.0183);
   9->SetBinContent(35,866.3955);
   9->SetBinContent(36,1033.434);
   9->SetBinContent(37,1485.317);
   9->SetBinContent(38,2267.261);
   9->SetBinContent(39,4384.985);
   9->SetBinContent(40,29139.82);
   9->SetEntries(191320);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",40,0,1);
   10->SetBinContent(9,90437.05);
   10->SetBinContent(10,110897.5);
   10->SetBinContent(11,81587.12);
   10->SetBinContent(12,162052.7);
   10->SetBinContent(13,74297.54);
   10->SetBinContent(14,37123.95);
   10->SetBinContent(15,30437.34);
   10->SetBinContent(16,27060.98);
   10->SetBinContent(17,23183.48);
   10->SetBinContent(18,19892.1);
   10->SetBinContent(19,17751.97);
   10->SetBinContent(20,15637.28);
   10->SetBinContent(21,13549.24);
   10->SetBinContent(22,12202.58);
   10->SetBinContent(23,11102.93);
   10->SetBinContent(24,10045.92);
   10->SetBinContent(25,9326.453);
   10->SetBinContent(26,8651.075);
   10->SetBinContent(27,8067.591);
   10->SetBinContent(28,7495.66);
   10->SetBinContent(29,7176.463);
   10->SetBinContent(30,6712.681);
   10->SetBinContent(31,6447.704);
   10->SetBinContent(32,6484.433);
   10->SetBinContent(33,6754.074);
   10->SetBinContent(34,7209.403);
   10->SetBinContent(35,8078.668);
   10->SetBinContent(36,9768.529);
   10->SetBinContent(37,13144.54);
   10->SetBinContent(38,19865.03);
   10->SetBinContent(39,37890.06);
   10->SetBinContent(40,252775);
   10->SetEntries(3949038);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",40,0,1);
   11->SetBinContent(9,246264.8);
   11->SetBinContent(10,336546.4);
   11->SetBinContent(11,216863.6);
   11->SetBinContent(12,466773.2);
   11->SetBinContent(13,216405.2);
   11->SetBinContent(14,103415.6);
   11->SetBinContent(15,80616.02);
   11->SetBinContent(16,68482.7);
   11->SetBinContent(17,58825.81);
   11->SetBinContent(18,47549.69);
   11->SetBinContent(19,42446.41);
   11->SetBinContent(20,34348.38);
   11->SetBinContent(21,29336.77);
   11->SetBinContent(22,24752.98);
   11->SetBinContent(23,20780.36);
   11->SetBinContent(24,19130.2);
   11->SetBinContent(25,15279.78);
   11->SetBinContent(26,14485.23);
   11->SetBinContent(27,12407.18);
   11->SetBinContent(28,11093.12);
   11->SetBinContent(29,9595.698);
   11->SetBinContent(30,8128.839);
   11->SetBinContent(31,6295.265);
   11->SetBinContent(32,7028.695);
   11->SetBinContent(33,5195.121);
   11->SetBinContent(34,5806.312);
   11->SetBinContent(35,5195.121);
   11->SetBinContent(36,5897.991);
   11->SetBinContent(37,5134.001);
   11->SetBinContent(38,6661.98);
   11->SetBinContent(39,6723.099);
   11->SetBinContent(40,9534.579);
   11->SetEntries(70253);
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
   
   TH1F *12 = new TH1F("12","qqqq",40,0,1);
   12->SetBinContent(9,103885.9);
   12->SetBinContent(10,153798.8);
   12->SetBinContent(11,103134.1);
   12->SetBinContent(12,242304.2);
   12->SetBinContent(13,109548.2);
   12->SetBinContent(14,47401.43);
   12->SetBinContent(15,37761.76);
   12->SetBinContent(16,33857.28);
   12->SetBinContent(17,28097.21);
   12->SetBinContent(18,23245.93);
   12->SetBinContent(19,20332.15);
   12->SetBinContent(20,16675.05);
   12->SetBinContent(21,14014.67);
   12->SetBinContent(22,12071.93);
   12->SetBinContent(23,10248.74);
   12->SetBinContent(24,9010.367);
   12->SetBinContent(25,8026.114);
   12->SetBinContent(26,6980.301);
   12->SetBinContent(27,6307.43);
   12->SetBinContent(28,5512.153);
   12->SetBinContent(29,4877.937);
   12->SetBinContent(30,4326.039);
   12->SetBinContent(31,3834.181);
   12->SetBinContent(32,3748.97);
   12->SetBinContent(33,3509.088);
   12->SetBinContent(34,3466.124);
   12->SetBinContent(35,3477.581);
   12->SetBinContent(36,3718.895);
   12->SetBinContent(37,4224.393);
   12->SetBinContent(38,5137.063);
   12->SetBinContent(39,7187.173);
   12->SetBinContent(40,22597.95);
   12->SetEntries(1481868);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",40,0,1);
   13->SetBinContent(9,2806502);
   13->SetBinContent(10,3583683);
   13->SetBinContent(11,2628068);
   13->SetBinContent(12,5681898);
   13->SetBinContent(13,2590860);
   13->SetBinContent(14,1164319);
   13->SetBinContent(15,915085.2);
   13->SetBinContent(16,827055.8);
   13->SetBinContent(17,686073.9);
   13->SetBinContent(18,566283.4);
   13->SetBinContent(19,485507.8);
   13->SetBinContent(20,413695.6);
   13->SetBinContent(21,337738.5);
   13->SetBinContent(22,286599.6);
   13->SetBinContent(23,252613.4);
   13->SetBinContent(24,218220.3);
   13->SetBinContent(25,197915.9);
   13->SetBinContent(26,169531.2);
   13->SetBinContent(27,144150.8);
   13->SetBinContent(28,126695.2);
   13->SetBinContent(29,112502.9);
   13->SetBinContent(30,95254.52);
   13->SetBinContent(31,79663.66);
   13->SetBinContent(32,76504.05);
   13->SetBinContent(33,67646.78);
   13->SetBinContent(34,62156.31);
   13->SetBinContent(35,61638.34);
   13->SetBinContent(36,59929.05);
   13->SetBinContent(37,62104.52);
   13->SetBinContent(38,68941.7);
   13->SetBinContent(39,77850.77);
   13->SetBinContent(40,103179.4);
   13->SetEntries(482878);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",40,0,1);
   14->SetBinContent(9,276132.1);
   14->SetBinContent(10,367142.9);
   14->SetBinContent(11,318460.1);
   14->SetBinContent(12,896298.4);
   14->SetBinContent(13,369085.4);
   14->SetBinContent(14,112428.4);
   14->SetBinContent(15,79442.79);
   14->SetBinContent(16,72008.77);
   14->SetBinContent(17,61771.21);
   14->SetBinContent(18,49981.73);
   14->SetBinContent(19,44984.62);
   14->SetBinContent(20,40228.12);
   14->SetBinContent(21,32279.01);
   14->SetBinContent(22,27985.2);
   14->SetBinContent(23,25801.28);
   14->SetBinContent(24,22062.7);
   14->SetBinContent(25,21748.06);
   14->SetBinContent(26,19739.97);
   14->SetBinContent(27,18027.99);
   14->SetBinContent(28,17167.38);
   14->SetBinContent(29,16399.31);
   14->SetBinContent(30,14613.12);
   14->SetBinContent(31,14890.76);
   14->SetBinContent(32,14289.19);
   14->SetBinContent(33,14566.84);
   14->SetBinContent(34,15066.6);
   14->SetBinContent(35,17519.03);
   14->SetBinContent(36,21276.12);
   14->SetBinContent(37,29808.22);
   14->SetBinContent(38,44966.12);
   14->SetBinContent(39,89033.88);
   14->SetBinContent(40,595719.6);
   14->SetEntries(406481);
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
   
   TH1F *15 = new TH1F("15","qqll",40,0,1);
   15->SetBinContent(9,331026.9);
   15->SetBinContent(10,471968);
   15->SetBinContent(11,494533.2);
   15->SetBinContent(12,1745430);
   15->SetBinContent(13,806947.9);
   15->SetBinContent(14,191363.8);
   15->SetBinContent(15,125481.7);
   15->SetBinContent(16,123742.8);
   15->SetBinContent(17,101557.7);
   15->SetBinContent(18,79933.58);
   15->SetBinContent(19,76035.06);
   15->SetBinContent(20,59431.32);
   15->SetBinContent(21,47399.21);
   15->SetBinContent(22,41032.57);
   15->SetBinContent(23,31889.29);
   15->SetBinContent(24,25943.35);
   15->SetBinContent(25,25943.35);
   15->SetBinContent(26,20782.72);
   15->SetBinContent(27,18707.26);
   15->SetBinContent(28,16239.13);
   15->SetBinContent(29,12873.51);
   15->SetBinContent(30,11050.46);
   15->SetBinContent(31,8778.663);
   15->SetBinContent(32,7684.835);
   15->SetBinContent(33,7123.897);
   15->SetBinContent(34,6226.397);
   15->SetBinContent(35,7179.991);
   15->SetBinContent(36,8161.632);
   15->SetBinContent(37,9535.929);
   15->SetBinContent(38,15033.12);
   15->SetBinContent(39,28748.04);
   15->SetBinContent(40,130782.6);
   15->SetEntries(181477);
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
   
   TH1F *16 = new TH1F("16","qql#nu",40,0,1);
   16->SetBinContent(9,587825.3);
   16->SetBinContent(10,870652.2);
   16->SetBinContent(11,675322.2);
   16->SetBinContent(12,1913220);
   16->SetBinContent(13,817750.3);
   16->SetBinContent(14,253562.8);
   16->SetBinContent(15,182609.1);
   16->SetBinContent(16,163324.7);
   16->SetBinContent(17,131258.5);
   16->SetBinContent(18,103207.7);
   16->SetBinContent(19,90594.51);
   16->SetBinContent(20,75401.31);
   16->SetBinContent(21,60227.4);
   16->SetBinContent(22,51603.07);
   16->SetBinContent(23,42150.3);
   16->SetBinContent(24,35883.86);
   16->SetBinContent(25,34014.54);
   16->SetBinContent(26,28110.07);
   16->SetBinContent(27,24658.85);
   16->SetBinContent(28,20432.43);
   16->SetBinContent(29,16875.02);
   16->SetBinContent(30,13943.91);
   16->SetBinContent(31,11193.3);
   16->SetBinContent(32,10067.57);
   16->SetBinContent(33,8612.613);
   16->SetBinContent(34,7763.024);
   16->SetBinContent(35,7922.318);
   16->SetBinContent(36,7879.84);
   16->SetBinContent(37,7794.883);
   16->SetBinContent(38,9143.619);
   16->SetBinContent(39,11214.54);
   16->SetBinContent(40,12499.58);
   16->SetEntries(591789);
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
   
   TH1F *17 = new TH1F("17","qq",40,0,1);
   17->SetBinContent(9,524740.8);
   17->SetBinContent(10,733875);
   17->SetBinContent(11,654757.9);
   17->SetBinContent(12,2124672);
   17->SetBinContent(13,929569.6);
   17->SetBinContent(14,245972.2);
   17->SetBinContent(15,181007.7);
   17->SetBinContent(16,165679);
   17->SetBinContent(17,138002.2);
   17->SetBinContent(18,111909.4);
   17->SetBinContent(19,97920.76);
   17->SetBinContent(20,84175.37);
   17->SetBinContent(21,69031.11);
   17->SetBinContent(22,57779.35);
   17->SetBinContent(23,50480.91);
   17->SetBinContent(24,42574.27);
   17->SetBinContent(25,43060.83);
   17->SetBinContent(26,39776.54);
   17->SetBinContent(27,35823.21);
   17->SetBinContent(28,30775.13);
   17->SetBinContent(29,30471.03);
   17->SetBinContent(30,25301.3);
   17->SetBinContent(31,22868.49);
   17->SetBinContent(32,22503.57);
   17->SetBinContent(33,23476.69);
   17->SetBinContent(34,23719.97);
   17->SetBinContent(35,27186.73);
   17->SetBinContent(36,33755.32);
   17->SetBinContent(37,46101.85);
   17->SetBinContent(38,68301.27);
   17->SetBinContent(39,129121.6);
   17->SetBinContent(40,590357.5);
   17->SetEntries(121737);
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
   
   TLegend *leg = new TLegend(0.65,0.35,0.98,0.9,NULL,"brNDC");
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
   entry=leg->AddEntry("0","HH#nu#nu#rightarrowbbWW*#nu#nu,hadronic","f");

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
