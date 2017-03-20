{
//=========Macro generated from canvas: c1/
//=========  (Mon Mar 20 16:07:39 2017) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "",578,301,800,700);
   gStyle->SetOptStat(0);
   c1->Range(-8.692308,-0.01948467,33.61538,0.08876349);
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
   gre->SetPoint(0,0.375,0);
   gre->SetPointError(0,0.375,0);
   gre->SetPoint(1,1.125,0);
   gre->SetPointError(1,0.375,0);
   gre->SetPoint(2,1.875,0);
   gre->SetPointError(2,0.375,0);
   gre->SetPoint(3,2.625,0);
   gre->SetPointError(3,0.375,0);
   gre->SetPoint(4,3.375,0);
   gre->SetPointError(4,0.375,0);
   gre->SetPoint(5,4.125,0);
   gre->SetPointError(5,0.375,0);
   gre->SetPoint(6,4.875,0);
   gre->SetPointError(6,0.375,0);
   gre->SetPoint(7,5.625,0);
   gre->SetPointError(7,0.375,0);
   gre->SetPoint(8,6.375,0);
   gre->SetPointError(8,0.375,0);
   gre->SetPoint(9,7.125,0);
   gre->SetPointError(9,0.375,0);
   gre->SetPoint(10,7.875,0);
   gre->SetPointError(10,0.375,0);
   gre->SetPoint(11,8.625,0);
   gre->SetPointError(11,0.375,0);
   gre->SetPoint(12,9.375,1.486134e-05);
   gre->SetPointError(12,0.375,1.478036e-05);
   gre->SetPoint(13,10.125,0);
   gre->SetPointError(13,0.375,0);
   gre->SetPoint(14,10.875,6.182047e-06);
   gre->SetPointError(14,0.375,6.145138e-06);
   gre->SetPoint(15,11.625,0);
   gre->SetPointError(15,0.375,0);
   gre->SetPoint(16,12.375,0.0001073953);
   gre->SetPointError(16,0.375,8.336728e-05);
   gre->SetPoint(17,13.125,0);
   gre->SetPointError(17,0.375,0);
   gre->SetPoint(18,13.875,0);
   gre->SetPointError(18,0.375,0);
   gre->SetPoint(19,14.625,9.340636e-06);
   gre->SetPointError(19,0.375,9.268507e-06);
   gre->SetPoint(20,15.375,0);
   gre->SetPointError(20,0.375,0);
   gre->SetPoint(21,16.125,0.00010244);
   gre->SetPointError(21,0.375,9.204513e-05);
   gre->SetPoint(22,16.875,1.990973e-05);
   gre->SetPointError(22,0.375,1.977655e-05);
   gre->SetPoint(23,17.625,1.306094e-05);
   gre->SetPointError(23,0.375,1.298652e-05);
   gre->SetPoint(24,18.375,4.393176e-05);
   gre->SetPointError(24,0.375,2.823723e-05);
   gre->SetPoint(25,19.125,0);
   gre->SetPointError(25,0.375,0);
   gre->SetPoint(26,19.875,7.348224e-05);
   gre->SetPointError(26,0.375,3.06162e-05);
   gre->SetPoint(27,20.625,1.505188e-05);
   gre->SetPointError(27,0.375,8.668323e-06);
   gre->SetPoint(28,21.375,6.706781e-06);
   gre->SetPointError(28,0.375,6.655778e-06);
   gre->SetPoint(29,22.125,1.07627e-05);
   gre->SetPointError(29,0.375,1.068873e-05);
   gre->SetPoint(30,22.875,2.829796e-05);
   gre->SetPointError(30,0.375,1.900937e-05);
   gre->SetPoint(31,23.625,0.0002338479);
   gre->SetPointError(31,0.375,0.0002194973);
   gre->SetPoint(32,24.375,0);
   gre->SetPointError(32,0.375,0);
   gre->SetPoint(33,25.125,0.0002709559);
   gre->SetPointError(33,0.375,0.0002170009);
   gre->SetPoint(34,25.875,1.586153e-05);
   gre->SetPointError(34,0.375,1.576331e-05);
   gre->SetPoint(35,26.625,1.708483e-05);
   gre->SetPointError(35,0.375,1.289242e-05);
   gre->SetPoint(36,27.375,0);
   gre->SetPointError(36,0.375,0);
   gre->SetPoint(37,28.125,3.267378e-06);
   gre->SetPointError(37,0.375,3.243955e-06);
   gre->SetPoint(38,28.875,0.000416811);
   gre->SetPointError(38,0.375,0.0003906141);
   gre->SetPoint(39,29.625,6.02565e-05);
   gre->SetPointError(39,0.375,2.923245e-05);
   
   TH1F *Graph_Graph25 = new TH1F("Graph_Graph25","Graph",100,0,33);
   Graph_Graph25->SetMinimum(0);
   Graph_Graph25->SetMaximum(0.0008881676);
   Graph_Graph25->SetDirectory(0);
   Graph_Graph25->SetStats(0);
   Graph_Graph25->SetLineWidth(2);
   Graph_Graph25->SetMarkerSize(1.2);
   Graph_Graph25->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph25->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph25->GetXaxis()->SetLabelColor(ci);
   Graph_Graph25->GetXaxis()->SetLabelFont(42);
   Graph_Graph25->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph25->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph25->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph25->GetXaxis()->SetTitleColor(ci);
   Graph_Graph25->GetXaxis()->SetTitleFont(42);
   Graph_Graph25->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph25->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph25->GetYaxis()->SetLabelColor(ci);
   Graph_Graph25->GetYaxis()->SetLabelFont(42);
   Graph_Graph25->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph25->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph25->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph25->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph25->GetYaxis()->SetTitleColor(ci);
   Graph_Graph25->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph25->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph25->GetZaxis()->SetLabelColor(ci);
   Graph_Graph25->GetZaxis()->SetLabelFont(42);
   Graph_Graph25->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph25->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph25->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph25->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph25->GetZaxis()->SetTitleColor(ci);
   Graph_Graph25->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph25);
   
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
   gre->SetPoint(0,0.375,0.03517814);
   gre->SetPointError(0,0.375,0.002163955);
   gre->SetPoint(1,1.125,0.04109511);
   gre->SetPointError(1,0.375,0.003064193);
   gre->SetPoint(2,1.875,0.03342584);
   gre->SetPointError(2,0.375,0.002383113);
   gre->SetPoint(3,2.625,0.03510106);
   gre->SetPointError(3,0.375,0.002308354);
   gre->SetPoint(4,3.375,0.04409775);
   gre->SetPointError(4,0.375,0.003545647);
   gre->SetPoint(5,4.125,0.03478626);
   gre->SetPointError(5,0.375,0.002838776);
   gre->SetPoint(6,4.875,0.03804412);
   gre->SetPointError(6,0.375,0.002339537);
   gre->SetPoint(7,5.625,0.03681837);
   gre->SetPointError(7,0.375,0.003191395);
   gre->SetPoint(8,6.375,0.03844391);
   gre->SetPointError(8,0.375,0.00314306);
   gre->SetPoint(9,7.125,0.04064949);
   gre->SetPointError(9,0.375,0.002799113);
   gre->SetPoint(10,7.875,0.04012006);
   gre->SetPointError(10,0.375,0.002538873);
   gre->SetPoint(11,8.625,0.0365114);
   gre->SetPointError(11,0.375,0.002943278);
   gre->SetPoint(12,9.375,0.03556129);
   gre->SetPointError(12,0.375,0.003479061);
   gre->SetPoint(13,10.125,0.04677613);
   gre->SetPointError(13,0.375,0.004540562);
   gre->SetPoint(14,10.875,0.03817937);
   gre->SetPointError(14,0.375,0.003265377);
   gre->SetPoint(15,11.625,0.04110191);
   gre->SetPointError(15,0.375,0.003357907);
   gre->SetPoint(16,12.375,0.04302602);
   gre->SetPointError(16,0.375,0.0042192);
   gre->SetPoint(17,13.125,0.04254322);
   gre->SetPointError(17,0.375,0.004768761);
   gre->SetPoint(18,13.875,0.05099919);
   gre->SetPointError(18,0.375,0.00597376);
   gre->SetPoint(19,14.625,0.0386707);
   gre->SetPointError(19,0.375,0.003104867);
   gre->SetPoint(20,15.375,0.04577412);
   gre->SetPointError(20,0.375,0.003867147);
   gre->SetPoint(21,16.125,0.0411408);
   gre->SetPointError(21,0.375,0.003275328);
   gre->SetPoint(22,16.875,0.04602189);
   gre->SetPointError(22,0.375,0.005763805);
   gre->SetPoint(23,17.625,0.04403516);
   gre->SetPointError(23,0.375,0.003462231);
   gre->SetPoint(24,18.375,0.04609969);
   gre->SetPointError(24,0.375,0.004057765);
   gre->SetPoint(25,19.125,0.04768342);
   gre->SetPointError(25,0.375,0.003856971);
   gre->SetPoint(26,19.875,0.05437842);
   gre->SetPointError(26,0.375,0.00532027);
   gre->SetPoint(27,20.625,0.05439939);
   gre->SetPointError(27,0.375,0.004886946);
   gre->SetPoint(28,21.375,0.04584132);
   gre->SetPointError(28,0.375,0.004394865);
   gre->SetPoint(29,22.125,0.04705257);
   gre->SetPointError(29,0.375,0.004496445);
   gre->SetPoint(30,22.875,0.06856782);
   gre->SetPointError(30,0.375,0.007721358);
   gre->SetPoint(31,23.625,0.04622192);
   gre->SetPointError(31,0.375,0.003918101);
   gre->SetPoint(32,24.375,0.05789082);
   gre->SetPointError(32,0.375,0.005177939);
   gre->SetPoint(33,25.125,0.05072932);
   gre->SetPointError(33,0.375,0.00462954);
   gre->SetPoint(34,25.875,0.04964842);
   gre->SetPointError(34,0.375,0.004594823);
   gre->SetPoint(35,26.625,0.04751276);
   gre->SetPointError(35,0.375,0.00387657);
   gre->SetPoint(36,27.375,0.04724079);
   gre->SetPointError(36,0.375,0.004319348);
   gre->SetPoint(37,28.125,0.05561516);
   gre->SetPointError(37,0.375,0.00489057);
   gre->SetPoint(38,28.875,0.05635144);
   gre->SetPointError(38,0.375,0.005424301);
   gre->SetPoint(39,29.625,0.05502487);
   gre->SetPointError(39,0.375,0.004680304);
   
   TH1F *Graph_Graph26 = new TH1F("Graph_Graph26","Graph",100,0,33);
   Graph_Graph26->SetMinimum(0.02651809);
   Graph_Graph26->SetMaximum(0.08081383);
   Graph_Graph26->SetDirectory(0);
   Graph_Graph26->SetStats(0);
   Graph_Graph26->SetLineWidth(2);
   Graph_Graph26->SetMarkerSize(1.2);
   Graph_Graph26->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph26->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph26->GetXaxis()->SetLabelColor(ci);
   Graph_Graph26->GetXaxis()->SetLabelFont(42);
   Graph_Graph26->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph26->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph26->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph26->GetXaxis()->SetTitleColor(ci);
   Graph_Graph26->GetXaxis()->SetTitleFont(42);
   Graph_Graph26->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph26->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph26->GetYaxis()->SetLabelColor(ci);
   Graph_Graph26->GetYaxis()->SetLabelFont(42);
   Graph_Graph26->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph26->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph26->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph26->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph26->GetYaxis()->SetTitleColor(ci);
   Graph_Graph26->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph26->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph26->GetZaxis()->SetLabelColor(ci);
   Graph_Graph26->GetZaxis()->SetLabelFont(42);
   Graph_Graph26->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph26->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph26->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph26->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph26->GetZaxis()->SetTitleColor(ci);
   Graph_Graph26->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph26);
   
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
   multigraph->GetYaxis()->SetTitle("% Fragment Energy");
   multigraph->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   multigraph->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   multigraph->GetYaxis()->SetLabelColor(ci);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.01);
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
   gre->SetPoint(0,0.375,0);
   gre->SetPointError(0,0.375,0);
   gre->SetPoint(1,1.125,0);
   gre->SetPointError(1,0.375,0);
   gre->SetPoint(2,1.875,0);
   gre->SetPointError(2,0.375,0);
   gre->SetPoint(3,2.625,0);
   gre->SetPointError(3,0.375,0);
   gre->SetPoint(4,3.375,0);
   gre->SetPointError(4,0.375,0);
   gre->SetPoint(5,4.125,0);
   gre->SetPointError(5,0.375,0);
   gre->SetPoint(6,4.875,0);
   gre->SetPointError(6,0.375,0);
   gre->SetPoint(7,5.625,0);
   gre->SetPointError(7,0.375,0);
   gre->SetPoint(8,6.375,0);
   gre->SetPointError(8,0.375,0);
   gre->SetPoint(9,7.125,0);
   gre->SetPointError(9,0.375,0);
   gre->SetPoint(10,7.875,0);
   gre->SetPointError(10,0.375,0);
   gre->SetPoint(11,8.625,0);
   gre->SetPointError(11,0.375,0);
   gre->SetPoint(12,9.375,1.486134e-05);
   gre->SetPointError(12,0.375,1.478036e-05);
   gre->SetPoint(13,10.125,0);
   gre->SetPointError(13,0.375,0);
   gre->SetPoint(14,10.875,6.182047e-06);
   gre->SetPointError(14,0.375,6.145138e-06);
   gre->SetPoint(15,11.625,0);
   gre->SetPointError(15,0.375,0);
   gre->SetPoint(16,12.375,0.0001073953);
   gre->SetPointError(16,0.375,8.336728e-05);
   gre->SetPoint(17,13.125,0);
   gre->SetPointError(17,0.375,0);
   gre->SetPoint(18,13.875,0);
   gre->SetPointError(18,0.375,0);
   gre->SetPoint(19,14.625,9.340636e-06);
   gre->SetPointError(19,0.375,9.268507e-06);
   gre->SetPoint(20,15.375,0);
   gre->SetPointError(20,0.375,0);
   gre->SetPoint(21,16.125,0.00010244);
   gre->SetPointError(21,0.375,9.204513e-05);
   gre->SetPoint(22,16.875,1.990973e-05);
   gre->SetPointError(22,0.375,1.977655e-05);
   gre->SetPoint(23,17.625,1.306094e-05);
   gre->SetPointError(23,0.375,1.298652e-05);
   gre->SetPoint(24,18.375,4.393176e-05);
   gre->SetPointError(24,0.375,2.823723e-05);
   gre->SetPoint(25,19.125,0);
   gre->SetPointError(25,0.375,0);
   gre->SetPoint(26,19.875,7.348224e-05);
   gre->SetPointError(26,0.375,3.06162e-05);
   gre->SetPoint(27,20.625,1.505188e-05);
   gre->SetPointError(27,0.375,8.668323e-06);
   gre->SetPoint(28,21.375,6.706781e-06);
   gre->SetPointError(28,0.375,6.655778e-06);
   gre->SetPoint(29,22.125,1.07627e-05);
   gre->SetPointError(29,0.375,1.068873e-05);
   gre->SetPoint(30,22.875,2.829796e-05);
   gre->SetPointError(30,0.375,1.900937e-05);
   gre->SetPoint(31,23.625,0.0002338479);
   gre->SetPointError(31,0.375,0.0002194973);
   gre->SetPoint(32,24.375,0);
   gre->SetPointError(32,0.375,0);
   gre->SetPoint(33,25.125,0.0002709559);
   gre->SetPointError(33,0.375,0.0002170009);
   gre->SetPoint(34,25.875,1.586153e-05);
   gre->SetPointError(34,0.375,1.576331e-05);
   gre->SetPoint(35,26.625,1.708483e-05);
   gre->SetPointError(35,0.375,1.289242e-05);
   gre->SetPoint(36,27.375,0);
   gre->SetPointError(36,0.375,0);
   gre->SetPoint(37,28.125,3.267378e-06);
   gre->SetPointError(37,0.375,3.243955e-06);
   gre->SetPoint(38,28.875,0.000416811);
   gre->SetPointError(38,0.375,0.0003906141);
   gre->SetPoint(39,29.625,6.02565e-05);
   gre->SetPointError(39,0.375,2.923245e-05);
   
   TH1F *Graph_Graph_Graph2527 = new TH1F("Graph_Graph_Graph2527","Graph",100,0,33);
   Graph_Graph_Graph2527->SetMinimum(0);
   Graph_Graph_Graph2527->SetMaximum(0.0008881676);
   Graph_Graph_Graph2527->SetDirectory(0);
   Graph_Graph_Graph2527->SetStats(0);
   Graph_Graph_Graph2527->SetLineWidth(2);
   Graph_Graph_Graph2527->SetMarkerSize(1.2);
   Graph_Graph_Graph2527->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2527->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2527->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph2527->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph2527->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph2527->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph2527->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph2527->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph2527->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph2527->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2527->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2527->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph2527->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph2527->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph2527->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph2527->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph2527->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph2527->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph2527->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2527->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2527->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph2527->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph2527->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph2527->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph2527->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph2527->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph2527->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph2527->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph2527);
   
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
   gre->SetPoint(0,0.375,0.03517814);
   gre->SetPointError(0,0.375,0.002163955);
   gre->SetPoint(1,1.125,0.04109511);
   gre->SetPointError(1,0.375,0.003064193);
   gre->SetPoint(2,1.875,0.03342584);
   gre->SetPointError(2,0.375,0.002383113);
   gre->SetPoint(3,2.625,0.03510106);
   gre->SetPointError(3,0.375,0.002308354);
   gre->SetPoint(4,3.375,0.04409775);
   gre->SetPointError(4,0.375,0.003545647);
   gre->SetPoint(5,4.125,0.03478626);
   gre->SetPointError(5,0.375,0.002838776);
   gre->SetPoint(6,4.875,0.03804412);
   gre->SetPointError(6,0.375,0.002339537);
   gre->SetPoint(7,5.625,0.03681837);
   gre->SetPointError(7,0.375,0.003191395);
   gre->SetPoint(8,6.375,0.03844391);
   gre->SetPointError(8,0.375,0.00314306);
   gre->SetPoint(9,7.125,0.04064949);
   gre->SetPointError(9,0.375,0.002799113);
   gre->SetPoint(10,7.875,0.04012006);
   gre->SetPointError(10,0.375,0.002538873);
   gre->SetPoint(11,8.625,0.0365114);
   gre->SetPointError(11,0.375,0.002943278);
   gre->SetPoint(12,9.375,0.03556129);
   gre->SetPointError(12,0.375,0.003479061);
   gre->SetPoint(13,10.125,0.04677613);
   gre->SetPointError(13,0.375,0.004540562);
   gre->SetPoint(14,10.875,0.03817937);
   gre->SetPointError(14,0.375,0.003265377);
   gre->SetPoint(15,11.625,0.04110191);
   gre->SetPointError(15,0.375,0.003357907);
   gre->SetPoint(16,12.375,0.04302602);
   gre->SetPointError(16,0.375,0.0042192);
   gre->SetPoint(17,13.125,0.04254322);
   gre->SetPointError(17,0.375,0.004768761);
   gre->SetPoint(18,13.875,0.05099919);
   gre->SetPointError(18,0.375,0.00597376);
   gre->SetPoint(19,14.625,0.0386707);
   gre->SetPointError(19,0.375,0.003104867);
   gre->SetPoint(20,15.375,0.04577412);
   gre->SetPointError(20,0.375,0.003867147);
   gre->SetPoint(21,16.125,0.0411408);
   gre->SetPointError(21,0.375,0.003275328);
   gre->SetPoint(22,16.875,0.04602189);
   gre->SetPointError(22,0.375,0.005763805);
   gre->SetPoint(23,17.625,0.04403516);
   gre->SetPointError(23,0.375,0.003462231);
   gre->SetPoint(24,18.375,0.04609969);
   gre->SetPointError(24,0.375,0.004057765);
   gre->SetPoint(25,19.125,0.04768342);
   gre->SetPointError(25,0.375,0.003856971);
   gre->SetPoint(26,19.875,0.05437842);
   gre->SetPointError(26,0.375,0.00532027);
   gre->SetPoint(27,20.625,0.05439939);
   gre->SetPointError(27,0.375,0.004886946);
   gre->SetPoint(28,21.375,0.04584132);
   gre->SetPointError(28,0.375,0.004394865);
   gre->SetPoint(29,22.125,0.04705257);
   gre->SetPointError(29,0.375,0.004496445);
   gre->SetPoint(30,22.875,0.06856782);
   gre->SetPointError(30,0.375,0.007721358);
   gre->SetPoint(31,23.625,0.04622192);
   gre->SetPointError(31,0.375,0.003918101);
   gre->SetPoint(32,24.375,0.05789082);
   gre->SetPointError(32,0.375,0.005177939);
   gre->SetPoint(33,25.125,0.05072932);
   gre->SetPointError(33,0.375,0.00462954);
   gre->SetPoint(34,25.875,0.04964842);
   gre->SetPointError(34,0.375,0.004594823);
   gre->SetPoint(35,26.625,0.04751276);
   gre->SetPointError(35,0.375,0.00387657);
   gre->SetPoint(36,27.375,0.04724079);
   gre->SetPointError(36,0.375,0.004319348);
   gre->SetPoint(37,28.125,0.05561516);
   gre->SetPointError(37,0.375,0.00489057);
   gre->SetPoint(38,28.875,0.05635144);
   gre->SetPointError(38,0.375,0.005424301);
   gre->SetPoint(39,29.625,0.05502487);
   gre->SetPointError(39,0.375,0.004680304);
   
   TH1F *Graph_Graph_Graph2628 = new TH1F("Graph_Graph_Graph2628","Graph",100,0,33);
   Graph_Graph_Graph2628->SetMinimum(0.02651809);
   Graph_Graph_Graph2628->SetMaximum(0.08081383);
   Graph_Graph_Graph2628->SetDirectory(0);
   Graph_Graph_Graph2628->SetStats(0);
   Graph_Graph_Graph2628->SetLineWidth(2);
   Graph_Graph_Graph2628->SetMarkerSize(1.2);
   Graph_Graph_Graph2628->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2628->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2628->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph2628->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph2628->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph2628->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph2628->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph2628->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph2628->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph2628->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2628->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2628->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph2628->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph2628->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph2628->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph2628->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph2628->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph2628->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph2628->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2628->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2628->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph2628->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph2628->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph2628->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph2628->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph2628->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph2628->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph2628->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph2628);
   
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
   multigraph->GetYaxis()->SetTitle("% Fragment Energy");
   multigraph->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   multigraph->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   multigraph->GetYaxis()->SetLabelColor(ci);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.01);
   multigraph->GetYaxis()->SetLabelSize(0.06);
   multigraph->GetYaxis()->SetTitleSize(0.07);
   multigraph->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   multigraph->GetYaxis()->SetTitleColor(ci);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.1884422,0.7470238,0.5690955,0.8973214,NULL,"brNDC");
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
   TLegendEntry *entry=leg->AddEntry("0","Panodra v3","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#7293cb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("1","Pandora v1","f");
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
