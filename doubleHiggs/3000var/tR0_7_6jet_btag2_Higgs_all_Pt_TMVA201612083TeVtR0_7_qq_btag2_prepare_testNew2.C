{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:42:01 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-53.96825,-3.279777,263.4921,6.0517);
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
   
   TH1F *THStack_stack_9 = new TH1F("THStack_stack_9","",50,0,200);
   THStack_stack_9->SetMinimum(0.02511245);
   THStack_stack_9->SetMaximum(201921.1);
   THStack_stack_9->SetDirectory(0);
   THStack_stack_9->SetStats(0);
   THStack_stack_9->SetLineWidth(2);
   THStack_stack_9->SetMarkerSize(1.2);
   THStack_stack_9->GetXaxis()->SetTitle("P_{T,visible} / GeV");
   THStack_stack_9->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_9->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_9->GetXaxis()->SetLabelColor(ci);
   THStack_stack_9->GetXaxis()->SetLabelFont(42);
   THStack_stack_9->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_9->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_9->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_9->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_9->GetXaxis()->SetTitleColor(ci);
   THStack_stack_9->GetXaxis()->SetTitleFont(42);
   THStack_stack_9->GetYaxis()->SetTitle("Number of events");
   THStack_stack_9->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_9->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_9->GetYaxis()->SetLabelColor(ci);
   THStack_stack_9->GetYaxis()->SetLabelFont(42);
   THStack_stack_9->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_9->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_9->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_9->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_9->GetYaxis()->SetTitleColor(ci);
   THStack_stack_9->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_9->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_9->GetZaxis()->SetLabelColor(ci);
   THStack_stack_9->GetZaxis()->SetLabelFont(42);
   THStack_stack_9->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_9->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_9->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_9->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_9->GetZaxis()->SetTitleColor(ci);
   THStack_stack_9->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_9);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,200);
   0->SetBinContent(1,0.148485);
   0->SetBinContent(2,0.346465);
   0->SetBinContent(3,0.6335361);
   0->SetBinContent(4,0.9305067);
   0->SetBinContent(5,1.09879);
   0->SetBinContent(6,1.494751);
   0->SetBinContent(7,1.732327);
   0->SetBinContent(8,1.900611);
   0->SetBinContent(9,2.039196);
   0->SetBinContent(10,2.18768);
   0->SetBinContent(11,2.138186);
   0->SetBinContent(12,2.45495);
   0->SetBinContent(13,2.326265);
   0->SetBinContent(14,2.445051);
   0->SetBinContent(15,2.603434);
   0->SetBinContent(16,2.375759);
   0->SetBinContent(17,2.415355);
   0->SetBinContent(18,2.553939);
   0->SetBinContent(19,2.445051);
   0->SetBinContent(20,2.494546);
   0->SetBinContent(21,2.45495);
   0->SetBinContent(22,2.237175);
   0->SetBinContent(23,2.266871);
   0->SetBinContent(24,2.36586);
   0->SetBinContent(25,2.078792);
   0->SetBinContent(26,1.841217);
   0->SetBinContent(27,2.019399);
   0->SetBinContent(28,1.851116);
   0->SetBinContent(29,1.692731);
   0->SetBinContent(30,1.672933);
   0->SetBinContent(31,1.395761);
   0->SetBinContent(32,1.375963);
   0->SetBinContent(33,1.544246);
   0->SetBinContent(34,1.40566);
   0->SetBinContent(35,1.306669);
   0->SetBinContent(36,1.207679);
   0->SetBinContent(37,1.366064);
   0->SetBinContent(38,1.09879);
   0->SetBinContent(39,1.039396);
   0->SetBinContent(40,1.118588);
   0->SetBinContent(41,0.8315165);
   0->SetBinContent(42,0.9404057);
   0->SetBinContent(43,0.8117185);
   0->SetBinContent(44,0.7820214);
   0->SetBinContent(45,0.9206077);
   0->SetBinContent(46,0.6533341);
   0->SetBinContent(47,0.8216175);
   0->SetBinContent(48,0.574142);
   0->SetBinContent(49,0.6236371);
   0->SetBinContent(50,0.7127283);
   0->SetBinContent(51,12.29466);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,200);
   1->SetBinContent(1,0.133623);
   1->SetBinContent(2,0.3167362);
   1->SetBinContent(3,0.6136757);
   1->SetBinContent(4,0.8314306);
   1->SetBinContent(5,1.009594);
   1->SetBinContent(6,1.138267);
   1->SetBinContent(7,1.271889);
   1->SetBinContent(8,1.514389);
   1->SetBinContent(9,1.638113);
   1->SetBinContent(10,1.633164);
   1->SetBinContent(11,1.925154);
   1->SetBinContent(12,1.850919);
   1->SetBinContent(13,1.940001);
   1->SetBinContent(14,2.157759);
   1->SetBinContent(15,2.236945);
   1->SetBinContent(16,2.142912);
   1->SetBinContent(17,1.915256);
   1->SetBinContent(18,2.029083);
   1->SetBinContent(19,2.09837);
   1->SetBinContent(20,1.860817);
   1->SetBinContent(21,1.979592);
   1->SetBinContent(22,1.930103);
   1->SetBinContent(23,1.860817);
   1->SetBinContent(24,1.672756);
   1->SetBinContent(25,1.737093);
   1->SetBinContent(26,1.519338);
   1->SetBinContent(27,1.588624);
   1->SetBinContent(28,1.326328);
   1->SetBinContent(29,1.247144);
   1->SetBinContent(30,1.257042);
   1->SetBinContent(31,1.014543);
   1->SetBinContent(32,0.9996957);
   1->SetBinContent(33,1.098675);
   1->SetBinContent(34,0.8809203);
   1->SetBinContent(35,0.9205121);
   1->SetBinContent(36,0.9205121);
   1->SetBinContent(37,0.7868898);
   1->SetBinContent(38,0.7868898);
   1->SetBinContent(39,0.7275021);
   1->SetBinContent(40,0.569135);
   1->SetBinContent(41,0.6186247);
   1->SetBinContent(42,0.6037778);
   1->SetBinContent(43,0.5344921);
   1->SetBinContent(44,0.554288);
   1->SetBinContent(45,0.4751043);
   1->SetBinContent(46,0.4503593);
   1->SetBinContent(47,0.5047983);
   1->SetBinContent(48,0.4206652);
   1->SetBinContent(49,0.3761242);
   1->SetBinContent(50,0.3117872);
   1->SetBinContent(51,6.701026);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,200);
   2->SetBinContent(1,0.2078581);
   2->SetBinContent(2,0.7621449);
   2->SetBinContent(3,1.128369);
   2->SetBinContent(4,1.395614);
   2->SetBinContent(5,1.70245);
   2->SetBinContent(6,2.276537);
   2->SetBinContent(7,2.573483);
   2->SetBinContent(8,2.885276);
   2->SetBinContent(9,3.35544);
   2->SetBinContent(10,3.330694);
   2->SetBinContent(11,3.597945);
   2->SetBinContent(12,3.667233);
   2->SetBinContent(13,3.825603);
   2->SetBinContent(14,3.716723);
   2->SetBinContent(15,4.06316);
   2->SetBinContent(16,3.924585);
   2->SetBinContent(17,3.860247);
   2->SetBinContent(18,3.894891);
   2->SetBinContent(19,4.073058);
   2->SetBinContent(20,3.726622);
   2->SetBinContent(21,3.434625);
   2->SetBinContent(22,3.404931);
   2->SetBinContent(23,3.503912);
   2->SetBinContent(24,3.513811);
   2->SetBinContent(25,3.216865);
   2->SetBinContent(26,3.004054);
   2->SetBinContent(27,2.97436);
   2->SetBinContent(28,2.756599);
   2->SetBinContent(29,2.523992);
   2->SetBinContent(30,2.509145);
   2->SetBinContent(31,2.523992);
   2->SetBinContent(32,2.330977);
   2->SetBinContent(33,2.162708);
   2->SetBinContent(34,2.108268);
   2->SetBinContent(35,1.761838);
   2->SetBinContent(36,1.860817);
   2->SetBinContent(37,1.687603);
   2->SetBinContent(38,1.657909);
   2->SetBinContent(39,1.484695);
   2->SetBinContent(40,1.469848);
   2->SetBinContent(41,1.464899);
   2->SetBinContent(42,1.281787);
   2->SetBinContent(43,1.197655);
   2->SetBinContent(44,1.07393);
   2->SetBinContent(45,1.039287);
   2->SetBinContent(46,1.02939);
   2->SetBinContent(47,0.8858693);
   2->SetBinContent(48,0.8264816);
   2->SetBinContent(49,0.9452569);
   2->SetBinContent(50,0.8165836);
   2->SetBinContent(51,16.30647);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,200);
   3->SetBinContent(1,0.4727099);
   3->SetBinContent(2,1.519425);
   3->SetBinContent(3,2.937556);
   3->SetBinContent(4,3.444032);
   3->SetBinContent(5,4.423216);
   3->SetBinContent(6,5.875104);
   3->SetBinContent(7,5.368632);
   3->SetBinContent(8,6.651696);
   3->SetBinContent(9,7.900995);
   3->SetBinContent(10,8.508762);
   3->SetBinContent(11,8.98147);
   3->SetBinContent(12,9.623002);
   3->SetBinContent(13,10.73724);
   3->SetBinContent(14,11.07489);
   3->SetBinContent(15,12.32419);
   3->SetBinContent(16,12.35795);
   3->SetBinContent(17,11.51383);
   3->SetBinContent(18,11.75019);
   3->SetBinContent(19,12.22289);
   3->SetBinContent(20,13.16831);
   3->SetBinContent(21,12.72937);
   3->SetBinContent(22,11.64889);
   3->SetBinContent(23,12.62807);
   3->SetBinContent(24,12.15536);
   3->SetBinContent(25,11.88525);
   3->SetBinContent(26,11.58136);
   3->SetBinContent(27,11.71642);
   3->SetBinContent(28,11.85148);
   3->SetBinContent(29,11.07489);
   3->SetBinContent(30,10.53465);
   3->SetBinContent(31,10.66971);
   3->SetBinContent(32,10.46712);
   3->SetBinContent(33,9.521708);
   3->SetBinContent(34,9.116529);
   3->SetBinContent(35,9.758061);
   3->SetBinContent(36,9.758061);
   3->SetBinContent(37,9.386648);
   3->SetBinContent(38,8.745116);
   3->SetBinContent(39,7.93476);
   3->SetBinContent(40,8.137349);
   3->SetBinContent(41,7.056874);
   3->SetBinContent(42,7.732171);
   3->SetBinContent(43,7.259463);
   3->SetBinContent(44,5.875104);
   3->SetBinContent(45,6.921814);
   3->SetBinContent(46,6.347812);
   3->SetBinContent(47,6.010164);
   3->SetBinContent(48,5.942634);
   3->SetBinContent(49,5.199808);
   3->SetBinContent(50,6.212753);
   3->SetBinContent(51,130.8777);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,200);
   4->SetBinContent(1,0.5466499);
   4->SetBinContent(2,1.377558);
   4->SetBinContent(3,2.383394);
   4->SetBinContent(4,3.564163);
   4->SetBinContent(5,4.679326);
   4->SetBinContent(6,5.663289);
   4->SetBinContent(7,6.887776);
   4->SetBinContent(8,7.368824);
   4->SetBinContent(9,8.221593);
   4->SetBinContent(10,8.199727);
   4->SetBinContent(11,9.8178);
   4->SetBinContent(12,10.03646);
   4->SetBinContent(13,11.12975);
   4->SetBinContent(14,10.27698);
   4->SetBinContent(15,11.78573);
   4->SetBinContent(16,11.5452);
   4->SetBinContent(17,12.61663);
   4->SetBinContent(18,12.66036);
   4->SetBinContent(19,12.79155);
   4->SetBinContent(20,13.44753);
   4->SetBinContent(21,12.87902);
   4->SetBinContent(22,12.17931);
   4->SetBinContent(23,13.4038);
   4->SetBinContent(24,13.44753);
   4->SetBinContent(25,12.31051);
   4->SetBinContent(26,12.41984);
   4->SetBinContent(27,12.61663);
   4->SetBinContent(28,12.00438);
   4->SetBinContent(29,11.5452);
   4->SetBinContent(30,10.67057);
   4->SetBinContent(31,11.69826);
   4->SetBinContent(32,10.51751);
   4->SetBinContent(33,11.02042);
   4->SetBinContent(34,10.25512);
   4->SetBinContent(35,9.336751);
   4->SetBinContent(36,9.8178);
   4->SetBinContent(37,9.511678);
   4->SetBinContent(38,9.052495);
   4->SetBinContent(39,9.205556);
   4->SetBinContent(40,8.112264);
   4->SetBinContent(41,7.018971);
   4->SetBinContent(42,8.309056);
   4->SetBinContent(43,7.281361);
   4->SetBinContent(44,7.674946);
   4->SetBinContent(45,7.76241);
   4->SetBinContent(46,6.844044);
   4->SetBinContent(47,5.860081);
   4->SetBinContent(48,6.516057);
   4->SetBinContent(49,5.903813);
   4->SetBinContent(50,6.428593);
   4->SetBinContent(51,135.4152);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,200);
   5->SetBinContent(1,1.395696);
   5->SetBinContent(2,4.361554);
   5->SetBinContent(3,8.199724);
   5->SetBinContent(4,12.27051);
   5->SetBinContent(5,15.12006);
   5->SetBinContent(6,18.49296);
   5->SetBinContent(7,22.33107);
   5->SetBinContent(8,23.95936);
   5->SetBinContent(9,26.86701);
   5->SetBinContent(10,31.28665);
   5->SetBinContent(11,30.93773);
   5->SetBinContent(12,33.20575);
   5->SetBinContent(13,37.39291);
   5->SetBinContent(14,38.90494);
   5->SetBinContent(15,39.83542);
   5->SetBinContent(16,39.42834);
   5->SetBinContent(17,43.44104);
   5->SetBinContent(18,43.20842);
   5->SetBinContent(19,44.54598);
   5->SetBinContent(20,47.97713);
   5->SetBinContent(21,45.9417);
   5->SetBinContent(22,45.59277);
   5->SetBinContent(23,46.05801);
   5->SetBinContent(24,43.15026);
   5->SetBinContent(25,44.60414);
   5->SetBinContent(26,42.62687);
   5->SetBinContent(27,43.44104);
   5->SetBinContent(28,44.60414);
   5->SetBinContent(29,43.96443);
   5->SetBinContent(30,41.40561);
   5->SetBinContent(31,39.66096);
   5->SetBinContent(32,43.26657);
   5->SetBinContent(33,42.04531);
   5->SetBinContent(34,39.71911);
   5->SetBinContent(35,35.29933);
   5->SetBinContent(36,36.57874);
   5->SetBinContent(37,33.84545);
   5->SetBinContent(38,35.29933);
   5->SetBinContent(39,32.68235);
   5->SetBinContent(40,33.38021);
   5->SetBinContent(41,33.03128);
   5->SetBinContent(42,29.94913);
   5->SetBinContent(43,29.77467);
   5->SetBinContent(44,26.92517);
   5->SetBinContent(45,25.52949);
   5->SetBinContent(46,26.28548);
   5->SetBinContent(47,25.06427);
   5->SetBinContent(48,24.71535);
   5->SetBinContent(49,22.79629);
   5->SetBinContent(50,22.15661);
   5->SetBinContent(51,558.3347);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,200);
   6->SetBinContent(1,253.4714);
   6->SetBinContent(2,662.1884);
   6->SetBinContent(3,1120.022);
   6->SetBinContent(4,1505.935);
   6->SetBinContent(5,1767.303);
   6->SetBinContent(6,2131.278);
   6->SetBinContent(7,2295.268);
   6->SetBinContent(8,2414.534);
   6->SetBinContent(9,2622.372);
   6->SetBinContent(10,2616.233);
   6->SetBinContent(11,2704.805);
   6->SetBinContent(12,2646.926);
   6->SetBinContent(13,2584.663);
   6->SetBinContent(14,2573.262);
   6->SetBinContent(15,2376.825);
   6->SetBinContent(16,2336.485);
   6->SetBinContent(17,2164.602);
   6->SetBinContent(18,2071.645);
   6->SetBinContent(19,1912.021);
   6->SetBinContent(20,1745.376);
   6->SetBinContent(21,1717.31);
   6->SetBinContent(22,1476.991);
   6->SetBinContent(23,1441.908);
   6->SetBinContent(24,1332.274);
   6->SetBinContent(25,1172.646);
   6->SetBinContent(26,1145.457);
   6->SetBinContent(27,1011.264);
   6->SetBinContent(28,912.1548);
   6->SetBinContent(29,870.9323);
   6->SetBinContent(30,783.2248);
   6->SetBinContent(31,785.856);
   6->SetBinContent(32,669.205);
   6->SetBinContent(33,660.4343);
   6->SetBinContent(34,556.0623);
   6->SetBinContent(35,546.4145);
   6->SetBinContent(36,515.7169);
   6->SetBinContent(37,456.0757);
   6->SetBinContent(38,437.6572);
   6->SetBinContent(39,387.6639);
   6->SetBinContent(40,349.9496);
   6->SetBinContent(41,367.4911);
   6->SetBinContent(42,299.0793);
   6->SetBinContent(43,284.169);
   6->SetBinContent(44,245.5779);
   6->SetBinContent(45,256.9797);
   6->SetBinContent(46,248.2091);
   6->SetBinContent(47,192.9543);
   6->SetBinContent(48,204.3561);
   6->SetBinContent(49,174.536);
   6->SetBinContent(50,161.3801);
   6->SetBinContent(51,2953.86);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,200);
   7->SetBinContent(1,8.425013);
   7->SetBinContent(2,30.66152);
   7->SetBinContent(3,45.16359);
   7->SetBinContent(4,63.11853);
   7->SetBinContent(5,88.11733);
   7->SetBinContent(6,99.44276);
   7->SetBinContent(7,114.0829);
   7->SetBinContent(8,135.4912);
   7->SetBinContent(9,146.4028);
   7->SetBinContent(10,170.298);
   7->SetBinContent(11,173.613);
   7->SetBinContent(12,183.6959);
   7->SetBinContent(13,191.2927);
   7->SetBinContent(14,208.6961);
   7->SetBinContent(15,206.2099);
   7->SetBinContent(16,209.9392);
   7->SetBinContent(17,220.2984);
   7->SetBinContent(18,215.8785);
   7->SetBinContent(19,221.5415);
   7->SetBinContent(20,225.6852);
   7->SetBinContent(21,231.072);
   7->SetBinContent(22,234.8013);
   7->SetBinContent(23,228.4476);
   7->SetBinContent(24,227.2045);
   7->SetBinContent(25,218.2266);
   7->SetBinContent(26,222.2321);
   7->SetBinContent(27,226.5139);
   7->SetBinContent(28,227.4808);
   7->SetBinContent(29,218.6409);
   7->SetBinContent(30,207.453);
   7->SetBinContent(31,207.0387);
   7->SetBinContent(32,208.1436);
   7->SetBinContent(33,193.6408);
   7->SetBinContent(34,205.9337);
   7->SetBinContent(35,190.3258);
   7->SetBinContent(36,194.7457);
   7->SetBinContent(37,189.359);
   7->SetBinContent(38,180.5191);
   7->SetBinContent(39,165.8781);
   7->SetBinContent(40,176.9279);
   7->SetBinContent(41,171.8174);
   7->SetBinContent(42,166.845);
   7->SetBinContent(43,154.5521);
   7->SetBinContent(44,150.8228);
   7->SetBinContent(45,154.1377);
   7->SetBinContent(46,147.5078);
   7->SetBinContent(47,142.6735);
   7->SetBinContent(48,133.1431);
   7->SetBinContent(49,128.1707);
   7->SetBinContent(50,131.4856);
   7->SetBinContent(51,4250.129);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,200);
   8->SetBinContent(1,90.54033);
   8->SetBinContent(2,232.8172);
   8->SetBinContent(3,258.6857);
   8->SetBinContent(4,271.6202);
   8->SetBinContent(5,219.883);
   8->SetBinContent(6,162.6028);
   8->SetBinContent(7,129.3433);
   8->SetBinContent(8,114.5612);
   8->SetBinContent(9,91.46421);
   8->SetBinContent(10,62.82388);
   8->SetBinContent(11,60.05224);
   8->SetBinContent(12,69.29105);
   8->SetBinContent(13,41.57461);
   8->SetBinContent(14,23.09699);
   8->SetBinContent(15,26.79251);
   8->SetBinContent(16,24.02087);
   8->SetBinContent(17,15.70596);
   8->SetBinContent(18,16.62984);
   8->SetBinContent(19,12.93432);
   8->SetBinContent(20,14.78208);
   8->SetBinContent(21,8.31492);
   8->SetBinContent(22,8.31492);
   8->SetBinContent(23,5.54328);
   8->SetBinContent(24,7.39104);
   8->SetBinContent(25,6.46716);
   8->SetBinContent(26,6.46716);
   8->SetBinContent(27,6.46716);
   8->SetBinContent(28,8.31492);
   8->SetBinContent(29,4.6194);
   8->SetBinContent(30,8.31492);
   8->SetBinContent(31,6.46716);
   8->SetBinContent(32,5.54328);
   8->SetBinContent(33,2.77164);
   8->SetBinContent(34,3.69552);
   8->SetBinContent(35,3.69552);
   8->SetBinContent(36,1.84776);
   8->SetBinContent(39,2.77164);
   8->SetBinContent(41,3.69552);
   8->SetBinContent(43,0.92388);
   8->SetBinContent(44,0.92388);
   8->SetBinContent(46,2.77164);
   8->SetBinContent(47,0.92388);
   8->SetBinContent(48,0.92388);
   8->SetBinContent(50,1.84776);
   8->SetBinContent(51,12.01044);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,200);
   9->SetBinContent(1,21.53863);
   9->SetBinContent(2,59.78067);
   9->SetBinContent(3,94.94604);
   9->SetBinContent(4,138.4631);
   9->SetBinContent(5,163.9575);
   9->SetBinContent(6,177.1443);
   9->SetBinContent(7,226.375);
   9->SetBinContent(8,256.7047);
   9->SetBinContent(9,265.0566);
   9->SetBinContent(10,272.5294);
   9->SetBinContent(11,280.4418);
   9->SetBinContent(12,278.2439);
   9->SetBinContent(13,311.212);
   9->SetBinContent(14,312.5308);
   9->SetBinContent(15,295.8269);
   9->SetBinContent(16,301.981);
   9->SetBinContent(17,305.4976);
   9->SetBinContent(18,292.7499);
   9->SetBinContent(19,278.2439);
   9->SetBinContent(20,285.2771);
   9->SetBinContent(21,272.0898);
   9->SetBinContent(22,263.7379);
   9->SetBinContent(23,258.9026);
   9->SetBinContent(24,250.1113);
   9->SetBinContent(25,250.1113);
   9->SetBinContent(26,240.441);
   9->SetBinContent(27,226.375);
   9->SetBinContent(28,233.408);
   9->SetBinContent(29,214.9465);
   9->SetBinContent(30,219.7816);
   9->SetBinContent(31,209.6718);
   9->SetBinContent(32,203.5179);
   9->SetBinContent(33,178.0235);
   9->SetBinContent(34,182.4191);
   9->SetBinContent(35,181.1004);
   9->SetBinContent(36,176.2652);
   9->SetBinContent(37,185.9355);
   9->SetBinContent(38,165.2762);
   9->SetBinContent(39,178.0235);
   9->SetBinContent(40,157.3641);
   9->SetBinContent(41,168.7927);
   9->SetBinContent(42,137.1444);
   9->SetBinContent(43,152.9685);
   9->SetBinContent(44,130.9905);
   9->SetBinContent(45,138.4631);
   9->SetBinContent(46,146.3751);
   9->SetBinContent(47,130.9905);
   9->SetBinContent(48,136.2653);
   9->SetBinContent(49,148.1334);
   9->SetBinContent(50,124.3971);
   9->SetBinContent(51,5186.548);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,200);
   10->SetBinContent(1,206.4193);
   10->SetBinContent(2,604.1135);
   10->SetBinContent(3,992.7823);
   10->SetBinContent(4,1410.856);
   10->SetBinContent(5,1734.892);
   10->SetBinContent(6,2093.302);
   10->SetBinContent(7,2408.154);
   10->SetBinContent(8,2646.404);
   10->SetBinContent(9,2923.392);
   10->SetBinContent(10,3158.439);
   10->SetBinContent(11,3348.34);
   10->SetBinContent(12,3441.834);
   10->SetBinContent(13,3601.445);
   10->SetBinContent(14,3613.095);
   10->SetBinContent(15,3579.6);
   10->SetBinContent(16,3683.871);
   10->SetBinContent(17,3665.813);
   10->SetBinContent(18,3594.163);
   10->SetBinContent(19,3613.386);
   10->SetBinContent(20,3554.261);
   10->SetBinContent(21,3475.038);
   10->SetBinContent(22,3408.631);
   10->SetBinContent(23,3350.961);
   10->SetBinContent(24,3214.069);
   10->SetBinContent(25,3124.07);
   10->SetBinContent(26,3028.246);
   10->SetBinContent(27,2886.111);
   10->SetBinContent(28,2836.014);
   10->SetBinContent(29,2741.937);
   10->SetBinContent(30,2615.822);
   10->SetBinContent(31,2502.813);
   10->SetBinContent(32,2382.231);
   10->SetBinContent(33,2302.135);
   10->SetBinContent(34,2240.388);
   10->SetBinContent(35,2170.777);
   10->SetBinContent(36,2094.758);
   10->SetBinContent(37,2003.612);
   10->SetBinContent(38,1888.613);
   10->SetBinContent(39,1810.006);
   10->SetBinContent(40,1738.968);
   10->SetBinContent(41,1667.64);
   10->SetBinContent(42,1634.159);
   10->SetBinContent(43,1576.513);
   10->SetBinContent(44,1488.008);
   10->SetBinContent(45,1459.185);
   10->SetBinContent(46,1378.54);
   10->SetBinContent(47,1347.679);
   10->SetBinContent(48,1291.781);
   10->SetBinContent(49,1212.3);
   10->SetBinContent(50,1182.604);
   10->SetBinContent(51,31812.04);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,200);
   11->SetBinContent(1,1495.521);
   11->SetBinContent(2,3113.123);
   11->SetBinContent(3,3723.538);
   11->SetBinContent(4,5035.938);
   11->SetBinContent(5,3693.018);
   11->SetBinContent(6,2563.75);
   11->SetBinContent(7,1892.292);
   11->SetBinContent(8,2075.418);
   11->SetBinContent(9,1434.479);
   11->SetBinContent(10,763.0207);
   11->SetBinContent(11,976.6664);
   11->SetBinContent(12,793.5415);
   11->SetBinContent(13,640.9374);
   11->SetBinContent(14,457.8125);
   11->SetBinContent(15,549.375);
   11->SetBinContent(16,366.25);
   11->SetBinContent(17,213.6458);
   11->SetBinContent(18,213.6458);
   11->SetBinContent(19,183.125);
   11->SetBinContent(20,366.25);
   11->SetBinContent(21,152.6042);
   11->SetBinContent(23,122.0833);
   11->SetBinContent(24,91.5625);
   11->SetBinContent(25,122.0833);
   11->SetBinContent(26,122.0833);
   11->SetBinContent(27,122.0833);
   11->SetBinContent(28,30.52083);
   11->SetBinContent(29,152.6042);
   11->SetBinContent(30,91.5625);
   11->SetBinContent(31,122.0833);
   11->SetBinContent(33,61.04166);
   11->SetBinContent(34,61.04166);
   11->SetBinContent(35,30.52083);
   11->SetBinContent(37,30.52083);
   11->SetBinContent(38,30.52083);
   11->SetBinContent(39,61.04166);
   11->SetBinContent(40,30.52083);
   11->SetBinContent(44,30.52083);
   11->SetBinContent(45,30.52083);
   11->SetBinContent(48,30.52083);
   11->SetBinContent(51,61.04166);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,200);
   12->SetBinContent(1,583.4984);
   12->SetBinContent(2,1360.296);
   12->SetBinContent(3,1476.995);
   12->SetBinContent(4,1422.583);
   12->SetBinContent(5,1303.736);
   12->SetBinContent(6,1160.548);
   12->SetBinContent(7,1069.623);
   12->SetBinContent(8,958.6522);
   12->SetBinContent(9,852.6927);
   12->SetBinContent(10,720.2434);
   12->SetBinContent(11,598.5332);
   12->SetBinContent(12,494.0056);
   12->SetBinContent(13,467.5157);
   12->SetBinContent(14,383.0345);
   12->SetBinContent(15,338.6461);
   12->SetBinContent(16,281.3707);
   12->SetBinContent(17,255.5968);
   12->SetBinContent(18,236.9819);
   12->SetBinContent(19,206.9117);
   12->SetBinContent(20,199.7521);
   12->SetBinContent(21,174.6936);
   12->SetBinContent(22,146.7712);
   12->SetBinContent(23,105.2457);
   12->SetBinContent(24,90.21058);
   12->SetBinContent(25,85.19888);
   12->SetBinContent(26,79.47121);
   12->SetBinContent(27,71.59568);
   12->SetBinContent(28,55.84461);
   12->SetBinContent(29,50.83291);
   12->SetBinContent(30,45.82121);
   12->SetBinContent(31,28.63823);
   12->SetBinContent(32,27.20632);
   12->SetBinContent(33,24.3425);
   12->SetBinContent(34,15.03507);
   12->SetBinContent(35,18.61485);
   12->SetBinContent(36,11.45529);
   12->SetBinContent(37,10.73934);
   12->SetBinContent(38,12.88721);
   12->SetBinContent(39,11.45529);
   12->SetBinContent(40,10.73934);
   12->SetBinContent(41,5.011692);
   12->SetBinContent(42,9.307426);
   12->SetBinContent(43,9.307426);
   12->SetBinContent(44,6.443604);
   12->SetBinContent(45,5.011692);
   12->SetBinContent(46,10.73934);
   12->SetBinContent(47,9.307426);
   12->SetBinContent(48,4.295736);
   12->SetBinContent(49,0.715956);
   12->SetBinContent(50,2.147868);
   12->SetBinContent(51,70.16376);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,200);
   13->SetBinContent(1,28502.17);
   13->SetBinContent(2,65274.46);
   13->SetBinContent(3,67614.83);
   13->SetBinContent(4,51699.4);
   13->SetBinContent(5,38384.4);
   13->SetBinContent(6,27045.84);
   13->SetBinContent(7,20284.32);
   13->SetBinContent(8,15707.3);
   13->SetBinContent(9,12638.67);
   13->SetBinContent(10,9830.089);
   13->SetBinContent(11,7385.577);
   13->SetBinContent(12,6657.419);
   13->SetBinContent(13,5149.094);
   13->SetBinContent(14,3172.671);
   13->SetBinContent(15,3380.715);
   13->SetBinContent(16,2496.528);
   13->SetBinContent(17,1872.396);
   13->SetBinContent(18,1404.298);
   13->SetBinContent(19,1352.287);
   13->SetBinContent(20,988.2097);
   13->SetBinContent(21,624.1323);
   13->SetBinContent(22,468.0992);
   13->SetBinContent(23,572.1213);
   13->SetBinContent(24,676.1434);
   13->SetBinContent(25,624.1323);
   13->SetBinContent(26,416.0882);
   13->SetBinContent(27,104.0221);
   13->SetBinContent(28,312.0662);
   13->SetBinContent(29,156.0331);
   13->SetBinContent(30,364.0772);
   13->SetBinContent(31,156.0331);
   13->SetBinContent(32,364.0772);
   13->SetBinContent(34,104.0221);
   13->SetBinContent(35,104.0221);
   13->SetBinContent(36,156.0331);
   13->SetBinContent(37,312.0662);
   13->SetBinContent(38,208.0441);
   13->SetBinContent(39,52.01103);
   13->SetBinContent(40,260.0551);
   13->SetBinContent(41,52.01103);
   13->SetBinContent(42,52.01103);
   13->SetBinContent(43,104.0221);
   13->SetBinContent(47,104.0221);
   13->SetBinContent(48,156.0331);
   13->SetBinContent(49,52.01103);
   13->SetBinContent(51,208.0441);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,200);
   14->SetBinContent(1,37.01831);
   14->SetBinContent(2,175.837);
   14->SetBinContent(3,388.6922);
   14->SetBinContent(4,629.3112);
   14->SetBinContent(5,684.8387);
   14->SetBinContent(6,1064.276);
   14->SetBinContent(7,1101.294);
   14->SetBinContent(8,1055.022);
   14->SetBinContent(9,1369.675);
   14->SetBinContent(10,1267.875);
   14->SetBinContent(11,1415.948);
   14->SetBinContent(12,1554.766);
   14->SetBinContent(13,1638.056);
   14->SetBinContent(14,1832.401);
   14->SetBinContent(15,1702.838);
   14->SetBinContent(16,1582.529);
   14->SetBinContent(17,1675.074);
   14->SetBinContent(18,1693.583);
   14->SetBinContent(19,1721.347);
   14->SetBinContent(20,1591.784);
   14->SetBinContent(21,1601.038);
   14->SetBinContent(22,1573.275);
   14->SetBinContent(23,1739.856);
   14->SetBinContent(24,1693.583);
   14->SetBinContent(25,1323.403);
   14->SetBinContent(26,1397.439);
   14->SetBinContent(27,1508.493);
   14->SetBinContent(28,1527.002);
   14->SetBinContent(29,1489.984);
   14->SetBinContent(30,1406.693);
   14->SetBinContent(31,1360.421);
   14->SetBinContent(32,1286.385);
   14->SetBinContent(33,1064.276);
   14->SetBinContent(34,1323.403);
   14->SetBinContent(35,1221.603);
   14->SetBinContent(36,1341.912);
   14->SetBinContent(37,1240.112);
   14->SetBinContent(38,1203.094);
   14->SetBinContent(39,1119.803);
   14->SetBinContent(40,1036.513);
   14->SetBinContent(41,1203.094);
   14->SetBinContent(42,703.3478);
   14->SetBinContent(43,832.9119);
   14->SetBinContent(44,860.6757);
   14->SetBinContent(45,1129.058);
   14->SetBinContent(46,851.4211);
   14->SetBinContent(47,805.1482);
   14->SetBinContent(48,758.8753);
   14->SetBinContent(49,860.6757);
   14->SetBinContent(50,768.1299);
   14->SetBinContent(51,22580.92);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,200);
   15->SetBinContent(1,1290.151);
   15->SetBinContent(2,3477.804);
   15->SetBinContent(3,4627.726);
   15->SetBinContent(4,3954.601);
   15->SetBinContent(5,3141.241);
   15->SetBinContent(6,2468.116);
   15->SetBinContent(7,1823.039);
   15->SetBinContent(8,1402.338);
   15->SetBinContent(9,1009.683);
   15->SetBinContent(10,701.1689);
   15->SetBinContent(11,532.8884);
   15->SetBinContent(12,476.7948);
   15->SetBinContent(13,336.5611);
   15->SetBinContent(14,364.6078);
   15->SetBinContent(15,196.3273);
   15->SetBinContent(16,224.374);
   15->SetBinContent(17,56.09351);
   15->SetBinContent(18,252.4208);
   15->SetBinContent(19,28.04676);
   15->SetBinContent(20,112.187);
   15->SetBinContent(21,56.09351);
   15->SetBinContent(22,112.187);
   15->SetBinContent(23,84.14027);
   15->SetBinContent(24,84.14027);
   15->SetBinContent(25,84.14027);
   15->SetBinContent(26,28.04676);
   15->SetBinContent(27,56.09351);
   15->SetBinContent(29,56.09351);
   15->SetBinContent(30,56.09351);
   15->SetBinContent(31,28.04676);
   15->SetBinContent(32,84.14027);
   15->SetBinContent(33,28.04676);
   15->SetBinContent(34,56.09351);
   15->SetBinContent(35,28.04676);
   15->SetBinContent(36,56.09351);
   15->SetBinContent(38,28.04676);
   15->SetBinContent(39,28.04676);
   15->SetBinContent(40,28.04676);
   15->SetBinContent(45,28.04676);
   15->SetBinContent(51,28.04676);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,200);
   16->SetBinContent(1,42.47915);
   16->SetBinContent(2,74.33852);
   16->SetBinContent(3,106.1979);
   16->SetBinContent(4,74.33852);
   16->SetBinContent(5,138.0573);
   16->SetBinContent(6,212.3957);
   16->SetBinContent(7,254.8748);
   16->SetBinContent(8,286.7342);
   16->SetBinContent(9,223.0155);
   16->SetBinContent(10,318.5935);
   16->SetBinContent(11,297.354);
   16->SetBinContent(12,318.5935);
   16->SetBinContent(13,339.8331);
   16->SetBinContent(14,318.5935);
   16->SetBinContent(15,361.0727);
   16->SetBinContent(16,350.4529);
   16->SetBinContent(17,201.7759);
   16->SetBinContent(18,318.5935);
   16->SetBinContent(19,297.354);
   16->SetBinContent(20,371.6924);
   16->SetBinContent(21,233.6353);
   16->SetBinContent(22,276.1144);
   16->SetBinContent(23,286.7342);
   16->SetBinContent(24,276.1144);
   16->SetBinContent(25,201.7759);
   16->SetBinContent(26,212.3957);
   16->SetBinContent(27,371.6924);
   16->SetBinContent(28,180.5364);
   16->SetBinContent(29,297.354);
   16->SetBinContent(30,265.4946);
   16->SetBinContent(31,201.7759);
   16->SetBinContent(32,223.0155);
   16->SetBinContent(33,201.7759);
   16->SetBinContent(34,265.4946);
   16->SetBinContent(35,106.1979);
   16->SetBinContent(36,233.6353);
   16->SetBinContent(37,180.5364);
   16->SetBinContent(38,138.0573);
   16->SetBinContent(39,180.5364);
   16->SetBinContent(40,127.4375);
   16->SetBinContent(41,148.677);
   16->SetBinContent(42,138.0573);
   16->SetBinContent(43,138.0573);
   16->SetBinContent(44,201.7759);
   16->SetBinContent(45,84.95831);
   16->SetBinContent(46,169.9166);
   16->SetBinContent(47,116.8177);
   16->SetBinContent(48,127.4375);
   16->SetBinContent(49,127.4375);
   16->SetBinContent(50,95.57809);
   16->SetBinContent(51,2315.113);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,200);
   17->SetBinContent(1,5108.931);
   17->SetBinContent(2,11738.37);
   17->SetBinContent(3,11616.73);
   17->SetBinContent(4,9792.12);
   17->SetBinContent(5,7785.046);
   17->SetBinContent(6,6021.243);
   17->SetBinContent(7,4865.648);
   17->SetBinContent(8,4074.978);
   17->SetBinContent(9,3466.772);
   17->SetBinContent(10,2128.72);
   17->SetBinContent(11,1885.437);
   17->SetBinContent(12,1642.155);
   17->SetBinContent(13,729.8467);
   17->SetBinContent(14,1094.77);
   17->SetBinContent(15,1155.591);
   17->SetBinContent(16,973.129);
   17->SetBinContent(17,364.9234);
   17->SetBinContent(18,608.2056);
   17->SetBinContent(19,547.3851);
   17->SetBinContent(20,364.9234);
   17->SetBinContent(21,425.7439);
   17->SetBinContent(22,364.9234);
   17->SetBinContent(23,182.4617);
   17->SetBinContent(24,364.9234);
   17->SetBinContent(25,121.6411);
   17->SetBinContent(26,243.2822);
   17->SetBinContent(27,121.6411);
   17->SetBinContent(28,121.6411);
   17->SetBinContent(29,243.2822);
   17->SetBinContent(30,243.2822);
   17->SetBinContent(31,364.9234);
   17->SetBinContent(32,182.4617);
   17->SetBinContent(33,121.6411);
   17->SetBinContent(34,121.6411);
   17->SetBinContent(35,121.6411);
   17->SetBinContent(36,60.82056);
   17->SetBinContent(37,121.6411);
   17->SetBinContent(39,60.82056);
   17->SetBinContent(40,60.82056);
   17->SetBinContent(41,60.82056);
   17->SetBinContent(43,182.4617);
   17->SetBinContent(44,60.82056);
   17->SetBinContent(46,121.6411);
   17->SetBinContent(47,60.82056);
   17->SetBinContent(48,60.82056);
   17->SetBinContent(51,547.3851);
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
