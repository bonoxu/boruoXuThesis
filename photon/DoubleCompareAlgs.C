{
//=========Macro generated from canvas: c1/
//=========  (Wed Mar 22 14:33:32 2017) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   c1->Range(-14.48718,-0.1081081,56.02564,3.27027);
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
   
   TH1F *Graph_Graph_Graph14 = new TH1F("Graph_Graph_Graph14","Graph",100,0,55);
   Graph_Graph_Graph14->SetMinimum(0.869517);
   Graph_Graph_Graph14->SetMaximum(2.600729);
   Graph_Graph_Graph14->SetDirectory(0);
   Graph_Graph_Graph14->SetStats(0);
   Graph_Graph_Graph14->SetLineWidth(2);
   Graph_Graph_Graph14->SetMarkerSize(1.2);
   Graph_Graph_Graph14->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph14->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph14->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph14->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph14->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph14->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph14->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph14->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph14->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph14->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph14->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph14->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph14->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph14->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph14->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph14->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph14->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph14->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph14->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph14->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph14->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph14->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph14->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph14->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph14);
   
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
   
   TH1F *Graph_Graph_Graph25 = new TH1F("Graph_Graph_Graph25","Graph",100,0,55);
   Graph_Graph_Graph25->SetMinimum(0);
   Graph_Graph_Graph25->SetMaximum(3.055629);
   Graph_Graph_Graph25->SetDirectory(0);
   Graph_Graph_Graph25->SetStats(0);
   Graph_Graph_Graph25->SetLineWidth(2);
   Graph_Graph_Graph25->SetMarkerSize(1.2);
   Graph_Graph_Graph25->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph25->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph25->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph25->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph25->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph25->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph25->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph25->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph25->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph25->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph25->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph25->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph25->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph25->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph25->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph25->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph25->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph25->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph25->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph25->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph25->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph25->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph25->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph25->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph25->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph25->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph25->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph25->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph25);
   
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
   
   TH1F *Graph_Graph_Graph36 = new TH1F("Graph_Graph_Graph36","Graph",100,0,55);
   Graph_Graph_Graph36->SetMinimum(0);
   Graph_Graph_Graph36->SetMaximum(2.447066);
   Graph_Graph_Graph36->SetDirectory(0);
   Graph_Graph_Graph36->SetStats(0);
   Graph_Graph_Graph36->SetLineWidth(2);
   Graph_Graph_Graph36->SetMarkerSize(1.2);
   Graph_Graph_Graph36->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph36->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph36->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph36->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph36->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph36->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph36->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph36->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph36->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph36->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph36->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph36->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph36->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph36->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph36->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph36->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph36->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph36->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph36->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph36->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph36->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph36->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph36->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph36->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph36->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph36->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph36->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph36->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph36);
   
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
   
   TLegend *leg = new TLegend(0.4246231,0.2113095,0.8052764,0.3616071,NULL,"brNDC");
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
   entry=leg->AddEntry("1","ECAL Frag Removal","f");
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
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
