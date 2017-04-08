{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 00:55:52 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-53.96825,-3.040894,263.4921,5.197575);
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
   
   TH1F *THStack_stack_2 = new TH1F("THStack_stack_2","",50,0,200);
   THStack_stack_2->SetMinimum(0.02767136);
   THStack_stack_2->SetMaximum(34553.91);
   THStack_stack_2->SetDirectory(0);
   THStack_stack_2->SetStats(0);
   THStack_stack_2->SetLineWidth(2);
   THStack_stack_2->SetMarkerSize(1.2);
   THStack_stack_2->GetXaxis()->SetTitle("M_{H#rightarrowWW*} / GeV");
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
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,200);
   0->SetBinContent(9,0.005646);
   0->SetBinContent(10,0.001882);
   0->SetBinContent(11,0.003764);
   0->SetBinContent(12,0.00941);
   0->SetBinContent(13,0.01882);
   0->SetBinContent(14,0.015056);
   0->SetBinContent(15,0.02823);
   0->SetBinContent(16,0.04328601);
   0->SetBinContent(17,0.04705001);
   0->SetBinContent(18,0.06587003);
   0->SetBinContent(19,0.1129201);
   0->SetBinContent(20,0.1373861);
   0->SetBinContent(21,0.2089022);
   0->SetBinContent(22,0.2503062);
   0->SetBinContent(23,0.2935919);
   0->SetBinContent(24,0.3971012);
   0->SetBinContent(25,0.5326048);
   0->SetBinContent(26,0.6041214);
   0->SetBinContent(27,0.7132784);
   0->SetBinContent(28,0.9203002);
   0->SetBinContent(29,0.9805247);
   0->SetBinContent(30,1.21577);
   0->SetBinContent(31,1.445369);
   0->SetBinContent(32,1.419021);
   0->SetBinContent(33,1.208242);
   0->SetBinContent(34,0.8525476);
   0->SetBinContent(35,0.562717);
   0->SetBinContent(36,0.4460328);
   0->SetBinContent(37,0.3255857);
   0->SetBinContent(38,0.2503062);
   0->SetBinContent(39,0.2860639);
   0->SetBinContent(40,0.2371322);
   0->SetBinContent(41,0.2013742);
   0->SetBinContent(42,0.1656161);
   0->SetBinContent(43,0.1486781);
   0->SetBinContent(44,0.1806721);
   0->SetBinContent(45,0.1580881);
   0->SetBinContent(46,0.1637341);
   0->SetBinContent(47,0.1166841);
   0->SetBinContent(48,0.1166841);
   0->SetBinContent(49,0.1072741);
   0->SetBinContent(50,0.1279761);
   0->SetBinContent(51,1.554522);
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
   1->SetBinContent(4,0.001882);
   1->SetBinContent(5,0.001882);
   1->SetBinContent(6,0.001882);
   1->SetBinContent(7,0.006587);
   1->SetBinContent(8,0.006587);
   1->SetBinContent(9,0.010351);
   1->SetBinContent(10,0.016938);
   1->SetBinContent(11,0.02164301);
   1->SetBinContent(12,0.02446601);
   1->SetBinContent(13,0.03387602);
   1->SetBinContent(14,0.04705003);
   1->SetBinContent(15,0.05457804);
   1->SetBinContent(16,0.06869305);
   1->SetBinContent(17,0.08563107);
   1->SetBinContent(18,0.09033607);
   1->SetBinContent(19,0.1270351);
   1->SetBinContent(20,0.136445);
   1->SetBinContent(21,0.1712618);
   1->SetBinContent(22,0.1947866);
   1->SetBinContent(23,0.2173705);
   1->SetBinContent(24,0.2888866);
   1->SetBinContent(25,0.3425241);
   1->SetBinContent(26,0.3886335);
   1->SetBinContent(27,0.4375659);
   1->SetBinContent(28,0.5420165);
   1->SetBinContent(29,0.5693049);
   1->SetBinContent(30,0.653052);
   1->SetBinContent(31,0.7104517);
   1->SetBinContent(32,0.6577569);
   1->SetBinContent(33,0.5608361);
   1->SetBinContent(34,0.4657961);
   1->SetBinContent(35,0.3622852);
   1->SetBinContent(36,0.3237039);
   1->SetBinContent(37,0.2766535);
   1->SetBinContent(38,0.2164295);
   1->SetBinContent(39,0.1722028);
   1->SetBinContent(40,0.1759667);
   1->SetBinContent(41,0.1618518);
   1->SetBinContent(42,0.1590289);
   1->SetBinContent(43,0.136445);
   1->SetBinContent(44,0.1223301);
   1->SetBinContent(45,0.1006871);
   1->SetBinContent(46,0.1016281);
   1->SetBinContent(47,0.09221807);
   1->SetBinContent(48,0.06775205);
   1->SetBinContent(49,0.06492905);
   1->SetBinContent(50,0.06022404);
   1->SetBinContent(51,0.8770049);
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
   2->SetBinContent(5,0.006587);
   2->SetBinContent(6,0.008469);
   2->SetBinContent(7,0.01882);
   2->SetBinContent(8,0.02823001);
   2->SetBinContent(9,0.03669902);
   2->SetBinContent(10,0.05363704);
   2->SetBinContent(11,0.04987303);
   2->SetBinContent(12,0.09033607);
   2->SetBinContent(13,0.1157431);
   2->SetBinContent(14,0.1166841);
   2->SetBinContent(15,0.1590289);
   2->SetBinContent(16,0.1656158);
   2->SetBinContent(17,0.2192524);
   2->SetBinContent(18,0.2550103);
   2->SetBinContent(19,0.3067657);
   2->SetBinContent(20,0.3811054);
   2->SetBinContent(21,0.4347429);
   2->SetBinContent(22,0.5109642);
   2->SetBinContent(23,0.6003572);
   2->SetBinContent(24,0.6596388);
   2->SetBinContent(25,0.7452679);
   2->SetBinContent(26,0.8591263);
   2->SetBinContent(27,1.01533);
   2->SetBinContent(28,1.148957);
   2->SetBinContent(29,1.299523);
   2->SetBinContent(30,1.543252);
   2->SetBinContent(31,1.74087);
   2->SetBinContent(32,1.656177);
   2->SetBinContent(33,1.437856);
   2->SetBinContent(34,1.077438);
   2->SetBinContent(35,0.8403067);
   2->SetBinContent(36,0.6690486);
   2->SetBinContent(37,0.5740098);
   2->SetBinContent(38,0.5674229);
   2->SetBinContent(39,0.4846163);
   2->SetBinContent(40,0.4375659);
   2->SetBinContent(41,0.3782824);
   2->SetBinContent(42,0.3641672);
   2->SetBinContent(43,0.334996);
   2->SetBinContent(44,0.3218219);
   2->SetBinContent(45,0.2644204);
   2->SetBinContent(46,0.2888866);
   2->SetBinContent(47,0.2286624);
   2->SetBinContent(48,0.2361903);
   2->SetBinContent(49,0.2380723);
   2->SetBinContent(50,0.1844357);
   2->SetBinContent(51,3.040444);
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
   3->SetBinContent(3,0.006829);
   3->SetBinContent(5,0.020487);
   3->SetBinContent(6,0.040974);
   3->SetBinContent(7,0.06146101);
   3->SetBinContent(8,0.13658);
   3->SetBinContent(9,0.122922);
   3->SetBinContent(10,0.2526729);
   3->SetBinContent(11,0.2595019);
   3->SetBinContent(12,0.4302267);
   3->SetBinContent(13,0.4438847);
   3->SetBinContent(14,0.7989937);
   3->SetBinContent(15,0.7170454);
   3->SetBinContent(16,0.9833773);
   3->SetBinContent(17,1.17459);
   3->SetBinContent(18,1.543357);
   3->SetBinContent(19,2.048705);
   3->SetBinContent(20,2.356011);
   3->SetBinContent(21,2.881846);
   3->SetBinContent(22,3.325732);
   3->SetBinContent(23,3.906199);
   3->SetBinContent(24,4.397875);
   3->SetBinContent(25,4.350073);
   3->SetBinContent(26,5.271959);
   3->SetBinContent(27,5.558768);
   3->SetBinContent(28,5.620227);
   3->SetBinContent(29,6.480654);
   3->SetBinContent(30,6.644545);
   3->SetBinContent(31,7.730322);
   3->SetBinContent(32,7.730322);
   3->SetBinContent(33,6.589915);
   3->SetBinContent(34,5.217329);
   3->SetBinContent(35,4.336416);
   3->SetBinContent(36,2.99111);
   3->SetBinContent(37,2.36284);
   3->SetBinContent(38,1.638964);
   3->SetBinContent(39,1.570673);
   3->SetBinContent(40,1.222393);
   3->SetBinContent(41,1.133616);
   3->SetBinContent(42,1.078984);
   3->SetBinContent(43,0.9287452);
   3->SetBinContent(44,0.7238744);
   3->SetBinContent(45,0.7375325);
   3->SetBinContent(46,0.7170454);
   3->SetBinContent(47,0.6350971);
   3->SetBinContent(48,0.4985167);
   3->SetBinContent(49,0.580465);
   3->SetBinContent(50,0.4848587);
   3->SetBinContent(51,5.790947);
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
   4->SetBinContent(2,0.005261);
   4->SetBinContent(4,0.121003);
   4->SetBinContent(5,0.242006);
   4->SetBinContent(6,0.4787512);
   4->SetBinContent(7,0.7154964);
   4->SetBinContent(8,0.8838485);
   4->SetBinContent(9,1.10481);
   4->SetBinContent(10,1.299464);
   4->SetBinContent(11,1.394161);
   4->SetBinContent(12,1.715079);
   4->SetBinContent(13,1.99917);
   4->SetBinContent(14,2.146477);
   4->SetBinContent(15,2.172781);
   4->SetBinContent(16,2.762007);
   4->SetBinContent(17,2.767268);
   4->SetBinContent(18,3.119751);
   4->SetBinContent(19,3.656368);
   4->SetBinContent(20,4.287681);
   4->SetBinContent(21,5.345131);
   4->SetBinContent(22,6.302623);
   4->SetBinContent(23,7.002328);
   4->SetBinContent(24,7.496857);
   4->SetBinContent(25,7.744122);
   4->SetBinContent(26,7.823036);
   4->SetBinContent(27,7.759904);
   4->SetBinContent(28,7.833558);
   4->SetBinContent(29,8.233411);
   4->SetBinContent(30,7.68099);
   4->SetBinContent(31,7.938776);
   4->SetBinContent(32,7.90195);
   4->SetBinContent(33,6.965502);
   4->SetBinContent(34,5.713397);
   4->SetBinContent(35,4.61386);
   4->SetBinContent(36,3.966763);
   4->SetBinContent(37,3.235492);
   4->SetBinContent(38,2.635744);
   4->SetBinContent(39,2.246434);
   4->SetBinContent(40,1.846603);
   4->SetBinContent(41,1.820298);
   4->SetBinContent(42,1.615121);
   4->SetBinContent(43,1.446771);
   4->SetBinContent(44,1.257377);
   4->SetBinContent(45,1.210028);
   4->SetBinContent(46,1.073244);
   4->SetBinContent(47,0.9943296);
   4->SetBinContent(48,0.8522825);
   4->SetBinContent(49,0.8101944);
   4->SetBinContent(50,0.7786284);
   4->SetBinContent(51,9.727654);
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
   5->SetBinContent(3,0.012401);
   5->SetBinContent(4,0.012401);
   5->SetBinContent(5,0.062005);
   5->SetBinContent(6,0.12401);
   5->SetBinContent(7,0.210817);
   5->SetBinContent(8,0.3596289);
   5->SetBinContent(9,0.4092328);
   5->SetBinContent(10,0.4340348);
   5->SetBinContent(11,0.6448515);
   5->SetBinContent(12,0.9672771);
   5->SetBinContent(13,1.116089);
   5->SetBinContent(14,1.649331);
   5->SetBinContent(15,2.281784);
   5->SetBinContent(16,3.001048);
   5->SetBinContent(17,3.497092);
   5->SetBinContent(18,4.749604);
   5->SetBinContent(19,6.039319);
   5->SetBinContent(20,8.91634);
   5->SetBinContent(21,11.90489);
   5->SetBinContent(22,18.56422);
   5->SetBinContent(23,25.50911);
   5->SetBinContent(24,28.03903);
   5->SetBinContent(25,27.19572);
   5->SetBinContent(26,26.2408);
   5->SetBinContent(27,24.72781);
   5->SetBinContent(28,23.69848);
   5->SetBinContent(29,23.97131);
   5->SetBinContent(30,23.81009);
   5->SetBinContent(31,22.65675);
   5->SetBinContent(32,21.96226);
   5->SetBinContent(33,21.26777);
   5->SetBinContent(34,17.42328);
   5->SetBinContent(35,16.0095);
   5->SetBinContent(36,13.33096);
   5->SetBinContent(37,10.88804);
   5->SetBinContent(38,9.821586);
   5->SetBinContent(39,9.089949);
   5->SetBinContent(40,8.494719);
   5->SetBinContent(41,7.043808);
   5->SetBinContent(42,6.696577);
   5->SetBinContent(43,5.456467);
   5->SetBinContent(44,5.406862);
   5->SetBinContent(45,4.997626);
   5->SetBinContent(46,4.650395);
   5->SetBinContent(47,4.14195);
   5->SetBinContent(48,3.893928);
   5->SetBinContent(49,3.931131);
   5->SetBinContent(50,3.211867);
   5->SetBinContent(51,46.92664);
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
   6->SetBinContent(3,0.531342);
   6->SetBinContent(4,0.75906);
   6->SetBinContent(5,2.504899);
   6->SetBinContent(6,4.857983);
   6->SetBinContent(7,8.501462);
   6->SetBinContent(8,13.66306);
   6->SetBinContent(9,17.91381);
   6->SetBinContent(10,25.58039);
   6->SetBinContent(11,35.22046);
   6->SetBinContent(12,42.0519);
   6->SetBinContent(13,61.25583);
   6->SetBinContent(14,76.36089);
   6->SetBinContent(15,98.98054);
   6->SetBinContent(16,127.5208);
   6->SetBinContent(17,163.2755);
   6->SetBinContent(18,229.1675);
   6->SetBinContent(19,312.1286);
   6->SetBinContent(20,430.2246);
   6->SetBinContent(21,502.5547);
   6->SetBinContent(22,518.6476);
   6->SetBinContent(23,495.7998);
   6->SetBinContent(24,488.0583);
   6->SetBinContent(25,505.8942);
   6->SetBinContent(26,533.9091);
   6->SetBinContent(27,529.3534);
   6->SetBinContent(28,538.161);
   6->SetBinContent(29,548.0316);
   6->SetBinContent(30,549.5502);
   6->SetBinContent(31,541.9574);
   6->SetBinContent(32,532.3146);
   6->SetBinContent(33,496.2552);
   6->SetBinContent(34,443.3549);
   6->SetBinContent(35,372.6187);
   6->SetBinContent(36,312.584);
   6->SetBinContent(37,271.2959);
   6->SetBinContent(38,229.3952);
   6->SetBinContent(39,201.3835);
   6->SetBinContent(40,183.9996);
   6->SetBinContent(41,160.0872);
   6->SetBinContent(42,150.5981);
   6->SetBinContent(43,130.4054);
   6->SetBinContent(44,116.2868);
   6->SetBinContent(45,107.6337);
   6->SetBinContent(46,101.03);
   6->SetBinContent(47,92.75634);
   6->SetBinContent(48,88.80929);
   6->SetBinContent(49,81.44652);
   6->SetBinContent(50,69.98489);
   6->SetBinContent(51,959.2562);
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
   7->SetBinContent(5,0.146466);
   7->SetBinContent(6,0.48822);
   7->SetBinContent(7,1.171728);
   7->SetBinContent(8,1.659948);
   7->SetBinContent(9,3.71047);
   7->SetBinContent(10,5.46806);
   7->SetBinContent(11,8.543846);
   7->SetBinContent(12,14.84194);
   7->SetBinContent(13,18.50362);
   7->SetBinContent(14,26.94989);
   7->SetBinContent(15,36.0307);
   7->SetBinContent(16,51.40916);
   7->SetBinContent(17,68.74043);
   7->SetBinContent(18,92.51601);
   7->SetBinContent(19,132.8425);
   7->SetBinContent(20,179.864);
   7->SetBinContent(21,230.987);
   7->SetBinContent(22,258.7214);
   7->SetBinContent(23,281.7683);
   7->SetBinContent(24,293.4382);
   7->SetBinContent(25,271.8073);
   7->SetBinContent(26,246.612);
   7->SetBinContent(27,247.6374);
   7->SetBinContent(28,228.5456);
   7->SetBinContent(29,223.3698);
   7->SetBinContent(30,212.4812);
   7->SetBinContent(31,208.4773);
   7->SetBinContent(32,207.9402);
   7->SetBinContent(33,194.4148);
   7->SetBinContent(34,185.6745);
   7->SetBinContent(35,167.0222);
   7->SetBinContent(36,145.7331);
   7->SetBinContent(37,122.4918);
   7->SetBinContent(38,104.2329);
   7->SetBinContent(39,89.1474);
   7->SetBinContent(40,79.28566);
   7->SetBinContent(41,71.81612);
   7->SetBinContent(42,62.97961);
   7->SetBinContent(43,56.68177);
   7->SetBinContent(44,51.70208);
   7->SetBinContent(45,46.91767);
   7->SetBinContent(46,42.13326);
   7->SetBinContent(47,41.05921);
   7->SetBinContent(48,35.73778);
   7->SetBinContent(49,35.24957);
   7->SetBinContent(50,32.07624);
   7->SetBinContent(51,624.9811);
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
   8->SetBinContent(7,0.146753);
   8->SetBinContent(8,0.440259);
   8->SetBinContent(9,0.733765);
   8->SetBinContent(10,0.733765);
   8->SetBinContent(11,0.440259);
   8->SetBinContent(12,0.880518);
   8->SetBinContent(13,1.174024);
   8->SetBinContent(14,2.494801);
   8->SetBinContent(15,1.320777);
   8->SetBinContent(16,2.641554);
   8->SetBinContent(17,2.93506);
   8->SetBinContent(18,4.255837);
   8->SetBinContent(19,4.989602);
   8->SetBinContent(20,5.42986);
   8->SetBinContent(21,6.603883);
   8->SetBinContent(22,5.42986);
   8->SetBinContent(23,8.364918);
   8->SetBinContent(24,6.163624);
   8->SetBinContent(25,7.777905);
   8->SetBinContent(26,6.016871);
   8->SetBinContent(27,5.870119);
   8->SetBinContent(28,7.044141);
   8->SetBinContent(29,8.071411);
   8->SetBinContent(30,7.337647);
   8->SetBinContent(31,6.45713);
   8->SetBinContent(32,7.924658);
   8->SetBinContent(33,7.631153);
   8->SetBinContent(34,8.071411);
   8->SetBinContent(35,6.016871);
   8->SetBinContent(36,5.870119);
   8->SetBinContent(37,6.603883);
   8->SetBinContent(38,4.842849);
   8->SetBinContent(39,3.815579);
   8->SetBinContent(40,4.696096);
   8->SetBinContent(41,3.962332);
   8->SetBinContent(42,2.93506);
   8->SetBinContent(43,3.668826);
   8->SetBinContent(44,3.815579);
   8->SetBinContent(45,5.283107);
   8->SetBinContent(46,3.962332);
   8->SetBinContent(47,4.40259);
   8->SetBinContent(48,4.255837);
   8->SetBinContent(49,3.522073);
   8->SetBinContent(50,5.283107);
   8->SetBinContent(51,89.372);
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
   9->SetBinContent(5,0.171439);
   9->SetBinContent(6,0.514317);
   9->SetBinContent(7,1.028634);
   9->SetBinContent(8,2.057268);
   9->SetBinContent(9,2.914463);
   9->SetBinContent(10,2.914463);
   9->SetBinContent(11,5.657488);
   9->SetBinContent(12,7.714758);
   9->SetBinContent(13,12.51505);
   9->SetBinContent(14,19.02973);
   9->SetBinContent(15,24.68719);
   9->SetBinContent(16,34.28775);
   9->SetBinContent(17,45.6028);
   9->SetBinContent(18,58.63225);
   9->SetBinContent(19,82.80531);
   9->SetBinContent(20,107.6641);
   9->SetBinContent(21,129.0941);
   9->SetBinContent(22,157.0376);
   9->SetBinContent(23,150.3517);
   9->SetBinContent(24,156.1804);
   9->SetBinContent(25,161.4948);
   9->SetBinContent(26,178.9809);
   9->SetBinContent(27,191.3241);
   9->SetBinContent(28,225.0963);
   9->SetBinContent(29,237.4394);
   9->SetBinContent(30,255.9541);
   9->SetBinContent(31,284.7574);
   9->SetBinContent(32,298.4732);
   9->SetBinContent(33,327.7907);
   9->SetBinContent(34,337.3918);
   9->SetBinContent(35,355.9082);
   9->SetBinContent(36,350.2504);
   9->SetBinContent(37,377.1677);
   9->SetBinContent(38,384.1971);
   9->SetBinContent(39,405.7995);
   9->SetBinContent(40,426.0303);
   9->SetBinContent(41,463.063);
   9->SetBinContent(42,529.5847);
   9->SetBinContent(43,610.1652);
   9->SetBinContent(44,626.2812);
   9->SetBinContent(45,608.7936);
   9->SetBinContent(46,516.2118);
   9->SetBinContent(47,410.9429);
   9->SetBinContent(48,325.9048);
   9->SetBinContent(49,266.241);
   9->SetBinContent(50,235.3822);
   9->SetBinContent(51,5809.5);
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
   10->SetBinContent(3,0.441616);
   10->SetBinContent(4,2.77587);
   10->SetBinContent(5,8.769231);
   10->SetBinContent(6,20.5667);
   10->SetBinContent(7,39.74529);
   10->SetBinContent(8,64.16013);
   10->SetBinContent(9,108.5106);
   10->SetBinContent(10,157.4701);
   10->SetBinContent(11,223.1521);
   10->SetBinContent(12,299.6758);
   10->SetBinContent(13,397.0711);
   10->SetBinContent(14,506.7039);
   10->SetBinContent(15,657.8506);
   10->SetBinContent(16,818.5927);
   10->SetBinContent(17,1023.133);
   10->SetBinContent(18,1296.527);
   10->SetBinContent(19,1614.54);
   10->SetBinContent(20,2081.555);
   10->SetBinContent(21,2425.408);
   10->SetBinContent(22,2495.073);
   10->SetBinContent(23,2415.96);
   10->SetBinContent(24,2365.002);
   10->SetBinContent(25,2311.651);
   10->SetBinContent(26,2224.728);
   10->SetBinContent(27,2186.935);
   10->SetBinContent(28,2114.876);
   10->SetBinContent(29,2038.894);
   10->SetBinContent(30,1965.939);
   10->SetBinContent(31,1881.371);
   10->SetBinContent(32,1864.331);
   10->SetBinContent(33,1773.074);
   10->SetBinContent(34,1628.866);
   10->SetBinContent(35,1456.828);
   10->SetBinContent(36,1265.035);
   10->SetBinContent(37,1060.621);
   10->SetBinContent(38,892.0531);
   10->SetBinContent(39,758.6378);
   10->SetBinContent(40,663.6567);
   10->SetBinContent(41,584.2008);
   10->SetBinContent(42,520.27);
   10->SetBinContent(43,476.4886);
   10->SetBinContent(44,417.1305);
   10->SetBinContent(45,367.3605);
   10->SetBinContent(46,325.4124);
   10->SetBinContent(47,292.6109);
   10->SetBinContent(48,263.7834);
   10->SetBinContent(49,230.7235);
   10->SetBinContent(50,214.4449);
   10->SetBinContent(51,2740.287);
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
   11->SetBinContent(6,29.26772);
   11->SetBinContent(8,43.90158);
   11->SetBinContent(9,58.53543);
   11->SetBinContent(10,117.0709);
   11->SetBinContent(11,102.437);
   11->SetBinContent(12,117.0709);
   11->SetBinContent(13,131.7047);
   11->SetBinContent(14,190.2402);
   11->SetBinContent(15,292.6772);
   11->SetBinContent(16,204.8741);
   11->SetBinContent(17,351.2126);
   11->SetBinContent(18,292.6772);
   11->SetBinContent(19,321.9449);
   11->SetBinContent(20,292.6772);
   11->SetBinContent(21,321.9449);
   11->SetBinContent(22,570.7204);
   11->SetBinContent(23,351.2126);
   11->SetBinContent(24,380.4803);
   11->SetBinContent(25,336.5788);
   11->SetBinContent(26,351.2126);
   11->SetBinContent(27,380.4803);
   11->SetBinContent(28,395.1142);
   11->SetBinContent(29,278.0434);
   11->SetBinContent(30,380.4803);
   11->SetBinContent(31,365.8465);
   11->SetBinContent(32,336.5788);
   11->SetBinContent(33,380.4803);
   11->SetBinContent(34,351.2126);
   11->SetBinContent(35,278.0434);
   11->SetBinContent(36,292.6772);
   11->SetBinContent(37,263.4095);
   11->SetBinContent(38,190.2402);
   11->SetBinContent(39,190.2402);
   11->SetBinContent(40,131.7047);
   11->SetBinContent(41,219.5079);
   11->SetBinContent(42,102.437);
   11->SetBinContent(43,175.6063);
   11->SetBinContent(44,73.1693);
   11->SetBinContent(45,131.7047);
   11->SetBinContent(46,102.437);
   11->SetBinContent(47,43.90158);
   11->SetBinContent(48,73.1693);
   11->SetBinContent(49,102.437);
   11->SetBinContent(50,43.90158);
   11->SetBinContent(51,1068.271);
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
   12->SetBinContent(3,12.68696);
   12->SetBinContent(4,63.43479);
   12->SetBinContent(5,63.43479);
   12->SetBinContent(6,260.0826);
   12->SetBinContent(7,431.3564);
   12->SetBinContent(8,386.9521);
   12->SetBinContent(9,640.6917);
   12->SetBinContent(10,843.6839);
   12->SetBinContent(11,1160.859);
   12->SetBinContent(12,1186.233);
   12->SetBinContent(13,1275.042);
   12->SetBinContent(14,1446.317);
   12->SetBinContent(15,1522.439);
   12->SetBinContent(16,1471.691);
   12->SetBinContent(17,1503.408);
   12->SetBinContent(18,1852.301);
   12->SetBinContent(19,1700.057);
   12->SetBinContent(20,1985.515);
   12->SetBinContent(21,2048.95);
   12->SetBinContent(22,1845.958);
   12->SetBinContent(23,2036.263);
   12->SetBinContent(24,1941.11);
   12->SetBinContent(25,1592.218);
   12->SetBinContent(26,1573.187);
   12->SetBinContent(27,1249.668);
   12->SetBinContent(28,1275.042);
   12->SetBinContent(29,1395.569);
   12->SetBinContent(30,1217.951);
   12->SetBinContent(31,1294.073);
   12->SetBinContent(32,1135.485);
   12->SetBinContent(33,1217.951);
   12->SetBinContent(34,1167.203);
   12->SetBinContent(35,1148.172);
   12->SetBinContent(36,1027.646);
   12->SetBinContent(37,1173.546);
   12->SetBinContent(38,938.8365);
   12->SetBinContent(39,837.3404);
   12->SetBinContent(40,761.2183);
   12->SetBinContent(41,704.1268);
   12->SetBinContent(42,602.6307);
   12->SetBinContent(43,482.1042);
   12->SetBinContent(44,507.4781);
   12->SetBinContent(45,405.9825);
   12->SetBinContent(46,431.3564);
   12->SetBinContent(47,386.9521);
   12->SetBinContent(48,437.6999);
   12->SetBinContent(49,380.6086);
   12->SetBinContent(50,317.1738);
   12->SetBinContent(51,13054.96);
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
   13->SetBinContent(4,81.57449);
   13->SetBinContent(5,163.149);
   13->SetBinContent(7,326.298);
   13->SetBinContent(8,244.7235);
   13->SetBinContent(9,897.3193);
   13->SetBinContent(10,815.7449);
   13->SetBinContent(11,2039.362);
   13->SetBinContent(12,1223.617);
   13->SetBinContent(13,1468.341);
   13->SetBinContent(14,1794.638);
   13->SetBinContent(15,2773.532);
   13->SetBinContent(16,1876.213);
   13->SetBinContent(17,2610.383);
   13->SetBinContent(18,3262.979);
   13->SetBinContent(19,2528.809);
   13->SetBinContent(20,3507.702);
   13->SetBinContent(21,3997.149);
   13->SetBinContent(22,3426.128);
   13->SetBinContent(23,2202.511);
   13->SetBinContent(24,3018.255);
   13->SetBinContent(25,3426.128);
   13->SetBinContent(26,3181.404);
   13->SetBinContent(27,2691.958);
   13->SetBinContent(28,2528.809);
   13->SetBinContent(29,3018.255);
   13->SetBinContent(30,3018.255);
   13->SetBinContent(31,1876.213);
   13->SetBinContent(32,2365.66);
   13->SetBinContent(33,2610.383);
   13->SetBinContent(34,2528.809);
   13->SetBinContent(35,1876.213);
   13->SetBinContent(36,1386.766);
   13->SetBinContent(37,1386.766);
   13->SetBinContent(38,1142.043);
   13->SetBinContent(39,897.3193);
   13->SetBinContent(40,1468.341);
   13->SetBinContent(41,1223.617);
   13->SetBinContent(42,978.8938);
   13->SetBinContent(43,652.5959);
   13->SetBinContent(44,897.3193);
   13->SetBinContent(45,815.7449);
   13->SetBinContent(46,815.7449);
   13->SetBinContent(47,489.447);
   13->SetBinContent(48,571.0215);
   13->SetBinContent(49,326.298);
   13->SetBinContent(50,407.8725);
   13->SetBinContent(51,5628.643);
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
   14->SetBinContent(1,4.029479);
   14->SetBinContent(3,4.029479);
   14->SetBinContent(4,68.50115);
   14->SetBinContent(5,193.415);
   14->SetBinContent(6,278.0341);
   14->SetBinContent(7,576.2156);
   14->SetBinContent(8,854.2497);
   14->SetBinContent(9,1108.106);
   14->SetBinContent(10,1325.694);
   14->SetBinContent(11,1635.96);
   14->SetBinContent(12,1873.695);
   14->SetBinContent(13,2260.526);
   14->SetBinContent(14,2329.028);
   14->SetBinContent(15,2619.155);
   14->SetBinContent(16,2643.332);
   14->SetBinContent(17,2945.548);
   14->SetBinContent(18,2897.193);
   14->SetBinContent(19,2969.725);
   14->SetBinContent(20,2828.691);
   14->SetBinContent(21,2586.919);
   14->SetBinContent(22,2276.644);
   14->SetBinContent(23,2143.669);
   14->SetBinContent(24,1680.283);
   14->SetBinContent(25,1502.989);
   14->SetBinContent(26,1188.694);
   14->SetBinContent(27,954.9867);
   14->SetBinContent(28,979.1636);
   14->SetBinContent(29,636.6578);
   14->SetBinContent(30,535.9208);
   14->SetBinContent(31,543.9797);
   14->SetBinContent(32,431.1543);
   14->SetBinContent(33,439.2133);
   14->SetBinContent(34,269.9751);
   14->SetBinContent(35,269.9751);
   14->SetBinContent(36,137.0023);
   14->SetBinContent(37,169.2381);
   14->SetBinContent(38,132.9728);
   14->SetBinContent(39,124.9139);
   14->SetBinContent(40,104.7665);
   14->SetBinContent(41,56.41272);
   14->SetBinContent(42,44.32428);
   14->SetBinContent(43,36.26532);
   14->SetBinContent(44,20.1474);
   14->SetBinContent(45,28.20636);
   14->SetBinContent(46,16.11792);
   14->SetBinContent(47,12.08844);
   14->SetBinContent(48,32.23584);
   14->SetBinContent(49,16.11792);
   14->SetBinContent(50,8.058958);
   14->SetBinContent(51,282.0636);
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
   15->SetBinContent(4,7.725694);
   15->SetBinContent(5,11.58854);
   15->SetBinContent(6,34.76562);
   15->SetBinContent(7,50.21701);
   15->SetBinContent(8,65.6684);
   15->SetBinContent(9,81.11978);
   15->SetBinContent(10,65.6684);
   15->SetBinContent(11,92.70832);
   15->SetBinContent(12,88.84547);
   15->SetBinContent(13,104.2969);
   15->SetBinContent(14,119.7482);
   15->SetBinContent(15,104.2969);
   15->SetBinContent(16,127.4739);
   15->SetBinContent(17,131.3368);
   15->SetBinContent(18,123.6111);
   15->SetBinContent(19,177.691);
   15->SetBinContent(20,119.7482);
   15->SetBinContent(21,169.9653);
   15->SetBinContent(22,185.4167);
   15->SetBinContent(23,146.7882);
   15->SetBinContent(24,112.0226);
   15->SetBinContent(25,88.84547);
   15->SetBinContent(26,84.98263);
   15->SetBinContent(27,88.84547);
   15->SetBinContent(28,112.0226);
   15->SetBinContent(29,73.39409);
   15->SetBinContent(30,50.21701);
   15->SetBinContent(31,42.49131);
   15->SetBinContent(32,84.98263);
   15->SetBinContent(33,34.76562);
   15->SetBinContent(34,61.80555);
   15->SetBinContent(35,46.35416);
   15->SetBinContent(36,61.80555);
   15->SetBinContent(37,34.76562);
   15->SetBinContent(38,34.76562);
   15->SetBinContent(39,15.45139);
   15->SetBinContent(40,11.58854);
   15->SetBinContent(41,30.90277);
   15->SetBinContent(42,11.58854);
   15->SetBinContent(43,19.31424);
   15->SetBinContent(44,11.58854);
   15->SetBinContent(45,19.31424);
   15->SetBinContent(46,7.725694);
   15->SetBinContent(48,23.17708);
   15->SetBinContent(49,11.58854);
   15->SetBinContent(50,11.58854);
   15->SetBinContent(51,181.5539);
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
   16->SetBinContent(3,18.49251);
   16->SetBinContent(4,30.82085);
   16->SetBinContent(5,73.97004);
   16->SetBinContent(6,197.2534);
   16->SetBinContent(7,400.6714);
   16->SetBinContent(8,542.4476);
   16->SetBinContent(9,838.3285);
   16->SetBinContent(10,936.9554);
   16->SetBinContent(11,1165.03);
   16->SetBinContent(12,1263.657);
   16->SetBinContent(13,1917.061);
   16->SetBinContent(14,1954.046);
   16->SetBinContent(15,2225.267);
   16->SetBinContent(16,2490.321);
   16->SetBinContent(17,2903.313);
   16->SetBinContent(18,2934.134);
   16->SetBinContent(19,3217.681);
   16->SetBinContent(20,3297.813);
   16->SetBinContent(21,3303.978);
   16->SetBinContent(22,3174.532);
   16->SetBinContent(23,2823.181);
   16->SetBinContent(24,2607.438);
   16->SetBinContent(25,2471.829);
   16->SetBinContent(26,2040.344);
   16->SetBinContent(27,2040.344);
   16->SetBinContent(28,1565.702);
   16->SetBinContent(29,1510.225);
   16->SetBinContent(30,1251.329);
   16->SetBinContent(31,1066.403);
   16->SetBinContent(32,1047.911);
   16->SetBinContent(33,1023.254);
   16->SetBinContent(34,721.209);
   16->SetBinContent(35,690.3881);
   16->SetBinContent(36,530.1193);
   16->SetBinContent(37,554.776);
   16->SetBinContent(38,376.0146);
   16->SetBinContent(39,351.3579);
   16->SetBinContent(40,351.3579);
   16->SetBinContent(41,252.731);
   16->SetBinContent(42,252.731);
   16->SetBinContent(43,191.0893);
   16->SetBinContent(44,129.4476);
   16->SetBinContent(45,135.6117);
   16->SetBinContent(46,92.46255);
   16->SetBinContent(47,80.13421);
   16->SetBinContent(48,80.13421);
   16->SetBinContent(49,86.29838);
   16->SetBinContent(50,73.97004);
   16->SetBinContent(51,1146.538);
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
   17->SetBinContent(4,93.70071);
   17->SetBinContent(5,70.27553);
   17->SetBinContent(6,304.5273);
   17->SetBinContent(7,187.4014);
   17->SetBinContent(8,749.6055);
   17->SetBinContent(9,702.7552);
   17->SetBinContent(10,749.6055);
   17->SetBinContent(11,819.881);
   17->SetBinContent(12,1054.133);
   17->SetBinContent(13,1124.408);
   17->SetBinContent(14,1077.558);
   17->SetBinContent(15,1147.833);
   17->SetBinContent(16,1054.133);
   17->SetBinContent(17,1100.983);
   17->SetBinContent(18,1124.408);
   17->SetBinContent(19,1428.936);
   17->SetBinContent(20,1288.385);
   17->SetBinContent(21,1147.833);
   17->SetBinContent(22,1546.061);
   17->SetBinContent(23,937.0069);
   17->SetBinContent(24,1124.408);
   17->SetBinContent(25,1194.684);
   17->SetBinContent(26,960.4321);
   17->SetBinContent(27,866.7314);
   17->SetBinContent(28,960.4321);
   17->SetBinContent(29,632.4797);
   17->SetBinContent(30,796.4559);
   17->SetBinContent(31,702.7552);
   17->SetBinContent(32,937.0069);
   17->SetBinContent(33,702.7552);
   17->SetBinContent(34,655.9048);
   17->SetBinContent(35,702.7552);
   17->SetBinContent(36,538.779);
   17->SetBinContent(37,421.6531);
   17->SetBinContent(38,749.6055);
   17->SetBinContent(39,585.6293);
   17->SetBinContent(40,421.6531);
   17->SetBinContent(41,538.779);
   17->SetBinContent(42,491.9286);
   17->SetBinContent(43,374.8028);
   17->SetBinContent(44,562.2042);
   17->SetBinContent(45,304.5273);
   17->SetBinContent(46,538.779);
   17->SetBinContent(47,609.0545);
   17->SetBinContent(48,281.1021);
   17->SetBinContent(49,421.6531);
   17->SetBinContent(50,327.9524);
   17->SetBinContent(51,13937.92);
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
