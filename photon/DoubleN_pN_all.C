{
//=========Macro generated from canvas: c1/
//=========  (Mon Mar 20 15:46:33 2017) by ROOT version5.34/05
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
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Graph",100,0,33);
   Graph_Graph13->SetMinimum(0.8947766);
   Graph_Graph13->SetMaximum(2.157457);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);
   Graph_Graph13->SetLineWidth(2);
   Graph_Graph13->SetMarkerSize(1.2);
   Graph_Graph13->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph13->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph13->GetXaxis()->SetLabelColor(ci);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph13->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph13->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph13->GetXaxis()->SetTitleColor(ci);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph13->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph13->GetYaxis()->SetLabelColor(ci);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph13->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph13->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph13->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph13->GetYaxis()->SetTitleColor(ci);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph13->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph13->GetZaxis()->SetLabelColor(ci);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph13->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph13->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph13->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph13->GetZaxis()->SetTitleColor(ci);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph13);
   
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
   gre->SetPoint(12,9.375,1.032609);
   gre->SetPointError(12,0.375,0.02406615);
   gre->SetPoint(13,10.125,1.076087);
   gre->SetPointError(13,0.375,0.02764246);
   gre->SetPoint(14,10.875,1.107143);
   gre->SetPointError(14,0.375,0.03771333);
   gre->SetPoint(15,11.625,1.189873);
   gre->SetPointError(15,0.375,0.04412604);
   gre->SetPoint(16,12.375,1.397849);
   gre->SetPointError(16,0.375,0.06109152);
   gre->SetPoint(17,13.125,1.47191);
   gre->SetPointError(17,0.375,0.05291619);
   gre->SetPoint(18,13.875,1.654762);
   gre->SetPointError(18,0.375,0.05187539);
   gre->SetPoint(19,14.625,1.784615);
   gre->SetPointError(19,0.375,0.05543719);
   gre->SetPoint(20,15.375,1.860465);
   gre->SetPointError(20,0.375,0.03736447);
   gre->SetPoint(21,16.125,1.928571);
   gre->SetPointError(21,0.375,0.03683063);
   gre->SetPoint(22,16.875,1.88);
   gre->SetPointError(22,0.375,0.04199471);
   gre->SetPoint(23,17.625,1.943182);
   gre->SetPointError(23,0.375,0.02944894);
   gre->SetPoint(24,18.375,2.022727);
   gre->SetPointError(24,0.375,0.02259777);
   gre->SetPoint(25,19.125,1.967742);
   gre->SetPointError(25,0.375,0.01832135);
   gre->SetPoint(26,19.875,2.06383);
   gre->SetPointError(26,0.375,0.03625931);
   gre->SetPoint(27,20.625,2.021277);
   gre->SetPointError(27,0.375,0.02116312);
   gre->SetPoint(28,21.375,2.015152);
   gre->SetPointError(28,0.375,0.01503629);
   gre->SetPoint(29,22.125,2);
   gre->SetPointError(29,0.375,0.01937279);
   gre->SetPoint(30,22.875,2);
   gre->SetPointError(30,0.375,0.0244949);
   gre->SetPoint(31,23.625,2.021505);
   gre->SetPointError(31,0.375,0.02624403);
   gre->SetPoint(32,24.375,1.987179);
   gre->SetPointError(32,0.375,0.01273806);
   gre->SetPoint(33,25.125,2.035294);
   gre->SetPointError(33,0.375,0.03089018);
   gre->SetPoint(34,25.875,2);
   gre->SetPointError(34,0.375,0.01745943);
   gre->SetPoint(35,26.625,2.027778);
   gre->SetPointError(35,0.375,0.01936713);
   gre->SetPoint(36,27.375,1.987952);
   gre->SetPointError(36,0.375,0.01197539);
   gre->SetPoint(37,28.125,1.985714);
   gre->SetPointError(37,0.375,0.0246846);
   gre->SetPoint(38,28.875,2.016667);
   gre->SetPointError(38,0.375,0.02878721);
   gre->SetPoint(39,29.625,2.044944);
   gre->SetPointError(39,0.375,0.0271069);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","Graph",100,0,33);
   Graph_Graph14->SetMinimum(0.8899911);
   Graph_Graph14->SetMaximum(2.210098);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);
   Graph_Graph14->SetLineWidth(2);
   Graph_Graph14->SetMarkerSize(1.2);
   Graph_Graph14->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph14->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph14->GetXaxis()->SetLabelColor(ci);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph14->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph14->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph14->GetXaxis()->SetTitleColor(ci);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph14->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph14->GetYaxis()->SetLabelColor(ci);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph14->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph14->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph14->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph14->GetYaxis()->SetTitleColor(ci);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph14->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph14->GetZaxis()->SetLabelColor(ci);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph14->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph14->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph14->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph14->GetZaxis()->SetTitleColor(ci);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph14);
   
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
   multigraph->GetYaxis()->SetTitle("Number");
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
   
   TH1F *Graph_Graph_Graph1315 = new TH1F("Graph_Graph_Graph1315","Graph",100,0,33);
   Graph_Graph_Graph1315->SetMinimum(0.8947766);
   Graph_Graph_Graph1315->SetMaximum(2.157457);
   Graph_Graph_Graph1315->SetDirectory(0);
   Graph_Graph_Graph1315->SetStats(0);
   Graph_Graph_Graph1315->SetLineWidth(2);
   Graph_Graph_Graph1315->SetMarkerSize(1.2);
   Graph_Graph_Graph1315->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1315->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1315->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1315->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1315->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph1315->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1315->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1315->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1315->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1315->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1315->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1315->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1315->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1315->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph1315->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1315->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph1315->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1315->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1315->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1315->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1315->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1315->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1315->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph1315->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1315->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph1315->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1315->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1315->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph1315);
   
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
   gre->SetPoint(12,9.375,1.032609);
   gre->SetPointError(12,0.375,0.02406615);
   gre->SetPoint(13,10.125,1.076087);
   gre->SetPointError(13,0.375,0.02764246);
   gre->SetPoint(14,10.875,1.107143);
   gre->SetPointError(14,0.375,0.03771333);
   gre->SetPoint(15,11.625,1.189873);
   gre->SetPointError(15,0.375,0.04412604);
   gre->SetPoint(16,12.375,1.397849);
   gre->SetPointError(16,0.375,0.06109152);
   gre->SetPoint(17,13.125,1.47191);
   gre->SetPointError(17,0.375,0.05291619);
   gre->SetPoint(18,13.875,1.654762);
   gre->SetPointError(18,0.375,0.05187539);
   gre->SetPoint(19,14.625,1.784615);
   gre->SetPointError(19,0.375,0.05543719);
   gre->SetPoint(20,15.375,1.860465);
   gre->SetPointError(20,0.375,0.03736447);
   gre->SetPoint(21,16.125,1.928571);
   gre->SetPointError(21,0.375,0.03683063);
   gre->SetPoint(22,16.875,1.88);
   gre->SetPointError(22,0.375,0.04199471);
   gre->SetPoint(23,17.625,1.943182);
   gre->SetPointError(23,0.375,0.02944894);
   gre->SetPoint(24,18.375,2.022727);
   gre->SetPointError(24,0.375,0.02259777);
   gre->SetPoint(25,19.125,1.967742);
   gre->SetPointError(25,0.375,0.01832135);
   gre->SetPoint(26,19.875,2.06383);
   gre->SetPointError(26,0.375,0.03625931);
   gre->SetPoint(27,20.625,2.021277);
   gre->SetPointError(27,0.375,0.02116312);
   gre->SetPoint(28,21.375,2.015152);
   gre->SetPointError(28,0.375,0.01503629);
   gre->SetPoint(29,22.125,2);
   gre->SetPointError(29,0.375,0.01937279);
   gre->SetPoint(30,22.875,2);
   gre->SetPointError(30,0.375,0.0244949);
   gre->SetPoint(31,23.625,2.021505);
   gre->SetPointError(31,0.375,0.02624403);
   gre->SetPoint(32,24.375,1.987179);
   gre->SetPointError(32,0.375,0.01273806);
   gre->SetPoint(33,25.125,2.035294);
   gre->SetPointError(33,0.375,0.03089018);
   gre->SetPoint(34,25.875,2);
   gre->SetPointError(34,0.375,0.01745943);
   gre->SetPoint(35,26.625,2.027778);
   gre->SetPointError(35,0.375,0.01936713);
   gre->SetPoint(36,27.375,1.987952);
   gre->SetPointError(36,0.375,0.01197539);
   gre->SetPoint(37,28.125,1.985714);
   gre->SetPointError(37,0.375,0.0246846);
   gre->SetPoint(38,28.875,2.016667);
   gre->SetPointError(38,0.375,0.02878721);
   gre->SetPoint(39,29.625,2.044944);
   gre->SetPointError(39,0.375,0.0271069);
   
   TH1F *Graph_Graph_Graph1416 = new TH1F("Graph_Graph_Graph1416","Graph",100,0,33);
   Graph_Graph_Graph1416->SetMinimum(0.8899911);
   Graph_Graph_Graph1416->SetMaximum(2.210098);
   Graph_Graph_Graph1416->SetDirectory(0);
   Graph_Graph_Graph1416->SetStats(0);
   Graph_Graph_Graph1416->SetLineWidth(2);
   Graph_Graph_Graph1416->SetMarkerSize(1.2);
   Graph_Graph_Graph1416->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1416->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1416->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1416->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1416->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph1416->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1416->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1416->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1416->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1416->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1416->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1416->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1416->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1416->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph1416->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1416->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph1416->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1416->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1416->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1416->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1416->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1416->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1416->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph1416->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1416->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph1416->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1416->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1416->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph1416);
   
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
   multigraph->GetYaxis()->SetTitle("Number");
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
   
   TLegend *leg = new TLegend(0.1896985,0.7470238,0.5703518,0.8973214,NULL,"brNDC");
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
   TLegendEntry *entry=leg->AddEntry("0","Photon","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#7293cb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("1","All particle","f");
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
