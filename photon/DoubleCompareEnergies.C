{
//=========Macro generated from canvas: c1/
//=========  (Mon Mar 20 15:59:26 2017) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   c1->Range(-8.673913,0.01405621,33.6256,2.712851);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.169598);
   c1->SetRightMargin(0.05025126);
   c1->SetTopMargin(0.07886904);
   c1->SetBottomMargin(0.1800595);
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
   
   TH1F *Graph_Graph17 = new TH1F("Graph_Graph17","Graph",100,0,33);
   Graph_Graph17->SetMinimum(0.8947766);
   Graph_Graph17->SetMaximum(2.157457);
   Graph_Graph17->SetDirectory(0);
   Graph_Graph17->SetStats(0);
   Graph_Graph17->SetLineWidth(2);
   Graph_Graph17->SetMarkerSize(1.2);
   Graph_Graph17->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph17->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph17->GetXaxis()->SetLabelColor(ci);
   Graph_Graph17->GetXaxis()->SetLabelFont(42);
   Graph_Graph17->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph17->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph17->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph17->GetXaxis()->SetTitleColor(ci);
   Graph_Graph17->GetXaxis()->SetTitleFont(42);
   Graph_Graph17->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph17->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph17->GetYaxis()->SetLabelColor(ci);
   Graph_Graph17->GetYaxis()->SetLabelFont(42);
   Graph_Graph17->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph17->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph17->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph17->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph17->GetYaxis()->SetTitleColor(ci);
   Graph_Graph17->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph17->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph17->GetZaxis()->SetLabelColor(ci);
   Graph_Graph17->GetZaxis()->SetLabelFont(42);
   Graph_Graph17->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph17->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph17->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph17->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph17->GetZaxis()->SetTitleColor(ci);
   Graph_Graph17->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph17);
   
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
   gre->SetPoint(0,0.375,1.046729);
   gre->SetPointError(0,0.375,0.02040372);
   gre->SetPoint(1,1.125,1.039683);
   gre->SetPointError(1,0.375,0.01739089);
   gre->SetPoint(2,1.875,1.067308);
   gre->SetPointError(2,0.375,0.02456885);
   gre->SetPoint(3,2.625,1.033333);
   gre->SetPointError(3,0.375,0.01638653);
   gre->SetPoint(4,3.375,1.091837);
   gre->SetPointError(4,0.375,0.02917273);
   gre->SetPoint(5,4.125,1.037594);
   gre->SetPointError(5,0.375,0.01649349);
   gre->SetPoint(6,4.875,1.034783);
   gre->SetPointError(6,0.375,0.01708617);
   gre->SetPoint(7,5.625,1.033333);
   gre->SetPointError(7,0.375,0.02459549);
   gre->SetPoint(8,6.375,1.046154);
   gre->SetPointError(8,0.375,0.01840227);
   gre->SetPoint(9,7.125,1.117188);
   gre->SetPointError(9,0.375,0.0324404);
   gre->SetPoint(10,7.875,1.358491);
   gre->SetPointError(10,0.375,0.0502551);
   gre->SetPoint(11,8.625,1.516484);
   gre->SetPointError(11,0.375,0.05680933);
   gre->SetPoint(12,9.375,1.73);
   gre->SetPointError(12,0.375,0.05806031);
   gre->SetPoint(13,10.125,1.978495);
   gre->SetPointError(13,0.375,0.0429529);
   gre->SetPoint(14,10.875,1.969072);
   gre->SetPointError(14,0.375,0.04239009);
   gre->SetPoint(15,11.625,2.011364);
   gre->SetPointError(15,0.375,0.03004094);
   gre->SetPoint(16,12.375,2.018519);
   gre->SetPointError(16,0.375,0.01843259);
   gre->SetPoint(17,13.125,2.041667);
   gre->SetPointError(17,0.375,0.02470895);
   gre->SetPoint(18,13.875,2.020408);
   gre->SetPointError(18,0.375,0.02490963);
   gre->SetPoint(19,14.625,2.008772);
   gre->SetPointError(19,0.375,0.0151712);
   gre->SetPoint(20,15.375,2.04717);
   gre->SetPointError(20,0.375,0.02059145);
   gre->SetPoint(21,16.125,2.036145);
   gre->SetPointError(21,0.375,0.02664685);
   gre->SetPoint(22,16.875,2.046512);
   gre->SetPointError(22,0.375,0.02270854);
   gre->SetPoint(23,17.625,2.07619);
   gre->SetPointError(23,0.375,0.02589089);
   gre->SetPoint(24,18.375,2.029412);
   gre->SetPointError(24,0.375,0.01672931);
   gre->SetPoint(25,19.125,2.030612);
   gre->SetPointError(25,0.375,0.0226065);
   gre->SetPoint(26,19.875,2.07767);
   gre->SetPointError(26,0.375,0.02637248);
   gre->SetPoint(27,20.625,2.049505);
   gre->SetPointError(27,0.375,0.02158433);
   gre->SetPoint(28,21.375,2.028302);
   gre->SetPointError(28,0.375,0.01610721);
   gre->SetPoint(29,22.125,2.05814);
   gre->SetPointError(29,0.375,0.02523364);
   gre->SetPoint(30,22.875,2.073171);
   gre->SetPointError(30,0.375,0.02614483);
   gre->SetPoint(31,23.625,2.01);
   gre->SetPointError(31,0.375,0.009949874);
   gre->SetPoint(32,24.375,2.011765);
   gre->SetPointError(32,0.375,0.02033707);
   gre->SetPoint(33,25.125,2.038835);
   gre->SetPointError(33,0.375,0.0190367);
   gre->SetPoint(34,25.875,2.011111);
   gre->SetPointError(34,0.375,0.01920934);
   gre->SetPoint(35,26.625,2.029703);
   gre->SetPointError(35,0.375,0.01689241);
   gre->SetPoint(36,27.375,2.020833);
   gre->SetPointError(36,0.375,0.02072454);
   gre->SetPoint(37,28.125,2.073684);
   gre->SetPointError(37,0.375,0.03719263);
   gre->SetPoint(38,28.875,2.034483);
   gre->SetPointError(38,0.375,0.01694151);
   gre->SetPoint(39,29.625,2.056604);
   gre->SetPointError(39,0.375,0.02611074);
   
   TH1F *Graph_Graph18 = new TH1F("Graph_Graph18","Graph",100,0,33);
   Graph_Graph18->SetMinimum(0.8985239);
   Graph_Graph18->SetMaximum(2.221091);
   Graph_Graph18->SetDirectory(0);
   Graph_Graph18->SetStats(0);
   Graph_Graph18->SetLineWidth(2);
   Graph_Graph18->SetMarkerSize(1.2);
   Graph_Graph18->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph18->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph18->GetXaxis()->SetLabelColor(ci);
   Graph_Graph18->GetXaxis()->SetLabelFont(42);
   Graph_Graph18->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph18->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph18->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph18->GetXaxis()->SetTitleColor(ci);
   Graph_Graph18->GetXaxis()->SetTitleFont(42);
   Graph_Graph18->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph18->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph18->GetYaxis()->SetLabelColor(ci);
   Graph_Graph18->GetYaxis()->SetLabelFont(42);
   Graph_Graph18->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph18->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph18->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph18->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph18->GetYaxis()->SetTitleColor(ci);
   Graph_Graph18->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph18->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph18->GetZaxis()->SetLabelColor(ci);
   Graph_Graph18->GetZaxis()->SetLabelFont(42);
   Graph_Graph18->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph18->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph18->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph18->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph18->GetZaxis()->SetTitleColor(ci);
   Graph_Graph18->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph18);
   
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
   gre->SetPoint(0,0.375,1);
   gre->SetPointError(0,0.375,0);
   gre->SetPoint(1,1.125,1);
   gre->SetPointError(1,0.375,0);
   gre->SetPoint(2,1.875,1);
   gre->SetPointError(2,0.375,0);
   gre->SetPoint(3,2.625,1);
   gre->SetPointError(3,0.375,0);
   gre->SetPoint(4,3.375,1.010309);
   gre->SetPointError(4,0.375,0.010256);
   gre->SetPoint(5,4.125,1.010417);
   gre->SetPointError(5,0.375,0.01036227);
   gre->SetPoint(6,4.875,1.009009);
   gre->SetPointError(6,0.375,0.008968336);
   gre->SetPoint(7,5.625,1);
   gre->SetPointError(7,0.375,0);
   gre->SetPoint(8,6.375,1);
   gre->SetPointError(8,0.375,0);
   gre->SetPoint(9,7.125,1);
   gre->SetPointError(9,0.375,0);
   gre->SetPoint(10,7.875,1);
   gre->SetPointError(10,0.375,0);
   gre->SetPoint(11,8.625,1);
   gre->SetPointError(11,0.375,0);
   gre->SetPoint(12,9.375,1);
   gre->SetPointError(12,0.375,0);
   gre->SetPoint(13,10.125,1.018182);
   gre->SetPointError(13,0.375,0.01273907);
   gre->SetPoint(14,10.875,1.058252);
   gre->SetPointError(14,0.375,0.0230784);
   gre->SetPoint(15,11.625,1.158537);
   gre->SetPointError(15,0.375,0.04033439);
   gre->SetPoint(16,12.375,1.252427);
   gre->SetPointError(16,0.375,0.04495145);
   gre->SetPoint(17,13.125,1.419048);
   gre->SetPointError(17,0.375,0.04815122);
   gre->SetPoint(18,13.875,1.514019);
   gre->SetPointError(18,0.375,0.04831782);
   gre->SetPoint(19,14.625,1.567308);
   gre->SetPointError(19,0.375,0.04858277);
   gre->SetPoint(20,15.375,1.728395);
   gre->SetPointError(20,0.375,0.04942081);
   gre->SetPoint(21,16.125,1.673267);
   gre->SetPointError(21,0.375,0.04666909);
   gre->SetPoint(22,16.875,1.703297);
   gre->SetPointError(22,0.375,0.04788613);
   gre->SetPoint(23,17.625,1.777778);
   gre->SetPointError(23,0.375,0.04000457);
   gre->SetPoint(24,18.375,1.808511);
   gre->SetPointError(24,0.375,0.04058367);
   gre->SetPoint(25,19.125,1.891089);
   gre->SetPointError(25,0.375,0.03099813);
   gre->SetPoint(26,19.875,1.935185);
   gre->SetPointError(26,0.375,0.02369049);
   gre->SetPoint(27,20.625,1.903509);
   gre->SetPointError(27,0.375,0.02765398);
   gre->SetPoint(28,21.375,1.956897);
   gre->SetPointError(28,0.375,0.02245434);
   gre->SetPoint(29,22.125,1.901099);
   gre->SetPointError(29,0.375,0.03494072);
   gre->SetPoint(30,22.875,1.939655);
   gre->SetPointError(30,0.375,0.02210931);
   gre->SetPoint(31,23.625,1.953271);
   gre->SetPointError(31,0.375,0.02431048);
   gre->SetPoint(32,24.375,1.962963);
   gre->SetPointError(32,0.375,0.0223987);
   gre->SetPoint(33,25.125,1.931034);
   gre->SetPointError(33,0.375,0.02352718);
   gre->SetPoint(34,25.875,1.989583);
   gre->SetPointError(34,0.375,0.01801085);
   gre->SetPoint(35,26.625,1.955556);
   gre->SetPointError(35,0.375,0.02172278);
   gre->SetPoint(36,27.375,1.963964);
   gre->SetPointError(36,0.375,0.01769039);
   gre->SetPoint(37,28.125,1.977011);
   gre->SetPointError(37,0.375,0.0160674);
   gre->SetPoint(38,28.875,1.927083);
   gre->SetPointError(38,0.375,0.0265361);
   gre->SetPoint(39,29.625,1.972222);
   gre->SetPointError(39,0.375,0.0158132);
   
   TH1F *Graph_Graph19 = new TH1F("Graph_Graph19","Graph",100,0,33);
   Graph_Graph19->SetMinimum(0.8992406);
   Graph_Graph19->SetMaximum(2.108354);
   Graph_Graph19->SetDirectory(0);
   Graph_Graph19->SetStats(0);
   Graph_Graph19->SetLineWidth(2);
   Graph_Graph19->SetMarkerSize(1.2);
   Graph_Graph19->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph19->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph19->GetXaxis()->SetLabelColor(ci);
   Graph_Graph19->GetXaxis()->SetLabelFont(42);
   Graph_Graph19->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph19->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph19->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph19->GetXaxis()->SetTitleColor(ci);
   Graph_Graph19->GetXaxis()->SetTitleFont(42);
   Graph_Graph19->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph19->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph19->GetYaxis()->SetLabelColor(ci);
   Graph_Graph19->GetYaxis()->SetLabelFont(42);
   Graph_Graph19->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph19->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph19->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph19->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph19->GetYaxis()->SetTitleColor(ci);
   Graph_Graph19->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph19->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph19->GetZaxis()->SetLabelColor(ci);
   Graph_Graph19->GetZaxis()->SetLabelFont(42);
   Graph_Graph19->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph19->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph19->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph19->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph19->GetZaxis()->SetTitleColor(ci);
   Graph_Graph19->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph19);
   
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
   gre->SetPoint(0,0.375,1);
   gre->SetPointError(0,0.375,0);
   gre->SetPoint(1,1.125,1);
   gre->SetPointError(1,0.375,0);
   gre->SetPoint(2,1.875,1);
   gre->SetPointError(2,0.375,0);
   gre->SetPoint(3,2.625,1);
   gre->SetPointError(3,0.375,0);
   gre->SetPoint(4,3.375,1);
   gre->SetPointError(4,0.375,0);
   gre->SetPoint(5,4.125,1);
   gre->SetPointError(5,0.375,0);
   gre->SetPoint(6,4.875,1);
   gre->SetPointError(6,0.375,0);
   gre->SetPoint(7,5.625,1);
   gre->SetPointError(7,0.375,0);
   gre->SetPoint(8,6.375,1.021978);
   gre->SetPointError(8,0.375,0.01536908);
   gre->SetPoint(9,7.125,1.089744);
   gre->SetPointError(9,0.375,0.03236207);
   gre->SetPoint(10,7.875,1.074468);
   gre->SetPointError(10,0.375,0.02707802);
   gre->SetPoint(11,8.625,1.142857);
   gre->SetPointError(11,0.375,0.03534798);
   gre->SetPoint(12,9.375,1.226667);
   gre->SetPointError(12,0.375,0.04834444);
   gre->SetPoint(13,10.125,1.229167);
   gre->SetPointError(13,0.375,0.04289635);
   gre->SetPoint(14,10.875,1.343137);
   gre->SetPointError(14,0.375,0.04700793);
   gre->SetPoint(15,11.625,1.219512);
   gre->SetPointError(15,0.375,0.04570939);
   gre->SetPoint(16,12.375,1.319149);
   gre->SetPointError(16,0.375,0.04807938);
   gre->SetPoint(17,13.125,1.349515);
   gre->SetPointError(17,0.375,0.04698214);
   gre->SetPoint(18,13.875,1.359551);
   gre->SetPointError(18,0.375,0.05086598);
   gre->SetPoint(19,14.625,1.311111);
   gre->SetPointError(19,0.375,0.04879902);
   gre->SetPoint(20,15.375,1.5625);
   gre->SetPointError(20,0.375,0.05546325);
   gre->SetPoint(21,16.125,1.513761);
   gre->SetPointError(21,0.375,0.04960017);
   gre->SetPoint(22,16.875,1.573034);
   gre->SetPointError(22,0.375,0.05243145);
   gre->SetPoint(23,17.625,1.602041);
   gre->SetPointError(23,0.375,0.04944464);
   gre->SetPoint(24,18.375,1.655172);
   gre->SetPointError(24,0.375,0.0509588);
   gre->SetPoint(25,19.125,1.704082);
   gre->SetPointError(25,0.375,0.04610886);
   gre->SetPoint(26,19.875,1.596154);
   gre->SetPointError(26,0.375,0.04811389);
   gre->SetPoint(27,20.625,1.683168);
   gre->SetPointError(27,0.375,0.04629323);
   gre->SetPoint(28,21.375,1.736842);
   gre->SetPointError(28,0.375,0.05611726);
   gre->SetPoint(29,22.125,1.794872);
   gre->SetPointError(29,0.375,0.04572081);
   gre->SetPoint(30,22.875,1.758621);
   gre->SetPointError(30,0.375,0.04155975);
   gre->SetPoint(31,23.625,1.754545);
   gre->SetPointError(31,0.375,0.04103287);
   gre->SetPoint(32,24.375,1.809524);
   gre->SetPointError(32,0.375,0.0460337);
   gre->SetPoint(33,25.125,1.777778);
   gre->SetPointError(33,0.375,0.04382281);
   gre->SetPoint(34,25.875,1.882353);
   gre->SetPointError(34,0.375,0.03744564);
   gre->SetPoint(35,26.625,1.901099);
   gre->SetPointError(35,0.375,0.03494072);
   gre->SetPoint(36,27.375,1.86747);
   gre->SetPointError(36,0.375,0.03721735);
   gre->SetPoint(37,28.125,1.914894);
   gre->SetPointError(37,0.375,0.03247583);
   gre->SetPoint(38,28.875,1.831461);
   gre->SetPointError(38,0.375,0.04274378);
   gre->SetPoint(39,29.625,1.903226);
   gre->SetPointError(39,0.375,0.03065748);
   
   TH1F *Graph_Graph20 = new TH1F("Graph_Graph20","Graph",100,0,33);
   Graph_Graph20->SetMinimum(0.9052631);
   Graph_Graph20->SetMaximum(2.042106);
   Graph_Graph20->SetDirectory(0);
   Graph_Graph20->SetStats(0);
   Graph_Graph20->SetLineWidth(2);
   Graph_Graph20->SetMarkerSize(1.2);
   Graph_Graph20->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph20->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph20->GetXaxis()->SetLabelColor(ci);
   Graph_Graph20->GetXaxis()->SetLabelFont(42);
   Graph_Graph20->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph20->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph20->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph20->GetXaxis()->SetTitleColor(ci);
   Graph_Graph20->GetXaxis()->SetTitleFont(42);
   Graph_Graph20->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph20->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph20->GetYaxis()->SetLabelColor(ci);
   Graph_Graph20->GetYaxis()->SetLabelFont(42);
   Graph_Graph20->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph20->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph20->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph20->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph20->GetYaxis()->SetTitleColor(ci);
   Graph_Graph20->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph20->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph20->GetZaxis()->SetLabelColor(ci);
   Graph_Graph20->GetZaxis()->SetLabelFont(42);
   Graph_Graph20->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph20->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph20->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph20->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph20->GetZaxis()->SetTitleColor(ci);
   Graph_Graph20->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph20);
   
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
   
   TH1F *Graph_Graph_Graph1721 = new TH1F("Graph_Graph_Graph1721","Graph",100,0,33);
   Graph_Graph_Graph1721->SetMinimum(0.8947766);
   Graph_Graph_Graph1721->SetMaximum(2.157457);
   Graph_Graph_Graph1721->SetDirectory(0);
   Graph_Graph_Graph1721->SetStats(0);
   Graph_Graph_Graph1721->SetLineWidth(2);
   Graph_Graph_Graph1721->SetMarkerSize(1.2);
   Graph_Graph_Graph1721->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1721->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1721->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1721->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1721->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph1721->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1721->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1721->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1721->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1721->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1721->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1721->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1721->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1721->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph1721->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1721->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph1721->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1721->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1721->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1721->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1721->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1721->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1721->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph1721->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1721->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph1721->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1721->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1721->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph1721);
   
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
   gre->SetPoint(0,0.375,1.046729);
   gre->SetPointError(0,0.375,0.02040372);
   gre->SetPoint(1,1.125,1.039683);
   gre->SetPointError(1,0.375,0.01739089);
   gre->SetPoint(2,1.875,1.067308);
   gre->SetPointError(2,0.375,0.02456885);
   gre->SetPoint(3,2.625,1.033333);
   gre->SetPointError(3,0.375,0.01638653);
   gre->SetPoint(4,3.375,1.091837);
   gre->SetPointError(4,0.375,0.02917273);
   gre->SetPoint(5,4.125,1.037594);
   gre->SetPointError(5,0.375,0.01649349);
   gre->SetPoint(6,4.875,1.034783);
   gre->SetPointError(6,0.375,0.01708617);
   gre->SetPoint(7,5.625,1.033333);
   gre->SetPointError(7,0.375,0.02459549);
   gre->SetPoint(8,6.375,1.046154);
   gre->SetPointError(8,0.375,0.01840227);
   gre->SetPoint(9,7.125,1.117188);
   gre->SetPointError(9,0.375,0.0324404);
   gre->SetPoint(10,7.875,1.358491);
   gre->SetPointError(10,0.375,0.0502551);
   gre->SetPoint(11,8.625,1.516484);
   gre->SetPointError(11,0.375,0.05680933);
   gre->SetPoint(12,9.375,1.73);
   gre->SetPointError(12,0.375,0.05806031);
   gre->SetPoint(13,10.125,1.978495);
   gre->SetPointError(13,0.375,0.0429529);
   gre->SetPoint(14,10.875,1.969072);
   gre->SetPointError(14,0.375,0.04239009);
   gre->SetPoint(15,11.625,2.011364);
   gre->SetPointError(15,0.375,0.03004094);
   gre->SetPoint(16,12.375,2.018519);
   gre->SetPointError(16,0.375,0.01843259);
   gre->SetPoint(17,13.125,2.041667);
   gre->SetPointError(17,0.375,0.02470895);
   gre->SetPoint(18,13.875,2.020408);
   gre->SetPointError(18,0.375,0.02490963);
   gre->SetPoint(19,14.625,2.008772);
   gre->SetPointError(19,0.375,0.0151712);
   gre->SetPoint(20,15.375,2.04717);
   gre->SetPointError(20,0.375,0.02059145);
   gre->SetPoint(21,16.125,2.036145);
   gre->SetPointError(21,0.375,0.02664685);
   gre->SetPoint(22,16.875,2.046512);
   gre->SetPointError(22,0.375,0.02270854);
   gre->SetPoint(23,17.625,2.07619);
   gre->SetPointError(23,0.375,0.02589089);
   gre->SetPoint(24,18.375,2.029412);
   gre->SetPointError(24,0.375,0.01672931);
   gre->SetPoint(25,19.125,2.030612);
   gre->SetPointError(25,0.375,0.0226065);
   gre->SetPoint(26,19.875,2.07767);
   gre->SetPointError(26,0.375,0.02637248);
   gre->SetPoint(27,20.625,2.049505);
   gre->SetPointError(27,0.375,0.02158433);
   gre->SetPoint(28,21.375,2.028302);
   gre->SetPointError(28,0.375,0.01610721);
   gre->SetPoint(29,22.125,2.05814);
   gre->SetPointError(29,0.375,0.02523364);
   gre->SetPoint(30,22.875,2.073171);
   gre->SetPointError(30,0.375,0.02614483);
   gre->SetPoint(31,23.625,2.01);
   gre->SetPointError(31,0.375,0.009949874);
   gre->SetPoint(32,24.375,2.011765);
   gre->SetPointError(32,0.375,0.02033707);
   gre->SetPoint(33,25.125,2.038835);
   gre->SetPointError(33,0.375,0.0190367);
   gre->SetPoint(34,25.875,2.011111);
   gre->SetPointError(34,0.375,0.01920934);
   gre->SetPoint(35,26.625,2.029703);
   gre->SetPointError(35,0.375,0.01689241);
   gre->SetPoint(36,27.375,2.020833);
   gre->SetPointError(36,0.375,0.02072454);
   gre->SetPoint(37,28.125,2.073684);
   gre->SetPointError(37,0.375,0.03719263);
   gre->SetPoint(38,28.875,2.034483);
   gre->SetPointError(38,0.375,0.01694151);
   gre->SetPoint(39,29.625,2.056604);
   gre->SetPointError(39,0.375,0.02611074);
   
   TH1F *Graph_Graph_Graph1822 = new TH1F("Graph_Graph_Graph1822","Graph",100,0,33);
   Graph_Graph_Graph1822->SetMinimum(0.8985239);
   Graph_Graph_Graph1822->SetMaximum(2.221091);
   Graph_Graph_Graph1822->SetDirectory(0);
   Graph_Graph_Graph1822->SetStats(0);
   Graph_Graph_Graph1822->SetLineWidth(2);
   Graph_Graph_Graph1822->SetMarkerSize(1.2);
   Graph_Graph_Graph1822->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1822->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1822->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1822->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1822->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph1822->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1822->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1822->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1822->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1822->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1822->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1822->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1822->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1822->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph1822->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1822->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph1822->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1822->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1822->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1822->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1822->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1822->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1822->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph1822->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1822->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph1822->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1822->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1822->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph1822);
   
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
   gre->SetPoint(0,0.375,1);
   gre->SetPointError(0,0.375,0);
   gre->SetPoint(1,1.125,1);
   gre->SetPointError(1,0.375,0);
   gre->SetPoint(2,1.875,1);
   gre->SetPointError(2,0.375,0);
   gre->SetPoint(3,2.625,1);
   gre->SetPointError(3,0.375,0);
   gre->SetPoint(4,3.375,1.010309);
   gre->SetPointError(4,0.375,0.010256);
   gre->SetPoint(5,4.125,1.010417);
   gre->SetPointError(5,0.375,0.01036227);
   gre->SetPoint(6,4.875,1.009009);
   gre->SetPointError(6,0.375,0.008968336);
   gre->SetPoint(7,5.625,1);
   gre->SetPointError(7,0.375,0);
   gre->SetPoint(8,6.375,1);
   gre->SetPointError(8,0.375,0);
   gre->SetPoint(9,7.125,1);
   gre->SetPointError(9,0.375,0);
   gre->SetPoint(10,7.875,1);
   gre->SetPointError(10,0.375,0);
   gre->SetPoint(11,8.625,1);
   gre->SetPointError(11,0.375,0);
   gre->SetPoint(12,9.375,1);
   gre->SetPointError(12,0.375,0);
   gre->SetPoint(13,10.125,1.018182);
   gre->SetPointError(13,0.375,0.01273907);
   gre->SetPoint(14,10.875,1.058252);
   gre->SetPointError(14,0.375,0.0230784);
   gre->SetPoint(15,11.625,1.158537);
   gre->SetPointError(15,0.375,0.04033439);
   gre->SetPoint(16,12.375,1.252427);
   gre->SetPointError(16,0.375,0.04495145);
   gre->SetPoint(17,13.125,1.419048);
   gre->SetPointError(17,0.375,0.04815122);
   gre->SetPoint(18,13.875,1.514019);
   gre->SetPointError(18,0.375,0.04831782);
   gre->SetPoint(19,14.625,1.567308);
   gre->SetPointError(19,0.375,0.04858277);
   gre->SetPoint(20,15.375,1.728395);
   gre->SetPointError(20,0.375,0.04942081);
   gre->SetPoint(21,16.125,1.673267);
   gre->SetPointError(21,0.375,0.04666909);
   gre->SetPoint(22,16.875,1.703297);
   gre->SetPointError(22,0.375,0.04788613);
   gre->SetPoint(23,17.625,1.777778);
   gre->SetPointError(23,0.375,0.04000457);
   gre->SetPoint(24,18.375,1.808511);
   gre->SetPointError(24,0.375,0.04058367);
   gre->SetPoint(25,19.125,1.891089);
   gre->SetPointError(25,0.375,0.03099813);
   gre->SetPoint(26,19.875,1.935185);
   gre->SetPointError(26,0.375,0.02369049);
   gre->SetPoint(27,20.625,1.903509);
   gre->SetPointError(27,0.375,0.02765398);
   gre->SetPoint(28,21.375,1.956897);
   gre->SetPointError(28,0.375,0.02245434);
   gre->SetPoint(29,22.125,1.901099);
   gre->SetPointError(29,0.375,0.03494072);
   gre->SetPoint(30,22.875,1.939655);
   gre->SetPointError(30,0.375,0.02210931);
   gre->SetPoint(31,23.625,1.953271);
   gre->SetPointError(31,0.375,0.02431048);
   gre->SetPoint(32,24.375,1.962963);
   gre->SetPointError(32,0.375,0.0223987);
   gre->SetPoint(33,25.125,1.931034);
   gre->SetPointError(33,0.375,0.02352718);
   gre->SetPoint(34,25.875,1.989583);
   gre->SetPointError(34,0.375,0.01801085);
   gre->SetPoint(35,26.625,1.955556);
   gre->SetPointError(35,0.375,0.02172278);
   gre->SetPoint(36,27.375,1.963964);
   gre->SetPointError(36,0.375,0.01769039);
   gre->SetPoint(37,28.125,1.977011);
   gre->SetPointError(37,0.375,0.0160674);
   gre->SetPoint(38,28.875,1.927083);
   gre->SetPointError(38,0.375,0.0265361);
   gre->SetPoint(39,29.625,1.972222);
   gre->SetPointError(39,0.375,0.0158132);
   
   TH1F *Graph_Graph_Graph1923 = new TH1F("Graph_Graph_Graph1923","Graph",100,0,33);
   Graph_Graph_Graph1923->SetMinimum(0.8992406);
   Graph_Graph_Graph1923->SetMaximum(2.108354);
   Graph_Graph_Graph1923->SetDirectory(0);
   Graph_Graph_Graph1923->SetStats(0);
   Graph_Graph_Graph1923->SetLineWidth(2);
   Graph_Graph_Graph1923->SetMarkerSize(1.2);
   Graph_Graph_Graph1923->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1923->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1923->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1923->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1923->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph1923->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1923->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1923->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1923->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1923->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1923->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1923->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1923->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1923->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph1923->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1923->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph1923->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1923->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1923->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1923->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph1923->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph1923->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1923->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph1923->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph1923->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph1923->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph1923->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph1923->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph1923);
   
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
   gre->SetPoint(0,0.375,1);
   gre->SetPointError(0,0.375,0);
   gre->SetPoint(1,1.125,1);
   gre->SetPointError(1,0.375,0);
   gre->SetPoint(2,1.875,1);
   gre->SetPointError(2,0.375,0);
   gre->SetPoint(3,2.625,1);
   gre->SetPointError(3,0.375,0);
   gre->SetPoint(4,3.375,1);
   gre->SetPointError(4,0.375,0);
   gre->SetPoint(5,4.125,1);
   gre->SetPointError(5,0.375,0);
   gre->SetPoint(6,4.875,1);
   gre->SetPointError(6,0.375,0);
   gre->SetPoint(7,5.625,1);
   gre->SetPointError(7,0.375,0);
   gre->SetPoint(8,6.375,1.021978);
   gre->SetPointError(8,0.375,0.01536908);
   gre->SetPoint(9,7.125,1.089744);
   gre->SetPointError(9,0.375,0.03236207);
   gre->SetPoint(10,7.875,1.074468);
   gre->SetPointError(10,0.375,0.02707802);
   gre->SetPoint(11,8.625,1.142857);
   gre->SetPointError(11,0.375,0.03534798);
   gre->SetPoint(12,9.375,1.226667);
   gre->SetPointError(12,0.375,0.04834444);
   gre->SetPoint(13,10.125,1.229167);
   gre->SetPointError(13,0.375,0.04289635);
   gre->SetPoint(14,10.875,1.343137);
   gre->SetPointError(14,0.375,0.04700793);
   gre->SetPoint(15,11.625,1.219512);
   gre->SetPointError(15,0.375,0.04570939);
   gre->SetPoint(16,12.375,1.319149);
   gre->SetPointError(16,0.375,0.04807938);
   gre->SetPoint(17,13.125,1.349515);
   gre->SetPointError(17,0.375,0.04698214);
   gre->SetPoint(18,13.875,1.359551);
   gre->SetPointError(18,0.375,0.05086598);
   gre->SetPoint(19,14.625,1.311111);
   gre->SetPointError(19,0.375,0.04879902);
   gre->SetPoint(20,15.375,1.5625);
   gre->SetPointError(20,0.375,0.05546325);
   gre->SetPoint(21,16.125,1.513761);
   gre->SetPointError(21,0.375,0.04960017);
   gre->SetPoint(22,16.875,1.573034);
   gre->SetPointError(22,0.375,0.05243145);
   gre->SetPoint(23,17.625,1.602041);
   gre->SetPointError(23,0.375,0.04944464);
   gre->SetPoint(24,18.375,1.655172);
   gre->SetPointError(24,0.375,0.0509588);
   gre->SetPoint(25,19.125,1.704082);
   gre->SetPointError(25,0.375,0.04610886);
   gre->SetPoint(26,19.875,1.596154);
   gre->SetPointError(26,0.375,0.04811389);
   gre->SetPoint(27,20.625,1.683168);
   gre->SetPointError(27,0.375,0.04629323);
   gre->SetPoint(28,21.375,1.736842);
   gre->SetPointError(28,0.375,0.05611726);
   gre->SetPoint(29,22.125,1.794872);
   gre->SetPointError(29,0.375,0.04572081);
   gre->SetPoint(30,22.875,1.758621);
   gre->SetPointError(30,0.375,0.04155975);
   gre->SetPoint(31,23.625,1.754545);
   gre->SetPointError(31,0.375,0.04103287);
   gre->SetPoint(32,24.375,1.809524);
   gre->SetPointError(32,0.375,0.0460337);
   gre->SetPoint(33,25.125,1.777778);
   gre->SetPointError(33,0.375,0.04382281);
   gre->SetPoint(34,25.875,1.882353);
   gre->SetPointError(34,0.375,0.03744564);
   gre->SetPoint(35,26.625,1.901099);
   gre->SetPointError(35,0.375,0.03494072);
   gre->SetPoint(36,27.375,1.86747);
   gre->SetPointError(36,0.375,0.03721735);
   gre->SetPoint(37,28.125,1.914894);
   gre->SetPointError(37,0.375,0.03247583);
   gre->SetPoint(38,28.875,1.831461);
   gre->SetPointError(38,0.375,0.04274378);
   gre->SetPoint(39,29.625,1.903226);
   gre->SetPointError(39,0.375,0.03065748);
   
   TH1F *Graph_Graph_Graph2024 = new TH1F("Graph_Graph_Graph2024","Graph",100,0,33);
   Graph_Graph_Graph2024->SetMinimum(0.9052631);
   Graph_Graph_Graph2024->SetMaximum(2.042106);
   Graph_Graph_Graph2024->SetDirectory(0);
   Graph_Graph_Graph2024->SetStats(0);
   Graph_Graph_Graph2024->SetLineWidth(2);
   Graph_Graph_Graph2024->SetMarkerSize(1.2);
   Graph_Graph_Graph2024->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2024->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2024->GetXaxis()->SetLabelColor(ci);
   Graph_Graph_Graph2024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph2024->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph_Graph2024->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph2024->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph2024->GetXaxis()->SetTitleColor(ci);
   Graph_Graph_Graph2024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph2024->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2024->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2024->GetYaxis()->SetLabelColor(ci);
   Graph_Graph_Graph2024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph2024->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph2024->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph2024->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph2024->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph2024->GetYaxis()->SetTitleColor(ci);
   Graph_Graph_Graph2024->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2024->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph_Graph2024->GetZaxis()->SetLabelColor(ci);
   Graph_Graph_Graph2024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph2024->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph_Graph2024->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph2024->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph2024->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph_Graph2024->GetZaxis()->SetTitleColor(ci);
   Graph_Graph_Graph2024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph2024);
   
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
   
   TLegend *leg = new TLegend(0.5665829,0.2172619,0.9472362,0.3675595,NULL,"brNDC");
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
   TLegendEntry *entry=leg->AddEntry("0","500 - 50 GeV","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#7293cb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("1","500 - 500 GeV","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#e1974c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("2","100 - 10 GeV","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#83ba5b");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("3","10 - 10 GeV","f");
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
