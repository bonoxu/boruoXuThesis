{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:47:13 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-1.539683,-2.832209,1.634921,4.466381);
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
   
   TH1F *THStack_stack_35 = new TH1F("THStack_stack_35","",50,-1,1);
   THStack_stack_35->SetMinimum(0.03030658);
   THStack_stack_35->SetMaximum(7629.46);
   THStack_stack_35->SetDirectory(0);
   THStack_stack_35->SetStats(0);
   THStack_stack_35->SetLineWidth(2);
   THStack_stack_35->SetMarkerSize(1.2);
   THStack_stack_35->GetXaxis()->SetTitle("PseudoRapidity_{recoil}");
   THStack_stack_35->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_35->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_35->GetXaxis()->SetLabelColor(ci);
   THStack_stack_35->GetXaxis()->SetLabelFont(42);
   THStack_stack_35->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_35->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_35->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_35->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_35->GetXaxis()->SetTitleColor(ci);
   THStack_stack_35->GetXaxis()->SetTitleFont(42);
   THStack_stack_35->GetYaxis()->SetTitle("Number of events");
   THStack_stack_35->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_35->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_35->GetYaxis()->SetLabelColor(ci);
   THStack_stack_35->GetYaxis()->SetLabelFont(42);
   THStack_stack_35->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_35->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_35->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_35->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_35->GetYaxis()->SetTitleColor(ci);
   THStack_stack_35->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_35->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_35->GetZaxis()->SetLabelColor(ci);
   THStack_stack_35->GetZaxis()->SetLabelFont(42);
   THStack_stack_35->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_35->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_35->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_35->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_35->GetZaxis()->SetTitleColor(ci);
   THStack_stack_35->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_35);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,-1,1);
   0->SetBinContent(0,32.34041);
   0->SetBinContent(1,0.6137381);
   0->SetBinContent(2,0.59394);
   0->SetBinContent(3,0.6929302);
   0->SetBinContent(4,0.5147479);
   0->SetBinContent(5,0.5246469);
   0->SetBinContent(6,0.5147479);
   0->SetBinContent(7,0.6335361);
   0->SetBinContent(8,0.5444449);
   0->SetBinContent(9,0.4850508);
   0->SetBinContent(10,0.4949498);
   0->SetBinContent(11,0.4652528);
   0->SetBinContent(12,0.5444449);
   0->SetBinContent(13,0.5147479);
   0->SetBinContent(14,0.6335361);
   0->SetBinContent(15,0.6434351);
   0->SetBinContent(16,0.5048488);
   0->SetBinContent(17,0.5246469);
   0->SetBinContent(18,0.4454549);
   0->SetBinContent(19,0.5048488);
   0->SetBinContent(20,0.4256569);
   0->SetBinContent(21,0.4949498);
   0->SetBinContent(22,0.584041);
   0->SetBinContent(23,0.4850508);
   0->SetBinContent(24,0.4850508);
   0->SetBinContent(25,0.4949498);
   0->SetBinContent(26,0.574142);
   0->SetBinContent(27,0.5048488);
   0->SetBinContent(28,0.4553539);
   0->SetBinContent(29,0.4553539);
   0->SetBinContent(30,0.584041);
   0->SetBinContent(31,0.6137381);
   0->SetBinContent(32,0.4850508);
   0->SetBinContent(33,0.5444449);
   0->SetBinContent(34,0.4850508);
   0->SetBinContent(35,0.4157579);
   0->SetBinContent(36,0.5345459);
   0->SetBinContent(37,0.4751518);
   0->SetBinContent(38,0.4850508);
   0->SetBinContent(39,0.5246469);
   0->SetBinContent(40,0.5246469);
   0->SetBinContent(41,0.4454549);
   0->SetBinContent(42,0.6929302);
   0->SetBinContent(43,0.6533341);
   0->SetBinContent(44,0.6236371);
   0->SetBinContent(45,0.584041);
   0->SetBinContent(46,0.574142);
   0->SetBinContent(47,0.6632332);
   0->SetBinContent(48,0.5147479);
   0->SetBinContent(49,0.6632332);
   0->SetBinContent(50,0.59394);
   0->SetBinContent(51,30.69716);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,-1,1);
   1->SetBinContent(0,23.84467);
   1->SetBinContent(1,0.4206652);
   1->SetBinContent(2,0.3315832);
   1->SetBinContent(3,0.5443901);
   1->SetBinContent(4,0.4701553);
   1->SetBinContent(5,0.3909712);
   1->SetBinContent(6,0.4404612);
   1->SetBinContent(7,0.4206652);
   1->SetBinContent(8,0.3761242);
   1->SetBinContent(9,0.4800533);
   1->SetBinContent(10,0.4850023);
   1->SetBinContent(11,0.4107672);
   1->SetBinContent(12,0.4058182);
   1->SetBinContent(13,0.3860222);
   1->SetBinContent(14,0.3810732);
   1->SetBinContent(15,0.3662262);
   1->SetBinContent(16,0.3711752);
   1->SetBinContent(17,0.3315832);
   1->SetBinContent(18,0.3068382);
   1->SetBinContent(19,0.3860222);
   1->SetBinContent(20,0.3464302);
   1->SetBinContent(21,0.3513792);
   1->SetBinContent(22,0.3266342);
   1->SetBinContent(23,0.3959202);
   1->SetBinContent(24,0.3464302);
   1->SetBinContent(25,0.3117872);
   1->SetBinContent(26,0.3216852);
   1->SetBinContent(27,0.4305632);
   1->SetBinContent(28,0.3810732);
   1->SetBinContent(29,0.3068382);
   1->SetBinContent(30,0.4206652);
   1->SetBinContent(31,0.3612772);
   1->SetBinContent(32,0.4058182);
   1->SetBinContent(33,0.3959202);
   1->SetBinContent(34,0.4107672);
   1->SetBinContent(35,0.3365322);
   1->SetBinContent(36,0.4058182);
   1->SetBinContent(37,0.3810732);
   1->SetBinContent(38,0.4553083);
   1->SetBinContent(39,0.4256142);
   1->SetBinContent(40,0.3662262);
   1->SetBinContent(41,0.3662262);
   1->SetBinContent(42,0.4206652);
   1->SetBinContent(43,0.3810732);
   1->SetBinContent(44,0.4008692);
   1->SetBinContent(45,0.4206652);
   1->SetBinContent(46,0.3612772);
   1->SetBinContent(47,0.4998493);
   1->SetBinContent(48,0.3513792);
   1->SetBinContent(49,0.5047983);
   1->SetBinContent(50,0.4800533);
   1->SetBinContent(51,23.01314);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,-1,1);
   2->SetBinContent(0,46.71096);
   2->SetBinContent(1,0.9650528);
   2->SetBinContent(2,0.8809203);
   2->SetBinContent(3,0.8413285);
   2->SetBinContent(4,0.8611244);
   2->SetBinContent(5,0.8512264);
   2->SetBinContent(6,0.9155631);
   2->SetBinContent(7,0.8660734);
   2->SetBinContent(8,0.9007162);
   2->SetBinContent(9,0.7571959);
   2->SetBinContent(10,0.935359);
   2->SetBinContent(11,0.7621449);
   2->SetBinContent(12,0.6978083);
   2->SetBinContent(13,0.8314306);
   2->SetBinContent(14,0.8710223);
   2->SetBinContent(15,0.8363795);
   2->SetBinContent(16,0.7571959);
   2->SetBinContent(17,0.8116347);
   2->SetBinContent(18,0.7225531);
   2->SetBinContent(19,0.7077062);
   2->SetBinContent(20,0.8561754);
   2->SetBinContent(21,0.7621449);
   2->SetBinContent(22,0.742349);
   2->SetBinContent(23,0.8611244);
   2->SetBinContent(24,0.7967877);
   2->SetBinContent(25,0.6780124);
   2->SetBinContent(26,0.7571959);
   2->SetBinContent(27,0.7571959);
   2->SetBinContent(28,0.7374001);
   2->SetBinContent(29,0.6582165);
   2->SetBinContent(30,0.7621449);
   2->SetBinContent(31,0.8759713);
   2->SetBinContent(32,0.7967877);
   2->SetBinContent(33,0.752247);
   2->SetBinContent(34,0.8264816);
   2->SetBinContent(35,0.7027572);
   2->SetBinContent(36,0.752247);
   2->SetBinContent(37,0.93041);
   2->SetBinContent(38,0.8413285);
   2->SetBinContent(39,0.7374001);
   2->SetBinContent(40,0.7967877);
   2->SetBinContent(41,0.8363795);
   2->SetBinContent(42,0.9452569);
   2->SetBinContent(43,0.8957672);
   2->SetBinContent(44,0.9650528);
   2->SetBinContent(45,0.8809203);
   2->SetBinContent(46,0.9007162);
   2->SetBinContent(47,0.8363795);
   2->SetBinContent(48,0.8462775);
   2->SetBinContent(49,0.8264816);
   2->SetBinContent(50,0.9502059);
   2->SetBinContent(51,46.97319);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,-1,1);
   3->SetBinContent(0,183.7242);
   3->SetBinContent(1,4.254392);
   3->SetBinContent(2,4.895924);
   3->SetBinContent(3,4.355687);
   3->SetBinContent(4,4.355687);
   3->SetBinContent(5,3.849213);
   3->SetBinContent(6,3.376502);
   3->SetBinContent(7,4.963454);
   3->SetBinContent(8,4.119333);
   3->SetBinContent(9,4.153098);
   3->SetBinContent(10,3.646623);
   3->SetBinContent(11,4.355687);
   3->SetBinContent(12,3.916743);
   3->SetBinContent(13,3.781683);
   3->SetBinContent(14,4.65957);
   3->SetBinContent(15,3.950508);
   3->SetBinContent(16,3.950508);
   3->SetBinContent(17,4.186862);
   3->SetBinContent(18,3.950508);
   3->SetBinContent(19,3.950508);
   3->SetBinContent(20,3.511562);
   3->SetBinContent(21,3.646623);
   3->SetBinContent(22,3.173912);
   3->SetBinContent(23,3.916743);
   3->SetBinContent(24,3.849213);
   3->SetBinContent(25,4.085568);
   3->SetBinContent(26,3.680388);
   3->SetBinContent(27,4.220627);
   3->SetBinContent(28,4.254392);
   3->SetBinContent(29,4.051803);
   3->SetBinContent(30,3.612858);
   3->SetBinContent(31,4.153098);
   3->SetBinContent(32,3.612858);
   3->SetBinContent(33,3.849213);
   3->SetBinContent(34,3.781683);
   3->SetBinContent(35,3.815448);
   3->SetBinContent(36,4.423216);
   3->SetBinContent(37,4.355687);
   3->SetBinContent(38,3.984273);
   3->SetBinContent(39,3.680388);
   3->SetBinContent(40,4.119333);
   3->SetBinContent(41,3.747918);
   3->SetBinContent(42,4.862159);
   3->SetBinContent(43,3.747918);
   3->SetBinContent(44,4.456981);
   3->SetBinContent(45,4.220627);
   3->SetBinContent(46,4.119333);
   3->SetBinContent(47,4.254392);
   3->SetBinContent(48,3.984273);
   3->SetBinContent(49,4.592041);
   3->SetBinContent(50,3.984273);
   3->SetBinContent(51,181.4618);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,-1,1);
   4->SetBinContent(0,185.816);
   4->SetBinContent(1,5.051045);
   4->SetBinContent(2,4.526265);
   4->SetBinContent(3,4.569996);
   4->SetBinContent(4,4.744923);
   4->SetBinContent(5,4.985447);
   4->SetBinContent(6,4.810521);
   4->SetBinContent(7,4.832386);
   4->SetBinContent(8,4.832386);
   4->SetBinContent(9,4.723057);
   4->SetBinContent(10,4.329472);
   4->SetBinContent(11,4.613728);
   4->SetBinContent(12,4.307606);
   4->SetBinContent(13,4.242009);
   4->SetBinContent(14,4.65746);
   4->SetBinContent(15,4.045216);
   4->SetBinContent(16,4.701191);
   4->SetBinContent(17,4.132679);
   4->SetBinContent(18,4.679326);
   4->SetBinContent(19,3.80469);
   4->SetBinContent(20,4.373204);
   4->SetBinContent(21,4.723057);
   4->SetBinContent(22,4.154545);
   4->SetBinContent(23,4.110814);
   4->SetBinContent(24,4.220143);
   4->SetBinContent(25,4.591862);
   4->SetBinContent(26,4.001484);
   4->SetBinContent(27,3.432966);
   4->SetBinContent(28,3.91402);
   4->SetBinContent(29,4.307606);
   4->SetBinContent(30,3.892154);
   4->SetBinContent(31,3.542297);
   4->SetBinContent(32,4.176411);
   4->SetBinContent(33,3.979618);
   4->SetBinContent(34,4.132679);
   4->SetBinContent(35,4.132679);
   4->SetBinContent(36,4.351338);
   4->SetBinContent(37,3.979618);
   4->SetBinContent(38,4.810521);
   4->SetBinContent(39,4.416935);
   4->SetBinContent(40,4.329472);
   4->SetBinContent(41,4.373204);
   4->SetBinContent(42,4.242009);
   4->SetBinContent(43,4.088948);
   4->SetBinContent(44,4.701191);
   4->SetBinContent(45,4.504399);
   4->SetBinContent(46,4.02335);
   4->SetBinContent(47,4.373204);
   4->SetBinContent(48,4.067082);
   4->SetBinContent(49,4.744923);
   4->SetBinContent(50,4.876118);
   4->SetBinContent(51,188.0463);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,-1,1);
   5->SetBinContent(0,704.9724);
   5->SetBinContent(1,16.86467);
   5->SetBinContent(2,18.08589);
   5->SetBinContent(3,17.03913);
   5->SetBinContent(4,17.27174);
   5->SetBinContent(5,15.81791);
   5->SetBinContent(6,15.41083);
   5->SetBinContent(7,15.52714);
   5->SetBinContent(8,15.17822);
   5->SetBinContent(9,16.98098);
   5->SetBinContent(10,16.80652);
   5->SetBinContent(11,17.27174);
   5->SetBinContent(12,13.31729);
   5->SetBinContent(13,16.34129);
   5->SetBinContent(14,15.17822);
   5->SetBinContent(15,15.75976);
   5->SetBinContent(16,16.39945);
   5->SetBinContent(17,13.49175);
   5->SetBinContent(18,15.23637);
   5->SetBinContent(19,15.46899);
   5->SetBinContent(20,15.29453);
   5->SetBinContent(21,14.77114);
   5->SetBinContent(22,16.4576);
   5->SetBinContent(23,14.65483);
   5->SetBinContent(24,14.65483);
   5->SetBinContent(25,14.42221);
   5->SetBinContent(26,14.77114);
   5->SetBinContent(27,13.43359);
   5->SetBinContent(28,13.37544);
   5->SetBinContent(29,15.06191);
   5->SetBinContent(30,15.46899);
   5->SetBinContent(31,14.53852);
   5->SetBinContent(32,14.59668);
   5->SetBinContent(33,14.13144);
   5->SetBinContent(34,16.22499);
   5->SetBinContent(35,15.52714);
   5->SetBinContent(36,15.52714);
   5->SetBinContent(37,16.16683);
   5->SetBinContent(38,16.51575);
   5->SetBinContent(39,14.65483);
   5->SetBinContent(40,15.87607);
   5->SetBinContent(41,16.69021);
   5->SetBinContent(42,15.00375);
   5->SetBinContent(43,16.10868);
   5->SetBinContent(44,15.29453);
   5->SetBinContent(45,15.87607);
   5->SetBinContent(46,16.69021);
   5->SetBinContent(47,17.62066);
   5->SetBinContent(48,15.29453);
   5->SetBinContent(49,17.85328);
   5->SetBinContent(50,18.78373);
   5->SetBinContent(51,711.2544);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,-1,1);
   6->SetBinContent(0,24105.97);
   6->SetBinContent(1,349.9496);
   6->SetBinContent(2,306.973);
   6->SetBinContent(3,338.5477);
   6->SetBinContent(4,327.1457);
   6->SetBinContent(5,313.1125);
   6->SetBinContent(6,308.7271);
   6->SetBinContent(7,322.7603);
   6->SetBinContent(8,321.8832);
   6->SetBinContent(9,288.5544);
   6->SetBinContent(10,331.5311);
   6->SetBinContent(11,296.4481);
   6->SetBinContent(12,286.8002);
   6->SetBinContent(13,288.5544);
   6->SetBinContent(14,270.1358);
   6->SetBinContent(15,301.7105);
   6->SetBinContent(16,278.0295);
   6->SetBinContent(17,268.3817);
   6->SetBinContent(18,278.9066);
   6->SetBinContent(19,253.4714);
   6->SetBinContent(20,278.9066);
   6->SetBinContent(21,266.6275);
   6->SetBinContent(22,302.5876);
   6->SetBinContent(23,256.9797);
   6->SetBinContent(24,292.9398);
   6->SetBinContent(25,262.2421);
   6->SetBinContent(26,255.2255);
   6->SetBinContent(27,243.8238);
   6->SetBinContent(28,241.1926);
   6->SetBinContent(29,248.2091);
   6->SetBinContent(30,255.2255);
   6->SetBinContent(31,269.2587);
   6->SetBinContent(32,278.0295);
   6->SetBinContent(33,294.6939);
   6->SetBinContent(34,276.2753);
   6->SetBinContent(35,302.5876);
   6->SetBinContent(36,274.5212);
   6->SetBinContent(37,281.5378);
   6->SetBinContent(38,264.8734);
   6->SetBinContent(39,272.767);
   6->SetBinContent(40,259.6109);
   6->SetBinContent(41,297.3251);
   6->SetBinContent(42,333.2852);
   6->SetBinContent(43,307.85);
   6->SetBinContent(44,279.7836);
   6->SetBinContent(45,335.9164);
   6->SetBinContent(46,334.1623);
   6->SetBinContent(47,347.3184);
   6->SetBinContent(48,378.8931);
   6->SetBinContent(49,340.3018);
   6->SetBinContent(50,354.335);
   6->SetBinContent(51,24292.76);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,-1,1);
   7->SetBinContent(0,4014.941);
   7->SetBinContent(1,106.7628);
   7->SetBinContent(2,104.4149);
   7->SetBinContent(3,100.5477);
   7->SetBinContent(4,104.2768);
   7->SetBinContent(5,105.5198);
   7->SetBinContent(6,95.02308);
   7->SetBinContent(7,103.0337);
   7->SetBinContent(8,102.3432);
   7->SetBinContent(9,102.4813);
   7->SetBinContent(10,94.88496);
   7->SetBinContent(11,97.78538);
   7->SetBinContent(12,99.16653);
   7->SetBinContent(13,98.19972);
   7->SetBinContent(14,95.98988);
   7->SetBinContent(15,94.19439);
   7->SetBinContent(16,94.05627);
   7->SetBinContent(17,91.43209);
   7->SetBinContent(18,96.54234);
   7->SetBinContent(19,93.3657);
   7->SetBinContent(20,91.29398);
   7->SetBinContent(21,82.59274);
   7->SetBinContent(22,86.18372);
   7->SetBinContent(23,93.22758);
   7->SetBinContent(24,92.67513);
   7->SetBinContent(25,90.46529);
   7->SetBinContent(26,84.66446);
   7->SetBinContent(27,86.32184);
   7->SetBinContent(28,92.81324);
   7->SetBinContent(29,97.92349);
   7->SetBinContent(30,93.50381);
   7->SetBinContent(31,91.43209);
   7->SetBinContent(32,101.2383);
   7->SetBinContent(33,88.80791);
   7->SetBinContent(34,90.87963);
   7->SetBinContent(35,100.6858);
   7->SetBinContent(36,93.08947);
   7->SetBinContent(37,91.57021);
   7->SetBinContent(38,93.64193);
   7->SetBinContent(39,91.98455);
   7->SetBinContent(40,99.02841);
   7->SetBinContent(41,98.8903);
   7->SetBinContent(42,100.6858);
   7->SetBinContent(43,94.3325);
   7->SetBinContent(44,97.0948);
   7->SetBinContent(45,104.2768);
   7->SetBinContent(46,96.26611);
   7->SetBinContent(47,107.1772);
   7->SetBinContent(48,109.2489);
   7->SetBinContent(49,98.8903);
   7->SetBinContent(50,101.9288);
   7->SetBinContent(51,4006.512);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,-1,1);
   8->SetBinContent(0,931.277);
   8->SetBinContent(1,3.69552);
   8->SetBinContent(2,8.31492);
   8->SetBinContent(3,0.92388);
   8->SetBinContent(4,1.84776);
   8->SetBinContent(5,5.54328);
   8->SetBinContent(6,6.46716);
   8->SetBinContent(7,3.69552);
   8->SetBinContent(8,2.77164);
   8->SetBinContent(9,3.69552);
   8->SetBinContent(10,3.69552);
   8->SetBinContent(11,3.69552);
   8->SetBinContent(12,2.77164);
   8->SetBinContent(13,0.92388);
   8->SetBinContent(14,0.92388);
   8->SetBinContent(15,3.69552);
   8->SetBinContent(16,3.69552);
   8->SetBinContent(17,5.54328);
   8->SetBinContent(18,4.6194);
   8->SetBinContent(19,3.69552);
   8->SetBinContent(20,4.6194);
   8->SetBinContent(21,2.77164);
   8->SetBinContent(22,0.92388);
   8->SetBinContent(23,1.84776);
   8->SetBinContent(24,1.84776);
   8->SetBinContent(25,2.77164);
   8->SetBinContent(26,1.84776);
   8->SetBinContent(27,1.84776);
   8->SetBinContent(28,1.84776);
   8->SetBinContent(29,1.84776);
   8->SetBinContent(30,1.84776);
   8->SetBinContent(31,2.77164);
   8->SetBinContent(32,2.77164);
   8->SetBinContent(33,2.77164);
   8->SetBinContent(34,5.54328);
   8->SetBinContent(35,4.6194);
   8->SetBinContent(36,1.84776);
   8->SetBinContent(37,4.6194);
   8->SetBinContent(38,7.39104);
   8->SetBinContent(39,4.6194);
   8->SetBinContent(40,4.6194);
   8->SetBinContent(41,2.77164);
   8->SetBinContent(42,4.6194);
   8->SetBinContent(43,1.84776);
   8->SetBinContent(44,0.92388);
   8->SetBinContent(45,2.77164);
   8->SetBinContent(46,3.69552);
   8->SetBinContent(47,1.84776);
   8->SetBinContent(48,1.84776);
   8->SetBinContent(49,8.31492);
   8->SetBinContent(50,6.46716);
   8->SetBinContent(51,958.0698);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,-1,1);
   9->SetBinContent(0,5774.536);
   9->SetBinContent(1,74.72594);
   9->SetBinContent(2,81.75902);
   9->SetBinContent(3,85.71513);
   9->SetBinContent(4,71.64896);
   9->SetBinContent(5,83.95686);
   9->SetBinContent(6,71.64896);
   9->SetBinContent(7,81.75902);
   9->SetBinContent(8,73.40723);
   9->SetBinContent(9,76.48421);
   9->SetBinContent(10,76.04464);
   9->SetBinContent(11,80.87988);
   9->SetBinContent(12,76.92377);
   9->SetBinContent(13,69.89069);
   9->SetBinContent(14,75.60507);
   9->SetBinContent(15,77.36334);
   9->SetBinContent(16,69.01156);
   9->SetBinContent(17,79.12161);
   9->SetBinContent(18,72.08853);
   9->SetBinContent(19,66.37415);
   9->SetBinContent(20,70.76983);
   9->SetBinContent(21,69.45113);
   9->SetBinContent(22,65.05545);
   9->SetBinContent(23,70.33026);
   9->SetBinContent(24,75.60507);
   9->SetBinContent(25,67.25329);
   9->SetBinContent(26,79.56118);
   9->SetBinContent(27,66.81372);
   9->SetBinContent(28,76.04464);
   9->SetBinContent(29,79.56118);
   9->SetBinContent(30,73.8468);
   9->SetBinContent(31,69.01156);
   9->SetBinContent(32,74.28637);
   9->SetBinContent(33,58.90155);
   9->SetBinContent(34,78.68204);
   9->SetBinContent(35,77.80291);
   9->SetBinContent(36,79.12161);
   9->SetBinContent(37,82.19859);
   9->SetBinContent(38,71.64896);
   9->SetBinContent(39,74.72594);
   9->SetBinContent(40,90.55037);
   9->SetBinContent(41,70.33026);
   9->SetBinContent(42,80.44032);
   9->SetBinContent(43,73.8468);
   9->SetBinContent(44,74.28637);
   9->SetBinContent(45,65.05545);
   9->SetBinContent(46,87.91296);
   9->SetBinContent(47,82.63815);
   9->SetBinContent(48,87.91296);
   9->SetBinContent(49,84.83599);
   9->SetBinContent(50,80.44032);
   9->SetBinContent(51,5908.13);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,-1,1);
   10->SetBinContent(0,51693.22);
   10->SetBinContent(1,1068.769);
   10->SetBinContent(2,1075.465);
   10->SetBinContent(3,1041.111);
   10->SetBinContent(4,1058.579);
   10->SetBinContent(5,1082.744);
   10->SetBinContent(6,1038.491);
   10->SetBinContent(7,1044.896);
   10->SetBinContent(8,992.7823);
   10->SetBinContent(9,991.9089);
   10->SetBinContent(10,973.5672);
   10->SetBinContent(11,972.1115);
   10->SetBinContent(12,986.3773);
   10->SetBinContent(13,958.1369);
   10->SetBinContent(14,947.3648);
   10->SetBinContent(15,940.3775);
   10->SetBinContent(16,938.9218);
   10->SetBinContent(17,942.7066);
   10->SetBinContent(18,916.5042);
   10->SetBinContent(19,904.2764);
   10->SetBinContent(20,910.3903);
   10->SetBinContent(21,925.2383);
   10->SetBinContent(22,923.4915);
   10->SetBinContent(23,871.669);
   10->SetBinContent(24,880.4031);
   10->SetBinContent(25,882.15);
   10->SetBinContent(26,889.1373);
   10->SetBinContent(27,899.6182);
   10->SetBinContent(28,910.9726);
   10->SetBinContent(29,900.2005);
   10->SetBinContent(30,903.6942);
   10->SetBinContent(31,918.251);
   10->SetBinContent(32,908.3524);
   10->SetBinContent(33,906.8967);
   10->SetBinContent(34,931.0611);
   10->SetBinContent(35,925.2383);
   10->SetBinContent(36,930.1877);
   10->SetBinContent(37,936.3016);
   10->SetBinContent(38,941.8332);
   10->SetBinContent(39,987.2507);
   10->SetBinContent(40,1004.719);
   10->SetBinContent(41,989.8709);
   10->SetBinContent(42,1008.504);
   10->SetBinContent(43,989.2886);
   10->SetBinContent(44,1067.896);
   10->SetBinContent(45,1049.263);
   10->SetBinContent(46,1087.111);
   10->SetBinContent(47,1046.934);
   10->SetBinContent(48,1051.01);
   10->SetBinContent(49,1075.757);
   10->SetBinContent(50,1093.225);
   10->SetBinContent(51,51638.14);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,-1,1);
   11->SetBinContent(0,14466.83);
   11->SetBinContent(1,213.6458);
   11->SetBinContent(2,61.04166);
   11->SetBinContent(3,91.5625);
   11->SetBinContent(4,30.52083);
   11->SetBinContent(6,30.52083);
   11->SetBinContent(7,61.04166);
   11->SetBinContent(8,30.52083);
   11->SetBinContent(9,61.04166);
   11->SetBinContent(10,61.04166);
   11->SetBinContent(11,30.52083);
   11->SetBinContent(13,61.04166);
   11->SetBinContent(14,91.5625);
   11->SetBinContent(15,30.52083);
   11->SetBinContent(16,61.04166);
   11->SetBinContent(17,61.04166);
   11->SetBinContent(18,30.52083);
   11->SetBinContent(19,30.52083);
   11->SetBinContent(20,152.6042);
   11->SetBinContent(21,30.52083);
   11->SetBinContent(22,30.52083);
   11->SetBinContent(23,152.6042);
   11->SetBinContent(24,30.52083);
   11->SetBinContent(25,61.04166);
   11->SetBinContent(27,30.52083);
   11->SetBinContent(28,91.5625);
   11->SetBinContent(29,30.52083);
   11->SetBinContent(30,61.04166);
   11->SetBinContent(33,61.04166);
   11->SetBinContent(34,91.5625);
   11->SetBinContent(35,30.52083);
   11->SetBinContent(37,122.0833);
   11->SetBinContent(38,30.52083);
   11->SetBinContent(39,91.5625);
   11->SetBinContent(40,91.5625);
   11->SetBinContent(41,61.04166);
   11->SetBinContent(42,30.52083);
   11->SetBinContent(43,91.5625);
   11->SetBinContent(44,30.52083);
   11->SetBinContent(45,122.0833);
   11->SetBinContent(46,61.04166);
   11->SetBinContent(47,30.52083);
   11->SetBinContent(48,61.04166);
   11->SetBinContent(49,91.5625);
   11->SetBinContent(50,91.5625);
   11->SetBinContent(51,14772.03);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,-1,1);
   12->SetBinContent(0,6910.15);
   12->SetBinContent(1,45.10525);
   12->SetBinContent(2,43.67333);
   12->SetBinContent(3,42.24142);
   12->SetBinContent(4,45.82121);
   12->SetBinContent(5,47.25312);
   12->SetBinContent(6,32.21801);
   12->SetBinContent(7,33.64993);
   12->SetBinContent(8,32.21801);
   12->SetBinContent(9,36.51376);
   12->SetBinContent(10,39.37759);
   12->SetBinContent(11,42.95737);
   12->SetBinContent(12,31.50205);
   12->SetBinContent(13,44.38929);
   12->SetBinContent(14,22.19463);
   12->SetBinContent(15,26.49036);
   12->SetBinContent(16,37.22971);
   12->SetBinContent(17,27.20632);
   12->SetBinContent(18,30.07014);
   12->SetBinContent(19,22.91059);
   12->SetBinContent(20,30.7861);
   12->SetBinContent(21,35.7978);
   12->SetBinContent(22,27.92228);
   12->SetBinContent(23,29.35419);
   12->SetBinContent(24,30.7861);
   12->SetBinContent(25,25.05845);
   12->SetBinContent(26,42.24142);
   12->SetBinContent(27,44.38929);
   12->SetBinContent(28,37.94567);
   12->SetBinContent(29,26.49036);
   12->SetBinContent(30,23.62654);
   12->SetBinContent(31,33.64993);
   12->SetBinContent(32,37.94567);
   12->SetBinContent(33,28.63823);
   12->SetBinContent(34,27.92228);
   12->SetBinContent(35,31.50205);
   12->SetBinContent(36,31.50205);
   12->SetBinContent(37,39.37759);
   12->SetBinContent(38,40.8095);
   12->SetBinContent(39,37.22971);
   12->SetBinContent(40,42.24142);
   12->SetBinContent(41,34.36588);
   12->SetBinContent(42,37.94567);
   12->SetBinContent(43,43.67333);
   12->SetBinContent(44,41.52546);
   12->SetBinContent(45,40.8095);
   12->SetBinContent(46,38.66163);
   12->SetBinContent(47,35.7978);
   12->SetBinContent(48,37.94567);
   12->SetBinContent(49,33.64993);
   12->SetBinContent(50,42.24142);
   12->SetBinContent(51,6895.118);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,-1,1);
   13->SetBinContent(0,170388.2);
   13->SetBinContent(1,988.2097);
   13->SetBinContent(2,1040.221);
   13->SetBinContent(3,676.1434);
   13->SetBinContent(4,676.1434);
   13->SetBinContent(5,676.1434);
   13->SetBinContent(6,1092.232);
   13->SetBinContent(7,728.1544);
   13->SetBinContent(8,676.1434);
   13->SetBinContent(9,728.1544);
   13->SetBinContent(10,1144.243);
   13->SetBinContent(11,624.1323);
   13->SetBinContent(12,832.1765);
   13->SetBinContent(13,988.2097);
   13->SetBinContent(14,832.1765);
   13->SetBinContent(15,728.1544);
   13->SetBinContent(16,884.1876);
   13->SetBinContent(17,728.1544);
   13->SetBinContent(18,624.1323);
   13->SetBinContent(19,364.0772);
   13->SetBinContent(20,936.1986);
   13->SetBinContent(21,676.1434);
   13->SetBinContent(22,624.1323);
   13->SetBinContent(23,676.1434);
   13->SetBinContent(24,884.1876);
   13->SetBinContent(25,728.1544);
   13->SetBinContent(26,884.1876);
   13->SetBinContent(27,728.1544);
   13->SetBinContent(28,780.1655);
   13->SetBinContent(29,988.2097);
   13->SetBinContent(30,832.1765);
   13->SetBinContent(31,520.1102);
   13->SetBinContent(32,520.1102);
   13->SetBinContent(33,728.1544);
   13->SetBinContent(34,1196.254);
   13->SetBinContent(35,728.1544);
   13->SetBinContent(36,624.1323);
   13->SetBinContent(37,884.1876);
   13->SetBinContent(38,832.1765);
   13->SetBinContent(39,936.1986);
   13->SetBinContent(40,624.1323);
   13->SetBinContent(41,624.1323);
   13->SetBinContent(42,416.0882);
   13->SetBinContent(43,936.1986);
   13->SetBinContent(44,936.1986);
   13->SetBinContent(45,936.1986);
   13->SetBinContent(46,676.1434);
   13->SetBinContent(47,936.1986);
   13->SetBinContent(48,936.1986);
   13->SetBinContent(49,936.1986);
   13->SetBinContent(50,780.1655);
   13->SetBinContent(51,167735.4);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,-1,1);
   14->SetBinContent(0,24764.84);
   14->SetBinContent(1,638.5658);
   14->SetBinContent(2,851.4211);
   14->SetBinContent(3,638.5658);
   14->SetBinContent(4,842.1665);
   14->SetBinContent(5,758.8753);
   14->SetBinContent(6,712.6024);
   14->SetBinContent(7,758.8753);
   14->SetBinContent(8,749.6207);
   14->SetBinContent(9,638.5658);
   14->SetBinContent(10,758.8753);
   14->SetBinContent(11,694.0933);
   14->SetBinContent(12,694.0933);
   14->SetBinContent(13,647.8204);
   14->SetBinContent(14,721.857);
   14->SetBinContent(15,592.2929);
   14->SetBinContent(16,758.8753);
   14->SetBinContent(17,638.5658);
   14->SetBinContent(18,749.6207);
   14->SetBinContent(19,657.075);
   14->SetBinContent(20,749.6207);
   14->SetBinContent(21,647.8204);
   14->SetBinContent(22,657.075);
   14->SetBinContent(23,694.0933);
   14->SetBinContent(24,610.8021);
   14->SetBinContent(25,592.2929);
   14->SetBinContent(26,647.8204);
   14->SetBinContent(27,490.4926);
   14->SetBinContent(28,546.02);
   14->SetBinContent(29,657.075);
   14->SetBinContent(30,592.2929);
   14->SetBinContent(31,684.8387);
   14->SetBinContent(32,555.2746);
   14->SetBinContent(33,675.5841);
   14->SetBinContent(34,657.075);
   14->SetBinContent(35,481.238);
   14->SetBinContent(36,647.8204);
   14->SetBinContent(37,684.8387);
   14->SetBinContent(38,629.3112);
   14->SetBinContent(39,731.1116);
   14->SetBinContent(40,546.02);
   14->SetBinContent(41,647.8204);
   14->SetBinContent(42,620.0566);
   14->SetBinContent(43,666.3295);
   14->SetBinContent(44,629.3112);
   14->SetBinContent(45,601.5475);
   14->SetBinContent(46,703.3478);
   14->SetBinContent(47,694.0933);
   14->SetBinContent(48,721.857);
   14->SetBinContent(49,786.639);
   14->SetBinContent(50,749.6207);
   14->SetBinContent(51,24727.82);
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
   
   TH1F *15 = new TH1F("15","qqll",50,-1,1);
   15->SetBinContent(0,11751.63);
   15->SetBinContent(1,140.2338);
   15->SetBinContent(2,84.14027);
   15->SetBinContent(3,168.2805);
   15->SetBinContent(4,112.187);
   15->SetBinContent(5,112.187);
   15->SetBinContent(6,28.04676);
   15->SetBinContent(7,28.04676);
   15->SetBinContent(8,56.09351);
   15->SetBinContent(9,28.04676);
   15->SetBinContent(10,28.04676);
   15->SetBinContent(11,28.04676);
   15->SetBinContent(12,28.04676);
   15->SetBinContent(13,28.04676);
   15->SetBinContent(14,56.09351);
   15->SetBinContent(15,56.09351);
   15->SetBinContent(16,56.09351);
   15->SetBinContent(17,28.04676);
   15->SetBinContent(18,56.09351);
   15->SetBinContent(19,112.187);
   15->SetBinContent(20,84.14027);
   15->SetBinContent(21,56.09351);
   15->SetBinContent(23,28.04676);
   15->SetBinContent(24,84.14027);
   15->SetBinContent(25,168.2805);
   15->SetBinContent(27,168.2805);
   15->SetBinContent(28,84.14027);
   15->SetBinContent(29,56.09351);
   15->SetBinContent(31,56.09351);
   15->SetBinContent(32,56.09351);
   15->SetBinContent(33,112.187);
   15->SetBinContent(34,28.04676);
   15->SetBinContent(35,56.09351);
   15->SetBinContent(36,56.09351);
   15->SetBinContent(37,112.187);
   15->SetBinContent(38,140.2338);
   15->SetBinContent(39,28.04676);
   15->SetBinContent(40,28.04676);
   15->SetBinContent(41,28.04676);
   15->SetBinContent(42,84.14027);
   15->SetBinContent(43,28.04676);
   15->SetBinContent(44,84.14027);
   15->SetBinContent(45,168.2805);
   15->SetBinContent(46,84.14027);
   15->SetBinContent(47,140.2338);
   15->SetBinContent(48,84.14027);
   15->SetBinContent(49,168.2805);
   15->SetBinContent(50,168.2805);
   15->SetBinContent(51,12088.19);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,-1,1);
   16->SetBinContent(0,5086.877);
   16->SetBinContent(1,42.47915);
   16->SetBinContent(2,42.47915);
   16->SetBinContent(3,53.09894);
   16->SetBinContent(4,42.47915);
   16->SetBinContent(5,63.71873);
   16->SetBinContent(6,53.09894);
   16->SetBinContent(7,116.8177);
   16->SetBinContent(8,21.23957);
   16->SetBinContent(9,31.85936);
   16->SetBinContent(10,84.95831);
   16->SetBinContent(11,138.0573);
   16->SetBinContent(12,31.85936);
   16->SetBinContent(13,95.57809);
   16->SetBinContent(14,53.09894);
   16->SetBinContent(15,63.71873);
   16->SetBinContent(16,84.95831);
   16->SetBinContent(17,74.33852);
   16->SetBinContent(18,53.09894);
   16->SetBinContent(19,74.33852);
   16->SetBinContent(20,42.47915);
   16->SetBinContent(21,53.09894);
   16->SetBinContent(22,31.85936);
   16->SetBinContent(23,84.95831);
   16->SetBinContent(24,106.1979);
   16->SetBinContent(25,53.09894);
   16->SetBinContent(26,53.09894);
   16->SetBinContent(27,63.71873);
   16->SetBinContent(28,31.85936);
   16->SetBinContent(29,53.09894);
   16->SetBinContent(30,53.09894);
   16->SetBinContent(31,53.09894);
   16->SetBinContent(32,21.23957);
   16->SetBinContent(33,63.71873);
   16->SetBinContent(34,63.71873);
   16->SetBinContent(35,53.09894);
   16->SetBinContent(36,74.33852);
   16->SetBinContent(37,21.23957);
   16->SetBinContent(38,31.85936);
   16->SetBinContent(39,42.47915);
   16->SetBinContent(40,74.33852);
   16->SetBinContent(41,42.47915);
   16->SetBinContent(42,42.47915);
   16->SetBinContent(43,53.09894);
   16->SetBinContent(44,95.57809);
   16->SetBinContent(45,74.33852);
   16->SetBinContent(46,84.95831);
   16->SetBinContent(47,95.57809);
   16->SetBinContent(48,53.09894);
   16->SetBinContent(49,10.61979);
   16->SetBinContent(50,31.85936);
   16->SetBinContent(51,5012.54);
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
   
   TH1F *17 = new TH1F("17","qq",50,-1,1);
   17->SetBinContent(0,36309.78);
   17->SetBinContent(1,121.6411);
   17->SetBinContent(2,243.2822);
   17->SetBinContent(3,304.1028);
   17->SetBinContent(4,121.6411);
   17->SetBinContent(5,486.5645);
   17->SetBinContent(6,243.2822);
   17->SetBinContent(7,304.1028);
   17->SetBinContent(9,121.6411);
   17->SetBinContent(10,121.6411);
   17->SetBinContent(11,182.4617);
   17->SetBinContent(12,243.2822);
   17->SetBinContent(13,121.6411);
   17->SetBinContent(14,304.1028);
   17->SetBinContent(16,121.6411);
   17->SetBinContent(17,121.6411);
   17->SetBinContent(19,60.82056);
   17->SetBinContent(20,182.4617);
   17->SetBinContent(21,121.6411);
   17->SetBinContent(22,121.6411);
   17->SetBinContent(23,121.6411);
   17->SetBinContent(24,121.6411);
   17->SetBinContent(25,121.6411);
   17->SetBinContent(26,364.9234);
   17->SetBinContent(27,243.2822);
   17->SetBinContent(28,121.6411);
   17->SetBinContent(30,121.6411);
   17->SetBinContent(31,121.6411);
   17->SetBinContent(32,121.6411);
   17->SetBinContent(33,182.4617);
   17->SetBinContent(34,60.82056);
   17->SetBinContent(35,60.82056);
   17->SetBinContent(36,121.6411);
   17->SetBinContent(37,121.6411);
   17->SetBinContent(38,121.6411);
   17->SetBinContent(39,60.82056);
   17->SetBinContent(40,243.2822);
   17->SetBinContent(41,121.6411);
   17->SetBinContent(42,243.2822);
   17->SetBinContent(43,182.4617);
   17->SetBinContent(44,60.82056);
   17->SetBinContent(45,121.6411);
   17->SetBinContent(46,182.4617);
   17->SetBinContent(47,364.9234);
   17->SetBinContent(48,425.7439);
   17->SetBinContent(49,243.2822);
   17->SetBinContent(50,121.6411);
   17->SetBinContent(51,36248.96);
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
