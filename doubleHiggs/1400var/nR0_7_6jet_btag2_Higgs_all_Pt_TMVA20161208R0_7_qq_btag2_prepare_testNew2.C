{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 00:58:47 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-53.96825,-3.203963,263.4921,5.778777);
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
   
   TH1F *THStack_stack_10 = new TH1F("THStack_stack_10","",50,0,200);
   THStack_stack_10->SetMinimum(0.02587796);
   THStack_stack_10->SetMaximum(114857.2);
   THStack_stack_10->SetDirectory(0);
   THStack_stack_10->SetStats(0);
   THStack_stack_10->SetLineWidth(2);
   THStack_stack_10->SetMarkerSize(1.2);
   THStack_stack_10->GetXaxis()->SetTitle("P_{T,visible} / GeV");
   THStack_stack_10->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_10->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_10->GetXaxis()->SetLabelColor(ci);
   THStack_stack_10->GetXaxis()->SetLabelFont(42);
   THStack_stack_10->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_10->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_10->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_10->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_10->GetXaxis()->SetTitleColor(ci);
   THStack_stack_10->GetXaxis()->SetTitleFont(42);
   THStack_stack_10->GetYaxis()->SetTitle("Number of events");
   THStack_stack_10->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_10->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_10->GetYaxis()->SetLabelColor(ci);
   THStack_stack_10->GetYaxis()->SetLabelFont(42);
   THStack_stack_10->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_10->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_10->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_10->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_10->GetYaxis()->SetTitleColor(ci);
   THStack_stack_10->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_10->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_10->GetZaxis()->SetLabelColor(ci);
   THStack_stack_10->GetZaxis()->SetLabelFont(42);
   THStack_stack_10->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_10->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_10->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_10->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_10->GetZaxis()->SetTitleColor(ci);
   THStack_stack_10->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_10);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,200);
   0->SetBinContent(8,0.2503062);
   0->SetBinContent(9,0.5024925);
   0->SetBinContent(10,0.5382508);
   0->SetBinContent(11,0.5533069);
   0->SetBinContent(12,0.5457789);
   0->SetBinContent(13,0.6116495);
   0->SetBinContent(14,0.5307227);
   0->SetBinContent(15,0.557071);
   0->SetBinContent(16,0.4874365);
   0->SetBinContent(17,0.5250767);
   0->SetBinContent(18,0.5683631);
   0->SetBinContent(19,0.5965933);
   0->SetBinContent(20,0.5401328);
   0->SetBinContent(21,0.4836726);
   0->SetBinContent(22,0.5062565);
   0->SetBinContent(23,0.4629707);
   0->SetBinContent(24,0.4422688);
   0->SetBinContent(25,0.427213);
   0->SetBinContent(26,0.3801633);
   0->SetBinContent(27,0.3745173);
   0->SetBinContent(28,0.3707533);
   0->SetBinContent(29,0.3387596);
   0->SetBinContent(30,0.3481695);
   0->SetBinContent(31,0.2954739);
   0->SetBinContent(32,0.2390142);
   0->SetBinContent(33,0.2992378);
   0->SetBinContent(34,0.2484242);
   0->SetBinContent(35,0.2408962);
   0->SetBinContent(36,0.2032562);
   0->SetBinContent(37,0.2408962);
   0->SetBinContent(38,0.2051382);
   0->SetBinContent(39,0.1919641);
   0->SetBinContent(40,0.1524421);
   0->SetBinContent(41,0.2013742);
   0->SetBinContent(42,0.1279761);
   0->SetBinContent(43,0.1373861);
   0->SetBinContent(44,0.1298581);
   0->SetBinContent(45,0.1505601);
   0->SetBinContent(46,0.1336221);
   0->SetBinContent(47,0.08469005);
   0->SetBinContent(48,0.1053921);
   0->SetBinContent(49,0.09786406);
   0->SetBinContent(50,0.09974606);
   0->SetBinContent(51,2.152994);
   0->SetEntries(8863);
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
   1->SetBinContent(8,0.1627928);
   1->SetBinContent(9,0.3208809);
   1->SetBinContent(10,0.3500521);
   1->SetBinContent(11,0.4027486);
   1->SetBinContent(12,0.3820464);
   1->SetBinContent(13,0.4046306);
   1->SetBinContent(14,0.4055716);
   1->SetBinContent(15,0.4290968);
   1->SetBinContent(16,0.3989846);
   1->SetBinContent(17,0.4149817);
   1->SetBinContent(18,0.3613442);
   1->SetBinContent(19,0.3538162);
   1->SetBinContent(20,0.3575802);
   1->SetBinContent(21,0.3556982);
   1->SetBinContent(22,0.2982967);
   1->SetBinContent(23,0.2860636);
   1->SetBinContent(24,0.2691254);
   1->SetBinContent(25,0.2822995);
   1->SetBinContent(26,0.2691254);
   1->SetBinContent(27,0.2597153);
   1->SetBinContent(28,0.2041965);
   1->SetBinContent(29,0.2126655);
   1->SetBinContent(30,0.2079605);
   1->SetBinContent(31,0.1891406);
   1->SetBinContent(32,0.1590289);
   1->SetBinContent(33,0.1618518);
   1->SetBinContent(34,0.1486779);
   1->SetBinContent(35,0.1289171);
   1->SetBinContent(36,0.1289171);
   1->SetBinContent(37,0.1242121);
   1->SetBinContent(38,0.1035101);
   1->SetBinContent(39,0.1148021);
   1->SetBinContent(40,0.08657207);
   1->SetBinContent(41,0.08657207);
   1->SetBinContent(42,0.07998506);
   1->SetBinContent(43,0.07433905);
   1->SetBinContent(44,0.06775205);
   1->SetBinContent(45,0.05551904);
   1->SetBinContent(46,0.08092606);
   1->SetBinContent(47,0.05363704);
   1->SetBinContent(48,0.05740104);
   1->SetBinContent(49,0.04610903);
   1->SetBinContent(50,0.05363704);
   1->SetBinContent(51,1.016271);
   1->SetEntries(11060);
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
   2->SetBinContent(8,0.3999256);
   2->SetBinContent(9,0.8064315);
   2->SetBinContent(10,0.914644);
   2->SetBinContent(11,0.9099391);
   2->SetBinContent(12,0.9767486);
   2->SetBinContent(13,0.9513422);
   2->SetBinContent(14,0.9758076);
   2->SetBinContent(15,0.9381685);
   2->SetBinContent(16,0.960752);
   2->SetBinContent(17,0.9419324);
   2->SetBinContent(18,0.8610082);
   2->SetBinContent(19,0.8892376);
   2->SetBinContent(20,0.8356018);
   2->SetBinContent(21,0.8111364);
   2->SetBinContent(22,0.7640874);
   2->SetBinContent(23,0.7753792);
   2->SetBinContent(24,0.6831633);
   2->SetBinContent(25,0.6474061);
   2->SetBinContent(26,0.606003);
   2->SetBinContent(27,0.607885);
   2->SetBinContent(28,0.519433);
   2->SetBinContent(29,0.5024954);
   2->SetBinContent(30,0.5147281);
   2->SetBinContent(31,0.4977904);
   2->SetBinContent(32,0.4243918);
   2->SetBinContent(33,0.4008666);
   2->SetBinContent(34,0.3801644);
   2->SetBinContent(35,0.3491111);
   2->SetBinContent(36,0.334055);
   2->SetBinContent(37,0.2954736);
   2->SetBinContent(38,0.2907686);
   2->SetBinContent(39,0.2964146);
   2->SetBinContent(40,0.2437183);
   2->SetBinContent(41,0.2183114);
   2->SetBinContent(42,0.2531283);
   2->SetBinContent(43,0.1929046);
   2->SetBinContent(44,0.1863177);
   2->SetBinContent(45,0.1787897);
   2->SetBinContent(46,0.1580879);
   2->SetBinContent(47,0.1693798);
   2->SetBinContent(48,0.1543239);
   2->SetBinContent(49,0.1477369);
   2->SetBinContent(50,0.136445);
   2->SetBinContent(51,3.093142);
   2->SetEntries(27837);
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
   3->SetBinContent(8,1.099471);
   3->SetBinContent(9,2.349182);
   3->SetBinContent(10,2.683804);
   3->SetBinContent(11,2.997939);
   3->SetBinContent(12,2.888675);
   3->SetBinContent(13,3.250613);
   3->SetBinContent(14,2.977452);
   3->SetBinContent(15,3.298416);
   3->SetBinContent(16,2.827214);
   3->SetBinContent(17,3.223297);
   3->SetBinContent(18,3.2711);
   3->SetBinContent(19,3.346219);
   3->SetBinContent(20,3.380364);
   3->SetBinContent(21,3.189152);
   3->SetBinContent(22,2.970623);
   3->SetBinContent(23,3.107203);
   3->SetBinContent(24,3.366706);
   3->SetBinContent(25,2.827214);
   3->SetBinContent(26,2.745265);
   3->SetBinContent(27,3.011597);
   3->SetBinContent(28,2.567711);
   3->SetBinContent(29,2.492591);
   3->SetBinContent(30,2.526736);
   3->SetBinContent(31,2.519907);
   3->SetBinContent(32,2.472104);
   3->SetBinContent(33,2.123824);
   3->SetBinContent(34,2.246747);
   3->SetBinContent(35,2.076021);
   3->SetBinContent(36,1.877979);
   3->SetBinContent(37,1.741399);
   3->SetBinContent(38,1.727741);
   3->SetBinContent(39,1.563844);
   3->SetBinContent(40,1.727741);
   3->SetBinContent(41,1.447751);
   3->SetBinContent(42,1.543357);
   3->SetBinContent(43,1.24288);
   3->SetBinContent(44,1.113129);
   3->SetBinContent(45,1.331658);
   3->SetBinContent(46,1.099471);
   3->SetBinContent(47,1.078984);
   3->SetBinContent(48,1.099471);
   3->SetBinContent(49,0.887771);
   3->SetBinContent(50,1.065326);
   3->SetBinContent(51,16.15076);
   3->SetEntries(16772);
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
   4->SetBinContent(8,1.525685);
   4->SetBinContent(9,3.772108);
   4->SetBinContent(10,3.540627);
   4->SetBinContent(11,3.956241);
   4->SetBinContent(12,4.566511);
   4->SetBinContent(13,4.366595);
   4->SetBinContent(14,4.529685);
   4->SetBinContent(15,4.719079);
   4->SetBinContent(16,4.855863);
   4->SetBinContent(17,5.124171);
   4->SetBinContent(18,5.124171);
   4->SetBinContent(19,4.813776);
   4->SetBinContent(20,5.029474);
   4->SetBinContent(21,4.850602);
   4->SetBinContent(22,4.934777);
   4->SetBinContent(23,4.89269);
   4->SetBinContent(24,4.740122);
   4->SetBinContent(25,4.408683);
   4->SetBinContent(26,4.150897);
   4->SetBinContent(27,4.187723);
   4->SetBinContent(28,4.077243);
   4->SetBinContent(29,3.993068);
   4->SetBinContent(30,3.819457);
   4->SetBinContent(31,3.856283);
   4->SetBinContent(32,3.482756);
   4->SetBinContent(33,3.524844);
   4->SetBinContent(34,3.27758);
   4->SetBinContent(35,3.151317);
   4->SetBinContent(36,2.998749);
   4->SetBinContent(37,2.956662);
   4->SetBinContent(38,2.583135);
   4->SetBinContent(39,2.772529);
   4->SetBinContent(40,2.604179);
   4->SetBinContent(41,2.341131);
   4->SetBinContent(42,2.172781);
   4->SetBinContent(43,2.151737);
   4->SetBinContent(44,1.878168);
   4->SetBinContent(45,1.904473);
   4->SetBinContent(46,1.567773);
   4->SetBinContent(47,1.541468);
   4->SetBinContent(48,1.483598);
   4->SetBinContent(49,1.399422);
   4->SetBinContent(50,1.462554);
   4->SetBinContent(51,23.65325);
   4->SetEntries(32835);
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
   5->SetBinContent(8,4.861214);
   5->SetBinContent(9,9.995194);
   5->SetBinContent(10,11.23526);
   5->SetBinContent(11,11.42127);
   5->SetBinContent(12,11.63208);
   5->SetBinContent(13,12.0661);
   5->SetBinContent(14,13.21936);
   5->SetBinContent(15,13.82699);
   5->SetBinContent(16,13.55417);
   5->SetBinContent(17,14.28581);
   5->SetBinContent(18,14.95545);
   5->SetBinContent(19,14.43462);
   5->SetBinContent(20,14.81904);
   5->SetBinContent(21,14.28581);
   5->SetBinContent(22,13.46737);
   5->SetBinContent(23,13.49217);
   5->SetBinContent(24,13.69058);
   5->SetBinContent(25,13.64098);
   5->SetBinContent(26,13.13255);
   5->SetBinContent(27,12.26451);
   5->SetBinContent(28,12.52492);
   5->SetBinContent(29,11.48327);
   5->SetBinContent(30,11.39647);
   5->SetBinContent(31,10.54082);
   5->SetBinContent(32,11.13605);
   5->SetBinContent(33,10.62763);
   5->SetBinContent(34,9.833986);
   5->SetBinContent(35,9.362762);
   5->SetBinContent(36,9.11475);
   5->SetBinContent(37,8.618725);
   5->SetBinContent(38,8.383113);
   5->SetBinContent(39,7.688665);
   5->SetBinContent(40,7.29183);
   5->SetBinContent(41,6.770984);
   5->SetBinContent(42,6.671775);
   5->SetBinContent(43,6.312143);
   5->SetBinContent(44,5.902906);
   5->SetBinContent(45,5.630082);
   5->SetBinContent(46,5.642483);
   5->SetBinContent(47,5.15884);
   5->SetBinContent(48,4.799208);
   5->SetBinContent(49,4.625593);
   5->SetBinContent(50,4.377571);
   5->SetBinContent(51,77.26923);
   5->SetEntries(41565);
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
   6->SetBinContent(8,421.6483);
   6->SetBinContent(9,828.205);
   6->SetBinContent(10,838.8348);
   6->SetBinContent(11,809.9823);
   6->SetBinContent(12,788.191);
   6->SetBinContent(13,739.901);
   6->SetBinContent(14,690.0165);
   6->SetBinContent(15,645.7506);
   6->SetBinContent(16,598.3717);
   6->SetBinContent(17,556.004);
   6->SetBinContent(18,510.7516);
   6->SetBinContent(19,462.3292);
   6->SetBinContent(20,431.1354);
   6->SetBinContent(21,386.6596);
   6->SetBinContent(22,355.6177);
   6->SetBinContent(23,316.6065);
   6->SetBinContent(24,291.105);
   6->SetBinContent(25,251.7135);
   6->SetBinContent(26,235.0887);
   6->SetBinContent(27,219.223);
   6->SetBinContent(28,195.9178);
   6->SetBinContent(29,176.0288);
   6->SetBinContent(30,161.8331);
   6->SetBinContent(31,135.5674);
   6->SetBinContent(32,129.9499);
   6->SetBinContent(33,115.1483);
   6->SetBinContent(34,109.1518);
   6->SetBinContent(35,94.27444);
   6->SetBinContent(36,88.73338);
   6->SetBinContent(37,81.52242);
   6->SetBinContent(38,71.88251);
   6->SetBinContent(39,63.76068);
   6->SetBinContent(40,60.8763);
   6->SetBinContent(41,50.93277);
   6->SetBinContent(42,50.70505);
   6->SetBinContent(43,44.63266);
   6->SetBinContent(44,41.59647);
   6->SetBinContent(45,36.28313);
   6->SetBinContent(46,33.62646);
   6->SetBinContent(47,31.88065);
   6->SetBinContent(48,26.71899);
   6->SetBinContent(49,28.0094);
   6->SetBinContent(50,22.16458);
   6->SetBinContent(51,276.0015);
   6->SetEntries(164730);
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
   7->SetBinContent(8,47.30824);
   7->SetBinContent(9,104.3306);
   7->SetBinContent(10,110.7261);
   7->SetBinContent(11,117.2192);
   7->SetBinContent(12,122.98);
   7->SetBinContent(13,130.0593);
   7->SetBinContent(14,135.0886);
   7->SetBinContent(15,133.9655);
   7->SetBinContent(16,135.4304);
   7->SetBinContent(17,138.0671);
   7->SetBinContent(18,142.4128);
   7->SetBinContent(19,138.4577);
   7->SetBinContent(20,140.2155);
   7->SetBinContent(21,138.4089);
   7->SetBinContent(22,134.2097);
   7->SetBinContent(23,131.6218);
   7->SetBinContent(24,127.618);
   7->SetBinContent(25,126.2998);
   7->SetBinContent(26,128.0573);
   7->SetBinContent(27,124.9328);
   7->SetBinContent(28,119.3185);
   7->SetBinContent(29,118.9767);
   7->SetBinContent(30,112.6301);
   7->SetBinContent(31,111.8001);
   7->SetBinContent(32,108.3827);
   7->SetBinContent(33,102.9148);
   7->SetBinContent(34,102.1337);
   7->SetBinContent(35,100.0344);
   7->SetBinContent(36,95.29878);
   7->SetBinContent(37,92.51601);
   7->SetBinContent(38,89.1474);
   7->SetBinContent(39,84.94884);
   7->SetBinContent(40,84.21653);
   7->SetBinContent(41,78.16279);
   7->SetBinContent(42,78.35807);
   7->SetBinContent(43,72.30433);
   7->SetBinContent(44,72.74371);
   7->SetBinContent(45,67.56874);
   7->SetBinContent(46,64.59069);
   7->SetBinContent(47,63.1749);
   7->SetBinContent(48,63.46782);
   7->SetBinContent(49,60.78269);
   7->SetBinContent(50,56.14474);
   7->SetBinContent(51,1236.846);
   7->SetEntries(117648);
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
   8->SetBinContent(8,24.21428);
   8->SetBinContent(9,50.18938);
   8->SetBinContent(10,35.36749);
   8->SetBinContent(11,27.00259);
   8->SetBinContent(12,23.48051);
   8->SetBinContent(13,21.13246);
   8->SetBinContent(14,16.2896);
   8->SetBinContent(15,15.55583);
   8->SetBinContent(16,14.23505);
   8->SetBinContent(17,7.924658);
   8->SetBinContent(18,7.777905);
   8->SetBinContent(19,6.163624);
   8->SetBinContent(20,4.40259);
   8->SetBinContent(21,4.696096);
   8->SetBinContent(22,2.641554);
   8->SetBinContent(23,2.788307);
   8->SetBinContent(24,2.201295);
   8->SetBinContent(25,1.174024);
   8->SetBinContent(26,1.320777);
   8->SetBinContent(27,1.614283);
   8->SetBinContent(28,1.46753);
   8->SetBinContent(29,1.174024);
   8->SetBinContent(30,0.587012);
   8->SetBinContent(31,0.733765);
   8->SetBinContent(32,1.027271);
   8->SetBinContent(33,1.027271);
   8->SetBinContent(34,0.440259);
   8->SetBinContent(35,0.587012);
   8->SetBinContent(36,0.880518);
   8->SetBinContent(37,0.733765);
   8->SetBinContent(38,0.293506);
   8->SetBinContent(39,0.293506);
   8->SetBinContent(40,0.440259);
   8->SetBinContent(41,0.733765);
   8->SetBinContent(42,0.587012);
   8->SetBinContent(43,0.587012);
   8->SetBinContent(44,0.587012);
   8->SetBinContent(45,0.293506);
   8->SetBinContent(46,0.733765);
   8->SetBinContent(47,0.293506);
   8->SetBinContent(48,0.293506);
   8->SetBinContent(49,0.146753);
   8->SetBinContent(50,0.293506);
   8->SetBinContent(51,5.283107);
   8->SetEntries(1974);
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
   9->SetBinContent(8,179.8381);
   9->SetBinContent(9,356.9369);
   9->SetBinContent(10,390.0263);
   9->SetBinContent(11,395.1697);
   9->SetBinContent(12,396.1984);
   9->SetBinContent(13,391.3979);
   9->SetBinContent(14,386.4259);
   9->SetBinContent(15,379.2251);
   9->SetBinContent(16,392.598);
   9->SetBinContent(17,376.4819);
   9->SetBinContent(18,374.9389);
   9->SetBinContent(19,352.3078);
   9->SetBinContent(20,350.7647);
   9->SetBinContent(21,360.3658);
   9->SetBinContent(22,334.8201);
   9->SetBinContent(23,339.9635);
   9->SetBinContent(24,324.8761);
   9->SetBinContent(25,317.3324);
   9->SetBinContent(26,304.131);
   9->SetBinContent(27,290.2437);
   9->SetBinContent(28,303.9595);
   9->SetBinContent(29,281.8427);
   9->SetBinContent(30,260.2403);
   9->SetBinContent(31,256.1256);
   9->SetBinContent(32,248.9254);
   9->SetBinContent(33,250.6397);
   9->SetBinContent(34,239.8395);
   9->SetBinContent(35,236.4108);
   9->SetBinContent(36,230.7536);
   9->SetBinContent(37,213.7817);
   9->SetBinContent(38,212.2388);
   9->SetBinContent(39,211.3817);
   9->SetBinContent(40,205.7244);
   9->SetBinContent(41,217.7247);
   9->SetBinContent(42,201.4386);
   9->SetBinContent(43,188.0669);
   9->SetBinContent(44,175.5523);
   9->SetBinContent(45,168.1807);
   9->SetBinContent(46,172.4665);
   9->SetBinContent(47,172.4665);
   9->SetBinContent(48,156.6947);
   9->SetBinContent(49,155.4947);
   9->SetBinContent(50,150.6946);
   9->SetBinContent(51,4296.669);
   9->SetEntries(94508);
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
   10->SetBinContent(8,722.2231);
   10->SetBinContent(9,1509.462);
   10->SetBinContent(10,1626.342);
   10->SetBinContent(11,1676.767);
   10->SetBinContent(12,1735.018);
   10->SetBinContent(13,1758.811);
   10->SetBinContent(14,1780.647);
   10->SetBinContent(15,1743.601);
   10->SetBinContent(16,1739.31);
   10->SetBinContent(17,1713.624);
   10->SetBinContent(18,1677.209);
   10->SetBinContent(19,1613.215);
   10->SetBinContent(20,1592.326);
   10->SetBinContent(21,1522.273);
   10->SetBinContent(22,1480.683);
   10->SetBinContent(23,1418.393);
   10->SetBinContent(24,1359.385);
   10->SetBinContent(25,1290.279);
   10->SetBinContent(26,1248.942);
   10->SetBinContent(27,1182.171);
   10->SetBinContent(28,1124.489);
   10->SetBinContent(29,1066.806);
   10->SetBinContent(30,1010.953);
   10->SetBinContent(31,972.5819);
   10->SetBinContent(32,923.3558);
   10->SetBinContent(33,878.1688);
   10->SetBinContent(34,825.2192);
   10->SetBinContent(35,785.5859);
   10->SetBinContent(36,733.7092);
   10->SetBinContent(37,712.6935);
   10->SetBinContent(38,659.5546);
   10->SetBinContent(39,632.8589);
   10->SetBinContent(40,597.0753);
   10->SetBinContent(41,575.6178);
   10->SetBinContent(42,522.7313);
   10->SetBinContent(43,504.6853);
   10->SetBinContent(44,479.3903);
   10->SetBinContent(45,448.6073);
   10->SetBinContent(46,422.3661);
   10->SetBinContent(47,400.4143);
   10->SetBinContent(48,388.9338);
   10->SetBinContent(49,361.4941);
   10->SetBinContent(50,342.507);
   10->SetBinContent(51,5779.66);
   10->SetEntries(816916);
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
   11->SetBinContent(8,1536.557);
   11->SetBinContent(9,2487.757);
   11->SetBinContent(10,1726.797);
   11->SetBinContent(11,1317.048);
   11->SetBinContent(12,834.1297);
   11->SetBinContent(13,717.0589);
   11->SetBinContent(14,497.5511);
   11->SetBinContent(15,512.185);
   11->SetBinContent(16,424.3819);
   11->SetBinContent(17,321.9449);
   11->SetBinContent(18,204.8741);
   11->SetBinContent(19,219.5079);
   11->SetBinContent(20,175.6063);
   11->SetBinContent(21,102.437);
   11->SetBinContent(22,29.26772);
   11->SetBinContent(23,29.26772);
   11->SetBinContent(24,14.63386);
   11->SetBinContent(25,29.26772);
   11->SetBinContent(32,14.63386);
   11->SetBinContent(49,14.63386);
   11->SetEntries(766);
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
   12->SetBinContent(8,7979.979);
   12->SetBinContent(9,13924.06);
   12->SetBinContent(10,11646.65);
   12->SetBinContent(11,8785.618);
   12->SetBinContent(12,6679.61);
   12->SetBinContent(13,4357.976);
   12->SetBinContent(14,2841.888);
   12->SetBinContent(15,1738.118);
   12->SetBinContent(16,1256.012);
   12->SetBinContent(17,723.1573);
   12->SetBinContent(18,520.1651);
   12->SetBinContent(19,342.5477);
   12->SetBinContent(20,298.1434);
   12->SetBinContent(21,202.9913);
   12->SetBinContent(22,114.1826);
   12->SetBinContent(23,139.5565);
   12->SetBinContent(24,88.80869);
   12->SetBinContent(25,82.46522);
   12->SetBinContent(26,44.40435);
   12->SetBinContent(27,76.12174);
   12->SetBinContent(28,38.06087);
   12->SetBinContent(29,38.06087);
   12->SetBinContent(30,57.09131);
   12->SetBinContent(31,38.06087);
   12->SetBinContent(32,44.40435);
   12->SetBinContent(33,31.71739);
   12->SetBinContent(34,25.37391);
   12->SetBinContent(35,44.40435);
   12->SetBinContent(36,19.03043);
   12->SetBinContent(37,6.343478);
   12->SetBinContent(38,12.68696);
   12->SetBinContent(39,6.343478);
   12->SetBinContent(40,19.03043);
   12->SetBinContent(41,6.343478);
   12->SetBinContent(42,6.343478);
   12->SetBinContent(43,12.68696);
   12->SetBinContent(44,6.343478);
   12->SetBinContent(45,6.343478);
   12->SetBinContent(46,25.37391);
   12->SetBinContent(47,12.68696);
   12->SetBinContent(48,6.343478);
   12->SetBinContent(49,6.343478);
   12->SetBinContent(50,6.343478);
   12->SetBinContent(51,76.12174);
   12->SetEntries(9836);
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
   13->SetBinContent(8,13622.93);
   13->SetBinContent(9,20393.59);
   13->SetBinContent(10,13378.21);
   13->SetBinContent(11,8402.182);
   13->SetBinContent(12,7260.137);
   13->SetBinContent(13,6199.666);
   13->SetBinContent(14,4078.723);
   13->SetBinContent(15,3589.277);
   13->SetBinContent(16,3262.979);
   13->SetBinContent(17,2936.681);
   13->SetBinContent(18,1468.341);
   13->SetBinContent(19,571.0215);
   13->SetBinContent(20,326.298);
   13->SetBinContent(21,571.0215);
   13->SetBinContent(22,163.149);
   13->SetBinContent(23,81.57449);
   13->SetBinContent(24,81.57449);
   13->SetBinContent(31,81.57449);
   13->SetEntries(1060);
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
   14->SetBinContent(8,560.0977);
   14->SetBinContent(9,1015.429);
   14->SetBinContent(10,954.9867);
   14->SetBinContent(11,890.515);
   14->SetBinContent(12,1071.841);
   14->SetBinContent(13,1079.9);
   14->SetBinContent(14,1063.782);
   14->SetBinContent(15,1192.724);
   14->SetBinContent(16,1212.871);
   14->SetBinContent(17,1208.841);
   14->SetBinContent(18,1035.576);
   14->SetBinContent(19,1091.988);
   14->SetBinContent(20,1140.341);
   14->SetBinContent(21,967.0751);
   14->SetBinContent(22,1087.959);
   14->SetBinContent(23,1160.488);
   14->SetBinContent(24,1023.488);
   14->SetBinContent(25,1011.399);
   14->SetBinContent(26,1055.723);
   14->SetBinContent(27,971.1046);
   14->SetBinContent(28,954.9867);
   14->SetBinContent(29,954.9867);
   14->SetBinContent(30,950.9572);
   14->SetBinContent(31,926.7803);
   14->SetBinContent(32,1015.429);
   14->SetBinContent(33,842.1613);
   14->SetBinContent(34,878.4266);
   14->SetBinContent(35,749.4832);
   14->SetBinContent(36,721.2769);
   14->SetBinContent(37,777.6896);
   14->SetBinContent(38,693.0705);
   14->SetBinContent(39,660.8347);
   14->SetBinContent(40,624.5693);
   14->SetBinContent(41,717.2474);
   14->SetBinContent(42,608.4514);
   14->SetBinContent(43,689.041);
   14->SetBinContent(44,523.8323);
   14->SetBinContent(45,491.5965);
   14->SetBinContent(46,543.9797);
   14->SetBinContent(47,463.3902);
   14->SetBinContent(48,419.0659);
   14->SetBinContent(49,447.2722);
   14->SetBinContent(50,451.3017);
   14->SetBinContent(51,10174.18);
   14->SetEntries(11683);
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
   15->SetBinContent(8,316.7538);
   15->SetBinContent(9,618.0564);
   15->SetBinContent(10,482.8565);
   15->SetBinContent(11,312.8909);
   15->SetBinContent(12,316.7538);
   15->SetBinContent(13,212.4567);
   15->SetBinContent(14,224.0453);
   15->SetBinContent(15,162.2396);
   15->SetBinContent(16,181.5539);
   15->SetBinContent(17,96.57117);
   15->SetBinContent(18,92.70832);
   15->SetBinContent(19,81.11978);
   15->SetBinContent(20,50.21701);
   15->SetBinContent(21,61.80555);
   15->SetBinContent(22,19.31424);
   15->SetBinContent(23,19.31424);
   15->SetBinContent(24,7.725694);
   15->SetBinContent(25,3.862847);
   15->SetBinContent(26,15.45139);
   15->SetBinContent(28,11.58854);
   15->SetBinContent(29,11.58854);
   15->SetBinContent(30,3.862847);
   15->SetBinContent(31,3.862847);
   15->SetBinContent(32,3.862847);
   15->SetBinContent(33,11.58854);
   15->SetBinContent(36,11.58854);
   15->SetBinContent(37,3.862847);
   15->SetBinContent(38,3.862847);
   15->SetBinContent(46,3.862847);
   15->SetBinContent(47,3.862847);
   15->SetBinContent(51,27.03993);
   15->SetEntries(874);
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
   16->SetBinContent(8,1701.314);
   16->SetBinContent(9,3297.813);
   16->SetBinContent(10,3285.485);
   16->SetBinContent(11,3168.368);
   16->SetBinContent(12,2650.587);
   16->SetBinContent(13,2761.54);
   16->SetBinContent(14,2484.157);
   16->SetBinContent(15,2422.517);
   16->SetBinContent(16,2299.235);
   16->SetBinContent(17,2120.478);
   16->SetBinContent(18,2009.524);
   16->SetBinContent(19,1750.628);
   16->SetBinContent(20,1867.747);
   16->SetBinContent(21,1701.314);
   16->SetBinContent(22,1547.21);
   16->SetBinContent(23,1485.568);
   16->SetBinContent(24,1362.284);
   16->SetBinContent(25,1115.717);
   16->SetBinContent(26,1300.642);
   16->SetBinContent(27,924.6271);
   16->SetBinContent(28,936.9554);
   16->SetBinContent(29,961.6122);
   16->SetBinContent(30,862.9852);
   16->SetBinContent(31,949.2838);
   16->SetBinContent(32,844.4927);
   16->SetBinContent(33,862.9852);
   16->SetBinContent(34,671.8955);
   16->SetBinContent(35,585.5969);
   16->SetBinContent(36,579.4327);
   16->SetBinContent(37,573.2686);
   16->SetBinContent(38,511.6267);
   16->SetBinContent(39,523.9551);
   16->SetBinContent(40,517.7909);
   16->SetBinContent(41,437.6565);
   16->SetBinContent(42,437.6565);
   16->SetBinContent(43,394.5072);
   16->SetBinContent(44,295.8802);
   16->SetBinContent(45,277.3877);
   16->SetBinContent(46,345.1937);
   16->SetBinContent(47,265.0593);
   16->SetBinContent(48,314.3728);
   16->SetBinContent(49,277.3877);
   16->SetBinContent(50,246.5668);
   16->SetBinContent(51,4499.806);
   16->SetEntries(9479);
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
   17->SetBinContent(8,5200.404);
   17->SetBinContent(9,8925.011);
   17->SetBinContent(10,7706.911);
   17->SetBinContent(11,5153.554);
   17->SetBinContent(12,3490.358);
   17->SetBinContent(13,2670.473);
   17->SetBinContent(14,2014.565);
   17->SetBinContent(15,1592.912);
   17->SetBinContent(16,1171.259);
   17->SetBinContent(17,1288.385);
   17->SetBinContent(18,1218.109);
   17->SetBinContent(19,702.7552);
   17->SetBinContent(20,702.7552);
   17->SetBinContent(21,515.3538);
   17->SetBinContent(22,702.7552);
   17->SetBinContent(23,374.8028);
   17->SetBinContent(24,562.2042);
   17->SetBinContent(25,468.5034);
   17->SetBinContent(26,374.8028);
   17->SetBinContent(27,281.1021);
   17->SetBinContent(28,210.8266);
   17->SetBinContent(29,210.8266);
   17->SetBinContent(30,281.1021);
   17->SetBinContent(31,187.4014);
   17->SetBinContent(32,281.1021);
   17->SetBinContent(33,140.5511);
   17->SetBinContent(34,117.1259);
   17->SetBinContent(35,210.8266);
   17->SetBinContent(36,234.2517);
   17->SetBinContent(37,117.1259);
   17->SetBinContent(38,117.1259);
   17->SetBinContent(39,163.9762);
   17->SetBinContent(40,187.4014);
   17->SetBinContent(41,46.85035);
   17->SetBinContent(42,93.70071);
   17->SetBinContent(43,70.27553);
   17->SetBinContent(44,93.70071);
   17->SetBinContent(45,46.85035);
   17->SetBinContent(46,46.85035);
   17->SetBinContent(47,70.27553);
   17->SetBinContent(48,70.27553);
   17->SetBinContent(49,117.1259);
   17->SetBinContent(50,23.42518);
   17->SetBinContent(51,796.4559);
   17->SetEntries(2094);
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
