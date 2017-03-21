{
//=========Macro generated from canvas: c1/
//=========  (Tue Mar 21 12:31:44 2017) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   c1->Range(-8.692308,-0.5945946,33.61538,5.486486);
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
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,0,33);
   Graph_Graph7->SetMinimum(0.8899911);
   Graph_Graph7->SetMaximum(2.210098);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);
   Graph_Graph7->SetLineWidth(2);
   Graph_Graph7->SetMarkerSize(1.2);
   Graph_Graph7->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph7->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph7->GetXaxis()->SetLabelColor(ci);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph7->GetXaxis()->SetTitleColor(ci);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph7->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph7->GetYaxis()->SetLabelColor(ci);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph7->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph7->GetYaxis()->SetTitleColor(ci);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph7->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph7->GetZaxis()->SetLabelColor(ci);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph7->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph7->GetZaxis()->SetTitleColor(ci);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph7);
   
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
   gre->SetPoint(0,0.375,4.087379);
   gre->SetPointError(0,0.375,0.1064485);
   gre->SetPoint(1,1.125,4.120879);
   gre->SetPointError(1,0.375,0.1298706);
   gre->SetPoint(2,1.875,3.988764);
   gre->SetPointError(2,0.375,0.1059931);
   gre->SetPoint(3,2.625,3.841463);
   gre->SetPointError(3,0.375,0.1200703);
   gre->SetPoint(4,3.375,4.147727);
   gre->SetPointError(4,0.375,0.1396755);
   gre->SetPoint(5,4.125,3.689189);
   gre->SetPointError(5,0.375,0.1390325);
   gre->SetPoint(6,4.875,4.17284);
   gre->SetPointError(6,0.375,0.1231974);
   gre->SetPoint(7,5.625,4.202247);
   gre->SetPointError(7,0.375,0.1242879);
   gre->SetPoint(8,6.375,4.22973);
   gre->SetPointError(8,0.375,0.1449759);
   gre->SetPoint(9,7.125,4.034483);
   gre->SetPointError(9,0.375,0.1199466);
   gre->SetPoint(10,7.875,4.064935);
   gre->SetPointError(10,0.375,0.10918);
   gre->SetPoint(11,8.625,3.933333);
   gre->SetPointError(11,0.375,0.1212283);
   gre->SetPoint(12,9.375,4.031915);
   gre->SetPointError(12,0.375,0.1280598);
   gre->SetPoint(13,10.125,4.074468);
   gre->SetPointError(13,0.375,0.1296296);
   gre->SetPoint(14,10.875,4.208333);
   gre->SetPointError(14,0.375,0.1081696);
   gre->SetPoint(15,11.625,4.355556);
   gre->SetPointError(15,0.375,0.1279575);
   gre->SetPoint(16,12.375,4.351852);
   gre->SetPointError(16,0.375,0.1188038);
   gre->SetPoint(17,13.125,4.052632);
   gre->SetPointError(17,0.375,0.1367355);
   gre->SetPoint(18,13.875,4.1);
   gre->SetPointError(18,0.375,0.1457632);
   gre->SetPoint(19,14.625,4.414286);
   gre->SetPointError(19,0.375,0.1778475);
   gre->SetPoint(20,15.375,4.230769);
   gre->SetPointError(20,0.375,0.1499321);
   gre->SetPoint(21,16.125,4.402174);
   gre->SetPointError(21,0.375,0.1349401);
   gre->SetPoint(22,16.875,4.5125);
   gre->SetPointError(22,0.375,0.1590929);
   gre->SetPoint(23,17.625,4.258065);
   gre->SetPointError(23,0.375,0.1481401);
   gre->SetPoint(24,18.375,4.411765);
   gre->SetPointError(24,0.375,0.1436553);
   gre->SetPoint(25,19.125,4.29703);
   gre->SetPointError(25,0.375,0.1397019);
   gre->SetPoint(26,19.875,4.576923);
   gre->SetPointError(26,0.375,0.1536611);
   gre->SetPoint(27,20.625,4.257732);
   gre->SetPointError(27,0.375,0.1377578);
   gre->SetPoint(28,21.375,4.408451);
   gre->SetPointError(28,0.375,0.1685174);
   gre->SetPoint(29,22.125,4.278481);
   gre->SetPointError(29,0.375,0.1302466);
   gre->SetPoint(30,22.875,4.645161);
   gre->SetPointError(30,0.375,0.154064);
   gre->SetPoint(31,23.625,4.478261);
   gre->SetPointError(31,0.375,0.1680241);
   gre->SetPoint(32,24.375,4.363636);
   gre->SetPointError(32,0.375,0.1567867);
   gre->SetPoint(33,25.125,4.319149);
   gre->SetPointError(33,0.375,0.1413035);
   gre->SetPoint(34,25.875,4.364583);
   gre->SetPointError(34,0.375,0.153178);
   gre->SetPoint(35,26.625,4.56044);
   gre->SetPointError(35,0.375,0.1383121);
   gre->SetPoint(36,27.375,4.389474);
   gre->SetPointError(36,0.375,0.1382877);
   gre->SetPoint(37,28.125,4.578313);
   gre->SetPointError(37,0.375,0.136438);
   gre->SetPoint(38,28.875,4.658228);
   gre->SetPointError(38,0.375,0.1639581);
   gre->SetPoint(39,29.625,4.588785);
   gre->SetPointError(39,0.375,0.1483324);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,0,33);
   Graph_Graph8->SetMinimum(3.422954);
   Graph_Graph8->SetMaximum(4.949389);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);
   Graph_Graph8->SetLineWidth(2);
   Graph_Graph8->SetMarkerSize(1.2);
   Graph_Graph8->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph8->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph8->GetXaxis()->SetLabelColor(ci);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph8->GetXaxis()->SetTitleColor(ci);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph8->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph8->GetYaxis()->SetLabelColor(ci);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph8->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph8->GetYaxis()->SetTitleColor(ci);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph8->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph8->GetZaxis()->SetLabelColor(ci);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph8->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph8->GetZaxis()->SetTitleColor(ci);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph8);
   
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
   multigraph->GetYaxis()->SetTitle("Number of particle");
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
   
   TH1F *Graph_Graph_Graph79 = new TH1F("Graph_Graph_Graph79","Graph",100,0,33);
   Graph_Graph_Graph79->SetMinimum(0.8899911);
   Graph_Graph_Graph79->SetMaximum(2.210098);
   Graph_Graph_Graph79->SetDirectory(0);
   Graph_Graph_Graph79->SetStats(0);
   Graph_Graph_Graph79->SetLineWidth(2);
   Graph_Graph_Graph79->SetMarkerSize(1.2);
   Graph_Graph_Graph79->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph79->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph79->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph79->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph79->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph79->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph79->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph79->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph79->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph79->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph79->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph79->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph79->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph79->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph79->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph79->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph79->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph79->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph79->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph79->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph79->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph79->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph79->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph79->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph79->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph79->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph79->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph79->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph79);
   
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
   gre->SetPoint(0,0.375,4.087379);
   gre->SetPointError(0,0.375,0.1064485);
   gre->SetPoint(1,1.125,4.120879);
   gre->SetPointError(1,0.375,0.1298706);
   gre->SetPoint(2,1.875,3.988764);
   gre->SetPointError(2,0.375,0.1059931);
   gre->SetPoint(3,2.625,3.841463);
   gre->SetPointError(3,0.375,0.1200703);
   gre->SetPoint(4,3.375,4.147727);
   gre->SetPointError(4,0.375,0.1396755);
   gre->SetPoint(5,4.125,3.689189);
   gre->SetPointError(5,0.375,0.1390325);
   gre->SetPoint(6,4.875,4.17284);
   gre->SetPointError(6,0.375,0.1231974);
   gre->SetPoint(7,5.625,4.202247);
   gre->SetPointError(7,0.375,0.1242879);
   gre->SetPoint(8,6.375,4.22973);
   gre->SetPointError(8,0.375,0.1449759);
   gre->SetPoint(9,7.125,4.034483);
   gre->SetPointError(9,0.375,0.1199466);
   gre->SetPoint(10,7.875,4.064935);
   gre->SetPointError(10,0.375,0.10918);
   gre->SetPoint(11,8.625,3.933333);
   gre->SetPointError(11,0.375,0.1212283);
   gre->SetPoint(12,9.375,4.031915);
   gre->SetPointError(12,0.375,0.1280598);
   gre->SetPoint(13,10.125,4.074468);
   gre->SetPointError(13,0.375,0.1296296);
   gre->SetPoint(14,10.875,4.208333);
   gre->SetPointError(14,0.375,0.1081696);
   gre->SetPoint(15,11.625,4.355556);
   gre->SetPointError(15,0.375,0.1279575);
   gre->SetPoint(16,12.375,4.351852);
   gre->SetPointError(16,0.375,0.1188038);
   gre->SetPoint(17,13.125,4.052632);
   gre->SetPointError(17,0.375,0.1367355);
   gre->SetPoint(18,13.875,4.1);
   gre->SetPointError(18,0.375,0.1457632);
   gre->SetPoint(19,14.625,4.414286);
   gre->SetPointError(19,0.375,0.1778475);
   gre->SetPoint(20,15.375,4.230769);
   gre->SetPointError(20,0.375,0.1499321);
   gre->SetPoint(21,16.125,4.402174);
   gre->SetPointError(21,0.375,0.1349401);
   gre->SetPoint(22,16.875,4.5125);
   gre->SetPointError(22,0.375,0.1590929);
   gre->SetPoint(23,17.625,4.258065);
   gre->SetPointError(23,0.375,0.1481401);
   gre->SetPoint(24,18.375,4.411765);
   gre->SetPointError(24,0.375,0.1436553);
   gre->SetPoint(25,19.125,4.29703);
   gre->SetPointError(25,0.375,0.1397019);
   gre->SetPoint(26,19.875,4.576923);
   gre->SetPointError(26,0.375,0.1536611);
   gre->SetPoint(27,20.625,4.257732);
   gre->SetPointError(27,0.375,0.1377578);
   gre->SetPoint(28,21.375,4.408451);
   gre->SetPointError(28,0.375,0.1685174);
   gre->SetPoint(29,22.125,4.278481);
   gre->SetPointError(29,0.375,0.1302466);
   gre->SetPoint(30,22.875,4.645161);
   gre->SetPointError(30,0.375,0.154064);
   gre->SetPoint(31,23.625,4.478261);
   gre->SetPointError(31,0.375,0.1680241);
   gre->SetPoint(32,24.375,4.363636);
   gre->SetPointError(32,0.375,0.1567867);
   gre->SetPoint(33,25.125,4.319149);
   gre->SetPointError(33,0.375,0.1413035);
   gre->SetPoint(34,25.875,4.364583);
   gre->SetPointError(34,0.375,0.153178);
   gre->SetPoint(35,26.625,4.56044);
   gre->SetPointError(35,0.375,0.1383121);
   gre->SetPoint(36,27.375,4.389474);
   gre->SetPointError(36,0.375,0.1382877);
   gre->SetPoint(37,28.125,4.578313);
   gre->SetPointError(37,0.375,0.136438);
   gre->SetPoint(38,28.875,4.658228);
   gre->SetPointError(38,0.375,0.1639581);
   gre->SetPoint(39,29.625,4.588785);
   gre->SetPointError(39,0.375,0.1483324);
   
   TH1F *Graph_Graph_Graph810 = new TH1F("Graph_Graph_Graph810","Graph",100,0,33);
   Graph_Graph_Graph810->SetMinimum(3.422954);
   Graph_Graph_Graph810->SetMaximum(4.949389);
   Graph_Graph_Graph810->SetDirectory(0);
   Graph_Graph_Graph810->SetStats(0);
   Graph_Graph_Graph810->SetLineWidth(2);
   Graph_Graph_Graph810->SetMarkerSize(1.2);
   Graph_Graph_Graph810->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph810->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph810->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph810->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph810->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph810->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph810->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph810->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph810->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph810->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph810->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph810->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph810->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph810->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph810->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph810->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph810->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph810->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph810->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph810->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph810->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph810->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph810->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph810->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph810->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph810->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph810->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph810->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph810);
   
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
   multigraph->GetYaxis()->SetTitle("Number of particle");
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
   
   TLegend *leg = new TLegend(0.6105528,0.2098214,0.991206,0.360119,NULL,"brNDC");
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
   TLegendEntry *entry=leg->AddEntry("0","Pandora v1","f");
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
