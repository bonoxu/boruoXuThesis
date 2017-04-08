{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:01:20 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.183858,1.31746,5.706681);
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
   
   TH1F *THStack_stack_17 = new TH1F("THStack_stack_17","",50,0,1);
   THStack_stack_17->SetMinimum(0.0260879);
   THStack_stack_17->SetMaximum(98954.95);
   THStack_stack_17->SetDirectory(0);
   THStack_stack_17->SetStats(0);
   THStack_stack_17->SetLineWidth(2);
   THStack_stack_17->SetMarkerSize(1.2);
   THStack_stack_17->GetXaxis()->SetTitle("Highest B tag of W jets");
   THStack_stack_17->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_17->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_17->GetXaxis()->SetLabelColor(ci);
   THStack_stack_17->GetXaxis()->SetLabelFont(42);
   THStack_stack_17->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_17->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_17->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_17->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_17->GetXaxis()->SetTitleColor(ci);
   THStack_stack_17->GetXaxis()->SetTitleFont(42);
   THStack_stack_17->GetYaxis()->SetTitle("Number of events");
   THStack_stack_17->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_17->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_17->GetYaxis()->SetLabelColor(ci);
   THStack_stack_17->GetYaxis()->SetLabelFont(42);
   THStack_stack_17->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_17->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_17->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_17->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_17->GetYaxis()->SetTitleColor(ci);
   THStack_stack_17->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_17->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_17->GetZaxis()->SetLabelColor(ci);
   THStack_stack_17->GetZaxis()->SetLabelFont(42);
   THStack_stack_17->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_17->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_17->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_17->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_17->GetZaxis()->SetTitleColor(ci);
   THStack_stack_17->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_17);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(1,0.00941);
   0->SetBinContent(2,0.1656161);
   0->SetBinContent(3,0.9541765);
   0->SetBinContent(4,1.759656);
   0->SetBinContent(5,2.019367);
   0->SetBinContent(6,1.697551);
   0->SetBinContent(7,1.349389);
   0->SetBinContent(8,1.04263);
   0->SetBinContent(9,0.897716);
   0->SetBinContent(10,0.5777732);
   0->SetBinContent(11,0.6003574);
   0->SetBinContent(12,0.5984753);
   0->SetBinContent(13,0.3820453);
   0->SetBinContent(14,0.3312316);
   0->SetBinContent(15,0.2408962);
   0->SetBinContent(16,0.1976102);
   0->SetBinContent(17,0.1938462);
   0->SetBinContent(18,0.1524421);
   0->SetBinContent(19,0.1411501);
   0->SetBinContent(20,0.1505601);
   0->SetBinContent(21,0.09598206);
   0->SetBinContent(22,0.08845405);
   0->SetBinContent(23,0.08280805);
   0->SetBinContent(24,0.06398803);
   0->SetBinContent(25,0.08469005);
   0->SetBinContent(26,0.06587003);
   0->SetBinContent(27,0.08280805);
   0->SetBinContent(28,0.06398803);
   0->SetBinContent(29,0.04516801);
   0->SetBinContent(30,0.06210603);
   0->SetBinContent(31,0.05834202);
   0->SetBinContent(32,0.05457802);
   0->SetBinContent(33,0.04140401);
   0->SetBinContent(34,0.05834202);
   0->SetBinContent(35,0.03764001);
   0->SetBinContent(36,0.030112);
   0->SetBinContent(37,0.035758);
   0->SetBinContent(38,0.02823);
   0->SetBinContent(39,0.05834202);
   0->SetBinContent(40,0.022584);
   0->SetBinContent(41,0.030112);
   0->SetBinContent(42,0.04328601);
   0->SetBinContent(43,0.033876);
   0->SetBinContent(44,0.08657205);
   0->SetBinContent(45,0.06210603);
   0->SetBinContent(46,0.08092605);
   0->SetBinContent(47,0.07716204);
   0->SetBinContent(48,0.1317401);
   0->SetBinContent(49,0.2898279);
   0->SetBinContent(50,1.221416);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,1);
   1->SetBinContent(1,0.011292);
   1->SetBinContent(2,0.010351);
   1->SetBinContent(3,0.07810306);
   1->SetBinContent(4,0.1863177);
   1->SetBinContent(5,0.2681844);
   1->SetBinContent(6,0.3161758);
   1->SetBinContent(7,0.2973557);
   1->SetBinContent(8,0.3265269);
   1->SetBinContent(9,0.3039427);
   1->SetBinContent(10,0.2578333);
   1->SetBinContent(11,0.2089015);
   1->SetBinContent(12,0.2465412);
   1->SetBinContent(13,0.1571469);
   1->SetBinContent(14,0.1684388);
   1->SetBinContent(15,0.1900816);
   1->SetBinContent(16,0.1543239);
   1->SetBinContent(17,0.139268);
   1->SetBinContent(18,0.1242121);
   1->SetBinContent(19,0.1091561);
   1->SetBinContent(20,0.1148021);
   1->SetBinContent(21,0.1185661);
   1->SetBinContent(22,0.1006871);
   1->SetBinContent(23,0.1148021);
   1->SetBinContent(24,0.1082151);
   1->SetBinContent(25,0.09692308);
   1->SetBinContent(26,0.08374906);
   1->SetBinContent(27,0.08469006);
   1->SetBinContent(28,0.09880508);
   1->SetBinContent(29,0.08469006);
   1->SetBinContent(30,0.07998506);
   1->SetBinContent(31,0.07339805);
   1->SetBinContent(32,0.08469006);
   1->SetBinContent(33,0.08657207);
   1->SetBinContent(34,0.08374906);
   1->SetBinContent(35,0.06492905);
   1->SetBinContent(36,0.07339805);
   1->SetBinContent(37,0.06492905);
   1->SetBinContent(38,0.06304704);
   1->SetBinContent(39,0.09504107);
   1->SetBinContent(40,0.08092606);
   1->SetBinContent(41,0.09221807);
   1->SetBinContent(42,0.1016281);
   1->SetBinContent(43,0.09786408);
   1->SetBinContent(44,0.1157431);
   1->SetBinContent(45,0.137386);
   1->SetBinContent(46,0.1731438);
   1->SetBinContent(47,0.2343083);
   1->SetBinContent(48,0.3453471);
   1->SetBinContent(49,0.6144719);
   1->SetBinContent(50,3.084672);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,1);
   2->SetBinContent(1,0.08469006);
   2->SetBinContent(2,0.2117245);
   2->SetBinContent(3,1.273174);
   2->SetBinContent(4,2.280085);
   2->SetBinContent(5,2.545458);
   2->SetBinContent(6,2.273498);
   2->SetBinContent(7,1.95825);
   2->SetBinContent(8,1.473615);
   2->SetBinContent(9,1.320226);
   2->SetBinContent(10,0.9202899);
   2->SetBinContent(11,0.8826507);
   2->SetBinContent(12,1.149898);
   2->SetBinContent(13,0.5937703);
   2->SetBinContent(14,0.446976);
   2->SetBinContent(15,0.4309788);
   2->SetBinContent(16,0.3218219);
   2->SetBinContent(17,0.3095888);
   2->SetBinContent(18,0.2465412);
   2->SetBinContent(19,0.2465412);
   2->SetBinContent(20,0.2380723);
   2->SetBinContent(21,0.2060785);
   2->SetBinContent(22,0.1637338);
   2->SetBinContent(23,0.1740848);
   2->SetBinContent(24,0.1515009);
   2->SetBinContent(25,0.1590289);
   2->SetBinContent(26,0.1458549);
   2->SetBinContent(27,0.1213891);
   2->SetBinContent(28,0.1119791);
   2->SetBinContent(29,0.1213891);
   2->SetBinContent(30,0.09598207);
   2->SetBinContent(31,0.09504107);
   2->SetBinContent(32,0.09221807);
   2->SetBinContent(33,0.07622106);
   2->SetBinContent(34,0.09033607);
   2->SetBinContent(35,0.09315907);
   2->SetBinContent(36,0.06963405);
   2->SetBinContent(37,0.06398804);
   2->SetBinContent(38,0.06304704);
   2->SetBinContent(39,0.07998506);
   2->SetBinContent(40,0.06210604);
   2->SetBinContent(41,0.09504107);
   2->SetBinContent(42,0.07716206);
   2->SetBinContent(43,0.1053921);
   2->SetBinContent(44,0.07433905);
   2->SetBinContent(45,0.1458549);
   2->SetBinContent(46,0.1863177);
   2->SetBinContent(47,0.1825537);
   2->SetBinContent(48,0.3180578);
   2->SetBinContent(49,0.5871835);
   2->SetBinContent(50,2.978335);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,1);
   3->SetBinContent(1,0.2868179);
   3->SetBinContent(2,0.6214391);
   3->SetBinContent(3,3.892541);
   3->SetBinContent(4,6.699175);
   3->SetBinContent(5,8.092254);
   3->SetBinContent(6,7.033786);
   3->SetBinContent(7,5.907036);
   3->SetBinContent(8,4.548108);
   3->SetBinContent(9,4.179354);
   3->SetBinContent(10,3.195981);
   3->SetBinContent(11,3.175494);
   3->SetBinContent(12,4.097408);
   3->SetBinContent(13,2.055534);
   3->SetBinContent(14,1.953099);
   3->SetBinContent(15,1.447751);
   3->SetBinContent(16,1.516041);
   3->SetBinContent(17,1.45458);
   3->SetBinContent(18,1.181419);
   3->SetBinContent(19,1.338487);
   3->SetBinContent(20,1.031181);
   3->SetBinContent(21,1.119958);
   3->SetBinContent(22,0.9492322);
   3->SetBinContent(23,0.9492322);
   3->SetBinContent(24,0.9970354);
   3->SetBinContent(25,0.7785066);
   3->SetBinContent(26,0.9082581);
   3->SetBinContent(27,0.7307035);
   3->SetBinContent(28,0.8536259);
   3->SetBinContent(29,0.7921647);
   3->SetBinContent(30,0.6350971);
   3->SetBinContent(31,0.6760713);
   3->SetBinContent(32,0.587294);
   3->SetBinContent(33,0.6624132);
   3->SetBinContent(34,0.6146101);
   3->SetBinContent(35,0.4029108);
   3->SetBinContent(36,0.587294);
   3->SetBinContent(37,0.5599779);
   3->SetBinContent(38,0.587294);
   3->SetBinContent(39,0.4848587);
   3->SetBinContent(40,0.6692423);
   3->SetBinContent(41,0.5190037);
   3->SetBinContent(42,0.6624132);
   3->SetBinContent(43,0.8536259);
   3->SetBinContent(44,0.7853357);
   3->SetBinContent(45,1.017522);
   3->SetBinContent(46,1.195077);
   3->SetBinContent(47,1.673109);
   3->SetBinContent(48,2.410643);
   3->SetBinContent(49,4.554937);
   3->SetBinContent(50,22.61034);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,1);
   4->SetBinContent(1,0.6260593);
   4->SetBinContent(2,0.6681473);
   4->SetBinContent(3,3.577453);
   4->SetBinContent(4,7.554728);
   4->SetBinContent(5,10.29063);
   4->SetBinContent(6,10.67997);
   4->SetBinContent(7,10.87464);
   4->SetBinContent(8,9.848667);
   4->SetBinContent(9,9.201512);
   4->SetBinContent(10,7.365334);
   4->SetBinContent(11,7.475813);
   4->SetBinContent(12,9.617165);
   4->SetBinContent(13,5.139954);
   4->SetBinContent(14,4.487597);
   4->SetBinContent(15,3.577453);
   4->SetBinContent(16,3.261797);
   4->SetBinContent(17,2.767268);
   4->SetBinContent(18,2.651527);
   4->SetBinContent(19,2.172781);
   4->SetBinContent(20,2.093867);
   4->SetBinContent(21,2.093867);
   4->SetBinContent(22,1.809776);
   4->SetBinContent(23,1.578295);
   4->SetBinContent(24,1.504641);
   4->SetBinContent(25,1.325769);
   4->SetBinContent(26,1.078505);
   4->SetBinContent(27,1.120592);
   4->SetBinContent(28,1.0522);
   4->SetBinContent(29,0.9890686);
   4->SetBinContent(30,0.9732856);
   4->SetBinContent(31,0.8154554);
   4->SetBinContent(32,0.7154964);
   4->SetBinContent(33,0.7891504);
   4->SetBinContent(34,0.7944114);
   4->SetBinContent(35,0.6628863);
   4->SetBinContent(36,0.6155373);
   4->SetBinContent(37,0.6102763);
   4->SetBinContent(38,0.5839713);
   4->SetBinContent(39,0.6523643);
   4->SetBinContent(40,0.5261002);
   4->SetBinContent(41,0.6997133);
   4->SetBinContent(42,0.7996724);
   4->SetBinContent(43,0.7733674);
   4->SetBinContent(44,0.8101944);
   4->SetBinContent(45,1.089027);
   4->SetBinContent(46,1.262638);
   4->SetBinContent(47,1.530946);
   4->SetBinContent(48,2.535786);
   4->SetBinContent(49,4.797993);
   4->SetBinContent(50,24.22138);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,1);
   5->SetBinContent(1,0.9424751);
   5->SetBinContent(2,6.188132);
   5->SetBinContent(3,30.33332);
   5->SetBinContent(4,53.94593);
   5->SetBinContent(5,58.57172);
   5->SetBinContent(6,51.27959);
   5->SetBinContent(7,40.66384);
   5->SetBinContent(8,28.98155);
   5->SetBinContent(9,25.37269);
   5->SetBinContent(10,17.69611);
   5->SetBinContent(11,14.0874);
   5->SetBinContent(12,23.17761);
   5->SetBinContent(13,7.96149);
   5->SetBinContent(14,6.039319);
   5->SetBinContent(15,5.022428);
   5->SetBinContent(16,4.290763);
   5->SetBinContent(17,3.80712);
   5->SetBinContent(18,3.087856);
   5->SetBinContent(19,2.988647);
   5->SetBinContent(20,2.67862);
   5->SetBinContent(21,2.4554);
   5->SetBinContent(22,2.318988);
   5->SetBinContent(23,2.331389);
   5->SetBinContent(24,2.306587);
   5->SetBinContent(25,1.822945);
   5->SetBinContent(26,1.872549);
   5->SetBinContent(27,1.959356);
   5->SetBinContent(28,1.63693);
   5->SetBinContent(29,1.574925);
   5->SetBinContent(30,1.649331);
   5->SetBinContent(31,1.463317);
   5->SetBinContent(32,1.438515);
   5->SetBinContent(33,1.215297);
   5->SetBinContent(34,1.426114);
   5->SetBinContent(35,1.140891);
   5->SetBinContent(36,1.078886);
   5->SetBinContent(37,1.351708);
   5->SetBinContent(38,1.326906);
   5->SetBinContent(39,1.450916);
   5->SetBinContent(40,1.326906);
   5->SetBinContent(41,1.37651);
   5->SetBinContent(42,1.525321);
   5->SetBinContent(43,1.798143);
   5->SetBinContent(44,1.63693);
   5->SetBinContent(45,2.542207);
   5->SetBinContent(46,2.777828);
   5->SetBinContent(47,3.91873);
   5->SetBinContent(48,6.138527);
   5->SetBinContent(49,12.54972);
   5->SetBinContent(50,60.92802);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,1);
   6->SetBinContent(1,19.50785);
   6->SetBinContent(2,78.86575);
   6->SetBinContent(3,393.5663);
   6->SetBinContent(4,809.5267);
   6->SetBinContent(5,1052.116);
   6->SetBinContent(6,1112.099);
   6->SetBinContent(7,989.4755);
   6->SetBinContent(8,824.6364);
   6->SetBinContent(9,740.5844);
   6->SetBinContent(10,493.9783);
   6->SetBinContent(11,437.8144);
   6->SetBinContent(12,654.6342);
   6->SetBinContent(13,272.7379);
   6->SetBinContent(14,214.8201);
   6->SetBinContent(15,179.5967);
   6->SetBinContent(16,152.7236);
   6->SetBinContent(17,136.782);
   6->SetBinContent(18,125.699);
   6->SetBinContent(19,112.6434);
   6->SetBinContent(20,103.0794);
   6->SetBinContent(21,96.39977);
   6->SetBinContent(22,87.59481);
   6->SetBinContent(23,79.09347);
   6->SetBinContent(24,70.51622);
   6->SetBinContent(25,69.45355);
   6->SetBinContent(26,59.2823);
   6->SetBinContent(27,56.77744);
   6->SetBinContent(28,56.92925);
   6->SetBinContent(29,48.2761);
   6->SetBinContent(30,52.07134);
   6->SetBinContent(31,47.13752);
   6->SetBinContent(32,45.164);
   6->SetBinContent(33,40.5338);
   6->SetBinContent(34,39.77475);
   6->SetBinContent(35,34.91684);
   6->SetBinContent(36,38.78799);
   6->SetBinContent(37,36.51085);
   6->SetBinContent(38,37.87713);
   6->SetBinContent(39,37.26989);
   6->SetBinContent(40,36.58675);
   6->SetBinContent(41,39.77475);
   6->SetBinContent(42,41.36876);
   6->SetBinContent(43,47.82067);
   6->SetBinContent(44,51.54);
   6->SetBinContent(45,60.11725);
   6->SetBinContent(46,80.76337);
   6->SetBinContent(47,109.3795);
   6->SetBinContent(48,162.2127);
   6->SetBinContent(49,315.6957);
   6->SetBinContent(50,1620.359);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,1);
   7->SetBinContent(1,8.397379);
   7->SetBinContent(2,66.15295);
   7->SetBinContent(3,286.9929);
   7->SetBinContent(4,491.1433);
   7->SetBinContent(5,535.2839);
   7->SetBinContent(6,471.2214);
   7->SetBinContent(7,393.5847);
   7->SetBinContent(8,302.6179);
   7->SetBinContent(9,272.8327);
   7->SetBinContent(10,197.9792);
   7->SetBinContent(11,308.2331);
   7->SetBinContent(12,496.2702);
   7->SetBinContent(13,189.7761);
   7->SetBinContent(14,140.2644);
   7->SetBinContent(15,119.0744);
   7->SetBinContent(16,97.4957);
   7->SetBinContent(17,86.70638);
   7->SetBinContent(18,75.18474);
   7->SetBinContent(19,65.27418);
   7->SetBinContent(20,60.73387);
   7->SetBinContent(21,56.34003);
   7->SetBinContent(22,49.26105);
   7->SetBinContent(23,43.50024);
   7->SetBinContent(24,40.0828);
   7->SetBinContent(25,35.68896);
   7->SetBinContent(26,32.2227);
   7->SetBinContent(27,28.90279);
   7->SetBinContent(28,26.65696);
   7->SetBinContent(29,21.77472);
   7->SetBinContent(30,20.40769);
   7->SetBinContent(31,19.57771);
   7->SetBinContent(32,18.35715);
   7->SetBinContent(33,16.64837);
   7->SetBinContent(34,14.79311);
   7->SetBinContent(35,14.64665);
   7->SetBinContent(36,13.13315);
   7->SetBinContent(37,12.54728);
   7->SetBinContent(38,12.30317);
   7->SetBinContent(39,12.1567);
   7->SetBinContent(40,12.59611);
   7->SetBinContent(41,12.01024);
   7->SetBinContent(42,12.25435);
   7->SetBinContent(43,13.13315);
   7->SetBinContent(44,16.30661);
   7->SetBinContent(45,16.16014);
   7->SetBinContent(46,20.84709);
   7->SetBinContent(47,27.34047);
   7->SetBinContent(48,39.64342);
   7->SetBinContent(49,68.49633);
   7->SetBinContent(50,351.1042);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,1);
   8->SetBinContent(1,0.587012);
   8->SetBinContent(2,3.815579);
   8->SetBinContent(3,12.47401);
   8->SetBinContent(4,19.66492);
   8->SetBinContent(5,23.04025);
   8->SetBinContent(6,26.26882);
   8->SetBinContent(7,20.10518);
   8->SetBinContent(8,16.43635);
   8->SetBinContent(9,15.55583);
   8->SetBinContent(10,11.44674);
   8->SetBinContent(11,20.10518);
   8->SetBinContent(12,32.43246);
   8->SetBinContent(13,11.887);
   8->SetBinContent(14,9.979204);
   8->SetBinContent(15,8.364918);
   8->SetBinContent(16,6.897388);
   8->SetBinContent(17,3.815579);
   8->SetBinContent(18,3.962332);
   8->SetBinContent(19,5.136354);
   8->SetBinContent(20,3.375319);
   8->SetBinContent(21,3.962332);
   8->SetBinContent(22,2.494801);
   8->SetBinContent(23,3.081813);
   8->SetBinContent(24,1.174024);
   8->SetBinContent(25,2.641554);
   8->SetBinContent(26,1.614283);
   8->SetBinContent(27,2.348048);
   8->SetBinContent(28,1.46753);
   8->SetBinContent(29,2.054542);
   8->SetBinContent(30,1.320777);
   8->SetBinContent(31,0.733765);
   8->SetBinContent(32,1.320777);
   8->SetBinContent(33,1.46753);
   8->SetBinContent(34,1.174024);
   8->SetBinContent(35,0.293506);
   8->SetBinContent(36,0.440259);
   8->SetBinContent(37,0.587012);
   8->SetBinContent(39,0.293506);
   8->SetBinContent(40,0.293506);
   8->SetBinContent(41,0.587012);
   8->SetBinContent(42,0.146753);
   8->SetBinContent(43,1.174024);
   8->SetBinContent(44,0.440259);
   8->SetBinContent(46,0.146753);
   8->SetBinContent(47,0.440259);
   8->SetBinContent(48,0.440259);
   8->SetBinContent(49,0.587012);
   8->SetBinContent(50,1.614283);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,1);
   9->SetBinContent(1,16.62959);
   9->SetBinContent(2,197.6671);
   9->SetBinContent(3,883.11);
   9->SetBinContent(4,1311.113);
   9->SetBinContent(5,1258.668);
   9->SetBinContent(6,1023.526);
   9->SetBinContent(7,788.6423);
   9->SetBinContent(8,636.7396);
   9->SetBinContent(9,583.7622);
   9->SetBinContent(10,442.8322);
   9->SetBinContent(11,420.2011);
   9->SetBinContent(12,539.1858);
   9->SetBinContent(13,277.8994);
   9->SetBinContent(14,245.6682);
   9->SetBinContent(15,201.61);
   9->SetBinContent(16,191.3241);
   9->SetBinContent(17,176.7523);
   9->SetBinContent(18,161.6663);
   9->SetBinContent(19,138.6943);
   9->SetBinContent(20,123.7795);
   9->SetBinContent(21,125.6653);
   9->SetBinContent(22,115.3789);
   9->SetBinContent(23,105.264);
   9->SetBinContent(24,106.464);
   9->SetBinContent(25,97.89204);
   9->SetBinContent(26,100.1208);
   9->SetBinContent(27,89.66291);
   9->SetBinContent(28,81.60522);
   9->SetBinContent(29,80.57658);
   9->SetBinContent(30,82.11954);
   9->SetBinContent(31,75.0905);
   9->SetBinContent(32,73.3761);
   9->SetBinContent(33,68.40434);
   9->SetBinContent(34,63.08969);
   9->SetBinContent(35,61.03241);
   9->SetBinContent(36,61.37529);
   9->SetBinContent(37,69.9473);
   9->SetBinContent(38,66.34705);
   9->SetBinContent(39,68.23289);
   9->SetBinContent(40,71.31882);
   9->SetBinContent(41,77.83354);
   9->SetBinContent(42,84.69115);
   9->SetBinContent(43,89.32003);
   9->SetBinContent(44,100.1208);
   9->SetBinContent(45,121.5508);
   9->SetBinContent(46,160.2948);
   9->SetBinContent(47,213.096);
   9->SetBinContent(48,310.1316);
   9->SetBinContent(49,586.1625);
   9->SetBinContent(50,3176.143);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,1);
   10->SetBinContent(1,69.71183);
   10->SetBinContent(2,439.3977);
   10->SetBinContent(3,1984.367);
   10->SetBinContent(4,3571.354);
   10->SetBinContent(5,4105.873);
   10->SetBinContent(6,3768.318);
   10->SetBinContent(7,3225.485);
   10->SetBinContent(8,2691.471);
   10->SetBinContent(9,2380.372);
   10->SetBinContent(10,1791.06);
   10->SetBinContent(11,2225.798);
   10->SetBinContent(12,3621.304);
   10->SetBinContent(13,1417.384);
   10->SetBinContent(14,1125.688);
   10->SetBinContent(15,935.473);
   10->SetBinContent(16,817.1411);
   10->SetBinContent(17,722.728);
   10->SetBinContent(18,635.8882);
   10->SetBinContent(19,581.2346);
   10->SetBinContent(20,535.6058);
   10->SetBinContent(21,481.8504);
   10->SetBinContent(22,440.5331);
   10->SetBinContent(23,410.5071);
   10->SetBinContent(24,377.3271);
   10->SetBinContent(25,337.0822);
   10->SetBinContent(26,308.8855);
   10->SetBinContent(27,299.1081);
   10->SetBinContent(28,268.6406);
   10->SetBinContent(29,261.7649);
   10->SetBinContent(30,233.1842);
   10->SetBinContent(31,217.2842);
   10->SetBinContent(32,199.7438);
   10->SetBinContent(33,191.2259);
   10->SetBinContent(34,185.5474);
   10->SetBinContent(35,165.7986);
   10->SetBinContent(36,166.4296);
   10->SetBinContent(37,159.6153);
   10->SetBinContent(38,158.7951);
   10->SetBinContent(39,159.2367);
   10->SetBinContent(40,153.3058);
   10->SetBinContent(41,163.7796);
   10->SetBinContent(42,180.3736);
   10->SetBinContent(43,192.1093);
   10->SetBinContent(44,213.0568);
   10->SetBinContent(45,246.0556);
   10->SetBinContent(46,316.1397);
   10->SetBinContent(47,434.6036);
   10->SetBinContent(48,647.9423);
   10->SetBinContent(49,1202.304);
   10->SetBinContent(50,6105.499);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,1);
   11->SetBinContent(1,117.0709);
   11->SetBinContent(2,87.80315);
   11->SetBinContent(3,365.8465);
   11->SetBinContent(4,687.7912);
   11->SetBinContent(5,848.7635);
   11->SetBinContent(6,760.9604);
   11->SetBinContent(7,731.6927);
   11->SetBinContent(8,643.8896);
   11->SetBinContent(9,775.5943);
   11->SetBinContent(10,526.8188);
   11->SetBinContent(11,819.4958);
   11->SetBinContent(12,1199.977);
   11->SetBinContent(13,497.5511);
   11->SetBinContent(14,263.4095);
   11->SetBinContent(15,219.5079);
   11->SetBinContent(16,263.4095);
   11->SetBinContent(17,292.6772);
   11->SetBinContent(18,219.5079);
   11->SetBinContent(19,117.0709);
   11->SetBinContent(20,146.3386);
   11->SetBinContent(21,190.2402);
   11->SetBinContent(22,175.6063);
   11->SetBinContent(23,58.53543);
   11->SetBinContent(24,14.63386);
   11->SetBinContent(25,43.90158);
   11->SetBinContent(26,29.26772);
   11->SetBinContent(27,43.90158);
   11->SetBinContent(28,58.53543);
   11->SetBinContent(29,14.63386);
   11->SetBinContent(30,43.90158);
   11->SetBinContent(31,29.26772);
   11->SetBinContent(32,43.90158);
   11->SetBinContent(33,29.26772);
   11->SetBinContent(34,14.63386);
   11->SetBinContent(35,29.26772);
   11->SetBinContent(36,14.63386);
   11->SetBinContent(37,29.26772);
   11->SetBinContent(38,14.63386);
   11->SetBinContent(39,14.63386);
   11->SetBinContent(40,14.63386);
   11->SetBinContent(41,43.90158);
   11->SetBinContent(42,29.26772);
   11->SetBinContent(43,29.26772);
   11->SetBinContent(44,58.53543);
   11->SetBinContent(45,29.26772);
   11->SetBinContent(46,43.90158);
   11->SetBinContent(47,14.63386);
   11->SetBinContent(48,87.80315);
   11->SetBinContent(49,73.1693);
   11->SetBinContent(50,307.3111);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,1);
   12->SetBinContent(1,615.3177);
   12->SetBinContent(2,336.2043);
   12->SetBinContent(3,1554.156);
   12->SetBinContent(4,2118.729);
   12->SetBinContent(5,3412.804);
   12->SetBinContent(6,4351.633);
   12->SetBinContent(7,4941.556);
   12->SetBinContent(8,4770.288);
   12->SetBinContent(9,5525.136);
   12->SetBinContent(10,3152.72);
   12->SetBinContent(11,4846.407);
   12->SetBinContent(12,9204.306);
   12->SetBinContent(13,2721.362);
   12->SetBinContent(14,1928.423);
   12->SetBinContent(15,1598.561);
   12->SetBinContent(16,1262.355);
   12->SetBinContent(17,1002.272);
   12->SetBinContent(18,951.5235);
   12->SetBinContent(19,850.0274);
   12->SetBinContent(20,856.3709);
   12->SetBinContent(21,583.6002);
   12->SetBinContent(22,583.6002);
   12->SetBinContent(23,494.7911);
   12->SetBinContent(24,380.6086);
   12->SetBinContent(25,418.6694);
   12->SetBinContent(26,279.113);
   12->SetBinContent(27,253.7391);
   12->SetBinContent(28,266.426);
   12->SetBinContent(29,228.3652);
   12->SetBinContent(30,202.9913);
   12->SetBinContent(31,158.5869);
   12->SetBinContent(32,126.8695);
   12->SetBinContent(33,202.9913);
   12->SetBinContent(34,95.15217);
   12->SetBinContent(35,158.5869);
   12->SetBinContent(36,133.213);
   12->SetBinContent(37,88.80869);
   12->SetBinContent(38,50.74783);
   12->SetBinContent(39,88.80869);
   12->SetBinContent(40,50.74783);
   12->SetBinContent(41,50.74783);
   12->SetBinContent(42,76.12174);
   12->SetBinContent(43,44.40435);
   12->SetBinContent(44,82.46522);
   12->SetBinContent(45,82.46522);
   12->SetBinContent(46,76.12174);
   12->SetBinContent(47,69.77827);
   12->SetBinContent(48,158.5869);
   12->SetBinContent(49,145.9);
   12->SetBinContent(50,761.2183);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,1);
   13->SetBinContent(1,1305.192);
   13->SetBinContent(2,407.8725);
   13->SetBinContent(3,1631.49);
   13->SetBinContent(4,3426.128);
   13->SetBinContent(5,4976.045);
   13->SetBinContent(6,5791.792);
   13->SetBinContent(7,6770.688);
   13->SetBinContent(8,6525.964);
   13->SetBinContent(9,5220.769);
   13->SetBinContent(10,5302.344);
   13->SetBinContent(11,6281.24);
   13->SetBinContent(12,11257.28);
   13->SetBinContent(13,3099.83);
   13->SetBinContent(14,2039.362);
   13->SetBinContent(15,2120.936);
   13->SetBinContent(16,1386.766);
   13->SetBinContent(17,1223.617);
   13->SetBinContent(18,1386.766);
   13->SetBinContent(19,1631.49);
   13->SetBinContent(20,897.3193);
   13->SetBinContent(21,571.0215);
   13->SetBinContent(22,1060.468);
   13->SetBinContent(23,978.8938);
   13->SetBinContent(24,244.7235);
   13->SetBinContent(25,734.1704);
   13->SetBinContent(26,652.5959);
   13->SetBinContent(27,489.447);
   13->SetBinContent(28,571.0215);
   13->SetBinContent(29,652.5959);
   13->SetBinContent(30,326.298);
   13->SetBinContent(31,81.57449);
   13->SetBinContent(32,163.149);
   13->SetBinContent(33,326.298);
   13->SetBinContent(34,163.149);
   13->SetBinContent(35,163.149);
   13->SetBinContent(36,163.149);
   13->SetBinContent(37,81.57449);
   13->SetBinContent(38,163.149);
   13->SetBinContent(39,81.57449);
   13->SetBinContent(40,163.149);
   13->SetBinContent(42,244.7235);
   13->SetBinContent(43,326.298);
   13->SetBinContent(44,244.7235);
   13->SetBinContent(45,81.57449);
   13->SetBinContent(46,326.298);
   13->SetBinContent(47,489.447);
   13->SetBinContent(48,326.298);
   13->SetBinContent(49,1223.617);
   13->SetBinContent(50,2691.958);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,1);
   14->SetBinContent(1,709.1884);
   14->SetBinContent(2,463.3902);
   14->SetBinContent(3,1152.429);
   14->SetBinContent(4,1861.607);
   14->SetBinContent(5,2272.615);
   14->SetBinContent(6,2353.205);
   14->SetBinContent(7,2719.894);
   14->SetBinContent(8,2538.564);
   14->SetBinContent(9,2744.071);
   14->SetBinContent(10,2083.226);
   14->SetBinContent(11,2296.792);
   14->SetBinContent(12,5048.911);
   14->SetBinContent(13,1555.371);
   14->SetBinContent(14,1075.87);
   14->SetBinContent(15,822.0139);
   14->SetBinContent(16,785.7485);
   14->SetBinContent(17,620.5399);
   14->SetBinContent(18,576.2156);
   14->SetBinContent(19,539.9503);
   14->SetBinContent(20,568.1566);
   14->SetBinContent(21,499.6555);
   14->SetBinContent(22,378.7711);
   14->SetBinContent(23,310.2699);
   14->SetBinContent(24,286.093);
   14->SetBinContent(25,286.093);
   14->SetBinContent(26,282.0636);
   14->SetBinContent(27,221.6214);
   14->SetBinContent(28,261.9162);
   14->SetBinContent(29,217.5919);
   14->SetBinContent(30,189.3855);
   14->SetBinContent(31,201.474);
   14->SetBinContent(32,165.2087);
   14->SetBinContent(33,173.2676);
   14->SetBinContent(34,165.2087);
   14->SetBinContent(35,120.8844);
   14->SetBinContent(36,177.2971);
   14->SetBinContent(37,128.9433);
   14->SetBinContent(38,145.0613);
   14->SetBinContent(39,157.1497);
   14->SetBinContent(40,149.0907);
   14->SetBinContent(41,169.2381);
   14->SetBinContent(42,185.3561);
   14->SetBinContent(43,229.6803);
   14->SetBinContent(44,173.2676);
   14->SetBinContent(45,274.0046);
   14->SetBinContent(46,330.4173);
   14->SetBinContent(47,394.889);
   14->SetBinContent(48,616.5104);
   14->SetBinContent(49,1196.753);
   14->SetBinContent(50,6201.29);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,1);
   15->SetBinContent(1,146.7882);
   15->SetBinContent(2,19.31424);
   15->SetBinContent(3,84.98263);
   15->SetBinContent(4,81.11978);
   15->SetBinContent(5,127.4739);
   15->SetBinContent(6,166.1025);
   15->SetBinContent(7,185.4167);
   15->SetBinContent(8,166.1025);
   15->SetBinContent(9,301.3024);
   15->SetBinContent(10,216.3196);
   15->SetBinContent(11,193.1425);
   15->SetBinContent(12,394.0109);
   15->SetBinContent(13,100.434);
   15->SetBinContent(14,73.39409);
   15->SetBinContent(15,104.2969);
   15->SetBinContent(16,61.80555);
   15->SetBinContent(17,46.35416);
   15->SetBinContent(18,27.03993);
   15->SetBinContent(19,50.21701);
   15->SetBinContent(20,27.03993);
   15->SetBinContent(21,57.9427);
   15->SetBinContent(22,23.17708);
   15->SetBinContent(23,23.17708);
   15->SetBinContent(24,23.17708);
   15->SetBinContent(25,34.76562);
   15->SetBinContent(26,15.45139);
   15->SetBinContent(27,19.31424);
   15->SetBinContent(28,27.03993);
   15->SetBinContent(29,15.45139);
   15->SetBinContent(30,19.31424);
   15->SetBinContent(31,11.58854);
   15->SetBinContent(32,23.17708);
   15->SetBinContent(33,19.31424);
   15->SetBinContent(34,7.725694);
   15->SetBinContent(35,11.58854);
   15->SetBinContent(36,3.862847);
   15->SetBinContent(37,3.862847);
   15->SetBinContent(38,3.862847);
   15->SetBinContent(39,7.725694);
   15->SetBinContent(40,19.31424);
   15->SetBinContent(41,3.862847);
   15->SetBinContent(43,3.862847);
   15->SetBinContent(44,3.862847);
   15->SetBinContent(45,19.31424);
   15->SetBinContent(46,23.17708);
   15->SetBinContent(47,7.725694);
   15->SetBinContent(48,30.90277);
   15->SetBinContent(49,92.70832);
   15->SetBinContent(50,247.2224);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,1);
   16->SetBinContent(1,1047.911);
   16->SetBinContent(2,647.2388);
   16->SetBinContent(3,1904.732);
   16->SetBinContent(4,2798.524);
   16->SetBinContent(5,3803.267);
   16->SetBinContent(6,4364.196);
   16->SetBinContent(7,4314.884);
   16->SetBinContent(8,4006.681);
   16->SetBinContent(9,4653.907);
   16->SetBinContent(10,3211.517);
   16->SetBinContent(11,4203.931);
   16->SetBinContent(12,9073.54);
   16->SetBinContent(13,2280.743);
   16->SetBinContent(14,1510.225);
   16->SetBinContent(15,1368.448);
   16->SetBinContent(16,1189.687);
   16->SetBinContent(17,961.6122);
   16->SetBinContent(18,739.7015);
   16->SetBinContent(19,770.5225);
   16->SetBinContent(20,684.2239);
   16->SetBinContent(21,493.1342);
   16->SetBinContent(22,579.4327);
   16->SetBinContent(23,437.6565);
   16->SetBinContent(24,480.8058);
   16->SetBinContent(25,314.3728);
   16->SetBinContent(26,295.8802);
   16->SetBinContent(27,197.2534);
   16->SetBinContent(28,203.4176);
   16->SetBinContent(29,246.5668);
   16->SetBinContent(30,166.4326);
   16->SetBinContent(31,178.7609);
   16->SetBinContent(32,147.9401);
   16->SetBinContent(33,104.7909);
   16->SetBinContent(34,73.97004);
   16->SetBinContent(35,104.7909);
   16->SetBinContent(36,55.47753);
   16->SetBinContent(37,73.97004);
   16->SetBinContent(38,55.47753);
   16->SetBinContent(39,55.47753);
   16->SetBinContent(40,30.82085);
   16->SetBinContent(41,43.14919);
   16->SetBinContent(42,43.14919);
   16->SetBinContent(43,43.14919);
   16->SetBinContent(44,61.6417);
   16->SetBinContent(45,30.82085);
   16->SetBinContent(46,49.31336);
   16->SetBinContent(47,135.6117);
   16->SetBinContent(48,67.80587);
   16->SetBinContent(49,49.31336);
   16->SetBinContent(50,73.97004);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,1);
   17->SetBinContent(1,1100.983);
   17->SetBinContent(2,327.9524);
   17->SetBinContent(3,1780.313);
   17->SetBinContent(4,2436.22);
   17->SetBinContent(5,2483.071);
   17->SetBinContent(6,2811.025);
   17->SetBinContent(7,2600.197);
   17->SetBinContent(8,2365.944);
   17->SetBinContent(9,2811.025);
   17->SetBinContent(10,2037.99);
   17->SetBinContent(11,2787.599);
   17->SetBinContent(12,4825.6);
   17->SetBinContent(13,1171.259);
   17->SetBinContent(14,1030.708);
   17->SetBinContent(15,1171.259);
   17->SetBinContent(16,726.1804);
   17->SetBinContent(17,655.9048);
   17->SetBinContent(18,585.6293);
   17->SetBinContent(19,585.6293);
   17->SetBinContent(20,515.3538);
   17->SetBinContent(21,445.0783);
   17->SetBinContent(22,281.1021);
   17->SetBinContent(23,327.9524);
   17->SetBinContent(24,374.8028);
   17->SetBinContent(25,304.5273);
   17->SetBinContent(26,210.8266);
   17->SetBinContent(27,374.8028);
   17->SetBinContent(28,140.5511);
   17->SetBinContent(29,257.6769);
   17->SetBinContent(30,163.9762);
   17->SetBinContent(31,187.4014);
   17->SetBinContent(32,117.1259);
   17->SetBinContent(33,187.4014);
   17->SetBinContent(34,117.1259);
   17->SetBinContent(35,140.5511);
   17->SetBinContent(36,187.4014);
   17->SetBinContent(37,117.1259);
   17->SetBinContent(38,70.27553);
   17->SetBinContent(39,93.70071);
   17->SetBinContent(40,281.1021);
   17->SetBinContent(41,163.9762);
   17->SetBinContent(42,257.6769);
   17->SetBinContent(43,187.4014);
   17->SetBinContent(44,374.8028);
   17->SetBinContent(45,257.6769);
   17->SetBinContent(46,351.3776);
   17->SetBinContent(47,398.2279);
   17->SetBinContent(48,609.0545);
   17->SetBinContent(49,1405.51);
   17->SetBinContent(50,5856.312);
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
