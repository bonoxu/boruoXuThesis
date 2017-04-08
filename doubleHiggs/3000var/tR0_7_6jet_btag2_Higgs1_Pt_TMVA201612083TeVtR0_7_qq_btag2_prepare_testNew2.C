{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:41:37 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-53.96825,-3.138293,263.4921,5.543738);
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
   
   TH1F *THStack_stack_7 = new TH1F("THStack_stack_7","",50,0,200);
   THStack_stack_7->SetMinimum(0.02657494);
   THStack_stack_7->SetMaximum(70660.24);
   THStack_stack_7->SetDirectory(0);
   THStack_stack_7->SetStats(0);
   THStack_stack_7->SetLineWidth(2);
   THStack_stack_7->SetMarkerSize(1.2);
   THStack_stack_7->GetXaxis()->SetTitle("P_{T,H#rightarrowbb} / GeV");
   THStack_stack_7->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_7->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_7->GetXaxis()->SetLabelColor(ci);
   THStack_stack_7->GetXaxis()->SetLabelFont(42);
   THStack_stack_7->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_7->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_7->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_7->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_7->GetXaxis()->SetTitleColor(ci);
   THStack_stack_7->GetXaxis()->SetTitleFont(42);
   THStack_stack_7->GetYaxis()->SetTitle("Number of events");
   THStack_stack_7->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_7->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_7->GetYaxis()->SetLabelColor(ci);
   THStack_stack_7->GetYaxis()->SetLabelFont(42);
   THStack_stack_7->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_7->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_7->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_7->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_7->GetYaxis()->SetTitleColor(ci);
   THStack_stack_7->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_7->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_7->GetZaxis()->SetLabelColor(ci);
   THStack_stack_7->GetZaxis()->SetLabelFont(42);
   THStack_stack_7->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_7->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_7->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_7->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_7->GetZaxis()->SetTitleColor(ci);
   THStack_stack_7->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_7);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,200);
   0->SetBinContent(1,0.128687);
   0->SetBinContent(2,0.4652528);
   0->SetBinContent(3,0.6236371);
   0->SetBinContent(4,1.069093);
   0->SetBinContent(5,1.326468);
   0->SetBinContent(6,1.494751);
   0->SetBinContent(7,1.524448);
   0->SetBinContent(8,1.841217);
   0->SetBinContent(9,2.108489);
   0->SetBinContent(10,2.425254);
   0->SetBinContent(11,2.326265);
   0->SetBinContent(12,2.425254);
   0->SetBinContent(13,2.464849);
   0->SetBinContent(14,2.643029);
   0->SetBinContent(15,2.633131);
   0->SetBinContent(16,2.959794);
   0->SetBinContent(17,2.415355);
   0->SetBinContent(18,2.751917);
   0->SetBinContent(19,2.445051);
   0->SetBinContent(20,2.623232);
   0->SetBinContent(21,2.682625);
   0->SetBinContent(22,2.157983);
   0->SetBinContent(23,2.405456);
   0->SetBinContent(24,2.068893);
   0->SetBinContent(25,2.138186);
   0->SetBinContent(26,2.148084);
   0->SetBinContent(27,2.078792);
   0->SetBinContent(28,1.851116);
   0->SetBinContent(29,1.653135);
   0->SetBinContent(30,1.851116);
   0->SetBinContent(31,1.573943);
   0->SetBinContent(32,1.70263);
   0->SetBinContent(33,1.306669);
   0->SetBinContent(34,1.29677);
   0->SetBinContent(35,1.237376);
   0->SetBinContent(36,1.217578);
   0->SetBinContent(37,1.128487);
   0->SetBinContent(38,0.9503047);
   0->SetBinContent(39,0.8810116);
   0->SetBinContent(40,1.069093);
   0->SetBinContent(41,0.8711126);
   0->SetBinContent(42,1.009699);
   0->SetBinContent(43,0.7127283);
   0->SetBinContent(44,0.7028292);
   0->SetBinContent(45,0.8315165);
   0->SetBinContent(46,0.8216175);
   0->SetBinContent(47,0.7028292);
   0->SetBinContent(48,0.6533341);
   0->SetBinContent(49,0.5345459);
   0->SetBinContent(50,0.6434351);
   0->SetBinContent(51,10.49301);
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
   1->SetBinContent(1,0.1633171);
   1->SetBinContent(2,0.4107672);
   1->SetBinContent(3,0.5493391);
   1->SetBinContent(4,0.9155631);
   1->SetBinContent(5,1.059083);
   1->SetBinContent(6,1.247144);
   1->SetBinContent(7,1.395614);
   1->SetBinContent(8,1.841021);
   1->SetBinContent(9,1.811327);
   1->SetBinContent(10,2.142912);
   1->SetBinContent(11,2.014235);
   1->SetBinContent(12,2.142912);
   1->SetBinContent(13,2.053828);
   1->SetBinContent(14,2.172606);
   1->SetBinContent(15,2.454705);
   1->SetBinContent(16,2.048879);
   1->SetBinContent(17,2.227046);
   1->SetBinContent(18,2.088472);
   1->SetBinContent(19,1.979592);
   1->SetBinContent(20,1.969694);
   1->SetBinContent(21,1.935052);
   1->SetBinContent(22,1.816276);
   1->SetBinContent(23,1.766787);
   1->SetBinContent(24,1.628215);
   1->SetBinContent(25,1.573777);
   1->SetBinContent(26,1.504491);
   1->SetBinContent(27,1.539134);
   1->SetBinContent(28,1.242195);
   1->SetBinContent(29,1.346124);
   1->SetBinContent(30,1.31643);
   1->SetBinContent(31,1.078879);
   1->SetBinContent(32,1.068981);
   1->SetBinContent(33,0.9056652);
   1->SetBinContent(34,0.9452569);
   1->SetBinContent(35,0.8858693);
   1->SetBinContent(36,0.9007162);
   1->SetBinContent(37,0.742349);
   1->SetBinContent(38,0.7819408);
   1->SetBinContent(39,0.6136757);
   1->SetBinContent(40,0.7176042);
   1->SetBinContent(41,0.559237);
   1->SetBinContent(42,0.5196452);
   1->SetBinContent(43,0.4652063);
   1->SetBinContent(44,0.4850023);
   1->SetBinContent(45,0.3761242);
   1->SetBinContent(46,0.2919911);
   1->SetBinContent(47,0.3662262);
   1->SetBinContent(48,0.2820931);
   1->SetBinContent(49,0.3761242);
   1->SetBinContent(50,0.2573481);
   1->SetBinContent(51,5.656768);
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
   2->SetBinContent(1,0.2573481);
   2->SetBinContent(2,0.742349);
   2->SetBinContent(3,1.158063);
   2->SetBinContent(4,1.499542);
   2->SetBinContent(5,1.954848);
   2->SetBinContent(6,2.464603);
   2->SetBinContent(7,2.801141);
   2->SetBinContent(8,3.216865);
   2->SetBinContent(9,3.340592);
   2->SetBinContent(10,3.563302);
   2->SetBinContent(11,3.825603);
   2->SetBinContent(12,3.95428);
   2->SetBinContent(13,3.949331);
   2->SetBinContent(14,4.231429);
   2->SetBinContent(15,4.147295);
   2->SetBinContent(16,4.142345);
   2->SetBinContent(17,4.196785);
   2->SetBinContent(18,4.132447);
   2->SetBinContent(19,3.776113);
   2->SetBinContent(20,3.924585);
   2->SetBinContent(21,3.761265);
   2->SetBinContent(22,3.597945);
   2->SetBinContent(23,3.563302);
   2->SetBinContent(24,3.390083);
   2->SetBinContent(25,2.999105);
   2->SetBinContent(26,3.167374);
   2->SetBinContent(27,3.02385);
   2->SetBinContent(28,2.69721);
   2->SetBinContent(29,2.578432);
   2->SetBinContent(30,2.326028);
   2->SetBinContent(31,2.133014);
   2->SetBinContent(32,2.345825);
   2->SetBinContent(33,2.128065);
   2->SetBinContent(34,2.004337);
   2->SetBinContent(35,1.831123);
   2->SetBinContent(36,1.712348);
   2->SetBinContent(37,1.549032);
   2->SetBinContent(38,1.479746);
   2->SetBinContent(39,1.445103);
   2->SetBinContent(40,1.380767);
   2->SetBinContent(41,1.286736);
   2->SetBinContent(42,1.12342);
   2->SetBinContent(43,1.158063);
   2->SetBinContent(44,0.9798998);
   2->SetBinContent(45,1.108573);
   2->SetBinContent(46,0.9650528);
   2->SetBinContent(47,0.7769918);
   2->SetBinContent(48,0.8858693);
   2->SetBinContent(49,0.752247);
   2->SetBinContent(50,0.6334716);
   2->SetBinContent(51,14.66348);
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
   3->SetBinContent(1,1.21554);
   3->SetBinContent(2,3.308972);
   3->SetBinContent(3,5.064748);
   3->SetBinContent(4,8.778881);
   3->SetBinContent(5,8.508762);
   3->SetBinContent(6,10.53465);
   3->SetBinContent(7,11.37877);
   3->SetBinContent(8,13.84361);
   3->SetBinContent(9,14.82279);
   3->SetBinContent(10,14.58643);
   3->SetBinContent(11,15.59938);
   3->SetBinContent(12,15.93703);
   3->SetBinContent(13,16.10585);
   3->SetBinContent(14,16.98376);
   3->SetBinContent(15,16.67987);
   3->SetBinContent(16,17.79414);
   3->SetBinContent(17,16.44351);
   3->SetBinContent(18,15.8695);
   3->SetBinContent(19,16.00456);
   3->SetBinContent(20,14.92408);
   3->SetBinContent(21,15.63314);
   3->SetBinContent(22,14.5189);
   3->SetBinContent(23,13.03325);
   3->SetBinContent(24,13.3709);
   3->SetBinContent(25,13.64102);
   3->SetBinContent(26,12.56054);
   3->SetBinContent(27,11.75019);
   3->SetBinContent(28,11.41254);
   3->SetBinContent(29,9.791826);
   3->SetBinContent(30,9.656767);
   3->SetBinContent(31,8.91394);
   3->SetBinContent(32,8.778881);
   3->SetBinContent(33,8.610057);
   3->SetBinContent(34,8.036055);
   3->SetBinContent(35,7.462052);
   3->SetBinContent(36,6.651696);
   3->SetBinContent(37,6.212753);
   3->SetBinContent(38,6.685461);
   3->SetBinContent(39,5.77381);
   3->SetBinContent(40,4.558276);
   3->SetBinContent(41,5.469926);
   3->SetBinContent(42,5.368632);
   3->SetBinContent(43,4.524511);
   3->SetBinContent(44,4.963454);
   3->SetBinContent(45,4.862159);
   3->SetBinContent(46,4.186862);
   3->SetBinContent(47,3.781683);
   3->SetBinContent(48,3.680388);
   3->SetBinContent(49,4.220627);
   3->SetBinContent(50,3.882978);
   3->SetBinContent(51,71.21023);
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
   4->SetBinContent(1,0.8090422);
   4->SetBinContent(2,2.820716);
   4->SetBinContent(3,4.548131);
   4->SetBinContent(4,5.81635);
   4->SetBinContent(5,7.1283);
   4->SetBinContent(6,8.811971);
   4->SetBinContent(7,9.599141);
   4->SetBinContent(8,10.82363);
   4->SetBinContent(9,11.30468);
   4->SetBinContent(10,13.3382);
   4->SetBinContent(11,13.3382);
   4->SetBinContent(12,13.99418);
   4->SetBinContent(13,14.43149);
   4->SetBinContent(14,14.51896);
   4->SetBinContent(15,15.9621);
   4->SetBinContent(16,14.82508);
   4->SetBinContent(17,15.24053);
   4->SetBinContent(18,15.1968);
   4->SetBinContent(19,14.38776);
   4->SetBinContent(20,14.40963);
   4->SetBinContent(21,14.47522);
   4->SetBinContent(22,13.68805);
   4->SetBinContent(23,13.2726);
   4->SetBinContent(24,13.62246);
   4->SetBinContent(25,13.36007);
   4->SetBinContent(26,12.22304);
   4->SetBinContent(27,11.43587);
   4->SetBinContent(28,10.97669);
   4->SetBinContent(29,11.6108);
   4->SetBinContent(30,10.93296);
   4->SetBinContent(31,10.69243);
   4->SetBinContent(32,9.402349);
   4->SetBinContent(33,10.03646);
   4->SetBinContent(34,9.861531);
   4->SetBinContent(35,8.768239);
   4->SetBinContent(36,8.0248);
   4->SetBinContent(37,8.0248);
   4->SetBinContent(38,7.150166);
   4->SetBinContent(39,8.002934);
   4->SetBinContent(40,6.34113);
   4->SetBinContent(41,6.800313);
   4->SetBinContent(42,7.303227);
   4->SetBinContent(43,6.690983);
   4->SetBinContent(44,6.209935);
   4->SetBinContent(45,5.269703);
   4->SetBinContent(46,5.81635);
   4->SetBinContent(47,5.357167);
   4->SetBinContent(48,4.876118);
   4->SetBinContent(49,4.263875);
   4->SetBinContent(50,4.701191);
   4->SetBinContent(51,101.5232);
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
   5->SetBinContent(1,1.860928);
   5->SetBinContent(2,7.56003);
   5->SetBinContent(3,9.828039);
   5->SetBinContent(4,13.89883);
   5->SetBinContent(5,19.59787);
   5->SetBinContent(6,22.21476);
   5->SetBinContent(7,26.69255);
   5->SetBinContent(8,31.05404);
   5->SetBinContent(9,34.13623);
   5->SetBinContent(10,35.76457);
   5->SetBinContent(11,41.2893);
   5->SetBinContent(12,40.94037);
   5->SetBinContent(13,46.17432);
   5->SetBinContent(14,43.38288);
   5->SetBinContent(15,46.11617);
   5->SetBinContent(16,45.36015);
   5->SetBinContent(17,50.24518);
   5->SetBinContent(18,49.3147);
   5->SetBinContent(19,53.85079);
   5->SetBinContent(20,46.23248);
   5->SetBinContent(21,50.94304);
   5->SetBinContent(22,48.44237);
   5->SetBinContent(23,51.17566);
   5->SetBinContent(24,47.22112);
   5->SetBinContent(25,48.50053);
   5->SetBinContent(26,45.76724);
   5->SetBinContent(27,42.39425);
   5->SetBinContent(28,44.02259);
   5->SetBinContent(29,38.09077);
   5->SetBinContent(30,41.40561);
   5->SetBinContent(31,38.55601);
   5->SetBinContent(32,40.47513);
   5->SetBinContent(33,35.06671);
   5->SetBinContent(34,38.03262);
   5->SetBinContent(35,34.9504);
   5->SetBinContent(36,36.92767);
   5->SetBinContent(37,34.36885);
   5->SetBinContent(38,33.55468);
   5->SetBinContent(39,29.83282);
   5->SetBinContent(40,30.18174);
   5->SetBinContent(41,28.20454);
   5->SetBinContent(42,24.54089);
   5->SetBinContent(43,25.7621);
   5->SetBinContent(44,25.52949);
   5->SetBinContent(45,24.13382);
   5->SetBinContent(46,23.20337);
   5->SetBinContent(47,23.95936);
   5->SetBinContent(48,20.52832);
   5->SetBinContent(49,21.22616);
   5->SetBinContent(50,20.70278);
   5->SetBinContent(51,487.6624);
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
   6->SetBinContent(1,150.8554);
   6->SetBinContent(2,402.5742);
   6->SetBinContent(3,684.1153);
   6->SetBinContent(4,945.4837);
   6->SetBinContent(5,1090.201);
   6->SetBinContent(6,1331.397);
   6->SetBinContent(7,1624.34);
   6->SetBinContent(8,1800.632);
   6->SetBinContent(9,1855.011);
   6->SetBinContent(10,2038.319);
   6->SetBinContent(11,1952.366);
   6->SetBinContent(12,2105.846);
   6->SetBinContent(13,2260.19);
   6->SetBinContent(14,2136.54);
   6->SetBinContent(15,2261.067);
   6->SetBinContent(16,2065.506);
   6->SetBinContent(17,2050.598);
   6->SetBinContent(18,1983.064);
   6->SetBinContent(19,1824.313);
   6->SetBinContent(20,1864.658);
   6->SetBinContent(21,1755.901);
   6->SetBinContent(22,1735.728);
   6->SetBinContent(23,1555.928);
   6->SetBinContent(24,1466.466);
   6->SetBinContent(25,1380.513);
   6->SetBinContent(26,1349.815);
   6->SetBinContent(27,1287.543);
   6->SetBinContent(28,1173.523);
   6->SetBinContent(29,1168.261);
   6->SetBinContent(30,1098.095);
   6->SetBinContent(31,977.9355);
   6->SetBinContent(32,956.8857);
   6->SetBinContent(33,875.3177);
   6->SetBinContent(34,856.022);
   6->SetBinContent(35,765.6833);
   6->SetBinContent(36,692.009);
   6->SetBinContent(37,659.5572);
   6->SetBinContent(38,616.5805);
   6->SetBinContent(39,614.8264);
   6->SetBinContent(40,582.3746);
   6->SetBinContent(41,518.3481);
   6->SetBinContent(42,513.9627);
   6->SetBinContent(43,469.2319);
   6->SetBinContent(44,443.7967);
   6->SetBinContent(45,413.0991);
   6->SetBinContent(46,370.9995);
   6->SetBinContent(47,379.7702);
   6->SetBinContent(48,310.4813);
   6->SetBinContent(49,303.4647);
   6->SetBinContent(50,313.9896);
   6->SetBinContent(51,5090.118);
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
   7->SetBinContent(1,12.70658);
   7->SetBinContent(2,45.99228);
   7->SetBinContent(3,72.51035);
   7->SetBinContent(4,98.06161);
   7->SetBinContent(5,127.2039);
   7->SetBinContent(6,146.6791);
   7->SetBinContent(7,173.1986);
   7->SetBinContent(8,188.5302);
   7->SetBinContent(9,202.2044);
   7->SetBinContent(10,209.2486);
   7->SetBinContent(11,228.7239);
   7->SetBinContent(12,236.3206);
   7->SetBinContent(13,256.3484);
   7->SetBinContent(14,262.4258);
   7->SetBinContent(15,262.2877);
   7->SetBinContent(16,271.8181);
   7->SetBinContent(17,276.0999);
   7->SetBinContent(18,255.1053);
   7->SetBinContent(19,255.6578);
   7->SetBinContent(20,258.4202);
   7->SetBinContent(21,270.9894);
   7->SetBinContent(22,236.8731);
   7->SetBinContent(23,242.2599);
   7->SetBinContent(24,238.1162);
   7->SetBinContent(25,230.2432);
   7->SetBinContent(26,229.4145);
   7->SetBinContent(27,225.1327);
   7->SetBinContent(28,203.5856);
   7->SetBinContent(29,211.5967);
   7->SetBinContent(30,201.0994);
   7->SetBinContent(31,198.0607);
   7->SetBinContent(32,193.917);
   7->SetBinContent(33,182.1766);
   7->SetBinContent(34,183.5578);
   7->SetBinContent(35,171.1268);
   7->SetBinContent(36,171.6793);
   7->SetBinContent(37,160.077);
   7->SetBinContent(38,159.2482);
   7->SetBinContent(39,151.5134);
   7->SetBinContent(40,145.8504);
   7->SetBinContent(41,138.8061);
   7->SetBinContent(42,134.8006);
   7->SetBinContent(43,138.668);
   7->SetBinContent(44,127.4801);
   7->SetBinContent(45,124.5797);
   7->SetBinContent(46,127.4801);
   7->SetBinContent(47,117.2596);
   7->SetBinContent(48,111.735);
   7->SetBinContent(49,106.4866);
   7->SetBinContent(50,110.3538);
   7->SetBinContent(51,3759.992);
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
   8->SetBinContent(2,9.2388);
   8->SetBinContent(3,12.01044);
   8->SetBinContent(4,18.4776);
   8->SetBinContent(5,24.94475);
   8->SetBinContent(6,31.41191);
   8->SetBinContent(7,24.94475);
   8->SetBinContent(8,36.03132);
   8->SetBinContent(9,21.24924);
   8->SetBinContent(10,24.94475);
   8->SetBinContent(11,28.64027);
   8->SetBinContent(12,32.33579);
   8->SetBinContent(13,28.64027);
   8->SetBinContent(14,21.24924);
   8->SetBinContent(15,22.17311);
   8->SetBinContent(16,27.71639);
   8->SetBinContent(17,25.86863);
   8->SetBinContent(18,29.56415);
   8->SetBinContent(19,20.32536);
   8->SetBinContent(20,16.62984);
   8->SetBinContent(21,18.4776);
   8->SetBinContent(22,24.02087);
   8->SetBinContent(23,20.32536);
   8->SetBinContent(24,17.55372);
   8->SetBinContent(25,24.94475);
   8->SetBinContent(26,20.32536);
   8->SetBinContent(27,17.55372);
   8->SetBinContent(28,23.09699);
   8->SetBinContent(29,27.71639);
   8->SetBinContent(30,21.24924);
   8->SetBinContent(31,22.17311);
   8->SetBinContent(32,22.17311);
   8->SetBinContent(33,21.24924);
   8->SetBinContent(34,23.09699);
   8->SetBinContent(35,22.17311);
   8->SetBinContent(36,21.24924);
   8->SetBinContent(37,30.48803);
   8->SetBinContent(38,25.86863);
   8->SetBinContent(39,24.02087);
   8->SetBinContent(40,27.71639);
   8->SetBinContent(41,16.62984);
   8->SetBinContent(42,24.94475);
   8->SetBinContent(43,17.55372);
   8->SetBinContent(44,27.71639);
   8->SetBinContent(45,16.62984);
   8->SetBinContent(46,23.09699);
   8->SetBinContent(47,18.4776);
   8->SetBinContent(48,17.55372);
   8->SetBinContent(49,15.70596);
   8->SetBinContent(50,25.86863);
   8->SetBinContent(51,943.2876);
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
   9->SetBinContent(1,9.230842);
   9->SetBinContent(2,30.76947);
   9->SetBinContent(3,66.81372);
   9->SetBinContent(4,72.08853);
   9->SetBinContent(5,98.90215);
   9->SetBinContent(6,111.6496);
   9->SetBinContent(7,142.4191);
   9->SetBinContent(8,162.1993);
   9->SetBinContent(9,166.5949);
   9->SetBinContent(10,170.5509);
   9->SetBinContent(11,175.3861);
   9->SetBinContent(12,196.0454);
   9->SetBinContent(13,185.496);
   9->SetBinContent(14,201.3201);
   9->SetBinContent(15,210.5509);
   9->SetBinContent(16,191.2103);
   9->SetBinContent(17,186.8147);
   9->SetBinContent(18,213.6278);
   9->SetBinContent(19,215.8256);
   9->SetBinContent(20,212.3091);
   9->SetBinContent(21,203.9575);
   9->SetBinContent(22,193.4081);
   9->SetBinContent(23,186.8147);
   9->SetBinContent(24,214.9465);
   9->SetBinContent(25,203.9575);
   9->SetBinContent(26,200.441);
   9->SetBinContent(27,191.6498);
   9->SetBinContent(28,184.1773);
   9->SetBinContent(29,192.5289);
   9->SetBinContent(30,201.3201);
   9->SetBinContent(31,189.0125);
   9->SetBinContent(32,190.7707);
   9->SetBinContent(33,178.463);
   9->SetBinContent(34,166.1553);
   9->SetBinContent(35,186.8147);
   9->SetBinContent(36,174.0674);
   9->SetBinContent(37,176.7048);
   9->SetBinContent(38,169.6718);
   9->SetBinContent(39,155.1663);
   9->SetBinContent(40,157.3641);
   9->SetBinContent(41,149.8916);
   9->SetBinContent(42,160.0015);
   9->SetBinContent(43,147.2543);
   9->SetBinContent(44,136.2653);
   9->SetBinContent(45,137.5839);
   9->SetBinContent(46,153.4081);
   9->SetBinContent(47,142.8587);
   9->SetBinContent(48,143.7378);
   9->SetBinContent(49,127.474);
   9->SetBinContent(50,125.2762);
   9->SetBinContent(51,7305.591);
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
   10->SetBinContent(1,304.2416);
   10->SetBinContent(2,881.2766);
   10->SetBinContent(3,1469.084);
   10->SetBinContent(4,2048.156);
   10->SetBinContent(5,2563.978);
   10->SetBinContent(6,3001.741);
   10->SetBinContent(7,3425.233);
   10->SetBinContent(8,3761.929);
   10->SetBinContent(9,4042.703);
   10->SetBinContent(10,4288.656);
   10->SetBinContent(11,4454.826);
   10->SetBinContent(12,4570.65);
   10->SetBinContent(13,4557.846);
   10->SetBinContent(14,4549.697);
   10->SetBinContent(15,4501.971);
   10->SetBinContent(16,4355.59);
   10->SetBinContent(17,4251.406);
   10->SetBinContent(18,4212.701);
   10->SetBinContent(19,4080.276);
   10->SetBinContent(20,3901.734);
   10->SetBinContent(21,3744.162);
   10->SetBinContent(22,3556.3);
   10->SetBinContent(23,3408.922);
   10->SetBinContent(24,3235.914);
   10->SetBinContent(25,3076.303);
   10->SetBinContent(26,2948.44);
   10->SetBinContent(27,2831.937);
   10->SetBinContent(28,2678.443);
   10->SetBinContent(29,2576.793);
   10->SetBinContent(30,2467.862);
   10->SetBinContent(31,2297.184);
   10->SetBinContent(32,2184.175);
   10->SetBinContent(33,2138.447);
   10->SetBinContent(34,2011.473);
   10->SetBinContent(35,1924.132);
   10->SetBinContent(36,1827.474);
   10->SetBinContent(37,1727.032);
   10->SetBinContent(38,1658.323);
   10->SetBinContent(39,1564.577);
   10->SetBinContent(40,1532.552);
   10->SetBinContent(41,1400.957);
   10->SetBinContent(42,1353.211);
   10->SetBinContent(43,1318.274);
   10->SetBinContent(44,1249.857);
   10->SetBinContent(45,1180.857);
   10->SetBinContent(46,1106.617);
   10->SetBinContent(47,1085.073);
   10->SetBinContent(48,1034.124);
   10->SetBinContent(49,1000.643);
   10->SetBinContent(50,937.4661);
   10->SetBinContent(51,21466.14);
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
   11->SetBinContent(1,152.6042);
   11->SetBinContent(2,366.25);
   11->SetBinContent(3,396.7708);
   11->SetBinContent(4,732.4999);
   11->SetBinContent(5,732.4999);
   11->SetBinContent(6,1037.708);
   11->SetBinContent(7,1190.312);
   11->SetBinContent(8,1342.917);
   11->SetBinContent(9,1312.396);
   11->SetBinContent(10,1403.958);
   11->SetBinContent(11,1190.312);
   11->SetBinContent(12,915.6248);
   11->SetBinContent(13,915.6248);
   11->SetBinContent(14,1434.479);
   11->SetBinContent(15,946.1456);
   11->SetBinContent(16,946.1456);
   11->SetBinContent(17,763.0207);
   11->SetBinContent(18,946.1456);
   11->SetBinContent(19,640.9374);
   11->SetBinContent(20,732.4999);
   11->SetBinContent(21,488.3334);
   11->SetBinContent(22,427.2917);
   11->SetBinContent(23,701.9791);
   11->SetBinContent(24,671.4583);
   11->SetBinContent(25,457.8125);
   11->SetBinContent(26,610.4166);
   11->SetBinContent(27,579.8958);
   11->SetBinContent(28,488.3334);
   11->SetBinContent(29,457.8125);
   11->SetBinContent(30,335.7292);
   11->SetBinContent(31,366.25);
   11->SetBinContent(32,366.25);
   11->SetBinContent(33,335.7292);
   11->SetBinContent(34,122.0833);
   11->SetBinContent(35,366.25);
   11->SetBinContent(36,305.2083);
   11->SetBinContent(37,335.7292);
   11->SetBinContent(38,427.2917);
   11->SetBinContent(39,335.7292);
   11->SetBinContent(40,335.7292);
   11->SetBinContent(41,61.04166);
   11->SetBinContent(42,213.6458);
   11->SetBinContent(43,213.6458);
   11->SetBinContent(44,274.6875);
   11->SetBinContent(45,244.1666);
   11->SetBinContent(46,213.6458);
   11->SetBinContent(47,183.125);
   11->SetBinContent(48,61.04166);
   11->SetBinContent(49,213.6458);
   11->SetBinContent(50,152.6042);
   11->SetBinContent(51,3693.018);
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
   12->SetBinContent(1,63.72015);
   12->SetBinContent(2,190.4446);
   12->SetBinContent(3,309.2925);
   12->SetBinContent(4,443.1737);
   12->SetBinContent(5,535.5303);
   12->SetBinContent(6,569.1796);
   12->SetBinContent(7,625.739);
   12->SetBinContent(8,544.1216);
   12->SetBinContent(9,516.1998);
   12->SetBinContent(10,425.9911);
   12->SetBinContent(11,428.8549);
   12->SetBinContent(12,365.136);
   12->SetBinContent(13,307.8606);
   12->SetBinContent(14,247.7213);
   12->SetBinContent(15,249.1532);
   12->SetBinContent(16,223.3787);
   12->SetBinContent(17,192.5925);
   12->SetBinContent(18,196.8883);
   12->SetBinContent(19,182.5691);
   12->SetBinContent(20,186.8649);
   12->SetBinContent(21,181.1372);
   12->SetBinContent(22,173.2617);
   12->SetBinContent(23,165.3861);
   12->SetBinContent(24,143.1914);
   12->SetBinContent(25,158.9425);
   12->SetBinContent(26,146.0553);
   12->SetBinContent(27,139.6116);
   12->SetBinContent(28,142.4755);
   12->SetBinContent(29,136.7478);
   12->SetBinContent(30,146.7712);
   12->SetBinContent(31,141.7595);
   12->SetBinContent(32,120.2808);
   12->SetBinContent(33,129.5882);
   12->SetBinContent(34,133.168);
   12->SetBinContent(35,128.8723);
   12->SetBinContent(36,115.2691);
   12->SetBinContent(37,123.1446);
   12->SetBinContent(38,115.2691);
   12->SetBinContent(39,128.1563);
   12->SetBinContent(40,115.2691);
   12->SetBinContent(41,112.4053);
   12->SetBinContent(42,110.9734);
   12->SetBinContent(43,118.1329);
   12->SetBinContent(44,107.3936);
   12->SetBinContent(45,114.5531);
   12->SetBinContent(46,105.9616);
   12->SetBinContent(47,107.3936);
   12->SetBinContent(48,101.6659);
   12->SetBinContent(49,99.51803);
   12->SetBinContent(50,97.37016);
   12->SetBinContent(51,4916.591);
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
   13->SetBinContent(1,1768.375);
   13->SetBinContent(2,4837.026);
   13->SetBinContent(3,8217.756);
   13->SetBinContent(4,9153.949);
   13->SetBinContent(5,12014.54);
   13->SetBinContent(6,13418.83);
   13->SetBinContent(7,15291.22);
   13->SetBinContent(8,15343.23);
   13->SetBinContent(9,15707.3);
   13->SetBinContent(10,15603.28);
   13->SetBinContent(11,16799.54);
   13->SetBinContent(12,14511.06);
   13->SetBinContent(13,13990.95);
   13->SetBinContent(14,13834.92);
   13->SetBinContent(15,13470.84);
   13->SetBinContent(16,11182.37);
   13->SetBinContent(17,10506.23);
   13->SetBinContent(18,10194.16);
   13->SetBinContent(19,8945.906);
   13->SetBinContent(20,8425.799);
   13->SetBinContent(21,6761.442);
   13->SetBinContent(22,8009.711);
   13->SetBinContent(23,6033.285);
   13->SetBinContent(24,7333.565);
   13->SetBinContent(25,6085.296);
   13->SetBinContent(26,5565.184);
   13->SetBinContent(27,5253.116);
   13->SetBinContent(28,5149.094);
   13->SetBinContent(29,6085.296);
   13->SetBinContent(30,4941.049);
   13->SetBinContent(31,4316.914);
   13->SetBinContent(32,3744.792);
   13->SetBinContent(33,4316.914);
   13->SetBinContent(34,4472.948);
   13->SetBinContent(35,3380.715);
   13->SetBinContent(36,3276.693);
   13->SetBinContent(37,3328.704);
   13->SetBinContent(38,2964.627);
   13->SetBinContent(39,2652.561);
   13->SetBinContent(40,3276.693);
   13->SetBinContent(41,2236.473);
   13->SetBinContent(42,2340.495);
   13->SetBinContent(43,2704.572);
   13->SetBinContent(44,2236.473);
   13->SetBinContent(45,2652.561);
   13->SetBinContent(46,1456.309);
   13->SetBinContent(47,1768.375);
   13->SetBinContent(48,1664.353);
   13->SetBinContent(49,1820.385);
   13->SetBinContent(50,1664.353);
   13->SetBinContent(51,26889.81);
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
   14->SetBinContent(1,185.0915);
   14->SetBinContent(2,583.0383);
   14->SetBinContent(3,934.7123);
   14->SetBinContent(4,1147.567);
   14->SetBinContent(5,1545.511);
   14->SetBinContent(6,1564.02);
   14->SetBinContent(7,2082.273);
   14->SetBinContent(8,2165.565);
   14->SetBinContent(9,2267.366);
   14->SetBinContent(10,2739.353);
   14->SetBinContent(11,2582.024);
   14->SetBinContent(12,2470.968);
   14->SetBinContent(13,2350.658);
   14->SetBinContent(14,2443.204);
   14->SetBinContent(15,2554.26);
   14->SetBinContent(16,2276.621);
   14->SetBinContent(17,2285.875);
   14->SetBinContent(18,2341.403);
   14->SetBinContent(19,2369.167);
   14->SetBinContent(20,2165.565);
   14->SetBinContent(21,1850.91);
   14->SetBinContent(22,2063.764);
   14->SetBinContent(23,1684.329);
   14->SetBinContent(24,1823.146);
   14->SetBinContent(25,1647.311);
   14->SetBinContent(26,1675.074);
   14->SetBinContent(27,1471.475);
   14->SetBinContent(28,1480.729);
   14->SetBinContent(29,1360.421);
   14->SetBinContent(30,1212.348);
   14->SetBinContent(31,1073.531);
   14->SetBinContent(32,1175.33);
   14->SetBinContent(33,1156.821);
   14->SetBinContent(34,1203.094);
   14->SetBinContent(35,1027.258);
   14->SetBinContent(36,971.7306);
   14->SetBinContent(37,1055.022);
   14->SetBinContent(38,758.8753);
   14->SetBinContent(39,943.9669);
   14->SetBinContent(40,916.2031);
   14->SetBinContent(41,638.5658);
   14->SetBinContent(42,666.3295);
   14->SetBinContent(43,795.8936);
   14->SetBinContent(44,564.5292);
   14->SetBinContent(45,546.02);
   14->SetBinContent(46,666.3295);
   14->SetBinContent(47,629.3112);
   14->SetBinContent(48,444.2197);
   14->SetBinContent(49,434.9651);
   14->SetBinContent(50,601.5475);
   14->SetBinContent(51,11401.67);
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
   15->SetBinContent(1,476.7948);
   15->SetBinContent(2,897.4962);
   15->SetBinContent(3,981.6364);
   15->SetBinContent(4,1262.104);
   15->SetBinContent(5,1402.338);
   15->SetBinContent(6,1514.525);
   15->SetBinContent(7,1121.87);
   15->SetBinContent(8,1430.385);
   15->SetBinContent(9,981.6364);
   15->SetBinContent(10,1149.917);
   15->SetBinContent(11,673.1221);
   15->SetBinContent(12,560.9351);
   15->SetBinContent(13,757.2624);
   15->SetBinContent(14,588.9819);
   15->SetBinContent(15,785.3091);
   15->SetBinContent(16,420.7013);
   15->SetBinContent(17,560.9351);
   15->SetBinContent(18,701.1689);
   15->SetBinContent(19,308.5143);
   15->SetBinContent(20,560.9351);
   15->SetBinContent(21,673.1221);
   15->SetBinContent(22,588.9819);
   15->SetBinContent(23,280.4676);
   15->SetBinContent(24,448.7481);
   15->SetBinContent(25,448.7481);
   15->SetBinContent(26,448.7481);
   15->SetBinContent(27,420.7013);
   15->SetBinContent(28,252.4208);
   15->SetBinContent(29,336.5611);
   15->SetBinContent(30,280.4676);
   15->SetBinContent(31,308.5143);
   15->SetBinContent(32,308.5143);
   15->SetBinContent(33,280.4676);
   15->SetBinContent(34,140.2338);
   15->SetBinContent(35,308.5143);
   15->SetBinContent(36,224.374);
   15->SetBinContent(37,504.8416);
   15->SetBinContent(38,140.2338);
   15->SetBinContent(39,196.3273);
   15->SetBinContent(40,112.187);
   15->SetBinContent(41,196.3273);
   15->SetBinContent(42,252.4208);
   15->SetBinContent(43,112.187);
   15->SetBinContent(44,168.2805);
   15->SetBinContent(45,84.14027);
   15->SetBinContent(46,168.2805);
   15->SetBinContent(47,84.14027);
   15->SetBinContent(48,112.187);
   15->SetBinContent(49,84.14027);
   15->SetBinContent(50,112.187);
   15->SetBinContent(51,2299.835);
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
   16->SetBinContent(1,31.85936);
   16->SetBinContent(2,127.4375);
   16->SetBinContent(3,233.6353);
   16->SetBinContent(4,276.1144);
   16->SetBinContent(5,382.3122);
   16->SetBinContent(6,403.5518);
   16->SetBinContent(7,488.51);
   16->SetBinContent(8,446.0309);
   16->SetBinContent(9,403.5518);
   16->SetBinContent(10,435.4111);
   16->SetBinContent(11,467.2705);
   16->SetBinContent(12,477.8903);
   16->SetBinContent(13,520.3694);
   16->SetBinContent(14,286.7342);
   16->SetBinContent(15,329.2133);
   16->SetBinContent(16,329.2133);
   16->SetBinContent(17,350.4529);
   16->SetBinContent(18,339.8331);
   16->SetBinContent(19,265.4946);
   16->SetBinContent(20,307.9738);
   16->SetBinContent(21,339.8331);
   16->SetBinContent(22,265.4946);
   16->SetBinContent(23,223.0155);
   16->SetBinContent(24,244.2551);
   16->SetBinContent(25,350.4529);
   16->SetBinContent(26,191.1562);
   16->SetBinContent(27,148.677);
   16->SetBinContent(28,276.1144);
   16->SetBinContent(29,53.09894);
   16->SetBinContent(30,180.5364);
   16->SetBinContent(31,106.1979);
   16->SetBinContent(32,233.6353);
   16->SetBinContent(33,159.2968);
   16->SetBinContent(34,138.0573);
   16->SetBinContent(35,116.8177);
   16->SetBinContent(36,148.677);
   16->SetBinContent(37,106.1979);
   16->SetBinContent(38,106.1979);
   16->SetBinContent(39,159.2968);
   16->SetBinContent(40,138.0573);
   16->SetBinContent(41,74.33852);
   16->SetBinContent(42,116.8177);
   16->SetBinContent(43,63.71873);
   16->SetBinContent(44,74.33852);
   16->SetBinContent(45,95.57809);
   16->SetBinContent(46,63.71873);
   16->SetBinContent(47,74.33852);
   16->SetBinContent(48,63.71873);
   16->SetBinContent(49,53.09894);
   16->SetBinContent(50,63.71873);
   16->SetBinContent(51,1699.165);
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
   17->SetBinContent(1,1459.693);
   17->SetBinContent(2,2797.746);
   17->SetBinContent(3,2615.284);
   17->SetBinContent(4,4257.44);
   17->SetBinContent(5,4014.157);
   17->SetBinContent(6,5048.11);
   17->SetBinContent(7,5230.573);
   17->SetBinContent(8,5656.318);
   17->SetBinContent(9,6021.243);
   17->SetBinContent(10,4804.827);
   17->SetBinContent(11,2736.925);
   17->SetBinContent(12,2007.078);
   17->SetBinContent(13,1459.693);
   17->SetBinContent(14,790.6673);
   17->SetBinContent(15,608.2056);
   17->SetBinContent(16,912.3084);
   17->SetBinContent(17,304.1028);
   17->SetBinContent(18,608.2056);
   17->SetBinContent(19,912.3084);
   17->SetBinContent(20,912.3084);
   17->SetBinContent(21,851.4879);
   17->SetBinContent(22,608.2056);
   17->SetBinContent(23,547.3851);
   17->SetBinContent(24,425.7439);
   17->SetBinContent(25,304.1028);
   17->SetBinContent(26,547.3851);
   17->SetBinContent(27,364.9234);
   17->SetBinContent(28,669.0262);
   17->SetBinContent(29,243.2822);
   17->SetBinContent(30,182.4617);
   17->SetBinContent(31,243.2822);
   17->SetBinContent(32,608.2056);
   17->SetBinContent(33,608.2056);
   17->SetBinContent(34,486.5645);
   17->SetBinContent(35,425.7439);
   17->SetBinContent(36,364.9234);
   17->SetBinContent(37,304.1028);
   17->SetBinContent(38,182.4617);
   17->SetBinContent(39,364.9234);
   17->SetBinContent(40,425.7439);
   17->SetBinContent(41,243.2822);
   17->SetBinContent(42,304.1028);
   17->SetBinContent(43,486.5645);
   17->SetBinContent(44,121.6411);
   17->SetBinContent(45,304.1028);
   17->SetBinContent(46,304.1028);
   17->SetBinContent(47,182.4617);
   17->SetBinContent(48,182.4617);
   17->SetBinContent(49,304.1028);
   17->SetBinContent(50,60.82056);
   17->SetBinContent(51,16299.89);
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
