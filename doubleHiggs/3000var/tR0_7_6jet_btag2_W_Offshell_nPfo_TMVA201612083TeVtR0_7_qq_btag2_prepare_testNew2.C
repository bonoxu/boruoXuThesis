{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:45:48 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-13.49206,-3.208133,65.87302,5.793744);
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
   
   TH1F *THStack_stack_28 = new TH1F("THStack_stack_28","",50,0,50);
   THStack_stack_28->SetMinimum(0.02583479);
   THStack_stack_28->SetMaximum(118466.1);
   THStack_stack_28->SetDirectory(0);
   THStack_stack_28->SetStats(0);
   THStack_stack_28->SetLineWidth(2);
   THStack_stack_28->SetMarkerSize(1.2);
   THStack_stack_28->GetXaxis()->SetTitle("N_{PFO,W*}");
   THStack_stack_28->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_28->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_28->GetXaxis()->SetLabelColor(ci);
   THStack_stack_28->GetXaxis()->SetLabelFont(42);
   THStack_stack_28->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_28->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_28->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_28->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_28->GetXaxis()->SetTitleColor(ci);
   THStack_stack_28->GetXaxis()->SetTitleFont(42);
   THStack_stack_28->GetYaxis()->SetTitle("Number of events");
   THStack_stack_28->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_28->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_28->GetYaxis()->SetLabelColor(ci);
   THStack_stack_28->GetYaxis()->SetLabelFont(42);
   THStack_stack_28->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_28->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_28->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_28->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_28->GetYaxis()->SetTitleColor(ci);
   THStack_stack_28->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_28->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_28->GetZaxis()->SetLabelColor(ci);
   THStack_stack_28->GetZaxis()->SetLabelFont(42);
   THStack_stack_28->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_28->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_28->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_28->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_28->GetZaxis()->SetTitleColor(ci);
   THStack_stack_28->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_28);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,50);
   0->SetBinContent(3,0.009899);
   0->SetBinContent(4,0.06929299);
   0->SetBinContent(5,0.019798);
   0->SetBinContent(6,0.09898999);
   0->SetBinContent(7,0.3761619);
   0->SetBinContent(8,0.6632332);
   0->SetBinContent(9,0.9206077);
   0->SetBinContent(10,1.286871);
   0->SetBinContent(11,1.583842);
   0->SetBinContent(12,2.306467);
   0->SetBinContent(13,2.692524);
   0->SetBinContent(14,3.335953);
   0->SetBinContent(15,3.474537);
   0->SetBinContent(16,4.147666);
   0->SetBinContent(17,4.21696);
   0->SetBinContent(18,4.603026);
   0->SetBinContent(19,4.900001);
   0->SetBinContent(20,4.979194);
   0->SetBinContent(21,4.583228);
   0->SetBinContent(22,4.612926);
   0->SetBinContent(23,4.612926);
   0->SetBinContent(24,4.207061);
   0->SetBinContent(25,3.781403);
   0->SetBinContent(26,3.72201);
   0->SetBinContent(27,3.335953);
   0->SetBinContent(28,3.128076);
   0->SetBinContent(29,2.474748);
   0->SetBinContent(30,2.355961);
   0->SetBinContent(31,1.831318);
   0->SetBinContent(32,1.742226);
   0->SetBinContent(33,1.385862);
   0->SetBinContent(34,1.316568);
   0->SetBinContent(35,1.039396);
   0->SetBinContent(36,0.9997998);
   0->SetBinContent(37,0.7127283);
   0->SetBinContent(38,0.7622234);
   0->SetBinContent(39,0.59394);
   0->SetBinContent(40,0.6434351);
   0->SetBinContent(41,0.4751518);
   0->SetBinContent(42,0.247475);
   0->SetBinContent(43,0.277172);
   0->SetBinContent(44,0.306869);
   0->SetBinContent(45,0.237576);
   0->SetBinContent(46,0.178182);
   0->SetBinContent(47,0.138586);
   0->SetBinContent(48,0.128687);
   0->SetBinContent(49,0.06929299);
   0->SetBinContent(50,0.08909099);
   0->SetBinContent(51,0.3959599);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,50);
   1->SetBinContent(3,0.009898);
   1->SetBinContent(4,0.07423501);
   1->SetBinContent(5,0.2177561);
   1->SetBinContent(6,0.3810732);
   1->SetBinContent(7,0.7720429);
   1->SetBinContent(8,1.068981);
   1->SetBinContent(9,1.45995);
   1->SetBinContent(10,1.79648);
   1->SetBinContent(11,1.959797);
   1->SetBinContent(12,2.410163);
   1->SetBinContent(13,2.647719);
   1->SetBinContent(14,2.964461);
   1->SetBinContent(15,3.073341);
   1->SetBinContent(16,3.216865);
   1->SetBinContent(17,3.390083);
   1->SetBinContent(18,3.162425);
   1->SetBinContent(19,3.271305);
   1->SetBinContent(20,3.251509);
   1->SetBinContent(21,3.103036);
   1->SetBinContent(22,2.850632);
   1->SetBinContent(23,2.682363);
   1->SetBinContent(24,2.677414);
   1->SetBinContent(25,2.301283);
   1->SetBinContent(26,2.088472);
   1->SetBinContent(27,1.910307);
   1->SetBinContent(28,1.781633);
   1->SetBinContent(29,1.549032);
   1->SetBinContent(30,1.598521);
   1->SetBinContent(31,1.138267);
   1->SetBinContent(32,1.167961);
   1->SetBinContent(33,0.9106141);
   1->SetBinContent(34,0.7819408);
   1->SetBinContent(35,0.6978083);
   1->SetBinContent(36,0.7670939);
   1->SetBinContent(37,0.4949003);
   1->SetBinContent(38,0.5344921);
   1->SetBinContent(39,0.3761242);
   1->SetBinContent(40,0.3365322);
   1->SetBinContent(41,0.3018892);
   1->SetBinContent(42,0.2276541);
   1->SetBinContent(43,0.2177561);
   1->SetBinContent(44,0.1831131);
   1->SetBinContent(45,0.1435211);
   1->SetBinContent(46,0.09898002);
   1->SetBinContent(47,0.09403102);
   1->SetBinContent(48,0.113827);
   1->SetBinContent(49,0.034643);
   1->SetBinContent(50,0.064337);
   1->SetBinContent(51,0.2771441);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,50);
   2->SetBinContent(3,0.07918401);
   2->SetBinContent(4,0.2474501);
   2->SetBinContent(5,0.6037778);
   2->SetBinContent(6,0.9996957);
   2->SetBinContent(7,1.435205);
   2->SetBinContent(8,2.256741);
   2->SetBinContent(9,2.895174);
   2->SetBinContent(10,3.414829);
   2->SetBinContent(11,4.191836);
   2->SetBinContent(12,4.830269);
   2->SetBinContent(13,5.161859);
   2->SetBinContent(14,5.721106);
   2->SetBinContent(15,6.196219);
   2->SetBinContent(16,6.552554);
   2->SetBinContent(17,6.473368);
   2->SetBinContent(18,6.250659);
   2->SetBinContent(19,6.542655);
   2->SetBinContent(20,6.364488);
   2->SetBinContent(21,6.057644);
   2->SetBinContent(22,5.523142);
   2->SetBinContent(23,5.735953);
   2->SetBinContent(24,4.973793);
   2->SetBinContent(25,4.676847);
   2->SetBinContent(26,4.300716);
   2->SetBinContent(27,3.825603);
   2->SetBinContent(28,3.380185);
   2->SetBinContent(29,3.370287);
   2->SetBinContent(30,2.637821);
   2->SetBinContent(31,2.548738);
   2->SetBinContent(32,2.256741);
   2->SetBinContent(33,2.058777);
   2->SetBinContent(34,1.643062);
   2->SetBinContent(35,1.608419);
   2->SetBinContent(36,1.469848);
   2->SetBinContent(37,1.247144);
   2->SetBinContent(38,1.059083);
   2->SetBinContent(39,0.8462775);
   2->SetBinContent(40,0.7571959);
   2->SetBinContent(41,0.7374001);
   2->SetBinContent(42,0.554288);
   2->SetBinContent(43,0.6136757);
   2->SetBinContent(44,0.4305632);
   2->SetBinContent(45,0.3711752);
   2->SetBinContent(46,0.2672461);
   2->SetBinContent(47,0.2721951);
   2->SetBinContent(48,0.2227051);
   2->SetBinContent(49,0.1930111);
   2->SetBinContent(50,0.133623);
   2->SetBinContent(51,0.7374001);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,50);
   3->SetBinContent(1,0.033765);
   3->SetBinContent(3,0.20259);
   3->SetBinContent(4,0.709065);
   3->SetBinContent(5,1.722014);
   3->SetBinContent(6,3.444032);
   3->SetBinContent(7,5.301102);
   3->SetBinContent(8,7.259463);
   3->SetBinContent(9,11.41254);
   3->SetBinContent(10,13.91114);
   3->SetBinContent(11,16.54481);
   3->SetBinContent(12,19.07724);
   3->SetBinContent(13,21.30579);
   3->SetBinContent(14,25.49274);
   3->SetBinContent(15,25.69534);
   3->SetBinContent(16,28.16024);
   3->SetBinContent(17,28.4979);
   3->SetBinContent(18,28.32907);
   3->SetBinContent(19,26.77584);
   3->SetBinContent(20,26.94467);
   3->SetBinContent(21,26.53948);
   3->SetBinContent(22,26.70831);
   3->SetBinContent(23,24.34471);
   3->SetBinContent(24,22.89278);
   3->SetBinContent(25,19.95515);
   3->SetBinContent(26,18.80712);
   3->SetBinContent(27,17.89544);
   3->SetBinContent(28,15.97079);
   3->SetBinContent(29,13.53972);
   3->SetBinContent(30,12.59431);
   3->SetBinContent(31,12.05407);
   3->SetBinContent(32,9.184059);
   3->SetBinContent(33,8.778881);
   3->SetBinContent(34,6.989344);
   3->SetBinContent(35,6.584166);
   3->SetBinContent(36,5.098513);
   3->SetBinContent(37,4.153098);
   3->SetBinContent(38,4.119333);
   3->SetBinContent(39,3.140146);
   3->SetBinContent(40,2.43108);
   3->SetBinContent(41,2.262254);
   3->SetBinContent(42,2.093429);
   3->SetBinContent(43,1.857074);
   3->SetBinContent(44,1.41813);
   3->SetBinContent(45,1.08048);
   3->SetBinContent(46,0.9454201);
   3->SetBinContent(47,0.6753);
   3->SetBinContent(48,0.8441251);
   3->SetBinContent(49,0.5402399);
   3->SetBinContent(50,0.60777);
   3->SetBinContent(51,2.667435);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,50);
   4->SetBinContent(3,0.4154539);
   4->SetBinContent(4,1.290094);
   4->SetBinContent(5,3.039377);
   4->SetBinContent(6,5.685154);
   4->SetBinContent(7,9.555409);
   4->SetBinContent(8,13.3382);
   4->SetBinContent(9,17.42711);
   4->SetBinContent(10,21.64722);
   4->SetBinContent(11,24.13993);
   4->SetBinContent(12,29.19094);
   4->SetBinContent(13,29.62826);
   4->SetBinContent(14,31.2026);
   4->SetBinContent(15,33.43291);
   4->SetBinContent(16,32.01163);
   4->SetBinContent(17,32.20843);
   4->SetBinContent(18,29.67199);
   4->SetBinContent(19,29.36587);
   4->SetBinContent(20,28.14138);
   4->SetBinContent(21,25.16762);
   4->SetBinContent(22,22.63119);
   4->SetBinContent(23,21.66909);
   4->SetBinContent(24,18.80466);
   4->SetBinContent(25,17.55831);
   4->SetBinContent(26,15.50292);
   4->SetBinContent(27,14.62829);
   4->SetBinContent(28,12.20118);
   4->SetBinContent(29,10.40818);
   4->SetBinContent(30,9.467946);
   4->SetBinContent(31,8.155995);
   4->SetBinContent(32,6.931508);
   4->SetBinContent(33,6.056874);
   4->SetBinContent(34,4.701191);
   4->SetBinContent(35,4.045216);
   4->SetBinContent(36,4.02335);
   4->SetBinContent(37,3.542297);
   4->SetBinContent(38,2.558323);
   4->SetBinContent(39,1.989805);
   4->SetBinContent(40,1.902341);
   4->SetBinContent(41,1.618083);
   4->SetBinContent(42,1.180764);
   4->SetBinContent(43,1.049568);
   4->SetBinContent(44,0.9402384);
   4->SetBinContent(45,0.7653102);
   4->SetBinContent(46,0.7434441);
   4->SetBinContent(47,0.4154539);
   4->SetBinContent(48,0.196794);
   4->SetBinContent(49,0.3061239);
   4->SetBinContent(50,0.3279899);
   4->SetBinContent(51,1.137032);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,50);
   5->SetBinContent(3,0.6978479);
   5->SetBinContent(4,2.675085);
   5->SetBinContent(5,8.14157);
   5->SetBinContent(6,15.87607);
   5->SetBinContent(7,24.7735);
   5->SetBinContent(8,38.73048);
   5->SetBinContent(9,56.52592);
   5->SetBinContent(10,72.45985);
   5->SetBinContent(11,88.80035);
   5->SetBinContent(12,101.4192);
   5->SetBinContent(13,114.9684);
   5->SetBinContent(14,119.795);
   5->SetBinContent(15,122.7025);
   5->SetBinContent(16,124.2145);
   5->SetBinContent(17,128.0524);
   5->SetBinContent(18,117.1782);
   5->SetBinContent(19,113.6309);
   5->SetBinContent(20,101.5936);
   5->SetBinContent(21,104.7338);
   5->SetBinContent(22,91.88237);
   5->SetBinContent(23,83.27599);
   5->SetBinContent(24,73.85548);
   5->SetBinContent(25,66.00507);
   5->SetBinContent(26,58.91028);
   5->SetBinContent(27,55.6536);
   5->SetBinContent(28,43.20842);
   5->SetBinContent(29,40.82406);
   5->SetBinContent(30,35.93903);
   5->SetBinContent(31,30.93773);
   5->SetBinContent(32,26.28548);
   5->SetBinContent(33,22.09846);
   5->SetBinContent(34,19.48156);
   5->SetBinContent(35,14.88745);
   5->SetBinContent(36,14.65483);
   5->SetBinContent(37,10.6422);
   5->SetBinContent(38,9.595423);
   5->SetBinContent(39,7.967108);
   5->SetBinContent(40,6.455101);
   5->SetBinContent(41,5.408328);
   5->SetBinContent(42,4.128937);
   5->SetBinContent(43,4.070783);
   5->SetBinContent(44,3.605551);
   5->SetBinContent(45,2.849547);
   5->SetBinContent(46,2.209852);
   5->SetBinContent(47,1.512004);
   5->SetBinContent(48,1.221234);
   5->SetBinContent(49,1.221234);
   5->SetBinContent(50,0.9886178);
   5->SetBinContent(51,4.070783);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,50);
   6->SetBinContent(1,3.508268);
   6->SetBinContent(3,32.45148);
   6->SetBinContent(4,129.806);
   6->SetBinContent(5,322.7603);
   6->SetBinContent(6,639.3845);
   6->SetBinContent(7,1046.347);
   6->SetBinContent(8,1633.988);
   6->SetBinContent(9,2097.954);
   6->SetBinContent(10,2629.387);
   6->SetBinContent(11,3201.161);
   6->SetBinContent(12,3358.135);
   6->SetBinContent(13,3629.114);
   6->SetBinContent(14,3792.227);
   6->SetBinContent(15,3814.151);
   6->SetBinContent(16,3710.67);
   6->SetBinContent(17,3453.723);
   6->SetBinContent(18,3384.444);
   6->SetBinContent(19,3143.282);
   6->SetBinContent(20,2842.487);
   6->SetBinContent(21,2724.975);
   6->SetBinContent(22,2336.485);
   6->SetBinContent(23,2023.409);
   6->SetBinContent(24,1848.871);
   6->SetBinContent(25,1627.848);
   6->SetBinContent(26,1473.483);
   6->SetBinContent(27,1212.992);
   6->SetBinContent(28,1086.693);
   6->SetBinContent(29,953.3774);
   6->SetBinContent(30,814.7995);
   6->SetBinContent(31,639.3845);
   6->SetBinContent(32,574.4809);
   6->SetBinContent(33,506.069);
   6->SetBinContent(34,434.1489);
   6->SetBinContent(35,356.0892);
   6->SetBinContent(36,292.0627);
   6->SetBinContent(37,223.6514);
   6->SetBinContent(38,190.3231);
   6->SetBinContent(39,174.536);
   6->SetBinContent(40,137.6995);
   6->SetBinContent(41,112.2646);
   6->SetBinContent(42,99.10862);
   6->SetBinContent(43,84.19847);
   6->SetBinContent(44,65.78005);
   6->SetBinContent(45,49.99284);
   6->SetBinContent(46,29.82028);
   6->SetBinContent(47,36.83682);
   6->SetBinContent(48,33.32855);
   6->SetBinContent(49,20.17254);
   6->SetBinContent(50,14.91014);
   6->SetBinContent(51,78.93607);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,50);
   7->SetBinContent(1,0.27623);
   7->SetBinContent(3,2.071725);
   7->SetBinContent(4,13.12092);
   7->SetBinContent(5,40.88202);
   7->SetBinContent(6,82.17839);
   7->SetBinContent(7,145.5741);
   7->SetBinContent(8,231.3482);
   7->SetBinContent(9,302.8957);
   7->SetBinContent(10,437.9796);
   7->SetBinContent(11,533.146);
   7->SetBinContent(12,600.1354);
   7->SetBinContent(13,678.8653);
   7->SetBinContent(14,716.849);
   7->SetBinContent(15,763.8107);
   7->SetBinContent(16,766.435);
   7->SetBinContent(17,746.2691);
   7->SetBinContent(18,717.4015);
   7->SetBinContent(19,684.5283);
   7->SetBinContent(20,638.8098);
   7->SetBinContent(21,588.2569);
   7->SetBinContent(22,537.9803);
   7->SetBinContent(23,475.9633);
   7->SetBinContent(24,441.7089);
   7->SetBinContent(25,386.0455);
   7->SetBinContent(26,335.907);
   7->SetBinContent(27,294.7465);
   7->SetBinContent(28,264.0833);
   7->SetBinContent(29,215.326);
   7->SetBinContent(30,187.5634);
   7->SetBinContent(31,166.7069);
   7->SetBinContent(32,144.1929);
   7->SetBinContent(33,117.9502);
   7->SetBinContent(34,94.05627);
   7->SetBinContent(35,82.73085);
   7->SetBinContent(36,71.95789);
   7->SetBinContent(37,61.18492);
   7->SetBinContent(38,43.36809);
   7->SetBinContent(39,41.98694);
   7->SetBinContent(40,32.73324);
   7->SetBinContent(41,29.41848);
   7->SetBinContent(42,23.89388);
   7->SetBinContent(43,16.85002);
   7->SetBinContent(44,15.60699);
   7->SetBinContent(45,13.94961);
   7->SetBinContent(46,9.806162);
   7->SetBinContent(47,8.977472);
   7->SetBinContent(48,6.077058);
   7->SetBinContent(49,7.458208);
   7->SetBinContent(50,3.176645);
   7->SetBinContent(51,21.2697);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,50);
   8->SetBinContent(3,0.92388);
   8->SetBinContent(4,4.6194);
   8->SetBinContent(5,11.08656);
   8->SetBinContent(6,11.08656);
   8->SetBinContent(7,20.32536);
   8->SetBinContent(8,36.03132);
   8->SetBinContent(9,54.50895);
   8->SetBinContent(10,78.52987);
   8->SetBinContent(11,82.2254);
   8->SetBinContent(12,92.38809);
   8->SetBinContent(13,94.23586);
   8->SetBinContent(14,104.3986);
   8->SetBinContent(15,113.6374);
   8->SetBinContent(16,109.018);
   8->SetBinContent(17,125.6478);
   8->SetBinContent(18,116.409);
   8->SetBinContent(19,111.7896);
   8->SetBinContent(20,97.0075);
   8->SetBinContent(21,79.45375);
   8->SetBinContent(22,92.38809);
   8->SetBinContent(23,77.60599);
   8->SetBinContent(24,80.37763);
   8->SetBinContent(25,62.82388);
   8->SetBinContent(26,51.7373);
   8->SetBinContent(27,41.57461);
   8->SetBinContent(28,42.49849);
   8->SetBinContent(29,51.7373);
   8->SetBinContent(30,33.25967);
   8->SetBinContent(31,26.79251);
   8->SetBinContent(32,19.40148);
   8->SetBinContent(33,31.41191);
   8->SetBinContent(34,13.8582);
   8->SetBinContent(35,12.01044);
   8->SetBinContent(36,13.8582);
   8->SetBinContent(37,5.54328);
   8->SetBinContent(38,11.08656);
   8->SetBinContent(39,5.54328);
   8->SetBinContent(40,5.54328);
   8->SetBinContent(41,3.69552);
   8->SetBinContent(42,2.77164);
   8->SetBinContent(43,6.46716);
   8->SetBinContent(44,3.69552);
   8->SetBinContent(45,2.77164);
   8->SetBinContent(47,3.69552);
   8->SetBinContent(48,0.92388);
   8->SetBinContent(49,2.77164);
   8->SetBinContent(50,1.84776);
   8->SetBinContent(51,9.2388);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,50);
   9->SetBinContent(1,0.439564);
   9->SetBinContent(3,7.91215);
   9->SetBinContent(4,19.34081);
   9->SetBinContent(5,50.54984);
   9->SetBinContent(6,75.1655);
   9->SetBinContent(7,130.551);
   9->SetBinContent(8,177.1443);
   9->SetBinContent(9,245.2761);
   9->SetBinContent(10,290.552);
   9->SetBinContent(11,361.7632);
   9->SetBinContent(12,396.9292);
   9->SetBinContent(13,459.7885);
   9->SetBinContent(14,510.3396);
   9->SetBinContent(15,523.5269);
   9->SetBinContent(16,533.6371);
   9->SetBinContent(17,520.0103);
   9->SetBinContent(18,571.8801);
   9->SetBinContent(19,546.8243);
   9->SetBinContent(20,537.1537);
   9->SetBinContent(21,530.5601);
   9->SetBinContent(22,510.7792);
   9->SetBinContent(23,505.9438);
   9->SetBinContent(24,492.7566);
   9->SetBinContent(25,469.4591);
   9->SetBinContent(26,469.4591);
   9->SetBinContent(27,435.1722);
   9->SetBinContent(28,433.8535);
   9->SetBinContent(29,399.5667);
   9->SetBinContent(30,367.0381);
   9->SetBinContent(31,374.9504);
   9->SetBinContent(32,336.7074);
   9->SetBinContent(33,312.9703);
   9->SetBinContent(34,303.2997);
   9->SetBinContent(35,271.6503);
   9->SetBinContent(36,276.046);
   9->SetBinContent(37,251.43);
   9->SetBinContent(38,217.1443);
   9->SetBinContent(39,195.1663);
   9->SetBinContent(40,185.496);
   9->SetBinContent(41,172.3092);
   9->SetBinContent(42,147.2543);
   9->SetBinContent(43,136.7048);
   9->SetBinContent(44,126.5949);
   9->SetBinContent(45,135.8257);
   9->SetBinContent(46,108.5726);
   9->SetBinContent(47,108.1331);
   9->SetBinContent(48,92.74821);
   9->SetBinContent(49,83.51729);
   9->SetBinContent(50,90.1108);
   9->SetBinContent(51,967.9374);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,50);
   10->SetBinContent(1,2.329144);
   10->SetBinContent(3,55.31708);
   10->SetBinContent(4,213.1155);
   10->SetBinContent(5,616.6324);
   10->SetBinContent(6,1260.92);
   10->SetBinContent(7,2225.242);
   10->SetBinContent(8,3399.019);
   10->SetBinContent(9,4765.631);
   10->SetBinContent(10,6055.121);
   10->SetBinContent(11,7217.146);
   10->SetBinContent(12,8132.391);
   10->SetBinContent(13,8715.004);
   10->SetBinContent(14,9079.355);
   10->SetBinContent(15,9118.352);
   10->SetBinContent(16,9030.465);
   10->SetBinContent(17,8701.035);
   10->SetBinContent(18,8282.846);
   10->SetBinContent(19,7586.154);
   10->SetBinContent(20,7004.996);
   10->SetBinContent(21,6408.996);
   10->SetBinContent(22,5680.875);
   10->SetBinContent(23,5122.707);
   10->SetBinContent(24,4564.539);
   10->SetBinContent(25,4077.946);
   10->SetBinContent(26,3505.62);
   10->SetBinContent(27,3126.4);
   10->SetBinContent(28,2685.142);
   10->SetBinContent(29,2278.252);
   10->SetBinContent(30,1978.283);
   10->SetBinContent(31,1687.728);
   10->SetBinContent(32,1432.691);
   10->SetBinContent(33,1215.503);
   10->SetBinContent(34,1038.491);
   10->SetBinContent(35,856.821);
   10->SetBinContent(36,743.2773);
   10->SetBinContent(37,627.4045);
   10->SetBinContent(38,519.1013);
   10->SetBinContent(39,430.8865);
   10->SetBinContent(40,387.7981);
   10->SetBinContent(41,305.9884);
   10->SetBinContent(42,256.7862);
   10->SetBinContent(43,231.7483);
   10->SetBinContent(44,175.2676);
   10->SetBinContent(45,162.1664);
   10->SetBinContent(46,127.521);
   10->SetBinContent(47,99.27991);
   10->SetBinContent(48,88.50754);
   10->SetBinContent(49,69.87424);
   10->SetBinContent(50,60.55763);
   10->SetBinContent(51,326.9503);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,50);
   11->SetBinContent(3,30.52083);
   11->SetBinContent(4,152.6042);
   11->SetBinContent(5,30.52083);
   11->SetBinContent(6,396.7708);
   11->SetBinContent(7,427.2917);
   11->SetBinContent(8,640.9374);
   11->SetBinContent(9,854.5831);
   11->SetBinContent(10,1129.271);
   11->SetBinContent(11,1526.042);
   11->SetBinContent(12,1770.209);
   11->SetBinContent(13,2136.459);
   11->SetBinContent(14,2014.376);
   11->SetBinContent(15,2014.376);
   11->SetBinContent(16,2014.376);
   11->SetBinContent(17,2044.897);
   11->SetBinContent(18,1739.688);
   11->SetBinContent(19,1617.605);
   11->SetBinContent(20,1342.917);
   11->SetBinContent(21,1007.187);
   11->SetBinContent(22,1220.833);
   11->SetBinContent(23,1068.229);
   11->SetBinContent(24,763.0207);
   11->SetBinContent(25,854.5831);
   11->SetBinContent(26,793.5415);
   11->SetBinContent(27,671.4583);
   11->SetBinContent(28,488.3334);
   11->SetBinContent(29,488.3334);
   11->SetBinContent(30,244.1666);
   11->SetBinContent(31,518.8542);
   11->SetBinContent(32,396.7708);
   11->SetBinContent(33,244.1666);
   11->SetBinContent(34,213.6458);
   11->SetBinContent(35,122.0833);
   11->SetBinContent(36,274.6875);
   11->SetBinContent(37,91.5625);
   11->SetBinContent(38,91.5625);
   11->SetBinContent(39,91.5625);
   11->SetBinContent(40,122.0833);
   11->SetBinContent(41,152.6042);
   11->SetBinContent(42,30.52083);
   11->SetBinContent(43,61.04166);
   11->SetBinContent(44,30.52083);
   11->SetBinContent(45,30.52083);
   11->SetBinContent(46,30.52083);
   11->SetBinContent(47,91.5625);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,50);
   12->SetBinContent(3,7.159559);
   12->SetBinContent(4,54.4127);
   12->SetBinContent(5,110.2574);
   12->SetBinContent(6,212.6393);
   12->SetBinContent(7,334.3505);
   12->SetBinContent(8,453.9128);
   12->SetBinContent(9,569.8955);
   12->SetBinContent(10,712.368);
   12->SetBinContent(11,772.5072);
   12->SetBinContent(12,793.9855);
   12->SetBinContent(13,850.5449);
   12->SetBinContent(14,889.2058);
   12->SetBinContent(15,832.6464);
   12->SetBinContent(16,817.6116);
   12->SetBinContent(17,760.3362);
   12->SetBinContent(18,693.7535);
   12->SetBinContent(19,670.1274);
   12->SetBinContent(20,611.4202);
   12->SetBinContent(21,574.1912);
   12->SetBinContent(22,476.823);
   12->SetBinContent(23,461.0723);
   12->SetBinContent(24,405.9447);
   12->SetBinContent(25,373.0114);
   12->SetBinContent(26,349.3853);
   12->SetBinContent(27,306.4287);
   12->SetBinContent(28,246.2893);
   12->SetBinContent(29,234.834);
   12->SetBinContent(30,188.2968);
   12->SetBinContent(31,191.1606);
   12->SetBinContent(32,170.3978);
   12->SetBinContent(33,144.6234);
   12->SetBinContent(34,130.3042);
   12->SetBinContent(35,129.5882);
   12->SetBinContent(36,103.8138);
   12->SetBinContent(37,77.32334);
   12->SetBinContent(38,74.45951);
   12->SetBinContent(39,68.01589);
   12->SetBinContent(40,75.17547);
   12->SetBinContent(41,69.44781);
   12->SetBinContent(42,56.56057);
   12->SetBinContent(43,44.38929);
   12->SetBinContent(44,50.83291);
   12->SetBinContent(45,31.50205);
   12->SetBinContent(46,37.94567);
   12->SetBinContent(47,37.22971);
   12->SetBinContent(48,29.35419);
   12->SetBinContent(49,25.77441);
   12->SetBinContent(50,32.93397);
   12->SetBinContent(51,236.2659);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,50);
   13->SetBinContent(3,104.0221);
   13->SetBinContent(4,624.1323);
   13->SetBinContent(5,1508.32);
   13->SetBinContent(6,3224.682);
   13->SetBinContent(7,6813.453);
   13->SetBinContent(8,8529.82);
   13->SetBinContent(9,11494.43);
   13->SetBinContent(10,15551.27);
   13->SetBinContent(11,18671.96);
   13->SetBinContent(12,21376.57);
   13->SetBinContent(13,24601.29);
   13->SetBinContent(14,25589.52);
   13->SetBinContent(15,24913.36);
   13->SetBinContent(16,22260.77);
   13->SetBinContent(17,22416.8);
   13->SetBinContent(18,21376.57);
   13->SetBinContent(19,20544.38);
   13->SetBinContent(20,17319.65);
   13->SetBinContent(21,15395.24);
   13->SetBinContent(22,14875.13);
   13->SetBinContent(23,12690.68);
   13->SetBinContent(24,9726.067);
   13->SetBinContent(25,9101.938);
   13->SetBinContent(26,8789.874);
   13->SetBinContent(27,6605.408);
   13->SetBinContent(28,6189.318);
   13->SetBinContent(29,5305.127);
   13->SetBinContent(30,4264.903);
   13->SetBinContent(31,2964.627);
   13->SetBinContent(32,2080.44);
   13->SetBinContent(33,2340.495);
   13->SetBinContent(34,1404.298);
   13->SetBinContent(35,1768.375);
   13->SetBinContent(36,1508.32);
   13->SetBinContent(37,884.1876);
   13->SetBinContent(38,884.1876);
   13->SetBinContent(39,624.1323);
   13->SetBinContent(40,416.0882);
   13->SetBinContent(41,416.0882);
   13->SetBinContent(42,468.0992);
   13->SetBinContent(43,260.0551);
   13->SetBinContent(44,104.0221);
   13->SetBinContent(45,104.0221);
   13->SetBinContent(46,364.0772);
   13->SetBinContent(47,156.0331);
   13->SetBinContent(48,312.0662);
   13->SetBinContent(49,260.0551);
   13->SetBinContent(50,104.0221);
   13->SetBinContent(51,312.0662);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,50);
   14->SetBinContent(1,9.254577);
   14->SetBinContent(3,286.8919);
   14->SetBinContent(4,721.857);
   14->SetBinContent(5,1823.146);
   14->SetBinContent(6,3202.085);
   14->SetBinContent(7,4460.706);
   14->SetBinContent(8,5534.216);
   14->SetBinContent(9,6561.454);
   14->SetBinContent(10,6829.831);
   14->SetBinContent(11,6755.796);
   14->SetBinContent(12,6496.673);
   14->SetBinContent(13,6441.146);
   14->SetBinContent(14,5210.312);
   14->SetBinContent(15,5034.479);
   14->SetBinContent(16,3997.984);
   14->SetBinContent(17,3313.14);
   14->SetBinContent(18,3091.029);
   14->SetBinContent(19,2591.279);
   14->SetBinContent(20,2341.403);
   14->SetBinContent(21,1638.056);
   14->SetBinContent(22,1314.148);
   14->SetBinContent(23,1101.294);
   14->SetBinContent(24,832.9119);
   14->SetBinContent(25,610.8021);
   14->SetBinContent(26,555.2746);
   14->SetBinContent(27,444.2197);
   14->SetBinContent(28,370.1831);
   14->SetBinContent(29,323.9102);
   14->SetBinContent(30,212.8553);
   14->SetBinContent(31,194.3461);
   14->SetBinContent(32,148.0732);
   14->SetBinContent(33,129.5641);
   14->SetBinContent(34,55.52746);
   14->SetBinContent(35,92.54577);
   14->SetBinContent(36,74.03661);
   14->SetBinContent(37,18.50915);
   14->SetBinContent(38,27.76373);
   14->SetBinContent(40,27.76373);
   14->SetBinContent(41,18.50915);
   14->SetBinContent(42,37.01831);
   14->SetBinContent(44,9.254577);
   14->SetBinContent(45,9.254577);
   14->SetBinContent(46,9.254577);
   14->SetBinContent(49,18.50915);
   14->SetBinContent(51,18.50915);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,50);
   15->SetBinContent(3,56.09351);
   15->SetBinContent(4,196.3273);
   15->SetBinContent(5,645.0754);
   15->SetBinContent(6,953.5897);
   15->SetBinContent(7,1206.01);
   15->SetBinContent(8,1542.572);
   15->SetBinContent(9,2103.507);
   15->SetBinContent(10,1851.086);
   15->SetBinContent(11,1682.805);
   15->SetBinContent(12,1907.179);
   15->SetBinContent(13,1626.712);
   15->SetBinContent(14,1738.899);
   15->SetBinContent(15,1682.805);
   15->SetBinContent(16,1402.338);
   15->SetBinContent(17,1206.01);
   15->SetBinContent(18,1234.057);
   15->SetBinContent(19,729.2156);
   15->SetBinContent(20,617.0286);
   15->SetBinContent(21,869.4494);
   15->SetBinContent(22,701.1689);
   15->SetBinContent(23,420.7013);
   15->SetBinContent(24,308.5143);
   15->SetBinContent(25,392.6546);
   15->SetBinContent(26,448.7481);
   15->SetBinContent(27,252.4208);
   15->SetBinContent(28,252.4208);
   15->SetBinContent(29,112.187);
   15->SetBinContent(30,364.6078);
   15->SetBinContent(31,196.3273);
   15->SetBinContent(32,84.14027);
   15->SetBinContent(33,84.14027);
   15->SetBinContent(34,56.09351);
   15->SetBinContent(35,56.09351);
   15->SetBinContent(36,56.09351);
   15->SetBinContent(37,28.04676);
   15->SetBinContent(38,28.04676);
   15->SetBinContent(39,28.04676);
   15->SetBinContent(40,56.09351);
   15->SetBinContent(41,28.04676);
   15->SetBinContent(42,84.14027);
   15->SetBinContent(43,56.09351);
   15->SetBinContent(44,28.04676);
   15->SetBinContent(45,56.09351);
   15->SetBinContent(51,84.14027);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,50);
   16->SetBinContent(3,31.85936);
   16->SetBinContent(4,74.33852);
   16->SetBinContent(5,116.8177);
   16->SetBinContent(6,286.7342);
   16->SetBinContent(7,509.7496);
   16->SetBinContent(8,647.8071);
   16->SetBinContent(9,700.9062);
   16->SetBinContent(10,860.2034);
   16->SetBinContent(11,913.3024);
   16->SetBinContent(12,923.9222);
   16->SetBinContent(13,1051.36);
   16->SetBinContent(14,1168.177);
   16->SetBinContent(15,849.5836);
   16->SetBinContent(16,711.526);
   16->SetBinContent(17,552.2288);
   16->SetBinContent(18,488.51);
   16->SetBinContent(19,520.3694);
   16->SetBinContent(20,318.5935);
   16->SetBinContent(21,414.1716);
   16->SetBinContent(22,212.3957);
   16->SetBinContent(23,276.1144);
   16->SetBinContent(24,318.5935);
   16->SetBinContent(25,180.5364);
   16->SetBinContent(26,244.2551);
   16->SetBinContent(27,159.2968);
   16->SetBinContent(28,42.47915);
   16->SetBinContent(29,84.95831);
   16->SetBinContent(30,42.47915);
   16->SetBinContent(31,84.95831);
   16->SetBinContent(32,42.47915);
   16->SetBinContent(33,53.09894);
   16->SetBinContent(34,21.23957);
   16->SetBinContent(35,21.23957);
   16->SetBinContent(36,10.61979);
   16->SetBinContent(38,21.23957);
   16->SetBinContent(39,10.61979);
   16->SetBinContent(40,21.23957);
   16->SetBinContent(43,10.61979);
   16->SetBinContent(45,10.61979);
   16->SetBinContent(47,10.61979);
   16->SetBinContent(51,10.61979);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,50);
   17->SetBinContent(1,60.82056);
   17->SetBinContent(3,486.5645);
   17->SetBinContent(4,364.9234);
   17->SetBinContent(5,1702.976);
   17->SetBinContent(6,2493.643);
   17->SetBinContent(7,3101.849);
   17->SetBinContent(8,4257.44);
   17->SetBinContent(9,6507.81);
   17->SetBinContent(10,4744.006);
   17->SetBinContent(11,5838.781);
   17->SetBinContent(12,5230.573);
   17->SetBinContent(13,4683.186);
   17->SetBinContent(14,3770.875);
   17->SetBinContent(15,2919.387);
   17->SetBinContent(16,4744.006);
   17->SetBinContent(17,2797.746);
   17->SetBinContent(18,2007.078);
   17->SetBinContent(19,2007.078);
   17->SetBinContent(20,2311.181);
   17->SetBinContent(21,1885.437);
   17->SetBinContent(22,2007.078);
   17->SetBinContent(23,1398.873);
   17->SetBinContent(24,1338.052);
   17->SetBinContent(25,1094.77);
   17->SetBinContent(26,1033.95);
   17->SetBinContent(27,912.3084);
   17->SetBinContent(28,425.7439);
   17->SetBinContent(29,669.0262);
   17->SetBinContent(30,547.3851);
   17->SetBinContent(31,547.3851);
   17->SetBinContent(32,669.0262);
   17->SetBinContent(33,608.2056);
   17->SetBinContent(34,364.9234);
   17->SetBinContent(35,182.4617);
   17->SetBinContent(36,547.3851);
   17->SetBinContent(37,243.2822);
   17->SetBinContent(38,790.6673);
   17->SetBinContent(39,364.9234);
   17->SetBinContent(40,547.3851);
   17->SetBinContent(41,364.9234);
   17->SetBinContent(42,243.2822);
   17->SetBinContent(43,121.6411);
   17->SetBinContent(44,182.4617);
   17->SetBinContent(45,425.7439);
   17->SetBinContent(46,425.7439);
   17->SetBinContent(47,182.4617);
   17->SetBinContent(48,182.4617);
   17->SetBinContent(49,121.6411);
   17->SetBinContent(50,243.2822);
   17->SetBinContent(51,2007.078);
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
