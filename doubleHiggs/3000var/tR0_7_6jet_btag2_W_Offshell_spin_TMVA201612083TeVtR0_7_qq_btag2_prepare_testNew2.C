{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:46:35 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.073652,1.31746,5.313668);
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
   
   TH1F *THStack_stack_32 = new TH1F("THStack_stack_32","",50,0,1);
   THStack_stack_32->SetMinimum(0.02729388);
   THStack_stack_32->SetMaximum(43922.01);
   THStack_stack_32->SetDirectory(0);
   THStack_stack_32->SetStats(0);
   THStack_stack_32->SetLineWidth(2);
   THStack_stack_32->SetMarkerSize(1.2);
   THStack_stack_32->GetXaxis()->SetTitle("cos*(#theta_{W*}) sub-jets");
   THStack_stack_32->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_32->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_32->GetXaxis()->SetLabelColor(ci);
   THStack_stack_32->GetXaxis()->SetLabelFont(42);
   THStack_stack_32->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_32->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_32->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_32->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_32->GetXaxis()->SetTitleColor(ci);
   THStack_stack_32->GetXaxis()->SetTitleFont(42);
   THStack_stack_32->GetYaxis()->SetTitle("Number of events");
   THStack_stack_32->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_32->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_32->GetYaxis()->SetLabelColor(ci);
   THStack_stack_32->GetYaxis()->SetLabelFont(42);
   THStack_stack_32->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_32->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_32->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_32->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_32->GetYaxis()->SetTitleColor(ci);
   THStack_stack_32->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_32->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_32->GetZaxis()->SetLabelColor(ci);
   THStack_stack_32->GetZaxis()->SetLabelFont(42);
   THStack_stack_32->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_32->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_32->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_32->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_32->GetZaxis()->SetTitleColor(ci);
   THStack_stack_32->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_32);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,2.256972);
   0->SetBinContent(2,2.157983);
   0->SetBinContent(3,2.266871);
   0->SetBinContent(4,2.553939);
   0->SetBinContent(5,2.296568);
   0->SetBinContent(6,2.36586);
   0->SetBinContent(7,2.27677);
   0->SetBinContent(8,2.118388);
   0->SetBinContent(9,2.336164);
   0->SetBinContent(10,2.425254);
   0->SetBinContent(11,2.049095);
   0->SetBinContent(12,2.128287);
   0->SetBinContent(13,2.108489);
   0->SetBinContent(14,2.09859);
   0->SetBinContent(15,1.979803);
   0->SetBinContent(16,2.128287);
   0->SetBinContent(17,2.148084);
   0->SetBinContent(18,2.078792);
   0->SetBinContent(19,2.247073);
   0->SetBinContent(20,1.623438);
   0->SetBinContent(21,1.841217);
   0->SetBinContent(22,2.039196);
   0->SetBinContent(23,1.831318);
   0->SetBinContent(24,1.831318);
   0->SetBinContent(25,1.80162);
   0->SetBinContent(26,1.841217);
   0->SetBinContent(27,1.643236);
   0->SetBinContent(28,1.940207);
   0->SetBinContent(29,1.861015);
   0->SetBinContent(30,1.771923);
   0->SetBinContent(31,1.791721);
   0->SetBinContent(32,1.643236);
   0->SetBinContent(33,1.712529);
   0->SetBinContent(34,1.465054);
   0->SetBinContent(35,1.544246);
   0->SetBinContent(36,1.781822);
   0->SetBinContent(37,1.524448);
   0->SetBinContent(38,1.445256);
   0->SetBinContent(39,1.395761);
   0->SetBinContent(40,1.474953);
   0->SetBinContent(41,1.494751);
   0->SetBinContent(42,1.336367);
   0->SetBinContent(43,1.336367);
   0->SetBinContent(44,1.247275);
   0->SetBinContent(45,1.237376);
   0->SetBinContent(46,1.108689);
   0->SetBinContent(47,1.069093);
   0->SetBinContent(48,1.177982);
   0->SetBinContent(49,1.207679);
   0->SetBinContent(50,1.029497);
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
   1->SetBinContent(1,1.608419);
   1->SetBinContent(2,1.598521);
   1->SetBinContent(3,1.484695);
   1->SetBinContent(4,1.707399);
   1->SetBinContent(5,1.341175);
   1->SetBinContent(6,1.623266);
   1->SetBinContent(7,1.450052);
   1->SetBinContent(8,1.573777);
   1->SetBinContent(9,1.464899);
   1->SetBinContent(10,1.499542);
   1->SetBinContent(11,1.484695);
   1->SetBinContent(12,1.50944);
   1->SetBinContent(13,1.331277);
   1->SetBinContent(14,1.41046);
   1->SetBinContent(15,1.336226);
   1->SetBinContent(16,1.301583);
   1->SetBinContent(17,1.356022);
   1->SetBinContent(18,1.31643);
   1->SetBinContent(19,1.281787);
   1->SetBinContent(20,1.380767);
   1->SetBinContent(21,1.31643);
   1->SetBinContent(22,1.138267);
   1->SetBinContent(23,1.356022);
   1->SetBinContent(24,1.321379);
   1->SetBinContent(25,1.26694);
   1->SetBinContent(26,1.301583);
   1->SetBinContent(27,1.291685);
   1->SetBinContent(28,1.321379);
   1->SetBinContent(29,1.351073);
   1->SetBinContent(30,1.202604);
   1->SetBinContent(31,1.202604);
   1->SetBinContent(32,1.306532);
   1->SetBinContent(33,1.252093);
   1->SetBinContent(34,1.271889);
   1->SetBinContent(35,1.093726);
   1->SetBinContent(36,1.445103);
   1->SetBinContent(37,1.143216);
   1->SetBinContent(38,1.360971);
   1->SetBinContent(39,1.296634);
   1->SetBinContent(40,1.182808);
   1->SetBinContent(41,1.083828);
   1->SetBinContent(42,1.242195);
   1->SetBinContent(43,1.167961);
   1->SetBinContent(44,1.232297);
   1->SetBinContent(45,1.385716);
   1->SetBinContent(46,1.143216);
   1->SetBinContent(47,1.296634);
   1->SetBinContent(48,1.261991);
   1->SetBinContent(49,1.158063);
   1->SetBinContent(50,1.177859);
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
   2->SetBinContent(1,3.088189);
   2->SetBinContent(2,2.994156);
   2->SetBinContent(3,3.276254);
   2->SetBinContent(4,3.009003);
   2->SetBinContent(5,3.13768);
   2->SetBinContent(6,2.949614);
   2->SetBinContent(7,2.890225);
   2->SetBinContent(8,2.959512);
   2->SetBinContent(9,2.870429);
   2->SetBinContent(10,3.02385);
   2->SetBinContent(11,2.959512);
   2->SetBinContent(12,2.875378);
   2->SetBinContent(13,3.043647);
   2->SetBinContent(14,2.618025);
   2->SetBinContent(15,2.939716);
   2->SetBinContent(16,2.924869);
   2->SetBinContent(17,2.895174);
   2->SetBinContent(18,2.895174);
   2->SetBinContent(19,2.721956);
   2->SetBinContent(20,2.652668);
   2->SetBinContent(21,2.538839);
   2->SetBinContent(22,2.652668);
   2->SetBinContent(23,2.523992);
   2->SetBinContent(24,2.385417);
   2->SetBinContent(25,2.637821);
   2->SetBinContent(26,2.291385);
   2->SetBinContent(27,2.721956);
   2->SetBinContent(28,2.53389);
   2->SetBinContent(29,2.736803);
   2->SetBinContent(30,2.340876);
   2->SetBinContent(31,2.583381);
   2->SetBinContent(32,2.345825);
   2->SetBinContent(33,2.405214);
   2->SetBinContent(34,2.464603);
   2->SetBinContent(35,2.439857);
   2->SetBinContent(36,2.227046);
   2->SetBinContent(37,2.731854);
   2->SetBinContent(38,2.434908);
   2->SetBinContent(39,2.47945);
   2->SetBinContent(40,2.474501);
   2->SetBinContent(41,2.489348);
   2->SetBinContent(42,2.454705);
   2->SetBinContent(43,2.58833);
   2->SetBinContent(44,2.687312);
   2->SetBinContent(45,2.434908);
   2->SetBinContent(46,2.380468);
   2->SetBinContent(47,2.632872);
   2->SetBinContent(48,2.746701);
   2->SetBinContent(49,2.64277);
   2->SetBinContent(50,2.994156);
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
   3->SetBinContent(1,15.02538);
   3->SetBinContent(2,14.5189);
   3->SetBinContent(3,14.65396);
   3->SetBinContent(4,14.11373);
   3->SetBinContent(5,13.67478);
   3->SetBinContent(6,13.70855);
   3->SetBinContent(7,15.22797);
   3->SetBinContent(8,12.35795);
   3->SetBinContent(9,12.02031);
   3->SetBinContent(10,13.06702);
   3->SetBinContent(11,13.64102);
   3->SetBinContent(12,11.95278);
   3->SetBinContent(13,12.83066);
   3->SetBinContent(14,13.74231);
   3->SetBinContent(15,12.29042);
   3->SetBinContent(16,11.37877);
   3->SetBinContent(17,12.29042);
   3->SetBinContent(18,12.56054);
   3->SetBinContent(19,12.52678);
   3->SetBinContent(20,12.56054);
   3->SetBinContent(21,11.00736);
   3->SetBinContent(22,11.04113);
   3->SetBinContent(23,11.71642);
   3->SetBinContent(24,11.75019);
   3->SetBinContent(25,11.81772);
   3->SetBinContent(26,10.46712);
   3->SetBinContent(27,11.20995);
   3->SetBinContent(28,10.80477);
   3->SetBinContent(29,11.51383);
   3->SetBinContent(30,10.36583);
   3->SetBinContent(31,10.197);
   3->SetBinContent(32,10.197);
   3->SetBinContent(33,10.83854);
   3->SetBinContent(34,10.16324);
   3->SetBinContent(35,9.352883);
   3->SetBinContent(36,9.656767);
   3->SetBinContent(37,10.09571);
   3->SetBinContent(38,9.217824);
   3->SetBinContent(39,10.26453);
   3->SetBinContent(40,9.96065);
   3->SetBinContent(41,9.521708);
   3->SetBinContent(42,9.319118);
   3->SetBinContent(43,9.623002);
   3->SetBinContent(44,10.50089);
   3->SetBinContent(45,8.812646);
   3->SetBinContent(46,9.555472);
   3->SetBinContent(47,8.711351);
   3->SetBinContent(48,8.441233);
   3->SetBinContent(49,8.778881);
   3->SetBinContent(50,8.542527);
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
   4->SetBinContent(1,13.4694);
   4->SetBinContent(2,13.95044);
   4->SetBinContent(3,13.42566);
   4->SetBinContent(4,13.99418);
   4->SetBinContent(5,14.12537);
   4->SetBinContent(6,13.11954);
   4->SetBinContent(7,14.10351);
   4->SetBinContent(8,13.05394);
   4->SetBinContent(9,13.05394);
   4->SetBinContent(10,12.98835);
   4->SetBinContent(11,12.17931);
   4->SetBinContent(12,13.11954);
   4->SetBinContent(13,13.60059);
   4->SetBinContent(14,12.26677);
   4->SetBinContent(15,12.76969);
   4->SetBinContent(16,12.81342);
   4->SetBinContent(17,12.85715);
   4->SetBinContent(18,12.68223);
   4->SetBinContent(19,11.98252);
   4->SetBinContent(20,11.41401);
   4->SetBinContent(21,11.93879);
   4->SetBinContent(22,11.78573);
   4->SetBinContent(23,11.12975);
   4->SetBinContent(24,11.37027);
   4->SetBinContent(25,11.28281);
   4->SetBinContent(26,10.56124);
   4->SetBinContent(27,10.5831);
   4->SetBinContent(28,11.37027);
   4->SetBinContent(29,11.10788);
   4->SetBinContent(30,10.80176);
   4->SetBinContent(31,10.95482);
   4->SetBinContent(32,10.91109);
   4->SetBinContent(33,10.86736);
   4->SetBinContent(34,10.49564);
   4->SetBinContent(35,10.18952);
   4->SetBinContent(36,10.16765);
   4->SetBinContent(37,10.95482);
   4->SetBinContent(38,11.02042);
   4->SetBinContent(39,11.69826);
   4->SetBinContent(40,11.65453);
   4->SetBinContent(41,10.91109);
   4->SetBinContent(42,11.41401);
   4->SetBinContent(43,10.10206);
   4->SetBinContent(44,11.30468);
   4->SetBinContent(45,11.41401);
   4->SetBinContent(46,10.25512);
   4->SetBinContent(47,10.67057);
   4->SetBinContent(48,11.06415);
   4->SetBinContent(49,11.5452);
   4->SetBinContent(50,11.52334);
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
   5->SetBinContent(1,46.40694);
   5->SetBinContent(2,46.58141);
   5->SetBinContent(3,45.01122);
   5->SetBinContent(4,46.23248);
   5->SetBinContent(5,49.3147);
   5->SetBinContent(6,46.87218);
   5->SetBinContent(7,46.75587);
   5->SetBinContent(8,44.02259);
   5->SetBinContent(9,44.60414);
   5->SetBinContent(10,47.22112);
   5->SetBinContent(11,45.12753);
   5->SetBinContent(12,46.05801);
   5->SetBinContent(13,44.83676);
   5->SetBinContent(14,46.98849);
   5->SetBinContent(15,42.91764);
   5->SetBinContent(16,42.80133);
   5->SetBinContent(17,43.96443);
   5->SetBinContent(18,44.54598);
   5->SetBinContent(19,42.16162);
   5->SetBinContent(20,41.05668);
   5->SetBinContent(21,40.70775);
   5->SetBinContent(22,40.1262);
   5->SetBinContent(23,40.82406);
   5->SetBinContent(24,40.64959);
   5->SetBinContent(25,43.6155);
   5->SetBinContent(26,40.30066);
   5->SetBinContent(27,41.11483);
   5->SetBinContent(28,41.23114);
   5->SetBinContent(29,40.1262);
   5->SetBinContent(30,42.04531);
   5->SetBinContent(31,40.53328);
   5->SetBinContent(32,42.91764);
   5->SetBinContent(33,40.24251);
   5->SetBinContent(34,40.70775);
   5->SetBinContent(35,44.02259);
   5->SetBinContent(36,43.96443);
   5->SetBinContent(37,41.23114);
   5->SetBinContent(38,42.62687);
   5->SetBinContent(39,43.09211);
   5->SetBinContent(40,43.09211);
   5->SetBinContent(41,45.9417);
   5->SetBinContent(42,46.93034);
   5->SetBinContent(43,43.26657);
   5->SetBinContent(44,46.23248);
   5->SetBinContent(45,45.24384);
   5->SetBinContent(46,46.98849);
   5->SetBinContent(47,46.34879);
   5->SetBinContent(48,45.53462);
   5->SetBinContent(49,49.14023);
   5->SetBinContent(50,48.55868);
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
   6->SetBinContent(1,1377.882);
   6->SetBinContent(2,1459.45);
   6->SetBinContent(3,1352.447);
   6->SetBinContent(4,1459.45);
   6->SetBinContent(5,1377.882);
   6->SetBinContent(6,1339.29);
   6->SetBinContent(7,1343.676);
   6->SetBinContent(8,1292.805);
   6->SetBinContent(9,1319.118);
   6->SetBinContent(10,1355.078);
   6->SetBinContent(11,1347.184);
   6->SetBinContent(12,1348.061);
   6->SetBinContent(13,1270.001);
   6->SetBinContent(14,1272.633);
   6->SetBinContent(15,1200.713);
   6->SetBinContent(16,1325.257);
   6->SetBinContent(17,1239.304);
   6->SetBinContent(18,1190.188);
   6->SetBinContent(19,1170.015);
   6->SetBinContent(20,1232.287);
   6->SetBinContent(21,1191.942);
   6->SetBinContent(22,1181.417);
   6->SetBinContent(23,1173.523);
   6->SetBinContent(24,1144.58);
   6->SetBinContent(25,1144.58);
   6->SetBinContent(26,1173.523);
   6->SetBinContent(27,1215.623);
   6->SetBinContent(28,1155.982);
   6->SetBinContent(29,1131.424);
   6->SetBinContent(30,1194.573);
   6->SetBinContent(31,1145.457);
   6->SetBinContent(32,1132.301);
   6->SetBinContent(33,1173.523);
   6->SetBinContent(34,1164.752);
   6->SetBinContent(35,1153.35);
   6->SetBinContent(36,1139.317);
   6->SetBinContent(37,1178.786);
   6->SetBinContent(38,1238.427);
   6->SetBinContent(39,1234.918);
   6->SetBinContent(40,1182.294);
   6->SetBinContent(41,1299.822);
   6->SetBinContent(42,1224.394);
   6->SetBinContent(43,1227.025);
   6->SetBinContent(44,1239.304);
   6->SetBinContent(45,1328.766);
   6->SetBinContent(46,1316.486);
   6->SetBinContent(47,1334.905);
   6->SetBinContent(48,1418.227);
   6->SetBinContent(49,1475.237);
   6->SetBinContent(50,1536.632);
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
   7->SetBinContent(1,268.2269);
   7->SetBinContent(2,275.6855);
   7->SetBinContent(3,284.3873);
   7->SetBinContent(4,274.0281);
   7->SetBinContent(5,268.2269);
   7->SetBinContent(6,263.6689);
   7->SetBinContent(7,266.2932);
   7->SetBinContent(8,269.1938);
   7->SetBinContent(9,277.2049);
   7->SetBinContent(10,269.47);
   7->SetBinContent(11,262.2877);
   7->SetBinContent(12,255.3815);
   7->SetBinContent(13,260.9064);
   7->SetBinContent(14,262.0114);
   7->SetBinContent(15,257.039);
   7->SetBinContent(16,256.4865);
   7->SetBinContent(17,254.4147);
   7->SetBinContent(18,243.9174);
   7->SetBinContent(19,257.8677);
   7->SetBinContent(20,248.6135);
   7->SetBinContent(21,249.8566);
   7->SetBinContent(22,241.1549);
   7->SetBinContent(23,256.6246);
   7->SetBinContent(24,245.713);
   7->SetBinContent(25,239.7737);
   7->SetBinContent(26,237.84);
   7->SetBinContent(27,239.2212);
   7->SetBinContent(28,248.3373);
   7->SetBinContent(29,243.3649);
   7->SetBinContent(30,246.5417);
   7->SetBinContent(31,235.7681);
   7->SetBinContent(32,246.2655);
   7->SetBinContent(33,235.9063);
   7->SetBinContent(34,240.4643);
   7->SetBinContent(35,247.0942);
   7->SetBinContent(36,234.6632);
   7->SetBinContent(37,235.3538);
   7->SetBinContent(38,249.5804);
   7->SetBinContent(39,239.2212);
   7->SetBinContent(40,242.398);
   7->SetBinContent(41,248.3373);
   7->SetBinContent(42,268.0888);
   7->SetBinContent(43,260.6302);
   7->SetBinContent(44,263.9451);
   7->SetBinContent(45,275.6855);
   7->SetBinContent(46,272.3706);
   7->SetBinContent(47,273.1993);
   7->SetBinContent(48,274.5806);
   7->SetBinContent(49,282.0392);
   7->SetBinContent(50,294.0558);
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
   8->SetBinContent(1,36.03132);
   8->SetBinContent(2,48.96566);
   8->SetBinContent(3,35.10744);
   8->SetBinContent(4,41.57461);
   8->SetBinContent(5,44.34625);
   8->SetBinContent(6,38.80296);
   8->SetBinContent(7,41.57461);
   8->SetBinContent(8,34.18356);
   8->SetBinContent(9,27.71639);
   8->SetBinContent(10,37.87908);
   8->SetBinContent(11,42.49849);
   8->SetBinContent(12,38.80296);
   8->SetBinContent(13,31.41191);
   8->SetBinContent(14,32.33579);
   8->SetBinContent(15,35.10744);
   8->SetBinContent(16,29.56415);
   8->SetBinContent(17,37.87908);
   8->SetBinContent(18,36.03132);
   8->SetBinContent(19,38.80296);
   8->SetBinContent(20,44.34625);
   8->SetBinContent(21,43.42237);
   8->SetBinContent(22,30.48803);
   8->SetBinContent(23,25.86863);
   8->SetBinContent(24,30.48803);
   8->SetBinContent(25,38.80296);
   8->SetBinContent(26,28.64027);
   8->SetBinContent(27,37.87908);
   8->SetBinContent(28,46.19402);
   8->SetBinContent(29,41.57461);
   8->SetBinContent(30,31.41191);
   8->SetBinContent(31,32.33579);
   8->SetBinContent(32,35.10744);
   8->SetBinContent(33,44.34625);
   8->SetBinContent(34,30.48803);
   8->SetBinContent(35,35.10744);
   8->SetBinContent(36,30.48803);
   8->SetBinContent(37,45.27013);
   8->SetBinContent(38,39.72684);
   8->SetBinContent(39,37.87908);
   8->SetBinContent(40,55.43283);
   8->SetBinContent(41,40.65073);
   8->SetBinContent(42,49.88954);
   8->SetBinContent(43,48.96566);
   8->SetBinContent(44,45.27013);
   8->SetBinContent(45,54.50895);
   8->SetBinContent(46,47.1179);
   8->SetBinContent(47,51.7373);
   8->SetBinContent(48,64.67165);
   8->SetBinContent(49,81.30151);
   8->SetBinContent(50,82.2254);
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
   9->SetBinContent(1,299.3435);
   9->SetBinContent(2,274.7273);
   9->SetBinContent(3,269.0128);
   9->SetBinContent(4,269.892);
   9->SetBinContent(5,305.4976);
   9->SetBinContent(6,286.5958);
   9->SetBinContent(7,308.5746);
   9->SetBinContent(8,308.5746);
   9->SetBinContent(9,300.6622);
   9->SetBinContent(10,296.2665);
   9->SetBinContent(11,284.3979);
   9->SetBinContent(12,263.2983);
   9->SetBinContent(13,290.9916);
   9->SetBinContent(14,272.0898);
   9->SetBinContent(15,278.2439);
   9->SetBinContent(16,267.6941);
   9->SetBinContent(17,294.9478);
   9->SetBinContent(18,278.6835);
   9->SetBinContent(19,275.1669);
   9->SetBinContent(20,273.8481);
   9->SetBinContent(21,279.123);
   9->SetBinContent(22,279.123);
   9->SetBinContent(23,282.6396);
   9->SetBinContent(24,267.6941);
   9->SetBinContent(25,266.8149);
   9->SetBinContent(26,287.0354);
   9->SetBinContent(27,280.0022);
   9->SetBinContent(28,290.552);
   9->SetBinContent(29,297.1456);
   9->SetBinContent(30,294.5082);
   9->SetBinContent(31,298.4644);
   9->SetBinContent(32,289.2333);
   9->SetBinContent(33,290.552);
   9->SetBinContent(34,305.058);
   9->SetBinContent(35,314.7286);
   9->SetBinContent(36,334.0699);
   9->SetBinContent(37,319.1244);
   9->SetBinContent(38,305.058);
   9->SetBinContent(39,305.9371);
   9->SetBinContent(40,319.564);
   9->SetBinContent(41,330.9929);
   9->SetBinContent(42,324.8389);
   9->SetBinContent(43,335.8282);
   9->SetBinContent(44,363.9611);
   9->SetBinContent(45,345.9385);
   9->SetBinContent(46,350.3342);
   9->SetBinContent(47,368.7964);
   9->SetBinContent(48,409.6769);
   9->SetBinContent(49,438.2493);
   9->SetBinContent(50,594.2985);
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
   10->SetBinContent(1,3454.359);
   10->SetBinContent(2,3381.544);
   10->SetBinContent(3,3383.291);
   10->SetBinContent(4,3472.125);
   10->SetBinContent(5,3390.573);
   10->SetBinContent(6,3427.271);
   10->SetBinContent(7,3360.864);
   10->SetBinContent(8,3378.049);
   10->SetBinContent(9,3362.029);
   10->SetBinContent(10,3244.36);
   10->SetBinContent(11,3321.835);
   10->SetBinContent(12,3206.497);
   10->SetBinContent(13,3263.583);
   10->SetBinContent(14,3113.585);
   10->SetBinContent(15,3178.827);
   10->SetBinContent(16,3132.517);
   10->SetBinContent(17,3065.818);
   10->SetBinContent(18,3059.702);
   10->SetBinContent(19,3110.672);
   10->SetBinContent(20,3018.052);
   10->SetBinContent(21,2996.79);
   10->SetBinContent(22,3030.576);
   10->SetBinContent(23,2968.537);
   10->SetBinContent(24,2916.984);
   10->SetBinContent(25,2913.781);
   10->SetBinContent(26,2905.043);
   10->SetBinContent(27,2913.489);
   10->SetBinContent(28,2862.228);
   10->SetBinContent(29,2870.383);
   10->SetBinContent(30,2821.742);
   10->SetBinContent(31,2832.228);
   10->SetBinContent(32,2834.267);
   10->SetBinContent(33,2866.014);
   10->SetBinContent(34,2854.072);
   10->SetBinContent(35,2808.344);
   10->SetBinContent(36,2848.83);
   10->SetBinContent(37,2817.665);
   10->SetBinContent(38,2853.198);
   10->SetBinContent(39,2851.16);
   10->SetBinContent(40,2848.83);
   10->SetBinContent(41,2870.092);
   10->SetBinContent(42,2893.392);
   10->SetBinContent(43,2917.567);
   10->SetBinContent(44,2876.208);
   10->SetBinContent(45,2897.179);
   10->SetBinContent(46,2950.771);
   10->SetBinContent(47,2903.586);
   10->SetBinContent(48,2827.276);
   10->SetBinContent(49,2852.616);
   10->SetBinContent(50,2830.771);
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
   11->SetBinContent(1,488.3334);
   11->SetBinContent(2,763.0207);
   11->SetBinContent(3,549.375);
   11->SetBinContent(4,701.9791);
   11->SetBinContent(5,579.8958);
   11->SetBinContent(6,671.4583);
   11->SetBinContent(7,763.0207);
   11->SetBinContent(8,549.375);
   11->SetBinContent(9,579.8958);
   11->SetBinContent(10,579.8958);
   11->SetBinContent(11,701.9791);
   11->SetBinContent(12,610.4166);
   11->SetBinContent(13,610.4166);
   11->SetBinContent(14,640.9374);
   11->SetBinContent(15,549.375);
   11->SetBinContent(16,579.8958);
   11->SetBinContent(17,701.9791);
   11->SetBinContent(18,671.4583);
   11->SetBinContent(19,732.4999);
   11->SetBinContent(20,793.5415);
   11->SetBinContent(21,579.8958);
   11->SetBinContent(22,701.9791);
   11->SetBinContent(23,396.7708);
   11->SetBinContent(24,671.4583);
   11->SetBinContent(25,671.4583);
   11->SetBinContent(26,793.5415);
   11->SetBinContent(27,579.8958);
   11->SetBinContent(28,579.8958);
   11->SetBinContent(29,518.8542);
   11->SetBinContent(30,610.4166);
   11->SetBinContent(31,579.8958);
   11->SetBinContent(32,701.9791);
   11->SetBinContent(33,701.9791);
   11->SetBinContent(34,396.7708);
   11->SetBinContent(35,763.0207);
   11->SetBinContent(36,671.4583);
   11->SetBinContent(37,793.5415);
   11->SetBinContent(38,366.25);
   11->SetBinContent(39,427.2917);
   11->SetBinContent(40,427.2917);
   11->SetBinContent(41,640.9374);
   11->SetBinContent(42,671.4583);
   11->SetBinContent(43,885.1039);
   11->SetBinContent(44,610.4166);
   11->SetBinContent(45,610.4166);
   11->SetBinContent(46,793.5415);
   11->SetBinContent(47,640.9374);
   11->SetBinContent(48,610.4166);
   11->SetBinContent(49,671.4583);
   11->SetBinContent(50,1251.354);
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
   12->SetBinContent(1,314.3041);
   12->SetBinContent(2,331.4867);
   12->SetBinContent(3,312.8722);
   12->SetBinContent(4,316.4519);
   12->SetBinContent(5,316.4519);
   12->SetBinContent(6,319.3157);
   12->SetBinContent(7,320.7476);
   12->SetBinContent(8,317.1678);
   12->SetBinContent(9,285.6664);
   12->SetBinContent(10,301.4171);
   12->SetBinContent(11,315.02);
   12->SetBinContent(12,293.5417);
   12->SetBinContent(13,288.5302);
   12->SetBinContent(14,284.2345);
   12->SetBinContent(15,279.2229);
   12->SetBinContent(16,278.507);
   12->SetBinContent(17,287.8142);
   12->SetBinContent(18,274.9272);
   12->SetBinContent(19,273.4954);
   12->SetBinContent(20,277.791);
   12->SetBinContent(21,266.3359);
   12->SetBinContent(22,275.6432);
   12->SetBinContent(23,281.3707);
   12->SetBinContent(24,275.6432);
   12->SetBinContent(25,263.4722);
   12->SetBinContent(26,270.6316);
   12->SetBinContent(27,274.9272);
   12->SetBinContent(28,267.7678);
   12->SetBinContent(29,264.9041);
   12->SetBinContent(30,253.4489);
   12->SetBinContent(31,280.6548);
   12->SetBinContent(32,292.8258);
   12->SetBinContent(33,292.8258);
   12->SetBinContent(34,282.8026);
   12->SetBinContent(35,314.3041);
   12->SetBinContent(36,265.62);
   12->SetBinContent(37,267.7678);
   12->SetBinContent(38,277.0751);
   12->SetBinContent(39,306.4287);
   12->SetBinContent(40,321.4635);
   12->SetBinContent(41,297.8374);
   12->SetBinContent(42,332.2026);
   12->SetBinContent(43,333.6345);
   12->SetBinContent(44,333.6345);
   12->SetBinContent(45,373.7273);
   12->SetBinContent(46,393.0577);
   12->SetBinContent(47,385.8983);
   12->SetBinContent(48,400.2172);
   12->SetBinContent(49,525.5071);
   12->SetBinContent(50,620.0115);
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
   13->SetBinContent(1,7749.655);
   13->SetBinContent(2,8373.788);
   13->SetBinContent(3,8477.81);
   13->SetBinContent(4,7853.678);
   13->SetBinContent(5,7333.565);
   13->SetBinContent(6,7853.678);
   13->SetBinContent(7,7333.565);
   13->SetBinContent(8,8321.777);
   13->SetBinContent(9,7489.599);
   13->SetBinContent(10,9466.014);
   13->SetBinContent(11,7541.61);
   13->SetBinContent(12,8425.799);
   13->SetBinContent(13,8425.799);
   13->SetBinContent(14,6553.397);
   13->SetBinContent(15,7749.655);
   13->SetBinContent(16,8477.81);
   13->SetBinContent(17,7645.633);
   13->SetBinContent(18,7541.61);
   13->SetBinContent(19,7073.509);
   13->SetBinContent(20,8009.711);
   13->SetBinContent(21,6553.397);
   13->SetBinContent(22,7385.577);
   13->SetBinContent(23,7801.667);
   13->SetBinContent(24,7177.532);
   13->SetBinContent(25,6605.408);
   13->SetBinContent(26,6033.285);
   13->SetBinContent(27,6969.487);
   13->SetBinContent(28,7229.543);
   13->SetBinContent(29,7229.543);
   13->SetBinContent(30,6189.318);
   13->SetBinContent(31,6605.408);
   13->SetBinContent(32,7177.532);
   13->SetBinContent(33,7229.543);
   13->SetBinContent(34,7229.543);
   13->SetBinContent(35,7125.521);
   13->SetBinContent(36,6761.442);
   13->SetBinContent(37,7073.509);
   13->SetBinContent(38,7541.61);
   13->SetBinContent(39,7073.509);
   13->SetBinContent(40,7853.678);
   13->SetBinContent(41,8165.745);
   13->SetBinContent(42,7229.543);
   13->SetBinContent(43,7281.554);
   13->SetBinContent(44,7593.622);
   13->SetBinContent(45,7853.678);
   13->SetBinContent(46,7749.655);
   13->SetBinContent(47,7749.655);
   13->SetBinContent(48,8269.767);
   13->SetBinContent(49,8217.756);
   13->SetBinContent(50,8945.906);
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
   14->SetBinContent(1,2582.024);
   14->SetBinContent(2,2480.223);
   14->SetBinContent(3,2656.061);
   14->SetBinContent(4,2526.496);
   14->SetBinContent(5,2276.621);
   14->SetBinContent(6,2683.825);
   14->SetBinContent(7,2443.204);
   14->SetBinContent(8,2267.366);
   14->SetBinContent(9,2406.186);
   14->SetBinContent(10,2091.528);
   14->SetBinContent(11,2137.801);
   14->SetBinContent(12,2091.528);
   14->SetBinContent(13,1943.455);
   14->SetBinContent(14,1943.455);
   14->SetBinContent(15,2165.565);
   14->SetBinContent(16,1961.964);
   14->SetBinContent(17,2054.51);
   14->SetBinContent(18,1989.728);
   14->SetBinContent(19,2091.528);
   14->SetBinContent(20,1628.802);
   14->SetBinContent(21,1545.511);
   14->SetBinContent(22,1443.711);
   14->SetBinContent(23,1675.074);
   14->SetBinContent(24,1647.311);
   14->SetBinContent(25,1628.802);
   14->SetBinContent(26,1721.347);
   14->SetBinContent(27,1582.529);
   14->SetBinContent(28,1452.966);
   14->SetBinContent(29,1406.693);
   14->SetBinContent(30,1471.475);
   14->SetBinContent(31,1351.166);
   14->SetBinContent(32,1184.585);
   14->SetBinContent(33,1304.894);
   14->SetBinContent(34,1314.148);
   14->SetBinContent(35,1267.875);
   14->SetBinContent(36,1156.821);
   14->SetBinContent(37,1341.912);
   14->SetBinContent(38,1045.767);
   14->SetBinContent(39,1036.513);
   14->SetBinContent(40,1101.294);
   14->SetBinContent(41,1110.549);
   14->SetBinContent(42,1240.112);
   14->SetBinContent(43,1295.639);
   14->SetBinContent(44,1166.076);
   14->SetBinContent(45,1064.276);
   14->SetBinContent(46,1045.767);
   14->SetBinContent(47,1156.821);
   14->SetBinContent(48,980.9852);
   14->SetBinContent(49,1064.276);
   14->SetBinContent(50,768.1299);
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
   15->SetBinContent(1,785.3091);
   15->SetBinContent(2,757.2624);
   15->SetBinContent(3,673.1221);
   15->SetBinContent(4,869.4494);
   15->SetBinContent(5,869.4494);
   15->SetBinContent(6,785.3091);
   15->SetBinContent(7,925.5429);
   15->SetBinContent(8,701.1689);
   15->SetBinContent(9,673.1221);
   15->SetBinContent(10,701.1689);
   15->SetBinContent(11,673.1221);
   15->SetBinContent(12,1065.777);
   15->SetBinContent(13,448.7481);
   15->SetBinContent(14,701.1689);
   15->SetBinContent(15,588.9819);
   15->SetBinContent(16,729.2156);
   15->SetBinContent(17,532.8884);
   15->SetBinContent(18,504.8416);
   15->SetBinContent(19,588.9819);
   15->SetBinContent(20,645.0754);
   15->SetBinContent(21,504.8416);
   15->SetBinContent(22,476.7948);
   15->SetBinContent(23,504.8416);
   15->SetBinContent(24,673.1221);
   15->SetBinContent(25,504.8416);
   15->SetBinContent(26,364.6078);
   15->SetBinContent(27,336.5611);
   15->SetBinContent(28,588.9819);
   15->SetBinContent(29,476.7948);
   15->SetBinContent(30,392.6546);
   15->SetBinContent(31,252.4208);
   15->SetBinContent(32,504.8416);
   15->SetBinContent(33,420.7013);
   15->SetBinContent(34,673.1221);
   15->SetBinContent(35,476.7948);
   15->SetBinContent(36,392.6546);
   15->SetBinContent(37,196.3273);
   15->SetBinContent(38,364.6078);
   15->SetBinContent(39,588.9819);
   15->SetBinContent(40,392.6546);
   15->SetBinContent(41,560.9351);
   15->SetBinContent(42,476.7948);
   15->SetBinContent(43,617.0286);
   15->SetBinContent(44,420.7013);
   15->SetBinContent(45,336.5611);
   15->SetBinContent(46,364.6078);
   15->SetBinContent(47,364.6078);
   15->SetBinContent(48,308.5143);
   15->SetBinContent(49,364.6078);
   15->SetBinContent(50,392.6546);
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
   16->SetBinContent(1,339.8331);
   16->SetBinContent(2,254.8748);
   16->SetBinContent(3,392.932);
   16->SetBinContent(4,318.5935);
   16->SetBinContent(5,435.4111);
   16->SetBinContent(6,276.1144);
   16->SetBinContent(7,276.1144);
   16->SetBinContent(8,223.0155);
   16->SetBinContent(9,223.0155);
   16->SetBinContent(10,297.354);
   16->SetBinContent(11,350.4529);
   16->SetBinContent(12,276.1144);
   16->SetBinContent(13,307.9738);
   16->SetBinContent(14,297.354);
   16->SetBinContent(15,180.5364);
   16->SetBinContent(16,276.1144);
   16->SetBinContent(17,233.6353);
   16->SetBinContent(18,201.7759);
   16->SetBinContent(19,201.7759);
   16->SetBinContent(20,201.7759);
   16->SetBinContent(21,403.5518);
   16->SetBinContent(22,169.9166);
   16->SetBinContent(23,265.4946);
   16->SetBinContent(24,276.1144);
   16->SetBinContent(25,191.1562);
   16->SetBinContent(26,180.5364);
   16->SetBinContent(27,276.1144);
   16->SetBinContent(28,233.6353);
   16->SetBinContent(29,307.9738);
   16->SetBinContent(30,212.3957);
   16->SetBinContent(31,201.7759);
   16->SetBinContent(32,276.1144);
   16->SetBinContent(33,212.3957);
   16->SetBinContent(34,116.8177);
   16->SetBinContent(35,297.354);
   16->SetBinContent(36,244.2551);
   16->SetBinContent(37,233.6353);
   16->SetBinContent(38,159.2968);
   16->SetBinContent(39,223.0155);
   16->SetBinContent(40,254.8748);
   16->SetBinContent(41,180.5364);
   16->SetBinContent(42,318.5935);
   16->SetBinContent(43,297.354);
   16->SetBinContent(44,286.7342);
   16->SetBinContent(45,265.4946);
   16->SetBinContent(46,265.4946);
   16->SetBinContent(47,191.1562);
   16->SetBinContent(48,297.354);
   16->SetBinContent(49,286.7342);
   16->SetBinContent(50,339.8331);
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
   17->SetBinContent(1,3223.49);
   17->SetBinContent(2,2493.643);
   17->SetBinContent(3,2797.746);
   17->SetBinContent(4,1885.437);
   17->SetBinContent(5,2432.823);
   17->SetBinContent(6,1946.258);
   17->SetBinContent(7,1946.258);
   17->SetBinContent(8,2128.72);
   17->SetBinContent(9,2311.181);
   17->SetBinContent(10,1702.976);
   17->SetBinContent(11,1277.232);
   17->SetBinContent(12,1520.514);
   17->SetBinContent(13,2128.72);
   17->SetBinContent(14,1763.796);
   17->SetBinContent(15,2067.899);
   17->SetBinContent(16,1216.411);
   17->SetBinContent(17,1277.232);
   17->SetBinContent(18,1946.258);
   17->SetBinContent(19,2128.72);
   17->SetBinContent(20,1277.232);
   17->SetBinContent(21,1155.591);
   17->SetBinContent(22,1398.873);
   17->SetBinContent(23,1520.514);
   17->SetBinContent(24,1033.95);
   17->SetBinContent(25,1277.232);
   17->SetBinContent(26,1459.693);
   17->SetBinContent(27,1094.77);
   17->SetBinContent(28,1459.693);
   17->SetBinContent(29,1338.052);
   17->SetBinContent(30,1155.591);
   17->SetBinContent(31,1338.052);
   17->SetBinContent(32,1216.411);
   17->SetBinContent(33,1824.617);
   17->SetBinContent(34,1338.052);
   17->SetBinContent(35,1642.155);
   17->SetBinContent(36,1824.617);
   17->SetBinContent(37,790.6673);
   17->SetBinContent(38,1520.514);
   17->SetBinContent(39,1398.873);
   17->SetBinContent(40,1398.873);
   17->SetBinContent(41,2007.078);
   17->SetBinContent(42,1459.693);
   17->SetBinContent(43,973.129);
   17->SetBinContent(44,1094.77);
   17->SetBinContent(45,1155.591);
   17->SetBinContent(46,1459.693);
   17->SetBinContent(47,1277.232);
   17->SetBinContent(48,1763.796);
   17->SetBinContent(49,1520.514);
   17->SetBinContent(50,1338.052);
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
