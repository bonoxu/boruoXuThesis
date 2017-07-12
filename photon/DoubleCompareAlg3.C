{
//=========Macro generated from canvas: c1/
//=========  (Wed Jul 12 10:21:39 2017) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   c1->Range(-14.48718,-1.081081,56.02564,7.702703);
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
   gre->SetPoint(0,0.625,1.04918);
   gre->SetPointError(0,0.625,0.01598524);
   gre->SetPoint(1,1.875,1.041667);
   gre->SetPointError(1,0.625,0.01442122);
   gre->SetPoint(2,3.125,1.072222);
   gre->SetPointError(2,0.625,0.01929395);
   gre->SetPoint(3,4.375,1.042857);
   gre->SetPointError(3,0.625,0.01397624);
   gre->SetPoint(4,5.625,1.032258);
   gre->SetPointError(4,0.625,0.0184734);
   gre->SetPoint(5,6.875,1.095);
   gre->SetPointError(5,0.625,0.02301901);
   gre->SetPoint(6,8.125,1.413174);
   gre->SetPointError(6,0.625,0.0416979);
   gre->SetPoint(7,9.375,1.77381);
   gre->SetPointError(7,0.625,0.04267685);
   gre->SetPoint(8,10.625,1.967105);
   gre->SetPointError(8,0.625,0.03769888);
   gre->SetPoint(9,11.875,2.018405);
   gre->SetPointError(9,0.625,0.02029626);
   gre->SetPoint(10,13.125,2.043716);
   gre->SetPointError(10,0.625,0.02018922);
   gre->SetPoint(11,14.375,2.043956);
   gre->SetPointError(11,0.625,0.01875257);
   gre->SetPoint(12,15.625,2.042683);
   gre->SetPointError(12,0.625,0.01798648);
   gre->SetPoint(13,16.875,2.064748);
   gre->SetPointError(13,0.625,0.02087232);
   gre->SetPoint(14,18.125,2.055866);
   gre->SetPointError(14,0.625,0.01716579);
   gre->SetPoint(15,19.375,2.054878);
   gre->SetPointError(15,0.625,0.02156339);
   gre->SetPoint(16,20.625,2.069767);
   gre->SetPointError(16,0.625,0.01942486);
   gre->SetPoint(17,21.875,2.075949);
   gre->SetPointError(17,0.625,0.02107567);
   gre->SetPoint(18,23.125,2.079545);
   gre->SetPointError(18,0.625,0.02334831);
   gre->SetPoint(19,24.375,2.012048);
   gre->SetPointError(19,0.625,0.01201185);
   gre->SetPoint(20,25.625,2.050314);
   gre->SetPointError(20,0.625,0.02483877);
   gre->SetPoint(21,26.875,2.031056);
   gre->SetPointError(21,0.625,0.01624995);
   gre->SetPoint(22,28.125,2.055215);
   gre->SetPointError(22,0.625,0.02336374);
   gre->SetPoint(23,29.375,2.052632);
   gre->SetPointError(23,0.625,0.0178278);
   gre->SetPoint(24,30.625,2.045977);
   gre->SetPointError(24,0.625,0.01587725);
   gre->SetPoint(25,31.875,2.037433);
   gre->SetPointError(25,0.625,0.01580752);
   gre->SetPoint(26,33.125,2.043478);
   gre->SetPointError(26,0.625,0.01688475);
   gre->SetPoint(27,34.375,2);
   gre->SetPointError(27,0.625,0.01058201);
   gre->SetPoint(28,35.625,2.07947);
   gre->SetPointError(28,0.625,0.02392036);
   gre->SetPoint(29,36.875,2.062016);
   gre->SetPointError(29,0.625,0.02123504);
   gre->SetPoint(30,38.125,2.08);
   gre->SetPointError(30,0.625,0.03656349);
   gre->SetPoint(31,39.375,2);
   gre->SetPointError(31,0.625,0);
   gre->SetPoint(32,40.625,2.045455);
   gre->SetPointError(32,0.625,0.03140224);
   gre->SetPoint(33,41.875,2.05);
   gre->SetPointError(33,0.625,0.03446012);
   gre->SetPoint(34,43.125,2);
   gre->SetPointError(34,0.625,0);
   gre->SetPoint(35,44.375,2.037037);
   gre->SetPointError(35,0.625,0.03634469);
   gre->SetPoint(36,45.625,2);
   gre->SetPointError(36,0.625,0);
   gre->SetPoint(37,46.875,2);
   gre->SetPointError(37,0.625,0);
   gre->SetPoint(38,48.125,2);
   gre->SetPointError(38,0.625,0);
   gre->SetPoint(39,49.375,2.285714);
   gre->SetPointError(39,0.625,0.1707469);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0,55);
   Graph_Graph1->SetMinimum(0.869517);
   Graph_Graph1->SetMaximum(2.600729);
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
   gre->SetPoint(0,0.625,0);
   gre->SetPointError(0,0.625,0);
   gre->SetPoint(1,1.875,0);
   gre->SetPointError(1,0.625,0);
   gre->SetPoint(2,3.125,1);
   gre->SetPointError(2,0.625,0);
   gre->SetPoint(3,4.375,1);
   gre->SetPointError(3,0.625,0);
   gre->SetPoint(4,5.625,1);
   gre->SetPointError(4,0.625,0);
   gre->SetPoint(5,6.875,1);
   gre->SetPointError(5,0.625,0);
   gre->SetPoint(6,8.125,1);
   gre->SetPointError(6,0.625,0);
   gre->SetPoint(7,9.375,1);
   gre->SetPointError(7,0.625,0);
   gre->SetPoint(8,10.625,1);
   gre->SetPointError(8,0.625,0);
   gre->SetPoint(9,11.875,1.8);
   gre->SetPointError(9,0.625,0.275681);
   gre->SetPoint(10,13.125,1.5);
   gre->SetPointError(10,0.625,0.1675148);
   gre->SetPoint(11,14.375,1.727273);
   gre->SetPointError(11,0.625,0.1859045);
   gre->SetPoint(12,15.625,1.818182);
   gre->SetPointError(12,0.625,0.2512179);
   gre->SetPoint(13,16.875,1.9);
   gre->SetPointError(13,0.625,0.1857418);
   gre->SetPoint(14,18.125,1.8);
   gre->SetPointError(14,0.625,0.1897367);
   gre->SetPoint(15,19.375,2.058824);
   gre->SetPointError(15,0.625,0.1549771);
   gre->SetPoint(16,20.625,1.954545);
   gre->SetPointError(16,0.625,0.1636019);
   gre->SetPoint(17,21.875,2.190476);
   gre->SetPointError(17,0.625,0.1732581);
   gre->SetPoint(18,23.125,1.866667);
   gre->SetPointError(18,0.625,0.2079886);
   gre->SetPoint(19,24.375,2.192308);
   gre->SetPointError(19,0.625,0.1441074);
   gre->SetPoint(20,25.625,2.470588);
   gre->SetPointError(20,0.625,0.1688071);
   gre->SetPoint(21,26.875,2.363636);
   gre->SetPointError(21,0.625,0.1513773);
   gre->SetPoint(22,28.125,2.2);
   gre->SetPointError(22,0.625,0.1341641);
   gre->SetPoint(23,29.375,2.28);
   gre->SetPointError(23,0.625,0.132906);
   gre->SetPoint(24,30.625,2.206897);
   gre->SetPointError(24,0.625,0.1131046);
   gre->SetPoint(25,31.875,2.432432);
   gre->SetPointError(25,0.625,0.1049578);
   gre->SetPoint(26,33.125,2.607143);
   gre->SetPointError(26,0.625,0.1167074);
   gre->SetPoint(27,34.375,2.631579);
   gre->SetPointError(27,0.625,0.1106647);
   gre->SetPoint(28,35.625,2.5);
   gre->SetPointError(28,0.625,0.09805807);
   gre->SetPoint(29,36.875,2.585366);
   gre->SetPointError(29,0.625,0.1033387);
   gre->SetPoint(30,38.125,2.432432);
   gre->SetPointError(30,0.625,0.1049578);
   gre->SetPoint(31,39.375,2.622222);
   gre->SetPointError(31,0.625,0.07881147);
   gre->SetPoint(32,40.625,2.6);
   gre->SetPointError(32,0.625,0.1006104);
   gre->SetPoint(33,41.875,2.636364);
   gre->SetPointError(33,0.625,0.09406816);
   gre->SetPoint(34,43.125,2.477273);
   gre->SetPointError(34,0.625,0.08187269);
   gre->SetPoint(35,44.375,2.526316);
   gre->SetPointError(35,0.625,0.08913902);
   gre->SetPoint(36,45.625,2.513514);
   gre->SetPointError(36,0.625,0.09835478);
   gre->SetPoint(37,46.875,2.702703);
   gre->SetPointError(37,0.625,0.0751416);
   gre->SetPoint(38,48.125,2.464286);
   gre->SetPointError(38,0.625,0.1069301);
   gre->SetPoint(39,49.375,2.514286);
   gre->SetPointError(39,0.625,0.1019918);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0,55);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(3.055629);
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
   
   gre = new TGraphErrors(40);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#83ba5b");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#83ba5b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0.625,0);
   gre->SetPointError(0,0.625,0);
   gre->SetPoint(1,1.875,0);
   gre->SetPointError(1,0.625,0);
   gre->SetPoint(2,3.125,1);
   gre->SetPointError(2,0.625,0);
   gre->SetPoint(3,4.375,1);
   gre->SetPointError(3,0.625,0);
   gre->SetPoint(4,5.625,1);
   gre->SetPointError(4,0.625,0);
   gre->SetPoint(5,6.875,1);
   gre->SetPointError(5,0.625,0);
   gre->SetPoint(6,8.125,1);
   gre->SetPointError(6,0.625,0);
   gre->SetPoint(7,9.375,1);
   gre->SetPointError(7,0.625,0);
   gre->SetPoint(8,10.625,1);
   gre->SetPointError(8,0.625,0);
   gre->SetPoint(9,11.875,1.4375);
   gre->SetPointError(9,0.625,0.1522937);
   gre->SetPoint(10,13.125,1.411765);
   gre->SetPointError(10,0.625,0.1454934);
   gre->SetPoint(11,14.375,1.571429);
   gre->SetPointError(11,0.625,0.1664235);
   gre->SetPoint(12,15.625,1.666667);
   gre->SetPointError(12,0.625,0.1800206);
   gre->SetPoint(13,16.875,1.65);
   gre->SetPointError(13,0.625,0.1279648);
   gre->SetPoint(14,18.125,1.7);
   gre->SetPointError(14,0.625,0.1449138);
   gre->SetPoint(15,19.375,1.823529);
   gre->SetPointError(15,0.625,0.09245944);
   gre->SetPoint(16,20.625,1.727273);
   gre->SetPointError(16,0.625,0.1146648);
   gre->SetPoint(17,21.875,1.761905);
   gre->SetPointError(17,0.625,0.09294286);
   gre->SetPoint(18,23.125,1.6);
   gre->SetPointError(18,0.625,0.1264911);
   gre->SetPoint(19,24.375,1.846154);
   gre->SetPointError(19,0.625,0.08924913);
   gre->SetPoint(20,25.625,1.941176);
   gre->SetPointError(20,0.625,0.1008815);
   gre->SetPoint(21,26.875,2.043478);
   gre->SetPointError(21,0.625,0.1301193);
   gre->SetPoint(22,28.125,1.9);
   gre->SetPointError(22,0.625,0.06708204);
   gre->SetPoint(23,29.375,1.92);
   gre->SetPointError(23,0.625,0.07838367);
   gre->SetPoint(24,30.625,1.931034);
   gre->SetPointError(24,0.625,0.06776603);
   gre->SetPoint(25,31.875,1.945946);
   gre->SetPointError(25,0.625,0.05331859);
   gre->SetPoint(26,33.125,2);
   gre->SetPointError(26,0.625,0.07142857);
   gre->SetPoint(27,34.375,2.052632);
   gre->SetPointError(27,0.625,0.05122782);
   gre->SetPoint(28,35.625,2.153846);
   gre->SetPointError(28,0.625,0.07075894);
   gre->SetPoint(29,36.875,1.95122);
   gre->SetPointError(29,0.625,0.04818193);
   gre->SetPoint(30,38.125,2);
   gre->SetPointError(30,0.625,0.06620243);
   gre->SetPoint(31,39.375,2.043478);
   gre->SetPointError(31,0.625,0.0528625);
   gre->SetPoint(32,40.625,2.057143);
   gre->SetPointError(32,0.625,0.06931569);
   gre->SetPoint(33,41.875,2.060606);
   gre->SetPointError(33,0.625,0.05968072);
   gre->SetPoint(34,43.125,1.977273);
   gre->SetPointError(34,0.625,0.02246752);
   gre->SetPoint(35,44.375,2);
   gre->SetPointError(35,0.625,0.03626189);
   gre->SetPoint(36,45.625,2.051282);
   gre->SetPointError(36,0.625,0.07205738);
   gre->SetPoint(37,46.875,2.054054);
   gre->SetPointError(37,0.625,0.03717461);
   gre->SetPoint(38,48.125,1.966667);
   gre->SetPointError(38,0.625,0.07428673);
   gre->SetPoint(39,49.375,2.057143);
   gre->SetPointError(39,0.625,0.05632061);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0,55);
   Graph_Graph3->SetMinimum(0);
   Graph_Graph3->SetMaximum(2.447066);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   Graph_Graph3->SetLineWidth(2);
   Graph_Graph3->SetMarkerSize(1.2);
   Graph_Graph3->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph3->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph3->GetXaxis()->SetLabelColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph3->GetXaxis()->SetTitleColor(ci);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph3->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph3->GetYaxis()->SetLabelColor(ci);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph3->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph3->GetYaxis()->SetTitleColor(ci);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph3->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph3->GetZaxis()->SetLabelColor(ci);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph3->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph3->GetZaxis()->SetTitleColor(ci);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph3);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(40);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#d35e60");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#d35e60");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0.625,4.16568);
   gre->SetPointError(0,0.625,0.1102818);
   gre->SetPoint(1,1.875,4.26257);
   gre->SetPointError(1,0.625,0.09524431);
   gre->SetPoint(2,3.125,4.301205);
   gre->SetPointError(2,0.625,0.1041559);
   gre->SetPoint(3,4.375,4.225131);
   gre->SetPointError(3,0.625,0.09443252);
   gre->SetPoint(4,5.625,4.402299);
   gre->SetPointError(4,0.625,0.1087163);
   gre->SetPoint(5,6.875,4.237838);
   gre->SetPointError(5,0.625,0.1027788);
   gre->SetPoint(6,8.125,4.447205);
   gre->SetPointError(6,0.625,0.1064635);
   gre->SetPoint(7,9.375,4.394904);
   gre->SetPointError(7,0.625,0.1138536);
   gre->SetPoint(8,10.625,4.464789);
   gre->SetPointError(8,0.625,0.1349697);
   gre->SetPoint(9,11.875,4.333333);
   gre->SetPointError(9,0.625,0.1280492);
   gre->SetPoint(10,13.125,4.475904);
   gre->SetPointError(10,0.625,0.1257008);
   gre->SetPoint(11,14.375,4.607595);
   gre->SetPointError(11,0.625,0.1229985);
   gre->SetPoint(12,15.625,4.608696);
   gre->SetPointError(12,0.625,0.1602203);
   gre->SetPoint(13,16.875,4.477876);
   gre->SetPointError(13,0.625,0.1612939);
   gre->SetPoint(14,18.125,4.82);
   gre->SetPointError(14,0.625,0.1336895);
   gre->SetPoint(15,19.375,4.691176);
   gre->SetPointError(15,0.625,0.1420145);
   gre->SetPoint(16,20.625,4.808511);
   gre->SetPointError(16,0.625,0.1497495);
   gre->SetPoint(17,21.875,4.711268);
   gre->SetPointError(17,0.625,0.1632166);
   gre->SetPoint(18,23.125,4.753333);
   gre->SetPointError(18,0.625,0.139821);
   gre->SetPoint(19,24.375,4.894737);
   gre->SetPointError(19,0.625,0.1489105);
   gre->SetPoint(20,25.625,5.190789);
   gre->SetPointError(20,0.625,0.1434553);
   gre->SetPoint(21,26.875,5.14);
   gre->SetPointError(21,0.625,0.1526157);
   gre->SetPoint(22,28.125,5.03871);
   gre->SetPointError(22,0.625,0.1359084);
   gre->SetPoint(23,29.375,5.340782);
   gre->SetPointError(23,0.625,0.1185375);
   gre->SetPoint(24,30.625,5.233533);
   gre->SetPointError(24,0.625,0.117934);
   gre->SetPoint(25,31.875,5.159341);
   gre->SetPointError(25,0.625,0.1184036);
   gre->SetPoint(26,33.125,5.538889);
   gre->SetPointError(26,0.625,0.1230688);
   gre->SetPoint(27,34.375,5.449438);
   gre->SetPointError(27,0.625,0.1322369);
   gre->SetPoint(28,35.625,5.204082);
   gre->SetPointError(28,0.625,0.1367123);
   gre->SetPoint(29,36.875,5.373016);
   gre->SetPointError(29,0.625,0.1513083);
   gre->SetPoint(30,38.125,5.375);
   gre->SetPointError(30,0.625,0.1918854);
   gre->SetPoint(31,39.375,5.660377);
   gre->SetPointError(31,0.625,0.2183197);
   gre->SetPoint(32,40.625,5.302326);
   gre->SetPointError(32,0.625,0.2267529);
   gre->SetPoint(33,41.875,5.5);
   gre->SetPointError(33,0.625,0.2677236);
   gre->SetPoint(34,43.125,5.727273);
   gre->SetPointError(34,0.625,0.3289215);
   gre->SetPoint(35,44.375,5.423077);
   gre->SetPointError(35,0.625,0.288708);
   gre->SetPoint(36,45.625,6.142857);
   gre->SetPointError(36,0.625,0.3148418);
   gre->SetPoint(37,46.875,6.285714);
   gre->SetPointError(37,0.625,0.3328471);
   gre->SetPoint(38,48.125,5.9);
   gre->SetPointError(38,0.625,0.4571652);
   gre->SetPoint(39,49.375,4.714286);
   gre->SetPointError(39,0.625,0.8008742);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0,55);
   Graph_Graph4->SetMinimum(3.642897);
   Graph_Graph4->SetMaximum(6.889076);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   Graph_Graph4->SetLineWidth(2);
   Graph_Graph4->SetMarkerSize(1.2);
   Graph_Graph4->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph4->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph4->GetXaxis()->SetLabelColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph4->GetXaxis()->SetTitleColor(ci);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph4->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph4->GetYaxis()->SetLabelColor(ci);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph4->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph4->GetYaxis()->SetTitleColor(ci);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph4->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph4->GetZaxis()->SetLabelColor(ci);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph4->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph4->GetZaxis()->SetTitleColor(ci);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph4);
   
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
   gre->SetPoint(0,0.625,1.04918);
   gre->SetPointError(0,0.625,0.01598524);
   gre->SetPoint(1,1.875,1.041667);
   gre->SetPointError(1,0.625,0.01442122);
   gre->SetPoint(2,3.125,1.072222);
   gre->SetPointError(2,0.625,0.01929395);
   gre->SetPoint(3,4.375,1.042857);
   gre->SetPointError(3,0.625,0.01397624);
   gre->SetPoint(4,5.625,1.032258);
   gre->SetPointError(4,0.625,0.0184734);
   gre->SetPoint(5,6.875,1.095);
   gre->SetPointError(5,0.625,0.02301901);
   gre->SetPoint(6,8.125,1.413174);
   gre->SetPointError(6,0.625,0.0416979);
   gre->SetPoint(7,9.375,1.77381);
   gre->SetPointError(7,0.625,0.04267685);
   gre->SetPoint(8,10.625,1.967105);
   gre->SetPointError(8,0.625,0.03769888);
   gre->SetPoint(9,11.875,2.018405);
   gre->SetPointError(9,0.625,0.02029626);
   gre->SetPoint(10,13.125,2.043716);
   gre->SetPointError(10,0.625,0.02018922);
   gre->SetPoint(11,14.375,2.043956);
   gre->SetPointError(11,0.625,0.01875257);
   gre->SetPoint(12,15.625,2.042683);
   gre->SetPointError(12,0.625,0.01798648);
   gre->SetPoint(13,16.875,2.064748);
   gre->SetPointError(13,0.625,0.02087232);
   gre->SetPoint(14,18.125,2.055866);
   gre->SetPointError(14,0.625,0.01716579);
   gre->SetPoint(15,19.375,2.054878);
   gre->SetPointError(15,0.625,0.02156339);
   gre->SetPoint(16,20.625,2.069767);
   gre->SetPointError(16,0.625,0.01942486);
   gre->SetPoint(17,21.875,2.075949);
   gre->SetPointError(17,0.625,0.02107567);
   gre->SetPoint(18,23.125,2.079545);
   gre->SetPointError(18,0.625,0.02334831);
   gre->SetPoint(19,24.375,2.012048);
   gre->SetPointError(19,0.625,0.01201185);
   gre->SetPoint(20,25.625,2.050314);
   gre->SetPointError(20,0.625,0.02483877);
   gre->SetPoint(21,26.875,2.031056);
   gre->SetPointError(21,0.625,0.01624995);
   gre->SetPoint(22,28.125,2.055215);
   gre->SetPointError(22,0.625,0.02336374);
   gre->SetPoint(23,29.375,2.052632);
   gre->SetPointError(23,0.625,0.0178278);
   gre->SetPoint(24,30.625,2.045977);
   gre->SetPointError(24,0.625,0.01587725);
   gre->SetPoint(25,31.875,2.037433);
   gre->SetPointError(25,0.625,0.01580752);
   gre->SetPoint(26,33.125,2.043478);
   gre->SetPointError(26,0.625,0.01688475);
   gre->SetPoint(27,34.375,2);
   gre->SetPointError(27,0.625,0.01058201);
   gre->SetPoint(28,35.625,2.07947);
   gre->SetPointError(28,0.625,0.02392036);
   gre->SetPoint(29,36.875,2.062016);
   gre->SetPointError(29,0.625,0.02123504);
   gre->SetPoint(30,38.125,2.08);
   gre->SetPointError(30,0.625,0.03656349);
   gre->SetPoint(31,39.375,2);
   gre->SetPointError(31,0.625,0);
   gre->SetPoint(32,40.625,2.045455);
   gre->SetPointError(32,0.625,0.03140224);
   gre->SetPoint(33,41.875,2.05);
   gre->SetPointError(33,0.625,0.03446012);
   gre->SetPoint(34,43.125,2);
   gre->SetPointError(34,0.625,0);
   gre->SetPoint(35,44.375,2.037037);
   gre->SetPointError(35,0.625,0.03634469);
   gre->SetPoint(36,45.625,2);
   gre->SetPointError(36,0.625,0);
   gre->SetPoint(37,46.875,2);
   gre->SetPointError(37,0.625,0);
   gre->SetPoint(38,48.125,2);
   gre->SetPointError(38,0.625,0);
   gre->SetPoint(39,49.375,2.285714);
   gre->SetPointError(39,0.625,0.1707469);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","Graph",100,0,55);
   Graph_Graph_Graph15->SetMinimum(0.869517);
   Graph_Graph_Graph15->SetMaximum(2.600729);
   Graph_Graph_Graph15->SetDirectory(0);
   Graph_Graph_Graph15->SetStats(0);
   Graph_Graph_Graph15->SetLineWidth(2);
   Graph_Graph_Graph15->SetMarkerSize(1.2);
   Graph_Graph_Graph15->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph15->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph15->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph15->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph15->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph15->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph15->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph15->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph15->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph15->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph15->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph15->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph15->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph15->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph15->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph15->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph15->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph15->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph15->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph15->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph15->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph15->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph15->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph15->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph15);
   
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
   gre->SetPoint(0,0.625,0);
   gre->SetPointError(0,0.625,0);
   gre->SetPoint(1,1.875,0);
   gre->SetPointError(1,0.625,0);
   gre->SetPoint(2,3.125,1);
   gre->SetPointError(2,0.625,0);
   gre->SetPoint(3,4.375,1);
   gre->SetPointError(3,0.625,0);
   gre->SetPoint(4,5.625,1);
   gre->SetPointError(4,0.625,0);
   gre->SetPoint(5,6.875,1);
   gre->SetPointError(5,0.625,0);
   gre->SetPoint(6,8.125,1);
   gre->SetPointError(6,0.625,0);
   gre->SetPoint(7,9.375,1);
   gre->SetPointError(7,0.625,0);
   gre->SetPoint(8,10.625,1);
   gre->SetPointError(8,0.625,0);
   gre->SetPoint(9,11.875,1.8);
   gre->SetPointError(9,0.625,0.275681);
   gre->SetPoint(10,13.125,1.5);
   gre->SetPointError(10,0.625,0.1675148);
   gre->SetPoint(11,14.375,1.727273);
   gre->SetPointError(11,0.625,0.1859045);
   gre->SetPoint(12,15.625,1.818182);
   gre->SetPointError(12,0.625,0.2512179);
   gre->SetPoint(13,16.875,1.9);
   gre->SetPointError(13,0.625,0.1857418);
   gre->SetPoint(14,18.125,1.8);
   gre->SetPointError(14,0.625,0.1897367);
   gre->SetPoint(15,19.375,2.058824);
   gre->SetPointError(15,0.625,0.1549771);
   gre->SetPoint(16,20.625,1.954545);
   gre->SetPointError(16,0.625,0.1636019);
   gre->SetPoint(17,21.875,2.190476);
   gre->SetPointError(17,0.625,0.1732581);
   gre->SetPoint(18,23.125,1.866667);
   gre->SetPointError(18,0.625,0.2079886);
   gre->SetPoint(19,24.375,2.192308);
   gre->SetPointError(19,0.625,0.1441074);
   gre->SetPoint(20,25.625,2.470588);
   gre->SetPointError(20,0.625,0.1688071);
   gre->SetPoint(21,26.875,2.363636);
   gre->SetPointError(21,0.625,0.1513773);
   gre->SetPoint(22,28.125,2.2);
   gre->SetPointError(22,0.625,0.1341641);
   gre->SetPoint(23,29.375,2.28);
   gre->SetPointError(23,0.625,0.132906);
   gre->SetPoint(24,30.625,2.206897);
   gre->SetPointError(24,0.625,0.1131046);
   gre->SetPoint(25,31.875,2.432432);
   gre->SetPointError(25,0.625,0.1049578);
   gre->SetPoint(26,33.125,2.607143);
   gre->SetPointError(26,0.625,0.1167074);
   gre->SetPoint(27,34.375,2.631579);
   gre->SetPointError(27,0.625,0.1106647);
   gre->SetPoint(28,35.625,2.5);
   gre->SetPointError(28,0.625,0.09805807);
   gre->SetPoint(29,36.875,2.585366);
   gre->SetPointError(29,0.625,0.1033387);
   gre->SetPoint(30,38.125,2.432432);
   gre->SetPointError(30,0.625,0.1049578);
   gre->SetPoint(31,39.375,2.622222);
   gre->SetPointError(31,0.625,0.07881147);
   gre->SetPoint(32,40.625,2.6);
   gre->SetPointError(32,0.625,0.1006104);
   gre->SetPoint(33,41.875,2.636364);
   gre->SetPointError(33,0.625,0.09406816);
   gre->SetPoint(34,43.125,2.477273);
   gre->SetPointError(34,0.625,0.08187269);
   gre->SetPoint(35,44.375,2.526316);
   gre->SetPointError(35,0.625,0.08913902);
   gre->SetPoint(36,45.625,2.513514);
   gre->SetPointError(36,0.625,0.09835478);
   gre->SetPoint(37,46.875,2.702703);
   gre->SetPointError(37,0.625,0.0751416);
   gre->SetPoint(38,48.125,2.464286);
   gre->SetPointError(38,0.625,0.1069301);
   gre->SetPoint(39,49.375,2.514286);
   gre->SetPointError(39,0.625,0.1019918);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,0,55);
   Graph_Graph_Graph26->SetMinimum(0);
   Graph_Graph_Graph26->SetMaximum(3.055629);
   Graph_Graph_Graph26->SetDirectory(0);
   Graph_Graph_Graph26->SetStats(0);
   Graph_Graph_Graph26->SetLineWidth(2);
   Graph_Graph_Graph26->SetMarkerSize(1.2);
   Graph_Graph_Graph26->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph26->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph26->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph26->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph26->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph26->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph26->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph26->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph26->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph26->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph26->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph26->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph26->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph26->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph26->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph26->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph26->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph26->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph26->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph26->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph26->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph26->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph26->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph26->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph26->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph26->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph26->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph26->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph26);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(40);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#83ba5b");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#83ba5b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0.625,0);
   gre->SetPointError(0,0.625,0);
   gre->SetPoint(1,1.875,0);
   gre->SetPointError(1,0.625,0);
   gre->SetPoint(2,3.125,1);
   gre->SetPointError(2,0.625,0);
   gre->SetPoint(3,4.375,1);
   gre->SetPointError(3,0.625,0);
   gre->SetPoint(4,5.625,1);
   gre->SetPointError(4,0.625,0);
   gre->SetPoint(5,6.875,1);
   gre->SetPointError(5,0.625,0);
   gre->SetPoint(6,8.125,1);
   gre->SetPointError(6,0.625,0);
   gre->SetPoint(7,9.375,1);
   gre->SetPointError(7,0.625,0);
   gre->SetPoint(8,10.625,1);
   gre->SetPointError(8,0.625,0);
   gre->SetPoint(9,11.875,1.4375);
   gre->SetPointError(9,0.625,0.1522937);
   gre->SetPoint(10,13.125,1.411765);
   gre->SetPointError(10,0.625,0.1454934);
   gre->SetPoint(11,14.375,1.571429);
   gre->SetPointError(11,0.625,0.1664235);
   gre->SetPoint(12,15.625,1.666667);
   gre->SetPointError(12,0.625,0.1800206);
   gre->SetPoint(13,16.875,1.65);
   gre->SetPointError(13,0.625,0.1279648);
   gre->SetPoint(14,18.125,1.7);
   gre->SetPointError(14,0.625,0.1449138);
   gre->SetPoint(15,19.375,1.823529);
   gre->SetPointError(15,0.625,0.09245944);
   gre->SetPoint(16,20.625,1.727273);
   gre->SetPointError(16,0.625,0.1146648);
   gre->SetPoint(17,21.875,1.761905);
   gre->SetPointError(17,0.625,0.09294286);
   gre->SetPoint(18,23.125,1.6);
   gre->SetPointError(18,0.625,0.1264911);
   gre->SetPoint(19,24.375,1.846154);
   gre->SetPointError(19,0.625,0.08924913);
   gre->SetPoint(20,25.625,1.941176);
   gre->SetPointError(20,0.625,0.1008815);
   gre->SetPoint(21,26.875,2.043478);
   gre->SetPointError(21,0.625,0.1301193);
   gre->SetPoint(22,28.125,1.9);
   gre->SetPointError(22,0.625,0.06708204);
   gre->SetPoint(23,29.375,1.92);
   gre->SetPointError(23,0.625,0.07838367);
   gre->SetPoint(24,30.625,1.931034);
   gre->SetPointError(24,0.625,0.06776603);
   gre->SetPoint(25,31.875,1.945946);
   gre->SetPointError(25,0.625,0.05331859);
   gre->SetPoint(26,33.125,2);
   gre->SetPointError(26,0.625,0.07142857);
   gre->SetPoint(27,34.375,2.052632);
   gre->SetPointError(27,0.625,0.05122782);
   gre->SetPoint(28,35.625,2.153846);
   gre->SetPointError(28,0.625,0.07075894);
   gre->SetPoint(29,36.875,1.95122);
   gre->SetPointError(29,0.625,0.04818193);
   gre->SetPoint(30,38.125,2);
   gre->SetPointError(30,0.625,0.06620243);
   gre->SetPoint(31,39.375,2.043478);
   gre->SetPointError(31,0.625,0.0528625);
   gre->SetPoint(32,40.625,2.057143);
   gre->SetPointError(32,0.625,0.06931569);
   gre->SetPoint(33,41.875,2.060606);
   gre->SetPointError(33,0.625,0.05968072);
   gre->SetPoint(34,43.125,1.977273);
   gre->SetPointError(34,0.625,0.02246752);
   gre->SetPoint(35,44.375,2);
   gre->SetPointError(35,0.625,0.03626189);
   gre->SetPoint(36,45.625,2.051282);
   gre->SetPointError(36,0.625,0.07205738);
   gre->SetPoint(37,46.875,2.054054);
   gre->SetPointError(37,0.625,0.03717461);
   gre->SetPoint(38,48.125,1.966667);
   gre->SetPointError(38,0.625,0.07428673);
   gre->SetPoint(39,49.375,2.057143);
   gre->SetPointError(39,0.625,0.05632061);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,0,55);
   Graph_Graph_Graph37->SetMinimum(0);
   Graph_Graph_Graph37->SetMaximum(2.447066);
   Graph_Graph_Graph37->SetDirectory(0);
   Graph_Graph_Graph37->SetStats(0);
   Graph_Graph_Graph37->SetLineWidth(2);
   Graph_Graph_Graph37->SetMarkerSize(1.2);
   Graph_Graph_Graph37->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph37->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph37->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph37->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph37->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph37->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph37->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph37->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph37->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph37->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph37->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph37->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph37->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph37->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph37->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph37->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph37->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph37->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph37->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph37->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph37->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph37->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph37->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph37->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph37->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph37->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph37->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph37->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph37);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(40);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#d35e60");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#d35e60");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0.625,4.16568);
   gre->SetPointError(0,0.625,0.1102818);
   gre->SetPoint(1,1.875,4.26257);
   gre->SetPointError(1,0.625,0.09524431);
   gre->SetPoint(2,3.125,4.301205);
   gre->SetPointError(2,0.625,0.1041559);
   gre->SetPoint(3,4.375,4.225131);
   gre->SetPointError(3,0.625,0.09443252);
   gre->SetPoint(4,5.625,4.402299);
   gre->SetPointError(4,0.625,0.1087163);
   gre->SetPoint(5,6.875,4.237838);
   gre->SetPointError(5,0.625,0.1027788);
   gre->SetPoint(6,8.125,4.447205);
   gre->SetPointError(6,0.625,0.1064635);
   gre->SetPoint(7,9.375,4.394904);
   gre->SetPointError(7,0.625,0.1138536);
   gre->SetPoint(8,10.625,4.464789);
   gre->SetPointError(8,0.625,0.1349697);
   gre->SetPoint(9,11.875,4.333333);
   gre->SetPointError(9,0.625,0.1280492);
   gre->SetPoint(10,13.125,4.475904);
   gre->SetPointError(10,0.625,0.1257008);
   gre->SetPoint(11,14.375,4.607595);
   gre->SetPointError(11,0.625,0.1229985);
   gre->SetPoint(12,15.625,4.608696);
   gre->SetPointError(12,0.625,0.1602203);
   gre->SetPoint(13,16.875,4.477876);
   gre->SetPointError(13,0.625,0.1612939);
   gre->SetPoint(14,18.125,4.82);
   gre->SetPointError(14,0.625,0.1336895);
   gre->SetPoint(15,19.375,4.691176);
   gre->SetPointError(15,0.625,0.1420145);
   gre->SetPoint(16,20.625,4.808511);
   gre->SetPointError(16,0.625,0.1497495);
   gre->SetPoint(17,21.875,4.711268);
   gre->SetPointError(17,0.625,0.1632166);
   gre->SetPoint(18,23.125,4.753333);
   gre->SetPointError(18,0.625,0.139821);
   gre->SetPoint(19,24.375,4.894737);
   gre->SetPointError(19,0.625,0.1489105);
   gre->SetPoint(20,25.625,5.190789);
   gre->SetPointError(20,0.625,0.1434553);
   gre->SetPoint(21,26.875,5.14);
   gre->SetPointError(21,0.625,0.1526157);
   gre->SetPoint(22,28.125,5.03871);
   gre->SetPointError(22,0.625,0.1359084);
   gre->SetPoint(23,29.375,5.340782);
   gre->SetPointError(23,0.625,0.1185375);
   gre->SetPoint(24,30.625,5.233533);
   gre->SetPointError(24,0.625,0.117934);
   gre->SetPoint(25,31.875,5.159341);
   gre->SetPointError(25,0.625,0.1184036);
   gre->SetPoint(26,33.125,5.538889);
   gre->SetPointError(26,0.625,0.1230688);
   gre->SetPoint(27,34.375,5.449438);
   gre->SetPointError(27,0.625,0.1322369);
   gre->SetPoint(28,35.625,5.204082);
   gre->SetPointError(28,0.625,0.1367123);
   gre->SetPoint(29,36.875,5.373016);
   gre->SetPointError(29,0.625,0.1513083);
   gre->SetPoint(30,38.125,5.375);
   gre->SetPointError(30,0.625,0.1918854);
   gre->SetPoint(31,39.375,5.660377);
   gre->SetPointError(31,0.625,0.2183197);
   gre->SetPoint(32,40.625,5.302326);
   gre->SetPointError(32,0.625,0.2267529);
   gre->SetPoint(33,41.875,5.5);
   gre->SetPointError(33,0.625,0.2677236);
   gre->SetPoint(34,43.125,5.727273);
   gre->SetPointError(34,0.625,0.3289215);
   gre->SetPoint(35,44.375,5.423077);
   gre->SetPointError(35,0.625,0.288708);
   gre->SetPoint(36,45.625,6.142857);
   gre->SetPointError(36,0.625,0.3148418);
   gre->SetPoint(37,46.875,6.285714);
   gre->SetPointError(37,0.625,0.3328471);
   gre->SetPoint(38,48.125,5.9);
   gre->SetPointError(38,0.625,0.4571652);
   gre->SetPoint(39,49.375,4.714286);
   gre->SetPointError(39,0.625,0.8008742);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","Graph",100,0,55);
   Graph_Graph_Graph48->SetMinimum(3.642897);
   Graph_Graph_Graph48->SetMaximum(6.889076);
   Graph_Graph_Graph48->SetDirectory(0);
   Graph_Graph_Graph48->SetStats(0);
   Graph_Graph_Graph48->SetLineWidth(2);
   Graph_Graph_Graph48->SetMarkerSize(1.2);
   Graph_Graph_Graph48->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph48->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph48->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph48->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph48->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph48->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph48->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph48->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph48->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph48->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph48->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph48->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph48->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph48->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph48->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph48->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph48->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph48->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph48->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph48->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph48->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph48->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph48->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph48->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph48->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph48->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph48->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph48->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph48);
   
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
   
   TLegend *leg = new TLegend(0.1821608,0.7455357,0.5628141,0.8958333,NULL,"brNDC");
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
   TLegendEntry *entry=leg->AddEntry("0","Pandora v3","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#7293cb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("1","ECal Frag Removal","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#e1974c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("2","E/HCAL Frag Removal","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#83ba5b");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("3","Pandora v1","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#d35e60");
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
