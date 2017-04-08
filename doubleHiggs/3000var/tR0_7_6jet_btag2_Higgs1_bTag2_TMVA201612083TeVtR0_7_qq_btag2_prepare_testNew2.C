{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:43:13 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.298545,1.31746,6.119521);
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
   
   TH1F *THStack_stack_15 = new TH1F("THStack_stack_15","",50,0,1);
   THStack_stack_15->SetMinimum(0.02492909);
   THStack_stack_15->SetMaximum(232314);
   THStack_stack_15->SetDirectory(0);
   THStack_stack_15->SetStats(0);
   THStack_stack_15->SetLineWidth(2);
   THStack_stack_15->SetMarkerSize(1.2);
   THStack_stack_15->GetXaxis()->SetTitle("Lowest B tag of H#rightarrowbb jets");
   THStack_stack_15->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_15->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_15->GetXaxis()->SetLabelColor(ci);
   THStack_stack_15->GetXaxis()->SetLabelFont(42);
   THStack_stack_15->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_15->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_15->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_15->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_15->GetXaxis()->SetTitleColor(ci);
   THStack_stack_15->GetXaxis()->SetTitleFont(42);
   THStack_stack_15->GetYaxis()->SetTitle("Number of events");
   THStack_stack_15->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_15->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_15->GetYaxis()->SetLabelColor(ci);
   THStack_stack_15->GetYaxis()->SetLabelFont(42);
   THStack_stack_15->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_15->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_15->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_15->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_15->GetYaxis()->SetTitleColor(ci);
   THStack_stack_15->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_15->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_15->GetZaxis()->SetLabelColor(ci);
   THStack_stack_15->GetZaxis()->SetLabelFont(42);
   THStack_stack_15->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_15->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_15->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_15->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_15->GetZaxis()->SetTitleColor(ci);
   THStack_stack_15->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_15);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,3.048884);
   0->SetBinContent(2,1.316568);
   0->SetBinContent(3,4.692119);
   0->SetBinContent(4,6.186889);
   0->SetBinContent(5,6.968921);
   0->SetBinContent(6,5.583041);
   0->SetBinContent(7,5.315764);
   0->SetBinContent(8,3.17757);
   0->SetBinContent(9,3.286458);
   0->SetBinContent(10,2.494546);
   0->SetBinContent(11,1.80162);
   0->SetBinContent(12,2.256972);
   0->SetBinContent(13,1.40566);
   0->SetBinContent(14,1.633337);
   0->SetBinContent(15,1.435357);
   0->SetBinContent(16,1.267073);
   0->SetBinContent(17,0.9206077);
   0->SetBinContent(18,0.9206077);
   0->SetBinContent(19,0.8513145);
   0->SetBinContent(20,0.8315165);
   0->SetBinContent(21,0.9305067);
   0->SetBinContent(22,0.8216175);
   0->SetBinContent(23,0.7325263);
   0->SetBinContent(24,0.6830312);
   0->SetBinContent(25,0.7820214);
   0->SetBinContent(26,0.6434351);
   0->SetBinContent(27,0.6434351);
   0->SetBinContent(28,0.5246469);
   0->SetBinContent(29,0.6830312);
   0->SetBinContent(30,0.6335361);
   0->SetBinContent(31,0.5048488);
   0->SetBinContent(32,0.6335361);
   0->SetBinContent(33,0.584041);
   0->SetBinContent(34,0.564243);
   0->SetBinContent(35,0.6236371);
   0->SetBinContent(36,0.5048488);
   0->SetBinContent(37,0.603839);
   0->SetBinContent(38,0.5345459);
   0->SetBinContent(39,0.564243);
   0->SetBinContent(40,0.603839);
   0->SetBinContent(41,0.7127283);
   0->SetBinContent(42,0.6731322);
   0->SetBinContent(43,0.8612136);
   0->SetBinContent(44,1.088891);
   0->SetBinContent(45,0.9800018);
   0->SetBinContent(46,1.474953);
   0->SetBinContent(47,1.375963);
   0->SetBinContent(48,2.573737);
   0->SetBinContent(49,3.731909);
   0->SetBinContent(50,8.404296);
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
   1->SetBinContent(1,4.563018);
   1->SetBinContent(2,0.7027572);
   1->SetBinContent(3,2.820938);
   1->SetBinContent(4,4.290818);
   1->SetBinContent(5,5.156909);
   1->SetBinContent(6,4.815422);
   1->SetBinContent(7,4.746135);
   1->SetBinContent(8,3.375236);
   1->SetBinContent(9,3.469269);
   1->SetBinContent(10,2.756599);
   1->SetBinContent(11,2.202301);
   1->SetBinContent(12,2.593279);
   1->SetBinContent(13,1.786582);
   1->SetBinContent(14,1.657909);
   1->SetBinContent(15,1.771736);
   1->SetBinContent(16,1.257042);
   1->SetBinContent(17,0.940308);
   1->SetBinContent(18,0.9452569);
   1->SetBinContent(19,0.8314306);
   1->SetBinContent(20,0.8215326);
   1->SetBinContent(21,0.554288);
   1->SetBinContent(22,0.747298);
   1->SetBinContent(23,0.564186);
   1->SetBinContent(24,0.5196452);
   1->SetBinContent(25,0.4652063);
   1->SetBinContent(26,0.4701553);
   1->SetBinContent(27,0.3860222);
   1->SetBinContent(28,0.4008692);
   1->SetBinContent(29,0.4206652);
   1->SetBinContent(30,0.3563282);
   1->SetBinContent(31,0.3761242);
   1->SetBinContent(32,0.3711752);
   1->SetBinContent(33,0.3761242);
   1->SetBinContent(34,0.2721951);
   1->SetBinContent(35,0.3117872);
   1->SetBinContent(36,0.4206652);
   1->SetBinContent(37,0.3315832);
   1->SetBinContent(38,0.2820931);
   1->SetBinContent(39,0.3266342);
   1->SetBinContent(40,0.3315832);
   1->SetBinContent(41,0.2919911);
   1->SetBinContent(42,0.3216852);
   1->SetBinContent(43,0.3266342);
   1->SetBinContent(44,0.3365322);
   1->SetBinContent(45,0.4800533);
   1->SetBinContent(46,0.4899513);
   1->SetBinContent(47,0.6681144);
   1->SetBinContent(48,0.8512264);
   1->SetBinContent(49,1.167961);
   1->SetBinContent(50,1.910307);
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
   2->SetBinContent(1,7.319663);
   2->SetBinContent(2,2.444807);
   2->SetBinContent(3,7.943249);
   2->SetBinContent(4,9.873215);
   2->SetBinContent(5,10.82335);
   2->SetBinContent(6,8.799365);
   2->SetBinContent(7,8.398527);
   2->SetBinContent(8,5.64687);
   2->SetBinContent(9,5.335077);
   2->SetBinContent(10,4.167091);
   2->SetBinContent(11,2.964461);
   2->SetBinContent(12,3.578149);
   2->SetBinContent(13,2.405214);
   2->SetBinContent(14,2.296334);
   2->SetBinContent(15,2.514094);
   2->SetBinContent(16,1.737093);
   2->SetBinContent(17,1.281787);
   2->SetBinContent(18,1.237246);
   2->SetBinContent(19,1.252093);
   2->SetBinContent(20,1.059083);
   2->SetBinContent(21,1.212502);
   2->SetBinContent(22,1.02939);
   2->SetBinContent(23,0.93041);
   2->SetBinContent(24,0.7868898);
   2->SetBinContent(25,0.8413285);
   2->SetBinContent(26,0.8512264);
   2->SetBinContent(27,0.9452569);
   2->SetBinContent(28,0.8314306);
   2->SetBinContent(29,0.7126552);
   2->SetBinContent(30,0.7967877);
   2->SetBinContent(31,0.8908182);
   2->SetBinContent(32,0.7621449);
   2->SetBinContent(33,0.6928593);
   2->SetBinContent(34,0.7967877);
   2->SetBinContent(35,0.7324511);
   2->SetBinContent(36,0.7225531);
   2->SetBinContent(37,0.742349);
   2->SetBinContent(38,0.7918388);
   2->SetBinContent(39,0.8264816);
   2->SetBinContent(40,0.8462775);
   2->SetBinContent(41,0.8660734);
   2->SetBinContent(42,0.9601039);
   2->SetBinContent(43,0.9106141);
   2->SetBinContent(44,1.163012);
   2->SetBinContent(45,1.286736);
   2->SetBinContent(46,1.667807);
   2->SetBinContent(47,2.172606);
   2->SetBinContent(48,2.717007);
   2->SetBinContent(49,4.939149);
   2->SetBinContent(50,10.22457);
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
   3->SetBinContent(1,34.74442);
   3->SetBinContent(2,11.31124);
   3->SetBinContent(3,36.02744);
   3->SetBinContent(4,44.97487);
   3->SetBinContent(5,48.58761);
   3->SetBinContent(6,37.41176);
   3->SetBinContent(7,37.27671);
   3->SetBinContent(8,25.79664);
   3->SetBinContent(9,23.33173);
   3->SetBinContent(10,19.44867);
   3->SetBinContent(11,15.16044);
   3->SetBinContent(12,16.67987);
   3->SetBinContent(13,10.60218);
   3->SetBinContent(14,12.89819);
   3->SetBinContent(15,11.64889);
   3->SetBinContent(16,9.319118);
   3->SetBinContent(17,6.921814);
   3->SetBinContent(18,4.895924);
   3->SetBinContent(19,5.672515);
   3->SetBinContent(20,4.828394);
   3->SetBinContent(21,4.693335);
   3->SetBinContent(22,4.288157);
   3->SetBinContent(23,4.186862);
   3->SetBinContent(24,4.524511);
   3->SetBinContent(25,4.018038);
   3->SetBinContent(26,3.815448);
   3->SetBinContent(27,3.308972);
   3->SetBinContent(28,3.545327);
   3->SetBinContent(29,2.802496);
   3->SetBinContent(30,3.038851);
   3->SetBinContent(31,3.241442);
   3->SetBinContent(32,2.7012);
   3->SetBinContent(33,2.870026);
   3->SetBinContent(34,2.836261);
   3->SetBinContent(35,2.7012);
   3->SetBinContent(36,2.56614);
   3->SetBinContent(37,3.140146);
   3->SetBinContent(38,2.768731);
   3->SetBinContent(39,3.275207);
   3->SetBinContent(40,2.7012);
   3->SetBinContent(41,3.308972);
   3->SetBinContent(42,3.072616);
   3->SetBinContent(43,3.579093);
   3->SetBinContent(44,3.579093);
   3->SetBinContent(45,3.950508);
   3->SetBinContent(46,4.895924);
   3->SetBinContent(47,6.82052);
   3->SetBinContent(48,9.589237);
   3->SetBinContent(49,13.50596);
   3->SetBinContent(50,30.72644);
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
   4->SetBinContent(1,33.8921);
   4->SetBinContent(2,11.69826);
   4->SetBinContent(3,31.15886);
   4->SetBinContent(4,42.70403);
   4->SetBinContent(5,50.16029);
   4->SetBinContent(6,43.20695);
   4->SetBinContent(7,41.52328);
   4->SetBinContent(8,30.19677);
   4->SetBinContent(9,29.01601);
   4->SetBinContent(10,23.30903);
   4->SetBinContent(11,16.74927);
   4->SetBinContent(12,18.23615);
   4->SetBinContent(13,12.92275);
   4->SetBinContent(14,11.91692);
   4->SetBinContent(15,11.74199);
   4->SetBinContent(16,7.893605);
   4->SetBinContent(17,6.253666);
   4->SetBinContent(18,5.597691);
   4->SetBinContent(19,5.269703);
   4->SetBinContent(20,5.007313);
   4->SetBinContent(21,5.116642);
   4->SetBinContent(22,4.438801);
   4->SetBinContent(23,3.760957);
   4->SetBinContent(24,3.91402);
   4->SetBinContent(25,3.717225);
   4->SetBinContent(26,3.367368);
   4->SetBinContent(27,2.973778);
   4->SetBinContent(28,3.651627);
   4->SetBinContent(29,3.017511);
   4->SetBinContent(30,3.039377);
   4->SetBinContent(31,3.170573);
   4->SetBinContent(32,2.79885);
   4->SetBinContent(33,2.623921);
   4->SetBinContent(34,2.492725);
   4->SetBinContent(35,2.623921);
   4->SetBinContent(36,3.083109);
   4->SetBinContent(37,2.776984);
   4->SetBinContent(38,2.820716);
   4->SetBinContent(39,2.995645);
   4->SetBinContent(40,3.039377);
   4->SetBinContent(41,3.126841);
   4->SetBinContent(42,3.236171);
   4->SetBinContent(43,3.30177);
   4->SetBinContent(44,4.045216);
   4->SetBinContent(45,5.029179);
   4->SetBinContent(46,5.247838);
   4->SetBinContent(47,6.931508);
   4->SetBinContent(48,10.27698);
   4->SetBinContent(49,14.86881);
   4->SetBinContent(50,32.07723);
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
   5->SetBinContent(1,85.02052);
   5->SetBinContent(2,50.59411);
   5->SetBinContent(3,173.7593);
   5->SetBinContent(4,183.0054);
   5->SetBinContent(5,187.483);
   5->SetBinContent(6,138.9267);
   5->SetBinContent(7,126.8894);
   5->SetBinContent(8,75.65817);
   5->SetBinContent(9,70.71532);
   5->SetBinContent(10,54.08341);
   5->SetBinContent(11,36.40427);
   5->SetBinContent(12,45.01122);
   5->SetBinContent(13,32.1008);
   5->SetBinContent(14,31.11219);
   5->SetBinContent(15,31.05404);
   5->SetBinContent(16,23.55228);
   5->SetBinContent(17,16.39945);
   5->SetBinContent(18,17.62066);
   5->SetBinContent(19,15.35268);
   5->SetBinContent(20,15.29453);
   5->SetBinContent(21,16.98098);
   5->SetBinContent(22,12.91021);
   5->SetBinContent(23,13.08467);
   5->SetBinContent(24,14.59668);
   5->SetBinContent(25,12.7939);
   5->SetBinContent(26,11.97974);
   5->SetBinContent(27,11.74712);
   5->SetBinContent(28,10.87481);
   5->SetBinContent(29,10.93297);
   5->SetBinContent(30,11.74712);
   5->SetBinContent(31,11.97974);
   5->SetBinContent(32,13.02652);
   5->SetBinContent(33,11.80528);
   5->SetBinContent(34,11.86343);
   5->SetBinContent(35,11.97974);
   5->SetBinContent(36,12.85205);
   5->SetBinContent(37,12.38682);
   5->SetBinContent(38,12.96836);
   5->SetBinContent(39,13.08467);
   5->SetBinContent(40,14.42221);
   5->SetBinContent(41,16.10868);
   5->SetBinContent(42,17.27174);
   5->SetBinContent(43,18.66742);
   5->SetBinContent(44,20.64463);
   5->SetBinContent(45,24.7735);
   5->SetBinContent(46,31.57742);
   5->SetBinContent(47,40.64959);
   5->SetBinContent(48,57.57272);
   5->SetBinContent(49,91.24271);
   5->SetBinContent(50,218.245);
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
   6->SetBinContent(1,2890.719);
   6->SetBinContent(2,1048.979);
   6->SetBinContent(3,3509.848);
   6->SetBinContent(4,4603.409);
   6->SetBinContent(5,5709.247);
   6->SetBinContent(6,4770.907);
   6->SetBinContent(7,4814.754);
   6->SetBinContent(8,2823.194);
   6->SetBinContent(9,2788.116);
   6->SetBinContent(10,1993.589);
   6->SetBinContent(11,1380.513);
   6->SetBinContent(12,1708.539);
   6->SetBinContent(13,1032.314);
   6->SetBinContent(14,1079.676);
   6->SetBinContent(15,1112.128);
   6->SetBinContent(16,767.4374);
   6->SetBinContent(17,554.3082);
   6->SetBinContent(18,508.7003);
   6->SetBinContent(19,492.9129);
   6->SetBinContent(20,460.4611);
   6->SetBinContent(21,419.2386);
   6->SetBinContent(22,409.5908);
   6->SetBinContent(23,402.5742);
   6->SetBinContent(24,380.6473);
   6->SetBinContent(25,396.4346);
   6->SetBinContent(26,351.7038);
   6->SetBinContent(27,360.4745);
   6->SetBinContent(28,332.4081);
   6->SetBinContent(29,350.8267);
   6->SetBinContent(30,308.7271);
   6->SetBinContent(31,363.1058);
   6->SetBinContent(32,303.4647);
   6->SetBinContent(33,309.6042);
   6->SetBinContent(34,334.1623);
   6->SetBinContent(35,328.8998);
   6->SetBinContent(36,302.5876);
   6->SetBinContent(37,328.0228);
   6->SetBinContent(38,324.5145);
   6->SetBinContent(39,313.9896);
   6->SetBinContent(40,296.4481);
   6->SetBinContent(41,387.6639);
   6->SetBinContent(42,389.418);
   6->SetBinContent(43,447.305);
   6->SetBinContent(44,514.8398);
   6->SetBinContent(45,599.9161);
   6->SetBinContent(46,713.9359);
   6->SetBinContent(47,980.5667);
   6->SetBinContent(48,1308.593);
   6->SetBinContent(49,2056.737);
   6->SetBinContent(50,4755.122);
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
   7->SetBinContent(1,600.1354);
   7->SetBinContent(2,455.7974);
   7->SetBinContent(3,1251.559);
   7->SetBinContent(4,1374.572);
   7->SetBinContent(5,1256.667);
   7->SetBinContent(6,924.171);
   7->SetBinContent(7,783.5622);
   7->SetBinContent(8,513.5326);
   7->SetBinContent(9,456.9023);
   7->SetBinContent(10,347.233);
   7->SetBinContent(11,246.1273);
   7->SetBinContent(12,286.4591);
   7->SetBinContent(13,187.8396);
   7->SetBinContent(14,197.6463);
   7->SetBinContent(15,204.8287);
   7->SetBinContent(16,125.9608);
   7->SetBinContent(17,99.58087);
   7->SetBinContent(18,94.74685);
   7->SetBinContent(19,76.23945);
   7->SetBinContent(20,78.5874);
   7->SetBinContent(21,72.096);
   7->SetBinContent(22,75.68699);
   7->SetBinContent(23,69.3337);
   7->SetBinContent(24,66.43329);
   7->SetBinContent(25,58.42262);
   7->SetBinContent(26,57.17958);
   7->SetBinContent(27,63.94722);
   7->SetBinContent(28,59.25131);
   7->SetBinContent(29,56.48901);
   7->SetBinContent(30,52.34556);
   7->SetBinContent(31,54.14106);
   7->SetBinContent(32,49.0308);
   7->SetBinContent(33,52.75991);
   7->SetBinContent(34,49.85949);
   7->SetBinContent(35,52.62179);
   7->SetBinContent(36,50.41195);
   7->SetBinContent(37,51.65499);
   7->SetBinContent(38,56.35089);
   7->SetBinContent(39,55.93655);
   7->SetBinContent(40,59.52754);
   7->SetBinContent(41,59.94188);
   7->SetBinContent(42,67.26198);
   7->SetBinContent(43,73.33904);
   7->SetBinContent(44,83.55954);
   7->SetBinContent(45,104.9674);
   7->SetBinContent(46,124.4416);
   7->SetBinContent(47,157.5908);
   7->SetBinContent(48,230.1051);
   7->SetBinContent(49,357.4541);
   7->SetBinContent(50,858.839);
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
   8->SetBinContent(1,137.6582);
   8->SetBinContent(2,146.8969);
   8->SetBinContent(3,376.9435);
   8->SetBinContent(4,314.1191);
   8->SetBinContent(5,295.6413);
   8->SetBinContent(6,194.9384);
   8->SetBinContent(7,140.4298);
   8->SetBinContent(8,86.8448);
   8->SetBinContent(9,59.12836);
   8->SetBinContent(10,56.35671);
   8->SetBinContent(11,35.10744);
   8->SetBinContent(12,51.7373);
   8->SetBinContent(13,24.94475);
   8->SetBinContent(14,17.55372);
   8->SetBinContent(15,36.03132);
   8->SetBinContent(16,22.17311);
   8->SetBinContent(17,7.39104);
   8->SetBinContent(18,2.77164);
   8->SetBinContent(19,2.77164);
   8->SetBinContent(20,3.69552);
   8->SetBinContent(21,10.16268);
   8->SetBinContent(22,3.69552);
   8->SetBinContent(23,3.69552);
   8->SetBinContent(24,1.84776);
   8->SetBinContent(25,2.77164);
   8->SetBinContent(26,2.77164);
   8->SetBinContent(27,1.84776);
   8->SetBinContent(28,1.84776);
   8->SetBinContent(30,2.77164);
   8->SetBinContent(31,2.77164);
   8->SetBinContent(32,0.92388);
   8->SetBinContent(34,1.84776);
   8->SetBinContent(35,2.77164);
   8->SetBinContent(36,0.92388);
   8->SetBinContent(40,0.92388);
   8->SetBinContent(42,1.84776);
   8->SetBinContent(43,0.92388);
   8->SetBinContent(44,0.92388);
   8->SetBinContent(46,0.92388);
   8->SetBinContent(50,0.92388);
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
   9->SetBinContent(1,1390.809);
   9->SetBinContent(2,691.005);
   9->SetBinContent(3,1660.708);
   9->SetBinContent(4,1735.875);
   9->SetBinContent(5,1631.696);
   9->SetBinContent(6,1200.033);
   9->SetBinContent(7,1035.632);
   9->SetBinContent(8,657.1577);
   9->SetBinContent(9,640.4539);
   9->SetBinContent(10,471.2174);
   9->SetBinContent(11,346.8176);
   9->SetBinContent(12,523.9664);
   9->SetBinContent(13,284.8375);
   9->SetBinContent(14,264.6171);
   9->SetBinContent(15,303.2997);
   9->SetBinContent(16,196.9245);
   9->SetBinContent(17,133.1883);
   9->SetBinContent(18,108.5726);
   9->SetBinContent(19,101.5396);
   9->SetBinContent(20,100.2209);
   9->SetBinContent(21,74.28637);
   9->SetBinContent(22,78.68204);
   9->SetBinContent(23,83.51729);
   9->SetBinContent(24,58.02242);
   9->SetBinContent(25,65.93459);
   9->SetBinContent(26,67.25329);
   9->SetBinContent(27,60.22024);
   9->SetBinContent(28,47.91245);
   9->SetBinContent(29,47.47289);
   9->SetBinContent(30,45.71463);
   9->SetBinContent(31,43.07725);
   9->SetBinContent(32,40.00031);
   9->SetBinContent(33,41.319);
   9->SetBinContent(34,38.68161);
   9->SetBinContent(35,33.84641);
   9->SetBinContent(36,48.79158);
   9->SetBinContent(37,34.72554);
   9->SetBinContent(38,28.13208);
   9->SetBinContent(39,29.45078);
   9->SetBinContent(40,35.60467);
   9->SetBinContent(41,36.04423);
   9->SetBinContent(42,33.84641);
   9->SetBinContent(43,40.43987);
   9->SetBinContent(44,49.23114);
   9->SetBinContent(45,46.1542);
   9->SetBinContent(46,63.73675);
   9->SetBinContent(47,92.30864);
   9->SetBinContent(48,116.9244);
   9->SetBinContent(49,166.5949);
   9->SetBinContent(50,341.5427);
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
   10->SetBinContent(1,7702.27);
   10->SetBinContent(2,4633.801);
   10->SetBinContent(3,14018.47);
   10->SetBinContent(4,16586.1);
   10->SetBinContent(5,16832.01);
   10->SetBinContent(6,12700.17);
   10->SetBinContent(7,11436.87);
   10->SetBinContent(8,7032.061);
   10->SetBinContent(9,6511.434);
   10->SetBinContent(10,4713.248);
   10->SetBinContent(11,3334.36);
   10->SetBinContent(12,3872.899);
   10->SetBinContent(13,2453.299);
   10->SetBinContent(14,2634.171);
   10->SetBinContent(15,2823.49);
   10->SetBinContent(16,1693.551);
   10->SetBinContent(17,1140.098);
   10->SetBinContent(18,1000.934);
   10->SetBinContent(19,935.137);
   10->SetBinContent(20,882.15);
   10->SetBinContent(21,818.6819);
   10->SetBinContent(22,736.29);
   10->SetBinContent(23,743.8596);
   10->SetBinContent(24,647.7841);
   10->SetBinContent(25,630.8981);
   10->SetBinContent(26,621.5817);
   10->SetBinContent(27,559.2783);
   10->SetBinContent(28,579.0756);
   10->SetBinContent(29,536.5695);
   10->SetBinContent(30,531.0379);
   10->SetBinContent(31,548.7973);
   10->SetBinContent(32,492.6077);
   10->SetBinContent(33,492.6077);
   10->SetBinContent(34,496.9748);
   10->SetBinContent(35,488.2406);
   10->SetBinContent(36,503.0887);
   10->SetBinContent(37,502.5064);
   10->SetBinContent(38,503.9621);
   10->SetBinContent(39,502.7975);
   10->SetBinContent(40,528.4177);
   10->SetBinContent(41,553.4555);
   10->SetBinContent(42,565.101);
   10->SetBinContent(43,645.7462);
   10->SetBinContent(44,767.4417);
   10->SetBinContent(45,856.821);
   10->SetBinContent(46,1044.023);
   10->SetBinContent(47,1380.578);
   10->SetBinContent(48,1937.524);
   10->SetBinContent(49,2897.761);
   10->SetBinContent(50,6673.529);
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
   11->SetBinContent(1,3082.603);
   11->SetBinContent(2,1281.875);
   11->SetBinContent(3,3204.686);
   11->SetBinContent(4,4639.165);
   11->SetBinContent(5,5127.501);
   11->SetBinContent(6,3815.101);
   11->SetBinContent(7,2929.999);
   11->SetBinContent(8,1709.167);
   11->SetBinContent(9,1403.958);
   11->SetBinContent(10,1342.917);
   11->SetBinContent(11,640.9374);
   11->SetBinContent(12,1098.75);
   11->SetBinContent(13,244.1666);
   11->SetBinContent(14,183.125);
   11->SetBinContent(15,427.2917);
   11->SetBinContent(16,152.6042);
   11->SetBinContent(17,183.125);
   11->SetBinContent(18,61.04166);
   11->SetBinContent(19,91.5625);
   11->SetBinContent(20,30.52083);
   11->SetBinContent(21,61.04166);
   11->SetBinContent(22,61.04166);
   11->SetBinContent(23,61.04166);
   11->SetBinContent(27,122.0833);
   11->SetBinContent(31,30.52083);
   11->SetBinContent(33,30.52083);
   11->SetBinContent(34,30.52083);
   11->SetBinContent(46,30.52083);
   11->SetBinContent(49,30.52083);
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
   12->SetBinContent(1,1419.719);
   12->SetBinContent(2,589.226);
   12->SetBinContent(3,1434.754);
   12->SetBinContent(4,1528.542);
   12->SetBinContent(5,1852.148);
   12->SetBinContent(6,1305.168);
   12->SetBinContent(7,1466.255);
   12->SetBinContent(8,820.4753);
   12->SetBinContent(9,841.9536);
   12->SetBinContent(10,527.6549);
   12->SetBinContent(11,343.6577);
   12->SetBinContent(12,514.052);
   12->SetBinContent(13,249.8691);
   12->SetBinContent(14,274.9272);
   12->SetBinContent(15,285.6664);
   12->SetBinContent(16,128.1563);
   12->SetBinContent(17,85.19888);
   12->SetBinContent(18,75.17547);
   12->SetBinContent(19,65.86802);
   12->SetBinContent(20,68.01589);
   12->SetBinContent(21,55.84461);
   12->SetBinContent(22,50.83291);
   12->SetBinContent(23,47.96908);
   12->SetBinContent(24,47.25312);
   12->SetBinContent(25,34.36588);
   12->SetBinContent(26,43.67333);
   12->SetBinContent(27,40.8095);
   12->SetBinContent(28,42.95737);
   12->SetBinContent(29,37.22971);
   12->SetBinContent(30,31.50205);
   12->SetBinContent(31,37.22971);
   12->SetBinContent(32,37.22971);
   12->SetBinContent(33,23.62654);
   12->SetBinContent(34,28.63823);
   12->SetBinContent(35,32.93397);
   12->SetBinContent(36,25.05845);
   12->SetBinContent(37,23.62654);
   12->SetBinContent(38,32.21801);
   12->SetBinContent(39,27.20632);
   12->SetBinContent(40,37.22971);
   12->SetBinContent(41,31.50205);
   12->SetBinContent(42,45.82121);
   12->SetBinContent(43,35.7978);
   12->SetBinContent(44,47.25312);
   12->SetBinContent(45,61.57227);
   12->SetBinContent(46,57.99249);
   12->SetBinContent(47,65.86802);
   12->SetBinContent(48,98.08611);
   12->SetBinContent(49,158.9425);
   12->SetBinContent(50,363.7041);
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
   13->SetBinContent(1,23353.01);
   13->SetBinContent(2,14927.14);
   13->SetBinContent(3,43013.44);
   13->SetBinContent(4,55340.22);
   13->SetBinContent(5,56380.45);
   13->SetBinContent(6,41609.12);
   13->SetBinContent(7,39216.59);
   13->SetBinContent(8,21480.59);
   13->SetBinContent(9,20544.38);
   13->SetBinContent(10,14094.97);
   13->SetBinContent(11,7905.689);
   13->SetBinContent(12,9466.014);
   13->SetBinContent(13,5669.206);
   13->SetBinContent(14,5669.206);
   13->SetBinContent(15,6657.419);
   13->SetBinContent(16,2444.517);
   13->SetBinContent(17,1352.287);
   13->SetBinContent(18,936.1986);
   13->SetBinContent(19,936.1986);
   13->SetBinContent(20,572.1213);
   13->SetBinContent(21,520.1102);
   13->SetBinContent(22,624.1323);
   13->SetBinContent(23,572.1213);
   13->SetBinContent(24,520.1102);
   13->SetBinContent(25,364.0772);
   13->SetBinContent(26,260.0551);
   13->SetBinContent(27,416.0882);
   13->SetBinContent(28,104.0221);
   13->SetBinContent(29,468.0992);
   13->SetBinContent(30,312.0662);
   13->SetBinContent(31,104.0221);
   13->SetBinContent(32,104.0221);
   13->SetBinContent(33,52.01103);
   13->SetBinContent(34,312.0662);
   13->SetBinContent(35,104.0221);
   13->SetBinContent(36,208.0441);
   13->SetBinContent(37,156.0331);
   13->SetBinContent(39,52.01103);
   13->SetBinContent(40,156.0331);
   13->SetBinContent(46,104.0221);
   13->SetBinContent(47,52.01103);
   13->SetBinContent(48,104.0221);
   13->SetBinContent(49,208.0441);
   13->SetBinContent(50,156.0331);
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
   14->SetBinContent(1,20471.03);
   14->SetBinContent(2,481.238);
   14->SetBinContent(3,2128.547);
   14->SetBinContent(4,4062.766);
   14->SetBinContent(5,5404.654);
   14->SetBinContent(6,4895.663);
   14->SetBinContent(7,6968.647);
   14->SetBinContent(8,4266.364);
   14->SetBinContent(9,5265.838);
   14->SetBinContent(10,3637.053);
   14->SetBinContent(11,2989.228);
   14->SetBinContent(12,3424.196);
   14->SetBinContent(13,2147.056);
   14->SetBinContent(14,2711.589);
   14->SetBinContent(15,3692.581);
   14->SetBinContent(16,1378.93);
   14->SetBinContent(17,462.7289);
   14->SetBinContent(18,397.9468);
   14->SetBinContent(19,314.6556);
   14->SetBinContent(20,249.8736);
   14->SetBinContent(21,249.8736);
   14->SetBinContent(22,166.5824);
   14->SetBinContent(23,249.8736);
   14->SetBinContent(24,231.3644);
   14->SetBinContent(25,194.3461);
   14->SetBinContent(26,185.0915);
   14->SetBinContent(27,83.29119);
   14->SetBinContent(28,185.0915);
   14->SetBinContent(29,101.8003);
   14->SetBinContent(30,138.8186);
   14->SetBinContent(31,138.8186);
   14->SetBinContent(32,92.54577);
   14->SetBinContent(33,185.0915);
   14->SetBinContent(34,222.1098);
   14->SetBinContent(35,157.3278);
   14->SetBinContent(36,120.3095);
   14->SetBinContent(37,157.3278);
   14->SetBinContent(38,120.3095);
   14->SetBinContent(39,120.3095);
   14->SetBinContent(40,212.8553);
   14->SetBinContent(41,101.8003);
   14->SetBinContent(42,194.3461);
   14->SetBinContent(43,166.5824);
   14->SetBinContent(44,138.8186);
   14->SetBinContent(45,185.0915);
   14->SetBinContent(46,360.9285);
   14->SetBinContent(47,444.2197);
   14->SetBinContent(48,518.2563);
   14->SetBinContent(49,657.075);
   14->SetBinContent(50,1564.02);
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
   15->SetBinContent(1,3814.366);
   15->SetBinContent(2,420.7013);
   15->SetBinContent(3,1991.32);
   15->SetBinContent(4,2131.554);
   15->SetBinContent(5,2776.632);
   15->SetBinContent(6,2187.647);
   15->SetBinContent(7,1907.179);
   15->SetBinContent(8,1402.338);
   15->SetBinContent(9,1177.964);
   15->SetBinContent(10,1009.683);
   15->SetBinContent(11,673.1221);
   15->SetBinContent(12,1037.73);
   15->SetBinContent(13,645.0754);
   15->SetBinContent(14,981.6364);
   15->SetBinContent(15,1037.73);
   15->SetBinContent(16,420.7013);
   15->SetBinContent(17,252.4208);
   15->SetBinContent(18,252.4208);
   15->SetBinContent(19,140.2338);
   15->SetBinContent(20,112.187);
   15->SetBinContent(21,168.2805);
   15->SetBinContent(22,112.187);
   15->SetBinContent(23,112.187);
   15->SetBinContent(24,84.14027);
   15->SetBinContent(25,56.09351);
   15->SetBinContent(26,84.14027);
   15->SetBinContent(27,56.09351);
   15->SetBinContent(28,28.04676);
   15->SetBinContent(29,140.2338);
   15->SetBinContent(30,84.14027);
   15->SetBinContent(31,56.09351);
   15->SetBinContent(32,112.187);
   15->SetBinContent(33,28.04676);
   15->SetBinContent(34,84.14027);
   15->SetBinContent(35,28.04676);
   15->SetBinContent(36,112.187);
   15->SetBinContent(38,56.09351);
   15->SetBinContent(39,84.14027);
   15->SetBinContent(40,28.04676);
   15->SetBinContent(41,28.04676);
   15->SetBinContent(42,140.2338);
   15->SetBinContent(43,140.2338);
   15->SetBinContent(45,28.04676);
   15->SetBinContent(46,84.14027);
   15->SetBinContent(47,112.187);
   15->SetBinContent(48,168.2805);
   15->SetBinContent(49,336.5611);
   15->SetBinContent(50,588.9819);
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
   16->SetBinContent(1,3493.919);
   16->SetBinContent(2,233.6353);
   16->SetBinContent(3,700.9062);
   16->SetBinContent(4,998.2609);
   16->SetBinContent(5,1295.614);
   16->SetBinContent(6,1104.459);
   16->SetBinContent(7,1040.74);
   16->SetBinContent(8,605.3279);
   16->SetBinContent(9,700.9062);
   16->SetBinContent(10,647.8071);
   16->SetBinContent(11,318.5935);
   16->SetBinContent(12,562.8486);
   16->SetBinContent(13,233.6353);
   16->SetBinContent(14,276.1144);
   16->SetBinContent(15,318.5935);
   16->SetBinContent(16,180.5364);
   16->SetBinContent(17,31.85936);
   16->SetBinContent(18,53.09894);
   16->SetBinContent(19,21.23957);
   16->SetBinContent(20,53.09894);
   16->SetBinContent(21,10.61979);
   16->SetBinContent(22,42.47915);
   16->SetBinContent(23,21.23957);
   16->SetBinContent(24,21.23957);
   16->SetBinContent(26,10.61979);
   16->SetBinContent(29,21.23957);
   16->SetBinContent(45,10.61979);
   16->SetBinContent(49,10.61979);
   16->SetBinContent(50,10.61979);
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
   17->SetBinContent(1,15813.33);
   17->SetBinContent(2,2007.078);
   17->SetBinContent(3,5169.752);
   17->SetBinContent(4,5899.602);
   17->SetBinContent(5,6507.81);
   17->SetBinContent(6,5534.677);
   17->SetBinContent(7,5777.96);
   17->SetBinContent(8,4683.186);
   17->SetBinContent(9,4683.186);
   17->SetBinContent(10,2858.566);
   17->SetBinContent(11,2676.105);
   17->SetBinContent(12,3345.131);
   17->SetBinContent(13,1277.232);
   17->SetBinContent(14,2432.823);
   17->SetBinContent(15,3345.131);
   17->SetBinContent(16,1155.591);
   17->SetBinContent(17,182.4617);
   17->SetBinContent(18,486.5645);
   17->SetBinContent(19,243.2822);
   17->SetBinContent(20,182.4617);
   17->SetBinContent(21,243.2822);
   17->SetBinContent(22,182.4617);
   17->SetBinContent(23,121.6411);
   17->SetBinContent(24,364.9234);
   17->SetBinContent(25,121.6411);
   17->SetBinContent(26,182.4617);
   17->SetBinContent(27,182.4617);
   17->SetBinContent(28,182.4617);
   17->SetBinContent(29,60.82056);
   17->SetBinContent(30,243.2822);
   17->SetBinContent(31,60.82056);
   17->SetBinContent(32,243.2822);
   17->SetBinContent(34,121.6411);
   17->SetBinContent(35,182.4617);
   17->SetBinContent(37,182.4617);
   17->SetBinContent(38,60.82056);
   17->SetBinContent(40,60.82056);
   17->SetBinContent(41,243.2822);
   17->SetBinContent(43,182.4617);
   17->SetBinContent(44,243.2822);
   17->SetBinContent(45,121.6411);
   17->SetBinContent(46,364.9234);
   17->SetBinContent(47,304.1028);
   17->SetBinContent(48,486.5645);
   17->SetBinContent(49,304.1028);
   17->SetBinContent(50,1398.873);
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
