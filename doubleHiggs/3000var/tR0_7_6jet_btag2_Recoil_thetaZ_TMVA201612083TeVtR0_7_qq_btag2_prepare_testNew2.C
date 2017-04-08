{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:47:00 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.8478413,-3.256331,4.13946,5.96712);
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
   
   TH1F *THStack_stack_34 = new TH1F("THStack_stack_34","",50,0,3.142);
   THStack_stack_34->SetMinimum(0.02534488);
   THStack_stack_34->SetMaximum(169528.9);
   THStack_stack_34->SetDirectory(0);
   THStack_stack_34->SetStats(0);
   THStack_stack_34->SetLineWidth(2);
   THStack_stack_34->SetMarkerSize(1.2);
   THStack_stack_34->GetXaxis()->SetTitle("#theta_{recoil}");
   THStack_stack_34->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_34->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_34->GetXaxis()->SetLabelColor(ci);
   THStack_stack_34->GetXaxis()->SetLabelFont(42);
   THStack_stack_34->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_34->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_34->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_34->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_34->GetXaxis()->SetTitleColor(ci);
   THStack_stack_34->GetXaxis()->SetTitleFont(42);
   THStack_stack_34->GetYaxis()->SetTitle("Number of events");
   THStack_stack_34->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_34->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_34->GetYaxis()->SetLabelColor(ci);
   THStack_stack_34->GetYaxis()->SetLabelFont(42);
   THStack_stack_34->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_34->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_34->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_34->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_34->GetYaxis()->SetTitleColor(ci);
   THStack_stack_34->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_34->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_34->GetZaxis()->SetLabelColor(ci);
   THStack_stack_34->GetZaxis()->SetLabelFont(42);
   THStack_stack_34->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_34->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_34->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_34->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_34->GetZaxis()->SetTitleColor(ci);
   THStack_stack_34->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_34);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,3.142);
   0->SetBinContent(1,1.445256);
   0->SetBinContent(2,3.415144);
   0->SetBinContent(3,4.414943);
   0->SetBinContent(4,3.880392);
   0->SetBinContent(5,3.553728);
   0->SetBinContent(6,3.306256);
   0->SetBinContent(7,2.82121);
   0->SetBinContent(8,2.286669);
   0->SetBinContent(9,2.049095);
   0->SetBinContent(10,1.60364);
   0->SetBinContent(11,1.643236);
   0->SetBinContent(12,1.455155);
   0->SetBinContent(13,1.29677);
   0->SetBinContent(14,1.247275);
   0->SetBinContent(15,1.257174);
   0->SetBinContent(16,1.049295);
   0->SetBinContent(17,0.9404057);
   0->SetBinContent(18,0.8612136);
   0->SetBinContent(19,0.8612136);
   0->SetBinContent(20,0.7622234);
   0->SetBinContent(21,0.8414155);
   0->SetBinContent(22,0.9800018);
   0->SetBinContent(23,0.7919204);
   0->SetBinContent(24,0.7226273);
   0->SetBinContent(25,0.8810116);
   0->SetBinContent(26,0.7820214);
   0->SetBinContent(27,0.7424253);
   0->SetBinContent(28,0.8513145);
   0->SetBinContent(29,0.7622234);
   0->SetBinContent(30,0.7820214);
   0->SetBinContent(31,0.8909106);
   0->SetBinContent(32,1.019598);
   0->SetBinContent(33,1.029497);
   0->SetBinContent(34,0.8810116);
   0->SetBinContent(35,0.9008096);
   0->SetBinContent(36,1.19778);
   0->SetBinContent(37,1.078992);
   0->SetBinContent(38,1.286871);
   0->SetBinContent(39,1.623438);
   0->SetBinContent(40,1.851116);
   0->SetBinContent(41,1.960005);
   0->SetBinContent(42,2.247073);
   0->SetBinContent(43,2.474748);
   0->SetBinContent(44,2.850906);
   0->SetBinContent(45,2.949895);
   0->SetBinContent(46,3.642818);
   0->SetBinContent(47,4.256557);
   0->SetBinContent(48,4.266456);
   0->SetBinContent(49,3.90019);
   0->SetBinContent(50,1.474953);
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
   1->SetBinContent(1,1.024441);
   1->SetBinContent(2,2.613076);
   1->SetBinContent(3,3.335643);
   1->SetBinContent(4,2.835785);
   1->SetBinContent(5,2.835785);
   1->SetBinContent(6,2.415112);
   1->SetBinContent(7,2.113217);
   1->SetBinContent(8,1.821225);
   1->SetBinContent(9,1.370869);
   1->SetBinContent(10,1.232297);
   1->SetBinContent(11,1.163012);
   1->SetBinContent(12,1.143216);
   1->SetBinContent(13,0.9700018);
   1->SetBinContent(14,0.8165836);
   1->SetBinContent(15,0.7720429);
   1->SetBinContent(16,0.7720429);
   1->SetBinContent(17,0.7077062);
   1->SetBinContent(18,0.752247);
   1->SetBinContent(19,0.6928593);
   1->SetBinContent(20,0.6087267);
   1->SetBinContent(21,0.6235737);
   1->SetBinContent(22,0.6384206);
   1->SetBinContent(23,0.5740839);
   1->SetBinContent(24,0.6285226);
   1->SetBinContent(25,0.5443901);
   1->SetBinContent(26,0.5196452);
   1->SetBinContent(27,0.5988288);
   1->SetBinContent(28,0.5146962);
   1->SetBinContent(29,0.5889308);
   1->SetBinContent(30,0.5493391);
   1->SetBinContent(31,0.569135);
   1->SetBinContent(32,0.6334716);
   1->SetBinContent(33,0.6879103);
   1->SetBinContent(34,0.752247);
   1->SetBinContent(35,0.9452569);
   1->SetBinContent(36,0.7621449);
   1->SetBinContent(37,0.8710223);
   1->SetBinContent(38,1.083828);
   1->SetBinContent(39,0.9502059);
   1->SetBinContent(40,1.093726);
   1->SetBinContent(41,1.252093);
   1->SetBinContent(42,1.583675);
   1->SetBinContent(43,1.722246);
   1->SetBinContent(44,2.128065);
   1->SetBinContent(45,2.667516);
   1->SetBinContent(46,2.855581);
   1->SetBinContent(47,3.068392);
   1->SetBinContent(48,3.147578);
   1->SetBinContent(49,2.895174);
   1->SetBinContent(50,1.187757);
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
   2->SetBinContent(1,2.330977);
   2->SetBinContent(2,5.2064);
   2->SetBinContent(3,6.755466);
   2->SetBinContent(4,6.032899);
   2->SetBinContent(5,5.528091);
   2->SetBinContent(6,4.780778);
   2->SetBinContent(7,4.206684);
   2->SetBinContent(8,3.429676);
   2->SetBinContent(9,2.949614);
   2->SetBinContent(10,2.736803);
   2->SetBinContent(11,2.410163);
   2->SetBinContent(12,2.276537);
   2->SetBinContent(13,1.831123);
   2->SetBinContent(14,1.94495);
   2->SetBinContent(15,1.746991);
   2->SetBinContent(16,1.722246);
   2->SetBinContent(17,1.400563);
   2->SetBinContent(18,1.519338);
   2->SetBinContent(19,1.440154);
   2->SetBinContent(20,1.207553);
   2->SetBinContent(21,1.247144);
   2->SetBinContent(22,1.341175);
   2->SetBinContent(23,1.197655);
   2->SetBinContent(24,1.098675);
   2->SetBinContent(25,1.207553);
   2->SetBinContent(26,1.153114);
   2->SetBinContent(27,1.301583);
   2->SetBinContent(28,1.187757);
   2->SetBinContent(29,1.31643);
   2->SetBinContent(30,1.158063);
   2->SetBinContent(31,1.375818);
   2->SetBinContent(32,1.395614);
   2->SetBinContent(33,1.41046);
   2->SetBinContent(34,1.375818);
   2->SetBinContent(35,1.613368);
   2->SetBinContent(36,1.742042);
   2->SetBinContent(37,1.811327);
   2->SetBinContent(38,1.94495);
   2->SetBinContent(39,2.20725);
   2->SetBinContent(40,2.365621);
   2->SetBinContent(41,2.598228);
   2->SetBinContent(42,3.07829);
   2->SetBinContent(43,3.657334);
   2->SetBinContent(44,4.275971);
   2->SetBinContent(45,4.894608);
   2->SetBinContent(46,5.226197);
   2->SetBinContent(47,6.097237);
   2->SetBinContent(48,6.181372);
   2->SetBinContent(49,5.493448);
   2->SetBinContent(50,2.31613);
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
   3->SetBinContent(1,5.77381);
   3->SetBinContent(2,16.24092);
   3->SetBinContent(3,21.91357);
   3->SetBinContent(4,21.91357);
   3->SetBinContent(5,22.11617);
   3->SetBinContent(6,20.73177);
   3->SetBinContent(7,16.67987);
   3->SetBinContent(8,15.05914);
   3->SetBinContent(9,14.92408);
   3->SetBinContent(10,12.25666);
   3->SetBinContent(11,11.88525);
   3->SetBinContent(12,9.893121);
   3->SetBinContent(13,9.319118);
   3->SetBinContent(14,8.812646);
   3->SetBinContent(15,7.7997);
   3->SetBinContent(16,8.272408);
   3->SetBinContent(17,7.191933);
   3->SetBinContent(18,6.854285);
   3->SetBinContent(19,7.765935);
   3->SetBinContent(20,6.246518);
   3->SetBinContent(21,6.347812);
   3->SetBinContent(22,6.516636);
   3->SetBinContent(23,5.875104);
   3->SetBinContent(24,6.178988);
   3->SetBinContent(25,6.449107);
   3->SetBinContent(26,6.314047);
   3->SetBinContent(27,6.077693);
   3->SetBinContent(28,5.368632);
   3->SetBinContent(29,5.908869);
   3->SetBinContent(30,6.314047);
   3->SetBinContent(31,6.955579);
   3->SetBinContent(32,7.326993);
   3->SetBinContent(33,6.955579);
   3->SetBinContent(34,7.394522);
   3->SetBinContent(35,7.462052);
   3->SetBinContent(36,9.082765);
   3->SetBinContent(37,7.394522);
   3->SetBinContent(38,10.06194);
   3->SetBinContent(39,11.07489);
   3->SetBinContent(40,12.35795);
   3->SetBinContent(41,12.05407);
   3->SetBinContent(42,14.99161);
   3->SetBinContent(43,16.40975);
   3->SetBinContent(44,18.19933);
   3->SetBinContent(45,19.95515);
   3->SetBinContent(46,20.36034);
   3->SetBinContent(47,21.91357);
   3->SetBinContent(48,22.31876);
   3->SetBinContent(49,16.37598);
   3->SetBinContent(50,5.942634);
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
   4->SetBinContent(1,6.253666);
   4->SetBinContent(2,15.65598);
   4->SetBinContent(3,20.77259);
   4->SetBinContent(4,23.1997);
   4->SetBinContent(5,23.30903);
   4->SetBinContent(6,20.11661);
   4->SetBinContent(7,17.95189);
   4->SetBinContent(8,16.70554);
   4->SetBinContent(9,15.59038);
   4->SetBinContent(10,13.16327);
   4->SetBinContent(11,12.63849);
   4->SetBinContent(12,11.58893);
   4->SetBinContent(13,9.358617);
   4->SetBinContent(14,9.336751);
   4->SetBinContent(15,8.483983);
   4->SetBinContent(16,8.090398);
   4->SetBinContent(17,8.002934);
   4->SetBinContent(18,7.915471);
   4->SetBinContent(19,7.259495);
   4->SetBinContent(20,6.822178);
   4->SetBinContent(21,6.734715);
   4->SetBinContent(22,5.838215);
   4->SetBinContent(23,6.756581);
   4->SetBinContent(24,5.81635);
   4->SetBinContent(25,6.07874);
   4->SetBinContent(26,7.040837);
   4->SetBinContent(27,6.647252);
   4->SetBinContent(28,7.193898);
   4->SetBinContent(29,6.494191);
   4->SetBinContent(30,7.237629);
   4->SetBinContent(31,7.325093);
   4->SetBinContent(32,7.478154);
   4->SetBinContent(33,7.587483);
   4->SetBinContent(34,8.221593);
   4->SetBinContent(35,8.615178);
   4->SetBinContent(36,9.467946);
   4->SetBinContent(37,10.34258);
   4->SetBinContent(38,10.49564);
   4->SetBinContent(39,11.10788);
   4->SetBinContent(40,12.17931);
   4->SetBinContent(41,13.64432);
   4->SetBinContent(42,14.19097);
   4->SetBinContent(43,15.76531);
   4->SetBinContent(44,18.89213);
   4->SetBinContent(45,20.55393);
   4->SetBinContent(46,21.55976);
   4->SetBinContent(47,23.15597);
   4->SetBinContent(48,22.10641);
   4->SetBinContent(49,15.08747);
   4->SetBinContent(50,6.188069);
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
   5->SetBinContent(1,26.22733);
   5->SetBinContent(2,65.30725);
   5->SetBinContent(3,82.63632);
   5->SetBinContent(4,86.1254);
   5->SetBinContent(5,84.0901);
   5->SetBinContent(6,78.44943);
   5->SetBinContent(7,65.65616);
   5->SetBinContent(8,60.306);
   5->SetBinContent(9,57.16563);
   5->SetBinContent(10,48.44237);
   5->SetBinContent(11,47.22112);
   5->SetBinContent(12,42.74318);
   5->SetBinContent(13,37.45107);
   5->SetBinContent(14,34.01992);
   5->SetBinContent(15,31.2285);
   5->SetBinContent(16,30.12359);
   5->SetBinContent(17,28.03008);
   5->SetBinContent(18,28.84422);
   5->SetBinContent(19,26.45994);
   5->SetBinContent(20,26.80886);
   5->SetBinContent(21,22.97075);
   5->SetBinContent(22,23.72674);
   5->SetBinContent(23,24.13382);
   5->SetBinContent(24,21.28431);
   5->SetBinContent(25,22.9126);
   5->SetBinContent(26,22.44737);
   5->SetBinContent(27,23.26152);
   5->SetBinContent(28,25.35503);
   5->SetBinContent(29,25.23873);
   5->SetBinContent(30,24.36643);
   5->SetBinContent(31,24.13382);
   5->SetBinContent(32,28.08823);
   5->SetBinContent(33,27.5067);
   5->SetBinContent(34,27.623);
   5->SetBinContent(35,31.75188);
   5->SetBinContent(36,31.05404);
   5->SetBinContent(37,32.74051);
   5->SetBinContent(38,38.14893);
   5->SetBinContent(39,40.18435);
   5->SetBinContent(40,46.63956);
   5->SetBinContent(41,46.69772);
   5->SetBinContent(42,54.43234);
   5->SetBinContent(43,60.36416);
   5->SetBinContent(44,71.70389);
   5->SetBinContent(45,78.27498);
   5->SetBinContent(46,83.21783);
   5->SetBinContent(47,83.56674);
   5->SetBinContent(48,83.33414);
   5->SetBinContent(49,62.92298);
   5->SetBinContent(50,25.41319);
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
   6->SetBinContent(1,2096.2);
   6->SetBinContent(2,3940.432);
   6->SetBinContent(3,3766.795);
   6->SetBinContent(4,3034.54);
   6->SetBinContent(5,2594.309);
   6->SetBinContent(6,2128.647);
   6->SetBinContent(7,1730.466);
   6->SetBinContent(8,1494.533);
   6->SetBinContent(9,1239.304);
   6->SetBinContent(10,1144.58);
   6->SetBinContent(11,927.9422);
   6->SetBinContent(12,833.2181);
   6->SetBinContent(13,802.5204);
   6->SetBinContent(14,699.9026);
   6->SetBinContent(15,590.2682);
   6->SetBinContent(16,593.7766);
   6->SetBinContent(17,483.2651);
   6->SetBinContent(18,482.388);
   6->SetBinContent(19,468.3548);
   6->SetBinContent(20,487.6505);
   6->SetBinContent(21,480.6339);
   6->SetBinContent(22,422.7469);
   6->SetBinContent(23,401.6971);
   6->SetBinContent(24,388.541);
   6->SetBinContent(25,391.1722);
   6->SetBinContent(26,425.3781);
   6->SetBinContent(27,432.3947);
   6->SetBinContent(28,442.9196);
   6->SetBinContent(29,449.9362);
   6->SetBinContent(30,438.5342);
   6->SetBinContent(31,456.0757);
   6->SetBinContent(32,499.0524);
   6->SetBinContent(33,492.9129);
   6->SetBinContent(34,533.2584);
   6->SetBinContent(35,592.8995);
   6->SetBinContent(36,634.9991);
   6->SetBinContent(37,656.0489);
   6->SetBinContent(38,727.092);
   6->SetBinContent(39,817.4307);
   6->SetBinContent(40,923.5568);
   6->SetBinContent(41,1066.52);
   6->SetBinContent(42,1275.264);
   6->SetBinContent(43,1504.181);
   6->SetBinContent(44,1704.154);
   6->SetBinContent(45,2048.844);
   6->SetBinContent(46,2464.52);
   6->SetBinContent(47,3190.637);
   6->SetBinContent(48,3722.071);
   6->SetBinContent(49,3949.202);
   6->SetBinContent(50,2050.598);
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
   7->SetBinContent(1,149.8559);
   7->SetBinContent(2,357.5922);
   7->SetBinContent(3,439.0845);
   7->SetBinContent(4,476.792);
   7->SetBinContent(5,468.5046);
   7->SetBinContent(6,429.8303);
   7->SetBinContent(7,388.946);
   7->SetBinContent(8,352.3436);
   7->SetBinContent(9,327.6196);
   7->SetBinContent(10,298.752);
   7->SetBinContent(11,262.9783);
   7->SetBinContent(12,237.2875);
   7->SetBinContent(13,241.1549);
   7->SetBinContent(14,207.1768);
   7->SetBinContent(15,192.1214);
   7->SetBinContent(16,188.6684);
   7->SetBinContent(17,174.4417);
   7->SetBinContent(18,162.9776);
   7->SetBinContent(19,161.8726);
   7->SetBinContent(20,159.5245);
   7->SetBinContent(21,155.7952);
   7->SetBinContent(22,149.4415);
   7->SetBinContent(23,150.2703);
   7->SetBinContent(24,147.7841);
   7->SetBinContent(25,132.0381);
   7->SetBinContent(26,144.7454);
   7->SetBinContent(27,144.8835);
   7->SetBinContent(28,133.9718);
   7->SetBinContent(29,144.8835);
   7->SetBinContent(30,156.6239);
   7->SetBinContent(31,155.3808);
   7->SetBinContent(32,160.6295);
   7->SetBinContent(33,173.3367);
   7->SetBinContent(34,178.5854);
   7->SetBinContent(35,186.7346);
   7->SetBinContent(36,202.3425);
   7->SetBinContent(37,212.1492);
   7->SetBinContent(38,230.2432);
   7->SetBinContent(39,249.4423);
   7->SetBinContent(40,270.7131);
   7->SetBinContent(41,288.6691);
   7->SetBinContent(42,336.0451);
   7->SetBinContent(43,352.6198);
   7->SetBinContent(44,383.5593);
   7->SetBinContent(45,423.3386);
   7->SetBinContent(46,460.2173);
   7->SetBinContent(47,486.3224);
   7->SetBinContent(48,448.7531);
   7->SetBinContent(49,362.2884);
   7->SetBinContent(50,144.0548);
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
   8->SetBinContent(1,325.2057);
   8->SetBinContent(2,247.5992);
   8->SetBinContent(3,137.6582);
   8->SetBinContent(4,78.52987);
   8->SetBinContent(5,36.03132);
   8->SetBinContent(6,44.34625);
   8->SetBinContent(7,22.17311);
   8->SetBinContent(8,20.32536);
   8->SetBinContent(9,17.55372);
   8->SetBinContent(10,14.78208);
   8->SetBinContent(11,11.08656);
   8->SetBinContent(12,15.70596);
   8->SetBinContent(13,5.54328);
   8->SetBinContent(14,7.39104);
   8->SetBinContent(15,1.84776);
   8->SetBinContent(16,7.39104);
   8->SetBinContent(17,9.2388);
   8->SetBinContent(18,8.31492);
   8->SetBinContent(19,6.46716);
   8->SetBinContent(20,9.2388);
   8->SetBinContent(21,4.6194);
   8->SetBinContent(22,3.69552);
   8->SetBinContent(23,3.69552);
   8->SetBinContent(24,3.69552);
   8->SetBinContent(25,1.84776);
   8->SetBinContent(26,4.6194);
   8->SetBinContent(27,2.77164);
   8->SetBinContent(28,1.84776);
   8->SetBinContent(29,6.46716);
   8->SetBinContent(30,7.39104);
   8->SetBinContent(31,8.31492);
   8->SetBinContent(32,4.6194);
   8->SetBinContent(33,2.77164);
   8->SetBinContent(34,5.54328);
   8->SetBinContent(35,5.54328);
   8->SetBinContent(36,8.31492);
   8->SetBinContent(37,11.08656);
   8->SetBinContent(38,5.54328);
   8->SetBinContent(39,11.08656);
   8->SetBinContent(40,14.78208);
   8->SetBinContent(41,9.2388);
   8->SetBinContent(42,12.93432);
   8->SetBinContent(43,22.17311);
   8->SetBinContent(44,23.09699);
   8->SetBinContent(45,31.41191);
   8->SetBinContent(46,48.04178);
   8->SetBinContent(47,79.45375);
   8->SetBinContent(48,128.4195);
   8->SetBinContent(49,250.3708);
   8->SetBinContent(50,310.4235);
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
   9->SetBinContent(1,738.9187);
   9->SetBinContent(2,1106.843);
   9->SetBinContent(3,876.9453);
   9->SetBinContent(4,719.5774);
   9->SetBinContent(5,587.7048);
   9->SetBinContent(6,451.4365);
   9->SetBinContent(7,356.0487);
   9->SetBinContent(8,321.7618);
   9->SetBinContent(9,262.4192);
   9->SetBinContent(10,229.452);
   9->SetBinContent(11,210.1113);
   9->SetBinContent(12,198.2432);
   9->SetBinContent(13,188.5729);
   9->SetBinContent(14,159.5619);
   9->SetBinContent(15,153.8477);
   9->SetBinContent(16,140.6609);
   9->SetBinContent(17,151.6499);
   9->SetBinContent(18,130.9905);
   9->SetBinContent(19,131.4301);
   9->SetBinContent(20,135.3861);
   9->SetBinContent(21,105.9352);
   9->SetBinContent(22,111.6496);
   9->SetBinContent(23,125.7158);
   9->SetBinContent(24,119.1223);
   9->SetBinContent(25,115.6057);
   9->SetBinContent(26,109.4518);
   9->SetBinContent(27,112.5287);
   9->SetBinContent(28,109.4518);
   9->SetBinContent(29,109.8913);
   9->SetBinContent(30,115.6057);
   9->SetBinContent(31,119.1223);
   9->SetBinContent(32,134.9466);
   9->SetBinContent(33,128.3532);
   9->SetBinContent(34,144.6169);
   9->SetBinContent(35,144.6169);
   9->SetBinContent(36,152.0894);
   9->SetBinContent(37,163.518);
   9->SetBinContent(38,177.1443);
   9->SetBinContent(39,184.1773);
   9->SetBinContent(40,221.9794);
   9->SetBinContent(41,218.463);
   9->SetBinContent(42,256.2651);
   9->SetBinContent(43,306.3767);
   9->SetBinContent(44,378.0275);
   9->SetBinContent(45,450.5574);
   9->SetBinContent(46,554.7367);
   9->SetBinContent(47,698.4778);
   9->SetBinContent(48,863.7581);
   9->SetBinContent(49,1057.171);
   9->SetBinContent(50,727.0502);
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
   10->SetBinContent(1,2465.823);
   10->SetBinContent(2,5681.748);
   10->SetBinContent(3,6696.811);
   10->SetBinContent(4,6536.752);
   10->SetBinContent(5,6037.078);
   10->SetBinContent(6,5349.408);
   10->SetBinContent(7,4657.664);
   10->SetBinContent(8,4016.781);
   10->SetBinContent(9,3568.532);
   10->SetBinContent(10,3104.847);
   10->SetBinContent(11,2846.5);
   10->SetBinContent(12,2577.958);
   10->SetBinContent(13,2325.145);
   10->SetBinContent(14,2244.757);
   10->SetBinContent(15,2030.397);
   10->SetBinContent(16,1897.638);
   10->SetBinContent(17,1825.145);
   10->SetBinContent(18,1651.918);
   10->SetBinContent(19,1607.374);
   10->SetBinContent(20,1545.653);
   10->SetBinContent(21,1490.046);
   10->SetBinContent(22,1467.628);
   10->SetBinContent(23,1425.995);
   10->SetBinContent(24,1447.248);
   10->SetBinContent(25,1390.476);
   10->SetBinContent(26,1384.945);
   10->SetBinContent(27,1389.603);
   10->SetBinContent(28,1472.577);
   10->SetBinContent(29,1452.489);
   10->SetBinContent(30,1506.349);
   10->SetBinContent(31,1576.513);
   10->SetBinContent(32,1609.412);
   10->SetBinContent(33,1701.994);
   10->SetBinContent(34,1767.791);
   10->SetBinContent(35,1865.031);
   10->SetBinContent(36,2020.207);
   10->SetBinContent(37,2216.213);
   10->SetBinContent(38,2342.62);
   10->SetBinContent(39,2565.434);
   10->SetBinContent(40,2826.403);
   10->SetBinContent(41,3187.273);
   10->SetBinContent(42,3560.377);
   10->SetBinContent(43,4067.46);
   10->SetBinContent(44,4670.76);
   10->SetBinContent(45,5311.576);
   10->SetBinContent(46,6081.312);
   10->SetBinContent(47,6629.586);
   10->SetBinContent(48,6701.758);
   10->SetBinContent(49,5554.283);
   10->SetBinContent(50,2394.464);
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
   11->SetBinContent(1,4669.686);
   11->SetBinContent(2,3601.455);
   11->SetBinContent(3,2197.501);
   11->SetBinContent(4,1434.479);
   11->SetBinContent(5,763.0207);
   11->SetBinContent(6,457.8125);
   11->SetBinContent(7,396.7708);
   11->SetBinContent(8,244.1666);
   11->SetBinContent(9,335.7292);
   11->SetBinContent(10,305.2083);
   11->SetBinContent(11,305.2083);
   11->SetBinContent(12,213.6458);
   11->SetBinContent(13,122.0833);
   11->SetBinContent(14,213.6458);
   11->SetBinContent(15,91.5625);
   11->SetBinContent(16,91.5625);
   11->SetBinContent(17,152.6042);
   11->SetBinContent(18,152.6042);
   11->SetBinContent(19,30.52083);
   11->SetBinContent(20,122.0833);
   11->SetBinContent(21,61.04166);
   11->SetBinContent(23,91.5625);
   11->SetBinContent(24,122.0833);
   11->SetBinContent(26,91.5625);
   11->SetBinContent(27,152.6042);
   11->SetBinContent(28,30.52083);
   11->SetBinContent(29,213.6458);
   11->SetBinContent(30,30.52083);
   11->SetBinContent(31,122.0833);
   11->SetBinContent(32,91.5625);
   11->SetBinContent(33,91.5625);
   11->SetBinContent(34,30.52083);
   11->SetBinContent(35,122.0833);
   11->SetBinContent(36,91.5625);
   11->SetBinContent(37,30.52083);
   11->SetBinContent(38,122.0833);
   11->SetBinContent(39,366.25);
   11->SetBinContent(40,305.2083);
   11->SetBinContent(41,183.125);
   11->SetBinContent(42,457.8125);
   11->SetBinContent(43,335.7292);
   11->SetBinContent(44,518.8542);
   11->SetBinContent(45,701.9791);
   11->SetBinContent(46,701.9791);
   11->SetBinContent(47,1159.792);
   11->SetBinContent(48,2289.063);
   11->SetBinContent(49,2655.312);
   11->SetBinContent(50,5066.459);
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
   12->SetBinContent(1,2384.867);
   12->SetBinContent(2,1530.69);
   12->SetBinContent(3,835.5101);
   12->SetBinContent(4,578.4868);
   12->SetBinContent(5,435.2983);
   12->SetBinContent(6,323.6113);
   12->SetBinContent(7,211.9234);
   12->SetBinContent(8,180.4212);
   12->SetBinContent(9,153.2148);
   12->SetBinContent(10,132.4521);
   12->SetBinContent(11,105.9616);
   12->SetBinContent(12,93.07441);
   12->SetBinContent(13,82.33504);
   12->SetBinContent(14,83.76696);
   12->SetBinContent(15,83.76696);
   12->SetBinContent(16,67.29993);
   12->SetBinContent(17,73.0276);
   12->SetBinContent(18,74.45951);
   12->SetBinContent(19,51.54887);
   12->SetBinContent(20,50.83291);
   12->SetBinContent(21,56.56057);
   12->SetBinContent(22,49.40099);
   12->SetBinContent(23,39.37759);
   12->SetBinContent(24,60.85632);
   12->SetBinContent(25,68.73185);
   12->SetBinContent(26,41.52546);
   12->SetBinContent(27,47.96908);
   12->SetBinContent(28,51.54887);
   12->SetBinContent(29,47.25312);
   12->SetBinContent(30,44.38929);
   12->SetBinContent(31,49.40099);
   12->SetBinContent(32,51.54887);
   12->SetBinContent(33,60.85632);
   12->SetBinContent(34,68.73185);
   12->SetBinContent(35,72.31164);
   12->SetBinContent(36,65.15206);
   12->SetBinContent(37,83.051);
   12->SetBinContent(38,99.51803);
   12->SetBinContent(39,104.5297);
   12->SetBinContent(40,100.9499);
   12->SetBinContent(41,130.3042);
   12->SetBinContent(42,178.2734);
   12->SetBinContent(43,195.4563);
   12->SetBinContent(44,240.5617);
   12->SetBinContent(45,306.4287);
   12->SetBinContent(46,417.3998);
   12->SetBinContent(47,560.5883);
   12->SetBinContent(48,846.9652);
   12->SetBinContent(49,1546.441);
   12->SetBinContent(50,2361.953);
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
   13->SetBinContent(1,36043.87);
   13->SetBinContent(2,46082.13);
   13->SetBinContent(3,28034.07);
   13->SetBinContent(4,17423.68);
   13->SetBinContent(5,12794.7);
   13->SetBinContent(6,7749.655);
   13->SetBinContent(7,5721.217);
   13->SetBinContent(8,4733.004);
   13->SetBinContent(9,4056.858);
   13->SetBinContent(10,3068.649);
   13->SetBinContent(11,1716.364);
   13->SetBinContent(12,1872.396);
   13->SetBinContent(13,2080.44);
   13->SetBinContent(14,1612.342);
   13->SetBinContent(15,1872.396);
   13->SetBinContent(16,988.2097);
   13->SetBinContent(17,1456.309);
   13->SetBinContent(18,1456.309);
   13->SetBinContent(19,1248.265);
   13->SetBinContent(20,1664.353);
   13->SetBinContent(21,1092.232);
   13->SetBinContent(22,884.1876);
   13->SetBinContent(23,1456.309);
   13->SetBinContent(24,1248.265);
   13->SetBinContent(25,1300.276);
   13->SetBinContent(26,1352.287);
   13->SetBinContent(27,936.1986);
   13->SetBinContent(28,1144.243);
   13->SetBinContent(29,1248.265);
   13->SetBinContent(30,780.1655);
   13->SetBinContent(31,1456.309);
   13->SetBinContent(32,1300.276);
   13->SetBinContent(33,1768.375);
   13->SetBinContent(34,1092.232);
   13->SetBinContent(35,1716.364);
   13->SetBinContent(36,1508.32);
   13->SetBinContent(37,1820.385);
   13->SetBinContent(38,1612.342);
   13->SetBinContent(39,2496.528);
   13->SetBinContent(40,3744.792);
   13->SetBinContent(41,2756.583);
   13->SetBinContent(42,4837.026);
   13->SetBinContent(43,4680.993);
   13->SetBinContent(44,5565.184);
   13->SetBinContent(45,8165.745);
   13->SetBinContent(46,11338.4);
   13->SetBinContent(47,17943.79);
   13->SetBinContent(48,25433.48);
   13->SetBinContent(49,46654.26);
   13->SetBinContent(50,38592.45);
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
   14->SetBinContent(1,518.2563);
   14->SetBinContent(2,1656.565);
   14->SetBinContent(3,2591.279);
   14->SetBinContent(4,3285.376);
   14->SetBinContent(5,2998.483);
   14->SetBinContent(6,2961.464);
   14->SetBinContent(7,2369.167);
   14->SetBinContent(8,2100.783);
   14->SetBinContent(9,2100.783);
   14->SetBinContent(10,1878.674);
   14->SetBinContent(11,1971.219);
   14->SetBinContent(12,1712.092);
   14->SetBinContent(13,1554.766);
   14->SetBinContent(14,1369.675);
   14->SetBinContent(15,1360.421);
   14->SetBinContent(16,1138.312);
   14->SetBinContent(17,1110.549);
   14->SetBinContent(18,1203.094);
   14->SetBinContent(19,1036.513);
   14->SetBinContent(20,1027.258);
   14->SetBinContent(21,1045.767);
   14->SetBinContent(22,1008.749);
   14->SetBinContent(23,1036.513);
   14->SetBinContent(24,842.1665);
   14->SetBinContent(25,906.9485);
   14->SetBinContent(26,916.2031);
   14->SetBinContent(27,1092.04);
   14->SetBinContent(28,990.2397);
   14->SetBinContent(29,1193.839);
   14->SetBinContent(30,1147.567);
   14->SetBinContent(31,1230.857);
   14->SetBinContent(32,1036.513);
   14->SetBinContent(33,1221.603);
   14->SetBinContent(34,1258.621);
   14->SetBinContent(35,1341.912);
   14->SetBinContent(36,1462.22);
   14->SetBinContent(37,1517.747);
   14->SetBinContent(38,1776.874);
   14->SetBinContent(39,1536.256);
   14->SetBinContent(40,1860.165);
   14->SetBinContent(41,1813.892);
   14->SetBinContent(42,2054.51);
   14->SetBinContent(43,2211.838);
   14->SetBinContent(44,2433.95);
   14->SetBinContent(45,2730.098);
   14->SetBinContent(46,2970.719);
   14->SetBinContent(47,3174.321);
   14->SetBinContent(48,2952.209);
   14->SetBinContent(49,1647.311);
   14->SetBinContent(50,638.5658);
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
   15->SetBinContent(1,1766.946);
   15->SetBinContent(2,2972.96);
   15->SetBinContent(3,2271.788);
   15->SetBinContent(4,1318.198);
   15->SetBinContent(5,1009.683);
   15->SetBinContent(6,645.0754);
   15->SetBinContent(7,701.1689);
   15->SetBinContent(8,420.7013);
   15->SetBinContent(9,196.3273);
   15->SetBinContent(10,252.4208);
   15->SetBinContent(11,392.6546);
   15->SetBinContent(12,448.7481);
   15->SetBinContent(13,252.4208);
   15->SetBinContent(14,252.4208);
   15->SetBinContent(15,112.187);
   15->SetBinContent(16,112.187);
   15->SetBinContent(17,56.09351);
   15->SetBinContent(18,224.374);
   15->SetBinContent(19,84.14027);
   15->SetBinContent(20,84.14027);
   15->SetBinContent(21,140.2338);
   15->SetBinContent(22,84.14027);
   15->SetBinContent(23,28.04676);
   15->SetBinContent(24,168.2805);
   15->SetBinContent(25,112.187);
   15->SetBinContent(26,224.374);
   15->SetBinContent(27,56.09351);
   15->SetBinContent(28,56.09351);
   15->SetBinContent(29,112.187);
   15->SetBinContent(30,140.2338);
   15->SetBinContent(31,56.09351);
   15->SetBinContent(32,140.2338);
   15->SetBinContent(33,56.09351);
   15->SetBinContent(34,28.04676);
   15->SetBinContent(35,56.09351);
   15->SetBinContent(36,56.09351);
   15->SetBinContent(37,168.2805);
   15->SetBinContent(38,280.4676);
   15->SetBinContent(39,280.4676);
   15->SetBinContent(40,336.5611);
   15->SetBinContent(41,392.6546);
   15->SetBinContent(42,364.6078);
   15->SetBinContent(43,420.7013);
   15->SetBinContent(44,617.0286);
   15->SetBinContent(45,476.7948);
   15->SetBinContent(46,981.6364);
   15->SetBinContent(47,1430.385);
   15->SetBinContent(48,1794.992);
   15->SetBinContent(49,3113.194);
   15->SetBinContent(50,1766.946);
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
   16->SetBinContent(1,509.7496);
   16->SetBinContent(2,647.8071);
   16->SetBinContent(3,775.2449);
   16->SetBinContent(4,711.526);
   16->SetBinContent(5,435.4111);
   16->SetBinContent(6,488.51);
   16->SetBinContent(7,414.1716);
   16->SetBinContent(8,371.6924);
   16->SetBinContent(9,254.8748);
   16->SetBinContent(10,201.7759);
   16->SetBinContent(11,191.1562);
   16->SetBinContent(12,53.09894);
   16->SetBinContent(13,159.2968);
   16->SetBinContent(14,169.9166);
   16->SetBinContent(15,127.4375);
   16->SetBinContent(16,84.95831);
   16->SetBinContent(17,116.8177);
   16->SetBinContent(18,53.09894);
   16->SetBinContent(19,95.57809);
   16->SetBinContent(20,95.57809);
   16->SetBinContent(21,74.33852);
   16->SetBinContent(22,74.33852);
   16->SetBinContent(23,84.95831);
   16->SetBinContent(24,95.57809);
   16->SetBinContent(25,74.33852);
   16->SetBinContent(26,84.95831);
   16->SetBinContent(27,159.2968);
   16->SetBinContent(28,63.71873);
   16->SetBinContent(29,84.95831);
   16->SetBinContent(30,95.57809);
   16->SetBinContent(31,127.4375);
   16->SetBinContent(32,127.4375);
   16->SetBinContent(33,116.8177);
   16->SetBinContent(34,159.2968);
   16->SetBinContent(35,116.8177);
   16->SetBinContent(36,148.677);
   16->SetBinContent(37,116.8177);
   16->SetBinContent(38,116.8177);
   16->SetBinContent(39,127.4375);
   16->SetBinContent(40,223.0155);
   16->SetBinContent(41,297.354);
   16->SetBinContent(42,297.354);
   16->SetBinContent(43,318.5935);
   16->SetBinContent(44,329.2133);
   16->SetBinContent(45,414.1716);
   16->SetBinContent(46,488.51);
   16->SetBinContent(47,838.9637);
   16->SetBinContent(48,669.0468);
   16->SetBinContent(49,775.2449);
   16->SetBinContent(50,371.6924);
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
   17->SetBinContent(1,7602.584);
   17->SetBinContent(2,9731.3);
   17->SetBinContent(3,6507.81);
   17->SetBinContent(4,4318.261);
   17->SetBinContent(5,2189.54);
   17->SetBinContent(6,1398.873);
   17->SetBinContent(7,1338.052);
   17->SetBinContent(8,973.129);
   17->SetBinContent(9,1033.95);
   17->SetBinContent(10,364.9234);
   17->SetBinContent(11,669.0262);
   17->SetBinContent(12,425.7439);
   17->SetBinContent(13,851.4879);
   17->SetBinContent(14,304.1028);
   17->SetBinContent(15,243.2822);
   17->SetBinContent(16,364.9234);
   17->SetBinContent(17,304.1028);
   17->SetBinContent(18,243.2822);
   17->SetBinContent(19,121.6411);
   17->SetBinContent(20,121.6411);
   17->SetBinContent(21,182.4617);
   17->SetBinContent(22,304.1028);
   17->SetBinContent(23,60.82056);
   17->SetBinContent(24,182.4617);
   17->SetBinContent(25,547.3851);
   17->SetBinContent(26,121.6411);
   17->SetBinContent(27,304.1028);
   17->SetBinContent(28,182.4617);
   17->SetBinContent(29,182.4617);
   17->SetBinContent(30,60.82056);
   17->SetBinContent(31,243.2822);
   17->SetBinContent(32,60.82056);
   17->SetBinContent(33,364.9234);
   17->SetBinContent(34,425.7439);
   17->SetBinContent(35,243.2822);
   17->SetBinContent(36,182.4617);
   17->SetBinContent(37,851.4879);
   17->SetBinContent(38,425.7439);
   17->SetBinContent(39,425.7439);
   17->SetBinContent(40,182.4617);
   17->SetBinContent(41,486.5645);
   17->SetBinContent(42,1155.591);
   17->SetBinContent(43,1216.411);
   17->SetBinContent(44,1338.052);
   17->SetBinContent(45,1581.335);
   17->SetBinContent(46,2311.181);
   17->SetBinContent(47,3345.131);
   17->SetBinContent(48,6264.526);
   17->SetBinContent(49,10157.04);
   17->SetBinContent(50,8210.792);
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
