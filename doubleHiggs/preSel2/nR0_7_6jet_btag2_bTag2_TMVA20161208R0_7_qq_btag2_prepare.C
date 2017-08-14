{
//=========Macro generated from canvas: canvas1/
//=========  (Mon Aug 14 14:43:50 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.895484,1.31746,8.323527);
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
   
   TH1F *THStack_stack_2 = new TH1F("THStack_stack_2","",40,0,1);
   THStack_stack_2->SetMinimum(0.02013436);
   THStack_stack_2->SetMaximum(2.218229e+07);
   THStack_stack_2->SetDirectory(0);
   THStack_stack_2->SetStats(0);
   THStack_stack_2->SetLineWidth(2);
   THStack_stack_2->SetMarkerSize(1.2);
   THStack_stack_2->GetXaxis()->SetTitle("2^{nd} highest b-tag");
   THStack_stack_2->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetXaxis()->SetLabelColor(ci);
   THStack_stack_2->GetXaxis()->SetLabelFont(42);
   THStack_stack_2->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_2->GetXaxis()->SetLabelSize(0.03);
   THStack_stack_2->GetXaxis()->SetTitleSize(0.03);
   THStack_stack_2->GetXaxis()->SetTitleOffset(1.3);

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
   THStack_stack_2->GetYaxis()->SetLabelOffset(0.0015);
   THStack_stack_2->GetYaxis()->SetLabelSize(0.03);
   THStack_stack_2->GetYaxis()->SetTitleSize(0.03);
   THStack_stack_2->GetYaxis()->SetTitleOffset(1.3);

   ci = TColor::GetColor("#212121");
   THStack_stack_2->GetYaxis()->SetTitleColor(ci);
   THStack_stack_2->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_2->GetZaxis()->SetLabelColor(ci);
   THStack_stack_2->GetZaxis()->SetLabelFont(42);
   THStack_stack_2->GetZaxis()->SetLabelOffset(0.0015);
   THStack_stack_2->GetZaxis()->SetLabelSize(0.03);
   THStack_stack_2->GetZaxis()->SetTitleSize(0.03);
   THStack_stack_2->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_2->GetZaxis()->SetTitleColor(ci);
   THStack_stack_2->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_2);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",40,0,1);
   0->SetBinContent(2,0.001882);
   0->SetBinContent(3,0.1129201);
   0->SetBinContent(4,0.5194306);
   0->SetBinContent(5,1.010637);
   0->SetBinContent(6,1.501827);
   0->SetBinContent(7,1.801059);
   0->SetBinContent(8,1.720134);
   0->SetBinContent(9,1.827406);
   0->SetBinContent(10,1.642974);
   0->SetBinContent(11,1.338097);
   0->SetBinContent(12,1.19695);
   0->SetBinContent(13,1.166839);
   0->SetBinContent(14,1.180013);
   0->SetBinContent(15,1.001227);
   0->SetBinContent(16,0.9692326);
   0->SetBinContent(17,0.8845419);
   0->SetBinContent(18,0.7979691);
   0->SetBinContent(19,0.7640928);
   0->SetBinContent(20,0.7735029);
   0->SetBinContent(21,0.6906942);
   0->SetBinContent(22,0.786677);
   0->SetBinContent(23,0.6323516);
   0->SetBinContent(24,0.5909473);
   0->SetBinContent(25,0.6888121);
   0->SetBinContent(26,0.6530538);
   0->SetBinContent(27,0.6304696);
   0->SetBinContent(28,0.5288407);
   0->SetBinContent(29,0.6304696);
   0->SetBinContent(30,0.6530538);
   0->SetBinContent(31,0.6229416);
   0->SetBinContent(32,0.6417617);
   0->SetBinContent(33,0.66811);
   0->SetBinContent(34,0.6812841);
   0->SetBinContent(35,0.8901879);
   0->SetBinContent(36,0.9861708);
   0->SetBinContent(37,1.420903);
   0->SetBinContent(38,2.002428);
   0->SetBinContent(39,3.425278);
   0->SetBinContent(40,9.872796);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",40,0,1);
   1->SetBinContent(2,0.001882);
   1->SetBinContent(3,0.003764);
   1->SetBinContent(4,0.01882);
   1->SetBinContent(5,0.030112);
   1->SetBinContent(6,0.1524421);
   1->SetBinContent(7,0.1750261);
   1->SetBinContent(8,0.2408962);
   1->SetBinContent(9,0.3368776);
   1->SetBinContent(10,0.4121571);
   1->SetBinContent(11,0.3820453);
   1->SetBinContent(12,0.5137846);
   1->SetBinContent(13,0.4912005);
   1->SetBinContent(14,0.5043745);
   1->SetBinContent(15,0.5288407);
   1->SetBinContent(16,0.5664811);
   1->SetBinContent(17,0.6605819);
   1->SetBinContent(18,0.6850481);
   1->SetBinContent(19,0.6963402);
   1->SetBinContent(20,0.6379977);
   1->SetBinContent(21,0.6003574);
   1->SetBinContent(22,0.7659748);
   1->SetBinContent(23,0.6605819);
   1->SetBinContent(24,0.7979691);
   1->SetBinContent(25,0.7396266);
   1->SetBinContent(26,0.8054972);
   1->SetBinContent(27,0.8619577);
   1->SetBinContent(28,0.8280814);
   1->SetBinContent(29,0.9334743);
   1->SetBinContent(30,0.8525476);
   1->SetBinContent(31,1.03322);
   1->SetBinContent(32,1.089679);
   1->SetBinContent(33,1.3795);
   1->SetBinContent(34,1.573342);
   1->SetBinContent(35,1.891393);
   1->SetBinContent(36,2.446598);
   1->SetBinContent(37,3.756523);
   1->SetBinContent(38,6.114765);
   1->SetBinContent(39,13.45536);
   1->SetBinContent(40,75.12603);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",40,0,1);
   2->SetBinContent(1,0.003764);
   2->SetBinContent(2,0.01882);
   2->SetBinContent(3,0.417803);
   2->SetBinContent(4,1.817996);
   2->SetBinContent(5,3.583372);
   2->SetBinContent(6,4.373844);
   2->SetBinContent(7,5.062684);
   2->SetBinContent(8,4.955406);
   2->SetBinContent(9,4.821778);
   2->SetBinContent(10,3.61725);
   2->SetBinContent(11,2.762787);
   2->SetBinContent(12,2.371315);
   2->SetBinContent(13,2.051362);
   2->SetBinContent(14,2.032542);
   2->SetBinContent(15,1.883865);
   2->SetBinContent(16,1.671204);
   2->SetBinContent(17,1.524411);
   2->SetBinContent(18,1.451015);
   2->SetBinContent(19,1.462306);
   2->SetBinContent(20,1.328687);
   2->SetBinContent(21,1.270347);
   2->SetBinContent(22,1.14802);
   2->SetBinContent(23,1.084033);
   2->SetBinContent(24,1.082151);
   2->SetBinContent(25,0.9315923);
   2->SetBinContent(26,0.9617046);
   2->SetBinContent(27,0.9146541);
   2->SetBinContent(28,0.8694857);
   2->SetBinContent(29,0.8826599);
   2->SetBinContent(30,0.9184182);
   2->SetBinContent(31,0.9673506);
   2->SetBinContent(32,0.9767607);
   2->SetBinContent(33,1.082151);
   2->SetBinContent(34,1.166839);
   2->SetBinContent(35,1.336215);
   2->SetBinContent(36,1.691905);
   2->SetBinContent(37,2.235806);
   2->SetBinContent(38,3.078976);
   2->SetBinContent(39,5.700708);
   2->SetBinContent(40,17.03092);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",40,0,1);
   3->SetBinContent(1,0.047803);
   3->SetBinContent(2,0.040974);
   3->SetBinContent(3,0.5668069);
   3->SetBinContent(4,2.806726);
   3->SetBinContent(5,5.545111);
   3->SetBinContent(6,7.873726);
   3->SetBinContent(7,9.820057);
   3->SetBinContent(8,11.09713);
   3->SetBinContent(9,11.62298);
   3->SetBinContent(10,10.5781);
   3->SetBinContent(11,8.706887);
   3->SetBinContent(12,8.133229);
   3->SetBinContent(13,8.167376);
   3->SetBinContent(14,7.498143);
   3->SetBinContent(15,7.320595);
   3->SetBinContent(16,7.026957);
   3->SetBinContent(17,7.006471);
   3->SetBinContent(18,6.665031);
   3->SetBinContent(19,6.610401);
   3->SetBinContent(20,6.917696);
   3->SetBinContent(21,6.39188);
   3->SetBinContent(22,6.507969);
   3->SetBinContent(23,6.330421);
   3->SetBinContent(24,6.378222);
   3->SetBinContent(25,6.036783);
   3->SetBinContent(26,5.961667);
   3->SetBinContent(27,6.309935);
   3->SetBinContent(28,5.859235);
   3->SetBinContent(29,6.234818);
   3->SetBinContent(30,6.159701);
   3->SetBinContent(31,6.364565);
   3->SetBinContent(32,6.699175);
   3->SetBinContent(33,7.79861);
   3->SetBinContent(34,8.836643);
   3->SetBinContent(35,10.89908);
   3->SetBinContent(36,14.27274);
   3->SetBinContent(37,19.6332);
   3->SetBinContent(38,31.39154);
   3->SetBinContent(39,66.16129);
   3->SetBinContent(40,316.6293);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",40,0,1);
   4->SetBinContent(1,0.152569);
   4->SetBinContent(2,0.178874);
   4->SetBinContent(3,2.141216);
   4->SetBinContent(4,9.485629);
   4->SetBinContent(5,20.51275);
   4->SetBinContent(6,30.74436);
   4->SetBinContent(7,39.97122);
   4->SetBinContent(8,46.2417);
   4->SetBinContent(9,48.19333);
   4->SetBinContent(10,35.96275);
   4->SetBinContent(11,24.47914);
   4->SetBinContent(12,21.70688);
   4->SetBinContent(13,19.11347);
   4->SetBinContent(14,18.15606);
   4->SetBinContent(15,16.02031);
   4->SetBinContent(16,14.66287);
   4->SetBinContent(17,13.58428);
   4->SetBinContent(18,13.17915);
   4->SetBinContent(19,12.02163);
   4->SetBinContent(20,11.37974);
   4->SetBinContent(21,10.0486);
   4->SetBinContent(22,10.06439);
   4->SetBinContent(23,9.611903);
   4->SetBinContent(24,8.67537);
   4->SetBinContent(25,8.170274);
   4->SetBinContent(26,7.907211);
   4->SetBinContent(27,7.470552);
   4->SetBinContent(28,7.51264);
   4->SetBinContent(29,6.928675);
   4->SetBinContent(30,7.160157);
   4->SetBinContent(31,7.191722);
   4->SetBinContent(32,7.023372);
   4->SetBinContent(33,7.975603);
   4->SetBinContent(34,8.628017);
   4->SetBinContent(35,10.23801);
   4->SetBinContent(36,12.53725);
   4->SetBinContent(37,15.90982);
   4->SetBinContent(38,22.93257);
   4->SetBinContent(39,42.11749);
   4->SetBinContent(40,119.8445);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",40,0,1);
   5->SetBinContent(1,0.012401);
   5->SetBinContent(2,0.5332426);
   5->SetBinContent(3,8.903939);
   5->SetBinContent(4,40.53983);
   5->SetBinContent(5,70.88438);
   5->SetBinContent(6,85.24099);
   5->SetBinContent(7,99.91994);
   5->SetBinContent(8,92.29532);
   5->SetBinContent(9,96.73372);
   5->SetBinContent(10,65.61533);
   5->SetBinContent(11,43.23097);
   5->SetBinContent(12,36.53411);
   5->SetBinContent(13,32.03234);
   5->SetBinContent(14,28.70872);
   5->SetBinContent(15,26.55084);
   5->SetBinContent(16,25.80675);
   5->SetBinContent(17,24.39297);
   5->SetBinContent(18,22.55753);
   5->SetBinContent(19,21.491);
   5->SetBinContent(20,20.01521);
   5->SetBinContent(21,19.39513);
   5->SetBinContent(22,18.29139);
   5->SetBinContent(23,17.18765);
   5->SetBinContent(24,17.6217);
   5->SetBinContent(25,16.48076);
   5->SetBinContent(26,14.67023);
   5->SetBinContent(27,15.24066);
   5->SetBinContent(28,14.18661);
   5->SetBinContent(29,14.58343);
   5->SetBinContent(30,14.96785);
   5->SetBinContent(31,14.80664);
   5->SetBinContent(32,15.62508);
   5->SetBinContent(33,17.12564);
   5->SetBinContent(34,18.84946);
   5->SetBinContent(35,22.66915);
   5->SetBinContent(36,27.45616);
   5->SetBinContent(37,35.45518);
   5->SetBinContent(38,52.68097);
   5->SetBinContent(39,94.88645);
   5->SetBinContent(40,279.3056);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",40,0,1);
   6->SetBinContent(1,0.8352189);
   6->SetBinContent(2,5.163173);
   6->SetBinContent(3,143.3522);
   6->SetBinContent(4,806.1254);
   6->SetBinContent(5,1857.193);
   6->SetBinContent(6,2590.731);
   6->SetBinContent(7,3358.208);
   6->SetBinContent(8,3272.562);
   6->SetBinContent(9,3312.044);
   6->SetBinContent(10,2345.484);
   6->SetBinContent(11,1554.545);
   6->SetBinContent(12,1317.802);
   6->SetBinContent(13,1159.341);
   6->SetBinContent(14,1045.374);
   6->SetBinContent(15,962.1569);
   6->SetBinContent(16,901.3388);
   6->SetBinContent(17,839.0021);
   6->SetBinContent(18,777.5766);
   6->SetBinContent(19,727.9199);
   6->SetBinContent(20,684.1096);
   6->SetBinContent(21,624.2026);
   6->SetBinContent(22,601.9557);
   6->SetBinContent(23,568.092);
   6->SetBinContent(24,544.7062);
   6->SetBinContent(25,522.4594);
   6->SetBinContent(26,491.329);
   6->SetBinContent(27,469.8415);
   6->SetBinContent(28,453.7448);
   6->SetBinContent(29,453.8207);
   6->SetBinContent(30,453.2133);
   6->SetBinContent(31,445.8483);
   6->SetBinContent(32,479.0287);
   6->SetBinContent(33,507.5776);
   6->SetBinContent(34,567.3327);
   6->SetBinContent(35,642.4252);
   6->SetBinContent(36,781.8286);
   6->SetBinContent(37,1063.596);
   6->SetBinContent(38,1545.13);
   6->SetBinContent(39,2752.229);
   6->SetBinContent(40,8136.688);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",40,0,1);
   7->SetBinContent(1,0.146466);
   7->SetBinContent(2,27.73105);
   7->SetBinContent(3,636.2604);
   7->SetBinContent(4,2326.836);
   7->SetBinContent(5,3826.69);
   7->SetBinContent(6,4460.04);
   7->SetBinContent(7,5199.346);
   7->SetBinContent(8,4638.213);
   7->SetBinContent(9,4217.999);
   7->SetBinContent(10,2091.485);
   7->SetBinContent(11,987.0417);
   7->SetBinContent(12,683.3796);
   7->SetBinContent(13,518.9265);
   7->SetBinContent(14,408.6237);
   7->SetBinContent(15,328.7409);
   7->SetBinContent(16,267.8034);
   7->SetBinContent(17,235.1374);
   7->SetBinContent(18,192.7058);
   7->SetBinContent(19,164.1413);
   7->SetBinContent(20,147.0515);
   7->SetBinContent(21,128.5456);
   7->SetBinContent(22,118.3909);
   7->SetBinContent(23,104.477);
   7->SetBinContent(24,99.83909);
   7->SetBinContent(25,91.58842);
   7->SetBinContent(26,86.21817);
   7->SetBinContent(27,80.11561);
   7->SetBinContent(28,75.42884);
   7->SetBinContent(29,73.4272);
   7->SetBinContent(30,71.62084);
   7->SetBinContent(31,71.96259);
   7->SetBinContent(32,76.89346);
   7->SetBinContent(33,83.09366);
   7->SetBinContent(34,90.56319);
   7->SetBinContent(35,104.5259);
   7->SetBinContent(36,130.2546);
   7->SetBinContent(37,172.2956);
   7->SetBinContent(38,254.4734);
   7->SetBinContent(39,472.4909);
   7->SetBinContent(40,1566.68);
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
   
   TH1F *8 = new TH1F("8","qqqqll",40,0,1);
   8->SetBinContent(1,0.146753);
   8->SetBinContent(2,8.658424);
   8->SetBinContent(3,177.5722);
   8->SetBinContent(4,626.0441);
   8->SetBinContent(5,1066.083);
   8->SetBinContent(6,1275.024);
   8->SetBinContent(7,1718.144);
   8->SetBinContent(8,1488.074);
   8->SetBinContent(9,1323.591);
   8->SetBinContent(10,627.2179);
   8->SetBinContent(11,264.16);
   8->SetBinContent(12,179.7736);
   8->SetBinContent(13,136.0394);
   8->SetBinContent(14,91.72002);
   8->SetBinContent(15,71.46833);
   8->SetBinContent(16,50.33613);
   8->SetBinContent(17,44.90633);
   8->SetBinContent(18,30.08441);
   8->SetBinContent(19,22.59999);
   8->SetBinContent(20,18.63765);
   8->SetBinContent(21,13.94154);
   8->SetBinContent(22,10.56622);
   8->SetBinContent(23,8.364918);
   8->SetBinContent(24,6.897388);
   8->SetBinContent(25,5.136354);
   8->SetBinContent(26,4.989602);
   8->SetBinContent(27,2.93506);
   8->SetBinContent(28,1.907789);
   8->SetBinContent(29,1.907789);
   8->SetBinContent(30,0.880518);
   8->SetBinContent(31,0.880518);
   8->SetBinContent(32,1.027271);
   8->SetBinContent(33,1.027271);
   8->SetBinContent(34,0.880518);
   8->SetBinContent(35,1.320777);
   8->SetBinContent(36,1.761036);
   8->SetBinContent(37,0.880518);
   8->SetBinContent(38,1.761036);
   8->SetBinContent(39,2.641554);
   8->SetBinContent(40,4.696096);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",40,0,1);
   9->SetBinContent(1,0.342878);
   9->SetBinContent(2,10.11491);
   9->SetBinContent(3,221.3248);
   9->SetBinContent(4,784.0132);
   9->SetBinContent(5,1410.346);
   9->SetBinContent(6,1807.106);
   9->SetBinContent(7,2321.266);
   9->SetBinContent(8,2213.978);
   9->SetBinContent(9,2301.557);
   9->SetBinContent(10,1713.872);
   9->SetBinContent(11,1287.29);
   9->SetBinContent(12,1108.534);
   9->SetBinContent(13,1050.605);
   9->SetBinContent(14,990.7792);
   9->SetBinContent(15,960.4329);
   9->SetBinContent(16,903.3408);
   9->SetBinContent(17,854.8211);
   9->SetBinContent(18,803.2153);
   9->SetBinContent(19,784.1846);
   9->SetBinContent(20,740.6369);
   9->SetBinContent(21,715.9484);
   9->SetBinContent(22,675.1439);
   9->SetBinContent(23,666.9144);
   9->SetBinContent(24,638.6255);
   9->SetBinContent(25,605.7075);
   9->SetBinContent(26,608.2792);
   9->SetBinContent(27,588.3913);
   9->SetBinContent(28,576.5614);
   9->SetBinContent(29,592.1631);
   9->SetBinContent(30,612.9083);
   9->SetBinContent(31,609.1365);
   9->SetBinContent(32,637.9397);
   9->SetBinContent(33,716.6342);
   9->SetBinContent(34,768.24);
   9->SetBinContent(35,881.3955);
   9->SetBinContent(36,1071.857);
   9->SetBinContent(37,1390.122);
   9->SetBinContent(38,2035.564);
   9->SetBinContent(39,3469.9);
   9->SetBinContent(40,9961.743);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",40,0,1);
   10->SetBinContent(1,3.156801);
   10->SetBinContent(2,123.8074);
   10->SetBinContent(3,2488.264);
   10->SetBinContent(4,10256.27);
   10->SetBinContent(5,18707.17);
   10->SetBinContent(6,23304.29);
   10->SetBinContent(7,27849.11);
   10->SetBinContent(8,26502.29);
   10->SetBinContent(9,25085.23);
   10->SetBinContent(10,14098.95);
   10->SetBinContent(11,7548.714);
   10->SetBinContent(12,5859.054);
   10->SetBinContent(13,4836.691);
   10->SetBinContent(14,4066.988);
   10->SetBinContent(15,3592.492);
   10->SetBinContent(16,3151.319);
   10->SetBinContent(17,2825.356);
   10->SetBinContent(18,2515.075);
   10->SetBinContent(19,2288.134);
   10->SetBinContent(20,2077.823);
   10->SetBinContent(21,1902.697);
   10->SetBinContent(22,1755.334);
   10->SetBinContent(23,1613.273);
   10->SetBinContent(24,1501.441);
   10->SetBinContent(25,1389.547);
   10->SetBinContent(26,1300.245);
   10->SetBinContent(27,1238.776);
   10->SetBinContent(28,1161.276);
   10->SetBinContent(29,1121.706);
   10->SetBinContent(30,1074.437);
   10->SetBinContent(31,1089.52);
   10->SetBinContent(32,1101.448);
   10->SetBinContent(33,1180.777);
   10->SetBinContent(34,1311.984);
   10->SetBinContent(35,1497.023);
   10->SetBinContent(36,1780.831);
   10->SetBinContent(37,2371.98);
   10->SetBinContent(38,3433.273);
   10->SetBinContent(39,6071.009);
   10->SetBinContent(40,16726.92);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",40,0,1);
   11->SetBinContent(1,2016.774);
   11->SetBinContent(2,992.1242);
   11->SetBinContent(3,8229.716);
   11->SetBinContent(4,31275.83);
   11->SetBinContent(5,79405.63);
   11->SetBinContent(6,141117.4);
   11->SetBinContent(7,239491.9);
   11->SetBinContent(8,266521.2);
   11->SetBinContent(9,262718.7);
   11->SetBinContent(10,127470.6);
   11->SetBinContent(11,47850.32);
   11->SetBinContent(12,34138.4);
   11->SetBinContent(13,26787.05);
   11->SetBinContent(14,21794.11);
   11->SetBinContent(15,17809.51);
   11->SetBinContent(16,13466.93);
   11->SetBinContent(17,12360.94);
   11->SetBinContent(18,9042.948);
   11->SetBinContent(19,6619.562);
   11->SetBinContent(20,6538.242);
   11->SetBinContent(21,4846.769);
   11->SetBinContent(22,4537.75);
   11->SetBinContent(23,4147.41);
   11->SetBinContent(24,2992.638);
   11->SetBinContent(25,2829.994);
   11->SetBinContent(26,2146.889);
   11->SetBinContent(27,1984.245);
   11->SetBinContent(28,1610.167);
   11->SetBinContent(29,1528.846);
   11->SetBinContent(30,1349.938);
   11->SetBinContent(31,1122.239);
   11->SetBinContent(32,943.3312);
   11->SetBinContent(33,1236.089);
   11->SetBinContent(34,1171.031);
   11->SetBinContent(35,1219.824);
   11->SetBinContent(36,1675.224);
   11->SetBinContent(37,1935.453);
   11->SetBinContent(38,2895.052);
   11->SetBinContent(39,4521.486);
   11->SetBinContent(40,10344.12);
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
   
   TH1F *12 = new TH1F("12","qqqq",40,0,1);
   12->SetBinContent(1,266.426);
   12->SetBinContent(2,1338.477);
   12->SetBinContent(3,20959.27);
   12->SetBinContent(4,65911.09);
   12->SetBinContent(5,138096.6);
   12->SetBinContent(6,218960.4);
   12->SetBinContent(7,370227.1);
   12->SetBinContent(8,315309.2);
   12->SetBinContent(9,302697.9);
   12->SetBinContent(10,144231);
   12->SetBinContent(11,56446.21);
   12->SetBinContent(12,38766.18);
   12->SetBinContent(13,26345.12);
   12->SetBinContent(14,19487.52);
   12->SetBinContent(15,15281.62);
   12->SetBinContent(16,11640.31);
   12->SetBinContent(17,8887.118);
   12->SetBinContent(18,6901.624);
   12->SetBinContent(19,4833.721);
   12->SetBinContent(20,3939.315);
   12->SetBinContent(21,3323.995);
   12->SetBinContent(22,2410.53);
   12->SetBinContent(23,2175.82);
   12->SetBinContent(24,2131.416);
   12->SetBinContent(25,1642.966);
   12->SetBinContent(26,1674.683);
   12->SetBinContent(27,1363.851);
   12->SetBinContent(28,1256.012);
   12->SetBinContent(29,1078.394);
   12->SetBinContent(30,1217.951);
   12->SetBinContent(31,1008.615);
   12->SetBinContent(32,1173.546);
   12->SetBinContent(33,1224.294);
   12->SetBinContent(34,1287.729);
   12->SetBinContent(35,1338.477);
   12->SetBinContent(36,1541.469);
   12->SetBinContent(37,2239.255);
   12->SetBinContent(38,2930.697);
   12->SetBinContent(39,5195.287);
   12->SetBinContent(40,14450.59);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",40,0,1);
   13->SetBinContent(1,40491.67);
   13->SetBinContent(2,24793.35);
   13->SetBinContent(3,160096.8);
   13->SetBinContent(4,647102.9);
   13->SetBinContent(5,1680417);
   13->SetBinContent(6,3019832);
   13->SetBinContent(7,5067732);
   13->SetBinContent(8,5867022);
   13->SetBinContent(9,5725590);
   13->SetBinContent(10,2700614);
   13->SetBinContent(11,1005968);
   13->SetBinContent(12,714117.6);
   13->SetBinContent(13,562898.7);
   13->SetBinContent(14,416635.3);
   13->SetBinContent(15,352594.1);
   13->SetBinContent(16,285562.7);
   13->SetBinContent(17,219029.6);
   13->SetBinContent(18,165080.5);
   13->SetBinContent(19,131191);
   13->SetBinContent(20,115742.4);
   13->SetBinContent(21,89953.07);
   13->SetBinContent(22,77494.48);
   13->SetBinContent(23,59803.09);
   13->SetBinContent(24,54570.32);
   13->SetBinContent(25,41363.8);
   13->SetBinContent(26,35508.07);
   13->SetBinContent(27,30275.3);
   13->SetBinContent(28,27285.14);
   13->SetBinContent(29,18813.04);
   13->SetBinContent(30,18563.86);
   13->SetBinContent(31,17816.32);
   13->SetBinContent(32,18065.5);
   13->SetBinContent(33,15573.7);
   13->SetBinContent(34,15573.7);
   13->SetBinContent(35,19062.21);
   13->SetBinContent(36,20931.06);
   13->SetBinContent(37,27908.09);
   13->SetBinContent(38,39370.36);
   13->SetBinContent(39,64039.15);
   13->SetBinContent(40,125958.4);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",40,0,1);
   14->SetBinContent(1,2977.784);
   14->SetBinContent(2,4440.487);
   14->SetBinContent(3,21923.61);
   14->SetBinContent(4,49883.13);
   14->SetBinContent(5,81661.48);
   14->SetBinContent(6,123034.2);
   14->SetBinContent(7,180753.6);
   14->SetBinContent(8,221114.5);
   14->SetBinContent(9,209629.5);
   14->SetBinContent(10,92045.98);
   14->SetBinContent(11,34108.85);
   14->SetBinContent(12,25928.73);
   14->SetBinContent(13,21843.02);
   14->SetBinContent(14,19139.36);
   14->SetBinContent(15,17080.39);
   14->SetBinContent(16,15384.06);
   14->SetBinContent(17,13494.32);
   14->SetBinContent(18,12434.61);
   14->SetBinContent(19,10742.31);
   14->SetBinContent(20,10476.37);
   14->SetBinContent(21,9477.108);
   14->SetBinContent(22,8691.396);
   14->SetBinContent(23,8143.411);
   14->SetBinContent(24,7994.327);
   14->SetBinContent(25,6995.061);
   14->SetBinContent(26,6664.659);
   14->SetBinContent(27,6185.172);
   14->SetBinContent(28,5899.092);
   14->SetBinContent(29,5878.946);
   14->SetBinContent(30,5403.489);
   14->SetBinContent(31,5169.79);
   14->SetBinContent(32,5270.522);
   14->SetBinContent(33,5560.631);
   14->SetBinContent(34,6019.971);
   14->SetBinContent(35,7047.442);
   14->SetBinContent(36,8260.261);
   14->SetBinContent(37,11491.76);
   14->SetBinContent(38,16939.37);
   14->SetBinContent(39,30719.56);
   14->SetBinContent(40,85600.01);
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
   
   TH1F *15 = new TH1F("15","qqll",40,0,1);
   15->SetBinContent(1,29622.62);
   15->SetBinContent(2,4025.046);
   15->SetBinContent(3,8567.738);
   15->SetBinContent(4,19060.41);
   15->SetBinContent(5,42386.9);
   15->SetBinContent(6,87692.36);
   15->SetBinContent(7,164335.7);
   15->SetBinContent(8,249137.7);
   15->SetBinContent(9,239848.2);
   15->SetBinContent(10,89579.59);
   15->SetBinContent(11,22023.55);
   15->SetBinContent(12,16023.87);
   15->SetBinContent(13,12960.29);
   15->SetBinContent(14,10522.56);
   15->SetBinContent(15,9100.871);
   15->SetBinContent(16,6763.767);
   15->SetBinContent(17,5083.452);
   15->SetBinContent(18,4110.028);
   15->SetBinContent(19,3291.116);
   15->SetBinContent(20,3121.153);
   15->SetBinContent(21,2441.301);
   15->SetBinContent(22,2325.417);
   15->SetBinContent(23,1858.019);
   15->SetBinContent(24,1691.919);
   15->SetBinContent(25,1367.445);
   15->SetBinContent(26,1232.247);
   15->SetBinContent(27,1104.775);
   15->SetBinContent(28,1070.01);
   15->SetBinContent(29,919.359);
   15->SetBinContent(30,760.982);
   15->SetBinContent(31,818.9248);
   15->SetBinContent(32,788.022);
   15->SetBinContent(33,726.2163);
   15->SetBinContent(34,815.062);
   15->SetBinContent(35,969.5761);
   15->SetBinContent(36,1100.912);
   15->SetBinContent(37,1448.563);
   15->SetBinContent(38,2379.497);
   15->SetBinContent(39,3936.202);
   15->SetBinContent(40,10066.69);
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
   
   TH1F *16 = new TH1F("16","qql#nu",40,0,1);
   16->SetBinContent(1,4524.462);
   16->SetBinContent(2,6139.446);
   16->SetBinContent(3,24872.03);
   16->SetBinContent(4,60031.85);
   16->SetBinContent(5,114306.4);
   16->SetBinContent(6,193019.8);
   16->SetBinContent(7,347021);
   16->SetBinContent(8,394436.4);
   16->SetBinContent(9,387910.8);
   16->SetBinContent(10,151779.3);
   16->SetBinContent(11,41108.18);
   16->SetBinContent(12,25771.99);
   16->SetBinContent(13,18479.9);
   16->SetBinContent(14,13295.92);
   16->SetBinContent(15,10090.61);
   16->SetBinContent(16,8000.993);
   16->SetBinContent(17,4999.095);
   16->SetBinContent(18,3834.087);
   16->SetBinContent(19,2767.704);
   16->SetBinContent(20,1991.031);
   16->SetBinContent(21,1343.792);
   16->SetBinContent(22,961.6122);
   16->SetBinContent(23,795.1792);
   16->SetBinContent(24,560.9402);
   16->SetBinContent(25,369.8505);
   16->SetBinContent(26,314.3728);
   16->SetBinContent(27,197.2534);
   16->SetBinContent(28,141.7759);
   16->SetBinContent(29,147.9401);
   16->SetBinContent(30,141.7759);
   16->SetBinContent(31,92.46255);
   16->SetBinContent(32,73.97004);
   16->SetBinContent(33,30.82085);
   16->SetBinContent(34,61.6417);
   16->SetBinContent(35,55.47753);
   16->SetBinContent(36,49.31336);
   16->SetBinContent(37,43.14919);
   16->SetBinContent(38,55.47753);
   16->SetBinContent(39,61.6417);
   16->SetBinContent(40,123.2834);
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
   
   TH1F *17 = new TH1F("17","qq",40,0,1);
   17->SetBinContent(1,64045.56);
   17->SetBinContent(2,16116.43);
   17->SetBinContent(3,68823.88);
   17->SetBinContent(4,169725.3);
   17->SetBinContent(5,324046.5);
   17->SetBinContent(6,532593.3);
   17->SetBinContent(7,1014773);
   17->SetBinContent(8,1223859);
   17->SetBinContent(9,1261750);
   17->SetBinContent(10,536882.4);
   17->SetBinContent(11,163471.7);
   17->SetBinContent(12,120070.9);
   17->SetBinContent(13,99670.48);
   17->SetBinContent(14,81729.33);
   17->SetBinContent(15,71353.44);
   17->SetBinContent(16,63741.03);
   17->SetBinContent(17,52777.76);
   17->SetBinContent(18,44672.44);
   17->SetBinContent(19,37012.21);
   17->SetBinContent(20,32795.57);
   17->SetBinContent(21,28555.5);
   17->SetBinContent(22,26564.31);
   17->SetBinContent(23,23401.83);
   17->SetBinContent(24,21691.75);
   17->SetBinContent(25,19138.34);
   17->SetBinContent(26,16936.32);
   17->SetBinContent(27,16046.15);
   17->SetBinContent(28,13914.49);
   17->SetBinContent(29,14640.66);
   17->SetBinContent(30,14593.81);
   17->SetBinContent(31,12298.18);
   17->SetBinContent(32,13118.05);
   17->SetBinContent(33,14945.19);
   17->SetBinContent(34,15015.46);
   17->SetBinContent(35,17311.13);
   17->SetBinContent(36,19911.39);
   17->SetBinContent(37,28485.23);
   17->SetBinContent(38,38441.18);
   17->SetBinContent(39,67090.66);
   17->SetBinContent(40,159279.2);
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
