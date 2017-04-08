{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:46:24 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.25534,1.31746,5.96355);
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
   
   TH1F *THStack_stack_31 = new TH1F("THStack_stack_31","",50,0,1);
   THStack_stack_31->SetMinimum(0.02535478);
   THStack_stack_31->SetMaximum(168282.3);
   THStack_stack_31->SetDirectory(0);
   THStack_stack_31->SetStats(0);
   THStack_stack_31->SetLineWidth(2);
   THStack_stack_31->SetMarkerSize(1.2);
   THStack_stack_31->GetXaxis()->SetTitle("cos*(#theta_{W}) sub-jets");
   THStack_stack_31->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_31->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_31->GetXaxis()->SetLabelColor(ci);
   THStack_stack_31->GetXaxis()->SetLabelFont(42);
   THStack_stack_31->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_31->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_31->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_31->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_31->GetXaxis()->SetTitleColor(ci);
   THStack_stack_31->GetXaxis()->SetTitleFont(42);
   THStack_stack_31->GetYaxis()->SetTitle("Number of events");
   THStack_stack_31->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_31->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_31->GetYaxis()->SetLabelColor(ci);
   THStack_stack_31->GetYaxis()->SetLabelFont(42);
   THStack_stack_31->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_31->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_31->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_31->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_31->GetYaxis()->SetTitleColor(ci);
   THStack_stack_31->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_31->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_31->GetZaxis()->SetLabelColor(ci);
   THStack_stack_31->GetZaxis()->SetLabelFont(42);
   THStack_stack_31->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_31->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_31->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_31->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_31->GetZaxis()->SetTitleColor(ci);
   THStack_stack_31->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_31);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,1.841217);
   0->SetBinContent(2,1.960005);
   0->SetBinContent(3,1.722428);
   0->SetBinContent(4,1.861015);
   0->SetBinContent(5,1.91051);
   0->SetBinContent(6,1.732327);
   0->SetBinContent(7,1.91051);
   0->SetBinContent(8,1.781822);
   0->SetBinContent(9,1.920409);
   0->SetBinContent(10,1.80162);
   0->SetBinContent(11,1.672933);
   0->SetBinContent(12,1.623438);
   0->SetBinContent(13,1.70263);
   0->SetBinContent(14,2.019399);
   0->SetBinContent(15,1.752125);
   0->SetBinContent(16,1.831318);
   0->SetBinContent(17,2.138186);
   0->SetBinContent(18,1.81152);
   0->SetBinContent(19,1.672933);
   0->SetBinContent(20,1.80162);
   0->SetBinContent(21,1.692731);
   0->SetBinContent(22,1.633337);
   0->SetBinContent(23,1.771923);
   0->SetBinContent(24,1.890712);
   0->SetBinContent(25,1.91051);
   0->SetBinContent(26,2.0095);
   0->SetBinContent(27,1.663034);
   0->SetBinContent(28,1.752125);
   0->SetBinContent(29,1.80162);
   0->SetBinContent(30,1.841217);
   0->SetBinContent(31,1.643236);
   0->SetBinContent(32,1.841217);
   0->SetBinContent(33,1.672933);
   0->SetBinContent(34,1.781822);
   0->SetBinContent(35,1.732327);
   0->SetBinContent(36,1.672933);
   0->SetBinContent(37,1.821419);
   0->SetBinContent(38,1.781822);
   0->SetBinContent(39,1.564044);
   0->SetBinContent(40,1.900611);
   0->SetBinContent(41,1.831318);
   0->SetBinContent(42,1.781822);
   0->SetBinContent(43,1.593741);
   0->SetBinContent(44,1.851116);
   0->SetBinContent(45,1.851116);
   0->SetBinContent(46,2.049095);
   0->SetBinContent(47,1.870914);
   0->SetBinContent(48,1.583842);
   0->SetBinContent(49,2.058994);
   0->SetBinContent(50,1.752125);
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
   1->SetBinContent(1,1.138267);
   1->SetBinContent(2,1.098675);
   1->SetBinContent(3,0.9155631);
   1->SetBinContent(4,0.9947467);
   1->SetBinContent(5,1.167961);
   1->SetBinContent(6,1.093726);
   1->SetBinContent(7,0.940308);
   1->SetBinContent(8,0.9106141);
   1->SetBinContent(9,1.02939);
   1->SetBinContent(10,1.068981);
   1->SetBinContent(11,1.019492);
   1->SetBinContent(12,1.054134);
   1->SetBinContent(13,0.940308);
   1->SetBinContent(14,0.9798998);
   1->SetBinContent(15,0.9650528);
   1->SetBinContent(16,0.940308);
   1->SetBinContent(17,0.8561754);
   1->SetBinContent(18,1.059083);
   1->SetBinContent(19,1.039287);
   1->SetBinContent(20,0.9749508);
   1->SetBinContent(21,0.9551549);
   1->SetBinContent(22,1.039287);
   1->SetBinContent(23,1.12342);
   1->SetBinContent(24,1.088777);
   1->SetBinContent(25,0.9947467);
   1->SetBinContent(26,0.9798998);
   1->SetBinContent(27,1.068981);
   1->SetBinContent(28,1.004645);
   1->SetBinContent(29,1.143216);
   1->SetBinContent(30,1.068981);
   1->SetBinContent(31,1.26694);
   1->SetBinContent(32,1.133318);
   1->SetBinContent(33,1.163012);
   1->SetBinContent(34,1.21745);
   1->SetBinContent(35,1.346124);
   1->SetBinContent(36,1.276838);
   1->SetBinContent(37,1.306532);
   1->SetBinContent(38,1.202604);
   1->SetBinContent(39,1.474797);
   1->SetBinContent(40,1.346124);
   1->SetBinContent(41,1.474797);
   1->SetBinContent(42,1.573777);
   1->SetBinContent(43,1.831123);
   1->SetBinContent(44,1.732144);
   1->SetBinContent(45,2.009286);
   1->SetBinContent(46,2.197352);
   1->SetBinContent(47,2.286436);
   1->SetBinContent(48,2.900123);
   1->SetBinContent(49,3.543505);
   1->SetBinContent(50,3.696927);
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
   2->SetBinContent(1,2.162708);
   2->SetBinContent(2,2.326028);
   2->SetBinContent(3,2.365621);
   2->SetBinContent(4,2.365621);
   2->SetBinContent(5,2.103319);
   2->SetBinContent(6,2.246843);
   2->SetBinContent(7,2.355723);
   2->SetBinContent(8,2.311181);
   2->SetBinContent(9,2.078574);
   2->SetBinContent(10,2.360672);
   2->SetBinContent(11,2.231996);
   2->SetBinContent(12,2.266639);
   2->SetBinContent(13,2.222097);
   2->SetBinContent(14,2.231996);
   2->SetBinContent(15,2.380468);
   2->SetBinContent(16,2.504196);
   2->SetBinContent(17,2.340876);
   2->SetBinContent(18,2.281487);
   2->SetBinContent(19,2.212199);
   2->SetBinContent(20,2.538839);
   2->SetBinContent(21,2.375519);
   2->SetBinContent(22,2.266639);
   2->SetBinContent(23,2.256741);
   2->SetBinContent(24,2.311181);
   2->SetBinContent(25,2.415112);
   2->SetBinContent(26,2.281487);
   2->SetBinContent(27,2.227046);
   2->SetBinContent(28,2.360672);
   2->SetBinContent(29,2.241894);
   2->SetBinContent(30,2.222097);
   2->SetBinContent(31,2.330977);
   2->SetBinContent(32,2.177556);
   2->SetBinContent(33,2.296334);
   2->SetBinContent(34,2.548738);
   2->SetBinContent(35,2.746701);
   2->SetBinContent(36,2.573483);
   2->SetBinContent(37,2.58833);
   2->SetBinContent(38,2.637821);
   2->SetBinContent(39,2.603178);
   2->SetBinContent(40,2.528941);
   2->SetBinContent(41,2.934767);
   2->SetBinContent(42,3.08324);
   2->SetBinContent(43,2.939716);
   2->SetBinContent(44,3.157476);
   2->SetBinContent(45,3.404931);
   2->SetBinContent(46,3.632589);
   2->SetBinContent(47,4.162142);
   2->SetBinContent(48,5.127215);
   2->SetBinContent(49,5.790393);
   2->SetBinContent(50,6.616892);
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
   3->SetBinContent(1,9.487943);
   3->SetBinContent(2,9.352883);
   3->SetBinContent(3,10.02818);
   3->SetBinContent(4,8.542527);
   3->SetBinContent(5,9.420413);
   3->SetBinContent(6,8.812646);
   3->SetBinContent(7,10.23077);
   3->SetBinContent(8,9.859356);
   3->SetBinContent(9,9.758061);
   3->SetBinContent(10,9.184059);
   3->SetBinContent(11,10.46712);
   3->SetBinContent(12,10.36583);
   3->SetBinContent(13,9.521708);
   3->SetBinContent(14,10.197);
   3->SetBinContent(15,10.02818);
   3->SetBinContent(16,10.12947);
   3->SetBinContent(17,9.082765);
   3->SetBinContent(18,9.690532);
   3->SetBinContent(19,9.420413);
   3->SetBinContent(20,9.420413);
   3->SetBinContent(21,10.02818);
   3->SetBinContent(22,10.06194);
   3->SetBinContent(23,10.23077);
   3->SetBinContent(24,9.994415);
   3->SetBinContent(25,10.2983);
   3->SetBinContent(26,10.56842);
   3->SetBinContent(27,8.98147);
   3->SetBinContent(28,10.2983);
   3->SetBinContent(29,8.947705);
   3->SetBinContent(30,11.5476);
   3->SetBinContent(31,10.36583);
   3->SetBinContent(32,10.36583);
   3->SetBinContent(33,10.23077);
   3->SetBinContent(34,11.27748);
   3->SetBinContent(35,10.12947);
   3->SetBinContent(36,12.05407);
   3->SetBinContent(37,11.00736);
   3->SetBinContent(38,10.9736);
   3->SetBinContent(39,12.18913);
   3->SetBinContent(40,11.37877);
   3->SetBinContent(41,11.34501);
   3->SetBinContent(42,12.49301);
   3->SetBinContent(43,13.53972);
   3->SetBinContent(44,14.01243);
   3->SetBinContent(45,14.58643);
   3->SetBinContent(46,15.56561);
   3->SetBinContent(47,17.18636);
   3->SetBinContent(48,20.49541);
   3->SetBinContent(49,22.1837);
   3->SetBinContent(50,22.25123);
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
   4->SetBinContent(1,9.730336);
   4->SetBinContent(2,9.18369);
   4->SetBinContent(3,8.680776);
   4->SetBinContent(4,8.65891);
   4->SetBinContent(5,10.12392);
   4->SetBinContent(6,8.790105);
   4->SetBinContent(7,9.249288);
   4->SetBinContent(8,9.774068);
   4->SetBinContent(9,9.161824);
   4->SetBinContent(10,9.424214);
   4->SetBinContent(11,9.205556);
   4->SetBinContent(12,8.811971);
   4->SetBinContent(13,8.899434);
   4->SetBinContent(14,9.227422);
   4->SetBinContent(15,9.467946);
   4->SetBinContent(16,9.70847);
   4->SetBinContent(17,9.096227);
   4->SetBinContent(18,9.467946);
   4->SetBinContent(19,8.505849);
   4->SetBinContent(20,9.70847);
   4->SetBinContent(21,10.10206);
   4->SetBinContent(22,9.533544);
   4->SetBinContent(23,9.883397);
   4->SetBinContent(24,8.790105);
   4->SetBinContent(25,8.680776);
   4->SetBinContent(26,9.336751);
   4->SetBinContent(27,9.555409);
   4->SetBinContent(28,9.686604);
   4->SetBinContent(29,10.18952);
   4->SetBinContent(30,10.45191);
   4->SetBinContent(31,10.5831);
   4->SetBinContent(32,10.38631);
   4->SetBinContent(33,10.97669);
   4->SetBinContent(34,10.40818);
   4->SetBinContent(35,11.10788);
   4->SetBinContent(36,10.91109);
   4->SetBinContent(37,11.45774);
   4->SetBinContent(38,10.7143);
   4->SetBinContent(39,12.5073);
   4->SetBinContent(40,11.96065);
   4->SetBinContent(41,13.36007);
   4->SetBinContent(42,13.29447);
   4->SetBinContent(43,13.92858);
   4->SetBinContent(44,16.18076);
   4->SetBinContent(45,16.33382);
   4->SetBinContent(46,19.17638);
   4->SetBinContent(47,19.83236);
   4->SetBinContent(48,23.61515);
   4->SetBinContent(49,29.86878);
   4->SetBinContent(50,34.32941);
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
   5->SetBinContent(1,39.07941);
   5->SetBinContent(2,37.33475);
   5->SetBinContent(3,37.33475);
   5->SetBinContent(4,38.03262);
   5->SetBinContent(5,36.1135);
   5->SetBinContent(6,36.34612);
   5->SetBinContent(7,40.99852);
   5->SetBinContent(8,37.8);
   5->SetBinContent(9,37.33475);
   5->SetBinContent(10,39.13756);
   5->SetBinContent(11,35.29933);
   5->SetBinContent(12,38.73048);
   5->SetBinContent(13,38.09077);
   5->SetBinContent(14,39.77727);
   5->SetBinContent(15,38.26524);
   5->SetBinContent(16,37.04398);
   5->SetBinContent(17,37.74184);
   5->SetBinContent(18,36.22981);
   5->SetBinContent(19,34.48516);
   5->SetBinContent(20,39.31203);
   5->SetBinContent(21,38.38155);
   5->SetBinContent(22,35.47379);
   5->SetBinContent(23,37.2766);
   5->SetBinContent(24,37.85815);
   5->SetBinContent(25,37.10213);
   5->SetBinContent(26,38.20708);
   5->SetBinContent(27,39.89358);
   5->SetBinContent(28,36.98582);
   5->SetBinContent(29,39.02125);
   5->SetBinContent(30,40.35882);
   5->SetBinContent(31,39.19572);
   5->SetBinContent(32,41.17299);
   5->SetBinContent(33,41.58007);
   5->SetBinContent(34,40.1262);
   5->SetBinContent(35,41.929);
   5->SetBinContent(36,37.56738);
   5->SetBinContent(37,43.55735);
   5->SetBinContent(38,44.31336);
   5->SetBinContent(39,44.95307);
   5->SetBinContent(40,45.12753);
   5->SetBinContent(41,47.1048);
   5->SetBinContent(42,47.04665);
   5->SetBinContent(43,49.72178);
   5->SetBinContent(44,51.23381);
   5->SetBinContent(45,56.75854);
   5->SetBinContent(46,59.60814);
   5->SetBinContent(47,68.15666);
   5->SetBinContent(48,76.53044);
   5->SetBinContent(49,90.8938);
   5->SetBinContent(50,99.20943);
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
   6->SetBinContent(1,913.909);
   6->SetBinContent(2,870.0552);
   6->SetBinContent(3,901.6299);
   6->SetBinContent(4,935.8359);
   6->SetBinContent(5,878.826);
   6->SetBinContent(6,875.3177);
   6->SetBinContent(7,919.1714);
   6->SetBinContent(8,908.6465);
   6->SetBinContent(9,892.8592);
   6->SetBinContent(10,902.507);
   6->SetBinContent(11,927.9422);
   6->SetBinContent(12,897.2446);
   6->SetBinContent(13,925.311);
   6->SetBinContent(14,843.743);
   6->SetBinContent(15,937.59);
   6->SetBinContent(16,919.1714);
   6->SetBinContent(17,917.4173);
   6->SetBinContent(18,877.0718);
   6->SetBinContent(19,873.5635);
   6->SetBinContent(20,913.0319);
   6->SetBinContent(21,945.4837);
   6->SetBinContent(22,946.3608);
   6->SetBinContent(23,898.9987);
   6->SetBinContent(24,953.3774);
   6->SetBinContent(25,927.0651);
   6->SetBinContent(26,931.4505);
   6->SetBinContent(27,932.3276);
   6->SetBinContent(28,995.477);
   6->SetBinContent(29,1013.018);
   6->SetBinContent(30,990.2145);
   6->SetBinContent(31,1038.454);
   6->SetBinContent(32,1070.028);
   6->SetBinContent(33,1022.666);
   6->SetBinContent(34,1083.184);
   6->SetBinContent(35,1171.769);
   6->SetBinContent(36,1159.49);
   6->SetBinContent(37,1143.703);
   6->SetBinContent(38,1227.902);
   6->SetBinContent(39,1263.862);
   6->SetBinContent(40,1312.101);
   6->SetBinContent(41,1400.686);
   6->SetBinContent(42,1463.835);
   6->SetBinContent(43,1593.642);
   6->SetBinContent(44,1594.519);
   6->SetBinContent(45,1830.453);
   6->SetBinContent(46,2076.907);
   6->SetBinContent(47,2381.209);
   6->SetBinContent(48,2863.534);
   6->SetBinContent(49,3994.803);
   6->SetBinContent(50,4865.618);
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
   7->SetBinContent(1,228.4476);
   7->SetBinContent(2,227.0664);
   7->SetBinContent(3,224.7183);
   7->SetBinContent(4,240.0499);
   7->SetBinContent(5,237.2875);
   7->SetBinContent(6,232.3151);
   7->SetBinContent(7,222.3703);
   7->SetBinContent(8,231.6245);
   7->SetBinContent(9,223.0609);
   7->SetBinContent(10,216.2929);
   7->SetBinContent(11,216.0166);
   7->SetBinContent(12,220.8509);
   7->SetBinContent(13,223.6134);
   7->SetBinContent(14,224.5802);
   7->SetBinContent(15,221.2653);
   7->SetBinContent(16,226.5139);
   7->SetBinContent(17,228.1714);
   7->SetBinContent(18,223.4752);
   7->SetBinContent(19,210.6298);
   7->SetBinContent(20,231.3482);
   7->SetBinContent(21,222.094);
   7->SetBinContent(22,236.4588);
   7->SetBinContent(23,222.094);
   7->SetBinContent(24,225.9614);
   7->SetBinContent(25,230.7957);
   7->SetBinContent(26,214.3591);
   7->SetBinContent(27,223.4752);
   7->SetBinContent(28,223.0609);
   7->SetBinContent(29,229.967);
   7->SetBinContent(30,233.8344);
   7->SetBinContent(31,222.7846);
   7->SetBinContent(32,229.5526);
   7->SetBinContent(33,234.9394);
   7->SetBinContent(34,228.4476);
   7->SetBinContent(35,241.0168);
   7->SetBinContent(36,241.5693);
   7->SetBinContent(37,245.4367);
   7->SetBinContent(38,249.0279);
   7->SetBinContent(39,246.8179);
   7->SetBinContent(40,260.9064);
   7->SetBinContent(41,270.575);
   7->SetBinContent(42,280.1055);
   7->SetBinContent(43,288.5309);
   7->SetBinContent(44,290.1884);
   7->SetBinContent(45,315.3267);
   7->SetBinContent(46,340.3269);
   7->SetBinContent(47,377.7581);
   7->SetBinContent(48,431.9022);
   7->SetBinContent(49,511.0464);
   7->SetBinContent(50,565.3286);
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
   8->SetBinContent(1,47.1179);
   8->SetBinContent(2,46.19402);
   8->SetBinContent(3,38.80296);
   8->SetBinContent(4,41.57461);
   8->SetBinContent(5,45.27013);
   8->SetBinContent(6,45.27013);
   8->SetBinContent(7,36.9552);
   8->SetBinContent(8,43.42237);
   8->SetBinContent(9,42.49849);
   8->SetBinContent(10,36.9552);
   8->SetBinContent(11,41.57461);
   8->SetBinContent(12,50.81342);
   8->SetBinContent(13,52.66119);
   8->SetBinContent(14,44.34625);
   8->SetBinContent(15,48.96566);
   8->SetBinContent(16,44.34625);
   8->SetBinContent(17,47.1179);
   8->SetBinContent(18,35.10744);
   8->SetBinContent(19,34.18356);
   8->SetBinContent(20,37.87908);
   8->SetBinContent(21,38.80296);
   8->SetBinContent(22,34.18356);
   8->SetBinContent(23,26.79251);
   8->SetBinContent(24,31.41191);
   8->SetBinContent(25,37.87908);
   8->SetBinContent(26,38.80296);
   8->SetBinContent(27,44.34625);
   8->SetBinContent(28,33.25967);
   8->SetBinContent(29,25.86863);
   8->SetBinContent(30,41.57461);
   8->SetBinContent(31,32.33579);
   8->SetBinContent(32,30.48803);
   8->SetBinContent(33,35.10744);
   8->SetBinContent(34,32.33579);
   8->SetBinContent(35,40.65073);
   8->SetBinContent(36,39.72684);
   8->SetBinContent(37,17.55372);
   8->SetBinContent(38,32.33579);
   8->SetBinContent(39,34.18356);
   8->SetBinContent(40,31.41191);
   8->SetBinContent(41,36.03132);
   8->SetBinContent(42,42.49849);
   8->SetBinContent(43,30.48803);
   8->SetBinContent(44,38.80296);
   8->SetBinContent(45,41.57461);
   8->SetBinContent(46,45.27013);
   8->SetBinContent(47,52.66119);
   8->SetBinContent(48,71.13882);
   8->SetBinContent(49,73.91046);
   8->SetBinContent(50,87.76868);
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
   9->SetBinContent(1,285.2771);
   9->SetBinContent(2,307.2559);
   9->SetBinContent(3,323.5201);
   9->SetBinContent(4,324.8389);
   9->SetBinContent(5,306.8163);
   9->SetBinContent(6,293.1895);
   9->SetBinContent(7,312.0912);
   9->SetBinContent(8,309.0142);
   9->SetBinContent(9,305.4976);
   9->SetBinContent(10,324.3993);
   9->SetBinContent(11,295.8269);
   9->SetBinContent(12,282.6396);
   9->SetBinContent(13,301.5414);
   9->SetBinContent(14,301.1018);
   9->SetBinContent(15,304.6184);
   9->SetBinContent(16,326.5972);
   9->SetBinContent(17,296.2665);
   9->SetBinContent(18,313.8495);
   9->SetBinContent(19,318.2452);
   9->SetBinContent(20,283.9584);
   9->SetBinContent(21,312.5308);
   9->SetBinContent(22,311.6516);
   9->SetBinContent(23,298.0248);
   9->SetBinContent(24,317.3661);
   9->SetBinContent(25,296.7061);
   9->SetBinContent(26,297.1456);
   9->SetBinContent(27,277.8043);
   9->SetBinContent(28,308.135);
   9->SetBinContent(29,295.8269);
   9->SetBinContent(30,305.4976);
   9->SetBinContent(31,304.1788);
   9->SetBinContent(32,317.3661);
   9->SetBinContent(33,295.3873);
   9->SetBinContent(34,289.2333);
   9->SetBinContent(35,301.1018);
   9->SetBinContent(36,313.4099);
   9->SetBinContent(37,298.0248);
   9->SetBinContent(38,307.6954);
   9->SetBinContent(39,295.8269);
   9->SetBinContent(40,292.7499);
   9->SetBinContent(41,305.058);
   9->SetBinContent(42,307.2559);
   9->SetBinContent(43,301.1018);
   9->SetBinContent(44,295.8269);
   9->SetBinContent(45,307.2559);
   9->SetBinContent(46,320.8827);
   9->SetBinContent(47,346.3781);
   9->SetBinContent(48,360.884);
   9->SetBinContent(49,389.0168);
   9->SetBinContent(50,381.9836);
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
   10->SetBinContent(1,2358.931);
   10->SetBinContent(2,2335.047);
   10->SetBinContent(3,2333.3);
   10->SetBinContent(4,2324.562);
   10->SetBinContent(5,2334.174);
   10->SetBinContent(6,2346.406);
   10->SetBinContent(7,2338.251);
   10->SetBinContent(8,2343.203);
   10->SetBinContent(9,2348.445);
   10->SetBinContent(10,2336.212);
   10->SetBinContent(11,2335.921);
   10->SetBinContent(12,2297.184);
   10->SetBinContent(13,2333.009);
   10->SetBinContent(14,2344.076);
   10->SetBinContent(15,2324.271);
   10->SetBinContent(16,2368.542);
   10->SetBinContent(17,2355.727);
   10->SetBinContent(18,2355.436);
   10->SetBinContent(19,2393.008);
   10->SetBinContent(20,2422.717);
   10->SetBinContent(21,2438.445);
   10->SetBinContent(22,2380.484);
   10->SetBinContent(23,2455.046);
   10->SetBinContent(24,2442.522);
   10->SetBinContent(25,2442.813);
   10->SetBinContent(26,2486.211);
   10->SetBinContent(27,2524.366);
   10->SetBinContent(28,2576.793);
   10->SetBinContent(29,2604.463);
   10->SetBinContent(30,2619.899);
   10->SetBinContent(31,2625.433);
   10->SetBinContent(32,2710.481);
   10->SetBinContent(33,2704.365);
   10->SetBinContent(34,2783.296);
   10->SetBinContent(35,2822.616);
   10->SetBinContent(36,2897.179);
   10->SetBinContent(37,2974.945);
   10->SetBinContent(38,2980.77);
   10->SetBinContent(39,3148.827);
   10->SetBinContent(40,3239.409);
   10->SetBinContent(41,3353.874);
   10->SetBinContent(42,3478.242);
   10->SetBinContent(43,3651.542);
   10->SetBinContent(44,3842.608);
   10->SetBinContent(45,4190.002);
   10->SetBinContent(46,4573.852);
   10->SetBinContent(47,5167.814);
   10->SetBinContent(48,6148.246);
   10->SetBinContent(49,7732.535);
   10->SetBinContent(50,8823.553);
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
   11->SetBinContent(1,366.25);
   11->SetBinContent(2,396.7708);
   11->SetBinContent(3,427.2917);
   11->SetBinContent(4,488.3334);
   11->SetBinContent(5,640.9374);
   11->SetBinContent(6,427.2917);
   11->SetBinContent(7,640.9374);
   11->SetBinContent(8,457.8125);
   11->SetBinContent(9,518.8542);
   11->SetBinContent(10,701.9791);
   11->SetBinContent(11,457.8125);
   11->SetBinContent(12,488.3334);
   11->SetBinContent(13,244.1666);
   11->SetBinContent(14,732.4999);
   11->SetBinContent(15,396.7708);
   11->SetBinContent(16,427.2917);
   11->SetBinContent(17,640.9374);
   11->SetBinContent(18,518.8542);
   11->SetBinContent(19,488.3334);
   11->SetBinContent(20,671.4583);
   11->SetBinContent(21,610.4166);
   11->SetBinContent(22,549.375);
   11->SetBinContent(23,640.9374);
   11->SetBinContent(24,488.3334);
   11->SetBinContent(25,579.8958);
   11->SetBinContent(26,366.25);
   11->SetBinContent(27,305.2083);
   11->SetBinContent(28,579.8958);
   11->SetBinContent(29,518.8542);
   11->SetBinContent(30,549.375);
   11->SetBinContent(31,915.6248);
   11->SetBinContent(32,427.2917);
   11->SetBinContent(33,671.4583);
   11->SetBinContent(34,671.4583);
   11->SetBinContent(35,488.3334);
   11->SetBinContent(36,732.4999);
   11->SetBinContent(37,640.9374);
   11->SetBinContent(38,549.375);
   11->SetBinContent(39,549.375);
   11->SetBinContent(40,488.3334);
   11->SetBinContent(41,457.8125);
   11->SetBinContent(42,854.5831);
   11->SetBinContent(43,763.0207);
   11->SetBinContent(44,1098.75);
   11->SetBinContent(45,793.5415);
   11->SetBinContent(46,640.9374);
   11->SetBinContent(47,915.6248);
   11->SetBinContent(48,1312.396);
   11->SetBinContent(49,2197.501);
   11->SetBinContent(50,1648.125);
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
   12->SetBinContent(1,258.4606);
   12->SetBinContent(2,269.9156);
   12->SetBinContent(3,239.8457);
   12->SetBinContent(4,248.4372);
   12->SetBinContent(5,255.5968);
   12->SetBinContent(6,274.2113);
   12->SetBinContent(7,236.9819);
   12->SetBinContent(8,257.7446);
   12->SetBinContent(9,234.834);
   12->SetBinContent(10,257.0287);
   12->SetBinContent(11,244.1415);
   12->SetBinContent(12,246.2893);
   12->SetBinContent(13,251.301);
   12->SetBinContent(14,244.8574);
   12->SetBinContent(15,222.6627);
   12->SetBinContent(16,235.55);
   12->SetBinContent(17,234.1181);
   12->SetBinContent(18,225.5266);
   12->SetBinContent(19,221.9468);
   12->SetBinContent(20,246.2893);
   12->SetBinContent(21,242.7095);
   12->SetBinContent(22,267.0519);
   12->SetBinContent(23,234.834);
   12->SetBinContent(24,245.5734);
   12->SetBinContent(25,239.1298);
   12->SetBinContent(26,236.9819);
   12->SetBinContent(27,249.1532);
   12->SetBinContent(28,248.4372);
   12->SetBinContent(29,261.3243);
   12->SetBinContent(30,238.4138);
   12->SetBinContent(31,239.1298);
   12->SetBinContent(32,263.4722);
   12->SetBinContent(33,239.8457);
   12->SetBinContent(34,286.3823);
   12->SetBinContent(35,264.1881);
   12->SetBinContent(36,261.3243);
   12->SetBinContent(37,224.8106);
   12->SetBinContent(38,263.4722);
   12->SetBinContent(39,275.6432);
   12->SetBinContent(40,272.7794);
   12->SetBinContent(41,278.507);
   12->SetBinContent(42,311.4403);
   12->SetBinContent(43,286.3823);
   12->SetBinContent(44,352.249);
   12->SetBinContent(45,370.8635);
   12->SetBinContent(46,414.536);
   12->SetBinContent(47,521.9274);
   12->SetBinContent(48,690.8898);
   12->SetBinContent(49,1038.122);
   12->SetBinContent(50,1355.284);
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
   13->SetBinContent(1,5045.071);
   13->SetBinContent(2,6241.33);
   13->SetBinContent(3,5097.083);
   13->SetBinContent(4,6241.33);
   13->SetBinContent(5,6553.397);
   13->SetBinContent(6,6449.375);
   13->SetBinContent(7,4420.937);
   13->SetBinContent(8,5721.217);
   13->SetBinContent(9,6345.352);
   13->SetBinContent(10,4733.004);
   13->SetBinContent(11,5253.116);
   13->SetBinContent(12,5981.273);
   13->SetBinContent(13,5669.206);
   13->SetBinContent(14,5825.24);
   13->SetBinContent(15,5929.262);
   13->SetBinContent(16,5929.262);
   13->SetBinContent(17,4837.026);
   13->SetBinContent(18,5981.273);
   13->SetBinContent(19,5045.071);
   13->SetBinContent(20,6241.33);
   13->SetBinContent(21,5565.184);
   13->SetBinContent(22,4524.959);
   13->SetBinContent(23,5409.15);
   13->SetBinContent(24,5825.24);
   13->SetBinContent(25,6241.33);
   13->SetBinContent(26,5201.105);
   13->SetBinContent(27,6033.285);
   13->SetBinContent(28,5201.105);
   13->SetBinContent(29,5253.116);
   13->SetBinContent(30,5669.206);
   13->SetBinContent(31,5825.24);
   13->SetBinContent(32,6137.307);
   13->SetBinContent(33,6709.431);
   13->SetBinContent(34,6605.408);
   13->SetBinContent(35,7385.577);
   13->SetBinContent(36,8113.734);
   13->SetBinContent(37,7437.588);
   13->SetBinContent(38,7385.577);
   13->SetBinContent(39,8737.863);
   13->SetBinContent(40,7749.655);
   13->SetBinContent(41,7749.655);
   13->SetBinContent(42,8321.777);
   13->SetBinContent(43,8269.767);
   13->SetBinContent(44,8373.788);
   13->SetBinContent(45,11546.44);
   13->SetBinContent(46,10922.31);
   13->SetBinContent(47,14511.06);
   13->SetBinContent(48,15343.23);
   13->SetBinContent(49,23925.14);
   13->SetBinContent(50,28086.08);
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
   14->SetBinContent(1,601.5475);
   14->SetBinContent(2,647.8204);
   14->SetBinContent(3,509.0017);
   14->SetBinContent(4,638.5658);
   14->SetBinContent(5,740.3661);
   14->SetBinContent(6,638.5658);
   14->SetBinContent(7,555.2746);
   14->SetBinContent(8,666.3295);
   14->SetBinContent(9,721.857);
   14->SetBinContent(10,499.7472);
   14->SetBinContent(11,629.3112);
   14->SetBinContent(12,675.5841);
   14->SetBinContent(13,620.0566);
   14->SetBinContent(14,694.0933);
   14->SetBinContent(15,758.8753);
   14->SetBinContent(16,823.6573);
   14->SetBinContent(17,666.3295);
   14->SetBinContent(18,758.8753);
   14->SetBinContent(19,703.3478);
   14->SetBinContent(20,703.3478);
   14->SetBinContent(21,731.1116);
   14->SetBinContent(22,768.1299);
   14->SetBinContent(23,721.857);
   14->SetBinContent(24,675.5841);
   14->SetBinContent(25,740.3661);
   14->SetBinContent(26,879.1848);
   14->SetBinContent(27,869.9302);
   14->SetBinContent(28,934.7123);
   14->SetBinContent(29,879.1848);
   14->SetBinContent(30,897.694);
   14->SetBinContent(31,925.4577);
   14->SetBinContent(32,934.7123);
   14->SetBinContent(33,1119.803);
   14->SetBinContent(34,934.7123);
   14->SetBinContent(35,1027.258);
   14->SetBinContent(36,1147.567);
   14->SetBinContent(37,1193.839);
   14->SetBinContent(38,1489.984);
   14->SetBinContent(39,1415.948);
   14->SetBinContent(40,1527.002);
   14->SetBinContent(41,1749.11);
   14->SetBinContent(42,1887.928);
   14->SetBinContent(43,2156.311);
   14->SetBinContent(44,2748.607);
   14->SetBinContent(45,3044.756);
   14->SetBinContent(46,3748.108);
   14->SetBinContent(47,5395.4);
   14->SetBinContent(48,6635.489);
   14->SetBinContent(49,9439.636);
   14->SetBinContent(50,13123.08);
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
   15->SetBinContent(1,252.4208);
   15->SetBinContent(2,280.4676);
   15->SetBinContent(3,140.2338);
   15->SetBinContent(4,140.2338);
   15->SetBinContent(5,56.09351);
   15->SetBinContent(6,168.2805);
   15->SetBinContent(7,336.5611);
   15->SetBinContent(8,140.2338);
   15->SetBinContent(9,336.5611);
   15->SetBinContent(10,224.374);
   15->SetBinContent(11,196.3273);
   15->SetBinContent(12,196.3273);
   15->SetBinContent(13,140.2338);
   15->SetBinContent(14,168.2805);
   15->SetBinContent(15,196.3273);
   15->SetBinContent(16,308.5143);
   15->SetBinContent(17,140.2338);
   15->SetBinContent(18,448.7481);
   15->SetBinContent(19,140.2338);
   15->SetBinContent(20,224.374);
   15->SetBinContent(21,224.374);
   15->SetBinContent(22,196.3273);
   15->SetBinContent(23,168.2805);
   15->SetBinContent(24,420.7013);
   15->SetBinContent(25,336.5611);
   15->SetBinContent(26,280.4676);
   15->SetBinContent(27,252.4208);
   15->SetBinContent(28,280.4676);
   15->SetBinContent(29,420.7013);
   15->SetBinContent(30,364.6078);
   15->SetBinContent(31,252.4208);
   15->SetBinContent(32,364.6078);
   15->SetBinContent(33,224.374);
   15->SetBinContent(34,252.4208);
   15->SetBinContent(35,448.7481);
   15->SetBinContent(36,560.9351);
   15->SetBinContent(37,560.9351);
   15->SetBinContent(38,308.5143);
   15->SetBinContent(39,532.8884);
   15->SetBinContent(40,729.2156);
   15->SetBinContent(41,392.6546);
   15->SetBinContent(42,701.1689);
   15->SetBinContent(43,953.5897);
   15->SetBinContent(44,897.4962);
   15->SetBinContent(45,1177.964);
   15->SetBinContent(46,1682.805);
   15->SetBinContent(47,1402.338);
   15->SetBinContent(48,1935.226);
   15->SetBinContent(49,3225.382);
   15->SetBinContent(50,3730.226);
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
   16->SetBinContent(1,116.8177);
   16->SetBinContent(2,106.1979);
   16->SetBinContent(3,138.0573);
   16->SetBinContent(4,127.4375);
   16->SetBinContent(5,138.0573);
   16->SetBinContent(6,106.1979);
   16->SetBinContent(7,84.95831);
   16->SetBinContent(8,212.3957);
   16->SetBinContent(9,106.1979);
   16->SetBinContent(10,201.7759);
   16->SetBinContent(11,127.4375);
   16->SetBinContent(12,159.2968);
   16->SetBinContent(13,106.1979);
   16->SetBinContent(14,116.8177);
   16->SetBinContent(15,127.4375);
   16->SetBinContent(16,74.33852);
   16->SetBinContent(17,127.4375);
   16->SetBinContent(18,116.8177);
   16->SetBinContent(19,74.33852);
   16->SetBinContent(20,159.2968);
   16->SetBinContent(21,159.2968);
   16->SetBinContent(22,159.2968);
   16->SetBinContent(23,138.0573);
   16->SetBinContent(24,169.9166);
   16->SetBinContent(25,138.0573);
   16->SetBinContent(26,148.677);
   16->SetBinContent(27,169.9166);
   16->SetBinContent(28,138.0573);
   16->SetBinContent(29,191.1562);
   16->SetBinContent(30,191.1562);
   16->SetBinContent(31,201.7759);
   16->SetBinContent(32,191.1562);
   16->SetBinContent(33,191.1562);
   16->SetBinContent(34,116.8177);
   16->SetBinContent(35,169.9166);
   16->SetBinContent(36,233.6353);
   16->SetBinContent(37,201.7759);
   16->SetBinContent(38,201.7759);
   16->SetBinContent(39,159.2968);
   16->SetBinContent(40,307.9738);
   16->SetBinContent(41,307.9738);
   16->SetBinContent(42,212.3957);
   16->SetBinContent(43,318.5935);
   16->SetBinContent(44,435.4111);
   16->SetBinContent(45,435.4111);
   16->SetBinContent(46,403.5518);
   16->SetBinContent(47,700.9062);
   16->SetBinContent(48,817.7241);
   16->SetBinContent(49,1316.854);
   16->SetBinContent(50,1975.278);
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
   17->SetBinContent(1,912.3084);
   17->SetBinContent(2,851.4879);
   17->SetBinContent(3,608.2056);
   17->SetBinContent(4,547.3851);
   17->SetBinContent(5,790.6673);
   17->SetBinContent(6,547.3851);
   17->SetBinContent(7,1094.77);
   17->SetBinContent(8,1033.95);
   17->SetBinContent(9,547.3851);
   17->SetBinContent(10,851.4879);
   17->SetBinContent(11,1094.77);
   17->SetBinContent(12,547.3851);
   17->SetBinContent(13,425.7439);
   17->SetBinContent(14,425.7439);
   17->SetBinContent(15,425.7439);
   17->SetBinContent(16,1094.77);
   17->SetBinContent(17,1033.95);
   17->SetBinContent(18,851.4879);
   17->SetBinContent(19,608.2056);
   17->SetBinContent(20,486.5645);
   17->SetBinContent(21,608.2056);
   17->SetBinContent(22,608.2056);
   17->SetBinContent(23,790.6673);
   17->SetBinContent(24,729.8467);
   17->SetBinContent(25,729.8467);
   17->SetBinContent(26,669.0262);
   17->SetBinContent(27,1216.411);
   17->SetBinContent(28,851.4879);
   17->SetBinContent(29,729.8467);
   17->SetBinContent(30,973.129);
   17->SetBinContent(31,729.8467);
   17->SetBinContent(32,1824.617);
   17->SetBinContent(33,1702.976);
   17->SetBinContent(34,1155.591);
   17->SetBinContent(35,1338.052);
   17->SetBinContent(36,1520.514);
   17->SetBinContent(37,912.3084);
   17->SetBinContent(38,912.3084);
   17->SetBinContent(39,1642.155);
   17->SetBinContent(40,1398.873);
   17->SetBinContent(41,2007.078);
   17->SetBinContent(42,2250.361);
   17->SetBinContent(43,1885.437);
   17->SetBinContent(44,2250.361);
   17->SetBinContent(45,3345.131);
   17->SetBinContent(46,2797.746);
   17->SetBinContent(47,4318.261);
   17->SetBinContent(48,5656.318);
   17->SetBinContent(49,7906.688);
   17->SetBinContent(50,12468.21);
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
