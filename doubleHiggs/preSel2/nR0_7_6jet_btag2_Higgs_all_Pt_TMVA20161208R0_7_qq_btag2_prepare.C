{
//=========Macro generated from canvas: canvas1/
//=========  (Mon Aug 14 14:48:23 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-134.9206,-4.002563,658.7302,8.727452);
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
   
   TH1F *THStack_stack_3 = new TH1F("THStack_stack_3","",50,0,500);
   THStack_stack_3->SetMinimum(0.01944642);
   THStack_stack_3->SetMaximum(5.117418e+07);
   THStack_stack_3->SetDirectory(0);
   THStack_stack_3->SetStats(0);
   THStack_stack_3->SetLineWidth(2);
   THStack_stack_3->SetMarkerSize(1.2);
   THStack_stack_3->GetXaxis()->SetTitle("P_{T,HH} / GeV");
   THStack_stack_3->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_3->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_3->GetXaxis()->SetLabelColor(ci);
   THStack_stack_3->GetXaxis()->SetLabelFont(42);
   THStack_stack_3->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_3->GetXaxis()->SetLabelSize(0.03);
   THStack_stack_3->GetXaxis()->SetTitleSize(0.03);
   THStack_stack_3->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   THStack_stack_3->GetXaxis()->SetTitleColor(ci);
   THStack_stack_3->GetXaxis()->SetTitleFont(42);
   THStack_stack_3->GetYaxis()->SetTitle("Number of events");
   THStack_stack_3->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_3->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_3->GetYaxis()->SetLabelColor(ci);
   THStack_stack_3->GetYaxis()->SetLabelFont(42);
   THStack_stack_3->GetYaxis()->SetLabelOffset(0.0015);
   THStack_stack_3->GetYaxis()->SetLabelSize(0.03);
   THStack_stack_3->GetYaxis()->SetTitleSize(0.03);
   THStack_stack_3->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   THStack_stack_3->GetYaxis()->SetTitleColor(ci);
   THStack_stack_3->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_3->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_3->GetZaxis()->SetLabelColor(ci);
   THStack_stack_3->GetZaxis()->SetLabelFont(42);
   THStack_stack_3->GetZaxis()->SetLabelOffset(0.0015);
   THStack_stack_3->GetZaxis()->SetLabelSize(0.03);
   THStack_stack_3->GetZaxis()->SetTitleSize(0.03);
   THStack_stack_3->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_3->GetZaxis()->SetTitleColor(ci);
   THStack_stack_3->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_3);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,500);
   0->SetBinContent(1,0.5533069);
   0->SetBinContent(2,1.669322);
   0->SetBinContent(3,2.521881);
   0->SetBinContent(4,3.254009);
   0->SetBinContent(5,3.758405);
   0->SetBinContent(6,3.66242);
   0->SetBinContent(7,3.543849);
   0->SetBinContent(8,3.496797);
   0->SetBinContent(9,3.197547);
   0->SetBinContent(10,2.898297);
   0->SetBinContent(11,2.367551);
   0->SetBinContent(12,2.169933);
   0->SetBinContent(13,1.819878);
   0->SetBinContent(14,1.594043);
   0->SetBinContent(15,1.441605);
   0->SetBinContent(16,1.127318);
   0->SetBinContent(17,0.9936988);
   0->SetBinContent(18,0.8883059);
   0->SetBinContent(19,0.7396266);
   0->SetBinContent(20,0.5965933);
   0->SetBinContent(21,0.5909473);
   0->SetBinContent(22,0.4968465);
   0->SetBinContent(23,0.4893185);
   0->SetBinContent(24,0.4065111);
   0->SetBinContent(25,0.3011198);
   0->SetBinContent(26,0.2691261);
   0->SetBinContent(27,0.276654);
   0->SetBinContent(28,0.2408962);
   0->SetBinContent(29,0.1674981);
   0->SetBinContent(30,0.2051382);
   0->SetBinContent(31,0.1731441);
   0->SetBinContent(32,0.1656161);
   0->SetBinContent(33,0.1524421);
   0->SetBinContent(34,0.1129201);
   0->SetBinContent(35,0.1035101);
   0->SetBinContent(36,0.09786406);
   0->SetBinContent(37,0.09598206);
   0->SetBinContent(38,0.1053921);
   0->SetBinContent(39,0.09033605);
   0->SetBinContent(40,0.08280805);
   0->SetBinContent(41,0.06398803);
   0->SetBinContent(42,0.07904404);
   0->SetBinContent(43,0.08280805);
   0->SetBinContent(44,0.06398803);
   0->SetBinContent(45,0.05081402);
   0->SetBinContent(46,0.06587003);
   0->SetBinContent(47,0.04516801);
   0->SetBinContent(48,0.06775203);
   0->SetBinContent(49,0.04893202);
   0->SetBinContent(50,0.03764001);
   0->SetBinContent(51,0.3839273);
   0->SetEntries(25456);
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
   0->GetXaxis()->SetLabelSize(0.03);
   0->GetXaxis()->SetTitleSize(0.03);
   0->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   0->GetXaxis()->SetTitleColor(ci);
   0->GetXaxis()->SetTitleFont(42);
   0->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   0->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   0->GetYaxis()->SetLabelColor(ci);
   0->GetYaxis()->SetLabelFont(42);
   0->GetYaxis()->SetLabelOffset(0.0015);
   0->GetYaxis()->SetLabelSize(0.03);
   0->GetYaxis()->SetTitleSize(0.03);
   0->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   0->GetYaxis()->SetTitleColor(ci);
   0->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   0->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   0->GetZaxis()->SetLabelColor(ci);
   0->GetZaxis()->SetLabelFont(42);
   0->GetZaxis()->SetLabelOffset(0.0015);
   0->GetZaxis()->SetLabelSize(0.03);
   0->GetZaxis()->SetTitleSize(0.03);
   0->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   0->GetZaxis()->SetTitleColor(ci);
   0->GetZaxis()->SetTitleFont(42);
   THStack->Add(0,"");
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,500);
   1->SetBinContent(1,1.4943);
   1->SetBinContent(2,4.492415);
   1->SetBinContent(3,6.88077);
   1->SetBinContent(4,8.429609);
   1->SetBinContent(5,9.577385);
   1->SetBinContent(6,9.946178);
   1->SetBinContent(7,9.577385);
   1->SetBinContent(8,9.093814);
   1->SetBinContent(9,7.979902);
   1->SetBinContent(10,7.364463);
   1->SetBinContent(11,6.429071);
   1->SetBinContent(12,5.474859);
   1->SetBinContent(13,4.665566);
   1->SetBinContent(14,3.959788);
   1->SetBinContent(15,3.374462);
   1->SetBinContent(16,2.954759);
   1->SetBinContent(17,2.363787);
   1->SetBinContent(18,1.993018);
   1->SetBinContent(19,1.804823);
   1->SetBinContent(20,1.533821);
   1->SetBinContent(21,1.330569);
   1->SetBinContent(22,1.168721);
   1->SetBinContent(23,1.001227);
   1->SetBinContent(24,0.8638397);
   1->SetBinContent(25,0.8581936);
   1->SetBinContent(26,0.675638);
   1->SetBinContent(27,0.5947113);
   1->SetBinContent(28,0.560835);
   1->SetBinContent(29,0.5231947);
   1->SetBinContent(30,0.5156666);
   1->SetBinContent(31,0.4479148);
   1->SetBinContent(32,0.3801633);
   1->SetBinContent(33,0.3293496);
   1->SetBinContent(34,0.3237037);
   1->SetBinContent(35,0.2917099);
   1->SetBinContent(36,0.2634801);
   1->SetBinContent(37,0.2615981);
   1->SetBinContent(38,0.2296042);
   1->SetBinContent(39,0.1994922);
   1->SetBinContent(40,0.2239582);
   1->SetBinContent(41,0.1769081);
   1->SetBinContent(42,0.1712621);
   1->SetBinContent(43,0.1580881);
   1->SetBinContent(44,0.1562061);
   1->SetBinContent(45,0.1505601);
   1->SetBinContent(46,0.1260941);
   1->SetBinContent(47,0.1129201);
   1->SetBinContent(48,0.1072741);
   1->SetBinContent(49,0.1242121);
   1->SetBinContent(50,0.08845405);
   1->SetBinContent(51,0.9522945);
   1->SetEntries(65227);
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
   1->GetXaxis()->SetLabelSize(0.03);
   1->GetXaxis()->SetTitleSize(0.03);
   1->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   1->GetXaxis()->SetTitleColor(ci);
   1->GetXaxis()->SetTitleFont(42);
   1->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   1->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   1->GetYaxis()->SetLabelColor(ci);
   1->GetYaxis()->SetLabelFont(42);
   1->GetYaxis()->SetLabelOffset(0.0015);
   1->GetYaxis()->SetLabelSize(0.03);
   1->GetYaxis()->SetTitleSize(0.03);
   1->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   1->GetYaxis()->SetTitleColor(ci);
   1->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   1->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   1->GetZaxis()->SetLabelColor(ci);
   1->GetZaxis()->SetLabelFont(42);
   1->GetZaxis()->SetLabelOffset(0.0015);
   1->GetZaxis()->SetLabelSize(0.03);
   1->GetZaxis()->SetTitleSize(0.03);
   1->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   1->GetZaxis()->SetTitleColor(ci);
   1->GetZaxis()->SetTitleFont(42);
   THStack->Add(1,"");
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,500);
   2->SetBinContent(1,1.204478);
   2->SetBinContent(2,3.323646);
   2->SetBinContent(3,5.352524);
   2->SetBinContent(4,6.6361);
   2->SetBinContent(5,7.323058);
   2->SetBinContent(6,7.513147);
   2->SetBinContent(7,7.213897);
   2->SetBinContent(8,6.769727);
   2->SetBinContent(9,6.254038);
   2->SetBinContent(10,5.309236);
   2->SetBinContent(11,4.522528);
   2->SetBinContent(12,4.004957);
   2->SetBinContent(13,3.575844);
   2->SetBinContent(14,3.02816);
   2->SetBinContent(15,2.495532);
   2->SetBinContent(16,2.177461);
   2->SetBinContent(17,1.737072);
   2->SetBinContent(18,1.479244);
   2->SetBinContent(19,1.315514);
   2->SetBinContent(20,1.155547);
   2->SetBinContent(21,0.9861708);
   2->SetBinContent(22,0.8450195);
   2->SetBinContent(23,0.7772669);
   2->SetBinContent(24,0.7001042);
   2->SetBinContent(25,0.6323516);
   2->SetBinContent(26,0.4987285);
   2->SetBinContent(27,0.4686167);
   2->SetBinContent(28,0.4328589);
   2->SetBinContent(29,0.3782813);
   2->SetBinContent(30,0.3349956);
   2->SetBinContent(31,0.2898279);
   2->SetBinContent(32,0.3142937);
   2->SetBinContent(33,0.2540702);
   2->SetBinContent(34,0.2239582);
   2->SetBinContent(35,0.2446602);
   2->SetBinContent(36,0.2408962);
   2->SetBinContent(37,0.1882001);
   2->SetBinContent(38,0.1957282);
   2->SetBinContent(39,0.1373861);
   2->SetBinContent(40,0.1693801);
   2->SetBinContent(41,0.1750261);
   2->SetBinContent(42,0.1524421);
   2->SetBinContent(43,0.1430321);
   2->SetBinContent(44,0.1035101);
   2->SetBinContent(45,0.1091561);
   2->SetBinContent(46,0.1053921);
   2->SetBinContent(47,0.09974606);
   2->SetBinContent(48,0.06210603);
   2->SetBinContent(49,0.09033605);
   2->SetBinContent(50,0.08280805);
   2->SetBinContent(51,0.7170424);
   2->SetEntries(49173);
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
   2->GetXaxis()->SetLabelSize(0.03);
   2->GetXaxis()->SetTitleSize(0.03);
   2->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   2->GetXaxis()->SetTitleColor(ci);
   2->GetXaxis()->SetTitleFont(42);
   2->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   2->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   2->GetYaxis()->SetLabelColor(ci);
   2->GetYaxis()->SetLabelFont(42);
   2->GetYaxis()->SetLabelOffset(0.0015);
   2->GetYaxis()->SetLabelSize(0.03);
   2->GetYaxis()->SetTitleSize(0.03);
   2->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   2->GetYaxis()->SetTitleColor(ci);
   2->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   2->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   2->GetZaxis()->SetLabelColor(ci);
   2->GetZaxis()->SetLabelFont(42);
   2->GetZaxis()->SetLabelOffset(0.0015);
   2->GetZaxis()->SetLabelSize(0.03);
   2->GetZaxis()->SetTitleSize(0.03);
   2->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   2->GetZaxis()->SetTitleColor(ci);
   2->GetZaxis()->SetTitleFont(42);
   THStack->Add(2,"");
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,500);
   3->SetBinContent(1,5.517796);
   3->SetBinContent(2,15.35859);
   3->SetBinContent(3,24.68615);
   3->SetBinContent(4,32.51822);
   3->SetBinContent(5,39.15533);
   3->SetBinContent(6,42.53534);
   3->SetBinContent(7,42.89042);
   3->SetBinContent(8,45.32812);
   3->SetBinContent(9,43.33426);
   3->SetBinContent(10,42.29635);
   3->SetBinContent(11,38.74563);
   3->SetBinContent(12,36.32158);
   3->SetBinContent(13,33.37175);
   3->SetBinContent(14,29.56156);
   3->SetBinContent(15,25.63528);
   3->SetBinContent(16,24.41301);
   3->SetBinContent(17,20.99886);
   3->SetBinContent(18,17.50959);
   3->SetBinContent(19,15.67956);
   3->SetBinContent(20,14.36835);
   3->SetBinContent(21,12.62688);
   3->SetBinContent(22,10.46884);
   3->SetBinContent(23,9.382984);
   3->SetBinContent(24,8.201522);
   3->SetBinContent(25,6.692347);
   3->SetBinContent(26,5.995811);
   3->SetBinContent(27,5.347076);
   3->SetBinContent(28,4.315929);
   3->SetBinContent(29,3.872054);
   3->SetBinContent(30,3.359877);
   3->SetBinContent(31,2.997939);
   3->SetBinContent(32,2.663317);
   3->SetBinContent(33,2.267234);
   3->SetBinContent(34,1.843834);
   3->SetBinContent(35,1.597989);
   3->SetBinContent(36,1.529699);
   3->SetBinContent(37,1.358974);
   3->SetBinContent(38,1.201906);
   3->SetBinContent(39,1.058497);
   3->SetBinContent(40,0.9082581);
   3->SetBinContent(41,0.6624132);
   3->SetBinContent(42,0.5668069);
   3->SetBinContent(43,0.600952);
   3->SetBinContent(44,0.6214391);
   3->SetBinContent(45,0.4916877);
   3->SetBinContent(46,0.4438847);
   3->SetBinContent(47,0.4848587);
   3->SetBinContent(48,0.4029108);
   3->SetBinContent(49,0.2253569);
   3->SetBinContent(50,0.2936469);
   3->SetBinContent(51,2.000902);
   3->SetEntries(100269);
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
   3->GetXaxis()->SetLabelSize(0.03);
   3->GetXaxis()->SetTitleSize(0.03);
   3->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   3->GetXaxis()->SetTitleColor(ci);
   3->GetXaxis()->SetTitleFont(42);
   3->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   3->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   3->GetYaxis()->SetLabelColor(ci);
   3->GetYaxis()->SetLabelFont(42);
   3->GetYaxis()->SetLabelOffset(0.0015);
   3->GetYaxis()->SetLabelSize(0.03);
   3->GetYaxis()->SetTitleSize(0.03);
   3->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   3->GetYaxis()->SetTitleColor(ci);
   3->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   3->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   3->GetZaxis()->SetLabelColor(ci);
   3->GetZaxis()->SetLabelFont(42);
   3->GetZaxis()->SetLabelOffset(0.0015);
   3->GetZaxis()->SetLabelSize(0.03);
   3->GetZaxis()->SetTitleSize(0.03);
   3->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   3->GetZaxis()->SetTitleColor(ci);
   3->GetZaxis()->SetTitleFont(42);
   THStack->Add(3,"");
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,500);
   4->SetBinContent(1,6.891849);
   4->SetBinContent(2,18.95039);
   4->SetBinContent(3,30.00789);
   4->SetBinContent(4,38.29839);
   4->SetBinContent(5,44.41106);
   4->SetBinContent(6,47.66203);
   4->SetBinContent(7,48.96136);
   4->SetBinContent(8,50.10288);
   4->SetBinContent(9,48.36167);
   4->SetBinContent(10,44.632);
   4->SetBinContent(11,41.44415);
   4->SetBinContent(12,38.04063);
   4->SetBinContent(13,33.95325);
   4->SetBinContent(14,30.97056);
   4->SetBinContent(15,27.63542);
   4->SetBinContent(16,24.50019);
   4->SetBinContent(17,21.63849);
   4->SetBinContent(18,18.07715);
   4->SetBinContent(19,15.39947);
   4->SetBinContent(20,13.79999);
   4->SetBinContent(21,11.86905);
   4->SetBinContent(22,10.20644);
   4->SetBinContent(23,9.606642);
   4->SetBinContent(24,8.096614);
   4->SetBinContent(25,6.644584);
   4->SetBinContent(26,5.760746);
   4->SetBinContent(27,4.913733);
   4->SetBinContent(28,4.398161);
   4->SetBinContent(29,3.488017);
   4->SetBinContent(30,3.645846);
   4->SetBinContent(31,2.914574);
   4->SetBinContent(32,2.309566);
   4->SetBinContent(33,2.283261);
   4->SetBinContent(34,1.909734);
   4->SetBinContent(35,1.630904);
   4->SetBinContent(36,1.283682);
   4->SetBinContent(37,1.215289);
   4->SetBinContent(38,1.057461);
   4->SetBinContent(39,0.9154145);
   4->SetBinContent(40,0.8628045);
   4->SetBinContent(41,0.6576253);
   4->SetBinContent(42,0.5944933);
   4->SetBinContent(43,0.7102354);
   4->SetBinContent(44,0.5524052);
   4->SetBinContent(45,0.5418832);
   4->SetBinContent(46,0.4629682);
   4->SetBinContent(47,0.3998362);
   4->SetBinContent(48,0.3367041);
   4->SetBinContent(49,0.3367041);
   4->SetBinContent(50,0.199918);
   4->SetBinContent(51,2.246434);
   4->SetEntries(139862);
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
   4->GetXaxis()->SetLabelSize(0.03);
   4->GetXaxis()->SetTitleSize(0.03);
   4->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   4->GetXaxis()->SetTitleColor(ci);
   4->GetXaxis()->SetTitleFont(42);
   4->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   4->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   4->GetYaxis()->SetLabelColor(ci);
   4->GetYaxis()->SetLabelFont(42);
   4->GetYaxis()->SetLabelOffset(0.0015);
   4->GetYaxis()->SetLabelSize(0.03);
   4->GetYaxis()->SetTitleSize(0.03);
   4->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   4->GetYaxis()->SetTitleColor(ci);
   4->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   4->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   4->GetZaxis()->SetLabelColor(ci);
   4->GetZaxis()->SetLabelFont(42);
   4->GetZaxis()->SetLabelOffset(0.0015);
   4->GetZaxis()->SetLabelSize(0.03);
   4->GetZaxis()->SetTitleSize(0.03);
   4->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   4->GetZaxis()->SetTitleColor(ci);
   4->GetZaxis()->SetTitleFont(42);
   THStack->Add(4,"");
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,500);
   5->SetBinContent(1,12.36371);
   5->SetBinContent(2,35.76522);
   5->SetBinContent(3,58.24928);
   5->SetBinContent(4,73.99622);
   5->SetBinContent(5,87.74534);
   5->SetBinContent(6,98.44461);
   5->SetBinContent(7,100.7258);
   5->SetBinContent(8,102.821);
   5->SetBinContent(9,99.91994);
   5->SetBinContent(10,96.8329);
   5->SetBinContent(11,91.8366);
   5->SetBinContent(12,82.15395);
   5->SetBinContent(13,77.34361);
   5->SetBinContent(14,67.25183);
   5->SetBinContent(15,62.16818);
   5->SetBinContent(16,53.75991);
   5->SetBinContent(17,48.53885);
   5->SetBinContent(18,42.17683);
   5->SetBinContent(19,36.89376);
   5->SetBinContent(20,32.23077);
   5->SetBinContent(21,29.26679);
   5->SetBinContent(22,24.90143);
   5->SetBinContent(23,21.92505);
   5->SetBinContent(24,17.75812);
   5->SetBinContent(25,16.56757);
   5->SetBinContent(26,14.67023);
   5->SetBinContent(27,11.76848);
   5->SetBinContent(28,10.62763);
   5->SetBinContent(29,9.548772);
   5->SetBinContent(30,7.552253);
   5->SetBinContent(31,6.696577);
   5->SetBinContent(32,6.237736);
   5->SetBinContent(33,5.059631);
   5->SetBinContent(34,4.662796);
   5->SetBinContent(35,4.092345);
   5->SetBinContent(36,3.869126);
   5->SetBinContent(37,3.187065);
   5->SetBinContent(38,2.926642);
   5->SetBinContent(39,2.194977);
   5->SetBinContent(40,2.219779);
   5->SetBinContent(41,1.860148);
   5->SetBinContent(42,1.748539);
   5->SetBinContent(43,1.587326);
   5->SetBinContent(44,1.2525);
   5->SetBinContent(45,1.202896);
   5->SetBinContent(46,1.091287);
   5->SetBinContent(47,1.054084);
   5->SetBinContent(48,0.6944554);
   5->SetBinContent(49,0.8308663);
   5->SetBinContent(50,0.7440594);
   5->SetBinContent(51,4.439576);
   5->SetEntries(127691);
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
   5->GetXaxis()->SetLabelSize(0.03);
   5->GetXaxis()->SetTitleSize(0.03);
   5->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   5->GetXaxis()->SetTitleColor(ci);
   5->GetXaxis()->SetTitleFont(42);
   5->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   5->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   5->GetYaxis()->SetLabelColor(ci);
   5->GetYaxis()->SetLabelFont(42);
   5->GetYaxis()->SetLabelOffset(0.0015);
   5->GetYaxis()->SetLabelSize(0.03);
   5->GetYaxis()->SetTitleSize(0.03);
   5->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   5->GetYaxis()->SetTitleColor(ci);
   5->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   5->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   5->GetZaxis()->SetLabelColor(ci);
   5->GetZaxis()->SetLabelFont(42);
   5->GetZaxis()->SetLabelOffset(0.0015);
   5->GetZaxis()->SetLabelSize(0.03);
   5->GetZaxis()->SetTitleSize(0.03);
   5->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   5->GetZaxis()->SetTitleColor(ci);
   5->GetZaxis()->SetTitleFont(42);
   THStack->Add(5,"");
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,500);
   6->SetBinContent(1,1630.473);
   6->SetBinContent(2,4345.232);
   6->SetBinContent(3,5949.031);
   6->SetBinContent(4,6345.125);
   6->SetBinContent(5,6008.979);
   6->SetBinContent(6,5149.607);
   6->SetBinContent(7,4301.129);
   6->SetBinContent(8,3439.299);
   6->SetBinContent(9,2724.743);
   6->SetBinContent(10,2116.41);
   6->SetBinContent(11,1658.642);
   6->SetBinContent(12,1299.959);
   6->SetBinContent(13,994.1984);
   6->SetBinContent(14,776.6655);
   6->SetBinContent(15,612.2819);
   6->SetBinContent(16,485.4826);
   6->SetBinContent(17,374.9318);
   6->SetBinContent(18,293.5373);
   6->SetBinContent(19,240.5397);
   6->SetBinContent(20,191.6423);
   6->SetBinContent(21,151.5524);
   6->SetBinContent(22,124.5981);
   6->SetBinContent(23,99.99747);
   6->SetBinContent(24,84.05265);
   6->SetBinContent(25,63.55216);
   6->SetBinContent(26,57.02237);
   6->SetBinContent(27,44.79801);
   6->SetBinContent(28,37.35709);
   6->SetBinContent(29,29.23275);
   6->SetBinContent(30,26.803);
   6->SetBinContent(31,20.34898);
   6->SetBinContent(32,16.70436);
   6->SetBinContent(33,14.65428);
   6->SetBinContent(34,12.68013);
   6->SetBinContent(35,9.642983);
   6->SetBinContent(36,9.111483);
   6->SetBinContent(37,6.302111);
   6->SetBinContent(38,5.390961);
   6->SetBinContent(39,4.176094);
   6->SetBinContent(40,3.72052);
   6->SetBinContent(41,2.733444);
   6->SetBinContent(42,2.429728);
   6->SetBinContent(43,2.581586);
   6->SetBinContent(44,1.366722);
   6->SetBinContent(45,1.366722);
   6->SetBinContent(46,1.063006);
   6->SetBinContent(47,0.8352189);
   6->SetBinContent(48,0.8352189);
   6->SetBinContent(49,0.7592899);
   6->SetBinContent(50,0.9111479);
   6->SetBinContent(51,2.581586);
   6->SetEntries(655267);
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
   6->GetXaxis()->SetLabelSize(0.03);
   6->GetXaxis()->SetTitleSize(0.03);
   6->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   6->GetXaxis()->SetTitleColor(ci);
   6->GetXaxis()->SetTitleFont(42);
   6->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   6->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   6->GetYaxis()->SetLabelColor(ci);
   6->GetYaxis()->SetLabelFont(42);
   6->GetYaxis()->SetLabelOffset(0.0015);
   6->GetYaxis()->SetLabelSize(0.03);
   6->GetYaxis()->SetTitleSize(0.03);
   6->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   6->GetYaxis()->SetTitleColor(ci);
   6->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   6->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   6->GetZaxis()->SetLabelColor(ci);
   6->GetZaxis()->SetLabelFont(42);
   6->GetZaxis()->SetLabelOffset(0.0015);
   6->GetZaxis()->SetLabelSize(0.03);
   6->GetZaxis()->SetTitleSize(0.03);
   6->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   6->GetZaxis()->SetTitleColor(ci);
   6->GetZaxis()->SetTitleFont(42);
   THStack->Add(6,"");
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,500);
   7->SetBinContent(1,255.157);
   7->SetBinContent(2,729.9128);
   7->SetBinContent(3,1160.333);
   7->SetBinContent(4,1462.921);
   7->SetBinContent(5,1700.567);
   7->SetBinContent(6,1840.264);
   7->SetBinContent(7,1901.739);
   7->SetBinContent(8,1927.227);
   7->SetBinContent(9,1885.626);
   7->SetBinContent(10,1828.936);
   7->SetBinContent(11,1742.266);
   7->SetBinContent(12,1639.141);
   7->SetBinContent(13,1539.19);
   7->SetBinContent(14,1417.803);
   7->SetBinContent(15,1328.546);
   7->SetBinContent(16,1214.288);
   7->SetBinContent(17,1100.469);
   7->SetBinContent(18,1012.774);
   7->SetBinContent(19,927.0319);
   7->SetBinContent(20,841.8757);
   7->SetBinContent(21,759.7956);
   7->SetBinContent(22,677.4714);
   7->SetBinContent(23,620.8307);
   7->SetBinContent(24,557.2565);
   7->SetBinContent(25,506.2312);
   7->SetBinContent(26,460.2839);
   7->SetBinContent(27,410.6257);
   7->SetBinContent(28,380.5476);
   7->SetBinContent(29,336.4558);
   7->SetBinContent(30,302.2761);
   7->SetBinContent(31,274.6394);
   7->SetBinContent(32,245.0495);
   7->SetBinContent(33,226.3972);
   7->SetBinContent(34,201.739);
   7->SetBinContent(35,184.8933);
   7->SetBinContent(36,164.3855);
   7->SetBinContent(37,151.153);
   7->SetBinContent(38,136.5046);
   7->SetBinContent(39,121.1736);
   7->SetBinContent(40,108.9197);
   7->SetBinContent(41,102.1825);
   7->SetBinContent(42,87.82925);
   7->SetBinContent(43,84.02125);
   7->SetBinContent(44,75.0871);
   7->SetBinContent(45,67.12936);
   7->SetBinContent(46,62.93079);
   7->SetBinContent(47,57.31644);
   7->SetBinContent(48,54.58249);
   7->SetBinContent(49,50.18864);
   7->SetBinContent(50,44.81839);
   7->SetBinContent(51,342.1687);
   7->SetEntries(723186);
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
   7->GetXaxis()->SetLabelSize(0.03);
   7->GetXaxis()->SetTitleSize(0.03);
   7->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   7->GetXaxis()->SetTitleColor(ci);
   7->GetXaxis()->SetTitleFont(42);
   7->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   7->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   7->GetYaxis()->SetLabelColor(ci);
   7->GetYaxis()->SetLabelFont(42);
   7->GetYaxis()->SetLabelOffset(0.0015);
   7->GetYaxis()->SetLabelSize(0.03);
   7->GetYaxis()->SetTitleSize(0.03);
   7->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   7->GetYaxis()->SetTitleColor(ci);
   7->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   7->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   7->GetZaxis()->SetLabelColor(ci);
   7->GetZaxis()->SetLabelFont(42);
   7->GetZaxis()->SetLabelOffset(0.0015);
   7->GetZaxis()->SetLabelSize(0.03);
   7->GetZaxis()->SetTitleSize(0.03);
   7->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   7->GetZaxis()->SetTitleColor(ci);
   7->GetZaxis()->SetTitleFont(42);
   THStack->Add(7,"");
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,500);
   8->SetBinContent(1,2852.796);
   8->SetBinContent(2,3171.344);
   8->SetBinContent(3,1490.275);
   8->SetBinContent(4,710.2662);
   8->SetBinContent(5,390.0793);
   8->SetBinContent(6,266.5081);
   8->SetBinContent(7,163.9236);
   8->SetBinContent(8,84.2357);
   8->SetBinContent(9,42.99856);
   8->SetBinContent(10,26.12207);
   8->SetBinContent(11,15.84934);
   8->SetBinContent(12,9.832451);
   8->SetBinContent(13,8.805178);
   8->SetBinContent(14,8.511671);
   8->SetBinContent(15,8.805178);
   8->SetBinContent(16,4.40259);
   8->SetBinContent(17,4.989602);
   8->SetBinContent(18,3.815579);
   8->SetBinContent(19,3.815579);
   8->SetBinContent(20,3.522073);
   8->SetBinContent(21,3.815579);
   8->SetBinContent(22,1.761036);
   8->SetBinContent(23,2.054542);
   8->SetBinContent(24,2.054542);
   8->SetBinContent(25,2.201295);
   8->SetBinContent(26,1.761036);
   8->SetBinContent(27,1.320777);
   8->SetBinContent(28,0.587012);
   8->SetBinContent(29,1.027271);
   8->SetBinContent(30,1.46753);
   8->SetBinContent(31,0.146753);
   8->SetBinContent(32,0.587012);
   8->SetBinContent(33,0.146753);
   8->SetBinContent(34,0.880518);
   8->SetBinContent(35,0.733765);
   8->SetBinContent(36,0.440259);
   8->SetBinContent(37,0.146753);
   8->SetBinContent(38,0.440259);
   8->SetBinContent(39,0.146753);
   8->SetBinContent(40,0.146753);
   8->SetBinContent(41,0.440259);
   8->SetBinContent(42,0.146753);
   8->SetBinContent(44,0.146753);
   8->SetBinContent(46,0.146753);
   8->SetBinContent(48,0.146753);
   8->SetBinContent(49,0.293506);
   8->SetBinContent(51,0.293506);
   8->SetEntries(63340);
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
   8->GetXaxis()->SetLabelSize(0.03);
   8->GetXaxis()->SetTitleSize(0.03);
   8->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   8->GetXaxis()->SetTitleColor(ci);
   8->GetXaxis()->SetTitleFont(42);
   8->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   8->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   8->GetYaxis()->SetLabelColor(ci);
   8->GetYaxis()->SetLabelFont(42);
   8->GetYaxis()->SetLabelOffset(0.0015);
   8->GetYaxis()->SetLabelSize(0.03);
   8->GetYaxis()->SetTitleSize(0.03);
   8->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   8->GetYaxis()->SetTitleColor(ci);
   8->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   8->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   8->GetZaxis()->SetLabelColor(ci);
   8->GetZaxis()->SetLabelFont(42);
   8->GetZaxis()->SetLabelOffset(0.0015);
   8->GetZaxis()->SetLabelSize(0.03);
   8->GetZaxis()->SetTitleSize(0.03);
   8->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   8->GetZaxis()->SetTitleColor(ci);
   8->GetZaxis()->SetTitleFont(42);
   THStack->Add(8,"");
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,500);
   9->SetBinContent(1,534.7281);
   9->SetBinContent(2,1545.056);
   9->SetBinContent(3,2295.729);
   9->SetBinContent(4,2711.171);
   9->SetBinContent(5,2893.355);
   9->SetBinContent(6,2869.875);
   9->SetBinContent(7,2730.366);
   9->SetBinContent(8,2573.033);
   9->SetBinContent(9,2422.384);
   9->SetBinContent(10,2264.537);
   9->SetBinContent(11,2106.004);
   9->SetBinContent(12,1959.812);
   9->SetBinContent(13,1774.028);
   9->SetBinContent(14,1684.907);
   9->SetBinContent(15,1562.194);
   9->SetBinContent(16,1446.337);
   9->SetBinContent(17,1369.898);
   9->SetBinContent(18,1215.65);
   9->SetBinContent(19,1149.838);
   9->SetBinContent(20,1091.052);
   9->SetBinContent(21,976.3776);
   9->SetBinContent(22,904.0266);
   9->SetBinContent(23,839.2194);
   9->SetBinContent(24,774.9265);
   9->SetBinContent(25,721.4348);
   9->SetBinContent(26,660.9137);
   9->SetBinContent(27,627.1385);
   9->SetBinContent(28,583.0764);
   9->SetBinContent(29,521.8696);
   9->SetBinContent(30,488.9516);
   9->SetBinContent(31,447.2898);
   9->SetBinContent(32,420.8869);
   9->SetBinContent(33,369.2811);
   9->SetBinContent(34,345.2784);
   9->SetBinContent(35,326.4192);
   9->SetBinContent(36,285.6146);
   9->SetBinContent(37,268.6413);
   9->SetBinContent(38,247.7254);
   9->SetBinContent(39,221.8391);
   9->SetBinContent(40,212.2388);
   9->SetBinContent(41,186.8668);
   9->SetBinContent(42,176.0666);
   9->SetBinContent(43,151.7232);
   9->SetBinContent(44,134.0656);
   9->SetBinContent(45,119.4935);
   9->SetBinContent(46,110.2357);
   9->SetBinContent(47,99.60644);
   9->SetBinContent(48,85.20547);
   9->SetBinContent(49,86.91987);
   9->SetBinContent(50,68.57578);
   9->SetBinContent(51,424.1444);
   9->SetEntries(292178);
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
   9->GetXaxis()->SetLabelSize(0.03);
   9->GetXaxis()->SetTitleSize(0.03);
   9->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   9->GetXaxis()->SetTitleColor(ci);
   9->GetXaxis()->SetTitleFont(42);
   9->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   9->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   9->GetYaxis()->SetLabelColor(ci);
   9->GetYaxis()->SetLabelFont(42);
   9->GetYaxis()->SetLabelOffset(0.0015);
   9->GetYaxis()->SetLabelSize(0.03);
   9->GetYaxis()->SetTitleSize(0.03);
   9->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   9->GetYaxis()->SetTitleColor(ci);
   9->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   9->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   9->GetZaxis()->SetLabelColor(ci);
   9->GetZaxis()->SetLabelFont(42);
   9->GetZaxis()->SetLabelOffset(0.0015);
   9->GetZaxis()->SetLabelSize(0.03);
   9->GetZaxis()->SetTitleSize(0.03);
   9->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   9->GetZaxis()->SetTitleColor(ci);
   9->GetZaxis()->SetTitleFont(42);
   THStack->Add(9,"");
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,500);
   10->SetBinContent(1,2665.631);
   10->SetBinContent(2,7785.172);
   10->SetBinContent(3,12187.67);
   10->SetBinContent(4,15361.69);
   10->SetBinContent(5,17284.92);
   10->SetBinContent(6,17846.61);
   10->SetBinContent(7,17554.98);
   10->SetBinContent(8,16616.92);
   10->SetBinContent(9,15455.45);
   10->SetBinContent(10,14022.65);
   10->SetBinContent(11,12606.87);
   10->SetBinContent(12,11215.21);
   10->SetBinContent(13,9875.539);
   10->SetBinContent(14,8698.049);
   10->SetBinContent(15,7634.063);
   10->SetBinContent(16,6654.974);
   10->SetBinContent(17,5830.772);
   10->SetBinContent(18,5100.864);
   10->SetBinContent(19,4418.386);
   10->SetBinContent(20,3863.822);
   10->SetBinContent(21,3364.602);
   10->SetBinContent(22,2914.577);
   10->SetBinContent(23,2539.229);
   10->SetBinContent(24,2217.946);
   10->SetBinContent(25,1938.48);
   10->SetBinContent(26,1669.252);
   10->SetBinContent(27,1450.637);
   10->SetBinContent(28,1263.2);
   10->SetBinContent(29,1114.133);
   10->SetBinContent(30,962.0369);
   10->SetBinContent(31,840.4233);
   10->SetBinContent(32,736.165);
   10->SetBinContent(33,629.0667);
   10->SetBinContent(34,545.1931);
   10->SetBinContent(35,479.6057);
   10->SetBinContent(36,415.3914);
   10->SetBinContent(37,359.3855);
   10->SetBinContent(38,311.651);
   10->SetBinContent(39,268.7784);
   10->SetBinContent(40,229.2522);
   10->SetBinContent(41,196.1032);
   10->SetBinContent(42,171.2257);
   10->SetBinContent(43,146.4745);
   10->SetBinContent(44,127.4691);
   10->SetBinContent(45,105.3094);
   10->SetBinContent(46,93.756);
   10->SetBinContent(47,73.30083);
   10->SetBinContent(48,63.64142);
   10->SetBinContent(49,56.50694);
   10->SetBinContent(50,46.2156);
   10->SetBinContent(51,178.992);
   10->SetEntries(3769110);
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
   10->GetXaxis()->SetLabelSize(0.03);
   10->GetXaxis()->SetTitleSize(0.03);
   10->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   10->GetXaxis()->SetTitleColor(ci);
   10->GetXaxis()->SetTitleFont(42);
   10->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   10->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   10->GetYaxis()->SetLabelColor(ci);
   10->GetYaxis()->SetLabelFont(42);
   10->GetYaxis()->SetLabelOffset(0.0015);
   10->GetYaxis()->SetLabelSize(0.03);
   10->GetYaxis()->SetTitleSize(0.03);
   10->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   10->GetYaxis()->SetTitleColor(ci);
   10->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   10->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   10->GetZaxis()->SetLabelColor(ci);
   10->GetZaxis()->SetLabelFont(42);
   10->GetZaxis()->SetLabelOffset(0.0015);
   10->GetZaxis()->SetLabelSize(0.03);
   10->GetZaxis()->SetTitleSize(0.03);
   10->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   10->GetZaxis()->SetTitleColor(ci);
   10->GetZaxis()->SetTitleFont(42);
   THStack->Add(10,"");
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,500);
   11->SetBinContent(1,625207.4);
   11->SetBinContent(2,537668.7);
   11->SetBinContent(3,159936.7);
   11->SetBinContent(4,47817.79);
   11->SetBinContent(5,18525.11);
   11->SetBinContent(6,10376.65);
   11->SetBinContent(7,5887.675);
   11->SetBinContent(8,2976.374);
   11->SetBinContent(9,845.7451);
   11->SetBinContent(10,292.7578);
   11->SetBinContent(11,48.79298);
   11->SetBinContent(12,65.0573);
   11->SetBinContent(13,81.32163);
   11->SetBinContent(14,65.0573);
   11->SetBinContent(15,65.0573);
   11->SetBinContent(17,16.26433);
   11->SetBinContent(19,48.79298);
   11->SetBinContent(20,48.79298);
   11->SetBinContent(21,32.52865);
   11->SetBinContent(22,16.26433);
   11->SetBinContent(24,32.52865);
   11->SetBinContent(27,16.26433);
   11->SetBinContent(29,32.52865);
   11->SetEntries(86731);
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
   11->GetXaxis()->SetLabelSize(0.03);
   11->GetXaxis()->SetTitleSize(0.03);
   11->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   11->GetXaxis()->SetTitleColor(ci);
   11->GetXaxis()->SetTitleFont(42);
   11->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   11->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   11->GetYaxis()->SetLabelColor(ci);
   11->GetYaxis()->SetLabelFont(42);
   11->GetYaxis()->SetLabelOffset(0.0015);
   11->GetYaxis()->SetLabelSize(0.03);
   11->GetYaxis()->SetTitleSize(0.03);
   11->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   11->GetYaxis()->SetTitleColor(ci);
   11->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   11->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   11->GetZaxis()->SetLabelColor(ci);
   11->GetZaxis()->SetLabelFont(42);
   11->GetZaxis()->SetLabelOffset(0.0015);
   11->GetZaxis()->SetLabelSize(0.03);
   11->GetZaxis()->SetTitleSize(0.03);
   11->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   11->GetZaxis()->SetTitleColor(ci);
   11->GetZaxis()->SetTitleFont(42);
   THStack->Add(11,"");
   
   TH1F *12 = new TH1F("12","qqqq",50,0,500);
   12->SetBinContent(1,427181.3);
   12->SetBinContent(2,542736.5);
   12->SetBinContent(3,390546.1);
   12->SetBinContent(4,247494.6);
   12->SetBinContent(5,126570);
   12->SetBinContent(6,50559.21);
   12->SetBinContent(7,17895.24);
   12->SetBinContent(8,6609.834);
   12->SetBinContent(9,3856.849);
   12->SetBinContent(10,2194.851);
   12->SetBinContent(11,1401.912);
   12->SetBinContent(12,995.928);
   12->SetBinContent(13,723.1573);
   12->SetBinContent(14,558.2261);
   12->SetBinContent(15,418.6694);
   12->SetBinContent(16,215.6782);
   12->SetBinContent(17,247.3956);
   12->SetBinContent(18,158.5869);
   12->SetBinContent(19,183.9608);
   12->SetBinContent(20,101.4956);
   12->SetBinContent(21,82.46522);
   12->SetBinContent(22,50.74783);
   12->SetBinContent(23,57.09131);
   12->SetBinContent(24,44.40435);
   12->SetBinContent(25,63.43479);
   12->SetBinContent(26,38.06087);
   12->SetBinContent(27,31.71739);
   12->SetBinContent(28,12.68696);
   12->SetBinContent(29,6.343478);
   12->SetBinContent(30,12.68696);
   12->SetBinContent(31,12.68696);
   12->SetBinContent(32,12.68696);
   12->SetBinContent(33,6.343478);
   12->SetBinContent(35,6.343478);
   12->SetBinContent(36,6.343478);
   12->SetBinContent(38,6.343478);
   12->SetBinContent(42,6.343478);
   12->SetEntries(287086);
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
   12->GetXaxis()->SetLabelSize(0.03);
   12->GetXaxis()->SetTitleSize(0.03);
   12->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   12->GetXaxis()->SetTitleColor(ci);
   12->GetXaxis()->SetTitleFont(42);
   12->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   12->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   12->GetYaxis()->SetLabelColor(ci);
   12->GetYaxis()->SetLabelFont(42);
   12->GetYaxis()->SetLabelOffset(0.0015);
   12->GetYaxis()->SetLabelSize(0.03);
   12->GetYaxis()->SetTitleSize(0.03);
   12->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   12->GetYaxis()->SetTitleColor(ci);
   12->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   12->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   12->GetZaxis()->SetLabelColor(ci);
   12->GetZaxis()->SetLabelFont(42);
   12->GetZaxis()->SetLabelOffset(0.0015);
   12->GetZaxis()->SetLabelSize(0.03);
   12->GetZaxis()->SetTitleSize(0.03);
   12->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   12->GetZaxis()->SetTitleColor(ci);
   12->GetZaxis()->SetTitleFont(42);
   THStack->Add(12,"");
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,500);
   13->SetBinContent(1,1.547677e+07);
   13->SetBinContent(2,1.076915e+07);
   13->SetBinContent(3,2526688);
   13->SetBinContent(4,581209.4);
   13->SetBinContent(5,188005.8);
   13->SetBinContent(6,111506.4);
   13->SetBinContent(7,62170.3);
   13->SetBinContent(8,22176.96);
   13->SetBinContent(9,6104.88);
   13->SetBinContent(10,2242.61);
   13->SetBinContent(11,996.7154);
   13->SetBinContent(12,498.3577);
   13->SetBinContent(13,249.1788);
   13->SetBinContent(14,124.5894);
   13->SetBinContent(15,498.3577);
   13->SetBinContent(16,373.7683);
   13->SetBinContent(17,124.5894);
   13->SetBinContent(18,124.5894);
   13->SetBinContent(21,373.7683);
   13->SetBinContent(22,124.5894);
   13->SetBinContent(23,124.5894);
   13->SetBinContent(24,124.5894);
   13->SetBinContent(26,249.1788);
   13->SetBinContent(30,124.5894);
   13->SetBinContent(33,124.5894);
   13->SetBinContent(38,124.5894);
   13->SetEntries(238608);
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
   13->GetXaxis()->SetLabelSize(0.03);
   13->GetXaxis()->SetTitleSize(0.03);
   13->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   13->GetXaxis()->SetTitleColor(ci);
   13->GetXaxis()->SetTitleFont(42);
   13->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   13->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   13->GetYaxis()->SetLabelColor(ci);
   13->GetYaxis()->SetLabelFont(42);
   13->GetYaxis()->SetLabelOffset(0.0015);
   13->GetYaxis()->SetLabelSize(0.03);
   13->GetYaxis()->SetTitleSize(0.03);
   13->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   13->GetYaxis()->SetTitleColor(ci);
   13->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   13->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   13->GetZaxis()->SetLabelColor(ci);
   13->GetZaxis()->SetLabelFont(42);
   13->GetZaxis()->SetLabelOffset(0.0015);
   13->GetZaxis()->SetLabelSize(0.03);
   13->GetZaxis()->SetTitleSize(0.03);
   13->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   13->GetZaxis()->SetTitleColor(ci);
   13->GetZaxis()->SetTitleFont(42);
   THStack->Add(13,"");
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,500);
   14->SetBinContent(1,26279.28);
   14->SetBinContent(2,61315.76);
   14->SetBinContent(3,85229.13);
   14->SetBinContent(4,97814.7);
   14->SetBinContent(5,102982.8);
   14->SetBinContent(6,101850);
   14->SetBinContent(7,97262.41);
   14->SetBinContent(8,91675.1);
   14->SetBinContent(9,83995.57);
   14->SetBinContent(10,75594.45);
   14->SetBinContent(11,68056.01);
   14->SetBinContent(12,61791.45);
   14->SetBinContent(13,54506.98);
   14->SetBinContent(14,48476.23);
   14->SetBinContent(15,42082.66);
   14->SetBinContent(16,37212.91);
   14->SetBinContent(17,33504.16);
   14->SetBinContent(18,29047.4);
   14->SetBinContent(19,25376.71);
   14->SetBinContent(20,22729.47);
   14->SetBinContent(21,19832.4);
   14->SetBinContent(22,17793.58);
   14->SetBinContent(23,15891.75);
   14->SetBinContent(24,14110.8);
   14->SetBinContent(25,12023.62);
   14->SetBinContent(26,10730.22);
   14->SetBinContent(27,9545.606);
   14->SetBinContent(28,8389.198);
   14->SetBinContent(29,7236.819);
   14->SetBinContent(30,6281.875);
   14->SetBinContent(31,5786.272);
   14->SetBinContent(32,5266.493);
   14->SetBinContent(33,4392.135);
   14->SetBinContent(34,3924.726);
   14->SetBinContent(35,3626.54);
   14->SetBinContent(36,3066.434);
   14->SetBinContent(37,2864.957);
   14->SetBinContent(38,2594.978);
   14->SetBinContent(39,2381.412);
   14->SetBinContent(40,1881.754);
   14->SetBinContent(41,1913.99);
   14->SetBinContent(42,1410.312);
   14->SetBinContent(43,1297.488);
   14->SetBinContent(44,1490.901);
   14->SetBinContent(45,1067.812);
   14->SetBinContent(46,1079.9);
   14->SetBinContent(47,934.8393);
   14->SetBinContent(48,773.6601);
   14->SetBinContent(49,689.041);
   14->SetBinContent(50,685.0115);
   14->SetBinContent(51,5681.51);
   14->SetEntries(352697);
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
   14->GetXaxis()->SetLabelSize(0.03);
   14->GetXaxis()->SetTitleSize(0.03);
   14->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   14->GetXaxis()->SetTitleColor(ci);
   14->GetXaxis()->SetTitleFont(42);
   14->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   14->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   14->GetYaxis()->SetLabelColor(ci);
   14->GetYaxis()->SetLabelFont(42);
   14->GetYaxis()->SetLabelOffset(0.0015);
   14->GetYaxis()->SetLabelSize(0.03);
   14->GetYaxis()->SetTitleSize(0.03);
   14->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   14->GetYaxis()->SetTitleColor(ci);
   14->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   14->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   14->GetZaxis()->SetLabelColor(ci);
   14->GetZaxis()->SetLabelFont(42);
   14->GetZaxis()->SetLabelOffset(0.0015);
   14->GetZaxis()->SetLabelSize(0.03);
   14->GetZaxis()->SetTitleSize(0.03);
   14->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   14->GetZaxis()->SetTitleColor(ci);
   14->GetZaxis()->SetTitleFont(42);
   THStack->Add(14,"");
   
   TH1F *15 = new TH1F("15","qqll",50,0,500);
   15->SetBinContent(1,588604.8);
   15->SetBinContent(2,353202.4);
   15->SetBinContent(3,76164.41);
   15->SetBinContent(4,27934.37);
   15->SetBinContent(5,9765.355);
   15->SetBinContent(6,4689.447);
   15->SetBinContent(7,2850.757);
   15->SetBinContent(8,1301.777);
   15->SetBinContent(9,475.1308);
   15->SetBinContent(10,243.3596);
   15->SetBinContent(11,162.2396);
   15->SetBinContent(12,150.6511);
   15->SetBinContent(13,154.5139);
   15->SetBinContent(14,96.57117);
   15->SetBinContent(15,104.2969);
   15->SetBinContent(16,81.11978);
   15->SetBinContent(17,50.21701);
   15->SetBinContent(18,27.03993);
   15->SetBinContent(19,42.49131);
   15->SetBinContent(20,46.35416);
   15->SetBinContent(21,34.76562);
   15->SetBinContent(22,23.17708);
   15->SetBinContent(23,27.03993);
   15->SetBinContent(24,30.90277);
   15->SetBinContent(25,19.31424);
   15->SetBinContent(26,11.58854);
   15->SetBinContent(27,7.725694);
   15->SetBinContent(28,23.17708);
   15->SetBinContent(29,19.31424);
   15->SetBinContent(31,15.45139);
   15->SetBinContent(32,7.725694);
   15->SetBinContent(34,7.725694);
   15->SetBinContent(36,7.725694);
   15->SetBinContent(37,3.862847);
   15->SetBinContent(38,15.45139);
   15->SetBinContent(39,7.725694);
   15->SetBinContent(40,7.725694);
   15->SetBinContent(41,7.725694);
   15->SetBinContent(42,7.725694);
   15->SetBinContent(44,3.862847);
   15->SetBinContent(46,7.725694);
   15->SetBinContent(50,3.862847);
   15->SetBinContent(51,7.725694);
   15->SetEntries(275830);
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
   15->GetXaxis()->SetLabelSize(0.03);
   15->GetXaxis()->SetTitleSize(0.03);
   15->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   15->GetXaxis()->SetTitleColor(ci);
   15->GetXaxis()->SetTitleFont(42);
   15->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   15->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   15->GetYaxis()->SetLabelColor(ci);
   15->GetYaxis()->SetLabelFont(42);
   15->GetYaxis()->SetLabelOffset(0.0015);
   15->GetYaxis()->SetLabelSize(0.03);
   15->GetYaxis()->SetTitleSize(0.03);
   15->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   15->GetYaxis()->SetTitleColor(ci);
   15->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   15->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   15->GetZaxis()->SetLabelColor(ci);
   15->GetZaxis()->SetLabelFont(42);
   15->GetZaxis()->SetLabelOffset(0.0015);
   15->GetZaxis()->SetLabelSize(0.03);
   15->GetZaxis()->SetTitleSize(0.03);
   15->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   15->GetZaxis()->SetTitleColor(ci);
   15->GetZaxis()->SetTitleFont(42);
   THStack->Add(15,"");
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,500);
   16->SetBinContent(1,73395.54);
   16->SetBinContent(2,185021);
   16->SetBinContent(3,230390.5);
   16->SetBinContent(4,215775.5);
   16->SetBinContent(5,183157.1);
   16->SetBinContent(6,154390);
   16->SetBinContent(7,127651.6);
   16->SetBinContent(8,106891.1);
   16->SetBinContent(9,91776.77);
   16->SetBinContent(10,73518.82);
   16->SetBinContent(11,62164.61);
   16->SetBinContent(12,50039.9);
   16->SetBinContent(13,41706.09);
   16->SetBinContent(14,34820.83);
   16->SetBinContent(15,28323.91);
   16->SetBinContent(16,23053.63);
   16->SetBinContent(17,19749.7);
   16->SetBinContent(18,15780.04);
   16->SetBinContent(19,13795.21);
   16->SetBinContent(20,11064.53);
   16->SetBinContent(21,9850.212);
   16->SetBinContent(22,8432.478);
   16->SetBinContent(23,7113.368);
   16->SetBinContent(24,5997.673);
   16->SetBinContent(25,5553.86);
   16->SetBinContent(26,4542.954);
   16->SetBinContent(27,3975.86);
   16->SetBinContent(28,3421.095);
   16->SetBinContent(29,3236.173);
   16->SetBinContent(30,2638.259);
   16->SetBinContent(31,2348.548);
   16->SetBinContent(32,2009.524);
   16->SetBinContent(33,1824.598);
   16->SetBinContent(34,1682.822);
   16->SetBinContent(35,1467.075);
   16->SetBinContent(36,1245.165);
   16->SetBinContent(37,1091.06);
   16->SetBinContent(38,1097.224);
   16->SetBinContent(39,1066.403);
   16->SetBinContent(40,850.6569);
   16->SetBinContent(41,696.5522);
   16->SetBinContent(42,727.3732);
   16->SetBinContent(43,554.776);
   16->SetBinContent(44,560.9402);
   16->SetBinContent(45,456.149);
   16->SetBinContent(46,339.0295);
   16->SetBinContent(47,456.149);
   16->SetBinContent(48,431.4923);
   16->SetBinContent(49,369.8505);
   16->SetBinContent(50,252.731);
   16->SetBinContent(51,3476.571);
   16->SetEntries(295233);
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
   16->GetXaxis()->SetLabelSize(0.03);
   16->GetXaxis()->SetTitleSize(0.03);
   16->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   16->GetXaxis()->SetTitleColor(ci);
   16->GetXaxis()->SetTitleFont(42);
   16->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   16->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   16->GetYaxis()->SetLabelColor(ci);
   16->GetYaxis()->SetLabelFont(42);
   16->GetYaxis()->SetLabelOffset(0.0015);
   16->GetYaxis()->SetLabelSize(0.03);
   16->GetYaxis()->SetTitleSize(0.03);
   16->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   16->GetYaxis()->SetTitleColor(ci);
   16->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   16->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   16->GetZaxis()->SetLabelColor(ci);
   16->GetZaxis()->SetLabelFont(42);
   16->GetZaxis()->SetLabelOffset(0.0015);
   16->GetZaxis()->SetLabelSize(0.03);
   16->GetZaxis()->SetTitleSize(0.03);
   16->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   16->GetZaxis()->SetTitleColor(ci);
   16->GetZaxis()->SetTitleFont(42);
   THStack->Add(16,"");
   
   TH1F *17 = new TH1F("17","qq",50,0,500);
   17->SetBinContent(1,2035205);
   17->SetBinContent(2,1919873);
   17->SetBinContent(3,1389868);
   17->SetBinContent(4,775194.9);
   17->SetBinContent(5,230411.4);
   17->SetBinContent(6,70416.56);
   17->SetBinContent(7,38933.12);
   17->SetBinContent(8,23964.05);
   17->SetBinContent(9,16256.97);
   17->SetBinContent(10,12063.93);
   17->SetBinContent(11,8503.364);
   17->SetBinContent(12,6020.29);
   17->SetBinContent(13,5762.611);
   17->SetBinContent(14,4146.266);
   17->SetBinContent(15,3748.036);
   17->SetBinContent(16,3045.278);
   17->SetBinContent(17,2178.542);
   17->SetBinContent(18,2108.266);
   17->SetBinContent(19,1874.014);
   17->SetBinContent(20,1171.259);
   17->SetBinContent(21,1171.259);
   17->SetBinContent(22,702.7552);
   17->SetBinContent(23,819.881);
   17->SetBinContent(24,609.0545);
   17->SetBinContent(25,726.1804);
   17->SetBinContent(26,421.6531);
   17->SetBinContent(27,421.6531);
   17->SetBinContent(28,304.5273);
   17->SetBinContent(29,257.6769);
   17->SetBinContent(30,210.8266);
   17->SetBinContent(31,117.1259);
   17->SetBinContent(32,210.8266);
   17->SetBinContent(33,187.4014);
   17->SetBinContent(34,140.5511);
   17->SetBinContent(35,93.70071);
   17->SetBinContent(36,23.42518);
   17->SetBinContent(38,70.27553);
   17->SetBinContent(39,117.1259);
   17->SetBinContent(40,23.42518);
   17->SetBinContent(41,23.42518);
   17->SetBinContent(44,23.42518);
   17->SetBinContent(49,23.42518);
   17->SetEntries(280074);
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
   17->GetXaxis()->SetLabelSize(0.03);
   17->GetXaxis()->SetTitleSize(0.03);
   17->GetXaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   17->GetXaxis()->SetTitleColor(ci);
   17->GetXaxis()->SetTitleFont(42);
   17->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   17->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   17->GetYaxis()->SetLabelColor(ci);
   17->GetYaxis()->SetLabelFont(42);
   17->GetYaxis()->SetLabelOffset(0.0015);
   17->GetYaxis()->SetLabelSize(0.03);
   17->GetYaxis()->SetTitleSize(0.03);
   17->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   17->GetYaxis()->SetTitleColor(ci);
   17->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   17->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   17->GetZaxis()->SetLabelColor(ci);
   17->GetZaxis()->SetLabelFont(42);
   17->GetZaxis()->SetLabelOffset(0.0015);
   17->GetZaxis()->SetLabelSize(0.03);
   17->GetZaxis()->SetTitleSize(0.03);
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
