{
//=========Macro generated from canvas: c1/
//=========  (Mon Mar 20 16:08:57 2017) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "",14,77,800,700);
   gStyle->SetOptStat(0);
   c1->Range(-8.692308,0.09113113,33.61538,4.345411);
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
   gre->SetMarkerSize(1.2);
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
   
   TH1F *Graph_Graph_Graph929 = new TH1F("Graph_Graph_Graph929","Graph",100,0,33);
   Graph_Graph_Graph929->SetMinimum(0.8947766);
   Graph_Graph_Graph929->SetMaximum(2.157457);
   Graph_Graph_Graph929->SetDirectory(0);
   Graph_Graph_Graph929->SetStats(0);
   Graph_Graph_Graph929->SetLineWidth(2);
   Graph_Graph_Graph929->SetMarkerSize(1.2);
   Graph_Graph_Graph929->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph929->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph929->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph929->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph929->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph929->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph929->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph929->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph929->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph929->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph929->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph929->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph929->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph929->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph929->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph929->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph929->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph929->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph929->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph929->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph929->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph929->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph929->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph929->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph929->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph929->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph929->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph929->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph929);
   
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
   gre->SetMarkerSize(1.2);
   gre->SetPoint(0,0.375,3.087379);
   gre->SetPointError(0,0.375,0.0922144);
   gre->SetPoint(1,1.125,3.120879);
   gre->SetPointError(1,0.375,0.1129627);
   gre->SetPoint(2,1.875,3.011236);
   gre->SetPointError(2,0.375,0.09196254);
   gre->SetPoint(3,2.625,2.902439);
   gre->SetPointError(3,0.375,0.09998476);
   gre->SetPoint(4,3.375,3.159091);
   gre->SetPointError(4,0.375,0.1233218);
   gre->SetPoint(5,4.125,2.77027);
   gre->SetPointError(5,0.375,0.1155343);
   gre->SetPoint(6,4.875,3.123457);
   gre->SetPointError(6,0.375,0.1081678);
   gre->SetPoint(7,5.625,3.168539);
   gre->SetPointError(7,0.375,0.1126244);
   gre->SetPoint(8,6.375,3.256757);
   gre->SetPointError(8,0.375,0.1179023);
   gre->SetPoint(9,7.125,3.068966);
   gre->SetPointError(9,0.375,0.1025415);
   gre->SetPoint(10,7.875,3.051948);
   gre->SetPointError(10,0.375,0.09525087);
   gre->SetPoint(11,8.625,2.973333);
   gre->SetPointError(11,0.375,0.1146563);
   gre->SetPoint(12,9.375,3.12766);
   gre->SetPointError(12,0.375,0.1107958);
   gre->SetPoint(13,10.125,3.117021);
   gre->SetPointError(13,0.375,0.1183258);
   gre->SetPoint(14,10.875,3.145833);
   gre->SetPointError(14,0.375,0.09769386);
   gre->SetPoint(15,11.625,3.344444);
   gre->SetPointError(15,0.375,0.1134869);
   gre->SetPoint(16,12.375,3.351852);
   gre->SetPointError(16,0.375,0.1074352);
   gre->SetPoint(17,13.125,2.989474);
   gre->SetPointError(17,0.375,0.1148235);
   gre->SetPoint(18,13.875,3.222222);
   gre->SetPointError(18,0.375,0.1194409);
   gre->SetPoint(19,14.625,3.514286);
   gre->SetPointError(19,0.375,0.1535204);
   gre->SetPoint(20,15.375,3.252747);
   gre->SetPointError(20,0.375,0.1258646);
   gre->SetPoint(21,16.125,3.48913);
   gre->SetPointError(21,0.375,0.1224885);
   gre->SetPoint(22,16.875,3.525);
   gre->SetPointError(22,0.375,0.1369021);
   gre->SetPoint(23,17.625,3.365591);
   gre->SetPointError(23,0.375,0.1297337);
   gre->SetPoint(24,18.375,3.441176);
   gre->SetPointError(24,0.375,0.1267504);
   gre->SetPoint(25,19.125,3.306931);
   gre->SetPointError(25,0.375,0.1210536);
   gre->SetPoint(26,19.875,3.596154);
   gre->SetPointError(26,0.375,0.1329006);
   gre->SetPoint(27,20.625,3.309278);
   gre->SetPointError(27,0.375,0.1205444);
   gre->SetPoint(28,21.375,3.366197);
   gre->SetPointError(28,0.375,0.1520076);
   gre->SetPoint(29,22.125,3.291139);
   gre->SetPointError(29,0.375,0.1148373);
   gre->SetPoint(30,22.875,3.666667);
   gre->SetPointError(30,0.375,0.1371407);
   gre->SetPoint(31,23.625,3.576087);
   gre->SetPointError(31,0.375,0.1427466);
   gre->SetPoint(32,24.375,3.465909);
   gre->SetPointError(32,0.375,0.1400532);
   gre->SetPoint(33,25.125,3.382979);
   gre->SetPointError(33,0.375,0.125068);
   gre->SetPoint(34,25.875,3.416667);
   gre->SetPointError(34,0.375,0.1347473);
   gre->SetPoint(35,26.625,3.604396);
   gre->SetPointError(35,0.375,0.1232329);
   gre->SetPoint(36,27.375,3.389474);
   gre->SetPointError(36,0.375,0.1174944);
   gre->SetPoint(37,28.125,3.493976);
   gre->SetPointError(37,0.375,0.1301801);
   gre->SetPoint(38,28.875,3.708861);
   gre->SetPointError(38,0.375,0.153109);
   gre->SetPoint(39,29.625,3.654206);
   gre->SetPointError(39,0.375,0.1354997);
   
   TH1F *Graph_Graph_Graph1030 = new TH1F("Graph_Graph_Graph1030","Graph",100,0,33);
   Graph_Graph_Graph1030->SetMinimum(2.534013);
   Graph_Graph_Graph1030->SetMaximum(3.982693);
   Graph_Graph_Graph1030->SetDirectory(0);
   Graph_Graph_Graph1030->SetStats(0);
   Graph_Graph_Graph1030->SetLineWidth(2);
   Graph_Graph_Graph1030->SetMarkerSize(1.2);
   Graph_Graph_Graph1030->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1030->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1030->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1030->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1030->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph1030->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1030->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1030->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1030->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1030->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1030->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1030->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1030->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1030->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph1030->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1030->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph1030->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1030->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1030->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1030->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1030->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1030->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1030->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph1030->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1030->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph1030->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1030->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph1030);
   
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
   gre->SetMarkerSize(1.2);
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
   
   TH1F *Graph_Graph_Graph_Graph91131 = new TH1F("Graph_Graph_Graph_Graph91131","Graph",100,0,33);
   Graph_Graph_Graph_Graph91131->SetMinimum(0.8947766);
   Graph_Graph_Graph_Graph91131->SetMaximum(2.157457);
   Graph_Graph_Graph_Graph91131->SetDirectory(0);
   Graph_Graph_Graph_Graph91131->SetStats(0);
   Graph_Graph_Graph_Graph91131->SetLineWidth(2);
   Graph_Graph_Graph_Graph91131->SetMarkerSize(1.2);
   Graph_Graph_Graph_Graph91131->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph_Graph91131->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph_Graph91131->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph_Graph91131->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph91131->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph_Graph91131->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph91131->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph_Graph91131->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph_Graph91131->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph91131->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph_Graph91131->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph_Graph91131->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph_Graph91131->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph91131->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph_Graph91131->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph91131->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph91131->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph_Graph91131->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph_Graph91131->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph_Graph91131->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph_Graph91131->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph_Graph91131->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph91131->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph_Graph91131->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph91131->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph91131->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph_Graph91131->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph_Graph91131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph91131);
   
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
   gre->SetMarkerSize(1.2);
   gre->SetPoint(0,0.375,3.087379);
   gre->SetPointError(0,0.375,0.0922144);
   gre->SetPoint(1,1.125,3.120879);
   gre->SetPointError(1,0.375,0.1129627);
   gre->SetPoint(2,1.875,3.011236);
   gre->SetPointError(2,0.375,0.09196254);
   gre->SetPoint(3,2.625,2.902439);
   gre->SetPointError(3,0.375,0.09998476);
   gre->SetPoint(4,3.375,3.159091);
   gre->SetPointError(4,0.375,0.1233218);
   gre->SetPoint(5,4.125,2.77027);
   gre->SetPointError(5,0.375,0.1155343);
   gre->SetPoint(6,4.875,3.123457);
   gre->SetPointError(6,0.375,0.1081678);
   gre->SetPoint(7,5.625,3.168539);
   gre->SetPointError(7,0.375,0.1126244);
   gre->SetPoint(8,6.375,3.256757);
   gre->SetPointError(8,0.375,0.1179023);
   gre->SetPoint(9,7.125,3.068966);
   gre->SetPointError(9,0.375,0.1025415);
   gre->SetPoint(10,7.875,3.051948);
   gre->SetPointError(10,0.375,0.09525087);
   gre->SetPoint(11,8.625,2.973333);
   gre->SetPointError(11,0.375,0.1146563);
   gre->SetPoint(12,9.375,3.12766);
   gre->SetPointError(12,0.375,0.1107958);
   gre->SetPoint(13,10.125,3.117021);
   gre->SetPointError(13,0.375,0.1183258);
   gre->SetPoint(14,10.875,3.145833);
   gre->SetPointError(14,0.375,0.09769386);
   gre->SetPoint(15,11.625,3.344444);
   gre->SetPointError(15,0.375,0.1134869);
   gre->SetPoint(16,12.375,3.351852);
   gre->SetPointError(16,0.375,0.1074352);
   gre->SetPoint(17,13.125,2.989474);
   gre->SetPointError(17,0.375,0.1148235);
   gre->SetPoint(18,13.875,3.222222);
   gre->SetPointError(18,0.375,0.1194409);
   gre->SetPoint(19,14.625,3.514286);
   gre->SetPointError(19,0.375,0.1535204);
   gre->SetPoint(20,15.375,3.252747);
   gre->SetPointError(20,0.375,0.1258646);
   gre->SetPoint(21,16.125,3.48913);
   gre->SetPointError(21,0.375,0.1224885);
   gre->SetPoint(22,16.875,3.525);
   gre->SetPointError(22,0.375,0.1369021);
   gre->SetPoint(23,17.625,3.365591);
   gre->SetPointError(23,0.375,0.1297337);
   gre->SetPoint(24,18.375,3.441176);
   gre->SetPointError(24,0.375,0.1267504);
   gre->SetPoint(25,19.125,3.306931);
   gre->SetPointError(25,0.375,0.1210536);
   gre->SetPoint(26,19.875,3.596154);
   gre->SetPointError(26,0.375,0.1329006);
   gre->SetPoint(27,20.625,3.309278);
   gre->SetPointError(27,0.375,0.1205444);
   gre->SetPoint(28,21.375,3.366197);
   gre->SetPointError(28,0.375,0.1520076);
   gre->SetPoint(29,22.125,3.291139);
   gre->SetPointError(29,0.375,0.1148373);
   gre->SetPoint(30,22.875,3.666667);
   gre->SetPointError(30,0.375,0.1371407);
   gre->SetPoint(31,23.625,3.576087);
   gre->SetPointError(31,0.375,0.1427466);
   gre->SetPoint(32,24.375,3.465909);
   gre->SetPointError(32,0.375,0.1400532);
   gre->SetPoint(33,25.125,3.382979);
   gre->SetPointError(33,0.375,0.125068);
   gre->SetPoint(34,25.875,3.416667);
   gre->SetPointError(34,0.375,0.1347473);
   gre->SetPoint(35,26.625,3.604396);
   gre->SetPointError(35,0.375,0.1232329);
   gre->SetPoint(36,27.375,3.389474);
   gre->SetPointError(36,0.375,0.1174944);
   gre->SetPoint(37,28.125,3.493976);
   gre->SetPointError(37,0.375,0.1301801);
   gre->SetPoint(38,28.875,3.708861);
   gre->SetPointError(38,0.375,0.153109);
   gre->SetPoint(39,29.625,3.654206);
   gre->SetPointError(39,0.375,0.1354997);
   
   TH1F *Graph_Graph_Graph_Graph101232 = new TH1F("Graph_Graph_Graph_Graph101232","Graph",100,0,33);
   Graph_Graph_Graph_Graph101232->SetMinimum(2.534013);
   Graph_Graph_Graph_Graph101232->SetMaximum(3.982693);
   Graph_Graph_Graph_Graph101232->SetDirectory(0);
   Graph_Graph_Graph_Graph101232->SetStats(0);
   Graph_Graph_Graph_Graph101232->SetLineWidth(2);
   Graph_Graph_Graph_Graph101232->SetMarkerSize(1.2);
   Graph_Graph_Graph_Graph101232->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph_Graph101232->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph_Graph101232->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph_Graph101232->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101232->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph_Graph101232->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph101232->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph_Graph101232->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph_Graph101232->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph101232->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph_Graph101232->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph_Graph101232->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph_Graph101232->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101232->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph_Graph101232->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph101232->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph101232->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph_Graph101232->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph_Graph101232->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph_Graph101232->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph_Graph101232->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph_Graph101232->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101232->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph_Graph101232->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph101232->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph101232->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph_Graph101232->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph_Graph101232->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph101232);
   
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
   
   TLegend *leg = new TLegend(0.611809,0.2202381,0.9924623,0.3705357,NULL,"brNDC");
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
   TLegendEntry *entry=leg->AddEntry("NULL","Pandora v3","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#7293cb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","Pandora v1","f");
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
