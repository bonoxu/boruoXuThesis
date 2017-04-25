{
//=========Macro generated from canvas: c1/
//=========  (Tue Apr 25 16:30:36 2017) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   c1->Range(-8.692308,0.0135135,33.61538,2.716216);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.17);
   c1->SetRightMargin(0.05);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.18);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraphErrors *gre = new TGraphErrors(40);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#7293cb");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#7293cb");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0.375,1.009709);
   gre->SetPointError(0,0.375,0.009661493);
   gre->SetPoint(1,1.125,1.012048);
   gre->SetPointError(1,0.375,0.01197539);
   gre->SetPoint(2,1.875,1.021053);
   gre->SetPointError(2,0.375,0.01472893);
   gre->SetPoint(3,2.625,1);
   gre->SetPointError(3,0.375,0);
   gre->SetPoint(4,3.375,1);
   gre->SetPointError(4,0.375,0);
   gre->SetPoint(5,4.125,1);
   gre->SetPointError(5,0.375,0);
   gre->SetPoint(6,4.875,1.011765);
   gre->SetPointError(6,0.375,0.0116953);
   gre->SetPoint(7,5.625,1.047059);
   gre->SetPointError(7,0.375,0.02296911);
   gre->SetPoint(8,6.375,1.015152);
   gre->SetPointError(8,0.375,0.01503629);
   gre->SetPoint(9,7.125,1.024096);
   gre->SetPointError(9,0.375,0.01683218);
   gre->SetPoint(10,7.875,1.015152);
   gre->SetPointError(10,0.375,0.01503629);
   gre->SetPoint(11,8.625,1.013514);
   gre->SetPointError(11,0.375,0.0134219);
   gre->SetPoint(12,9.375,1.021739);
   gre->SetPointError(12,0.375,0.01520388);
   gre->SetPoint(13,10.125,1.076087);
   gre->SetPointError(13,0.375,0.02764246);
   gre->SetPoint(14,10.875,1.107143);
   gre->SetPointError(14,0.375,0.03771333);
   gre->SetPoint(15,11.625,1.189873);
   gre->SetPointError(15,0.375,0.04412604);
   gre->SetPoint(16,12.375,1.376344);
   gre->SetPointError(16,0.375,0.05464647);
   gre->SetPoint(17,13.125,1.47191);
   gre->SetPointError(17,0.375,0.05291619);
   gre->SetPoint(18,13.875,1.654762);
   gre->SetPointError(18,0.375,0.05187539);
   gre->SetPoint(19,14.625,1.769231);
   gre->SetPointError(19,0.375,0.05225894);
   gre->SetPoint(20,15.375,1.860465);
   gre->SetPointError(20,0.375,0.03736447);
   gre->SetPoint(21,16.125,1.928571);
   gre->SetPointError(21,0.375,0.03683063);
   gre->SetPoint(22,16.875,1.88);
   gre->SetPointError(22,0.375,0.04199471);
   gre->SetPoint(23,17.625,1.943182);
   gre->SetPointError(23,0.375,0.02944894);
   gre->SetPoint(24,18.375,2.011364);
   gre->SetPointError(24,0.375,0.01964508);
   gre->SetPoint(25,19.125,1.967742);
   gre->SetPointError(25,0.375,0.01832135);
   gre->SetPoint(26,19.875,2.021277);
   gre->SetPointError(26,0.375,0.02596583);
   gre->SetPoint(27,20.625,2.010638);
   gre->SetPointError(27,0.375,0.01839337);
   gre->SetPoint(28,21.375,2.015152);
   gre->SetPointError(28,0.375,0.01503629);
   gre->SetPoint(29,22.125,1.986301);
   gre->SetPointError(29,0.375,0.01360448);
   gre->SetPoint(30,22.875,2);
   gre->SetPointError(30,0.375,0.0244949);
   gre->SetPoint(31,23.625,2.010753);
   gre->SetPointError(31,0.375,0.0185908);
   gre->SetPoint(32,24.375,1.987179);
   gre->SetPointError(32,0.375,0.01273806);
   gre->SetPoint(33,25.125,2.023529);
   gre->SetPointError(33,0.375,0.02870429);
   gre->SetPoint(34,25.875,1.987654);
   gre->SetPointError(34,0.375,0.01226923);
   gre->SetPoint(35,26.625,2.027778);
   gre->SetPointError(35,0.375,0.01936713);
   gre->SetPoint(36,27.375,1.987952);
   gre->SetPointError(36,0.375,0.01197539);
   gre->SetPoint(37,28.125,1.985714);
   gre->SetPointError(37,0.375,0.0246846);
   gre->SetPoint(38,28.875,2);
   gre->SetPointError(38,0.375,0.02357023);
   gre->SetPoint(39,29.625,2.011236);
   gre->SetPointError(39,0.375,0.01942477);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0,33);
   Graph_Graph1->SetMinimum(0.8947766);
   Graph_Graph1->SetMaximum(2.157457);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineWidth(2);
   Graph_Graph1->SetMarkerSize(1.2);
   Graph_Graph1->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph1->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph1->GetXaxis()->SetLabelColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph1->GetXaxis()->SetTitleColor(ci);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph1->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph1->GetYaxis()->SetLabelColor(ci);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph1->GetYaxis()->SetTitleColor(ci);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph1->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph1->GetZaxis()->SetLabelColor(ci);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph1->GetZaxis()->SetTitleColor(ci);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(40);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e1974c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#e1974c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0.375,1.413793);
   gre->SetPointError(0,0.375,0.1036463);
   gre->SetPoint(1,1.125,1.258065);
   gre->SetPointError(1,0.375,0.09087094);
   gre->SetPoint(2,1.875,1.233333);
   gre->SetPointError(2,0.375,0.07722022);
   gre->SetPoint(3,2.625,1.178571);
   gre->SetPointError(3,0.375,0.07237888);
   gre->SetPoint(4,3.375,1.433333);
   gre->SetPointError(4,0.375,0.09047201);
   gre->SetPoint(5,4.125,1.2);
   gre->SetPointError(5,0.375,0.07302967);
   gre->SetPoint(6,4.875,1.538462);
   gre->SetPointError(6,0.375,0.1244012);
   gre->SetPoint(7,5.625,1.258065);
   gre->SetPointError(7,0.375,0.1016794);
   gre->SetPoint(8,6.375,1.4);
   gre->SetPointError(8,0.375,0.1095445);
   gre->SetPoint(9,7.125,1.285714);
   gre->SetPointError(9,0.375,0.09919501);
   gre->SetPoint(10,7.875,1.192308);
   gre->SetPointError(10,0.375,0.07729201);
   gre->SetPoint(11,8.625,1.238095);
   gre->SetPointError(11,0.375,0.09294286);
   gre->SetPoint(12,9.375,1.236842);
   gre->SetPointError(12,0.375,0.07836814);
   gre->SetPoint(13,10.125,1.5);
   gre->SetPointError(13,0.375,0.1383208);
   gre->SetPoint(14,10.875,1.233333);
   gre->SetPointError(14,0.375,0.09047201);
   gre->SetPoint(15,11.625,1.333333);
   gre->SetPointError(15,0.375,0.09257729);
   gre->SetPoint(16,12.375,1.257143);
   gre->SetPointError(16,0.375,0.07387642);
   gre->SetPoint(17,13.125,1.137931);
   gre->SetPointError(17,0.375,0.06403288);
   gre->SetPoint(18,13.875,1.181818);
   gre->SetPointError(18,0.375,0.1043746);
   gre->SetPoint(19,14.625,1.354839);
   gre->SetPointError(19,0.375,0.09729309);
   gre->SetPoint(20,15.375,1.25);
   gre->SetPointError(20,0.375,0.07654655);
   gre->SetPoint(21,16.125,1.292683);
   gre->SetPointError(21,0.375,0.08619046);
   gre->SetPoint(22,16.875,1.107143);
   gre->SetPointError(22,0.375,0.05845122);
   gre->SetPoint(23,17.625,1.333333);
   gre->SetPointError(23,0.375,0.09257729);
   gre->SetPoint(24,18.375,1.181818);
   gre->SetPointError(24,0.375,0.06714081);
   gre->SetPoint(25,19.125,1.27027);
   gre->SetPointError(25,0.375,0.08240938);
   gre->SetPoint(26,19.875,1.371429);
   gre->SetPointError(26,0.375,0.09967878);
   gre->SetPoint(27,20.625,1.296296);
   gre->SetPointError(27,0.375,0.1023029);
   gre->SetPoint(28,21.375,1.181818);
   gre->SetPointError(28,0.375,0.08223037);
   gre->SetPoint(29,22.125,1.192308);
   gre->SetPointError(29,0.375,0.09451262);
   gre->SetPoint(30,22.875,1.125);
   gre->SetPointError(30,0.375,0.06750772);
   gre->SetPoint(31,23.625,1.21875);
   gre->SetPointError(31,0.375,0.07307925);
   gre->SetPoint(32,24.375,1.129032);
   gre->SetPointError(32,0.375,0.0602101);
   gre->SetPoint(33,25.125,1.44);
   gre->SetPointError(33,0.375,0.1394848);
   gre->SetPoint(34,25.875,1.125);
   gre->SetPointError(34,0.375,0.06750772);
   gre->SetPoint(35,26.625,1.148148);
   gre->SetPointError(35,0.375,0.06836727);
   gre->SetPoint(36,27.375,1.290323);
   gre->SetPointError(36,0.375,0.08152486);
   gre->SetPoint(37,28.125,1.25);
   gre->SetPointError(37,0.375,0.1198958);
   gre->SetPoint(38,28.875,1.130435);
   gre->SetPointError(38,0.375,0.07022373);
   gre->SetPoint(39,29.625,1.230769);
   gre->SetPointError(39,0.375,0.08262864);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0,33);
   Graph_Graph2->SetMinimum(0.9872745);
   Graph_Graph2->SetMaximum(1.72428);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineWidth(2);
   Graph_Graph2->SetMarkerSize(1.2);
   Graph_Graph2->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph2->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph2->GetXaxis()->SetLabelColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph2->GetXaxis()->SetTitleColor(ci);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph2->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph2->GetYaxis()->SetLabelColor(ci);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph2->GetYaxis()->SetTitleColor(ci);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph2->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph2->GetZaxis()->SetLabelColor(ci);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph2->GetZaxis()->SetTitleColor(ci);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph2);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("MC distance / mm");
   multigraph->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   multigraph->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   multigraph->GetXaxis()->SetLabelColor(ci);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.0015);
   multigraph->GetXaxis()->SetLabelSize(0.06);
   multigraph->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   multigraph->GetXaxis()->SetTitleColor(ci);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Number of photons");
   multigraph->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   multigraph->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   multigraph->GetYaxis()->SetLabelColor(ci);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.02);
   multigraph->GetYaxis()->SetLabelSize(0.06);
   multigraph->GetYaxis()->SetTitleSize(0.07);
   multigraph->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   multigraph->GetYaxis()->SetTitleColor(ci);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   gre = new TGraphErrors(40);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#7293cb");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#7293cb");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0.375,1.009709);
   gre->SetPointError(0,0.375,0.009661493);
   gre->SetPoint(1,1.125,1.012048);
   gre->SetPointError(1,0.375,0.01197539);
   gre->SetPoint(2,1.875,1.021053);
   gre->SetPointError(2,0.375,0.01472893);
   gre->SetPoint(3,2.625,1);
   gre->SetPointError(3,0.375,0);
   gre->SetPoint(4,3.375,1);
   gre->SetPointError(4,0.375,0);
   gre->SetPoint(5,4.125,1);
   gre->SetPointError(5,0.375,0);
   gre->SetPoint(6,4.875,1.011765);
   gre->SetPointError(6,0.375,0.0116953);
   gre->SetPoint(7,5.625,1.047059);
   gre->SetPointError(7,0.375,0.02296911);
   gre->SetPoint(8,6.375,1.015152);
   gre->SetPointError(8,0.375,0.01503629);
   gre->SetPoint(9,7.125,1.024096);
   gre->SetPointError(9,0.375,0.01683218);
   gre->SetPoint(10,7.875,1.015152);
   gre->SetPointError(10,0.375,0.01503629);
   gre->SetPoint(11,8.625,1.013514);
   gre->SetPointError(11,0.375,0.0134219);
   gre->SetPoint(12,9.375,1.021739);
   gre->SetPointError(12,0.375,0.01520388);
   gre->SetPoint(13,10.125,1.076087);
   gre->SetPointError(13,0.375,0.02764246);
   gre->SetPoint(14,10.875,1.107143);
   gre->SetPointError(14,0.375,0.03771333);
   gre->SetPoint(15,11.625,1.189873);
   gre->SetPointError(15,0.375,0.04412604);
   gre->SetPoint(16,12.375,1.376344);
   gre->SetPointError(16,0.375,0.05464647);
   gre->SetPoint(17,13.125,1.47191);
   gre->SetPointError(17,0.375,0.05291619);
   gre->SetPoint(18,13.875,1.654762);
   gre->SetPointError(18,0.375,0.05187539);
   gre->SetPoint(19,14.625,1.769231);
   gre->SetPointError(19,0.375,0.05225894);
   gre->SetPoint(20,15.375,1.860465);
   gre->SetPointError(20,0.375,0.03736447);
   gre->SetPoint(21,16.125,1.928571);
   gre->SetPointError(21,0.375,0.03683063);
   gre->SetPoint(22,16.875,1.88);
   gre->SetPointError(22,0.375,0.04199471);
   gre->SetPoint(23,17.625,1.943182);
   gre->SetPointError(23,0.375,0.02944894);
   gre->SetPoint(24,18.375,2.011364);
   gre->SetPointError(24,0.375,0.01964508);
   gre->SetPoint(25,19.125,1.967742);
   gre->SetPointError(25,0.375,0.01832135);
   gre->SetPoint(26,19.875,2.021277);
   gre->SetPointError(26,0.375,0.02596583);
   gre->SetPoint(27,20.625,2.010638);
   gre->SetPointError(27,0.375,0.01839337);
   gre->SetPoint(28,21.375,2.015152);
   gre->SetPointError(28,0.375,0.01503629);
   gre->SetPoint(29,22.125,1.986301);
   gre->SetPointError(29,0.375,0.01360448);
   gre->SetPoint(30,22.875,2);
   gre->SetPointError(30,0.375,0.0244949);
   gre->SetPoint(31,23.625,2.010753);
   gre->SetPointError(31,0.375,0.0185908);
   gre->SetPoint(32,24.375,1.987179);
   gre->SetPointError(32,0.375,0.01273806);
   gre->SetPoint(33,25.125,2.023529);
   gre->SetPointError(33,0.375,0.02870429);
   gre->SetPoint(34,25.875,1.987654);
   gre->SetPointError(34,0.375,0.01226923);
   gre->SetPoint(35,26.625,2.027778);
   gre->SetPointError(35,0.375,0.01936713);
   gre->SetPoint(36,27.375,1.987952);
   gre->SetPointError(36,0.375,0.01197539);
   gre->SetPoint(37,28.125,1.985714);
   gre->SetPointError(37,0.375,0.0246846);
   gre->SetPoint(38,28.875,2);
   gre->SetPointError(38,0.375,0.02357023);
   gre->SetPoint(39,29.625,2.011236);
   gre->SetPointError(39,0.375,0.01942477);
   
   TH1F *Graph_Graph_Graph13 = new TH1F("Graph_Graph_Graph13","Graph",100,0,33);
   Graph_Graph_Graph13->SetMinimum(0.8947766);
   Graph_Graph_Graph13->SetMaximum(2.157457);
   Graph_Graph_Graph13->SetDirectory(0);
   Graph_Graph_Graph13->SetStats(0);
   Graph_Graph_Graph13->SetLineWidth(2);
   Graph_Graph_Graph13->SetMarkerSize(1.2);
   Graph_Graph_Graph13->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph13->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph13->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph13->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph13->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph13->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph13->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph13->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph13->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph13->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph13->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph13->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph13->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph13->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph13->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph13->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph13->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph13->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph13->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph13->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph13->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph13->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph13->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph13->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph13);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(40);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e1974c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#e1974c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0.375,1.413793);
   gre->SetPointError(0,0.375,0.1036463);
   gre->SetPoint(1,1.125,1.258065);
   gre->SetPointError(1,0.375,0.09087094);
   gre->SetPoint(2,1.875,1.233333);
   gre->SetPointError(2,0.375,0.07722022);
   gre->SetPoint(3,2.625,1.178571);
   gre->SetPointError(3,0.375,0.07237888);
   gre->SetPoint(4,3.375,1.433333);
   gre->SetPointError(4,0.375,0.09047201);
   gre->SetPoint(5,4.125,1.2);
   gre->SetPointError(5,0.375,0.07302967);
   gre->SetPoint(6,4.875,1.538462);
   gre->SetPointError(6,0.375,0.1244012);
   gre->SetPoint(7,5.625,1.258065);
   gre->SetPointError(7,0.375,0.1016794);
   gre->SetPoint(8,6.375,1.4);
   gre->SetPointError(8,0.375,0.1095445);
   gre->SetPoint(9,7.125,1.285714);
   gre->SetPointError(9,0.375,0.09919501);
   gre->SetPoint(10,7.875,1.192308);
   gre->SetPointError(10,0.375,0.07729201);
   gre->SetPoint(11,8.625,1.238095);
   gre->SetPointError(11,0.375,0.09294286);
   gre->SetPoint(12,9.375,1.236842);
   gre->SetPointError(12,0.375,0.07836814);
   gre->SetPoint(13,10.125,1.5);
   gre->SetPointError(13,0.375,0.1383208);
   gre->SetPoint(14,10.875,1.233333);
   gre->SetPointError(14,0.375,0.09047201);
   gre->SetPoint(15,11.625,1.333333);
   gre->SetPointError(15,0.375,0.09257729);
   gre->SetPoint(16,12.375,1.257143);
   gre->SetPointError(16,0.375,0.07387642);
   gre->SetPoint(17,13.125,1.137931);
   gre->SetPointError(17,0.375,0.06403288);
   gre->SetPoint(18,13.875,1.181818);
   gre->SetPointError(18,0.375,0.1043746);
   gre->SetPoint(19,14.625,1.354839);
   gre->SetPointError(19,0.375,0.09729309);
   gre->SetPoint(20,15.375,1.25);
   gre->SetPointError(20,0.375,0.07654655);
   gre->SetPoint(21,16.125,1.292683);
   gre->SetPointError(21,0.375,0.08619046);
   gre->SetPoint(22,16.875,1.107143);
   gre->SetPointError(22,0.375,0.05845122);
   gre->SetPoint(23,17.625,1.333333);
   gre->SetPointError(23,0.375,0.09257729);
   gre->SetPoint(24,18.375,1.181818);
   gre->SetPointError(24,0.375,0.06714081);
   gre->SetPoint(25,19.125,1.27027);
   gre->SetPointError(25,0.375,0.08240938);
   gre->SetPoint(26,19.875,1.371429);
   gre->SetPointError(26,0.375,0.09967878);
   gre->SetPoint(27,20.625,1.296296);
   gre->SetPointError(27,0.375,0.1023029);
   gre->SetPoint(28,21.375,1.181818);
   gre->SetPointError(28,0.375,0.08223037);
   gre->SetPoint(29,22.125,1.192308);
   gre->SetPointError(29,0.375,0.09451262);
   gre->SetPoint(30,22.875,1.125);
   gre->SetPointError(30,0.375,0.06750772);
   gre->SetPoint(31,23.625,1.21875);
   gre->SetPointError(31,0.375,0.07307925);
   gre->SetPoint(32,24.375,1.129032);
   gre->SetPointError(32,0.375,0.0602101);
   gre->SetPoint(33,25.125,1.44);
   gre->SetPointError(33,0.375,0.1394848);
   gre->SetPoint(34,25.875,1.125);
   gre->SetPointError(34,0.375,0.06750772);
   gre->SetPoint(35,26.625,1.148148);
   gre->SetPointError(35,0.375,0.06836727);
   gre->SetPoint(36,27.375,1.290323);
   gre->SetPointError(36,0.375,0.08152486);
   gre->SetPoint(37,28.125,1.25);
   gre->SetPointError(37,0.375,0.1198958);
   gre->SetPoint(38,28.875,1.130435);
   gre->SetPointError(38,0.375,0.07022373);
   gre->SetPoint(39,29.625,1.230769);
   gre->SetPointError(39,0.375,0.08262864);
   
   TH1F *Graph_Graph_Graph24 = new TH1F("Graph_Graph_Graph24","Graph",100,0,33);
   Graph_Graph_Graph24->SetMinimum(0.9872745);
   Graph_Graph_Graph24->SetMaximum(1.72428);
   Graph_Graph_Graph24->SetDirectory(0);
   Graph_Graph_Graph24->SetStats(0);
   Graph_Graph_Graph24->SetLineWidth(2);
   Graph_Graph_Graph24->SetMarkerSize(1.2);
   Graph_Graph_Graph24->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph24->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph24->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph24->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph24->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph24->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph24->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph24->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph24->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph24->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph24->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph24->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph24->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph24->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph24->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph24->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph24->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph24->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph24->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph24->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph24->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph24->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph24->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph24->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph24->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph24->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph24->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph24->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph24);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("MC distance / mm");
   multigraph->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   multigraph->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   multigraph->GetXaxis()->SetLabelColor(ci);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.0015);
   multigraph->GetXaxis()->SetLabelSize(0.06);
   multigraph->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   multigraph->GetXaxis()->SetTitleColor(ci);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Number of photons");
   multigraph->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   multigraph->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   multigraph->GetYaxis()->SetLabelColor(ci);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.02);
   multigraph->GetYaxis()->SetLabelSize(0.06);
   multigraph->GetYaxis()->SetTitleSize(0.07);
   multigraph->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   multigraph->GetYaxis()->SetTitleColor(ci);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.2047739,0.7559524,0.5854271,0.90625,NULL,"brNDC");
   leg->SetBorderSize(0);

   ci = TColor::GetColor("#616161");
   leg->SetTextColor(ci);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(10);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("0","Pandora no photon reco","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#7293cb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("1","Pandora v3","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#e1974c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
