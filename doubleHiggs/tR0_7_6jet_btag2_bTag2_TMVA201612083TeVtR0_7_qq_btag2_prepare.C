{
//=========Macro generated from canvas: canvas1/
//=========  (Mon Jan 23 21:44:55 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,1600,900);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2179487,-3.87059,1.064103,8.229959);
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
   THStack_stack_1->SetMinimum(0.02030062);
   THStack_stack_1->SetMaximum(1.827745e+07);
   THStack_stack_1->SetDirectory(0);
   THStack_stack_1->SetStats(0);
   THStack_stack_1->SetLineWidth(2);
   THStack_stack_1->SetMarkerSize(1.2);
   THStack_stack_1->GetXaxis()->SetTitle("2^{nd} highest b-tag");
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
   0->SetBinContent(3,0.178182);
   0->SetBinContent(4,1.593741);
   0->SetBinContent(5,4.454539);
   0->SetBinContent(6,6.761039);
   0->SetBinContent(7,8.265708);
   0->SetBinContent(8,9.176429);
   0->SetBinContent(9,9.532798);
   0->SetBinContent(10,10.691);
   0->SetBinContent(11,8.968547);
   0->SetBinContent(12,12.81931);
   0->SetBinContent(13,8.810161);
   0->SetBinContent(14,6.048301);
   0->SetBinContent(15,5.781024);
   0->SetBinContent(16,5.048488);
   0->SetBinContent(17,5.196975);
   0->SetBinContent(18,4.236758);
   0->SetBinContent(19,4.296153);
   0->SetBinContent(20,3.979381);
   0->SetBinContent(21,3.652717);
   0->SetBinContent(22,3.692313);
   0->SetBinContent(23,3.44484);
   0->SetBinContent(24,2.841007);
   0->SetBinContent(25,3.167671);
   0->SetBinContent(26,3.048884);
   0->SetBinContent(27,3.306256);
   0->SetBinContent(28,2.672726);
   0->SetBinContent(29,2.761816);
   0->SetBinContent(30,2.742018);
   0->SetBinContent(31,2.672726);
   0->SetBinContent(32,2.643029);
   0->SetBinContent(33,3.118177);
   0->SetBinContent(34,3.494335);
   0->SetBinContent(35,3.98928);
   0->SetBinContent(36,4.840606);
   0->SetBinContent(37,6.17699);
   0->SetBinContent(38,8.92895);
   0->SetBinContent(39,15.2446);
   0->SetBinContent(40,35.9041);
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
   1->SetBinContent(1,0.06929299);
   1->SetBinContent(3,0.009899);
   1->SetBinContent(4,0.019798);
   1->SetBinContent(5,0.227677);
   1->SetBinContent(6,0.7325263);
   1->SetBinContent(7,1.019598);
   1->SetBinContent(8,1.514549);
   1->SetBinContent(9,2.18768);
   1->SetBinContent(10,3.276559);
   1->SetBinContent(11,2.979592);
   1->SetBinContent(12,4.949496);
   1->SetBinContent(13,4.513934);
   1->SetBinContent(14,3.880392);
   1->SetBinContent(15,4.009078);
   1->SetBinContent(16,4.296153);
   1->SetBinContent(17,4.385245);
   1->SetBinContent(18,4.395144);
   1->SetBinContent(19,4.474338);
   1->SetBinContent(20,4.622825);
   1->SetBinContent(21,5.157378);
   1->SetBinContent(22,4.761413);
   1->SetBinContent(23,5.434554);
   1->SetBinContent(24,5.385058);
   1->SetBinContent(25,5.454352);
   1->SetBinContent(26,5.721629);
   1->SetBinContent(27,5.335563);
   1->SetBinContent(28,6.038402);
   1->SetBinContent(29,5.93941);
   1->SetBinContent(30,6.473964);
   1->SetBinContent(31,6.582854);
   1->SetBinContent(32,7.305491);
   1->SetBinContent(33,8.00833);
   1->SetBinContent(34,9.592193);
   1->SetBinContent(35,11.67101);
   1->SetBinContent(36,14.47247);
   1->SetBinContent(37,21.83743);
   1->SetBinContent(38,35.68632);
   1->SetBinContent(39,72.00318);
   1->SetBinContent(40,297.9896);
   1->SetEntries(59848);
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
   2->SetBinContent(1,0.039596);
   2->SetBinContent(2,0.06929299);
   2->SetBinContent(3,0.7127283);
   2->SetBinContent(4,5.781024);
   2->SetBinContent(5,15.19511);
   2->SetBinContent(6,22.40168);
   2->SetBinContent(7,26.23265);
   2->SetBinContent(8,26.49002);
   2->SetBinContent(9,25.6486);
   2->SetBinContent(10,28.23227);
   2->SetBinContent(11,20.62973);
   2->SetBinContent(12,32.63739);
   2->SetBinContent(13,17.76888);
   2->SetBinContent(14,11.58192);
   2->SetBinContent(15,11.06716);
   2->SetBinContent(16,10.26533);
   2->SetBinContent(17,9.146731);
   2->SetBinContent(18,8.285506);
   2->SetBinContent(19,7.562869);
   2->SetBinContent(20,7.137206);
   2->SetBinContent(21,6.662047);
   2->SetBinContent(22,6.691745);
   2->SetBinContent(23,6.137393);
   2->SetBinContent(24,5.622638);
   2->SetBinContent(25,5.59294);
   2->SetBinContent(26,5.088084);
   2->SetBinContent(27,5.25637);
   2->SetBinContent(28,4.870303);
   2->SetBinContent(29,4.880202);
   2->SetBinContent(30,4.820807);
   2->SetBinContent(31,5.028689);
   2->SetBinContent(32,5.25637);
   2->SetBinContent(33,5.305865);
   2->SetBinContent(34,5.543445);
   2->SetBinContent(35,6.414569);
   2->SetBinContent(36,7.859843);
   2->SetBinContent(37,10.91868);
   2->SetBinContent(38,15.60097);
   2->SetBinContent(39,25.73769);
   2->SetBinContent(40,65.60091);
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
   3->SetBinContent(1,0.8441251);
   3->SetBinContent(2,0.06753);
   3->SetBinContent(3,1.21554);
   3->SetBinContent(4,8.272408);
   3->SetBinContent(5,20.7993);
   3->SetBinContent(6,31.36799);
   3->SetBinContent(7,39.60641);
   3->SetBinContent(8,45.0424);
   3->SetBinContent(9,47.8448);
   3->SetBinContent(10,58.68301);
   3->SetBinContent(11,52.43669);
   3->SetBinContent(12,82.89385);
   3->SetBinContent(13,56.48836);
   3->SetBinContent(14,41.66601);
   3->SetBinContent(15,36.19626);
   3->SetBinContent(16,37.78316);
   3->SetBinContent(17,36.93907);
   3->SetBinContent(18,36.09497);
   3->SetBinContent(19,36.29755);
   3->SetBinContent(20,35.7911);
   3->SetBinContent(21,34.20419);
   3->SetBinContent(22,34.06914);
   3->SetBinContent(23,32.21212);
   3->SetBinContent(24,31.70565);
   3->SetBinContent(25,32.92117);
   3->SetBinContent(26,31.30046);
   3->SetBinContent(27,31.80695);
   3->SetBinContent(28,34.54183);
   3->SetBinContent(29,32.98869);
   3->SetBinContent(30,36.19626);
   3->SetBinContent(31,34.71065);
   3->SetBinContent(32,39.94405);
   3->SetBinContent(33,41.83483);
   3->SetBinContent(34,47.81104);
   3->SetBinContent(35,57.33245);
   3->SetBinContent(36,72.05442);
   3->SetBinContent(37,104.4714);
   3->SetBinContent(38,163.3285);
   3->SetBinContent(39,305.4682);
   3->SetBinContent(40,1160.326);
   3->SetEntries(90793);
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
   4->SetBinContent(1,1.268228);
   4->SetBinContent(2,0.174928);
   4->SetBinContent(3,3.782824);
   4->SetBinContent(4,24.73031);
   4->SetBinContent(5,62.58009);
   4->SetBinContent(6,104.2345);
   4->SetBinContent(7,134.6062);
   4->SetBinContent(8,148.0318);
   4->SetBinContent(9,155.8161);
   4->SetBinContent(10,173.593);
   4->SetBinContent(11,134.5187);
   4->SetBinContent(12,213.52);
   4->SetBinContent(13,119.1252);
   4->SetBinContent(14,76.4649);
   4->SetBinContent(15,70.0582);
   4->SetBinContent(16,63.8483);
   4->SetBinContent(17,60.30604);
   4->SetBinContent(18,54.29293);
   4->SetBinContent(19,51.71276);
   4->SetBinContent(20,44.95621);
   4->SetBinContent(21,42.7915);
   4->SetBinContent(22,40.47372);
   4->SetBinContent(23,38.70258);
   4->SetBinContent(24,37.98101);
   4->SetBinContent(25,35.09472);
   4->SetBinContent(26,34.32941);
   4->SetBinContent(27,32.12096);
   4->SetBinContent(28,29.60639);
   4->SetBinContent(29,29.75945);
   4->SetBinContent(30,30.39356);
   4->SetBinContent(31,30.3061);
   4->SetBinContent(32,30.91834);
   4->SetBinContent(33,31.22446);
   4->SetBinContent(34,33.67344);
   4->SetBinContent(35,38.1778);
   4->SetBinContent(36,46.68362);
   4->SetBinContent(37,60.96201);
   4->SetBinContent(38,90.06545);
   4->SetBinContent(39,144.2928);
   4->SetBinContent(40,361.6036);
   4->SetEntries(133391);
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
   5->SetBinContent(1,0.407078);
   5->SetBinContent(2,0.5815399);
   5->SetBinContent(3,18.20219);
   5->SetBinContent(4,121.3651);
   5->SetBinContent(5,284.5449);
   5->SetBinContent(6,396.3409);
   5->SetBinContent(7,429.1469);
   5->SetBinContent(8,421.4107);
   5->SetBinContent(9,396.1664);
   5->SetBinContent(10,420.5964);
   5->SetBinContent(11,303.6235);
   5->SetBinContent(12,493.3627);
   5->SetBinContent(13,242.2615);
   5->SetBinContent(14,149.6266);
   5->SetBinContent(15,132.7627);
   5->SetBinContent(16,124.04);
   5->SetBinContent(17,110.8978);
   5->SetBinContent(18,95.89481);
   5->SetBinContent(19,101.4192);
   5->SetBinContent(20,90.48674);
   5->SetBinContent(21,82.52002);
   5->SetBinContent(22,78.10052);
   5->SetBinContent(23,78.21683);
   5->SetBinContent(24,73.44843);
   5->SetBinContent(25,73.97179);
   5->SetBinContent(26,72.2854);
   5->SetBinContent(27,69.31969);
   5->SetBinContent(28,67.34254);
   5->SetBinContent(29,64.95834);
   5->SetBinContent(30,70.1338);
   5->SetBinContent(31,68.68002);
   5->SetBinContent(32,72.63431);
   5->SetBinContent(33,77.75162);
   5->SetBinContent(34,84.90422);
   5->SetBinContent(35,92.92909);
   5->SetBinContent(36,120.4346);
   5->SetBinContent(37,159.396);
   5->SetBinContent(38,229.2356);
   5->SetBinContent(39,366.4434);
   5->SetBinContent(40,939.1508);
   5->SetEntries(125094);
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
   6->SetBinContent(1,32.4443);
   6->SetBinContent(2,12.27622);
   6->SetBinContent(3,288.4916);
   6->SetBinContent(4,2264.942);
   6->SetBinContent(5,6909.286);
   6->SetBinContent(6,11511.54);
   6->SetBinContent(7,13999.45);
   6->SetBinContent(8,14668.57);
   6->SetBinContent(9,14384.43);
   6->SetBinContent(10,16219.02);
   6->SetBinContent(11,11494);
   6->SetBinContent(12,19249.77);
   6->SetBinContent(13,9454.204);
   6->SetBinContent(14,5706.983);
   6->SetBinContent(15,4998.405);
   6->SetBinContent(16,4493.28);
   6->SetBinContent(17,4213.532);
   6->SetBinContent(18,3753.132);
   6->SetBinContent(19,3516.354);
   6->SetBinContent(20,3236.606);
   6->SetBinContent(21,3077.001);
   6->SetBinContent(22,2867.409);
   6->SetBinContent(23,2735.866);
   6->SetBinContent(24,2668.341);
   6->SetBinContent(25,2576.261);
   6->SetBinContent(26,2483.304);
   6->SetBinContent(27,2378.946);
   6->SetBinContent(28,2232.495);
   6->SetBinContent(29,2160.585);
   6->SetBinContent(30,2240.388);
   6->SetBinContent(31,2248.28);
   6->SetBinContent(32,2256.173);
   6->SetBinContent(33,2352.638);
   6->SetBinContent(34,2624.493);
   6->SetBinContent(35,2921.78);
   6->SetBinContent(36,3535.647);
   6->SetBinContent(37,4763.382);
   6->SetBinContent(38,6996.104);
   6->SetBinContent(39,11396.66);
   6->SetBinContent(40,28292.03);
   6->SetEntries(277350);
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
   7->SetBinContent(1,13.94961);
   7->SetBinContent(2,44.3349);
   7->SetBinContent(3,1383.546);
   7->SetBinContent(4,7321.26);
   7->SetBinContent(5,14396.92);
   7->SetBinContent(6,18658.22);
   7->SetBinContent(7,19846.5);
   7->SetBinContent(8,18710.78);
   7->SetBinContent(9,16742.47);
   7->SetBinContent(10,15785.99);
   7->SetBinContent(11,9478.442);
   7->SetBinContent(12,13454.39);
   7->SetBinContent(13,4465.143);
   7->SetBinContent(14,2012.83);
   7->SetBinContent(15,1510.148);
   7->SetBinContent(16,1269.645);
   7->SetBinContent(17,1069.87);
   7->SetBinContent(18,917.2648);
   7->SetBinContent(19,786.3246);
   7->SetBinContent(20,693.0919);
   7->SetBinContent(21,609.2515);
   7->SetBinContent(22,564.7761);
   7->SetBinContent(23,523.6155);
   7->SetBinContent(24,470.3002);
   7->SetBinContent(25,468.7809);
   7->SetBinContent(26,449.72);
   7->SetBinContent(27,429.9684);
   7->SetBinContent(28,418.9186);
   7->SetBinContent(29,403.3108);
   7->SetBinContent(30,395.9903);
   7->SetBinContent(31,397.2334);
   7->SetBinContent(32,408.8357);
   7->SetBinContent(33,426.9297);
   7->SetBinContent(34,486.1843);
   7->SetBinContent(35,551.2401);
   7->SetBinContent(36,675.8266);
   7->SetBinContent(37,897.3752);
   7->SetBinContent(38,1272.958);
   7->SetBinContent(39,2196.998);
   7->SetBinContent(40,6365.72);
   7->SetEntries(1209695);
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
   8->SetBinContent(1,5.54328);
   8->SetBinContent(2,52.66119);
   8->SetBinContent(3,1561.334);
   8->SetBinContent(4,6002.176);
   8->SetBinContent(5,10249.01);
   8->SetBinContent(6,12696.23);
   8->SetBinContent(7,13319.82);
   8->SetBinContent(8,12244.48);
   8->SetBinContent(9,11674.48);
   8->SetBinContent(10,11557.15);
   8->SetBinContent(11,5720.408);
   8->SetBinContent(12,8323.756);
   8->SetBinContent(13,2487.01);
   8->SetBinContent(14,889.702);
   8->SetBinContent(15,636.5564);
   8->SetBinContent(16,427.7574);
   8->SetBinContent(17,346.4552);
   8->SetBinContent(18,249.4469);
   8->SetBinContent(19,183.8519);
   8->SetBinContent(20,160.7551);
   8->SetBinContent(21,109.9418);
   8->SetBinContent(22,92.38809);
   8->SetBinContent(23,71.13882);
   8->SetBinContent(24,61.9);
   8->SetBinContent(25,44.34625);
   8->SetBinContent(26,38.80296);
   8->SetBinContent(27,25.86863);
   8->SetBinContent(28,29.56415);
   8->SetBinContent(29,18.4776);
   8->SetBinContent(30,18.4776);
   8->SetBinContent(31,12.01044);
   8->SetBinContent(32,11.08656);
   8->SetBinContent(33,13.8582);
   8->SetBinContent(34,10.16268);
   8->SetBinContent(35,11.08656);
   8->SetBinContent(36,8.31492);
   8->SetBinContent(37,3.69552);
   8->SetBinContent(38,9.2388);
   8->SetBinContent(39,9.2388);
   8->SetBinContent(40,8.31492);
   8->SetEntries(107591);
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
   9->SetBinContent(1,7.91215);
   9->SetBinContent(2,16.26386);
   9->SetBinContent(3,431.6556);
   9->SetBinContent(4,2091.919);
   9->SetBinContent(5,4217.554);
   9->SetBinContent(6,5717.407);
   9->SetBinContent(7,6245.63);
   9->SetBinContent(8,6159.937);
   9->SetBinContent(9,6011.401);
   9->SetBinContent(10,6741.772);
   9->SetBinContent(11,3762.72);
   9->SetBinContent(12,5550.415);
   9->SetBinContent(13,2572.241);
   9->SetBinContent(14,1586.859);
   9->SetBinContent(15,1396.523);
   9->SetBinContent(16,1308.608);
   9->SetBinContent(17,1136.734);
   9->SetBinContent(18,1049.698);
   9->SetBinContent(19,995.191);
   9->SetBinContent(20,908.5947);
   9->SetBinContent(21,888.8138);
   9->SetBinContent(22,843.5376);
   9->SetBinContent(23,773.2056);
   9->SetBinContent(24,761.337);
   9->SetBinContent(25,760.4579);
   9->SetBinContent(26,718.6982);
   9->SetBinContent(27,698.9174);
   9->SetBinContent(28,707.7089);
   9->SetBinContent(29,708.588);
   9->SetBinContent(30,675.6199);
   9->SetBinContent(31,696.7195);
   9->SetBinContent(32,694.082);
   9->SetBinContent(33,762.6558);
   9->SetBinContent(34,833.4274);
   9->SetBinContent(35,981.1246);
   9->SetBinContent(36,1140.69);
   9->SetBinContent(37,1445.316);
   9->SetBinContent(38,1963.136);
   9->SetBinContent(39,3164.185);
   9->SetBinContent(40,6965.454);
   9->SetEntries(191327);
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
   10->SetBinContent(1,93.65049);
   10->SetBinContent(2,184.6759);
   10->SetBinContent(3,5035.076);
   10->SetBinContent(4,32077.5);
   10->SetBinContent(5,73645.12);
   10->SetBinContent(6,105487.1);
   10->SetBinContent(7,119240.7);
   10->SetBinContent(8,117109.7);
   10->SetBinContent(9,108395.1);
   10->SetBinContent(10,106877.8);
   10->SetBinContent(11,66529.56);
   10->SetBinContent(12,102040.3);
   10->SetBinContent(13,38522.58);
   10->SetBinContent(14,19054.55);
   10->SetBinContent(15,15328.35);
   10->SetBinContent(16,13531.72);
   10->SetBinContent(17,11725.17);
   10->SetBinContent(18,10247.98);
   10->SetBinContent(19,9080.304);
   10->SetBinContent(20,8243.454);
   10->SetBinContent(21,7536.179);
   10->SetBinContent(22,7007.391);
   10->SetBinContent(23,6467.234);
   10->SetBinContent(24,6006.075);
   10->SetBinContent(25,5775.496);
   10->SetBinContent(26,5439.392);
   10->SetBinContent(27,5232.424);
   10->SetBinContent(28,4977.941);
   10->SetBinContent(29,4803.33);
   10->SetBinContent(30,4641.545);
   10->SetBinContent(31,4646.501);
   10->SetBinContent(32,4677.692);
   10->SetBinContent(33,4865.42);
   10->SetBinContent(34,5322.79);
   10->SetBinContent(35,6088.862);
   10->SetBinContent(36,7200.95);
   10->SetBinContent(37,9335.213);
   10->SetBinContent(38,13534.06);
   10->SetBinContent(39,21819.2);
   10->SetBinContent(40,52530.29);
   10->SetEntries(3949198);
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
   11->SetBinContent(1,305.595);
   11->SetBinContent(2,305.595);
   11->SetBinContent(3,9076.186);
   11->SetBinContent(4,63837.42);
   11->SetBinContent(5,163562.6);
   11->SetBinContent(6,251674.3);
   11->SetBinContent(7,300146.4);
   11->SetBinContent(8,298373.8);
   11->SetBinContent(9,283795.5);
   11->SetBinContent(10,283062);
   11->SetBinContent(11,145102.9);
   11->SetBinContent(12,214846.5);
   11->SetBinContent(13,61790);
   11->SetBinContent(14,19496.9);
   11->SetBinContent(15,13415.64);
   11->SetBinContent(16,10665.28);
   11->SetBinContent(17,7609.327);
   11->SetBinContent(18,4706.167);
   11->SetBinContent(19,3361.546);
   11->SetBinContent(20,2505.878);
   11->SetBinContent(21,2475.319);
   11->SetBinContent(22,1314.058);
   11->SetBinContent(23,855.6661);
   11->SetBinContent(24,794.5471);
   11->SetBinContent(25,733.4281);
   11->SetBinContent(26,641.7496);
   11->SetBinContent(27,641.7496);
   11->SetBinContent(28,213.9165);
   11->SetBinContent(29,122.238);
   11->SetBinContent(30,183.357);
   11->SetBinContent(31,122.238);
   11->SetBinContent(32,305.595);
   11->SetBinContent(33,152.7975);
   11->SetBinContent(34,61.11899);
   11->SetBinContent(35,122.238);
   11->SetBinContent(36,61.11899);
   11->SetBinContent(37,61.11899);
   11->SetBinContent(38,244.476);
   11->SetBinContent(39,91.67849);
   11->SetBinContent(40,183.357);
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
   12->SetBinContent(1,3519.113);
   12->SetBinContent(2,499.7332);
   12->SetBinContent(3,6746.228);
   12->SetBinContent(4,28934.43);
   12->SetBinContent(5,64266.02);
   12->SetBinContent(6,104697.4);
   12->SetBinContent(7,130228.8);
   12->SetBinContent(8,139737.2);
   12->SetBinContent(9,136307.3);
   12->SetBinContent(10,149992.3);
   12->SetBinContent(11,79029.39);
   12->SetBinContent(12,131130.9);
   12->SetBinContent(13,33447.68);
   12->SetBinContent(14,10743.37);
   12->SetBinContent(15,7225.827);
   12->SetBinContent(16,5653.886);
   12->SetBinContent(17,4113.44);
   12->SetBinContent(18,3073.721);
   12->SetBinContent(19,2366.249);
   12->SetBinContent(20,1895.821);
   12->SetBinContent(21,1514.939);
   12->SetBinContent(22,1232.858);
   12->SetBinContent(23,1053.157);
   12->SetBinContent(24,902.8087);
   12->SetBinContent(25,776.8029);
   12->SetBinContent(26,708.0724);
   12->SetBinContent(27,634.3303);
   12->SetBinContent(28,550.5651);
   12->SetBinContent(29,519.0636);
   12->SetBinContent(30,491.8578);
   12->SetBinContent(31,479.6868);
   12->SetBinContent(32,459.6404);
   12->SetBinContent(33,477.5389);
   12->SetBinContent(34,528.3708);
   12->SetBinContent(35,540.5419);
   12->SetBinContent(36,638.626);
   12->SetBinContent(37,802.5768);
   12->SetBinContent(38,1088.954);
   12->SetBinContent(39,1686.05);
   12->SetBinContent(40,3936.579);
   12->SetEntries(1482311);
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
   13->SetBinContent(1,4661.762);
   13->SetBinContent(2,4454.573);
   13->SetBinContent(3,86915.23);
   13->SetBinContent(4,657732.5);
   13->SetBinContent(5,1763843);
   13->SetBinContent(6,2867101);
   13->SetBinContent(7,3494000);
   13->SetBinContent(8,3577628);
   13->SetBinContent(9,3312410);
   13->SetBinContent(10,3198198);
   13->SetBinContent(11,1798464);
   13->SetBinContent(12,2674074);
   13->SetBinContent(13,726280.4);
   13->SetBinContent(14,242357.7);
   13->SetBinContent(15,158394.9);
   13->SetBinContent(16,110016.6);
   13->SetBinContent(17,83134.06);
   13->SetBinContent(18,56873.05);
   13->SetBinContent(19,43820.23);
   13->SetBinContent(20,31906.95);
   13->SetBinContent(21,24085.62);
   13->SetBinContent(22,15383.75);
   13->SetBinContent(23,12793.91);
   13->SetBinContent(24,10463.05);
   13->SetBinContent(25,8132.186);
   13->SetBinContent(26,6526.467);
   13->SetBinContent(27,5438.723);
   13->SetBinContent(28,3263.234);
   13->SetBinContent(29,3263.234);
   13->SetBinContent(30,2071.894);
   13->SetBinContent(31,2175.489);
   13->SetBinContent(32,1709.313);
   13->SetBinContent(33,1502.123);
   13->SetBinContent(34,1087.745);
   13->SetBinContent(35,1294.934);
   13->SetBinContent(36,932.3525);
   13->SetBinContent(37,1502.123);
   13->SetBinContent(38,1450.326);
   13->SetBinContent(39,2020.097);
   13->SetBinContent(40,3574.018);
   13->SetEntries(482881);
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
   14->SetBinContent(1,13521.04);
   14->SetBinContent(2,4830.882);
   14->SetBinContent(3,32787.98);
   14->SetBinContent(4,105272.1);
   14->SetBinContent(5,183354.6);
   14->SetBinContent(6,260499.6);
   14->SetBinContent(7,328265.1);
   14->SetBinContent(8,374209.9);
   14->SetBinContent(9,399009.1);
   14->SetBinContent(10,415104.1);
   14->SetBinContent(11,288175.6);
   14->SetBinContent(12,516548.9);
   14->SetBinContent(13,137918.6);
   14->SetBinContent(14,45354.78);
   14->SetBinContent(15,34897.87);
   14->SetBinContent(16,32130.95);
   14->SetBinContent(17,28595.96);
   14->SetBinContent(18,24968.42);
   14->SetBinContent(19,23108.39);
   14->SetBinContent(20,23339.74);
   14->SetBinContent(21,20239.68);
   14->SetBinContent(22,19073.69);
   14->SetBinContent(23,17805.9);
   14->SetBinContent(24,16371.54);
   14->SetBinContent(25,16269.74);
   14->SetBinContent(26,15223.94);
   14->SetBinContent(27,14983.31);
   14->SetBinContent(28,14520.57);
   14->SetBinContent(29,14113.35);
   14->SetBinContent(30,14353.98);
   14->SetBinContent(31,12660.33);
   14->SetBinContent(32,12614.06);
   14->SetBinContent(33,12836.18);
   14->SetBinContent(34,13752.41);
   14->SetBinContent(35,15510.84);
   14->SetBinContent(36,17556.04);
   14->SetBinContent(37,23608.1);
   14->SetBinContent(38,33926.21);
   14->SetBinContent(39,54923.32);
   14->SetBinContent(40,131637.9);
   14->SetEntries(406775);
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
   15->SetBinContent(1,180706);
   15->SetBinContent(2,6506.866);
   15->SetBinContent(3,31692.96);
   15->SetBinContent(4,74015.69);
   15->SetBinContent(5,143011);
   15->SetBinContent(6,253263.3);
   15->SetBinContent(7,389528.1);
   15->SetBinContent(8,550512.8);
   15->SetBinContent(9,641828.1);
   15->SetBinContent(10,697279.6);
   15->SetBinContent(11,543974.2);
   15->SetBinContent(12,1113750);
   15->SetBinContent(13,220111.9);
   15->SetBinContent(14,37021.86);
   15->SetBinContent(15,26139.68);
   15->SetBinContent(16,22465.54);
   15->SetBinContent(17,16631.79);
   15->SetBinContent(18,13490.54);
   15->SetBinContent(19,10152.96);
   15->SetBinContent(20,8610.382);
   15->SetBinContent(21,6815.382);
   15->SetBinContent(22,6787.335);
   15->SetBinContent(23,5469.132);
   15->SetBinContent(24,4796.007);
   15->SetBinContent(25,4375.304);
   15->SetBinContent(26,3674.132);
   15->SetBinContent(27,3674.132);
   15->SetBinContent(28,3561.944);
   15->SetBinContent(29,2860.772);
   15->SetBinContent(30,2748.585);
   15->SetBinContent(31,3001.007);
   15->SetBinContent(32,2355.929);
   15->SetBinContent(33,2299.835);
   15->SetBinContent(34,2860.772);
   15->SetBinContent(35,3842.413);
   15->SetBinContent(36,3449.757);
   15->SetBinContent(37,4235.069);
   15->SetBinContent(38,6647.101);
   15->SetBinContent(39,9760.304);
   15->SetBinContent(40,25634.83);
   15->SetEntries(181481);
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
   16->SetBinContent(1,21674.87);
   16->SetBinContent(2,9494.083);
   16->SetBinContent(3,58836.04);
   16->SetBinContent(4,186030.3);
   16->SetBinContent(5,342982.8);
   16->SetBinContent(6,519124.1);
   16->SetBinContent(7,683854.1);
   16->SetBinContent(8,787968.4);
   16->SetBinContent(9,875210.3);
   16->SetBinContent(10,947672.8);
   16->SetBinContent(11,553804.1);
   16->SetBinContent(12,968189.7);
   16->SetBinContent(13,202467.2);
   16->SetBinContent(14,43711.6);
   16->SetBinContent(15,24690.71);
   16->SetBinContent(16,18106.84);
   16->SetBinContent(17,12531.44);
   16->SetBinContent(18,7826.742);
   16->SetBinContent(19,6371.853);
   16->SetBinContent(20,4269.166);
   16->SetBinContent(21,2824.867);
   16->SetBinContent(22,2357.593);
   16->SetBinContent(23,1571.728);
   16->SetBinContent(24,1401.812);
   16->SetBinContent(25,1019.501);
   16->SetBinContent(26,711.526);
   16->SetBinContent(27,562.8486);
   16->SetBinContent(28,541.609);
   16->SetBinContent(29,276.1144);
   16->SetBinContent(30,212.3957);
   16->SetBinContent(31,201.7759);
   16->SetBinContent(32,159.2968);
   16->SetBinContent(33,159.2968);
   16->SetBinContent(34,180.5364);
   16->SetBinContent(35,74.33852);
   16->SetBinContent(36,138.0573);
   16->SetBinContent(37,106.1979);
   16->SetBinContent(38,95.57809);
   16->SetBinContent(39,148.677);
   16->SetBinContent(40,95.57809);
   16->SetEntries(591862);
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
   17->SetBinContent(1,144693.3);
   17->SetBinContent(2,6446.989);
   17->SetBinContent(3,46162.67);
   17->SetBinContent(4,135204.1);
   17->SetBinContent(5,268112.1);
   17->SetBinContent(6,457907.9);
   17->SetBinContent(7,646730.7);
   17->SetBinContent(8,813235.3);
   17->SetBinContent(9,896852.5);
   17->SetBinContent(10,964232.8);
   17->SetBinContent(11,666616.4);
   17->SetBinContent(12,1342789);
   17->SetBinContent(13,304234.7);
   17->SetBinContent(14,71646.38);
   17->SetBinContent(15,51210.75);
   17->SetBinContent(16,49507.79);
   17->SetBinContent(17,40263.1);
   17->SetBinContent(18,33572.86);
   17->SetBinContent(19,30592.67);
   17->SetBinContent(20,23659.15);
   17->SetBinContent(21,21165.52);
   17->SetBinContent(22,22077.82);
   17->SetBinContent(23,16847.28);
   17->SetBinContent(24,14536.1);
   17->SetBinContent(25,16360.71);
   17->SetBinContent(26,15144.31);
   17->SetBinContent(27,13198.06);
   17->SetBinContent(28,14292.82);
   17->SetBinContent(29,11008.53);
   17->SetBinContent(30,11495.09);
   17->SetBinContent(31,10339.5);
   17->SetBinContent(32,11008.53);
   17->SetBinContent(33,10339.5);
   17->SetBinContent(34,12529.03);
   17->SetBinContent(35,14414.46);
   17->SetBinContent(36,16725.64);
   17->SetBinContent(37,21530.44);
   17->SetBinContent(38,28889.7);
   17->SetBinContent(39,41114.58);
   17->SetBinContent(40,88676.07);
   17->SetEntries(121759);
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
