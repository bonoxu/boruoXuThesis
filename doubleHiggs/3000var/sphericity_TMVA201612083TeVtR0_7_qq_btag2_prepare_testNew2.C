{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:44:24 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.305316,1.31746,6.144011);
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
   
   TH1F *THStack_stack_21 = new TH1F("THStack_stack_21","",50,0,1);
   THStack_stack_21->SetMinimum(0.02486352);
   THStack_stack_21->SetMaximum(244379.6);
   THStack_stack_21->SetDirectory(0);
   THStack_stack_21->SetStats(0);
   THStack_stack_21->SetLineWidth(2);
   THStack_stack_21->SetMarkerSize(1.2);
   THStack_stack_21->GetXaxis()->SetTitle("Sphericity");
   THStack_stack_21->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_21->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_21->GetXaxis()->SetLabelColor(ci);
   THStack_stack_21->GetXaxis()->SetLabelFont(42);
   THStack_stack_21->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_21->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_21->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_21->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_21->GetXaxis()->SetTitleColor(ci);
   THStack_stack_21->GetXaxis()->SetTitleFont(42);
   THStack_stack_21->GetYaxis()->SetTitle("Number of events");
   THStack_stack_21->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_21->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_21->GetYaxis()->SetLabelColor(ci);
   THStack_stack_21->GetYaxis()->SetLabelFont(42);
   THStack_stack_21->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_21->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_21->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_21->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_21->GetYaxis()->SetTitleColor(ci);
   THStack_stack_21->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_21->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_21->GetZaxis()->SetLabelColor(ci);
   THStack_stack_21->GetZaxis()->SetLabelFont(42);
   THStack_stack_21->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_21->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_21->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_21->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_21->GetZaxis()->SetTitleColor(ci);
   THStack_stack_21->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_21);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,3.335953);
   0->SetBinContent(2,7.265895);
   0->SetBinContent(3,8.493388);
   0->SetBinContent(4,8.107322);
   0->SetBinContent(5,7.048114);
   0->SetBinContent(6,5.71173);
   0->SetBinContent(7,5.315764);
   0->SetBinContent(8,4.751513);
   0->SetBinContent(9,4.187263);
   0->SetBinContent(10,3.761605);
   0->SetBinContent(11,3.157772);
   0->SetBinContent(12,2.82121);
   0->SetBinContent(13,2.445051);
   0->SetBinContent(14,2.415355);
   0->SetBinContent(15,2.118388);
   0->SetBinContent(16,1.920409);
   0->SetBinContent(17,1.950106);
   0->SetBinContent(18,1.50465);
   0->SetBinContent(19,1.207679);
   0->SetBinContent(20,1.19778);
   0->SetBinContent(21,1.306669);
   0->SetBinContent(22,1.128487);
   0->SetBinContent(23,1.207679);
   0->SetBinContent(24,0.8117185);
   0->SetBinContent(25,0.9404057);
   0->SetBinContent(26,0.6830312);
   0->SetBinContent(27,0.8216175);
   0->SetBinContent(28,0.7028292);
   0->SetBinContent(29,0.603839);
   0->SetBinContent(30,0.6335361);
   0->SetBinContent(31,0.4949498);
   0->SetBinContent(32,0.4058589);
   0->SetBinContent(33,0.4355559);
   0->SetBinContent(34,0.277172);
   0->SetBinContent(35,0.237576);
   0->SetBinContent(36,0.138586);
   0->SetBinContent(37,0.09898999);
   0->SetBinContent(38,0.158384);
   0->SetBinContent(39,0.128687);
   0->SetBinContent(40,0.049495);
   0->SetBinContent(41,0.05939399);
   0->SetBinContent(42,0.009899);
   0->SetBinContent(43,0.019798);
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
   1->SetBinContent(1,4.241327);
   1->SetBinContent(2,6.800008);
   1->SetBinContent(3,6.314997);
   1->SetBinContent(4,5.726055);
   1->SetBinContent(5,4.978742);
   1->SetBinContent(6,4.167091);
   1->SetBinContent(7,3.691978);
   1->SetBinContent(8,3.157476);
   1->SetBinContent(9,2.75165);
   1->SetBinContent(10,2.375519);
   1->SetBinContent(11,2.335927);
   1->SetBinContent(12,2.019185);
   1->SetBinContent(13,1.786582);
   1->SetBinContent(14,1.529236);
   1->SetBinContent(15,1.356022);
   1->SetBinContent(16,1.182808);
   1->SetBinContent(17,1.306532);
   1->SetBinContent(18,1.17291);
   1->SetBinContent(19,0.9155631);
   1->SetBinContent(20,0.9798998);
   1->SetBinContent(21,0.8066857);
   1->SetBinContent(22,0.7275021);
   1->SetBinContent(23,0.752247);
   1->SetBinContent(24,0.7374001);
   1->SetBinContent(25,0.564186);
   1->SetBinContent(26,0.6235737);
   1->SetBinContent(27,0.4553083);
   1->SetBinContent(28,0.4553083);
   1->SetBinContent(29,0.4800533);
   1->SetBinContent(30,0.4701553);
   1->SetBinContent(31,0.3959202);
   1->SetBinContent(32,0.2425011);
   1->SetBinContent(33,0.2622971);
   1->SetBinContent(34,0.2078581);
   1->SetBinContent(35,0.2128071);
   1->SetBinContent(36,0.07423501);
   1->SetBinContent(37,0.128674);
   1->SetBinContent(38,0.09898002);
   1->SetBinContent(39,0.064337);
   1->SetBinContent(40,0.039592);
   1->SetBinContent(41,0.024745);
   1->SetBinContent(42,0.009898);
   1->SetBinContent(43,0.009898);
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
   2->SetBinContent(1,6.834652);
   2->SetBinContent(2,13.18879);
   2->SetBinContent(3,12.22381);
   2->SetBinContent(4,10.90748);
   2->SetBinContent(5,9.764345);
   2->SetBinContent(6,8.715239);
   2->SetBinContent(7,7.215732);
   2->SetBinContent(8,6.824754);
   2->SetBinContent(9,5.75575);
   2->SetBinContent(10,5.275688);
   2->SetBinContent(11,4.746135);
   2->SetBinContent(12,4.211633);
   2->SetBinContent(13,3.939433);
   2->SetBinContent(14,3.498963);
   2->SetBinContent(15,3.13273);
   2->SetBinContent(16,2.815989);
   2->SetBinContent(17,2.835785);
   2->SetBinContent(18,2.504196);
   2->SetBinContent(19,2.177556);
   2->SetBinContent(20,1.880613);
   2->SetBinContent(21,1.79648);
   2->SetBinContent(22,1.742042);
   2->SetBinContent(23,1.578726);
   2->SetBinContent(24,1.370869);
   2->SetBinContent(25,1.36592);
   2->SetBinContent(26,1.12342);
   2->SetBinContent(27,1.049185);
   2->SetBinContent(28,1.118471);
   2->SetBinContent(29,0.7275021);
   2->SetBinContent(30,0.7918388);
   2->SetBinContent(31,0.742349);
   2->SetBinContent(32,0.6483185);
   2->SetBinContent(33,0.4751043);
   2->SetBinContent(34,0.4355122);
   2->SetBinContent(35,0.4008692);
   2->SetBinContent(36,0.2969401);
   2->SetBinContent(37,0.1831131);
   2->SetBinContent(38,0.1732151);
   2->SetBinContent(39,0.08908202);
   2->SetBinContent(40,0.07918401);
   2->SetBinContent(41,0.029694);
   2->SetBinContent(42,0.034643);
   2->SetBinContent(43,0.009898);
   2->SetBinContent(44,0.004949);
   2->SetBinContent(45,0.004949);
   2->SetBinContent(47,0.004949);
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
   3->SetBinContent(1,31.46929);
   3->SetBinContent(2,49.97193);
   3->SetBinContent(3,46.15661);
   3->SetBinContent(4,40.85568);
   3->SetBinContent(5,35.85862);
   3->SetBinContent(6,33.86655);
   3->SetBinContent(7,29.40958);
   3->SetBinContent(8,27.2148);
   3->SetBinContent(9,24.31094);
   3->SetBinContent(10,20.93436);
   3->SetBinContent(11,18.80712);
   3->SetBinContent(12,18.80712);
   3->SetBinContent(13,16.51104);
   3->SetBinContent(14,16.03832);
   3->SetBinContent(15,14.78902);
   3->SetBinContent(16,13.57349);
   3->SetBinContent(17,13.03325);
   3->SetBinContent(18,10.50089);
   3->SetBinContent(19,10.83854);
   3->SetBinContent(20,10.16324);
   3->SetBinContent(21,8.880176);
   3->SetBinContent(22,7.597111);
   3->SetBinContent(23,7.293228);
   3->SetBinContent(24,6.989344);
   3->SetBinContent(25,5.84134);
   3->SetBinContent(26,6.111458);
   3->SetBinContent(27,6.280282);
   3->SetBinContent(28,4.929689);
   3->SetBinContent(29,5.132278);
   3->SetBinContent(30,3.646623);
   3->SetBinContent(31,3.950508);
   3->SetBinContent(32,3.612858);
   3->SetBinContent(33,3.308972);
   3->SetBinContent(34,2.734966);
   3->SetBinContent(35,2.025899);
   3->SetBinContent(36,1.48566);
   3->SetBinContent(37,1.654484);
   3->SetBinContent(38,0.8778901);
   3->SetBinContent(39,0.9791852);
   3->SetBinContent(40,0.4389449);
   3->SetBinContent(41,0.33765);
   3->SetBinContent(42,0.27012);
   3->SetBinContent(44,0.06753);
   3->SetBinContent(46,0.033765);
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
   4->SetBinContent(1,28.75362);
   4->SetBinContent(2,46.94601);
   4->SetBinContent(3,46.37749);
   4->SetBinContent(4,43.51307);
   4->SetBinContent(5,37.76235);
   4->SetBinContent(6,32.14283);
   4->SetBinContent(7,30.83088);
   4->SetBinContent(8,27.50727);
   4->SetBinContent(9,25.18949);
   4->SetBinContent(10,22.93731);
   4->SetBinContent(11,19.6793);
   4->SetBinContent(12,18.82653);
   4->SetBinContent(13,17.93003);
   4->SetBinContent(14,16.70554);
   4->SetBinContent(15,16.00583);
   4->SetBinContent(16,14.56269);
   4->SetBinContent(17,13.90671);
   4->SetBinContent(18,12.26677);
   4->SetBinContent(19,10.95482);
   4->SetBinContent(20,10.7799);
   4->SetBinContent(21,9.621007);
   4->SetBinContent(22,9.467946);
   4->SetBinContent(23,8.855702);
   4->SetBinContent(24,8.549581);
   4->SetBinContent(25,6.756581);
   4->SetBinContent(26,6.581654);
   4->SetBinContent(27,6.384861);
   4->SetBinContent(28,6.297398);
   4->SetBinContent(29,5.357167);
   4->SetBinContent(30,5.007313);
   4->SetBinContent(31,4.504399);
   4->SetBinContent(32,4.154545);
   4->SetBinContent(33,3.476698);
   4->SetBinContent(34,2.864448);
   4->SetBinContent(35,2.930046);
   4->SetBinContent(36,1.967939);
   4->SetBinContent(37,2.077269);
   4->SetBinContent(38,1.290094);
   4->SetBinContent(39,1.180764);
   4->SetBinContent(40,0.568516);
   4->SetBinContent(41,0.153062);
   4->SetBinContent(42,0.174928);
   4->SetBinContent(43,0.131196);
   4->SetBinContent(44,0.021866);
   4->SetBinContent(45,0.043732);
   4->SetBinContent(46,0.021866);
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
   5->SetBinContent(1,102.117);
   5->SetBinContent(2,175.2131);
   5->SetBinContent(3,174.1082);
   5->SetBinContent(4,160.1519);
   5->SetBinContent(5,139.9734);
   5->SetBinContent(6,128.285);
   5->SetBinContent(7,109.6767);
   5->SetBinContent(8,105.6061);
   5->SetBinContent(9,93.278);
   5->SetBinContent(10,81.24069);
   5->SetBinContent(11,79.96136);
   5->SetBinContent(12,72.1691);
   5->SetBinContent(13,70.07565);
   5->SetBinContent(14,60.59678);
   5->SetBinContent(15,55.47913);
   5->SetBinContent(16,53.9671);
   5->SetBinContent(17,50.30333);
   5->SetBinContent(18,48.03529);
   5->SetBinContent(19,42.91764);
   5->SetBinContent(20,37.56738);
   5->SetBinContent(21,37.97446);
   5->SetBinContent(22,36.28796);
   5->SetBinContent(23,29.94913);
   5->SetBinContent(24,29.01868);
   5->SetBinContent(25,25.6458);
   5->SetBinContent(26,24.19197);
   5->SetBinContent(27,23.72674);
   5->SetBinContent(28,23.26152);
   5->SetBinContent(29,19.24895);
   5->SetBinContent(30,17.15544);
   5->SetBinContent(31,17.50436);
   5->SetBinContent(32,15.12006);
   5->SetBinContent(33,12.27051);
   5->SetBinContent(34,11.97974);
   5->SetBinContent(35,9.188344);
   5->SetBinContent(36,8.14157);
   5->SetBinContent(37,6.745872);
   5->SetBinContent(38,4.59417);
   5->SetBinContent(39,2.907701);
   5->SetBinContent(40,2.384314);
   5->SetBinContent(41,1.337542);
   5->SetBinContent(42,0.465232);
   5->SetBinContent(43,0.5815399);
   5->SetBinContent(44,0.174462);
   5->SetBinContent(45,0.116308);
   5->SetBinContent(46,0.116308);
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
   6->SetBinContent(1,4796.338);
   6->SetBinContent(2,7319.333);
   6->SetBinContent(3,6474.827);
   6->SetBinContent(4,5557.534);
   6->SetBinContent(5,4794.584);
   6->SetBinContent(6,3932.54);
   6->SetBinContent(7,3415.137);
   6->SetBinContent(8,2982.799);
   6->SetBinContent(9,2582.032);
   6->SetBinContent(10,2259.313);
   6->SetBinContent(11,1966.399);
   6->SetBinContent(12,1698.014);
   6->SetBinContent(13,1581.363);
   6->SetBinContent(14,1415.596);
   6->SetBinContent(15,1229.656);
   6->SetBinContent(16,1159.49);
   6->SetBinContent(17,1026.175);
   6->SetBinContent(18,925.311);
   6->SetBinContent(19,837.6035);
   6->SetBinContent(20,832.341);
   6->SetBinContent(21,720.0754);
   6->SetBinContent(22,684.9924);
   6->SetBinContent(23,586.7599);
   6->SetBinContent(24,540.275);
   6->SetBinContent(25,481.5109);
   6->SetBinContent(26,482.388);
   6->SetBinContent(27,377.139);
   6->SetBinContent(28,361.3516);
   6->SetBinContent(29,341.1789);
   6->SetBinContent(30,300.8334);
   6->SetBinContent(31,276.2753);
   6->SetBinContent(32,227.1596);
   6->SetBinContent(33,198.2166);
   6->SetBinContent(34,194.7084);
   6->SetBinContent(35,152.6095);
   6->SetBinContent(36,137.6995);
   6->SetBinContent(37,99.98569);
   6->SetBinContent(38,68.41125);
   6->SetBinContent(39,42.09923);
   6->SetBinContent(40,22.80374);
   6->SetBinContent(41,16.66427);
   6->SetBinContent(42,7.893603);
   6->SetBinContent(43,7.893603);
   6->SetBinContent(44,4.385335);
   6->SetBinContent(45,0.877067);
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
   7->SetBinContent(1,746.8216);
   7->SetBinContent(2,1097.896);
   7->SetBinContent(3,1014.779);
   7->SetBinContent(4,894.3365);
   7->SetBinContent(5,810.6342);
   7->SetBinContent(6,719.7496);
   7->SetBinContent(7,662.705);
   7->SetBinContent(8,573.4778);
   7->SetBinContent(9,526.9305);
   7->SetBinContent(10,492.9523);
   7->SetBinContent(11,434.5265);
   7->SetBinContent(12,419.8855);
   7->SetBinContent(13,381.3493);
   7->SetBinContent(14,354.2773);
   7->SetBinContent(15,338.2551);
   7->SetBinContent(16,298.4758);
   7->SetBinContent(17,284.8016);
   7->SetBinContent(18,266.1551);
   7->SetBinContent(19,253.7241);
   7->SetBinContent(20,240.4643);
   7->SetBinContent(21,211.0442);
   7->SetBinContent(22,208.1436);
   7->SetBinContent(23,178.5854);
   7->SetBinContent(24,167.8118);
   7->SetBinContent(25,162.2869);
   7->SetBinContent(26,149.1653);
   7->SetBinContent(27,127.342);
   7->SetBinContent(28,122.9223);
   7->SetBinContent(29,106.6247);
   7->SetBinContent(30,110.7682);
   7->SetBinContent(31,89.77471);
   7->SetBinContent(32,84.38823);
   7->SetBinContent(33,69.88616);
   7->SetBinContent(34,61.87549);
   7->SetBinContent(35,52.75991);
   7->SetBinContent(36,41.29637);
   7->SetBinContent(37,31.07586);
   7->SetBinContent(38,20.02667);
   7->SetBinContent(39,14.22584);
   7->SetBinContent(40,10.22051);
   7->SetBinContent(41,4.972139);
   7->SetBinContent(42,2.624185);
   7->SetBinContent(43,2.20984);
   7->SetBinContent(44,0.55246);
   7->SetBinContent(45,0.414345);
   7->SetBinContent(46,0.138115);
   7->SetBinContent(47,0.138115);
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
   8->SetBinContent(1,305.8041);
   8->SetBinContent(2,276.2396);
   8->SetBinContent(3,203.2533);
   8->SetBinContent(4,156.1357);
   8->SetBinContent(5,122.8762);
   8->SetBinContent(6,113.6374);
   8->SetBinContent(7,89.61645);
   8->SetBinContent(8,73.91046);
   8->SetBinContent(9,84.07316);
   8->SetBinContent(10,69.29105);
   8->SetBinContent(11,60.05224);
   8->SetBinContent(12,44.34625);
   8->SetBinContent(13,34.18356);
   8->SetBinContent(14,40.65073);
   8->SetBinContent(15,45.27013);
   8->SetBinContent(16,26.79251);
   8->SetBinContent(17,24.02087);
   8->SetBinContent(18,33.25967);
   8->SetBinContent(19,32.33579);
   8->SetBinContent(20,29.56415);
   8->SetBinContent(21,22.17311);
   8->SetBinContent(22,24.94475);
   8->SetBinContent(23,21.24924);
   8->SetBinContent(24,13.8582);
   8->SetBinContent(25,10.16268);
   8->SetBinContent(26,16.62984);
   8->SetBinContent(27,13.8582);
   8->SetBinContent(28,10.16268);
   8->SetBinContent(29,12.01044);
   8->SetBinContent(30,10.16268);
   8->SetBinContent(31,9.2388);
   8->SetBinContent(32,6.46716);
   8->SetBinContent(33,6.46716);
   8->SetBinContent(34,1.84776);
   8->SetBinContent(35,1.84776);
   8->SetBinContent(36,6.46716);
   8->SetBinContent(37,3.69552);
   8->SetBinContent(38,0.92388);
   8->SetBinContent(39,0.92388);
   8->SetBinContent(40,0.92388);
   8->SetBinContent(41,0.92388);
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
   9->SetBinContent(1,2853.491);
   9->SetBinContent(2,2003.577);
   9->SetBinContent(3,1379.819);
   9->SetBinContent(4,1106.843);
   9->SetBinContent(5,894.5283);
   9->SetBinContent(6,760.8975);
   9->SetBinContent(7,664.6305);
   9->SetBinContent(8,545.066);
   9->SetBinContent(9,495.394);
   9->SetBinContent(10,464.6238);
   9->SetBinContent(11,391.2147);
   9->SetBinContent(12,369.6755);
   9->SetBinContent(13,329.6742);
   9->SetBinContent(14,292.7499);
   9->SetBinContent(15,261.9796);
   9->SetBinContent(16,255.8256);
   9->SetBinContent(17,225.4959);
   9->SetBinContent(18,220.2212);
   9->SetBinContent(19,208.7926);
   9->SetBinContent(20,182.4191);
   9->SetBinContent(21,173.1883);
   9->SetBinContent(22,156.9246);
   9->SetBinContent(23,129.6719);
   9->SetBinContent(24,130.1114);
   9->SetBinContent(25,122.1992);
   9->SetBinContent(26,125.2762);
   9->SetBinContent(27,116.9244);
   9->SetBinContent(28,101.9791);
   9->SetBinContent(29,85.71513);
   9->SetBinContent(30,83.51729);
   9->SetBinContent(31,69.01156);
   9->SetBinContent(32,52.30809);
   9->SetBinContent(33,51.86853);
   9->SetBinContent(34,39.56074);
   9->SetBinContent(35,37.36292);
   9->SetBinContent(36,31.20903);
   9->SetBinContent(37,19.34081);
   9->SetBinContent(38,12.30779);
   9->SetBinContent(39,10.10997);
   9->SetBinContent(40,5.274768);
   9->SetBinContent(41,5.714332);
   9->SetBinContent(42,0.879128);
   9->SetBinContent(43,0.439564);
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
   10->SetBinContent(1,12367.54);
   10->SetBinContent(2,14677.62);
   10->SetBinContent(3,12649.83);
   10->SetBinContent(4,10699.15);
   10->SetBinContent(5,9248.727);
   10->SetBinContent(6,8177.789);
   10->SetBinContent(7,7154.578);
   10->SetBinContent(8,6445.664);
   10->SetBinContent(9,5896.518);
   10->SetBinContent(10,5383.457);
   10->SetBinContent(11,4876.799);
   10->SetBinContent(12,4453.953);
   10->SetBinContent(13,4149.842);
   10->SetBinContent(14,3824.55);
   10->SetBinContent(15,3512.902);
   10->SetBinContent(16,3334.651);
   10->SetBinContent(17,3040.187);
   10->SetBinContent(18,2910.285);
   10->SetBinContent(19,2714.85);
   10->SetBinContent(20,2519.415);
   10->SetBinContent(21,2342.038);
   10->SetBinContent(22,2196.408);
   10->SetBinContent(23,2047.283);
   10->SetBinContent(24,1923.841);
   10->SetBinContent(25,1792.829);
   10->SetBinContent(26,1697.918);
   10->SetBinContent(27,1560.501);
   10->SetBinContent(28,1430.653);
   10->SetBinContent(29,1338.363);
   10->SetBinContent(30,1219.87);
   10->SetBinContent(31,1082.744);
   10->SetBinContent(32,955.8078);
   10->SetBinContent(33,858.5678);
   10->SetBinContent(34,756.9608);
   10->SetBinContent(35,640.5057);
   10->SetBinContent(36,541.81);
   10->SetBinContent(37,445.1523);
   10->SetBinContent(38,310.6466);
   10->SetBinContent(39,206.7105);
   10->SetBinContent(40,136.8374);
   10->SetBinContent(41,92.58357);
   10->SetBinContent(42,55.60822);
   10->SetBinContent(43,29.98776);
   10->SetBinContent(44,16.01287);
   10->SetBinContent(45,6.987431);
   10->SetBinContent(46,3.784858);
   10->SetBinContent(47,1.746858);
   10->SetBinContent(48,0.291143);
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
   11->SetBinContent(1,6531.467);
   11->SetBinContent(2,4303.434);
   11->SetBinContent(3,2838.437);
   11->SetBinContent(4,2502.708);
   11->SetBinContent(5,2075.418);
   11->SetBinContent(6,1434.479);
   11->SetBinContent(7,1251.354);
   11->SetBinContent(8,1068.229);
   11->SetBinContent(9,1007.187);
   11->SetBinContent(10,885.1039);
   11->SetBinContent(11,732.4999);
   11->SetBinContent(12,915.6248);
   11->SetBinContent(13,793.5415);
   11->SetBinContent(14,763.0207);
   11->SetBinContent(15,518.8542);
   11->SetBinContent(16,396.7708);
   11->SetBinContent(17,396.7708);
   11->SetBinContent(18,396.7708);
   11->SetBinContent(19,274.6875);
   11->SetBinContent(20,305.2083);
   11->SetBinContent(21,366.25);
   11->SetBinContent(22,488.3334);
   11->SetBinContent(23,305.2083);
   11->SetBinContent(24,183.125);
   11->SetBinContent(25,183.125);
   11->SetBinContent(26,122.0833);
   11->SetBinContent(27,152.6042);
   11->SetBinContent(28,122.0833);
   11->SetBinContent(29,61.04166);
   11->SetBinContent(30,213.6458);
   11->SetBinContent(31,61.04166);
   11->SetBinContent(32,122.0833);
   11->SetBinContent(33,61.04166);
   11->SetBinContent(34,30.52083);
   11->SetBinContent(36,61.04166);
   11->SetBinContent(37,91.5625);
   11->SetBinContent(38,30.52083);
   11->SetBinContent(39,61.04166);
   11->SetBinContent(43,30.52083);
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
   12->SetBinContent(1,2750.776);
   12->SetBinContent(2,2527.364);
   12->SetBinContent(3,1905.844);
   12->SetBinContent(4,1366.023);
   12->SetBinContent(5,1049.577);
   12->SetBinContent(6,832.6464);
   12->SetBinContent(7,689.4579);
   12->SetBinContent(8,536.2462);
   12->SetBinContent(9,420.9795);
   12->SetBinContent(10,407.3766);
   12->SetBinContent(11,365.8519);
   12->SetBinContent(12,310.7244);
   12->SetBinContent(13,248.4372);
   12->SetBinContent(14,252.733);
   12->SetBinContent(15,205.4798);
   12->SetBinContent(16,166.1021);
   12->SetBinContent(17,169.6819);
   12->SetBinContent(18,153.2148);
   12->SetBinContent(19,146.0553);
   12->SetBinContent(20,128.8723);
   12->SetBinContent(21,122.4287);
   12->SetBinContent(22,107.3936);
   12->SetBinContent(23,95.93824);
   12->SetBinContent(24,65.15206);
   12->SetBinContent(25,79.47121);
   12->SetBinContent(26,77.32334);
   12->SetBinContent(27,62.28823);
   12->SetBinContent(28,49.40099);
   12->SetBinContent(29,48.68504);
   12->SetBinContent(30,42.95737);
   12->SetBinContent(31,40.09354);
   12->SetBinContent(32,38.66163);
   12->SetBinContent(33,27.92228);
   12->SetBinContent(34,20.76272);
   12->SetBinContent(35,24.3425);
   12->SetBinContent(36,16.46698);
   12->SetBinContent(37,12.17125);
   12->SetBinContent(38,5.011692);
   12->SetBinContent(39,4.295736);
   12->SetBinContent(40,2.147868);
   12->SetBinContent(41,1.431912);
   12->SetBinContent(42,1.431912);
   12->SetBinContent(43,0.715956);
   12->SetBinContent(44,0.715956);
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
   13->SetBinContent(1,39320.61);
   13->SetBinContent(2,50815.2);
   13->SetBinContent(3,39320.61);
   13->SetBinContent(4,31934.95);
   13->SetBinContent(5,25901.59);
   13->SetBinContent(6,23092.95);
   13->SetBinContent(7,19296.1);
   13->SetBinContent(8,15603.28);
   13->SetBinContent(9,15083.17);
   13->SetBinContent(10,12274.59);
   13->SetBinContent(11,11650.46);
   13->SetBinContent(12,9830.089);
   13->SetBinContent(13,9153.949);
   13->SetBinContent(14,6761.442);
   13->SetBinContent(15,7489.599);
   13->SetBinContent(16,6137.307);
   13->SetBinContent(17,6969.487);
   13->SetBinContent(18,4733.004);
   13->SetBinContent(19,4420.937);
   13->SetBinContent(20,4212.892);
   13->SetBinContent(21,4628.981);
   13->SetBinContent(22,3588.759);
   13->SetBinContent(23,3224.682);
   13->SetBinContent(24,3068.649);
   13->SetBinContent(25,2288.484);
   13->SetBinContent(26,2444.517);
   13->SetBinContent(27,1872.396);
   13->SetBinContent(28,2444.517);
   13->SetBinContent(29,1612.342);
   13->SetBinContent(30,1456.309);
   13->SetBinContent(31,1560.331);
   13->SetBinContent(32,1300.276);
   13->SetBinContent(33,1352.287);
   13->SetBinContent(34,728.1544);
   13->SetBinContent(35,364.0772);
   13->SetBinContent(36,364.0772);
   13->SetBinContent(37,416.0882);
   13->SetBinContent(38,208.0441);
   13->SetBinContent(39,52.01103);
   13->SetBinContent(40,312.0662);
   13->SetBinContent(41,156.0331);
   13->SetBinContent(43,156.0331);
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
   14->SetBinContent(1,14539.08);
   14->SetBinContent(2,11198.06);
   14->SetBinContent(3,8875.088);
   14->SetBinContent(4,6681.761);
   14->SetBinContent(5,5025.224);
   14->SetBinContent(6,4340.399);
   14->SetBinContent(7,3359.414);
   14->SetBinContent(8,2924.446);
   14->SetBinContent(9,2563.515);
   14->SetBinContent(10,2350.658);
   14->SetBinContent(11,2248.857);
   14->SetBinContent(12,1989.728);
   14->SetBinContent(13,1915.692);
   14->SetBinContent(14,1452.966);
   14->SetBinContent(15,1415.948);
   14->SetBinContent(16,1425.202);
   14->SetBinContent(17,1073.531);
   14->SetBinContent(18,999.4943);
   14->SetBinContent(19,971.7306);
   14->SetBinContent(20,758.8753);
   14->SetBinContent(21,962.476);
   14->SetBinContent(22,592.2929);
   14->SetBinContent(23,675.5841);
   14->SetBinContent(24,675.5841);
   14->SetBinContent(25,527.5109);
   14->SetBinContent(26,536.7654);
   14->SetBinContent(27,379.4377);
   14->SetBinContent(28,416.456);
   14->SetBinContent(29,286.8919);
   14->SetBinContent(30,249.8736);
   14->SetBinContent(31,333.1648);
   14->SetBinContent(32,314.6556);
   14->SetBinContent(33,222.1098);
   14->SetBinContent(34,185.0915);
   14->SetBinContent(35,185.0915);
   14->SetBinContent(36,129.5641);
   14->SetBinContent(37,83.29119);
   14->SetBinContent(38,64.78204);
   14->SetBinContent(39,18.50915);
   14->SetBinContent(40,18.50915);
   14->SetBinContent(41,9.254577);
   14->SetBinContent(42,18.50915);
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
   15->SetBinContent(1,1738.899);
   15->SetBinContent(2,2440.069);
   15->SetBinContent(3,2832.726);
   15->SetBinContent(4,2103.507);
   15->SetBinContent(5,1851.086);
   15->SetBinContent(6,1430.385);
   15->SetBinContent(7,1374.291);
   15->SetBinContent(8,1121.87);
   15->SetBinContent(9,1234.057);
   15->SetBinContent(10,981.6364);
   15->SetBinContent(11,729.2156);
   15->SetBinContent(12,785.3091);
   15->SetBinContent(13,869.4494);
   15->SetBinContent(14,841.4026);
   15->SetBinContent(15,757.2624);
   15->SetBinContent(16,617.0286);
   15->SetBinContent(17,420.7013);
   15->SetBinContent(18,420.7013);
   15->SetBinContent(19,476.7948);
   15->SetBinContent(20,448.7481);
   15->SetBinContent(21,560.9351);
   15->SetBinContent(22,448.7481);
   15->SetBinContent(23,476.7948);
   15->SetBinContent(24,336.5611);
   15->SetBinContent(25,168.2805);
   15->SetBinContent(26,224.374);
   15->SetBinContent(27,280.4676);
   15->SetBinContent(28,336.5611);
   15->SetBinContent(29,168.2805);
   15->SetBinContent(30,168.2805);
   15->SetBinContent(31,224.374);
   15->SetBinContent(32,140.2338);
   15->SetBinContent(33,140.2338);
   15->SetBinContent(34,84.14027);
   15->SetBinContent(35,84.14027);
   15->SetBinContent(36,140.2338);
   15->SetBinContent(37,56.09351);
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
   16->SetBinContent(1,4035.533);
   16->SetBinContent(2,1943.419);
   16->SetBinContent(3,1083.219);
   16->SetBinContent(4,796.4845);
   16->SetBinContent(5,637.1873);
   16->SetBinContent(6,499.1298);
   16->SetBinContent(7,392.932);
   16->SetBinContent(8,477.8903);
   16->SetBinContent(9,318.5935);
   16->SetBinContent(10,297.354);
   16->SetBinContent(11,233.6353);
   16->SetBinContent(12,244.2551);
   16->SetBinContent(13,169.9166);
   16->SetBinContent(14,201.7759);
   16->SetBinContent(15,138.0573);
   16->SetBinContent(16,223.0155);
   16->SetBinContent(17,84.95831);
   16->SetBinContent(18,148.677);
   16->SetBinContent(19,138.0573);
   16->SetBinContent(20,84.95831);
   16->SetBinContent(21,127.4375);
   16->SetBinContent(22,84.95831);
   16->SetBinContent(23,53.09894);
   16->SetBinContent(24,138.0573);
   16->SetBinContent(25,63.71873);
   16->SetBinContent(26,53.09894);
   16->SetBinContent(27,63.71873);
   16->SetBinContent(28,31.85936);
   16->SetBinContent(29,74.33852);
   16->SetBinContent(30,31.85936);
   16->SetBinContent(31,31.85936);
   16->SetBinContent(32,31.85936);
   16->SetBinContent(33,63.71873);
   16->SetBinContent(34,10.61979);
   16->SetBinContent(35,21.23957);
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
   17->SetBinContent(1,7906.688);
   17->SetBinContent(2,11738.37);
   17->SetBinContent(3,9183.917);
   17->SetBinContent(4,9609.659);
   17->SetBinContent(5,6021.243);
   17->SetBinContent(6,4683.186);
   17->SetBinContent(7,4500.723);
   17->SetBinContent(8,2919.387);
   17->SetBinContent(9,2554.464);
   17->SetBinContent(10,2554.464);
   17->SetBinContent(11,1885.437);
   17->SetBinContent(12,2250.361);
   17->SetBinContent(13,1398.873);
   17->SetBinContent(14,1642.155);
   17->SetBinContent(15,1155.591);
   17->SetBinContent(16,1277.232);
   17->SetBinContent(17,486.5645);
   17->SetBinContent(18,912.3084);
   17->SetBinContent(19,1459.693);
   17->SetBinContent(20,790.6673);
   17->SetBinContent(21,973.129);
   17->SetBinContent(22,547.3851);
   17->SetBinContent(23,425.7439);
   17->SetBinContent(24,729.8467);
   17->SetBinContent(25,364.9234);
   17->SetBinContent(26,547.3851);
   17->SetBinContent(27,304.1028);
   17->SetBinContent(28,425.7439);
   17->SetBinContent(29,304.1028);
   17->SetBinContent(30,486.5645);
   17->SetBinContent(31,182.4617);
   17->SetBinContent(32,182.4617);
   17->SetBinContent(33,60.82056);
   17->SetBinContent(35,60.82056);
   17->SetBinContent(36,60.82056);
   17->SetBinContent(37,60.82056);
   17->SetBinContent(38,60.82056);
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
