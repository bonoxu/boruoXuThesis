{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 01:03:32 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.8478413,-3.038441,4.13946,5.188897);
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
   
   TH1F *THStack_stack_23 = new TH1F("THStack_stack_23","",50,0,3.142);
   THStack_stack_23->SetMinimum(0.02769999);
   THStack_stack_23->SetMaximum(33939.87);
   THStack_stack_23->SetDirectory(0);
   THStack_stack_23->SetStats(0);
   THStack_stack_23->SetLineWidth(2);
   THStack_stack_23->SetMarkerSize(1.2);
   THStack_stack_23->GetXaxis()->SetTitle("Acolinearity of H#rightarrowbb sub-jets");
   THStack_stack_23->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_23->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_23->GetXaxis()->SetLabelColor(ci);
   THStack_stack_23->GetXaxis()->SetLabelFont(42);
   THStack_stack_23->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_23->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_23->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_23->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_23->GetXaxis()->SetTitleColor(ci);
   THStack_stack_23->GetXaxis()->SetTitleFont(42);
   THStack_stack_23->GetYaxis()->SetTitle("Number of events");
   THStack_stack_23->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_23->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_23->GetYaxis()->SetLabelColor(ci);
   THStack_stack_23->GetYaxis()->SetLabelFont(42);
   THStack_stack_23->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_23->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_23->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_23->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_23->GetYaxis()->SetTitleColor(ci);
   THStack_stack_23->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_23->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_23->GetZaxis()->SetLabelColor(ci);
   THStack_stack_23->GetZaxis()->SetLabelFont(42);
   THStack_stack_23->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_23->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_23->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_23->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_23->GetZaxis()->SetTitleColor(ci);
   THStack_stack_23->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_23);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,3.142);
   0->SetBinContent(1,0.015056);
   0->SetBinContent(2,0.020702);
   0->SetBinContent(3,0.05457802);
   0->SetBinContent(4,0.05834202);
   0->SetBinContent(5,0.08657205);
   0->SetBinContent(6,0.06398803);
   0->SetBinContent(7,0.1148021);
   0->SetBinContent(8,0.1317401);
   0->SetBinContent(9,0.1449141);
   0->SetBinContent(10,0.1637341);
   0->SetBinContent(11,0.1562061);
   0->SetBinContent(12,0.2220762);
   0->SetBinContent(13,0.2145482);
   0->SetBinContent(14,0.2484242);
   0->SetBinContent(15,0.2503062);
   0->SetBinContent(16,0.2540702);
   0->SetBinContent(17,0.278536);
   0->SetBinContent(18,0.3048838);
   0->SetBinContent(19,0.280418);
   0->SetBinContent(20,0.2446602);
   0->SetBinContent(21,0.3707533);
   0->SetBinContent(22,0.3086478);
   0->SetBinContent(23,0.3763993);
   0->SetBinContent(24,0.3971012);
   0->SetBinContent(25,0.3745173);
   0->SetBinContent(26,0.3782813);
   0->SetBinContent(27,0.3669894);
   0->SetBinContent(28,0.4290949);
   0->SetBinContent(29,0.4686167);
   0->SetBinContent(30,0.4704987);
   0->SetBinContent(31,0.5344868);
   0->SetBinContent(32,0.5401328);
   0->SetBinContent(33,0.5965933);
   0->SetBinContent(34,0.5871832);
   0->SetBinContent(35,0.6304696);
   0->SetBinContent(36,0.6944582);
   0->SetBinContent(37,0.6906942);
   0->SetBinContent(38,0.6568179);
   0->SetBinContent(39,0.6925762);
   0->SetBinContent(40,0.7019863);
   0->SetBinContent(41,0.7396266);
   0->SetBinContent(42,0.6135315);
   0->SetBinContent(43,0.564599);
   0->SetBinContent(44,0.4083931);
   0->SetBinContent(45,0.276654);
   0->SetBinContent(46,0.1938462);
   0->SetBinContent(47,0.1223301);
   0->SetBinContent(48,0.06963404);
   0->SetBinContent(49,0.07339804);
   0->SetBinContent(50,0.04328601);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,3.142);
   1->SetBinContent(1,0.011292);
   1->SetBinContent(2,0.02446601);
   1->SetBinContent(3,0.03764002);
   1->SetBinContent(4,0.05269603);
   1->SetBinContent(5,0.07622106);
   1->SetBinContent(6,0.09221807);
   1->SetBinContent(7,0.09410007);
   1->SetBinContent(8,0.134563);
   1->SetBinContent(9,0.1458549);
   1->SetBinContent(10,0.1674978);
   1->SetBinContent(11,0.1740848);
   1->SetBinContent(12,0.2023146);
   1->SetBinContent(13,0.1844357);
   1->SetBinContent(14,0.1834947);
   1->SetBinContent(15,0.2032555);
   1->SetBinContent(16,0.2211344);
   1->SetBinContent(17,0.2296034);
   1->SetBinContent(18,0.2248984);
   1->SetBinContent(19,0.2267804);
   1->SetBinContent(20,0.2314854);
   1->SetBinContent(21,0.2371313);
   1->SetBinContent(22,0.2503052);
   1->SetBinContent(23,0.2719484);
   1->SetBinContent(24,0.2399543);
   1->SetBinContent(25,0.2606563);
   1->SetBinContent(26,0.2427773);
   1->SetBinContent(27,0.2493642);
   1->SetBinContent(28,0.3058247);
   1->SetBinContent(29,0.2982967);
   1->SetBinContent(30,0.2728894);
   1->SetBinContent(31,0.2851225);
   1->SetBinContent(32,0.3039427);
   1->SetBinContent(33,0.3142938);
   1->SetBinContent(34,0.332173);
   1->SetBinContent(35,0.337819);
   1->SetBinContent(36,0.3613442);
   1->SetBinContent(37,0.3519341);
   1->SetBinContent(38,0.3792234);
   1->SetBinContent(39,0.341583);
   1->SetBinContent(40,0.335937);
   1->SetBinContent(41,0.2879456);
   1->SetBinContent(42,0.3237039);
   1->SetBinContent(43,0.2794765);
   1->SetBinContent(44,0.1994916);
   1->SetBinContent(45,0.1072741);
   1->SetBinContent(46,0.09880508);
   1->SetBinContent(47,0.06775205);
   1->SetBinContent(48,0.03952202);
   1->SetBinContent(49,0.06304704);
   1->SetBinContent(50,0.04987303);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,3.142);
   2->SetBinContent(1,0.015997);
   2->SetBinContent(2,0.07622106);
   2->SetBinContent(3,0.1119791);
   2->SetBinContent(4,0.1467959);
   2->SetBinContent(5,0.1910226);
   2->SetBinContent(6,0.2333673);
   2->SetBinContent(7,0.2540693);
   2->SetBinContent(8,0.3039427);
   2->SetBinContent(9,0.337819);
   2->SetBinContent(10,0.3735773);
   2->SetBinContent(11,0.4272148);
   2->SetBinContent(12,0.4300378);
   2->SetBinContent(13,0.4601501);
   2->SetBinContent(14,0.4855573);
   2->SetBinContent(15,0.4902624);
   2->SetBinContent(16,0.4799113);
   2->SetBinContent(17,0.5260199);
   2->SetBinContent(18,0.520374);
   2->SetBinContent(19,0.5363706);
   2->SetBinContent(20,0.5476624);
   2->SetBinContent(21,0.562718);
   2->SetBinContent(22,0.6201177);
   2->SetBinContent(23,0.5580131);
   2->SetBinContent(24,0.5740098);
   2->SetBinContent(25,0.5805966);
   2->SetBinContent(26,0.6304685);
   2->SetBinContent(27,0.653993);
   2->SetBinContent(28,0.6474061);
   2->SetBinContent(29,0.6455241);
   2->SetBinContent(30,0.7123336);
   2->SetBinContent(31,0.7687923);
   2->SetBinContent(32,0.7556186);
   2->SetBinContent(33,0.8337198);
   2->SetBinContent(34,0.8845327);
   2->SetBinContent(35,0.828074);
   2->SetBinContent(36,0.8459526);
   2->SetBinContent(37,0.8685361);
   2->SetBinContent(38,0.8779458);
   2->SetBinContent(39,1.014389);
   2->SetBinContent(40,0.9419324);
   2->SetBinContent(41,0.8845327);
   2->SetBinContent(42,0.8591263);
   2->SetBinContent(43,0.7320942);
   2->SetBinContent(44,0.6436422);
   2->SetBinContent(45,0.3801644);
   2->SetBinContent(46,0.2672434);
   2->SetBinContent(47,0.2089015);
   2->SetBinContent(48,0.1477369);
   2->SetBinContent(49,0.1515009);
   2->SetBinContent(50,0.1665568);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,3.142);
   3->SetBinContent(1,0.109264);
   3->SetBinContent(2,0.3482788);
   3->SetBinContent(3,0.6419262);
   3->SetBinContent(4,0.7238744);
   3->SetBinContent(5,0.8536259);
   3->SetBinContent(6,1.188248);
   3->SetBinContent(7,1.290683);
   3->SetBinContent(8,1.611647);
   3->SetBinContent(9,1.727741);
   3->SetBinContent(10,1.850663);
   3->SetBinContent(11,2.130653);
   3->SetBinContent(12,2.390156);
   3->SetBinContent(13,2.171627);
   3->SetBinContent(14,2.342353);
   3->SetBinContent(15,2.57454);
   3->SetBinContent(16,2.745265);
   3->SetBinContent(17,2.622343);
   3->SetBinContent(18,2.861359);
   3->SetBinContent(19,2.85453);
   3->SetBinContent(20,2.581369);
   3->SetBinContent(21,2.786239);
   3->SetBinContent(22,2.697462);
   3->SetBinContent(23,2.806726);
   3->SetBinContent(24,2.806726);
   3->SetBinContent(25,3.025255);
   3->SetBinContent(26,3.052571);
   3->SetBinContent(27,3.032084);
   3->SetBinContent(28,3.079887);
   3->SetBinContent(29,3.230126);
   3->SetBinContent(30,3.066229);
   3->SetBinContent(31,3.168665);
   3->SetBinContent(32,3.045742);
   3->SetBinContent(33,3.216468);
   3->SetBinContent(34,3.277929);
   3->SetBinContent(35,3.052571);
   3->SetBinContent(36,3.243784);
   3->SetBinContent(37,3.592064);
   3->SetBinContent(38,3.2711);
   3->SetBinContent(39,3.359877);
   3->SetBinContent(40,3.168665);
   3->SetBinContent(41,3.2711);
   3->SetBinContent(42,2.820385);
   3->SetBinContent(43,2.956965);
   3->SetBinContent(44,2.513078);
   3->SetBinContent(45,2.096508);
   3->SetBinContent(46,1.352145);
   3->SetBinContent(47,0.7033874);
   3->SetBinContent(48,0.3687658);
   3->SetBinContent(49,0.3141339);
   3->SetBinContent(50,0.5394908);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,3.142);
   4->SetBinContent(1,0.163091);
   4->SetBinContent(2,0.4524462);
   4->SetBinContent(3,0.8259774);
   4->SetBinContent(4,1.325769);
   4->SetBinContent(5,1.49938);
   4->SetBinContent(6,2.135955);
   4->SetBinContent(7,2.293783);
   4->SetBinContent(8,2.683093);
   4->SetBinContent(9,2.693615);
   4->SetBinContent(10,3.319667);
   4->SetBinContent(11,3.177622);
   4->SetBinContent(12,3.635324);
   4->SetBinContent(13,3.756325);
   4->SetBinContent(14,3.803674);
   4->SetBinContent(15,3.777369);
   4->SetBinContent(16,3.961502);
   4->SetBinContent(17,4.182462);
   4->SetBinContent(18,4.33503);
   4->SetBinContent(19,4.313986);
   4->SetBinContent(20,4.403422);
   4->SetBinContent(21,4.661208);
   4->SetBinContent(22,4.440248);
   4->SetBinContent(23,4.78221);
   4->SetBinContent(24,4.587555);
   4->SetBinContent(25,4.797993);
   4->SetBinContent(26,4.755905);
   4->SetBinContent(27,4.971604);
   4->SetBinContent(28,5.097867);
   4->SetBinContent(29,4.913733);
   4->SetBinContent(30,4.750644);
   4->SetBinContent(31,5.071562);
   4->SetBinContent(32,4.861124);
   4->SetBinContent(33,5.539786);
   4->SetBinContent(34,5.213607);
   4->SetBinContent(35,4.724339);
   4->SetBinContent(36,5.034735);
   4->SetBinContent(37,5.134693);
   4->SetBinContent(38,4.850602);
   4->SetBinContent(39,4.708557);
   4->SetBinContent(40,4.440248);
   4->SetBinContent(41,4.093026);
   4->SetBinContent(42,3.488017);
   4->SetBinContent(43,2.793573);
   4->SetBinContent(44,2.246434);
   4->SetBinContent(45,1.694035);
   4->SetBinContent(46,1.204767);
   4->SetBinContent(47,0.7628454);
   4->SetBinContent(48,0.5576662);
   4->SetBinContent(49,0.8049334);
   4->SetBinContent(50,1.020634);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,3.142);
   5->SetBinContent(1,0.3596289);
   5->SetBinContent(2,1.12849);
   5->SetBinContent(3,2.157773);
   5->SetBinContent(4,2.715823);
   5->SetBinContent(5,3.335878);
   5->SetBinContent(6,4.464378);
   5->SetBinContent(7,4.439576);
   5->SetBinContent(8,5.977313);
   5->SetBinContent(9,6.27494);
   5->SetBinContent(10,6.932198);
   5->SetBinContent(11,7.329033);
   5->SetBinContent(12,8.693129);
   5->SetBinContent(13,9.288359);
   5->SetBinContent(14,9.573573);
   5->SetBinContent(15,9.821586);
   5->SetBinContent(16,10.42922);
   5->SetBinContent(17,10.55322);
   5->SetBinContent(18,11.08645);
   5->SetBinContent(19,11.35926);
   5->SetBinContent(20,11.92969);
   5->SetBinContent(21,12.37611);
   5->SetBinContent(22,12.25211);
   5->SetBinContent(23,13.05815);
   5->SetBinContent(24,13.41777);
   5->SetBinContent(25,13.80219);
   5->SetBinContent(26,13.88899);
   5->SetBinContent(27,14.74463);
   5->SetBinContent(28,14.76944);
   5->SetBinContent(29,16.0591);
   5->SetBinContent(30,15.82349);
   5->SetBinContent(31,16.67918);
   5->SetBinContent(32,17.15044);
   5->SetBinContent(33,16.48076);
   5->SetBinContent(34,17.54729);
   5->SetBinContent(35,18.01855);
   5->SetBinContent(36,16.8404);
   5->SetBinContent(37,18.32859);
   5->SetBinContent(38,17.94415);
   5->SetBinContent(39,17.43568);
   5->SetBinContent(40,16.43115);
   5->SetBinContent(41,14.71983);
   5->SetBinContent(42,13.54177);
   5->SetBinContent(43,10.082);
   5->SetBinContent(44,6.547764);
   5->SetBinContent(45,4.352768);
   5->SetBinContent(46,3.906329);
   5->SetBinContent(47,2.815032);
   5->SetBinContent(48,1.736138);
   5->SetBinContent(49,2.802631);
   5->SetBinContent(50,4.042741);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,3.142);
   6->SetBinContent(1,15.5607);
   6->SetBinContent(2,45.61943);
   6->SetBinContent(3,78.25851);
   6->SetBinContent(4,101.03);
   6->SetBinContent(5,133.366);
   6->SetBinContent(6,162.9718);
   6->SetBinContent(7,190.6799);
   6->SetBinContent(8,213.2259);
   6->SetBinContent(9,226.6624);
   6->SetBinContent(10,243.8186);
   6->SetBinContent(11,265.1482);
   6->SetBinContent(12,273.4969);
   6->SetBinContent(13,291.7881);
   6->SetBinContent(14,297.3286);
   6->SetBinContent(15,298.2394);
   6->SetBinContent(16,308.3337);
   6->SetBinContent(17,313.7983);
   6->SetBinContent(18,307.6506);
   6->SetBinContent(19,313.3429);
   6->SetBinContent(20,313.7983);
   6->SetBinContent(21,316.6824);
   6->SetBinContent(22,319.0352);
   6->SetBinContent(23,316.3788);
   6->SetBinContent(24,310.1552);
   6->SetBinContent(25,322.9819);
   6->SetBinContent(26,319.1111);
   6->SetBinContent(27,322.4506);
   6->SetBinContent(28,334.2147);
   6->SetBinContent(29,339.7552);
   6->SetBinContent(30,341.5767);
   6->SetBinContent(31,346.7377);
   6->SetBinContent(32,354.0238);
   6->SetBinContent(33,354.1756);
   6->SetBinContent(34,353.2649);
   6->SetBinContent(35,359.2607);
   6->SetBinContent(36,361.31);
   6->SetBinContent(37,354.9346);
   6->SetBinContent(38,345.3716);
   6->SetBinContent(39,332.6967);
   6->SetBinContent(40,321.9193);
   6->SetBinContent(41,298.0876);
   6->SetBinContent(42,251.4099);
   6->SetBinContent(43,205.0273);
   6->SetBinContent(44,151.4331);
   6->SetBinContent(45,121.8279);
   6->SetBinContent(46,92.22501);
   6->SetBinContent(47,61.93897);
   6->SetBinContent(48,45.92305);
   6->SetBinContent(49,74.99461);
   6->SetBinContent(50,81.06699);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,3.142);
   7->SetBinContent(1,5.809813);
   7->SetBinContent(2,16.20896);
   7->SetBinContent(3,27.24283);
   7->SetBinContent(4,35.93306);
   7->SetBinContent(5,44.37901);
   7->SetBinContent(6,56.82823);
   7->SetBinContent(7,63.22372);
   7->SetBinContent(8,74.06187);
   7->SetBinContent(9,78.60217);
   7->SetBinContent(10,87.58514);
   7->SetBinContent(11,89.3915);
   7->SetBinContent(12,96.71458);
   7->SetBinContent(13,99.49734);
   7->SetBinContent(14,105.2582);
   7->SetBinContent(15,105.7464);
   7->SetBinContent(16,106.0881);
   7->SetBinContent(17,111.5072);
   7->SetBinContent(18,118.098);
   7->SetBinContent(19,116.1451);
   7->SetBinContent(20,117.3656);
   7->SetBinContent(21,124.0541);
   7->SetBinContent(22,125.1281);
   7->SetBinContent(23,126.9833);
   7->SetBinContent(24,130.0105);
   7->SetBinContent(25,131.9636);
   7->SetBinContent(26,128.3015);
   7->SetBinContent(27,134.0632);
   7->SetBinContent(28,138.8972);
   7->SetBinContent(29,134.6491);
   7->SetBinContent(30,141.5339);
   7->SetBinContent(31,140.8503);
   7->SetBinContent(32,146.5144);
   7->SetBinContent(33,148.2722);
   7->SetBinContent(34,149.0534);
   7->SetBinContent(35,153.0085);
   7->SetBinContent(36,152.5202);
   7->SetBinContent(37,160.3816);
   7->SetBinContent(38,162.4812);
   7->SetBinContent(39,164.1902);
   7->SetBinContent(40,171.9538);
   7->SetBinContent(41,180.4011);
   7->SetBinContent(42,179.0827);
   7->SetBinContent(43,184.2097);
   7->SetBinContent(44,183.8191);
   7->SetBinContent(45,174.0534);
   7->SetBinContent(46,157.8425);
   7->SetBinContent(47,77.43048);
   7->SetBinContent(48,41.20567);
   7->SetBinContent(49,66.10413);
   7->SetBinContent(50,79.1392);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,3.142);
   8->SetBinContent(1,1.027271);
   8->SetBinContent(2,2.494801);
   8->SetBinContent(3,1.907789);
   8->SetBinContent(4,4.109085);
   8->SetBinContent(5,4.842849);
   8->SetBinContent(6,3.962332);
   8->SetBinContent(7,4.989602);
   8->SetBinContent(8,6.310377);
   8->SetBinContent(9,4.549343);
   8->SetBinContent(10,6.016871);
   8->SetBinContent(11,6.163624);
   8->SetBinContent(12,4.989602);
   8->SetBinContent(13,6.016871);
   8->SetBinContent(14,6.163624);
   8->SetBinContent(15,5.283107);
   8->SetBinContent(16,4.696096);
   8->SetBinContent(17,3.522073);
   8->SetBinContent(18,4.696096);
   8->SetBinContent(19,3.081813);
   8->SetBinContent(20,4.989602);
   8->SetBinContent(21,3.668826);
   8->SetBinContent(22,3.668826);
   8->SetBinContent(23,5.136354);
   8->SetBinContent(24,3.522073);
   8->SetBinContent(25,5.723366);
   8->SetBinContent(26,4.842849);
   8->SetBinContent(27,4.255837);
   8->SetBinContent(28,2.494801);
   8->SetBinContent(29,4.40259);
   8->SetBinContent(30,4.696096);
   8->SetBinContent(31,4.109085);
   8->SetBinContent(32,4.989602);
   8->SetBinContent(33,2.93506);
   8->SetBinContent(34,4.255837);
   8->SetBinContent(35,6.163624);
   8->SetBinContent(36,6.163624);
   8->SetBinContent(37,8.511671);
   8->SetBinContent(38,7.4844);
   8->SetBinContent(39,7.924658);
   8->SetBinContent(40,8.218164);
   8->SetBinContent(41,9.098684);
   8->SetBinContent(42,7.631153);
   8->SetBinContent(43,9.832451);
   8->SetBinContent(44,13.94154);
   8->SetBinContent(45,16.72986);
   8->SetBinContent(46,15.55583);
   8->SetBinContent(47,9.245438);
   8->SetBinContent(48,4.109085);
   8->SetBinContent(49,5.576613);
   8->SetBinContent(50,4.989602);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,3.142);
   9->SetBinContent(1,12.17218);
   9->SetBinContent(2,31.54472);
   9->SetBinContent(3,52.46041);
   9->SetBinContent(4,76.8049);
   9->SetBinContent(5,92.92027);
   9->SetBinContent(6,104.0639);
   9->SetBinContent(7,125.151);
   9->SetBinContent(8,135.9514);
   9->SetBinContent(9,151.5517);
   9->SetBinContent(10,160.6377);
   9->SetBinContent(11,172.4665);
   9->SetBinContent(12,178.2952);
   9->SetBinContent(13,187.0383);
   9->SetBinContent(14,192.867);
   9->SetBinContent(15,204.353);
   9->SetBinContent(16,210.0102);
   9->SetBinContent(17,222.6962);
   9->SetBinContent(18,221.1533);
   9->SetBinContent(19,247.0396);
   9->SetBinContent(20,248.0682);
   9->SetBinContent(21,252.1826);
   9->SetBinContent(22,252.354);
   9->SetBinContent(23,267.4411);
   9->SetBinContent(24,272.2417);
   9->SetBinContent(25,277.3851);
   9->SetBinContent(26,290.0722);
   9->SetBinContent(27,290.0722);
   9->SetBinContent(28,306.7027);
   9->SetBinContent(29,310.8174);
   9->SetBinContent(30,313.0462);
   9->SetBinContent(31,323.676);
   9->SetBinContent(32,360.0229);
   9->SetBinContent(33,371.8528);
   9->SetBinContent(34,385.3972);
   9->SetBinContent(35,417.2865);
   9->SetBinContent(36,437.6888);
   9->SetBinContent(37,500.2672);
   9->SetBinContent(38,547.0724);
   9->SetBinContent(39,586.5054);
   9->SetBinContent(40,632.6248);
   9->SetBinContent(41,710.4621);
   9->SetBinContent(42,794.4715);
   9->SetBinContent(43,880.1954);
   9->SetBinContent(44,912.599);
   9->SetBinContent(45,850.5349);
   9->SetBinContent(46,701.7183);
   9->SetBinContent(47,400.656);
   9->SetBinContent(48,156.6947);
   9->SetBinContent(49,168.8664);
   9->SetBinContent(50,204.353);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,3.142);
   10->SetBinContent(1,62.01516);
   10->SetBinContent(2,189.8378);
   10->SetBinContent(3,310.2733);
   10->SetBinContent(4,440.9747);
   10->SetBinContent(5,550.4368);
   10->SetBinContent(6,670.094);
   10->SetBinContent(7,753.9045);
   10->SetBinContent(8,859.5513);
   10->SetBinContent(9,949.0417);
   10->SetBinContent(10,1008.933);
   10->SetBinContent(11,1085.991);
   10->SetBinContent(12,1147.839);
   10->SetBinContent(13,1191.575);
   10->SetBinContent(14,1230.072);
   10->SetBinContent(15,1273.997);
   10->SetBinContent(16,1304.353);
   10->SetBinContent(17,1311.737);
   10->SetBinContent(18,1343.481);
   10->SetBinContent(19,1345.375);
   10->SetBinContent(20,1343.608);
   10->SetBinContent(21,1370.24);
   10->SetBinContent(22,1369.167);
   10->SetBinContent(23,1371.061);
   10->SetBinContent(24,1367.148);
   10->SetBinContent(25,1365.128);
   10->SetBinContent(26,1349.288);
   10->SetBinContent(27,1353.2);
   10->SetBinContent(28,1360.521);
   10->SetBinContent(29,1352.443);
   10->SetBinContent(30,1334.267);
   10->SetBinContent(31,1325.116);
   10->SetBinContent(32,1326.947);
   10->SetBinContent(33,1305.552);
   10->SetBinContent(34,1305.615);
   10->SetBinContent(35,1287.376);
   10->SetBinContent(36,1282.896);
   10->SetBinContent(37,1273.366);
   10->SetBinContent(38,1247.175);
   10->SetBinContent(39,1234.742);
   10->SetBinContent(40,1214.547);
   10->SetBinContent(41,1167.214);
   10->SetBinContent(42,1120.386);
   10->SetBinContent(43,1061.757);
   10->SetBinContent(44,938.4392);
   10->SetBinContent(45,757.3756);
   10->SetBinContent(46,468.0359);
   10->SetBinContent(47,272.7408);
   10->SetBinContent(48,214.7604);
   10->SetBinContent(49,366.9189);
   10->SetBinContent(50,410.1286);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,3.142);
   11->SetBinContent(1,14.63386);
   11->SetBinContent(2,117.0709);
   11->SetBinContent(3,278.0434);
   11->SetBinContent(4,234.1418);
   11->SetBinContent(5,321.9449);
   11->SetBinContent(6,292.6772);
   11->SetBinContent(7,453.6496);
   11->SetBinContent(8,336.5788);
   11->SetBinContent(9,380.4803);
   11->SetBinContent(10,453.6496);
   11->SetBinContent(11,395.1142);
   11->SetBinContent(12,409.748);
   11->SetBinContent(13,424.3819);
   11->SetBinContent(14,336.5788);
   11->SetBinContent(15,321.9449);
   11->SetBinContent(16,307.3111);
   11->SetBinContent(17,321.9449);
   11->SetBinContent(18,307.3111);
   11->SetBinContent(19,263.4095);
   11->SetBinContent(20,307.3111);
   11->SetBinContent(21,117.0709);
   11->SetBinContent(22,204.8741);
   11->SetBinContent(23,160.9725);
   11->SetBinContent(24,131.7047);
   11->SetBinContent(25,117.0709);
   11->SetBinContent(26,146.3386);
   11->SetBinContent(27,248.7757);
   11->SetBinContent(28,117.0709);
   11->SetBinContent(29,219.5079);
   11->SetBinContent(30,160.9725);
   11->SetBinContent(31,102.437);
   11->SetBinContent(32,175.6063);
   11->SetBinContent(33,160.9725);
   11->SetBinContent(34,131.7047);
   11->SetBinContent(35,87.80315);
   11->SetBinContent(36,117.0709);
   11->SetBinContent(37,160.9725);
   11->SetBinContent(38,234.1418);
   11->SetBinContent(39,131.7047);
   11->SetBinContent(40,175.6063);
   11->SetBinContent(41,204.8741);
   11->SetBinContent(42,292.6772);
   11->SetBinContent(43,146.3386);
   11->SetBinContent(44,234.1418);
   11->SetBinContent(45,336.5788);
   11->SetBinContent(46,117.0709);
   11->SetBinContent(47,73.1693);
   11->SetBinContent(48,146.3386);
   11->SetBinContent(49,117.0709);
   11->SetBinContent(50,160.9725);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,3.142);
   12->SetBinContent(1,418.6694);
   12->SetBinContent(2,1059.363);
   12->SetBinContent(3,1560.5);
   12->SetBinContent(4,2017.232);
   12->SetBinContent(5,2442.247);
   12->SetBinContent(6,2918.01);
   12->SetBinContent(7,3114.659);
   12->SetBinContent(8,3336.682);
   12->SetBinContent(9,2930.697);
   12->SetBinContent(10,2385.156);
   12->SetBinContent(11,1972.828);
   12->SetBinContent(12,1611.248);
   12->SetBinContent(13,1148.172);
   12->SetBinContent(14,913.4625);
   12->SetBinContent(15,799.2794);
   12->SetBinContent(16,653.3787);
   12->SetBinContent(17,513.8216);
   12->SetBinContent(18,412.326);
   12->SetBinContent(19,361.5782);
   12->SetBinContent(20,215.6782);
   12->SetBinContent(21,202.9913);
   12->SetBinContent(22,266.426);
   12->SetBinContent(23,164.9304);
   12->SetBinContent(24,222.0217);
   12->SetBinContent(25,209.3347);
   12->SetBinContent(26,317.1738);
   12->SetBinContent(27,285.4565);
   12->SetBinContent(28,177.6174);
   12->SetBinContent(29,266.426);
   12->SetBinContent(30,298.1434);
   12->SetBinContent(31,336.2043);
   12->SetBinContent(32,298.1434);
   12->SetBinContent(33,291.7999);
   12->SetBinContent(34,399.639);
   12->SetBinContent(35,329.8608);
   12->SetBinContent(36,444.0433);
   12->SetBinContent(37,482.1042);
   12->SetBinContent(38,628.0047);
   12->SetBinContent(39,551.8826);
   12->SetBinContent(40,786.5923);
   12->SetBinContent(41,1173.546);
   12->SetBinContent(42,1236.981);
   12->SetBinContent(43,1693.714);
   12->SetBinContent(44,2581.804);
   12->SetBinContent(45,4294.543);
   12->SetBinContent(46,5734.464);
   12->SetBinContent(47,3393.773);
   12->SetBinContent(48,1262.355);
   12->SetBinContent(49,1484.378);
   12->SetBinContent(50,1795.21);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,3.142);
   13->SetBinContent(1,652.5959);
   13->SetBinContent(2,1957.787);
   13->SetBinContent(3,2447.234);
   13->SetBinContent(4,3181.404);
   13->SetBinContent(5,3670.851);
   13->SetBinContent(6,4405.022);
   13->SetBinContent(7,4486.597);
   13->SetBinContent(8,4241.873);
   13->SetBinContent(9,4241.873);
   13->SetBinContent(10,3670.851);
   13->SetBinContent(11,3997.149);
   13->SetBinContent(12,3834);
   13->SetBinContent(13,3181.404);
   13->SetBinContent(14,1631.49);
   13->SetBinContent(15,1957.787);
   13->SetBinContent(16,2120.936);
   13->SetBinContent(17,1957.787);
   13->SetBinContent(18,2120.936);
   13->SetBinContent(19,1468.341);
   13->SetBinContent(20,1142.043);
   13->SetBinContent(21,1386.766);
   13->SetBinContent(22,571.0215);
   13->SetBinContent(23,1142.043);
   13->SetBinContent(24,1305.192);
   13->SetBinContent(25,897.3193);
   13->SetBinContent(26,1060.468);
   13->SetBinContent(27,1060.468);
   13->SetBinContent(28,1305.192);
   13->SetBinContent(29,734.1704);
   13->SetBinContent(30,1223.617);
   13->SetBinContent(31,326.298);
   13->SetBinContent(32,1060.468);
   13->SetBinContent(33,815.7449);
   13->SetBinContent(34,815.7449);
   13->SetBinContent(35,815.7449);
   13->SetBinContent(36,1142.043);
   13->SetBinContent(37,734.1704);
   13->SetBinContent(38,1060.468);
   13->SetBinContent(39,1223.617);
   13->SetBinContent(40,815.7449);
   13->SetBinContent(41,734.1704);
   13->SetBinContent(42,1386.766);
   13->SetBinContent(43,1549.915);
   13->SetBinContent(44,1549.915);
   13->SetBinContent(45,1386.766);
   13->SetBinContent(46,1305.192);
   13->SetBinContent(47,897.3193);
   13->SetBinContent(48,407.8725);
   13->SetBinContent(49,652.5959);
   13->SetBinContent(50,734.1704);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,3.142);
   14->SetBinContent(1,189.3855);
   14->SetBinContent(2,519.8029);
   14->SetBinContent(3,749.4832);
   14->SetBinContent(4,1228.988);
   14->SetBinContent(5,1438.518);
   14->SetBinContent(6,1684.313);
   14->SetBinContent(7,2107.403);
   14->SetBinContent(8,2059.049);
   14->SetBinContent(9,2224.26);
   14->SetBinContent(10,2329.028);
   14->SetBinContent(11,2264.555);
   14->SetBinContent(12,2232.319);
   14->SetBinContent(13,2034.872);
   14->SetBinContent(14,1853.548);
   14->SetBinContent(15,1728.636);
   14->SetBinContent(16,1511.048);
   14->SetBinContent(17,1599.695);
   14->SetBinContent(18,1390.165);
   14->SetBinContent(19,1160.488);
   14->SetBinContent(20,938.8688);
   14->SetBinContent(21,1055.723);
   14->SetBinContent(22,954.9867);
   14->SetBinContent(23,930.8098);
   14->SetBinContent(24,773.6601);
   14->SetBinContent(25,745.4537);
   14->SetBinContent(26,757.5422);
   14->SetBinContent(27,753.5127);
   14->SetBinContent(28,644.7167);
   14->SetBinContent(29,781.7191);
   14->SetBinContent(30,668.8936);
   14->SetBinContent(31,596.363);
   14->SetBinContent(32,568.1566);
   14->SetBinContent(33,668.8936);
   14->SetBinContent(34,592.3335);
   14->SetBinContent(35,652.7757);
   14->SetBinContent(36,604.4219);
   14->SetBinContent(37,560.0977);
   14->SetBinContent(38,676.9526);
   14->SetBinContent(39,495.626);
   14->SetBinContent(40,419.0659);
   14->SetBinContent(41,596.363);
   14->SetBinContent(42,346.5352);
   14->SetBinContent(43,354.5942);
   14->SetBinContent(44,282.0636);
   14->SetBinContent(45,145.0613);
   14->SetBinContent(46,76.56011);
   14->SetBinContent(47,20.1474);
   14->SetBinContent(48,36.26532);
   14->SetBinContent(49,32.23584);
   14->SetBinContent(50,40.2948);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,3.142);
   15->SetBinContent(1,30.90277);
   15->SetBinContent(2,77.25694);
   15->SetBinContent(3,115.8854);
   15->SetBinContent(4,197.0053);
   15->SetBinContent(5,197.0053);
   15->SetBinContent(6,142.9254);
   15->SetBinContent(7,154.5139);
   15->SetBinContent(8,189.2796);
   15->SetBinContent(9,127.4739);
   15->SetBinContent(10,119.7482);
   15->SetBinContent(11,150.6511);
   15->SetBinContent(12,131.3368);
   15->SetBinContent(13,88.84547);
   15->SetBinContent(14,100.434);
   15->SetBinContent(15,92.70832);
   15->SetBinContent(16,65.6684);
   15->SetBinContent(17,65.6684);
   15->SetBinContent(18,61.80555);
   15->SetBinContent(19,73.39409);
   15->SetBinContent(20,38.62847);
   15->SetBinContent(21,46.35416);
   15->SetBinContent(22,23.17708);
   15->SetBinContent(23,50.21701);
   15->SetBinContent(24,57.9427);
   15->SetBinContent(25,23.17708);
   15->SetBinContent(26,46.35416);
   15->SetBinContent(27,27.03993);
   15->SetBinContent(28,46.35416);
   15->SetBinContent(29,42.49131);
   15->SetBinContent(30,38.62847);
   15->SetBinContent(31,30.90277);
   15->SetBinContent(32,50.21701);
   15->SetBinContent(33,34.76562);
   15->SetBinContent(34,19.31424);
   15->SetBinContent(35,23.17708);
   15->SetBinContent(36,30.90277);
   15->SetBinContent(37,42.49131);
   15->SetBinContent(38,30.90277);
   15->SetBinContent(39,38.62847);
   15->SetBinContent(40,27.03993);
   15->SetBinContent(41,23.17708);
   15->SetBinContent(42,38.62847);
   15->SetBinContent(43,30.90277);
   15->SetBinContent(44,54.07985);
   15->SetBinContent(45,61.80555);
   15->SetBinContent(46,61.80555);
   15->SetBinContent(47,30.90277);
   15->SetBinContent(48,23.17708);
   15->SetBinContent(49,61.80555);
   15->SetBinContent(50,38.62847);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,3.142);
   16->SetBinContent(1,388.343);
   16->SetBinContent(2,1140.374);
   16->SetBinContent(3,1725.971);
   16->SetBinContent(4,2163.626);
   16->SetBinContent(5,2527.306);
   16->SetBinContent(6,2755.376);
   16->SetBinContent(7,3149.876);
   16->SetBinContent(8,2989.61);
   16->SetBinContent(9,3193.024);
   16->SetBinContent(10,2977.282);
   16->SetBinContent(11,2558.126);
   16->SetBinContent(12,2459.501);
   16->SetBinContent(13,2410.188);
   16->SetBinContent(14,1947.882);
   16->SetBinContent(15,1528.717);
   16->SetBinContent(16,1460.911);
   16->SetBinContent(17,1165.03);
   16->SetBinContent(18,1004.761);
   16->SetBinContent(19,955.448);
   16->SetBinContent(20,961.6122);
   16->SetBinContent(21,850.6569);
   16->SetBinContent(22,616.4178);
   16->SetBinContent(23,752.0299);
   16->SetBinContent(24,696.5522);
   16->SetBinContent(25,647.2388);
   16->SetBinContent(26,499.2983);
   16->SetBinContent(27,523.9551);
   16->SetBinContent(28,517.7909);
   16->SetBinContent(29,647.2388);
   16->SetBinContent(30,530.1193);
   16->SetBinContent(31,573.2686);
   16->SetBinContent(32,782.8508);
   16->SetBinContent(33,647.2388);
   16->SetBinContent(34,579.4327);
   16->SetBinContent(35,634.9104);
   16->SetBinContent(36,832.1643);
   16->SetBinContent(37,862.9852);
   16->SetBinContent(38,850.6569);
   16->SetBinContent(39,807.5076);
   16->SetBinContent(40,708.8806);
   16->SetBinContent(41,758.1941);
   16->SetBinContent(42,758.1941);
   16->SetBinContent(43,776.6866);
   16->SetBinContent(44,647.2388);
   16->SetBinContent(45,616.4178);
   16->SetBinContent(46,554.776);
   16->SetBinContent(47,302.0444);
   16->SetBinContent(48,209.5818);
   16->SetBinContent(49,339.0295);
   16->SetBinContent(50,443.8207);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,3.142);
   17->SetBinContent(1,515.3538);
   17->SetBinContent(2,749.6055);
   17->SetBinContent(3,1054.133);
   17->SetBinContent(4,1522.636);
   17->SetBinContent(5,1991.14);
   17->SetBinContent(6,2084.841);
   17->SetBinContent(7,1991.14);
   17->SetBinContent(8,2014.565);
   17->SetBinContent(9,1967.714);
   17->SetBinContent(10,1452.361);
   17->SetBinContent(11,1405.51);
   17->SetBinContent(12,1007.282);
   17->SetBinContent(13,1007.282);
   17->SetBinContent(14,1194.684);
   17->SetBinContent(15,655.9048);
   17->SetBinContent(16,866.7314);
   17->SetBinContent(17,679.33);
   17->SetBinContent(18,632.4797);
   17->SetBinContent(19,562.2042);
   17->SetBinContent(20,913.5817);
   17->SetBinContent(21,538.779);
   17->SetBinContent(22,304.5273);
   17->SetBinContent(23,913.5817);
   17->SetBinContent(24,679.33);
   17->SetBinContent(25,726.1804);
   17->SetBinContent(26,515.3538);
   17->SetBinContent(27,796.4559);
   17->SetBinContent(28,773.0307);
   17->SetBinContent(29,726.1804);
   17->SetBinContent(30,890.1566);
   17->SetBinContent(31,632.4797);
   17->SetBinContent(32,679.33);
   17->SetBinContent(33,585.6293);
   17->SetBinContent(34,468.5034);
   17->SetBinContent(35,726.1804);
   17->SetBinContent(36,632.4797);
   17->SetBinContent(37,866.7314);
   17->SetBinContent(38,726.1804);
   17->SetBinContent(39,796.4559);
   17->SetBinContent(40,983.8572);
   17->SetBinContent(41,1147.833);
   17->SetBinContent(42,1007.282);
   17->SetBinContent(43,960.4321);
   17->SetBinContent(44,1100.983);
   17->SetBinContent(45,1147.833);
   17->SetBinContent(46,1147.833);
   17->SetBinContent(47,1007.282);
   17->SetBinContent(48,679.33);
   17->SetBinContent(49,1054.133);
   17->SetBinContent(50,1569.487);
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
