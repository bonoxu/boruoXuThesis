{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:41:11 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-134.9206,-3.298784,658.7302,6.120382);
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
   
   TH1F *THStack_stack_5 = new TH1F("THStack_stack_5","",50,0,500);
   THStack_stack_5->SetMinimum(0.02492678);
   THStack_stack_5->SetMaximum(232728.1);
   THStack_stack_5->SetDirectory(0);
   THStack_stack_5->SetStats(0);
   THStack_stack_5->SetLineWidth(2);
   THStack_stack_5->SetMarkerSize(1.2);
   THStack_stack_5->GetXaxis()->SetTitle("E_{W*} / GeV");
   THStack_stack_5->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_5->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_5->GetXaxis()->SetLabelColor(ci);
   THStack_stack_5->GetXaxis()->SetLabelFont(42);
   THStack_stack_5->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_5->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_5->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_5->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_5->GetXaxis()->SetTitleColor(ci);
   THStack_stack_5->GetXaxis()->SetTitleFont(42);
   THStack_stack_5->GetYaxis()->SetTitle("Number of events");
   THStack_stack_5->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_5->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_5->GetYaxis()->SetLabelColor(ci);
   THStack_stack_5->GetYaxis()->SetLabelFont(42);
   THStack_stack_5->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_5->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_5->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_5->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_5->GetYaxis()->SetTitleColor(ci);
   THStack_stack_5->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_5->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_5->GetZaxis()->SetLabelColor(ci);
   THStack_stack_5->GetZaxis()->SetLabelFont(42);
   THStack_stack_5->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_5->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_5->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_5->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_5->GetZaxis()->SetTitleColor(ci);
   THStack_stack_5->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_5);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,500);
   0->SetBinContent(1,0.019798);
   0->SetBinContent(2,0.6731322);
   0->SetBinContent(3,2.355961);
   0->SetBinContent(4,4.68222);
   0->SetBinContent(5,5.83052);
   0->SetBinContent(6,6.63235);
   0->SetBinContent(7,6.424468);
   0->SetBinContent(8,5.810721);
   0->SetBinContent(9,5.147479);
   0->SetBinContent(10,5.068286);
   0->SetBinContent(11,4.741614);
   0->SetBinContent(12,4.068473);
   0->SetBinContent(13,3.801201);
   0->SetBinContent(14,3.35575);
   0->SetBinContent(15,3.236964);
   0->SetBinContent(16,2.652928);
   0->SetBinContent(17,2.603434);
   0->SetBinContent(18,2.415355);
   0->SetBinContent(19,2.296568);
   0->SetBinContent(20,1.554145);
   0->SetBinContent(21,1.494751);
   0->SetBinContent(22,1.672933);
   0->SetBinContent(23,1.366064);
   0->SetBinContent(24,1.187881);
   0->SetBinContent(25,0.9206077);
   0->SetBinContent(26,1.019598);
   0->SetBinContent(27,0.8612136);
   0->SetBinContent(28,0.7424253);
   0->SetBinContent(29,0.6533341);
   0->SetBinContent(30,0.7622234);
   0->SetBinContent(31,0.5444449);
   0->SetBinContent(32,0.4949498);
   0->SetBinContent(33,0.4454549);
   0->SetBinContent(34,0.316768);
   0->SetBinContent(35,0.3761619);
   0->SetBinContent(36,0.356364);
   0->SetBinContent(37,0.168283);
   0->SetBinContent(38,0.29697);
   0->SetBinContent(39,0.3761619);
   0->SetBinContent(40,0.207879);
   0->SetBinContent(41,0.227677);
   0->SetBinContent(42,0.217778);
   0->SetBinContent(43,0.138586);
   0->SetBinContent(44,0.108889);
   0->SetBinContent(45,0.178182);
   0->SetBinContent(46,0.08909099);
   0->SetBinContent(47,0.09898999);
   0->SetBinContent(48,0.08909099);
   0->SetBinContent(49,0.118788);
   0->SetBinContent(50,0.05939399);
   0->SetBinContent(51,1.108689);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,500);
   1->SetBinContent(1,0.3810732);
   1->SetBinContent(2,3.68208);
   1->SetBinContent(3,5.156909);
   1->SetBinContent(4,5.636971);
   1->SetBinContent(5,5.340026);
   1->SetBinContent(6,4.939149);
   1->SetBinContent(7,4.44424);
   1->SetBinContent(8,3.79096);
   1->SetBinContent(9,3.187171);
   1->SetBinContent(10,2.855581);
   1->SetBinContent(11,2.58833);
   1->SetBinContent(12,2.266639);
   1->SetBinContent(13,2.093421);
   1->SetBinContent(14,1.826174);
   1->SetBinContent(15,1.806378);
   1->SetBinContent(16,1.563879);
   1->SetBinContent(17,1.375818);
   1->SetBinContent(18,1.242195);
   1->SetBinContent(19,1.128369);
   1->SetBinContent(20,0.935359);
   1->SetBinContent(21,0.9897977);
   1->SetBinContent(22,0.8215326);
   1->SetBinContent(23,0.7819408);
   1->SetBinContent(24,0.6582165);
   1->SetBinContent(25,0.5344921);
   1->SetBinContent(26,0.5295432);
   1->SetBinContent(27,0.4454103);
   1->SetBinContent(28,0.3315832);
   1->SetBinContent(29,0.4008692);
   1->SetBinContent(30,0.3662262);
   1->SetBinContent(31,0.4206652);
   1->SetBinContent(32,0.3761242);
   1->SetBinContent(33,0.2771441);
   1->SetBinContent(34,0.2622971);
   1->SetBinContent(35,0.2276541);
   1->SetBinContent(36,0.2227051);
   1->SetBinContent(37,0.2375521);
   1->SetBinContent(38,0.133623);
   1->SetBinContent(39,0.1682661);
   1->SetBinContent(40,0.1732151);
   1->SetBinContent(41,0.1435211);
   1->SetBinContent(42,0.133623);
   1->SetBinContent(43,0.1484701);
   1->SetBinContent(44,0.103929);
   1->SetBinContent(45,0.1534191);
   1->SetBinContent(46,0.069286);
   1->SetBinContent(47,0.09403102);
   1->SetBinContent(48,0.059388);
   1->SetBinContent(49,0.07918401);
   1->SetBinContent(50,0.08908202);
   1->SetBinContent(51,0.9601039);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,500);
   2->SetBinContent(1,0.7868898);
   2->SetBinContent(2,5.587481);
   2->SetBinContent(3,8.339144);
   2->SetBinContent(4,9.521863);
   2->SetBinContent(5,9.744551);
   2->SetBinContent(6,9.442685);
   2->SetBinContent(7,8.695444);
   2->SetBinContent(8,8.240171);
   2->SetBinContent(9,6.780212);
   2->SetBinContent(10,6.270455);
   2->SetBinContent(11,5.805241);
   2->SetBinContent(12,4.869862);
   2->SetBinContent(13,4.681797);
   2->SetBinContent(14,4.201735);
   2->SetBinContent(15,3.701876);
   2->SetBinContent(16,3.40988);
   2->SetBinContent(17,3.325745);
   2->SetBinContent(18,2.825887);
   2->SetBinContent(19,2.474501);
   2->SetBinContent(20,2.37057);
   2->SetBinContent(21,2.048879);
   2->SetBinContent(22,1.98949);
   2->SetBinContent(23,1.786582);
   2->SetBinContent(24,1.588624);
   2->SetBinContent(25,1.306532);
   2->SetBinContent(26,1.143216);
   2->SetBinContent(27,1.133318);
   2->SetBinContent(28,0.9452569);
   2->SetBinContent(29,0.8611244);
   2->SetBinContent(30,0.9749508);
   2->SetBinContent(31,0.9056652);
   2->SetBinContent(32,0.6978083);
   2->SetBinContent(33,0.6136757);
   2->SetBinContent(34,0.5988288);
   2->SetBinContent(35,0.5443901);
   2->SetBinContent(36,0.4701553);
   2->SetBinContent(37,0.4602573);
   2->SetBinContent(38,0.4157162);
   2->SetBinContent(39,0.4701553);
   2->SetBinContent(40,0.3513792);
   2->SetBinContent(41,0.3315832);
   2->SetBinContent(42,0.3018892);
   2->SetBinContent(43,0.2672461);
   2->SetBinContent(44,0.2474501);
   2->SetBinContent(45,0.2969401);
   2->SetBinContent(46,0.1979601);
   2->SetBinContent(47,0.1534191);
   2->SetBinContent(48,0.1534191);
   2->SetBinContent(49,0.1583681);
   2->SetBinContent(50,0.103929);
   2->SetBinContent(51,2.133014);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,500);
   3->SetBinContent(1,3.714153);
   3->SetBinContent(2,25.49274);
   3->SetBinContent(3,40.21416);
   3->SetBinContent(4,40.21416);
   3->SetBinContent(5,45.98779);
   3->SetBinContent(6,42.51011);
   3->SetBinContent(7,38.49221);
   3->SetBinContent(8,33.56268);
   3->SetBinContent(9,29.44334);
   3->SetBinContent(10,26.16806);
   3->SetBinContent(11,23.4668);
   3->SetBinContent(12,20.96813);
   3->SetBinContent(13,18.77335);
   3->SetBinContent(14,16.17339);
   3->SetBinContent(15,15.63314);
   3->SetBinContent(16,11.98654);
   3->SetBinContent(17,11.20995);
   3->SetBinContent(18,11.71642);
   3->SetBinContent(19,8.711351);
   3->SetBinContent(20,8.812646);
   3->SetBinContent(21,7.765935);
   3->SetBinContent(22,7.630876);
   3->SetBinContent(23,6.75299);
   3->SetBinContent(24,4.862159);
   3->SetBinContent(25,5.030983);
   3->SetBinContent(26,5.402397);
   3->SetBinContent(27,4.389452);
   3->SetBinContent(28,4.625805);
   3->SetBinContent(29,3.477797);
   3->SetBinContent(30,3.173912);
   3->SetBinContent(31,3.173912);
   3->SetBinContent(32,3.882978);
   3->SetBinContent(33,2.56614);
   3->SetBinContent(34,2.093429);
   3->SetBinContent(35,2.160959);
   3->SetBinContent(36,2.397315);
   3->SetBinContent(37,2.194724);
   3->SetBinContent(38,1.755779);
   3->SetBinContent(39,1.519425);
   3->SetBinContent(40,1.181775);
   3->SetBinContent(41,1.384365);
   3->SetBinContent(42,1.01295);
   3->SetBinContent(43,0.9116551);
   3->SetBinContent(44,1.249305);
   3->SetBinContent(45,0.6753);
   3->SetBinContent(46,0.9791852);
   3->SetBinContent(47,0.60777);
   3->SetBinContent(48,0.7765951);
   3->SetBinContent(49,0.9116551);
   3->SetBinContent(50,0.7765951);
   3->SetBinContent(51,9.015235);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,500);
   4->SetBinContent(1,8.090398);
   4->SetBinContent(2,53.92121);
   4->SetBinContent(3,62.60195);
   4->SetBinContent(4,55.911);
   4->SetBinContent(5,50.48827);
   4->SetBinContent(6,44.21278);
   4->SetBinContent(7,37.49996);
   4->SetBinContent(8,31.46499);
   4->SetBinContent(9,25.6924);
   4->SetBinContent(10,22.41253);
   4->SetBinContent(11,19.59183);
   4->SetBinContent(12,17.53644);
   4->SetBinContent(13,16.66181);
   4->SetBinContent(14,13.44753);
   4->SetBinContent(15,12.24491);
   4->SetBinContent(16,11.32654);
   4->SetBinContent(17,9.293019);
   4->SetBinContent(18,8.330922);
   4->SetBinContent(19,7.521885);
   4->SetBinContent(20,7.346959);
   4->SetBinContent(21,6.406727);
   4->SetBinContent(22,5.400898);
   4->SetBinContent(23,5.029179);
   4->SetBinContent(24,5.029179);
   4->SetBinContent(25,4.045216);
   4->SetBinContent(26,3.892154);
   4->SetBinContent(27,3.586029);
   4->SetBinContent(28,2.711385);
   4->SetBinContent(29,3.586029);
   4->SetBinContent(30,2.776984);
   4->SetBinContent(31,2.252198);
   4->SetBinContent(32,2.274064);
   4->SetBinContent(33,2.077269);
   4->SetBinContent(34,1.967939);
   4->SetBinContent(35,1.880475);
   4->SetBinContent(36,2.164733);
   4->SetBinContent(37,1.574351);
   4->SetBinContent(38,1.355692);
   4->SetBinContent(39,1.246362);
   4->SetBinContent(40,1.20263);
   4->SetBinContent(41,1.158898);
   4->SetBinContent(42,0.9183723);
   4->SetBinContent(43,0.9402384);
   4->SetBinContent(44,0.8309082);
   4->SetBinContent(45,1.0933);
   4->SetBinContent(46,1.027702);
   4->SetBinContent(47,0.634114);
   4->SetBinContent(48,0.568516);
   4->SetBinContent(49,0.634114);
   4->SetBinContent(50,0.5247839);
   4->SetBinContent(51,7.631215);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,500);
   5->SetBinContent(1,7.501875);
   5->SetBinContent(2,109.3277);
   5->SetBinContent(3,179.6908);
   5->SetBinContent(4,193.2981);
   5->SetBinContent(5,182.075);
   5->SetBinContent(6,165.7926);
   5->SetBinContent(7,148.8124);
   5->SetBinContent(8,128.0524);
   5->SetBinContent(9,107.5832);
   5->SetBinContent(10,94.03397);
   5->SetBinContent(11,79.96136);
   5->SetBinContent(12,72.98322);
   5->SetBinContent(13,67.98221);
   5->SetBinContent(14,64.31868);
   5->SetBinContent(15,54.78127);
   5->SetBinContent(16,46.81403);
   5->SetBinContent(17,44.72045);
   5->SetBinContent(18,36.52058);
   5->SetBinContent(19,32.56604);
   5->SetBinContent(20,31.34481);
   5->SetBinContent(21,28.43715);
   5->SetBinContent(22,27.44855);
   5->SetBinContent(23,23.72674);
   5->SetBinContent(24,21.51692);
   5->SetBinContent(25,20.52832);
   5->SetBinContent(26,18.3185);
   5->SetBinContent(27,15.00375);
   5->SetBinContent(28,14.42221);
   5->SetBinContent(29,13.08467);
   5->SetBinContent(30,11.86343);
   5->SetBinContent(31,12.56128);
   5->SetBinContent(32,10.6422);
   5->SetBinContent(33,9.537269);
   5->SetBinContent(34,8.257878);
   5->SetBinContent(35,9.304652);
   5->SetBinContent(36,7.036643);
   5->SetBinContent(37,8.025262);
   5->SetBinContent(38,6.106177);
   5->SetBinContent(39,6.164331);
   5->SetBinContent(40,5.699098);
   5->SetBinContent(41,5.117557);
   5->SetBinContent(42,5.175711);
   5->SetBinContent(43,4.419708);
   5->SetBinContent(44,4.245245);
   5->SetBinContent(45,3.721859);
   5->SetBinContent(46,3.954475);
   5->SetBinContent(47,3.663705);
   5->SetBinContent(48,3.547396);
   5->SetBinContent(49,4.128937);
   5->SetBinContent(50,1.686466);
   5->SetBinContent(51,35.29933);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,500);
   6->SetBinContent(1,532.3813);
   6->SetBinContent(2,4844.571);
   6->SetBinContent(3,6536.213);
   6->SetBinContent(4,5979.348);
   6->SetBinContent(5,5298.833);
   6->SetBinContent(6,4580.608);
   6->SetBinContent(7,3915);
   6->SetBinContent(8,3378.305);
   6->SetBinContent(9,2717.083);
   6->SetBinContent(10,2298.776);
   6->SetBinContent(11,2098.831);
   6->SetBinContent(12,1868.167);
   6->SetBinContent(13,1651.529);
   6->SetBinContent(14,1511.197);
   6->SetBinContent(15,1344.553);
   6->SetBinContent(16,1205.975);
   6->SetBinContent(17,1124.407);
   6->SetBinContent(18,1005.125);
   6->SetBinContent(19,891.9821);
   6->SetBinContent(20,834.0952);
   6->SetBinContent(21,777.0853);
   6->SetBinContent(22,670.0821);
   6->SetBinContent(23,640.2615);
   6->SetBinContent(24,581.4975);
   6->SetBinContent(25,542.0291);
   6->SetBinContent(26,494.6671);
   6->SetBinContent(27,434.1489);
   6->SetBinContent(28,423.624);
   6->SetBinContent(29,402.5742);
   6->SetBinContent(30,347.3184);
   6->SetBinContent(31,305.2188);
   6->SetBinContent(32,268.3817);
   6->SetBinContent(33,238.5614);
   6->SetBinContent(34,226.2826);
   6->SetBinContent(35,235.9302);
   6->SetBinContent(36,202.6019);
   6->SetBinContent(37,169.2737);
   6->SetBinContent(38,186.8149);
   6->SetBinContent(39,153.4866);
   6->SetBinContent(40,128.0518);
   6->SetBinContent(41,142.0848);
   6->SetBinContent(42,135.0683);
   6->SetBinContent(43,115.7729);
   6->SetBinContent(44,107.0022);
   6->SetBinContent(45,107.0022);
   6->SetBinContent(46,94.72328);
   6->SetBinContent(47,72.79659);
   6->SetBinContent(48,82.44434);
   6->SetBinContent(49,71.91953);
   6->SetBinContent(50,70.16539);
   6->SetBinContent(51,1077.045);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,500);
   7->SetBinContent(1,36.87669);
   7->SetBinContent(2,598.478);
   7->SetBinContent(3,1031.351);
   7->SetBinContent(4,1066.418);
   7->SetBinContent(5,982.5968);
   7->SetBinContent(6,910.3587);
   7->SetBinContent(7,785.3578);
   7->SetBinContent(8,704.2798);
   7->SetBinContent(9,604.9697);
   7->SetBinContent(10,523.6155);
   7->SetBinContent(11,454.278);
   7->SetBinContent(12,410.0788);
   7->SetBinContent(13,382.7305);
   7->SetBinContent(14,347.5093);
   7->SetBinContent(15,306.7631);
   7->SetBinContent(16,290.879);
   7->SetBinContent(17,279.553);
   7->SetBinContent(18,248.7517);
   7->SetBinContent(19,218.6409);
   7->SetBinContent(20,206.2099);
   7->SetBinContent(21,191.1546);
   7->SetBinContent(22,169.3312);
   7->SetBinContent(23,153.4471);
   7->SetBinContent(24,152.4802);
   7->SetBinContent(25,135.9055);
   7->SetBinContent(26,115.8784);
   7->SetBinContent(27,110.492);
   7->SetBinContent(28,104.553);
   7->SetBinContent(29,92.81324);
   7->SetBinContent(30,87.70299);
   7->SetBinContent(31,83.1452);
   7->SetBinContent(32,79.55421);
   7->SetBinContent(33,71.26731);
   7->SetBinContent(34,66.70952);
   7->SetBinContent(35,61.32303);
   7->SetBinContent(36,49.99761);
   7->SetBinContent(37,50.96441);
   7->SetBinContent(38,46.95908);
   7->SetBinContent(39,45.02547);
   7->SetBinContent(40,39.50087);
   7->SetBinContent(41,35.0812);
   7->SetBinContent(42,38.53407);
   7->SetBinContent(43,32.45701);
   7->SetBinContent(44,31.21398);
   7->SetBinContent(45,26.37995);
   7->SetBinContent(46,25.27503);
   7->SetBinContent(47,24.9988);
   7->SetBinContent(48,23.34142);
   7->SetBinContent(49,21.2697);
   7->SetBinContent(50,16.29756);
   7->SetBinContent(51,270.7131);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,500);
   8->SetBinContent(1,6.46716);
   8->SetBinContent(2,52.66119);
   8->SetBinContent(3,103.4747);
   8->SetBinContent(4,111.7896);
   8->SetBinContent(5,99.77914);
   8->SetBinContent(6,84.07316);
   8->SetBinContent(7,101.6269);
   8->SetBinContent(8,75.75822);
   8->SetBinContent(9,82.2254);
   8->SetBinContent(10,59.12836);
   8->SetBinContent(11,56.35671);
   8->SetBinContent(12,64.67165);
   8->SetBinContent(13,63.74776);
   8->SetBinContent(14,56.35671);
   8->SetBinContent(15,65.59553);
   8->SetBinContent(16,49.88954);
   8->SetBinContent(17,50.81342);
   8->SetBinContent(18,48.96566);
   8->SetBinContent(19,48.04178);
   8->SetBinContent(20,52.66119);
   8->SetBinContent(21,49.88954);
   8->SetBinContent(22,43.42237);
   8->SetBinContent(23,27.71639);
   8->SetBinContent(24,38.80296);
   8->SetBinContent(25,41.57461);
   8->SetBinContent(26,25.86863);
   8->SetBinContent(27,30.48803);
   8->SetBinContent(28,30.48803);
   8->SetBinContent(29,22.17311);
   8->SetBinContent(30,18.4776);
   8->SetBinContent(31,24.94475);
   8->SetBinContent(32,24.94475);
   8->SetBinContent(33,15.70596);
   8->SetBinContent(34,18.4776);
   8->SetBinContent(35,15.70596);
   8->SetBinContent(36,19.40148);
   8->SetBinContent(37,11.08656);
   8->SetBinContent(38,11.08656);
   8->SetBinContent(39,19.40148);
   8->SetBinContent(40,5.54328);
   8->SetBinContent(41,13.8582);
   8->SetBinContent(42,11.08656);
   8->SetBinContent(43,11.08656);
   8->SetBinContent(44,8.31492);
   8->SetBinContent(45,11.08656);
   8->SetBinContent(46,10.16268);
   8->SetBinContent(47,2.77164);
   8->SetBinContent(48,6.46716);
   8->SetBinContent(49,3.69552);
   8->SetBinContent(50,5.54328);
   8->SetBinContent(51,146.8969);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,500);
   9->SetBinContent(1,22.41776);
   9->SetBinContent(2,306.8163);
   9->SetBinContent(3,479.1298);
   9->SetBinContent(4,535.3954);
   9->SetBinContent(5,525.2852);
   9->SetBinContent(6,498.4711);
   9->SetBinContent(7,487.0421);
   9->SetBinContent(8,497.5919);
   9->SetBinContent(9,440.8867);
   9->SetBinContent(10,393.4126);
   9->SetBinContent(11,371.8734);
   9->SetBinContent(12,375.8296);
   9->SetBinContent(13,362.2028);
   9->SetBinContent(14,351.2134);
   9->SetBinContent(15,349.8947);
   9->SetBinContent(16,319.564);
   9->SetBinContent(17,301.1018);
   9->SetBinContent(18,289.2333);
   9->SetBinContent(19,279.5626);
   9->SetBinContent(20,267.2545);
   9->SetBinContent(21,276.9252);
   9->SetBinContent(22,256.2651);
   9->SetBinContent(23,256.2651);
   9->SetBinContent(24,241.3201);
   9->SetBinContent(25,224.6168);
   9->SetBinContent(26,226.8146);
   9->SetBinContent(27,206.5948);
   9->SetBinContent(28,224.1772);
   9->SetBinContent(29,206.5948);
   9->SetBinContent(30,181.5399);
   9->SetBinContent(31,174.9465);
   9->SetBinContent(32,189.8916);
   9->SetBinContent(33,170.5509);
   9->SetBinContent(34,152.9685);
   9->SetBinContent(35,166.1553);
   9->SetBinContent(36,163.0784);
   9->SetBinContent(37,127.9136);
   9->SetBinContent(38,148.1334);
   9->SetBinContent(39,127.474);
   9->SetBinContent(40,131.4301);
   9->SetBinContent(41,135.8257);
   9->SetBinContent(42,115.1662);
   9->SetBinContent(43,107.2539);
   9->SetBinContent(44,116.0453);
   9->SetBinContent(45,110.3309);
   9->SetBinContent(46,106.8144);
   9->SetBinContent(47,100.6604);
   9->SetBinContent(48,99.78129);
   9->SetBinContent(49,87.91296);
   9->SetBinContent(50,88.7921);
   9->SetBinContent(51,3091.235);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,500);
   10->SetBinContent(1,1002.39);
   10->SetBinContent(2,11912.97);
   10->SetBinContent(3,16567.19);
   10->SetBinContent(4,15013.46);
   10->SetBinContent(5,12605.59);
   10->SetBinContent(6,10905.48);
   10->SetBinContent(7,9104.965);
   10->SetBinContent(8,7663.855);
   10->SetBinContent(9,6372.619);
   10->SetBinContent(10,5410.23);
   10->SetBinContent(11,4703.062);
   10->SetBinContent(12,4208.918);
   10->SetBinContent(13,3762.803);
   10->SetBinContent(14,3405.718);
   10->SetBinContent(15,3057.663);
   10->SetBinContent(16,2784.17);
   10->SetBinContent(17,2529.609);
   10->SetBinContent(18,2263.689);
   10->SetBinContent(19,2057.768);
   10->SetBinContent(20,1921.512);
   10->SetBinContent(21,1758.766);
   10->SetBinContent(22,1619.02);
   10->SetBinContent(23,1529.349);
   10->SetBinContent(24,1333.122);
   10->SetBinContent(25,1242.87);
   10->SetBinContent(26,1152.035);
   10->SetBinContent(27,1098.174);
   10->SetBinContent(28,1014.035);
   10->SetBinContent(29,936.8839);
   10->SetBinContent(30,841.6818);
   10->SetBinContent(31,790.4416);
   10->SetBinContent(32,745.8975);
   10->SetBinContent(33,659.4296);
   10->SetBinContent(34,610.5185);
   10->SetBinContent(35,564.2276);
   10->SetBinContent(36,553.1644);
   10->SetBinContent(37,512.4051);
   10->SetBinContent(38,470.7724);
   10->SetBinContent(39,439.3295);
   10->SetBinContent(40,406.7221);
   10->SetBinContent(41,380.2285);
   10->SetBinContent(42,364.216);
   10->SetBinContent(43,327.2415);
   10->SetBinContent(44,313.2669);
   10->SetBinContent(45,285.8999);
   10->SetBinContent(46,285.3177);
   10->SetBinContent(47,250.6723);
   10->SetBinContent(48,227.0901);
   10->SetBinContent(49,232.0395);
   10->SetBinContent(50,202.0523);
   10->SetBinContent(51,3325.331);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,500);
   11->SetBinContent(1,183.125);
   11->SetBinContent(2,1953.334);
   11->SetBinContent(3,3204.686);
   11->SetBinContent(4,2960.52);
   11->SetBinContent(5,2380.625);
   11->SetBinContent(6,2075.418);
   11->SetBinContent(7,2014.376);
   11->SetBinContent(8,1617.605);
   11->SetBinContent(9,1220.833);
   11->SetBinContent(10,1526.042);
   11->SetBinContent(11,885.1039);
   11->SetBinContent(12,915.6248);
   11->SetBinContent(13,1037.708);
   11->SetBinContent(14,671.4583);
   11->SetBinContent(15,427.2917);
   11->SetBinContent(16,427.2917);
   11->SetBinContent(17,518.8542);
   11->SetBinContent(18,366.25);
   11->SetBinContent(19,610.4166);
   11->SetBinContent(20,396.7708);
   11->SetBinContent(21,274.6875);
   11->SetBinContent(22,427.2917);
   11->SetBinContent(23,305.2083);
   11->SetBinContent(24,152.6042);
   11->SetBinContent(25,91.5625);
   11->SetBinContent(26,183.125);
   11->SetBinContent(27,244.1666);
   11->SetBinContent(28,274.6875);
   11->SetBinContent(29,244.1666);
   11->SetBinContent(30,274.6875);
   11->SetBinContent(31,183.125);
   11->SetBinContent(32,152.6042);
   11->SetBinContent(33,244.1666);
   11->SetBinContent(34,244.1666);
   11->SetBinContent(35,183.125);
   11->SetBinContent(36,213.6458);
   11->SetBinContent(37,122.0833);
   11->SetBinContent(38,244.1666);
   11->SetBinContent(39,122.0833);
   11->SetBinContent(40,61.04166);
   11->SetBinContent(41,30.52083);
   11->SetBinContent(42,30.52083);
   11->SetBinContent(43,91.5625);
   11->SetBinContent(44,122.0833);
   11->SetBinContent(45,122.0833);
   11->SetBinContent(46,91.5625);
   11->SetBinContent(47,30.52083);
   11->SetBinContent(48,61.04166);
   11->SetBinContent(49,30.52083);
   11->SetBinContent(50,30.52083);
   11->SetBinContent(51,1861.772);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,500);
   12->SetBinContent(1,234.1181);
   12->SetBinContent(2,1320.203);
   12->SetBinContent(3,1129.047);
   12->SetBinContent(4,925.0029);
   12->SetBinContent(5,748.1652);
   12->SetBinContent(6,652.9448);
   12->SetBinContent(7,581.3506);
   12->SetBinContent(8,513.3361);
   12->SetBinContent(9,427.423);
   12->SetBinContent(10,389.478);
   12->SetBinContent(11,355.8287);
   12->SetBinContent(12,363.7041);
   12->SetBinContent(13,311.4403);
   12->SetBinContent(14,299.2693);
   12->SetBinContent(15,271.3475);
   12->SetBinContent(16,261.3243);
   12->SetBinContent(17,252.733);
   12->SetBinContent(18,224.0947);
   12->SetBinContent(19,222.6627);
   12->SetBinContent(20,222.6627);
   12->SetBinContent(21,216.2191);
   12->SetBinContent(22,219.0829);
   12->SetBinContent(23,205.4798);
   12->SetBinContent(24,198.3202);
   12->SetBinContent(25,160.3744);
   12->SetBinContent(26,171.1138);
   12->SetBinContent(27,163.2383);
   12->SetBinContent(28,173.2617);
   12->SetBinContent(29,154.6468);
   12->SetBinContent(30,168.9659);
   12->SetBinContent(31,127.4404);
   12->SetBinContent(32,138.8957);
   12->SetBinContent(33,136.7478);
   12->SetBinContent(34,139.6116);
   12->SetBinContent(35,140.3276);
   12->SetBinContent(36,138.8957);
   12->SetBinContent(37,131.7361);
   12->SetBinContent(38,125.2925);
   12->SetBinContent(39,107.3936);
   12->SetBinContent(40,121.7127);
   12->SetBinContent(41,104.5297);
   12->SetBinContent(42,91.64249);
   12->SetBinContent(43,95.22228);
   12->SetBinContent(44,80.18717);
   12->SetBinContent(45,95.93824);
   12->SetBinContent(46,77.32334);
   12->SetBinContent(47,80.18717);
   12->SetBinContent(48,73.0276);
   12->SetBinContent(49,79.47121);
   12->SetBinContent(50,68.01589);
   12->SetBinContent(51,1890.093);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,500);
   13->SetBinContent(1,1768.375);
   13->SetBinContent(2,27982.05);
   13->SetBinContent(3,41973.21);
   13->SetBinContent(4,39216.59);
   13->SetBinContent(5,33651.33);
   13->SetBinContent(6,26265.67);
   13->SetBinContent(7,22780.88);
   13->SetBinContent(8,19608.17);
   13->SetBinContent(9,16435.45);
   13->SetBinContent(10,14355.02);
   13->SetBinContent(11,12222.58);
   13->SetBinContent(12,11130.36);
   13->SetBinContent(13,9778.078);
   13->SetBinContent(14,8685.853);
   13->SetBinContent(15,7177.532);
   13->SetBinContent(16,7697.644);
   13->SetBinContent(17,6085.296);
   13->SetBinContent(18,5253.116);
   13->SetBinContent(19,4837.026);
   13->SetBinContent(20,4889.038);
   13->SetBinContent(21,4108.869);
   13->SetBinContent(22,2808.594);
   13->SetBinContent(23,3536.748);
   13->SetBinContent(24,3484.737);
   13->SetBinContent(25,2808.594);
   13->SetBinContent(26,2756.583);
   13->SetBinContent(27,2756.583);
   13->SetBinContent(28,2028.429);
   13->SetBinContent(29,2600.55);
   13->SetBinContent(30,2288.484);
   13->SetBinContent(31,1560.331);
   13->SetBinContent(32,1248.265);
   13->SetBinContent(33,1456.309);
   13->SetBinContent(34,2132.451);
   13->SetBinContent(35,1092.232);
   13->SetBinContent(36,936.1986);
   13->SetBinContent(37,1144.243);
   13->SetBinContent(38,1196.254);
   13->SetBinContent(39,988.2097);
   13->SetBinContent(40,988.2097);
   13->SetBinContent(41,1248.265);
   13->SetBinContent(42,832.1765);
   13->SetBinContent(43,416.0882);
   13->SetBinContent(44,780.1655);
   13->SetBinContent(45,728.1544);
   13->SetBinContent(46,676.1434);
   13->SetBinContent(47,676.1434);
   13->SetBinContent(48,260.0551);
   13->SetBinContent(49,520.1102);
   13->SetBinContent(50,364.0772);
   13->SetBinContent(51,7385.577);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,500);
   14->SetBinContent(1,7977.376);
   14->SetBinContent(2,25819.78);
   14->SetBinContent(3,16056.88);
   14->SetBinContent(4,8689.99);
   14->SetBinContent(5,5626.76);
   14->SetBinContent(6,3997.984);
   14->SetBinContent(7,2720.844);
   14->SetBinContent(8,2017.491);
   14->SetBinContent(9,1610.293);
   14->SetBinContent(10,1240.112);
   14->SetBinContent(11,943.9669);
   14->SetBinContent(12,906.9485);
   14->SetBinContent(13,684.8387);
   14->SetBinContent(14,536.7654);
   14->SetBinContent(15,481.238);
   14->SetBinContent(16,388.6922);
   14->SetBinContent(17,333.1648);
   14->SetBinContent(18,268.3827);
   14->SetBinContent(19,203.6007);
   14->SetBinContent(20,222.1098);
   14->SetBinContent(21,240.619);
   14->SetBinContent(22,203.6007);
   14->SetBinContent(23,203.6007);
   14->SetBinContent(24,157.3278);
   14->SetBinContent(25,111.0549);
   14->SetBinContent(26,92.54577);
   14->SetBinContent(27,111.0549);
   14->SetBinContent(28,83.29119);
   14->SetBinContent(29,92.54577);
   14->SetBinContent(30,55.52746);
   14->SetBinContent(31,92.54577);
   14->SetBinContent(32,18.50915);
   14->SetBinContent(33,64.78204);
   14->SetBinContent(34,18.50915);
   14->SetBinContent(35,55.52746);
   14->SetBinContent(36,27.76373);
   14->SetBinContent(37,46.27288);
   14->SetBinContent(38,37.01831);
   14->SetBinContent(39,18.50915);
   14->SetBinContent(40,27.76373);
   14->SetBinContent(41,18.50915);
   14->SetBinContent(42,27.76373);
   14->SetBinContent(43,37.01831);
   14->SetBinContent(44,27.76373);
   14->SetBinContent(45,18.50915);
   14->SetBinContent(46,27.76373);
   14->SetBinContent(47,18.50915);
   14->SetBinContent(48,18.50915);
   14->SetBinContent(49,9.254577);
   14->SetBinContent(50,37.01831);
   14->SetBinContent(51,268.3827);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,500);
   15->SetBinContent(1,2215.694);
   15->SetBinContent(2,7853.116);
   15->SetBinContent(3,4263.116);
   15->SetBinContent(4,2916.866);
   15->SetBinContent(5,1879.133);
   15->SetBinContent(6,1177.964);
   15->SetBinContent(7,981.6364);
   15->SetBinContent(8,645.0754);
   15->SetBinContent(9,645.0754);
   15->SetBinContent(10,336.5611);
   15->SetBinContent(11,588.9819);
   15->SetBinContent(12,476.7948);
   15->SetBinContent(13,392.6546);
   15->SetBinContent(14,196.3273);
   15->SetBinContent(15,84.14027);
   15->SetBinContent(16,308.5143);
   15->SetBinContent(17,196.3273);
   15->SetBinContent(18,252.4208);
   15->SetBinContent(19,168.2805);
   15->SetBinContent(20,224.374);
   15->SetBinContent(21,140.2338);
   15->SetBinContent(22,112.187);
   15->SetBinContent(23,84.14027);
   15->SetBinContent(24,28.04676);
   15->SetBinContent(25,28.04676);
   15->SetBinContent(26,168.2805);
   15->SetBinContent(27,112.187);
   15->SetBinContent(28,28.04676);
   15->SetBinContent(29,56.09351);
   15->SetBinContent(30,112.187);
   15->SetBinContent(31,56.09351);
   15->SetBinContent(32,56.09351);
   15->SetBinContent(33,28.04676);
   15->SetBinContent(34,28.04676);
   15->SetBinContent(36,28.04676);
   15->SetBinContent(37,28.04676);
   15->SetBinContent(39,56.09351);
   15->SetBinContent(40,28.04676);
   15->SetBinContent(41,28.04676);
   15->SetBinContent(43,56.09351);
   15->SetBinContent(46,28.04676);
   15->SetBinContent(50,28.04676);
   15->SetBinContent(51,392.6546);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,500);
   16->SetBinContent(1,424.7914);
   16->SetBinContent(2,2346.973);
   16->SetBinContent(3,1996.518);
   16->SetBinContent(4,1306.234);
   16->SetBinContent(5,1061.98);
   16->SetBinContent(6,913.3024);
   16->SetBinContent(7,605.3279);
   16->SetBinContent(8,552.2288);
   16->SetBinContent(9,297.354);
   16->SetBinContent(10,435.4111);
   16->SetBinContent(11,350.4529);
   16->SetBinContent(12,392.932);
   16->SetBinContent(13,127.4375);
   16->SetBinContent(14,159.2968);
   16->SetBinContent(15,191.1562);
   16->SetBinContent(16,116.8177);
   16->SetBinContent(17,106.1979);
   16->SetBinContent(18,95.57809);
   16->SetBinContent(19,106.1979);
   16->SetBinContent(20,74.33852);
   16->SetBinContent(21,74.33852);
   16->SetBinContent(22,31.85936);
   16->SetBinContent(23,42.47915);
   16->SetBinContent(24,53.09894);
   16->SetBinContent(25,31.85936);
   16->SetBinContent(26,31.85936);
   16->SetBinContent(27,63.71873);
   16->SetBinContent(28,21.23957);
   16->SetBinContent(29,31.85936);
   16->SetBinContent(30,10.61979);
   16->SetBinContent(31,63.71873);
   16->SetBinContent(32,42.47915);
   16->SetBinContent(33,31.85936);
   16->SetBinContent(34,63.71873);
   16->SetBinContent(35,21.23957);
   16->SetBinContent(36,21.23957);
   16->SetBinContent(38,42.47915);
   16->SetBinContent(39,74.33852);
   16->SetBinContent(40,10.61979);
   16->SetBinContent(42,31.85936);
   16->SetBinContent(43,42.47915);
   16->SetBinContent(44,10.61979);
   16->SetBinContent(45,10.61979);
   16->SetBinContent(46,21.23957);
   16->SetBinContent(47,21.23957);
   16->SetBinContent(48,10.61979);
   16->SetBinContent(51,456.6507);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,500);
   17->SetBinContent(1,7967.509);
   17->SetBinContent(2,19219.27);
   17->SetBinContent(3,11920.83);
   17->SetBinContent(4,6264.526);
   17->SetBinContent(5,4683.186);
   17->SetBinContent(6,3162.669);
   17->SetBinContent(7,2372.002);
   17->SetBinContent(8,1824.617);
   17->SetBinContent(9,1459.693);
   17->SetBinContent(10,1398.873);
   17->SetBinContent(11,1642.155);
   17->SetBinContent(12,729.8467);
   17->SetBinContent(13,729.8467);
   17->SetBinContent(14,973.129);
   17->SetBinContent(15,669.0262);
   17->SetBinContent(16,182.4617);
   17->SetBinContent(17,364.9234);
   17->SetBinContent(18,608.2056);
   17->SetBinContent(19,364.9234);
   17->SetBinContent(20,425.7439);
   17->SetBinContent(21,364.9234);
   17->SetBinContent(22,243.2822);
   17->SetBinContent(23,364.9234);
   17->SetBinContent(24,121.6411);
   17->SetBinContent(25,364.9234);
   17->SetBinContent(26,182.4617);
   17->SetBinContent(27,243.2822);
   17->SetBinContent(28,547.3851);
   17->SetBinContent(29,304.1028);
   17->SetBinContent(30,486.5645);
   17->SetBinContent(31,425.7439);
   17->SetBinContent(32,243.2822);
   17->SetBinContent(33,121.6411);
   17->SetBinContent(34,121.6411);
   17->SetBinContent(35,547.3851);
   17->SetBinContent(36,425.7439);
   17->SetBinContent(37,425.7439);
   17->SetBinContent(38,121.6411);
   17->SetBinContent(39,304.1028);
   17->SetBinContent(41,364.9234);
   17->SetBinContent(42,121.6411);
   17->SetBinContent(43,121.6411);
   17->SetBinContent(44,182.4617);
   17->SetBinContent(45,243.2822);
   17->SetBinContent(46,60.82056);
   17->SetBinContent(47,364.9234);
   17->SetBinContent(48,121.6411);
   17->SetBinContent(49,121.6411);
   17->SetBinContent(50,243.2822);
   17->SetBinContent(51,5838.781);
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
