{
//=========Macro generated from canvas: canvas1/
//=========  (Mon Jan 23 22:06:50 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,1600,900);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-108.9744,-3.542173,532.0513,7.008509);
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
   
   TH1F *THStack_stack_2 = new TH1F("THStack_stack_2","",50,0,500);
   THStack_stack_2->SetMinimum(0.02274836);
   THStack_stack_2->SetMaximum(1460340);
   THStack_stack_2->SetDirectory(0);
   THStack_stack_2->SetStats(0);
   THStack_stack_2->SetLineWidth(2);
   THStack_stack_2->SetMarkerSize(1.2);
   THStack_stack_2->GetXaxis()->SetTitle("P_{T,HH} / GeV");
   THStack_stack_2->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetXaxis()->SetLabelColor(ci);
   THStack_stack_2->GetXaxis()->SetLabelFont(42);
   THStack_stack_2->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_2->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_2->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_2->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_2->GetXaxis()->SetTitleColor(ci);
   THStack_stack_2->GetXaxis()->SetTitleFont(42);
   THStack_stack_2->GetYaxis()->SetTitle("Number of events");
   THStack_stack_2->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetYaxis()->SetLabelColor(ci);
   THStack_stack_2->GetYaxis()->SetLabelFont(42);
   THStack_stack_2->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_2->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_2->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_2->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_2->GetYaxis()->SetTitleColor(ci);
   THStack_stack_2->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetZaxis()->SetLabelColor(ci);
   THStack_stack_2->GetZaxis()->SetLabelFont(42);
   THStack_stack_2->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_2->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_2->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_2->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_2->GetZaxis()->SetTitleColor(ci);
   THStack_stack_2->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_2);
   
   
   TH1F *0 = new TH1F("0","HH#nu#nu#rightarrowbbWW*#nu#nu,hadronic",50,0,500);
   0->SetBinContent(1,1.524448);
   0->SetBinContent(2,4.207061);
   0->SetBinContent(3,7.067912);
   0->SetBinContent(4,9.414008);
   0->SetBinContent(5,10.44352);
   0->SetBinContent(6,11.00777);
   0->SetBinContent(7,10.96817);
   0->SetBinContent(8,10.81969);
   0->SetBinContent(9,10.31483);
   0->SetBinContent(10,10.19604);
   0->SetBinContent(11,8.513186);
   0->SetBinContent(12,7.750953);
   0->SetBinContent(13,6.840232);
   0->SetBinContent(14,6.325477);
   0->SetBinContent(15,5.36526);
   0->SetBinContent(16,4.969295);
   0->SetBinContent(17,4.187263);
   0->SetBinContent(18,3.395346);
   0->SetBinContent(19,3.17757);
   0->SetBinContent(20,2.890502);
   0->SetBinContent(21,2.682625);
   0->SetBinContent(22,1.960005);
   0->SetBinContent(23,1.880813);
   0->SetBinContent(24,1.593741);
   0->SetBinContent(25,1.276972);
   0->SetBinContent(26,1.267073);
   0->SetBinContent(27,0.9800018);
   0->SetBinContent(28,1.019598);
   0->SetBinContent(29,0.8117185);
   0->SetBinContent(30,0.8216175);
   0->SetBinContent(31,0.5147479);
   0->SetBinContent(32,0.6335361);
   0->SetBinContent(33,0.5444449);
   0->SetBinContent(34,0.4454549);
   0->SetBinContent(35,0.346465);
   0->SetBinContent(36,0.4256569);
   0->SetBinContent(37,0.3662629);
   0->SetBinContent(38,0.3761619);
   0->SetBinContent(39,0.188081);
   0->SetBinContent(40,0.267273);
   0->SetBinContent(41,0.287071);
   0->SetBinContent(42,0.188081);
   0->SetBinContent(43,0.178182);
   0->SetBinContent(44,0.148485);
   0->SetBinContent(45,0.188081);
   0->SetBinContent(46,0.188081);
   0->SetBinContent(47,0.148485);
   0->SetBinContent(48,0.138586);
   0->SetBinContent(49,0.178182);
   0->SetBinContent(50,0.128687);
   0->SetBinContent(51,1.989702);
   0->SetEntries(16319);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,500);
   1->SetBinContent(1,5.850318);
   1->SetBinContent(2,15.85835);
   1->SetBinContent(3,25.25263);
   1->SetBinContent(4,34.00347);
   1->SetBinContent(5,39.13122);
   1->SetBinContent(6,40.85367);
   1->SetBinContent(7,41.00216);
   1->SetBinContent(8,39.18072);
   1->SetBinContent(9,38.55707);
   1->SetBinContent(10,33.657);
   1->SetBinContent(11,31.4);
   1->SetBinContent(12,28.06399);
   1->SetBinContent(13,24.89626);
   1->SetBinContent(14,21.34247);
   1->SetBinContent(15,18.64001);
   1->SetBinContent(16,16.07613);
   1->SetBinContent(17,13.85872);
   1->SetBinContent(18,11.42353);
   1->SetBinContent(19,10.32473);
   1->SetBinContent(20,9.552596);
   1->SetBinContent(21,7.741054);
   1->SetBinContent(22,7.166903);
   1->SetBinContent(23,5.583041);
   1->SetBinContent(24,5.375159);
   1->SetBinContent(25,4.741614);
   1->SetBinContent(26,4.068473);
   1->SetBinContent(27,3.712111);
   1->SetBinContent(28,2.880603);
   1->SetBinContent(29,2.652928);
   1->SetBinContent(30,2.593535);
   1->SetBinContent(31,2.019399);
   1->SetBinContent(32,1.999601);
   1->SetBinContent(33,1.672933);
   1->SetBinContent(34,1.50465);
   1->SetBinContent(35,1.514549);
   1->SetBinContent(36,1.40566);
   1->SetBinContent(37,1.09879);
   1->SetBinContent(38,1.257174);
   1->SetBinContent(39,1.029497);
   1->SetBinContent(40,0.7820214);
   1->SetBinContent(41,0.9008096);
   1->SetBinContent(42,0.9008096);
   1->SetBinContent(43,0.6236371);
   1->SetBinContent(44,0.6335361);
   1->SetBinContent(45,0.6731322);
   1->SetBinContent(46,0.5048488);
   1->SetBinContent(47,0.4751518);
   1->SetBinContent(48,0.4949498);
   1->SetBinContent(49,0.4652528);
   1->SetBinContent(50,0.4454549);
   1->SetBinContent(51,6.444266);
   1->SetEntries(57812);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,500);
   2->SetBinContent(1,3.365649);
   2->SetBinContent(2,8.146918);
   2->SetBinContent(3,13.28457);
   2->SetBinContent(4,17.5214);
   2->SetBinContent(5,18.94688);
   2->SetBinContent(6,20.75842);
   2->SetBinContent(7,20.39215);
   2->SetBinContent(8,19.97639);
   2->SetBinContent(9,17.93717);
   2->SetBinContent(10,17.37292);
   2->SetBinContent(11,16.00683);
   2->SetBinContent(12,13.46276);
   2->SetBinContent(13,11.97789);
   2->SetBinContent(14,10.6118);
   2->SetBinContent(15,9.720881);
   2->SetBinContent(16,7.404483);
   2->SetBinContent(17,6.939223);
   2->SetBinContent(18,5.840419);
   2->SetBinContent(19,5.127681);
   2->SetBinContent(20,4.44464);
   2->SetBinContent(21,3.672515);
   2->SetBinContent(22,3.524032);
   2->SetBinContent(23,3.316155);
   2->SetBinContent(24,2.831109);
   2->SetBinContent(25,2.256972);
   2->SetBinContent(26,1.950106);
   2->SetBinContent(27,1.70263);
   2->SetBinContent(28,1.870914);
   2->SetBinContent(29,1.385862);
   2->SetBinContent(30,0.9404057);
   2->SetBinContent(31,1.108689);
   2->SetBinContent(32,0.9107087);
   2->SetBinContent(33,0.8414155);
   2->SetBinContent(34,0.6335361);
   2->SetBinContent(35,0.6533341);
   2->SetBinContent(36,0.584041);
   2->SetBinContent(37,0.6533341);
   2->SetBinContent(38,0.4454549);
   2->SetBinContent(39,0.5543439);
   2->SetBinContent(40,0.603839);
   2->SetBinContent(41,0.4256569);
   2->SetBinContent(42,0.3761619);
   2->SetBinContent(43,0.3860609);
   2->SetBinContent(44,0.287071);
   2->SetBinContent(45,0.217778);
   2->SetBinContent(46,0.247475);
   2->SetBinContent(47,0.207879);
   2->SetBinContent(48,0.267273);
   2->SetBinContent(49,0.19798);
   2->SetBinContent(50,0.158384);
   2->SetBinContent(51,3.335953);
   2->SetEntries(28870);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,500);
   3->SetBinContent(1,13.64102);
   3->SetBinContent(2,40.24793);
   3->SetBinContent(3,65.26711);
   3->SetBinContent(4,90.59289);
   3->SetBinContent(5,109.7054);
   3->SetBinContent(6,122.7397);
   3->SetBinContent(7,131.0128);
   3->SetBinContent(8,136.6183);
   3->SetBinContent(9,137.3611);
   3->SetBinContent(10,137.1248);
   3->SetBinContent(11,131.1817);
   3->SetBinContent(12,124.4957);
   3->SetBinContent(13,120.7474);
   3->SetBinContent(14,111.3938);
   3->SetBinContent(15,105.2818);
   3->SetBinContent(16,96.23209);
   3->SetBinContent(17,88.73566);
   3->SetBinContent(18,79.01057);
   3->SetBinContent(19,73.4389);
   3->SetBinContent(20,66.71912);
   3->SetBinContent(21,60.3712);
   3->SetBinContent(22,53.14573);
   3->SetBinContent(23,50.57968);
   3->SetBinContent(24,46.08908);
   3->SetBinContent(25,42.07118);
   3->SetBinContent(26,38.5935);
   3->SetBinContent(27,32.07707);
   3->SetBinContent(28,30.65891);
   3->SetBinContent(29,27.78882);
   3->SetBinContent(30,25.02002);
   3->SetBinContent(31,22.04863);
   3->SetBinContent(32,18.80712);
   3->SetBinContent(33,18.1318);
   3->SetBinContent(34,16.78117);
   3->SetBinContent(35,15.97079);
   3->SetBinContent(36,13.3709);
   3->SetBinContent(37,13.16831);
   3->SetBinContent(38,10.8723);
   3->SetBinContent(39,10.09571);
   3->SetBinContent(40,8.508762);
   3->SetBinContent(41,7.765935);
   3->SetBinContent(42,6.82052);
   3->SetBinContent(43,6.955579);
   3->SetBinContent(44,6.584166);
   3->SetBinContent(45,6.246518);
   3->SetBinContent(46,4.423216);
   3->SetBinContent(47,4.456981);
   3->SetBinContent(48,4.018038);
   3->SetBinContent(49,4.321922);
   3->SetBinContent(50,3.106381);
   3->SetBinContent(51,46.93318);
   3->SetEntries(78107);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,500);
   4->SetBinContent(1,8.330922);
   4->SetBinContent(2,25.67054);
   4->SetBinContent(3,40.47372);
   4->SetBinContent(4,52.15008);
   4->SetBinContent(5,65.20399);
   4->SetBinContent(6,73.68793);
   4->SetBinContent(7,79.32932);
   4->SetBinContent(8,84.53339);
   4->SetBinContent(9,82.39054);
   4->SetBinContent(10,84.03048);
   4->SetBinContent(11,84.29287);
   4->SetBinContent(12,77.88618);
   4->SetBinContent(13,75.4372);
   4->SetBinContent(14,68.72439);
   4->SetBinContent(15,61.4212);
   4->SetBinContent(16,59.78126);
   4->SetBinContent(17,54.81771);
   4->SetBinContent(18,52.25941);
   4->SetBinContent(19,44.36584);
   4->SetBinContent(20,42.46351);
   4->SetBinContent(21,36.86585);
   4->SetBinContent(22,34.19822);
   4->SetBinContent(23,30.32796);
   4->SetBinContent(24,29.23467);
   4->SetBinContent(25,24.33672);
   4->SetBinContent(26,21.69095);
   4->SetBinContent(27,20.33527);
   4->SetBinContent(28,19.13265);
   4->SetBinContent(29,17.73324);
   4->SetBinContent(30,15.74344);
   4->SetBinContent(31,13.4694);
   4->SetBinContent(32,12.76969);
   4->SetBinContent(33,11.15162);
   4->SetBinContent(34,10.34258);
   4->SetBinContent(35,8.637044);
   4->SetBinContent(36,7.871739);
   4->SetBinContent(37,7.346959);
   4->SetBinContent(38,6.450459);
   4->SetBinContent(39,6.07874);
   4->SetBinContent(40,5.44463);
   4->SetBinContent(41,4.701191);
   4->SetBinContent(42,3.826556);
   4->SetBinContent(43,3.498564);
   4->SetBinContent(44,3.870288);
   4->SetBinContent(45,3.586029);
   4->SetBinContent(46,2.995645);
   4->SetBinContent(47,3.017511);
   4->SetBinContent(48,2.820716);
   4->SetBinContent(49,2.230332);
   4->SetBinContent(50,2.252198);
   4->SetBinContent(51,26.39211);
   4->SetEntries(73887);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,500);
   5->SetBinContent(1,17.56251);
   5->SetBinContent(2,55.24651);
   5->SetBinContent(3,92.81279);
   5->SetBinContent(4,128.4595);
   5->SetBinContent(5,146.9516);
   5->SetBinContent(6,172.48);
   5->SetBinContent(7,186.2037);
   5->SetBinContent(8,203.998);
   5->SetBinContent(9,203.0676);
   5->SetBinContent(10,194.5775);
   5->SetBinContent(11,191.3792);
   5->SetBinContent(12,191.1465);
   5->SetBinContent(13,184.3428);
   5->SetBinContent(14,173.0034);
   5->SetBinContent(15,159.396);
   5->SetBinContent(16,148.9869);
   5->SetBinContent(17,135.7866);
   5->SetBinContent(18,117.0619);
   5->SetBinContent(19,114.6777);
   5->SetBinContent(20,104.7338);
   5->SetBinContent(21,95.13884);
   5->SetBinContent(22,82.46187);
   5->SetBinContent(23,75.89078);
   5->SetBinContent(24,69.66859);
   5->SetBinContent(25,66.47028);
   5->SetBinContent(26,54.95574);
   5->SetBinContent(27,48.20975);
   5->SetBinContent(28,51.05935);
   5->SetBinContent(29,41.75454);
   5->SetBinContent(30,38.55601);
   5->SetBinContent(31,32.6242);
   5->SetBinContent(32,33.14759);
   5->SetBinContent(33,29.13499);
   5->SetBinContent(34,25.99472);
   5->SetBinContent(35,23.08706);
   5->SetBinContent(36,22.85445);
   5->SetBinContent(37,20.93539);
   5->SetBinContent(38,18.3185);
   5->SetBinContent(39,15.87607);
   5->SetBinContent(40,15.75976);
   5->SetBinContent(41,12.85205);
   5->SetBinContent(42,12.67759);
   5->SetBinContent(43,12.21236);
   5->SetBinContent(44,10.40958);
   5->SetBinContent(45,8.897573);
   5->SetBinContent(46,8.606803);
   5->SetBinContent(47,7.56003);
   5->SetBinContent(48,7.676338);
   5->SetBinContent(49,6.629564);
   5->SetBinContent(50,6.280639);
   5->SetBinContent(51,71.06422);
   5->SetEntries(67901);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,500);
   6->SetBinContent(1,2881.322);
   6->SetBinContent(2,7754.889);
   6->SetBinContent(3,11427.57);
   6->SetBinContent(4,13190.24);
   6->SetBinContent(5,13382.3);
   6->SetBinContent(6,12534.28);
   6->SetBinContent(7,11102.22);
   6->SetBinContent(8,9396.545);
   6->SetBinContent(9,8009.205);
   6->SetBinContent(10,6604.326);
   6->SetBinContent(11,5339.76);
   6->SetBinContent(12,4413.697);
   6->SetBinContent(13,3733.958);
   6->SetBinContent(14,2999.744);
   6->SetBinContent(15,2483.075);
   6->SetBinContent(16,2009.394);
   6->SetBinContent(17,1725.221);
   6->SetBinContent(18,1392.81);
   6->SetBinContent(19,1191.082);
   6->SetBinContent(20,964.797);
   6->SetBinContent(21,883.229);
   6->SetBinContent(22,697.2891);
   6->SetBinContent(23,607.8274);
   6->SetBinContent(24,537.6614);
   6->SetBinContent(25,463.1083);
   6->SetBinContent(26,383.2917);
   6->SetBinContent(27,349.9616);
   6->SetBinContent(28,299.0895);
   6->SetBinContent(29,244.7091);
   6->SetBinContent(30,216.6422);
   6->SetBinContent(31,193.8379);
   6->SetBinContent(32,171.0335);
   6->SetBinContent(33,156.123);
   6->SetBinContent(34,150.8605);
   6->SetBinContent(35,109.6371);
   6->SetBinContent(36,99.98898);
   6->SetBinContent(37,98.23478);
   6->SetBinContent(38,102.6203);
   6->SetBinContent(39,78.06152);
   6->SetBinContent(40,72.79893);
   6->SetBinContent(41,71.04474);
   6->SetBinContent(42,56.1341);
   6->SetBinContent(43,59.64248);
   6->SetBinContent(44,45.60897);
   6->SetBinContent(45,28.94417);
   6->SetBinContent(46,21.05031);
   6->SetBinContent(47,22.8045);
   6->SetBinContent(48,31.57546);
   6->SetBinContent(49,24.55869);
   6->SetBinContent(50,26.31288);
   6->SetBinContent(51,258.7426);
   6->SetEntries(147197);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,500);
   7->SetBinContent(1,147.0935);
   7->SetBinContent(2,425.8248);
   7->SetBinContent(3,679.8322);
   7->SetBinContent(4,900.2758);
   7->SetBinContent(5,1106.456);
   7->SetBinContent(6,1223.947);
   7->SetBinContent(7,1284.97);
   7->SetBinContent(8,1362.422);
   7->SetBinContent(9,1357.314);
   7->SetBinContent(10,1368.635);
   7->SetBinContent(11,1336.605);
   7->SetBinContent(12,1278.619);
   7->SetBinContent(13,1228.779);
   7->SetBinContent(14,1186.118);
   7->SetBinContent(15,1122.748);
   7->SetBinContent(16,1047.78);
   7->SetBinContent(17,983.0112);
   7->SetBinContent(18,905.6625);
   7->SetBinContent(19,852.4854);
   7->SetBinContent(20,798.7557);
   7->SetBinContent(21,738.258);
   7->SetBinContent(22,683.8377);
   7->SetBinContent(23,650.2739);
   7->SetBinContent(24,599.0305);
   7->SetBinContent(25,539.6378);
   7->SetBinContent(26,504.969);
   7->SetBinContent(27,458.8361);
   7->SetBinContent(28,439.2227);
   7->SetBinContent(29,412.2888);
   7->SetBinContent(30,374.5813);
   7->SetBinContent(31,336.5976);
   7->SetBinContent(32,312.288);
   7->SetBinContent(33,297.3708);
   7->SetBinContent(34,275.2712);
   7->SetBinContent(35,257.8677);
   7->SetBinContent(36,233.2819);
   7->SetBinContent(37,216.7072);
   7->SetBinContent(38,203.1712);
   7->SetBinContent(39,185.7678);
   7->SetBinContent(40,173.1986);
   7->SetBinContent(41,165.1875);
   7->SetBinContent(42,144.0548);
   7->SetBinContent(43,137.4249);
   7->SetBinContent(44,126.2371);
   7->SetBinContent(45,117.3977);
   7->SetBinContent(46,108.6965);
   7->SetBinContent(47,100.6858);
   7->SetBinContent(48,96.128);
   7->SetBinContent(49,83.1452);
   7->SetBinContent(50,83.1452);
   7->SetBinContent(51,1103.281);
   7->SetEntries(222677);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,500);
   8->SetBinContent(1,1027.361);
   8->SetBinContent(2,1539.162);
   8->SetBinContent(3,1042.143);
   8->SetBinContent(4,625.4697);
   8->SetBinContent(5,406.508);
   8->SetBinContent(6,298.413);
   8->SetBinContent(7,170.9177);
   8->SetBinContent(8,128.4195);
   8->SetBinContent(9,96.08362);
   8->SetBinContent(10,70.21494);
   8->SetBinContent(11,73.91046);
   8->SetBinContent(12,68.36717);
   8->SetBinContent(13,51.7373);
   8->SetBinContent(14,43.42237);
   8->SetBinContent(15,23.09699);
   8->SetBinContent(16,16.62984);
   8->SetBinContent(17,17.55372);
   8->SetBinContent(18,11.08656);
   8->SetBinContent(19,8.31492);
   8->SetBinContent(20,6.46716);
   8->SetBinContent(21,6.46716);
   8->SetBinContent(22,3.69552);
   8->SetBinContent(23,5.54328);
   8->SetBinContent(24,1.84776);
   8->SetBinContent(25,6.46716);
   8->SetBinContent(26,2.77164);
   8->SetBinContent(27,3.69552);
   8->SetBinContent(28,0.92388);
   8->SetBinContent(29,3.69552);
   8->SetBinContent(30,0.92388);
   8->SetBinContent(31,0.92388);
   8->SetBinContent(32,1.84776);
   8->SetBinContent(33,0.92388);
   8->SetBinContent(34,0.92388);
   8->SetBinContent(36,0.92388);
   8->SetBinContent(37,2.77164);
   8->SetBinContent(39,0.92388);
   8->SetBinContent(41,1.84776);
   8->SetBinContent(44,0.92388);
   8->SetBinContent(45,0.92388);
   8->SetBinContent(49,0.92388);
   8->SetBinContent(51,3.69552);
   8->SetEntries(6255);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,500);
   9->SetBinContent(1,302.4205);
   9->SetBinContent(2,829.9108);
   9->SetBinContent(3,1267.728);
   9->SetBinContent(4,1534.11);
   9->SetBinContent(5,1683.566);
   9->SetBinContent(6,1721.809);
   9->SetBinContent(7,1720.93);
   9->SetBinContent(8,1608.838);
   9->SetBinContent(9,1554.331);
   9->SetBinContent(10,1460.701);
   9->SetBinContent(11,1327.949);
   9->SetBinContent(12,1260.694);
   9->SetBinContent(13,1189.483);
   9->SetBinContent(14,1087.941);
   9->SetBinContent(15,1068.161);
   9->SetBinContent(16,937.6067);
   9->SetBinContent(17,899.3636);
   9->SetBinContent(18,845.2959);
   9->SetBinContent(19,778.0409);
   9->SetBinContent(20,759.1392);
   9->SetBinContent(21,686.1697);
   9->SetBinContent(22,620.2334);
   9->SetBinContent(23,609.6836);
   9->SetBinContent(24,589.4631);
   9->SetBinContent(25,550.7805);
   9->SetBinContent(26,511.2188);
   9->SetBinContent(27,467.2612);
   9->SetBinContent(28,450.5574);
   9->SetBinContent(29,421.985);
   9->SetBinContent(30,410.556);
   9->SetBinContent(31,376.2692);
   9->SetBinContent(32,355.1696);
   9->SetBinContent(33,323.0806);
   9->SetBinContent(34,322.2014);
   9->SetBinContent(35,306.8163);
   9->SetBinContent(36,289.2333);
   9->SetBinContent(37,260.2213);
   9->SetBinContent(38,260.6609);
   9->SetBinContent(39,246.1552);
   9->SetBinContent(40,232.9684);
   9->SetBinContent(41,224.6168);
   9->SetBinContent(42,203.0784);
   9->SetBinContent(43,206.5948);
   9->SetBinContent(44,189.8916);
   9->SetBinContent(45,177.5839);
   9->SetBinContent(46,162.6389);
   9->SetBinContent(47,169.6718);
   9->SetBinContent(48,158.2433);
   9->SetBinContent(49,135.3861);
   9->SetBinContent(50,141.9795);
   9->SetBinContent(51,2922.485);
   9->SetEntries(83766);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,500);
   10->SetBinContent(1,2332.159);
   10->SetBinContent(2,6817.821);
   10->SetBinContent(3,10698.78);
   10->SetBinContent(4,13813.23);
   10->SetBinContent(5,16228.37);
   10->SetBinContent(6,17323.46);
   10->SetBinContent(7,17732.92);
   10->SetBinContent(8,17504.47);
   10->SetBinContent(9,16828.44);
   10->SetBinContent(10,15862.56);
   10->SetBinContent(11,14747.39);
   10->SetBinContent(12,13520.18);
   10->SetBinContent(13,12382.01);
   10->SetBinContent(14,11390.52);
   10->SetBinContent(15,10273.9);
   10->SetBinContent(16,9350.213);
   10->SetBinContent(17,8495.791);
   10->SetBinContent(18,7724.981);
   10->SetBinContent(19,6989.517);
   10->SetBinContent(20,6335.09);
   10->SetBinContent(21,5752.374);
   10->SetBinContent(22,5199.391);
   10->SetBinContent(23,4721.325);
   10->SetBinContent(24,4298.936);
   10->SetBinContent(25,3905.405);
   10->SetBinContent(26,3596.12);
   10->SetBinContent(27,3227.95);
   10->SetBinContent(28,2968.22);
   10->SetBinContent(29,2720.442);
   10->SetBinContent(30,2460.42);
   10->SetBinContent(31,2320.207);
   10->SetBinContent(32,2102.162);
   10->SetBinContent(33,1903.356);
   10->SetBinContent(34,1714.462);
   10->SetBinContent(35,1609.229);
   10->SetBinContent(36,1503.705);
   10->SetBinContent(37,1338.713);
   10->SetBinContent(38,1229.982);
   10->SetBinContent(39,1151.859);
   10->SetBinContent(40,1077.234);
   10->SetBinContent(41,969.3894);
   10->SetBinContent(42,914.5981);
   10->SetBinContent(43,832.7027);
   10->SetBinContent(44,751.973);
   10->SetBinContent(45,730.9891);
   10->SetBinContent(46,663.6658);
   10->SetBinContent(47,641.5162);
   10->SetBinContent(48,577.6902);
   10->SetBinContent(49,526.1048);
   10->SetBinContent(50,492.0039);
   10->SetBinContent(51,6720.167);
   10->SetEntries(1046715);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,500);
   11->SetBinContent(1,23939.71);
   11->SetBinContent(2,35082.95);
   11->SetBinContent(3,22072.3);
   11->SetBinContent(4,11969.92);
   11->SetBinContent(5,8296.327);
   11->SetBinContent(6,5724.772);
   11->SetBinContent(7,3459.354);
   11->SetBinContent(8,2112.348);
   11->SetBinContent(9,1438.845);
   11->SetBinContent(10,1561.3);
   11->SetBinContent(11,1316.39);
   11->SetBinContent(12,1040.866);
   11->SetBinContent(13,1224.549);
   11->SetBinContent(14,826.5701);
   11->SetBinContent(15,581.6605);
   11->SetBinContent(16,520.433);
   11->SetBinContent(17,183.6823);
   11->SetBinContent(18,122.4548);
   11->SetBinContent(19,30.61371);
   11->SetBinContent(21,30.61371);
   11->SetBinContent(22,30.61371);
   11->SetBinContent(23,122.4548);
   11->SetBinContent(27,30.61371);
   11->SetBinContent(31,30.61371);
   11->SetEntries(3977);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,500);
   12->SetBinContent(1,9812.086);
   12->SetBinContent(2,15440.58);
   12->SetBinContent(3,13608.08);
   12->SetBinContent(4,10399.06);
   12->SetBinContent(5,7238.712);
   12->SetBinContent(6,4994.615);
   12->SetBinContent(7,3622.942);
   12->SetBinContent(8,2708.528);
   12->SetBinContent(9,1971.711);
   12->SetBinContent(10,1330.226);
   12->SetBinContent(11,990.8696);
   12->SetBinContent(12,637.91);
   12->SetBinContent(13,423.1273);
   12->SetBinContent(14,304.9968);
   12->SetBinContent(15,206.9117);
   12->SetBinContent(16,158.9425);
   12->SetBinContent(17,137.4638);
   12->SetBinContent(18,101.6659);
   12->SetBinContent(19,79.47121);
   12->SetBinContent(20,80.90313);
   12->SetBinContent(21,57.99249);
   12->SetBinContent(22,48.68504);
   12->SetBinContent(23,50.83291);
   12->SetBinContent(24,40.09354);
   12->SetBinContent(25,33.64993);
   12->SetBinContent(26,24.3425);
   12->SetBinContent(27,32.21801);
   12->SetBinContent(28,20.76272);
   12->SetBinContent(29,16.46698);
   12->SetBinContent(30,17.8989);
   12->SetBinContent(31,16.46698);
   12->SetBinContent(32,14.31912);
   12->SetBinContent(33,12.88721);
   12->SetBinContent(34,7.875515);
   12->SetBinContent(35,13.60316);
   12->SetBinContent(36,5.727648);
   12->SetBinContent(37,5.727648);
   12->SetBinContent(38,6.443604);
   12->SetBinContent(39,5.011692);
   12->SetBinContent(40,2.863824);
   12->SetBinContent(41,7.159559);
   12->SetBinContent(42,5.011692);
   12->SetBinContent(43,3.57978);
   12->SetBinContent(44,2.863824);
   12->SetBinContent(45,3.57978);
   12->SetBinContent(46,2.147868);
   12->SetBinContent(47,3.57978);
   12->SetBinContent(48,4.295736);
   12->SetBinContent(49,1.431912);
   12->SetBinContent(50,4.295736);
   12->SetBinContent(51,20.04676);
   12->SetEntries(104400);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,500);
   13->SetBinContent(1,435713.6);
   13->SetBinContent(2,438668.7);
   13->SetBinContent(3,222946.9);
   13->SetBinContent(4,123405.7);
   13->SetBinContent(5,70568.98);
   13->SetBinContent(6,40028.41);
   13->SetBinContent(7,24680.65);
   13->SetBinContent(8,13377.38);
   13->SetBinContent(9,7570.118);
   13->SetBinContent(10,6222.016);
   13->SetBinContent(11,4148.012);
   13->SetBinContent(12,3940.611);
   13->SetBinContent(13,3059.159);
   13->SetBinContent(14,2644.359);
   13->SetBinContent(15,1814.757);
   13->SetBinContent(16,622.202);
   13->SetBinContent(17,311.101);
   13->SetBinContent(18,155.5505);
   13->SetBinContent(19,311.101);
   13->SetBinContent(20,51.85017);
   13->SetBinContent(21,103.7003);
   13->SetBinContent(22,51.85017);
   13->SetBinContent(23,103.7003);
   13->SetBinContent(24,51.85017);
   13->SetBinContent(25,103.7003);
   13->SetBinContent(27,51.85017);
   13->SetBinContent(32,51.85017);
   13->SetEntries(27017);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,500);
   14->SetBinContent(1,1369.675);
   14->SetBinContent(2,4053.511);
   14->SetBinContent(3,6228.295);
   14->SetBinContent(4,8310.54);
   14->SetBinContent(5,9828.341);
   14->SetBinContent(6,10735.32);
   14->SetBinContent(7,11151.79);
   14->SetBinContent(8,11568.26);
   14->SetBinContent(9,11299.87);
   14->SetBinContent(10,10522.46);
   14->SetBinContent(11,10707.55);
   14->SetBinContent(12,10161.52);
   14->SetBinContent(13,9569.204);
   14->SetBinContent(14,9550.694);
   14->SetBinContent(15,9236.028);
   14->SetBinContent(16,8514.147);
   14->SetBinContent(17,8023.648);
   14->SetBinContent(18,7810.797);
   14->SetBinContent(19,7153.735);
   14->SetBinContent(20,6653.998);
   14->SetBinContent(21,6089.479);
   14->SetBinContent(22,5756.321);
   14->SetBinContent(23,5469.435);
   14->SetBinContent(24,4886.408);
   14->SetBinContent(25,4932.68);
   14->SetBinContent(26,4229.346);
   14->SetBinContent(27,3923.947);
   14->SetBinContent(28,4044.257);
   14->SetBinContent(29,3923.947);
   14->SetBinContent(30,3396.432);
   14->SetBinContent(31,2887.427);
   14->SetBinContent(32,2813.39);
   14->SetBinContent(33,2693.08);
   14->SetBinContent(34,2304.385);
   14->SetBinContent(35,2063.764);
   14->SetBinContent(36,2137.801);
   14->SetBinContent(37,2026.746);
   14->SetBinContent(38,1712.092);
   14->SetBinContent(39,1573.275);
   14->SetBinContent(40,1527.002);
   14->SetBinContent(41,1258.621);
   14->SetBinContent(42,1267.875);
   14->SetBinContent(43,1212.348);
   14->SetBinContent(44,1230.857);
   14->SetBinContent(45,1184.585);
   14->SetBinContent(46,1055.022);
   14->SetBinContent(47,1045.767);
   14->SetBinContent(48,749.6207);
   14->SetBinContent(49,869.9302);
   14->SetBinContent(50,842.1665);
   14->SetBinContent(51,11660.81);
   14->SetEntries(28442);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,500);
   15->SetBinContent(1,20922.96);
   15->SetBinContent(2,30795.46);
   15->SetBinContent(3,16211.08);
   15->SetBinContent(4,7797.022);
   15->SetBinContent(5,4431.397);
   15->SetBinContent(6,2860.772);
   15->SetBinContent(7,1654.759);
   15->SetBinContent(8,1121.87);
   15->SetBinContent(9,897.4962);
   15->SetBinContent(10,617.0286);
   15->SetBinContent(11,617.0286);
   15->SetBinContent(12,504.8416);
   15->SetBinContent(13,364.6078);
   15->SetBinContent(14,448.7481);
   15->SetBinContent(15,476.7948);
   15->SetBinContent(16,448.7481);
   15->SetBinContent(17,84.14027);
   15->SetBinContent(18,112.187);
   15->SetBinContent(19,140.2338);
   15->SetBinContent(20,28.04676);
   15->SetBinContent(21,56.09351);
   15->SetBinContent(22,56.09351);
   15->SetBinContent(24,56.09351);
   15->SetBinContent(25,28.04676);
   15->SetBinContent(26,28.04676);
   15->SetBinContent(27,28.04676);
   15->SetBinContent(28,28.04676);
   15->SetBinContent(30,56.09351);
   15->SetBinContent(35,28.04676);
   15->SetBinContent(49,28.04676);
   15->SetEntries(3242);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,500);
   16->SetBinContent(1,1316.854);
   16->SetBinContent(2,4247.927);
   16->SetBinContent(3,5787.773);
   16->SetBinContent(4,6764.779);
   16->SetBinContent(5,7922.318);
   16->SetBinContent(6,8017.895);
   16->SetBinContent(7,7656.828);
   16->SetBinContent(8,7009.03);
   16->SetBinContent(9,7508.153);
   16->SetBinContent(10,6860.355);
   16->SetBinContent(11,5883.35);
   16->SetBinContent(12,5670.957);
   16->SetBinContent(13,5745.294);
   16->SetBinContent(14,4768.289);
   16->SetBinContent(15,4364.743);
   16->SetBinContent(16,4354.123);
   16->SetBinContent(17,3748.796);
   16->SetBinContent(18,3472.679);
   16->SetBinContent(19,2952.306);
   16->SetBinContent(20,3132.844);
   16->SetBinContent(21,2410.692);
   16->SetBinContent(22,2410.692);
   16->SetBinContent(23,2070.856);
   16->SetBinContent(24,2123.956);
   16->SetBinContent(25,1826.602);
   16->SetBinContent(26,1412.431);
   16->SetBinContent(27,1316.854);
   16->SetBinContent(28,1231.896);
   16->SetBinContent(29,1051.36);
   16->SetBinContent(30,1008.881);
   16->SetBinContent(31,1104.459);
   16->SetBinContent(32,923.9222);
   16->SetBinContent(33,923.9222);
   16->SetBinContent(34,764.6251);
   16->SetBinContent(35,817.7241);
   16->SetBinContent(36,562.8486);
   16->SetBinContent(37,541.609);
   16->SetBinContent(38,520.3694);
   16->SetBinContent(39,446.0309);
   16->SetBinContent(40,318.5935);
   16->SetBinContent(41,318.5935);
   16->SetBinContent(42,371.6924);
   16->SetBinContent(43,297.354);
   16->SetBinContent(44,191.1562);
   16->SetBinContent(45,201.7759);
   16->SetBinContent(46,276.1144);
   16->SetBinContent(47,159.2968);
   16->SetBinContent(48,169.9166);
   16->SetBinContent(49,254.8748);
   16->SetBinContent(50,169.9166);
   16->SetBinContent(51,2134.575);
   16->SetEntries(12761);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,500);
   17->SetBinContent(1,65199.43);
   17->SetBinContent(2,73410.17);
   17->SetBinContent(3,41297.04);
   17->SetBinContent(4,25544.58);
   17->SetBinContent(5,16056.61);
   17->SetBinContent(6,11555.91);
   17->SetBinContent(7,7480.942);
   17->SetBinContent(8,7176.838);
   17->SetBinContent(9,5048.11);
   17->SetBinContent(10,4196.619);
   17->SetBinContent(11,2676.105);
   17->SetBinContent(12,2189.54);
   17->SetBinContent(13,1946.258);
   17->SetBinContent(14,1459.693);
   17->SetBinContent(15,1459.693);
   17->SetBinContent(16,1277.232);
   17->SetBinContent(17,790.6673);
   17->SetBinContent(18,608.2056);
   17->SetBinContent(19,851.4879);
   17->SetBinContent(20,425.7439);
   17->SetBinContent(21,669.0262);
   17->SetBinContent(22,364.9234);
   17->SetBinContent(23,486.5645);
   17->SetBinContent(24,486.5645);
   17->SetBinContent(25,182.4617);
   17->SetBinContent(26,304.1028);
   17->SetBinContent(27,304.1028);
   17->SetBinContent(28,121.6411);
   17->SetBinContent(30,182.4617);
   17->SetBinContent(31,60.82056);
   17->SetBinContent(32,121.6411);
   17->SetBinContent(33,243.2822);
   17->SetBinContent(34,60.82056);
   17->SetBinContent(35,182.4617);
   17->SetBinContent(36,60.82056);
   17->SetBinContent(37,121.6411);
   17->SetBinContent(39,121.6411);
   17->SetBinContent(42,60.82056);
   17->SetBinContent(45,60.82056);
   17->SetBinContent(46,60.82056);
   17->SetBinContent(49,121.6411);
   17->SetBinContent(50,60.82056);
   17->SetBinContent(51,182.4617);
   17->SetEntries(4526);
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
