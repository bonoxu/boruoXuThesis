{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:44:00 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.239594,1.31746,5.906839);
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
   
   TH1F *THStack_stack_19 = new TH1F("THStack_stack_19","",50,0,1);
   THStack_stack_19->SetMinimum(0.02551313);
   THStack_stack_19->SetMaximum(149666.6);
   THStack_stack_19->SetDirectory(0);
   THStack_stack_19->SetStats(0);
   THStack_stack_19->SetLineWidth(2);
   THStack_stack_19->SetMarkerSize(1.2);
   THStack_stack_19->GetXaxis()->SetTitle("Highest C tag of W jets");
   THStack_stack_19->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_19->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_19->GetXaxis()->SetLabelColor(ci);
   THStack_stack_19->GetXaxis()->SetLabelFont(42);
   THStack_stack_19->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_19->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_19->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_19->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_19->GetXaxis()->SetTitleColor(ci);
   THStack_stack_19->GetXaxis()->SetTitleFont(42);
   THStack_stack_19->GetYaxis()->SetTitle("Number of events");
   THStack_stack_19->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_19->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_19->GetYaxis()->SetLabelColor(ci);
   THStack_stack_19->GetYaxis()->SetLabelFont(42);
   THStack_stack_19->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_19->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_19->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_19->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_19->GetYaxis()->SetTitleColor(ci);
   THStack_stack_19->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_19->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_19->GetZaxis()->SetLabelColor(ci);
   THStack_stack_19->GetZaxis()->SetLabelFont(42);
   THStack_stack_19->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_19->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_19->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_19->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_19->GetZaxis()->SetTitleColor(ci);
   THStack_stack_19->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_19);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,0.3860609);
   0->SetBinContent(2,0.08909099);
   0->SetBinContent(3,0.05939399);
   0->SetBinContent(4,0.019798);
   0->SetBinContent(5,0.09898999);
   0->SetBinContent(6,0.148485);
   0->SetBinContent(7,0.29697);
   0->SetBinContent(8,0.8810116);
   0->SetBinContent(9,1.70263);
   0->SetBinContent(10,2.425254);
   0->SetBinContent(11,2.9103);
   0->SetBinContent(12,3.434942);
   0->SetBinContent(13,4.207061);
   0->SetBinContent(14,6.068099);
   0->SetBinContent(15,7.166903);
   0->SetBinContent(16,6.899627);
   0->SetBinContent(17,6.097796);
   0->SetBinContent(18,6.018603);
   0->SetBinContent(19,5.147479);
   0->SetBinContent(20,3.583425);
   0->SetBinContent(21,2.573737);
   0->SetBinContent(22,2.049095);
   0->SetBinContent(23,1.821419);
   0->SetBinContent(24,1.623438);
   0->SetBinContent(25,1.375963);
   0->SetBinContent(26,1.326468);
   0->SetBinContent(27,1.227477);
   0->SetBinContent(28,1.286871);
   0->SetBinContent(29,1.118588);
   0->SetBinContent(30,1.069093);
   0->SetBinContent(31,1.108689);
   0->SetBinContent(32,0.9800018);
   0->SetBinContent(33,1.118588);
   0->SetBinContent(34,1.059194);
   0->SetBinContent(35,0.8810116);
   0->SetBinContent(36,0.9107087);
   0->SetBinContent(37,0.9503047);
   0->SetBinContent(38,0.8711126);
   0->SetBinContent(39,0.6335361);
   0->SetBinContent(40,0.9008096);
   0->SetBinContent(41,0.7028292);
   0->SetBinContent(42,0.8513145);
   0->SetBinContent(43,0.8612136);
   0->SetBinContent(44,0.7523243);
   0->SetBinContent(45,0.9899008);
   0->SetBinContent(46,0.9206077);
   0->SetBinContent(47,0.8909106);
   0->SetBinContent(48,0.8414155);
   0->SetBinContent(49,0.6632332);
   0->SetBinContent(50,0.06929299);
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
   1->SetBinContent(1,2.029083);
   1->SetBinContent(2,0.5839819);
   1->SetBinContent(3,0.4553083);
   1->SetBinContent(4,0.2969401);
   1->SetBinContent(5,0.2721951);
   1->SetBinContent(6,0.3365322);
   1->SetBinContent(7,0.5344921);
   1->SetBinContent(8,0.8314306);
   1->SetBinContent(9,1.207553);
   1->SetBinContent(10,1.430256);
   1->SetBinContent(11,1.588624);
   1->SetBinContent(12,1.791531);
   1->SetBinContent(13,2.20725);
   1->SetBinContent(14,2.845683);
   1->SetBinContent(15,3.439574);
   1->SetBinContent(16,3.434625);
   1->SetBinContent(17,3.701876);
   1->SetBinContent(18,3.350491);
   1->SetBinContent(19,3.543505);
   1->SetBinContent(20,2.345825);
   1->SetBinContent(21,2.058777);
   1->SetBinContent(22,1.920205);
   1->SetBinContent(23,1.65296);
   1->SetBinContent(24,1.65296);
   1->SetBinContent(25,1.539134);
   1->SetBinContent(26,1.415409);
   1->SetBinContent(27,1.41046);
   1->SetBinContent(28,1.504491);
   1->SetBinContent(29,1.380767);
   1->SetBinContent(30,1.227348);
   1->SetBinContent(31,1.202604);
   1->SetBinContent(32,1.177859);
   1->SetBinContent(33,1.163012);
   1->SetBinContent(34,1.133318);
   1->SetBinContent(35,0.9798998);
   1->SetBinContent(36,0.8858693);
   1->SetBinContent(37,0.9551549);
   1->SetBinContent(38,0.8611244);
   1->SetBinContent(39,0.7374001);
   1->SetBinContent(40,0.9007162);
   1->SetBinContent(41,0.8017367);
   1->SetBinContent(42,0.7819408);
   1->SetBinContent(43,0.6087267);
   1->SetBinContent(44,0.7027572);
   1->SetBinContent(45,0.4701553);
   1->SetBinContent(46,0.4602573);
   1->SetBinContent(47,0.4058182);
   1->SetBinContent(48,0.2870421);
   1->SetBinContent(49,0.123725);
   1->SetBinContent(50,0.004949);
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
   2->SetBinContent(1,2.15281);
   2->SetBinContent(2,0.3563282);
   2->SetBinContent(3,0.3761242);
   2->SetBinContent(4,0.2523991);
   2->SetBinContent(5,0.2425011);
   2->SetBinContent(6,0.3167362);
   2->SetBinContent(7,0.742349);
   2->SetBinContent(8,1.400563);
   2->SetBinContent(9,2.47945);
   2->SetBinContent(10,3.538556);
   2->SetBinContent(11,4.756033);
   2->SetBinContent(12,4.968844);
   2->SetBinContent(13,6.092288);
   2->SetBinContent(14,9.106179);
   2->SetBinContent(15,10.11075);
   2->SetBinContent(16,10.06126);
   2->SetBinContent(17,9.893009);
   2->SetBinContent(18,9.012156);
   2->SetBinContent(19,8.769673);
   2->SetBinContent(20,5.721106);
   2->SetBinContent(21,3.964178);
   2->SetBinContent(22,3.741469);
   2->SetBinContent(23,2.687312);
   2->SetBinContent(24,2.236945);
   2->SetBinContent(25,1.781633);
   2->SetBinContent(26,1.781633);
   2->SetBinContent(27,1.860817);
   2->SetBinContent(28,1.766787);
   2->SetBinContent(29,1.539134);
   2->SetBinContent(30,1.712348);
   2->SetBinContent(31,1.504491);
   2->SetBinContent(32,1.435205);
   2->SetBinContent(33,1.390665);
   2->SetBinContent(34,1.261991);
   2->SetBinContent(35,1.133318);
   2->SetBinContent(36,1.113522);
   2->SetBinContent(37,1.034338);
   2->SetBinContent(38,1.078879);
   2->SetBinContent(39,1.044236);
   2->SetBinContent(40,1.034338);
   2->SetBinContent(41,1.039287);
   2->SetBinContent(42,1.049185);
   2->SetBinContent(43,0.9155631);
   2->SetBinContent(44,1.098675);
   2->SetBinContent(45,1.068981);
   2->SetBinContent(46,1.148165);
   2->SetBinContent(47,1.098675);
   2->SetBinContent(48,1.049185);
   2->SetBinContent(49,0.7275021);
   2->SetBinContent(50,0.07918401);
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
   3->SetBinContent(1,10.70348);
   3->SetBinContent(2,2.903791);
   3->SetBinContent(3,1.519425);
   3->SetBinContent(4,1.924604);
   3->SetBinContent(5,1.316835);
   3->SetBinContent(6,2.43108);
   3->SetBinContent(7,3.950508);
   3->SetBinContent(8,7.93476);
   3->SetBinContent(9,11.78395);
   3->SetBinContent(10,16.24092);
   3->SetBinContent(11,19.82009);
   3->SetBinContent(12,20.56294);
   3->SetBinContent(13,24.88496);
   3->SetBinContent(14,30.99657);
   3->SetBinContent(15,34.06914);
   3->SetBinContent(16,33.90032);
   3->SetBinContent(17,33.83279);
   3->SetBinContent(18,30.52385);
   3->SetBinContent(19,30.28749);
   3->SetBinContent(20,20.73177);
   3->SetBinContent(21,16.03832);
   3->SetBinContent(22,15.46432);
   3->SetBinContent(23,12.08784);
   3->SetBinContent(24,10.70348);
   3->SetBinContent(25,8.947705);
   3->SetBinContent(26,10.23077);
   3->SetBinContent(27,9.893121);
   3->SetBinContent(28,8.643822);
   3->SetBinContent(29,9.251589);
   3->SetBinContent(30,8.677587);
   3->SetBinContent(31,8.407468);
   3->SetBinContent(32,7.833465);
   3->SetBinContent(33,8.00229);
   3->SetBinContent(34,7.833465);
   3->SetBinContent(35,6.75299);
   3->SetBinContent(36,6.989344);
   3->SetBinContent(37,7.056874);
   3->SetBinContent(38,6.651696);
   3->SetBinContent(39,7.124403);
   3->SetBinContent(40,5.469926);
   3->SetBinContent(41,5.503691);
   3->SetBinContent(42,5.233572);
   3->SetBinContent(43,5.098513);
   3->SetBinContent(44,6.246518);
   3->SetBinContent(45,5.233572);
   3->SetBinContent(46,5.604986);
   3->SetBinContent(47,5.098513);
   3->SetBinContent(48,4.051803);
   3->SetBinContent(49,2.734966);
   3->SetBinContent(50,0.4051799);
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
   4->SetBinContent(1,13.77552);
   4->SetBinContent(2,2.755118);
   4->SetBinContent(3,1.880475);
   4->SetBinContent(4,1.749279);
   4->SetBinContent(5,1.552485);
   4->SetBinContent(6,1.946073);
   4->SetBinContent(7,2.733252);
   4->SetBinContent(8,4.810521);
   4->SetBinContent(9,7.368824);
   4->SetBinContent(10,10.08019);
   4->SetBinContent(11,12.13558);
   4->SetBinContent(12,12.72596);
   4->SetBinContent(13,16.9242);
   4->SetBinContent(14,21.49416);
   4->SetBinContent(15,26.7201);
   4->SetBinContent(16,27.31048);
   4->SetBinContent(17,27.28861);
   4->SetBinContent(18,27.22301);
   4->SetBinContent(19,29.43146);
   4->SetBinContent(20,19.91982);
   4->SetBinContent(21,14.91254);
   4->SetBinContent(22,14.91254);
   4->SetBinContent(23,12.35424);
   4->SetBinContent(24,10.62684);
   4->SetBinContent(25,10.34258);
   4->SetBinContent(26,9.577275);
   4->SetBinContent(27,9.642873);
   4->SetBinContent(28,9.052495);
   4->SetBinContent(29,9.380483);
   4->SetBinContent(30,9.402349);
   4->SetBinContent(31,9.096227);
   4->SetBinContent(32,9.992726);
   4->SetBinContent(33,9.467946);
   4->SetBinContent(34,9.052495);
   4->SetBinContent(35,9.358617);
   4->SetBinContent(36,9.052495);
   4->SetBinContent(37,8.483983);
   4->SetBinContent(38,9.511678);
   4->SetBinContent(39,10.91109);
   4->SetBinContent(40,9.795934);
   4->SetBinContent(41,11.89505);
   4->SetBinContent(42,11.26095);
   4->SetBinContent(43,12.5729);
   4->SetBinContent(44,12.20118);
   4->SetBinContent(45,12.92275);
   4->SetBinContent(46,14.78135);
   4->SetBinContent(47,14.67202);
   4->SetBinContent(48,14.78135);
   4->SetBinContent(49,10.7143);
   4->SetBinContent(50,1.465022);
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
   5->SetBinContent(1,23.9012);
   5->SetBinContent(2,4.652324);
   5->SetBinContent(3,3.372934);
   5->SetBinContent(4,3.256626);
   5->SetBinContent(5,3.082164);
   5->SetBinContent(6,7.385567);
   5->SetBinContent(7,16.57391);
   5->SetBinContent(8,35.12486);
   5->SetBinContent(9,64.08607);
   5->SetBinContent(10,90.19598);
   5->SetBinContent(11,106.9435);
   5->SetBinContent(12,124.2145);
   5->SetBinContent(13,142.0087);
   5->SetBinContent(14,171.2007);
   5->SetBinContent(15,197.7758);
   5->SetBinContent(16,191.4373);
   5->SetBinContent(17,181.2027);
   5->SetBinContent(18,158.3492);
   5->SetBinContent(19,156.6047);
   5->SetBinContent(20,96.41817);
   5->SetBinContent(21,64.02792);
   5->SetBinContent(22,54.54865);
   5->SetBinContent(23,35.93903);
   5->SetBinContent(24,28.72791);
   5->SetBinContent(25,23.95936);
   5->SetBinContent(26,21.69138);
   5->SetBinContent(27,21.0517);
   5->SetBinContent(28,18.72557);
   5->SetBinContent(29,15.5853);
   5->SetBinContent(30,15.23637);
   5->SetBinContent(31,13.25913);
   5->SetBinContent(32,13.89883);
   5->SetBinContent(33,12.44497);
   5->SetBinContent(34,10.99112);
   5->SetBinContent(35,8.083416);
   5->SetBinContent(36,7.967108);
   5->SetBinContent(37,6.978488);
   5->SetBinContent(38,7.8508);
   5->SetBinContent(39,6.106177);
   5->SetBinContent(40,5.699098);
   5->SetBinContent(41,5.931715);
   5->SetBinContent(42,6.164331);
   5->SetBinContent(43,4.419708);
   5->SetBinContent(44,3.721859);
   5->SetBinContent(45,2.965855);
   5->SetBinContent(46,2.442468);
   5->SetBinContent(47,2.093544);
   5->SetBinContent(48,1.919082);
   5->SetBinContent(49,0.5815399);
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
   6->SetBinContent(1,1136.686);
   6->SetBinContent(2,229.7908);
   6->SetBinContent(3,164.8884);
   6->SetBinContent(4,127.1748);
   6->SetBinContent(5,106.1252);
   6->SetBinContent(6,194.7084);
   6->SetBinContent(7,331.5311);
   6->SetBinContent(8,635.8762);
   6->SetBinContent(9,1142.826);
   6->SetBinContent(10,1553.297);
   6->SetBinContent(11,1847.994);
   6->SetBinContent(12,2133.032);
   6->SetBinContent(13,2835.471);
   6->SetBinContent(14,4140.377);
   6->SetBinContent(15,5114.672);
   6->SetBinContent(16,5070.825);
   6->SetBinContent(17,4991.899);
   6->SetBinContent(18,4912.973);
   6->SetBinContent(19,4597.27);
   6->SetBinContent(20,2965.26);
   6->SetBinContent(21,1985.695);
   6->SetBinContent(22,1793.615);
   6->SetBinContent(23,1199.835);
   6->SetBinContent(24,952.5003);
   6->SetBinContent(25,859.5303);
   6->SetBinContent(26,791.1185);
   6->SetBinContent(27,809.537);
   6->SetBinContent(28,721.8295);
   6->SetBinContent(29,717.4442);
   6->SetBinContent(30,617.4576);
   6->SetBinContent(31,563.956);
   6->SetBinContent(32,568.3414);
   6->SetBinContent(33,542.0291);
   6->SetBinContent(34,460.4611);
   6->SetBinContent(35,434.1489);
   6->SetBinContent(36,454.3216);
   6->SetBinContent(37,429.7635);
   6->SetBinContent(38,411.3449);
   6->SetBinContent(39,442.0425);
   6->SetBinContent(40,414.8532);
   6->SetBinContent(41,450.8133);
   6->SetBinContent(42,448.1821);
   6->SetBinContent(43,407.8366);
   6->SetBinContent(44,433.2718);
   6->SetBinContent(45,485.0192);
   6->SetBinContent(46,398.1888);
   6->SetBinContent(47,427.1323);
   6->SetBinContent(48,390.2951);
   6->SetBinContent(49,245.5779);
   6->SetBinContent(50,32.45148);
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
   7->SetBinContent(1,141.9829);
   7->SetBinContent(2,37.0148);
   7->SetBinContent(3,25.96561);
   7->SetBinContent(4,20.71724);
   7->SetBinContent(5,26.10372);
   7->SetBinContent(6,46.13039);
   7->SetBinContent(7,115.1879);
   7->SetBinContent(8,246.4036);
   7->SetBinContent(9,436.5983);
   7->SetBinContent(10,568.6435);
   7->SetBinContent(11,656.7657);
   7->SetBinContent(12,708.2854);
   7->SetBinContent(13,754.1421);
   7->SetBinContent(14,885.7729);
   7->SetBinContent(15,957.7347);
   7->SetBinContent(16,872.6512);
   7->SetBinContent(17,837.5681);
   7->SetBinContent(18,752.4846);
   7->SetBinContent(19,737.8436);
   7->SetBinContent(20,445.0238);
   7->SetBinContent(21,323.6141);
   7->SetBinContent(22,291.8459);
   7->SetBinContent(23,205.1049);
   7->SetBinContent(24,169.3312);
   7->SetBinContent(25,153.0327);
   7->SetBinContent(26,135.353);
   7->SetBinContent(27,141.0161);
   7->SetBinContent(28,138.9442);
   7->SetBinContent(29,132.3143);
   7->SetBinContent(30,113.6686);
   7->SetBinContent(31,113.8067);
   7->SetBinContent(32,101.6526);
   7->SetBinContent(33,99.58087);
   7->SetBinContent(34,97.37103);
   7->SetBinContent(35,92.12267);
   7->SetBinContent(36,87.28864);
   7->SetBinContent(37,88.39356);
   7->SetBinContent(38,87.97922);
   7->SetBinContent(39,90.74152);
   7->SetBinContent(40,95.85177);
   7->SetBinContent(41,94.19439);
   7->SetBinContent(42,98.33784);
   7->SetBinContent(43,86.18372);
   7->SetBinContent(44,88.53168);
   7->SetBinContent(45,92.26078);
   7->SetBinContent(46,97.50915);
   7->SetBinContent(47,96.128);
   7->SetBinContent(48,85.49315);
   7->SetBinContent(49,63.53287);
   7->SetBinContent(50,9.253702);
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
   8->SetBinContent(1,12.93432);
   8->SetBinContent(2,2.77164);
   8->SetBinContent(4,1.84776);
   8->SetBinContent(5,1.84776);
   8->SetBinContent(6,11.08656);
   8->SetBinContent(7,19.40148);
   8->SetBinContent(8,37.87908);
   8->SetBinContent(9,73.91046);
   8->SetBinContent(10,87.76868);
   8->SetBinContent(11,115.4851);
   8->SetBinContent(12,117.3329);
   8->SetBinContent(13,130.2672);
   8->SetBinContent(14,133.9627);
   8->SetBinContent(15,150.5924);
   8->SetBinContent(16,140.4298);
   8->SetBinContent(17,134.8866);
   8->SetBinContent(18,103.4747);
   8->SetBinContent(19,123.8001);
   8->SetBinContent(20,71.13882);
   8->SetBinContent(21,45.27013);
   8->SetBinContent(22,32.33579);
   8->SetBinContent(23,29.56415);
   8->SetBinContent(24,23.09699);
   8->SetBinContent(25,19.40148);
   8->SetBinContent(26,18.4776);
   8->SetBinContent(27,20.32536);
   8->SetBinContent(28,16.62984);
   8->SetBinContent(29,19.40148);
   8->SetBinContent(30,15.70596);
   8->SetBinContent(31,26.79251);
   8->SetBinContent(32,7.39104);
   8->SetBinContent(33,15.70596);
   8->SetBinContent(34,12.01044);
   8->SetBinContent(35,14.78208);
   8->SetBinContent(36,6.46716);
   8->SetBinContent(37,18.4776);
   8->SetBinContent(38,18.4776);
   8->SetBinContent(39,16.62984);
   8->SetBinContent(40,15.70596);
   8->SetBinContent(41,25.86863);
   8->SetBinContent(42,17.55372);
   8->SetBinContent(43,21.24924);
   8->SetBinContent(44,15.70596);
   8->SetBinContent(45,21.24924);
   8->SetBinContent(46,21.24924);
   8->SetBinContent(47,23.09699);
   8->SetBinContent(48,21.24924);
   8->SetBinContent(49,26.79251);
   8->SetBinContent(50,2.77164);
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
   9->SetBinContent(1,232.0893);
   9->SetBinContent(2,45.27507);
   9->SetBinContent(3,27.69252);
   9->SetBinContent(4,26.37383);
   9->SetBinContent(5,37.36292);
   9->SetBinContent(6,73.40723);
   9->SetBinContent(7,158.2433);
   9->SetBinContent(8,313.8495);
   9->SetBinContent(9,530.9996);
   9->SetBinContent(10,676.0594);
   9->SetBinContent(11,703.7527);
   9->SetBinContent(12,771.8868);
   9->SetBinContent(13,796.0635);
   9->SetBinContent(14,949.4752);
   9->SetBinContent(15,1025.522);
   9->SetBinContent(16,892.77);
   9->SetBinContent(17,853.6478);
   9->SetBinContent(18,757.3809);
   9->SetBinContent(19,750.3477);
   9->SetBinContent(20,491.8774);
   9->SetBinContent(21,370.1151);
   9->SetBinContent(22,329.6742);
   9->SetBinContent(23,275.1669);
   9->SetBinContent(24,255.386);
   9->SetBinContent(25,215.386);
   9->SetBinContent(26,209.6718);
   9->SetBinContent(27,194.7267);
   9->SetBinContent(28,212.7487);
   9->SetBinContent(29,196.9245);
   9->SetBinContent(30,175.8257);
   9->SetBinContent(31,186.3751);
   9->SetBinContent(32,177.1443);
   9->SetBinContent(33,172.7487);
   9->SetBinContent(34,179.3421);
   9->SetBinContent(35,162.1993);
   9->SetBinContent(36,155.6059);
   9->SetBinContent(37,154.2872);
   9->SetBinContent(38,145.496);
   9->SetBinContent(39,151.2103);
   9->SetBinContent(40,150.3312);
   9->SetBinContent(41,172.7487);
   9->SetBinContent(42,150.7707);
   9->SetBinContent(43,133.1883);
   9->SetBinContent(44,129.6719);
   9->SetBinContent(45,145.0565);
   9->SetBinContent(46,142.8587);
   9->SetBinContent(47,146.8147);
   9->SetBinContent(48,132.3092);
   9->SetBinContent(49,110.3309);
   9->SetBinContent(50,19.78037);
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
   10->SetBinContent(1,2240.97);
   10->SetBinContent(2,485.3293);
   10->SetBinContent(3,315.0137);
   10->SetBinContent(4,264.938);
   10->SetBinContent(5,315.596);
   10->SetBinContent(6,534.8227);
   10->SetBinContent(7,1093.225);
   10->SetBinContent(8,2129.709);
   10->SetBinContent(9,3782.026);
   10->SetBinContent(10,4939.367);
   10->SetBinContent(11,5808.922);
   10->SetBinContent(12,6429.076);
   10->SetBinContent(13,7545.412);
   10->SetBinContent(14,9724.246);
   10->SetBinContent(15,10975.03);
   10->SetBinContent(16,10784.42);
   10->SetBinContent(17,10712.83);
   10->SetBinContent(18,10101.11);
   10->SetBinContent(19,9844.145);
   10->SetBinContent(20,6268.145);
   10->SetBinContent(21,4400.697);
   10->SetBinContent(22,3844.355);
   10->SetBinContent(23,2765.238);
   10->SetBinContent(24,2284.077);
   10->SetBinContent(25,2085.729);
   10->SetBinContent(26,1936.068);
   10->SetBinContent(27,1865.322);
   10->SetBinContent(28,1792.246);
   10->SetBinContent(29,1695.006);
   10->SetBinContent(30,1608.83);
   10->SetBinContent(31,1510.716);
   10->SetBinContent(32,1421.919);
   10->SetBinContent(33,1386.109);
   10->SetBinContent(34,1347.388);
   10->SetBinContent(35,1225.984);
   10->SetBinContent(36,1176.199);
   10->SetBinContent(37,1122.047);
   10->SetBinContent(38,1178.819);
   10->SetBinContent(39,1142.136);
   10->SetBinContent(40,1176.49);
   10->SetBinContent(41,1210.553);
   10->SetBinContent(42,1228.313);
   10->SetBinContent(43,1163.389);
   10->SetBinContent(44,1187.262);
   10->SetBinContent(45,1196.87);
   10->SetBinContent(46,1228.022);
   10->SetBinContent(47,1209.971);
   10->SetBinContent(48,1129.908);
   10->SetBinContent(49,813.1503);
   10->SetBinContent(50,103.3559);
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
   11->SetBinContent(1,213.6458);
   11->SetBinContent(3,30.52083);
   11->SetBinContent(4,30.52083);
   11->SetBinContent(5,30.52083);
   11->SetBinContent(6,61.04166);
   11->SetBinContent(7,122.0833);
   11->SetBinContent(8,183.125);
   11->SetBinContent(9,701.9791);
   11->SetBinContent(10,793.5415);
   11->SetBinContent(11,1251.354);
   11->SetBinContent(12,1342.917);
   11->SetBinContent(13,1831.251);
   11->SetBinContent(14,2136.459);
   11->SetBinContent(15,2716.354);
   11->SetBinContent(16,2624.791);
   11->SetBinContent(17,2960.52);
   11->SetBinContent(18,2197.501);
   11->SetBinContent(19,2472.188);
   11->SetBinContent(20,1739.688);
   11->SetBinContent(21,976.6664);
   11->SetBinContent(22,732.4999);
   11->SetBinContent(23,640.9374);
   11->SetBinContent(24,488.3334);
   11->SetBinContent(25,305.2083);
   11->SetBinContent(26,213.6458);
   11->SetBinContent(27,366.25);
   11->SetBinContent(28,274.6875);
   11->SetBinContent(29,213.6458);
   11->SetBinContent(30,335.7292);
   11->SetBinContent(31,305.2083);
   11->SetBinContent(32,122.0833);
   11->SetBinContent(33,152.6042);
   11->SetBinContent(34,305.2083);
   11->SetBinContent(35,305.2083);
   11->SetBinContent(36,91.5625);
   11->SetBinContent(37,152.6042);
   11->SetBinContent(38,183.125);
   11->SetBinContent(39,122.0833);
   11->SetBinContent(40,183.125);
   11->SetBinContent(41,183.125);
   11->SetBinContent(42,213.6458);
   11->SetBinContent(43,305.2083);
   11->SetBinContent(44,61.04166);
   11->SetBinContent(45,244.1666);
   11->SetBinContent(46,244.1666);
   11->SetBinContent(47,366.25);
   11->SetBinContent(48,427.2917);
   11->SetBinContent(49,152.6042);
   11->SetBinContent(50,30.52083);
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
   12->SetBinContent(1,273.4954);
   12->SetBinContent(2,47.25312);
   12->SetBinContent(3,25.77441);
   12->SetBinContent(4,34.36588);
   12->SetBinContent(5,25.77441);
   12->SetBinContent(6,50.11695);
   12->SetBinContent(7,86.63079);
   12->SetBinContent(8,190.4446);
   12->SetBinContent(9,358.6925);
   12->SetBinContent(10,477.5389);
   12->SetBinContent(11,537.6781);
   12->SetBinContent(12,634.3303);
   12->SetBinContent(13,795.4174);
   12->SetBinContent(14,1086.09);
   12->SetBinContent(15,1309.464);
   12->SetBinContent(16,1268.655);
   12->SetBinContent(17,1291.565);
   12->SetBinContent(18,1129.047);
   12->SetBinContent(19,1120.455);
   12->SetBinContent(20,707.3564);
   12->SetBinContent(21,469.6636);
   12->SetBinContent(22,380.8867);
   12->SetBinContent(23,252.733);
   12->SetBinContent(24,201.184);
   12->SetBinContent(25,191.1606);
   12->SetBinContent(26,158.2265);
   12->SetBinContent(27,169.6819);
   12->SetBinContent(28,146.0553);
   12->SetBinContent(29,148.2031);
   12->SetBinContent(30,138.8957);
   12->SetBinContent(31,124.5765);
   12->SetBinContent(32,118.8489);
   12->SetBinContent(33,121.7127);
   12->SetBinContent(34,116.701);
   12->SetBinContent(35,100.9499);
   12->SetBinContent(36,85.19888);
   12->SetBinContent(37,97.37016);
   12->SetBinContent(38,93.07441);
   12->SetBinContent(39,93.07441);
   12->SetBinContent(40,78.75526);
   12->SetBinContent(41,99.51803);
   12->SetBinContent(42,94.50632);
   12->SetBinContent(43,85.91483);
   12->SetBinContent(44,94.50632);
   12->SetBinContent(45,113.1212);
   12->SetBinContent(46,103.0978);
   12->SetBinContent(47,91.64249);
   12->SetBinContent(48,91.64249);
   12->SetBinContent(49,59.4244);
   12->SetBinContent(50,10.02338);
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
   13->SetBinContent(1,1924.407);
   13->SetBinContent(2,676.1434);
   13->SetBinContent(3,468.0992);
   13->SetBinContent(4,312.0662);
   13->SetBinContent(5,468.0992);
   13->SetBinContent(6,936.1986);
   13->SetBinContent(7,2392.506);
   13->SetBinContent(8,4056.858);
   13->SetBinContent(9,7697.644);
   13->SetBinContent(10,9257.971);
   13->SetBinContent(11,13314.81);
   13->SetBinContent(12,16279.42);
   13->SetBinContent(13,21376.57);
   13->SetBinContent(14,29958.5);
   13->SetBinContent(15,32299.03);
   13->SetBinContent(16,31518.85);
   13->SetBinContent(17,31830.92);
   13->SetBinContent(18,27722);
   13->SetBinContent(19,28710.22);
   13->SetBinContent(20,18411.9);
   13->SetBinContent(21,10610.25);
   13->SetBinContent(22,9674.057);
   13->SetBinContent(23,6241.33);
   13->SetBinContent(24,4264.903);
   13->SetBinContent(25,3848.814);
   13->SetBinContent(26,3640.77);
   13->SetBinContent(27,3484.737);
   13->SetBinContent(28,3276.693);
   13->SetBinContent(29,3328.704);
   13->SetBinContent(30,3224.682);
   13->SetBinContent(31,2340.495);
   13->SetBinContent(32,3016.638);
   13->SetBinContent(33,1872.396);
   13->SetBinContent(34,1872.396);
   13->SetBinContent(35,1976.418);
   13->SetBinContent(36,2028.429);
   13->SetBinContent(37,1716.364);
   13->SetBinContent(38,2444.517);
   13->SetBinContent(39,2028.429);
   13->SetBinContent(40,2288.484);
   13->SetBinContent(41,2548.539);
   13->SetBinContent(42,2444.517);
   13->SetBinContent(43,2548.539);
   13->SetBinContent(44,3016.638);
   13->SetBinContent(45,2860.605);
   13->SetBinContent(46,3640.77);
   13->SetBinContent(47,2340.495);
   13->SetBinContent(48,2652.561);
   13->SetBinContent(49,2392.506);
   13->SetBinContent(50,364.0772);
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
   14->SetBinContent(1,8190.227);
   14->SetBinContent(2,1277.13);
   14->SetBinContent(3,842.1665);
   14->SetBinContent(4,601.5475);
   14->SetBinContent(5,564.5292);
   14->SetBinContent(6,407.2014);
   14->SetBinContent(7,703.3478);
   14->SetBinContent(8,980.9852);
   14->SetBinContent(9,1924.946);
   14->SetBinContent(10,1832.401);
   14->SetBinContent(11,2295.13);
   14->SetBinContent(12,2239.602);
   14->SetBinContent(13,3035.501);
   14->SetBinContent(14,3877.673);
   14->SetBinContent(15,4442.197);
   14->SetBinContent(16,5034.479);
   14->SetBinContent(17,5932.155);
   14->SetBinContent(18,5987.681);
   14->SetBinContent(19,7736.762);
   14->SetBinContent(20,3729.599);
   14->SetBinContent(21,2905.936);
   14->SetBinContent(22,2498.732);
   14->SetBinContent(23,1286.385);
   14->SetBinContent(24,1360.421);
   14->SetBinContent(25,1055.022);
   14->SetBinContent(26,1073.531);
   14->SetBinContent(27,805.1482);
   14->SetBinContent(28,897.694);
   14->SetBinContent(29,684.8387);
   14->SetBinContent(30,832.9119);
   14->SetBinContent(31,573.7838);
   14->SetBinContent(32,638.5658);
   14->SetBinContent(33,592.2929);
   14->SetBinContent(34,601.5475);
   14->SetBinContent(35,536.7654);
   14->SetBinContent(36,499.7472);
   14->SetBinContent(37,518.2563);
   14->SetBinContent(38,388.6922);
   14->SetBinContent(39,388.6922);
   14->SetBinContent(40,518.2563);
   14->SetBinContent(41,536.7654);
   14->SetBinContent(42,425.7105);
   14->SetBinContent(43,305.401);
   14->SetBinContent(44,314.6556);
   14->SetBinContent(45,259.1281);
   14->SetBinContent(46,342.4193);
   14->SetBinContent(47,194.3461);
   14->SetBinContent(48,157.3278);
   14->SetBinContent(49,148.0732);
   14->SetBinContent(50,18.50915);
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
   15->SetBinContent(1,2327.882);
   15->SetBinContent(2,420.7013);
   15->SetBinContent(3,84.14027);
   15->SetBinContent(4,140.2338);
   15->SetBinContent(5,112.187);
   15->SetBinContent(6,56.09351);
   15->SetBinContent(7,168.2805);
   15->SetBinContent(8,448.7481);
   15->SetBinContent(9,588.9819);
   15->SetBinContent(10,1542.572);
   15->SetBinContent(11,701.1689);
   15->SetBinContent(12,869.4494);
   15->SetBinContent(13,953.5897);
   15->SetBinContent(14,1738.899);
   15->SetBinContent(15,1542.572);
   15->SetBinContent(16,2159.601);
   15->SetBinContent(17,2103.507);
   15->SetBinContent(18,1991.32);
   15->SetBinContent(19,2243.741);
   15->SetBinContent(20,1009.683);
   15->SetBinContent(21,925.5429);
   15->SetBinContent(22,504.8416);
   15->SetBinContent(23,504.8416);
   15->SetBinContent(24,392.6546);
   15->SetBinContent(25,280.4676);
   15->SetBinContent(26,224.374);
   15->SetBinContent(27,364.6078);
   15->SetBinContent(28,252.4208);
   15->SetBinContent(29,280.4676);
   15->SetBinContent(30,252.4208);
   15->SetBinContent(31,84.14027);
   15->SetBinContent(32,168.2805);
   15->SetBinContent(33,280.4676);
   15->SetBinContent(34,168.2805);
   15->SetBinContent(35,84.14027);
   15->SetBinContent(36,112.187);
   15->SetBinContent(37,224.374);
   15->SetBinContent(38,336.5611);
   15->SetBinContent(39,56.09351);
   15->SetBinContent(40,140.2338);
   15->SetBinContent(41,56.09351);
   15->SetBinContent(42,112.187);
   15->SetBinContent(43,112.187);
   15->SetBinContent(44,140.2338);
   15->SetBinContent(45,84.14027);
   15->SetBinContent(47,112.187);
   15->SetBinContent(49,28.04676);
   15->SetBinContent(50,28.04676);
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
   16->SetBinContent(1,456.6507);
   16->SetBinContent(2,53.09894);
   16->SetBinContent(3,31.85936);
   16->SetBinContent(4,95.57809);
   16->SetBinContent(5,42.47915);
   16->SetBinContent(6,53.09894);
   16->SetBinContent(7,127.4375);
   16->SetBinContent(8,191.1562);
   16->SetBinContent(9,361.0727);
   16->SetBinContent(10,584.0883);
   16->SetBinContent(11,467.2705);
   16->SetBinContent(12,605.3279);
   16->SetBinContent(13,796.4845);
   16->SetBinContent(14,796.4845);
   16->SetBinContent(15,1157.557);
   16->SetBinContent(16,881.443);
   16->SetBinContent(17,1168.177);
   16->SetBinContent(18,966.4015);
   16->SetBinContent(19,1380.572);
   16->SetBinContent(20,488.51);
   16->SetBinContent(21,488.51);
   16->SetBinContent(22,350.4529);
   16->SetBinContent(23,212.3957);
   16->SetBinContent(24,106.1979);
   16->SetBinContent(25,138.0573);
   16->SetBinContent(26,95.57809);
   16->SetBinContent(27,53.09894);
   16->SetBinContent(28,106.1979);
   16->SetBinContent(29,53.09894);
   16->SetBinContent(30,53.09894);
   16->SetBinContent(31,42.47915);
   16->SetBinContent(32,42.47915);
   16->SetBinContent(33,53.09894);
   16->SetBinContent(34,21.23957);
   16->SetBinContent(35,31.85936);
   16->SetBinContent(36,53.09894);
   16->SetBinContent(38,31.85936);
   16->SetBinContent(39,63.71873);
   16->SetBinContent(40,31.85936);
   16->SetBinContent(41,31.85936);
   16->SetBinContent(42,42.47915);
   16->SetBinContent(43,21.23957);
   16->SetBinContent(44,21.23957);
   16->SetBinContent(45,53.09894);
   16->SetBinContent(46,31.85936);
   16->SetBinContent(47,42.47915);
   16->SetBinContent(48,10.61979);
   16->SetBinContent(49,42.47915);
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
   17->SetBinContent(1,6690.272);
   17->SetBinContent(2,1094.77);
   17->SetBinContent(3,669.0262);
   17->SetBinContent(4,364.9234);
   17->SetBinContent(5,304.1028);
   17->SetBinContent(6,304.1028);
   17->SetBinContent(7,912.3084);
   17->SetBinContent(8,1155.591);
   17->SetBinContent(9,1763.796);
   17->SetBinContent(10,2554.464);
   17->SetBinContent(11,2493.643);
   17->SetBinContent(12,2676.105);
   17->SetBinContent(13,3588.413);
   17->SetBinContent(14,4379.082);
   17->SetBinContent(15,5230.573);
   17->SetBinContent(16,5717.139);
   17->SetBinContent(17,5960.422);
   17->SetBinContent(18,5777.96);
   17->SetBinContent(19,6386.168);
   17->SetBinContent(20,3527.593);
   17->SetBinContent(21,2797.746);
   17->SetBinContent(22,2067.899);
   17->SetBinContent(23,1581.335);
   17->SetBinContent(24,1094.77);
   17->SetBinContent(25,912.3084);
   17->SetBinContent(26,1094.77);
   17->SetBinContent(27,486.5645);
   17->SetBinContent(28,1033.95);
   17->SetBinContent(29,973.129);
   17->SetBinContent(30,790.6673);
   17->SetBinContent(31,790.6673);
   17->SetBinContent(32,547.3851);
   17->SetBinContent(33,608.2056);
   17->SetBinContent(34,364.9234);
   17->SetBinContent(35,182.4617);
   17->SetBinContent(36,304.1028);
   17->SetBinContent(37,547.3851);
   17->SetBinContent(38,304.1028);
   17->SetBinContent(39,425.7439);
   17->SetBinContent(40,243.2822);
   17->SetBinContent(41,364.9234);
   17->SetBinContent(42,304.1028);
   17->SetBinContent(43,121.6411);
   17->SetBinContent(44,486.5645);
   17->SetBinContent(46,364.9234);
   17->SetBinContent(47,60.82056);
   17->SetBinContent(48,243.2822);
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
