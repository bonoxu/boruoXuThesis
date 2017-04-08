{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:46:12 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.238423,1.31746,5.902622);
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
   
   TH1F *THStack_stack_30 = new TH1F("THStack_stack_30","",50,0,1);
   THStack_stack_30->SetMinimum(0.02552498);
   THStack_stack_30->SetMaximum(148367.3);
   THStack_stack_30->SetDirectory(0);
   THStack_stack_30->SetStats(0);
   THStack_stack_30->SetLineWidth(2);
   THStack_stack_30->SetMarkerSize(1.2);
   THStack_stack_30->GetXaxis()->SetTitle("cos*(#theta_{H#rightarrowWW*}) sub-jets");
   THStack_stack_30->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_30->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_30->GetXaxis()->SetLabelColor(ci);
   THStack_stack_30->GetXaxis()->SetLabelFont(42);
   THStack_stack_30->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_30->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_30->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_30->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_30->GetXaxis()->SetTitleColor(ci);
   THStack_stack_30->GetXaxis()->SetTitleFont(42);
   THStack_stack_30->GetYaxis()->SetTitle("Number of events");
   THStack_stack_30->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_30->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_30->GetYaxis()->SetLabelColor(ci);
   THStack_stack_30->GetYaxis()->SetLabelFont(42);
   THStack_stack_30->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_30->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_30->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_30->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_30->GetYaxis()->SetTitleColor(ci);
   THStack_stack_30->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_30->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_30->GetZaxis()->SetLabelColor(ci);
   THStack_stack_30->GetZaxis()->SetLabelFont(42);
   THStack_stack_30->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_30->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_30->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_30->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_30->GetZaxis()->SetTitleColor(ci);
   THStack_stack_30->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_30);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,1.583842);
   0->SetBinContent(2,1.70263);
   0->SetBinContent(3,1.336367);
   0->SetBinContent(4,1.425458);
   0->SetBinContent(5,1.445256);
   0->SetBinContent(6,1.524448);
   0->SetBinContent(7,1.771923);
   0->SetBinContent(8,1.484852);
   0->SetBinContent(9,1.722428);
   0->SetBinContent(10,1.60364);
   0->SetBinContent(11,1.455155);
   0->SetBinContent(12,1.564044);
   0->SetBinContent(13,1.682832);
   0->SetBinContent(14,1.474953);
   0->SetBinContent(15,1.445256);
   0->SetBinContent(16,1.564044);
   0->SetBinContent(17,1.455155);
   0->SetBinContent(18,1.366064);
   0->SetBinContent(19,1.474953);
   0->SetBinContent(20,1.613539);
   0->SetBinContent(21,1.474953);
   0->SetBinContent(22,1.474953);
   0->SetBinContent(23,1.524448);
   0->SetBinContent(24,1.415559);
   0->SetBinContent(25,1.653135);
   0->SetBinContent(26,1.682832);
   0->SetBinContent(27,1.484852);
   0->SetBinContent(28,1.544246);
   0->SetBinContent(29,1.623438);
   0->SetBinContent(30,1.80162);
   0->SetBinContent(31,1.573943);
   0->SetBinContent(32,1.50465);
   0->SetBinContent(33,1.494751);
   0->SetBinContent(34,1.712529);
   0->SetBinContent(35,1.573943);
   0->SetBinContent(36,1.870914);
   0->SetBinContent(37,1.880813);
   0->SetBinContent(38,1.861015);
   0->SetBinContent(39,1.80162);
   0->SetBinContent(40,1.920409);
   0->SetBinContent(41,1.900611);
   0->SetBinContent(42,1.940207);
   0->SetBinContent(43,1.880813);
   0->SetBinContent(44,2.078792);
   0->SetBinContent(45,2.078792);
   0->SetBinContent(46,2.712322);
   0->SetBinContent(47,2.702423);
   0->SetBinContent(48,2.860805);
   0->SetBinContent(49,3.652717);
   0->SetBinContent(50,4.692119);
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
   1->SetBinContent(2,1.034338);
   1->SetBinContent(3,1.044236);
   1->SetBinContent(4,1.059083);
   1->SetBinContent(5,0.93041);
   1->SetBinContent(6,1.009594);
   1->SetBinContent(7,1.004645);
   1->SetBinContent(8,1.078879);
   1->SetBinContent(9,1.014543);
   1->SetBinContent(10,1.068981);
   1->SetBinContent(11,0.9502059);
   1->SetBinContent(12,1.078879);
   1->SetBinContent(13,0.9947467);
   1->SetBinContent(14,1.004645);
   1->SetBinContent(15,0.93041);
   1->SetBinContent(16,1.153114);
   1->SetBinContent(17,1.078879);
   1->SetBinContent(18,1.034338);
   1->SetBinContent(19,0.9155631);
   1->SetBinContent(20,1.083828);
   1->SetBinContent(21,1.138267);
   1->SetBinContent(22,1.049185);
   1->SetBinContent(23,1.009594);
   1->SetBinContent(24,1.07393);
   1->SetBinContent(25,0.9700018);
   1->SetBinContent(26,1.182808);
   1->SetBinContent(27,1.108573);
   1->SetBinContent(28,1.068981);
   1->SetBinContent(29,1.12342);
   1->SetBinContent(30,1.242195);
   1->SetBinContent(31,1.187757);
   1->SetBinContent(32,1.187757);
   1->SetBinContent(33,1.257042);
   1->SetBinContent(34,1.138267);
   1->SetBinContent(35,1.26694);
   1->SetBinContent(36,1.415409);
   1->SetBinContent(37,1.370869);
   1->SetBinContent(38,1.326328);
   1->SetBinContent(39,1.257042);
   1->SetBinContent(40,1.336226);
   1->SetBinContent(41,1.667807);
   1->SetBinContent(42,1.450052);
   1->SetBinContent(43,1.588624);
   1->SetBinContent(44,1.786582);
   1->SetBinContent(45,2.029083);
   1->SetBinContent(46,2.128065);
   1->SetBinContent(47,2.360672);
   1->SetBinContent(48,2.58833);
   1->SetBinContent(49,3.117883);
   1->SetBinContent(50,3.597945);
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
   2->SetBinContent(1,2.024134);
   2->SetBinContent(2,2.395316);
   2->SetBinContent(3,2.133014);
   2->SetBinContent(4,1.954848);
   2->SetBinContent(5,1.94495);
   2->SetBinContent(6,1.964746);
   2->SetBinContent(7,2.019185);
   2->SetBinContent(8,1.98949);
   2->SetBinContent(9,2.053828);
   2->SetBinContent(10,2.088472);
   2->SetBinContent(11,2.053828);
   2->SetBinContent(12,2.231996);
   2->SetBinContent(13,2.162708);
   2->SetBinContent(14,2.123116);
   2->SetBinContent(15,2.014235);
   2->SetBinContent(16,2.123116);
   2->SetBinContent(17,2.147861);
   2->SetBinContent(18,2.083523);
   2->SetBinContent(19,2.202301);
   2->SetBinContent(20,2.083523);
   2->SetBinContent(21,2.400265);
   2->SetBinContent(22,2.222097);
   2->SetBinContent(23,2.266639);
   2->SetBinContent(24,2.246843);
   2->SetBinContent(25,2.063726);
   2->SetBinContent(26,2.147861);
   2->SetBinContent(27,2.177556);
   2->SetBinContent(28,2.182505);
   2->SetBinContent(29,2.350774);
   2->SetBinContent(30,2.385417);
   2->SetBinContent(31,2.301283);
   2->SetBinContent(32,2.420061);
   2->SetBinContent(33,2.410163);
   2->SetBinContent(34,2.632872);
   2->SetBinContent(35,2.721956);
   2->SetBinContent(36,2.523992);
   2->SetBinContent(37,2.870429);
   2->SetBinContent(38,2.756599);
   2->SetBinContent(39,2.69721);
   2->SetBinContent(40,2.999105);
   2->SetBinContent(41,3.009003);
   2->SetBinContent(42,3.286152);
   2->SetBinContent(43,3.310898);
   2->SetBinContent(44,3.766214);
   2->SetBinContent(45,3.677131);
   2->SetBinContent(46,3.929534);
   2->SetBinContent(47,4.681797);
   2->SetBinContent(48,5.008437);
   2->SetBinContent(49,5.948764);
   2->SetBinContent(50,7.537423);
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
   3->SetBinContent(1,9.926886);
   3->SetBinContent(2,9.555472);
   3->SetBinContent(3,9.251589);
   3->SetBinContent(4,10.23077);
   3->SetBinContent(5,8.778881);
   3->SetBinContent(6,9.420413);
   3->SetBinContent(7,9.487943);
   3->SetBinContent(8,9.386648);
   3->SetBinContent(9,9.049);
   3->SetBinContent(10,9.555472);
   3->SetBinContent(11,9.319118);
   3->SetBinContent(12,9.251589);
   3->SetBinContent(13,9.386648);
   3->SetBinContent(14,8.474998);
   3->SetBinContent(15,9.555472);
   3->SetBinContent(16,9.454178);
   3->SetBinContent(17,8.576292);
   3->SetBinContent(18,9.994415);
   3->SetBinContent(19,9.352883);
   3->SetBinContent(20,9.386648);
   3->SetBinContent(21,8.98147);
   3->SetBinContent(22,9.319118);
   3->SetBinContent(23,9.082765);
   3->SetBinContent(24,10.06194);
   3->SetBinContent(25,10.70348);
   3->SetBinContent(26,10.70348);
   3->SetBinContent(27,10.197);
   3->SetBinContent(28,9.724297);
   3->SetBinContent(29,10.02818);
   3->SetBinContent(30,10.16324);
   3->SetBinContent(31,10.33206);
   3->SetBinContent(32,10.63595);
   3->SetBinContent(33,10.12947);
   3->SetBinContent(34,11.34501);
   3->SetBinContent(35,11.04113);
   3->SetBinContent(36,12.08784);
   3->SetBinContent(37,12.02031);
   3->SetBinContent(38,10.73724);
   3->SetBinContent(39,11.71642);
   3->SetBinContent(40,12.6956);
   3->SetBinContent(41,11.58136);
   3->SetBinContent(42,13.10078);
   3->SetBinContent(43,12.96572);
   3->SetBinContent(44,14.38384);
   3->SetBinContent(45,16.10585);
   3->SetBinContent(46,15.90326);
   3->SetBinContent(47,18.63829);
   3->SetBinContent(48,18.43569);
   3->SetBinContent(49,21.44085);
   3->SetBinContent(50,25.9317);
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
   4->SetBinContent(1,8.899434);
   4->SetBinContent(2,8.571446);
   4->SetBinContent(3,8.265325);
   4->SetBinContent(4,8.221593);
   4->SetBinContent(5,8.724507);
   4->SetBinContent(6,9.402349);
   4->SetBinContent(7,8.943166);
   4->SetBinContent(8,9.293019);
   4->SetBinContent(9,8.768239);
   4->SetBinContent(10,8.090398);
   4->SetBinContent(11,9.030629);
   4->SetBinContent(12,8.833837);
   4->SetBinContent(13,8.65891);
   4->SetBinContent(14,8.505849);
   4->SetBinContent(15,9.730336);
   4->SetBinContent(16,9.752202);
   4->SetBinContent(17,10.23325);
   4->SetBinContent(18,9.380483);
   4->SetBinContent(19,9.249288);
   4->SetBinContent(20,9.008763);
   4->SetBinContent(21,9.577275);
   4->SetBinContent(22,8.615178);
   4->SetBinContent(23,9.096227);
   4->SetBinContent(24,10.25512);
   4->SetBinContent(25,9.205556);
   4->SetBinContent(26,9.621007);
   4->SetBinContent(27,10.36445);
   4->SetBinContent(28,9.467946);
   4->SetBinContent(29,9.905263);
   4->SetBinContent(30,10.60497);
   4->SetBinContent(31,10.6487);
   4->SetBinContent(32,10.51751);
   4->SetBinContent(33,12.15744);
   4->SetBinContent(34,11.43587);
   4->SetBinContent(35,11.56707);
   4->SetBinContent(36,11.52334);
   4->SetBinContent(37,11.04229);
   4->SetBinContent(38,11.85132);
   4->SetBinContent(39,12.96648);
   4->SetBinContent(40,13.38193);
   4->SetBinContent(41,13.60059);
   4->SetBinContent(42,13.75365);
   4->SetBinContent(43,13.77552);
   4->SetBinContent(44,16.31196);
   4->SetBinContent(45,17.16472);
   4->SetBinContent(46,19.17638);
   4->SetBinContent(47,19.87609);
   4->SetBinContent(48,22.56559);
   4->SetBinContent(49,26.96062);
   4->SetBinContent(50,35.46644);
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
   5->SetBinContent(1,28.72791);
   5->SetBinContent(2,32.39157);
   5->SetBinContent(3,32.97313);
   5->SetBinContent(4,31.81003);
   5->SetBinContent(5,31.75188);
   5->SetBinContent(6,32.79866);
   5->SetBinContent(7,32.91497);
   5->SetBinContent(8,30.99589);
   5->SetBinContent(9,32.56604);
   5->SetBinContent(10,32.21711);
   5->SetBinContent(11,32.44973);
   5->SetBinContent(12,30.06544);
   5->SetBinContent(13,30.93773);
   5->SetBinContent(14,31.51927);
   5->SetBinContent(15,36.17165);
   5->SetBinContent(16,33.20575);
   5->SetBinContent(17,32.21711);
   5->SetBinContent(18,32.21711);
   5->SetBinContent(19,35.53195);
   5->SetBinContent(20,34.60147);
   5->SetBinContent(21,33.32206);
   5->SetBinContent(22,35.99719);
   5->SetBinContent(23,36.34612);
   5->SetBinContent(24,33.61283);
   5->SetBinContent(25,34.54331);
   5->SetBinContent(26,35.53195);
   5->SetBinContent(27,35.53195);
   5->SetBinContent(28,36.52058);
   5->SetBinContent(29,36.57874);
   5->SetBinContent(30,41.52192);
   5->SetBinContent(31,37.85815);
   5->SetBinContent(32,40.64959);
   5->SetBinContent(33,39.66096);
   5->SetBinContent(34,43.03395);
   5->SetBinContent(35,42.56871);
   5->SetBinContent(36,39.66096);
   5->SetBinContent(37,43.49919);
   5->SetBinContent(38,42.85949);
   5->SetBinContent(39,45.88355);
   5->SetBinContent(40,49.14023);
   5->SetBinContent(41,46.63956);
   5->SetBinContent(42,52.39692);
   5->SetBinContent(43,54.54865);
   5->SetBinContent(44,54.4905);
   5->SetBinContent(45,62.57405);
   5->SetBinContent(46,67.34254);
   5->SetBinContent(47,75.83263);
   5->SetBinContent(48,90.95195);
   5->SetBinContent(49,108.6299);
   5->SetBinContent(50,155.0346);
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
   6->SetBinContent(1,840.2347);
   6->SetBinContent(2,847.2513);
   6->SetBinContent(3,821.8161);
   6->SetBinContent(4,832.341);
   6->SetBinContent(5,858.6533);
   6->SetBinContent(6,834.9722);
   6->SetBinContent(7,869.1782);
   6->SetBinContent(8,854.2679);
   6->SetBinContent(9,819.1849);
   6->SetBinContent(10,811.2912);
   6->SetBinContent(11,913.0319);
   6->SetBinContent(12,858.6533);
   6->SetBinContent(13,859.5303);
   6->SetBinContent(14,842.8659);
   6->SetBinContent(15,856.8991);
   6->SetBinContent(16,860.4074);
   6->SetBinContent(17,914.7861);
   6->SetBinContent(18,906.0153);
   6->SetBinContent(19,891.9821);
   6->SetBinContent(20,917.4173);
   6->SetBinContent(21,912.1548);
   6->SetBinContent(22,863.9157);
   6->SetBinContent(23,957.7628);
   6->SetBinContent(24,947.2379);
   6->SetBinContent(25,934.0817);
   6->SetBinContent(26,984.9521);
   6->SetBinContent(27,947.2379);
   6->SetBinContent(28,1004.248);
   6->SetBinContent(29,1018.281);
   6->SetBinContent(30,992.8458);
   6->SetBinContent(31,1032.314);
   6->SetBinContent(32,1047.224);
   6->SetBinContent(33,1073.537);
   6->SetBinContent(34,1055.995);
   6->SetBinContent(35,1072.66);
   6->SetBinContent(36,1165.63);
   6->SetBinContent(37,1207.729);
   6->SetBinContent(38,1208.606);
   6->SetBinContent(39,1313.855);
   6->SetBinContent(40,1373.496);
   6->SetBinContent(41,1429.629);
   6->SetBinContent(42,1462.958);
   6->SetBinContent(43,1650.652);
   6->SetBinContent(44,1693.629);
   6->SetBinContent(45,1896.233);
   6->SetBinContent(46,2151.448);
   6->SetBinContent(47,2408.395);
   6->SetBinContent(48,2883.704);
   6->SetBinContent(49,3715.055);
   6->SetBinContent(50,5506.67);
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
   7->SetBinContent(1,177.3423);
   7->SetBinContent(2,182.8672);
   7->SetBinContent(3,181.486);
   7->SetBinContent(4,178.0329);
   7->SetBinContent(5,188.8065);
   7->SetBinContent(6,184.6628);
   7->SetBinContent(7,188.3921);
   7->SetBinContent(8,180.1048);
   7->SetBinContent(9,184.3866);
   7->SetBinContent(10,184.939);
   7->SetBinContent(11,192.2595);
   7->SetBinContent(12,188.6684);
   7->SetBinContent(13,188.1159);
   7->SetBinContent(14,185.0772);
   7->SetBinContent(15,196.6795);
   7->SetBinContent(16,189.7733);
   7->SetBinContent(17,186.4584);
   7->SetBinContent(18,189.9115);
   7->SetBinContent(19,190.8783);
   7->SetBinContent(20,195.5745);
   7->SetBinContent(21,195.9888);
   7->SetBinContent(22,189.4971);
   7->SetBinContent(23,203.3093);
   7->SetBinContent(24,199.3038);
   7->SetBinContent(25,204.9668);
   7->SetBinContent(26,209.663);
   7->SetBinContent(27,216.431);
   7->SetBinContent(28,211.7348);
   7->SetBinContent(29,204.6906);
   7->SetBinContent(30,217.8122);
   7->SetBinContent(31,220.4365);
   7->SetBinContent(32,226.3758);
   7->SetBinContent(33,226.5139);
   7->SetBinContent(34,232.8676);
   7->SetBinContent(35,223.199);
   7->SetBinContent(36,245.1605);
   7->SetBinContent(37,252.481);
   7->SetBinContent(38,251.9285);
   7->SetBinContent(39,275.2712);
   7->SetBinContent(40,273.89);
   7->SetBinContent(41,298.6139);
   7->SetBinContent(42,297.5089);
   7->SetBinContent(43,317.8129);
   7->SetBinContent(44,334.2495);
   7->SetBinContent(45,370.0233);
   7->SetBinContent(46,407.7307);
   7->SetBinContent(47,457.4548);
   7->SetBinContent(48,524.0299);
   7->SetBinContent(49,661.0475);
   7->SetBinContent(50,958.9778);
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
   8->SetBinContent(1,15.70596);
   8->SetBinContent(2,24.02087);
   8->SetBinContent(3,23.09699);
   8->SetBinContent(4,22.17311);
   8->SetBinContent(5,24.02087);
   8->SetBinContent(6,22.17311);
   8->SetBinContent(7,15.70596);
   8->SetBinContent(8,21.24924);
   8->SetBinContent(9,22.17311);
   8->SetBinContent(10,26.79251);
   8->SetBinContent(11,23.09699);
   8->SetBinContent(12,25.86863);
   8->SetBinContent(13,19.40148);
   8->SetBinContent(14,22.17311);
   8->SetBinContent(15,24.94475);
   8->SetBinContent(16,30.48803);
   8->SetBinContent(17,22.17311);
   8->SetBinContent(18,25.86863);
   8->SetBinContent(19,29.56415);
   8->SetBinContent(20,20.32536);
   8->SetBinContent(21,23.09699);
   8->SetBinContent(22,34.18356);
   8->SetBinContent(23,19.40148);
   8->SetBinContent(24,21.24924);
   8->SetBinContent(25,27.71639);
   8->SetBinContent(26,24.02087);
   8->SetBinContent(27,38.80296);
   8->SetBinContent(28,22.17311);
   8->SetBinContent(29,26.79251);
   8->SetBinContent(30,24.02087);
   8->SetBinContent(31,25.86863);
   8->SetBinContent(32,30.48803);
   8->SetBinContent(33,30.48803);
   8->SetBinContent(34,30.48803);
   8->SetBinContent(35,41.57461);
   8->SetBinContent(36,44.34625);
   8->SetBinContent(37,29.56415);
   8->SetBinContent(38,49.88954);
   8->SetBinContent(39,32.33579);
   8->SetBinContent(40,44.34625);
   8->SetBinContent(41,39.72684);
   8->SetBinContent(42,52.66119);
   8->SetBinContent(43,58.20448);
   8->SetBinContent(44,59.12836);
   8->SetBinContent(45,75.75822);
   8->SetBinContent(46,74.83434);
   8->SetBinContent(47,76.68211);
   8->SetBinContent(48,97.93138);
   8->SetBinContent(49,159.8312);
   8->SetBinContent(50,283.6307);
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
   9->SetBinContent(1,206.5948);
   9->SetBinContent(2,233.408);
   9->SetBinContent(3,236.4849);
   9->SetBinContent(4,222.419);
   9->SetBinContent(5,241.7596);
   9->SetBinContent(6,254.5069);
   9->SetBinContent(7,240.0014);
   9->SetBinContent(8,248.7926);
   9->SetBinContent(9,246.5948);
   9->SetBinContent(10,232.5289);
   9->SetBinContent(11,250.9904);
   9->SetBinContent(12,265.9358);
   9->SetBinContent(13,236.9245);
   9->SetBinContent(14,244.8366);
   9->SetBinContent(15,257.1443);
   9->SetBinContent(16,230.7706);
   9->SetBinContent(17,235.1662);
   9->SetBinContent(18,246.5948);
   9->SetBinContent(19,238.2432);
   9->SetBinContent(20,246.1552);
   9->SetBinContent(21,258.0234);
   9->SetBinContent(22,268.5732);
   9->SetBinContent(23,253.6278);
   9->SetBinContent(24,254.9464);
   9->SetBinContent(25,266.8149);
   9->SetBinContent(26,265.9358);
   9->SetBinContent(27,254.5069);
   9->SetBinContent(28,259.7817);
   9->SetBinContent(29,272.969);
   9->SetBinContent(30,285.2771);
   9->SetBinContent(31,278.6835);
   9->SetBinContent(32,296.2665);
   9->SetBinContent(33,294.9478);
   9->SetBinContent(34,307.6954);
   9->SetBinContent(35,300.6622);
   9->SetBinContent(36,321.3223);
   9->SetBinContent(37,292.3103);
   9->SetBinContent(38,320.0035);
   9->SetBinContent(39,326.5972);
   9->SetBinContent(40,343.301);
   9->SetBinContent(41,353.4113);
   9->SetBinContent(42,378.0275);
   9->SetBinContent(43,371.8734);
   9->SetBinContent(44,416.7101);
   9->SetBinContent(45,400.8854);
   9->SetBinContent(46,434.7327);
   9->SetBinContent(47,483.5255);
   9->SetBinContent(48,530.5601);
   9->SetBinContent(49,679.576);
   9->SetBinContent(50,880.4619);
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
   10->SetBinContent(1,2274.174);
   10->SetBinContent(2,2201.942);
   10->SetBinContent(3,2272.135);
   10->SetBinContent(4,2250);
   10->SetBinContent(5,2272.427);
   10->SetBinContent(6,2244.757);
   10->SetBinContent(7,2284.077);
   10->SetBinContent(8,2248.252);
   10->SetBinContent(9,2249.708);
   10->SetBinContent(10,2257.572);
   10->SetBinContent(11,2260.194);
   10->SetBinContent(12,2282.912);
   10->SetBinContent(13,2317.863);
   10->SetBinContent(14,2324.853);
   10->SetBinContent(15,2293.98);
   10->SetBinContent(16,2331.844);
   10->SetBinContent(17,2361.552);
   10->SetBinContent(18,2345.241);
   10->SetBinContent(19,2432.037);
   10->SetBinContent(20,2383.396);
   10->SetBinContent(21,2413.396);
   10->SetBinContent(22,2421.843);
   10->SetBinContent(23,2442.522);
   10->SetBinContent(24,2448.639);
   10->SetBinContent(25,2496.697);
   10->SetBinContent(26,2537.182);
   10->SetBinContent(27,2519.706);
   10->SetBinContent(28,2563.978);
   10->SetBinContent(29,2606.793);
   10->SetBinContent(30,2647.86);
   10->SetBinContent(31,2677.86);
   10->SetBinContent(32,2661.258);
   10->SetBinContent(33,2765.821);
   10->SetBinContent(34,2812.131);
   10->SetBinContent(35,2896.305);
   10->SetBinContent(36,2862.228);
   10->SetBinContent(37,2972.906);
   10->SetBinContent(38,3099.022);
   10->SetBinContent(39,3148.245);
   10->SetBinContent(40,3249.603);
   10->SetBinContent(41,3354.165);
   10->SetBinContent(42,3527.756);
   10->SetBinContent(43,3662.901);
   10->SetBinContent(44,3916.297);
   10->SetBinContent(45,4163.229);
   10->SetBinContent(46,4485.092);
   10->SetBinContent(47,4973.416);
   10->SetBinContent(48,5721.617);
   10->SetBinContent(49,7272.73);
   10->SetBinContent(50,10538.51);
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
   11->SetBinContent(2,457.8125);
   11->SetBinContent(3,488.3334);
   11->SetBinContent(4,396.7708);
   11->SetBinContent(5,335.7292);
   11->SetBinContent(6,488.3334);
   11->SetBinContent(7,396.7708);
   11->SetBinContent(8,335.7292);
   11->SetBinContent(9,457.8125);
   11->SetBinContent(10,610.4166);
   11->SetBinContent(11,457.8125);
   11->SetBinContent(12,305.2083);
   11->SetBinContent(13,396.7708);
   11->SetBinContent(14,579.8958);
   11->SetBinContent(15,457.8125);
   11->SetBinContent(16,579.8958);
   11->SetBinContent(17,579.8958);
   11->SetBinContent(18,518.8542);
   11->SetBinContent(19,488.3334);
   11->SetBinContent(20,732.4999);
   11->SetBinContent(21,335.7292);
   11->SetBinContent(22,518.8542);
   11->SetBinContent(23,457.8125);
   11->SetBinContent(24,549.375);
   11->SetBinContent(25,579.8958);
   11->SetBinContent(26,732.4999);
   11->SetBinContent(27,518.8542);
   11->SetBinContent(28,427.2917);
   11->SetBinContent(29,427.2917);
   11->SetBinContent(30,518.8542);
   11->SetBinContent(31,427.2917);
   11->SetBinContent(32,488.3334);
   11->SetBinContent(33,549.375);
   11->SetBinContent(34,549.375);
   11->SetBinContent(35,701.9791);
   11->SetBinContent(36,701.9791);
   11->SetBinContent(37,640.9374);
   11->SetBinContent(38,518.8542);
   11->SetBinContent(39,610.4166);
   11->SetBinContent(40,915.6248);
   11->SetBinContent(41,549.375);
   11->SetBinContent(42,518.8542);
   11->SetBinContent(43,824.0623);
   11->SetBinContent(44,1037.708);
   11->SetBinContent(45,854.5831);
   11->SetBinContent(46,854.5831);
   11->SetBinContent(47,1159.792);
   11->SetBinContent(48,1312.396);
   11->SetBinContent(49,1678.646);
   11->SetBinContent(50,2746.874);
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
   12->SetBinContent(1,199.7521);
   12->SetBinContent(2,202.6159);
   12->SetBinContent(3,189.0127);
   12->SetBinContent(4,197.6042);
   12->SetBinContent(5,194.0244);
   12->SetBinContent(6,190.4446);
   12->SetBinContent(7,168.25);
   12->SetBinContent(8,197.6042);
   12->SetBinContent(9,165.3861);
   12->SetBinContent(10,196.8883);
   12->SetBinContent(11,205.4798);
   12->SetBinContent(12,191.8766);
   12->SetBinContent(13,193.3085);
   12->SetBinContent(14,191.8766);
   12->SetBinContent(15,226.9585);
   12->SetBinContent(16,196.1723);
   12->SetBinContent(17,216.2191);
   12->SetBinContent(18,218.367);
   12->SetBinContent(19,224.8106);
   12->SetBinContent(20,213.3553);
   12->SetBinContent(21,204.0478);
   12->SetBinContent(22,189.0127);
   12->SetBinContent(23,224.8106);
   12->SetBinContent(24,222.6627);
   12->SetBinContent(25,226.2425);
   12->SetBinContent(26,219.7989);
   12->SetBinContent(27,216.9351);
   12->SetBinContent(28,237.6978);
   12->SetBinContent(29,249.1532);
   12->SetBinContent(30,260.6084);
   12->SetBinContent(31,239.8457);
   12->SetBinContent(32,249.1532);
   12->SetBinContent(33,253.4489);
   12->SetBinContent(34,274.9272);
   12->SetBinContent(35,269.9156);
   12->SetBinContent(36,252.733);
   12->SetBinContent(37,278.507);
   12->SetBinContent(38,265.62);
   12->SetBinContent(39,329.3389);
   12->SetBinContent(40,325.7592);
   12->SetBinContent(41,335.0664);
   12->SetBinContent(42,406.6606);
   12->SetBinContent(43,385.1824);
   12->SetBinContent(44,406.6606);
   12->SetBinContent(45,450.3331);
   12->SetBinContent(46,499.7332);
   12->SetBinContent(47,616.4318);
   12->SetBinContent(48,753.8927);
   12->SetBinContent(49,967.2435);
   12->SetBinContent(50,1789.145);
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
   13->SetBinContent(1,5357.139);
   13->SetBinContent(2,6189.318);
   13->SetBinContent(3,5201.105);
   13->SetBinContent(4,4733.004);
   13->SetBinContent(5,5513.172);
   13->SetBinContent(6,5929.262);
   13->SetBinContent(7,4680.993);
   13->SetBinContent(8,5409.15);
   13->SetBinContent(9,4524.959);
   13->SetBinContent(10,5929.262);
   13->SetBinContent(11,5461.161);
   13->SetBinContent(12,4628.981);
   13->SetBinContent(13,5773.229);
   13->SetBinContent(14,5513.172);
   13->SetBinContent(15,5513.172);
   13->SetBinContent(16,5617.195);
   13->SetBinContent(17,5097.083);
   13->SetBinContent(18,4576.97);
   13->SetBinContent(19,5097.083);
   13->SetBinContent(20,5877.251);
   13->SetBinContent(21,6449.375);
   13->SetBinContent(22,4837.026);
   13->SetBinContent(23,4837.026);
   13->SetBinContent(24,6501.386);
   13->SetBinContent(25,6189.318);
   13->SetBinContent(26,6397.363);
   13->SetBinContent(27,5565.184);
   13->SetBinContent(28,5877.251);
   13->SetBinContent(29,5877.251);
   13->SetBinContent(30,6865.464);
   13->SetBinContent(31,6761.442);
   13->SetBinContent(32,5461.161);
   13->SetBinContent(33,6137.307);
   13->SetBinContent(34,6137.307);
   13->SetBinContent(35,7333.565);
   13->SetBinContent(36,8113.734);
   13->SetBinContent(37,6501.386);
   13->SetBinContent(38,7905.689);
   13->SetBinContent(39,7333.565);
   13->SetBinContent(40,8477.81);
   13->SetBinContent(41,7333.565);
   13->SetBinContent(42,8633.842);
   13->SetBinContent(43,10194.16);
   13->SetBinContent(44,9830.089);
   13->SetBinContent(45,10298.19);
   13->SetBinContent(46,10974.33);
   13->SetBinContent(47,14198.99);
   13->SetBinContent(48,16695.51);
   13->SetBinContent(49,21844.67);
   13->SetBinContent(50,31414.83);
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
   14->SetBinContent(1,1230.857);
   14->SetBinContent(2,1073.531);
   14->SetBinContent(3,1101.294);
   14->SetBinContent(4,943.9669);
   14->SetBinContent(5,1277.13);
   14->SetBinContent(6,1193.839);
   14->SetBinContent(7,1064.276);
   14->SetBinContent(8,1055.022);
   14->SetBinContent(9,1212.348);
   14->SetBinContent(10,1092.04);
   14->SetBinContent(11,1119.803);
   14->SetBinContent(12,1110.549);
   14->SetBinContent(13,1240.112);
   14->SetBinContent(14,1314.148);
   14->SetBinContent(15,1045.767);
   14->SetBinContent(16,1082.785);
   14->SetBinContent(17,1166.076);
   14->SetBinContent(18,1147.567);
   14->SetBinContent(19,1101.294);
   14->SetBinContent(20,1267.875);
   14->SetBinContent(21,1221.603);
   14->SetBinContent(22,1119.803);
   14->SetBinContent(23,1175.33);
   14->SetBinContent(24,1517.747);
   14->SetBinContent(25,1193.839);
   14->SetBinContent(26,1378.93);
   14->SetBinContent(27,1193.839);
   14->SetBinContent(28,1323.403);
   14->SetBinContent(29,1489.984);
   14->SetBinContent(30,1443.711);
   14->SetBinContent(31,1443.711);
   14->SetBinContent(32,1397.439);
   14->SetBinContent(33,1582.529);
   14->SetBinContent(34,1665.82);
   14->SetBinContent(35,1388.184);
   14->SetBinContent(36,1758.365);
   14->SetBinContent(37,1591.784);
   14->SetBinContent(38,2017.491);
   14->SetBinContent(39,1776.874);
   14->SetBinContent(40,1841.656);
   14->SetBinContent(41,2119.292);
   14->SetBinContent(42,2295.13);
   14->SetBinContent(43,2480.223);
   14->SetBinContent(44,2054.51);
   14->SetBinContent(45,2517.241);
   14->SetBinContent(46,2720.844);
   14->SetBinContent(47,2841.154);
   14->SetBinContent(48,3442.705);
   14->SetBinContent(49,4608.776);
   14->SetBinContent(50,5552.725);
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
   15->SetBinContent(1,224.374);
   15->SetBinContent(2,252.4208);
   15->SetBinContent(3,252.4208);
   15->SetBinContent(4,168.2805);
   15->SetBinContent(5,280.4676);
   15->SetBinContent(6,280.4676);
   15->SetBinContent(7,196.3273);
   15->SetBinContent(8,364.6078);
   15->SetBinContent(9,280.4676);
   15->SetBinContent(10,308.5143);
   15->SetBinContent(11,420.7013);
   15->SetBinContent(12,336.5611);
   15->SetBinContent(13,588.9819);
   15->SetBinContent(14,168.2805);
   15->SetBinContent(15,308.5143);
   15->SetBinContent(16,532.8884);
   15->SetBinContent(17,504.8416);
   15->SetBinContent(18,476.7948);
   15->SetBinContent(19,336.5611);
   15->SetBinContent(20,308.5143);
   15->SetBinContent(21,420.7013);
   15->SetBinContent(22,420.7013);
   15->SetBinContent(23,560.9351);
   15->SetBinContent(24,560.9351);
   15->SetBinContent(25,476.7948);
   15->SetBinContent(26,392.6546);
   15->SetBinContent(27,588.9819);
   15->SetBinContent(28,336.5611);
   15->SetBinContent(29,673.1221);
   15->SetBinContent(30,476.7948);
   15->SetBinContent(31,448.7481);
   15->SetBinContent(32,364.6078);
   15->SetBinContent(33,364.6078);
   15->SetBinContent(34,588.9819);
   15->SetBinContent(35,560.9351);
   15->SetBinContent(36,504.8416);
   15->SetBinContent(37,560.9351);
   15->SetBinContent(38,841.4026);
   15->SetBinContent(39,617.0286);
   15->SetBinContent(40,560.9351);
   15->SetBinContent(41,841.4026);
   15->SetBinContent(42,729.2156);
   15->SetBinContent(43,673.1221);
   15->SetBinContent(44,617.0286);
   15->SetBinContent(45,1009.683);
   15->SetBinContent(46,1177.964);
   15->SetBinContent(47,1206.01);
   15->SetBinContent(48,1121.87);
   15->SetBinContent(49,1402.338);
   15->SetBinContent(50,1823.039);
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
   16->SetBinContent(2,159.2968);
   16->SetBinContent(3,180.5364);
   16->SetBinContent(4,127.4375);
   16->SetBinContent(5,148.677);
   16->SetBinContent(6,148.677);
   16->SetBinContent(7,244.2551);
   16->SetBinContent(8,318.5935);
   16->SetBinContent(9,95.57809);
   16->SetBinContent(10,212.3957);
   16->SetBinContent(11,223.0155);
   16->SetBinContent(12,159.2968);
   16->SetBinContent(13,212.3957);
   16->SetBinContent(14,223.0155);
   16->SetBinContent(15,191.1562);
   16->SetBinContent(16,116.8177);
   16->SetBinContent(17,159.2968);
   16->SetBinContent(18,106.1979);
   16->SetBinContent(19,223.0155);
   16->SetBinContent(20,191.1562);
   16->SetBinContent(21,180.5364);
   16->SetBinContent(22,116.8177);
   16->SetBinContent(23,159.2968);
   16->SetBinContent(24,233.6353);
   16->SetBinContent(25,148.677);
   16->SetBinContent(26,286.7342);
   16->SetBinContent(27,180.5364);
   16->SetBinContent(28,159.2968);
   16->SetBinContent(29,180.5364);
   16->SetBinContent(30,148.677);
   16->SetBinContent(31,138.0573);
   16->SetBinContent(32,307.9738);
   16->SetBinContent(33,244.2551);
   16->SetBinContent(34,254.8748);
   16->SetBinContent(35,329.2133);
   16->SetBinContent(36,265.4946);
   16->SetBinContent(37,286.7342);
   16->SetBinContent(38,276.1144);
   16->SetBinContent(39,350.4529);
   16->SetBinContent(40,307.9738);
   16->SetBinContent(41,254.8748);
   16->SetBinContent(42,318.5935);
   16->SetBinContent(43,297.354);
   16->SetBinContent(44,329.2133);
   16->SetBinContent(45,307.9738);
   16->SetBinContent(46,562.8486);
   16->SetBinContent(47,520.3694);
   16->SetBinContent(48,573.4684);
   16->SetBinContent(49,732.7656);
   16->SetBinContent(50,1019.501);
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
   17->SetBinContent(1,790.6673);
   17->SetBinContent(2,1155.591);
   17->SetBinContent(3,851.4879);
   17->SetBinContent(4,669.0262);
   17->SetBinContent(5,790.6673);
   17->SetBinContent(6,1216.411);
   17->SetBinContent(7,1398.873);
   17->SetBinContent(8,790.6673);
   17->SetBinContent(9,1094.77);
   17->SetBinContent(10,547.3851);
   17->SetBinContent(11,1094.77);
   17->SetBinContent(12,1459.693);
   17->SetBinContent(13,1216.411);
   17->SetBinContent(14,1094.77);
   17->SetBinContent(15,669.0262);
   17->SetBinContent(16,1033.95);
   17->SetBinContent(17,1155.591);
   17->SetBinContent(18,1581.335);
   17->SetBinContent(19,973.129);
   17->SetBinContent(20,973.129);
   17->SetBinContent(21,1033.95);
   17->SetBinContent(22,1642.155);
   17->SetBinContent(23,1094.77);
   17->SetBinContent(24,1216.411);
   17->SetBinContent(25,1520.514);
   17->SetBinContent(26,1459.693);
   17->SetBinContent(27,608.2056);
   17->SetBinContent(28,1885.437);
   17->SetBinContent(29,1155.591);
   17->SetBinContent(30,1581.335);
   17->SetBinContent(31,1338.052);
   17->SetBinContent(32,1216.411);
   17->SetBinContent(33,1216.411);
   17->SetBinContent(34,1338.052);
   17->SetBinContent(35,1763.796);
   17->SetBinContent(36,1155.591);
   17->SetBinContent(37,1277.232);
   17->SetBinContent(38,1763.796);
   17->SetBinContent(39,2372.002);
   17->SetBinContent(40,1642.155);
   17->SetBinContent(41,1763.796);
   17->SetBinContent(42,2372.002);
   17->SetBinContent(43,2250.361);
   17->SetBinContent(44,2311.181);
   17->SetBinContent(45,2311.181);
   17->SetBinContent(46,3345.131);
   17->SetBinContent(47,3284.31);
   17->SetBinContent(48,3770.875);
   17->SetBinContent(49,4744.006);
   17->SetBinContent(50,5717.139);
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
