{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 25 12:32:07 2017) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "c1",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-108.0393,0.627027,465.4273,1.032432);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.17);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.18);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("");
   
   TGraphErrors *gre = new TGraphErrors(6);
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
   gre->SetPoint(0,9,0.94367);
   gre->SetPointError(0,0,0.00113);
   gre->SetPoint(1,25,0.94022);
   gre->SetPointError(1,0,0.00127);
   gre->SetPoint(2,49,0.93897);
   gre->SetPointError(2,0,0.00106);
   gre->SetPoint(3,100,0.93617);
   gre->SetPointError(3,0,0.00147);
   gre->SetPoint(4,225,0.93049);
   gre->SetPointError(4,0,0.00135);
   gre->SetPoint(5,400,0.92193);
   gre->SetPointError(5,0,0.0016);
   
   TH1F *Graph_Graph217 = new TH1F("Graph_Graph217","Graph",100,0,439.1);
   Graph_Graph217->SetMinimum(0.917883);
   Graph_Graph217->SetMaximum(0.947247);
   Graph_Graph217->SetDirectory(0);
   Graph_Graph217->SetStats(0);
   Graph_Graph217->SetLineWidth(2);
   Graph_Graph217->SetMarkerSize(1.2);
   Graph_Graph217->GetXaxis()->SetNdivisions(506);
   Graph_Graph217->GetXaxis()->SetLabelFont(132);
   Graph_Graph217->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph217->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph217->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph217->GetXaxis()->SetTitleOffset(1.3);
   Graph_Graph217->GetXaxis()->SetTitleFont(132);
   Graph_Graph217->GetYaxis()->SetNdivisions(506);
   Graph_Graph217->GetYaxis()->SetLabelFont(132);
   Graph_Graph217->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph217->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph217->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph217->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph217->GetYaxis()->SetTitleFont(132);
   Graph_Graph217->GetZaxis()->SetLabelFont(132);
   Graph_Graph217->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph217->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph217->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph217->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph217->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph217);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e1974c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#e1974c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,9,0.94824);
   gre->SetPointError(0,0,0.00114);
   gre->SetPoint(1,25,0.94617);
   gre->SetPointError(1,0,0.00115);
   gre->SetPoint(2,49,0.94297);
   gre->SetPointError(2,0,0.00174);
   gre->SetPoint(3,100,0.93816);
   gre->SetPointError(3,0,0.00223);
   gre->SetPoint(4,225,0.92514);
   gre->SetPointError(4,0,0.00246);
   gre->SetPoint(5,400,0.89845);
   gre->SetPointError(5,0,0.00171);
   
   TH1F *Graph_Graph218 = new TH1F("Graph_Graph218","Graph",100,0,439.1);
   Graph_Graph218->SetMinimum(0.891476);
   Graph_Graph218->SetMaximum(0.954644);
   Graph_Graph218->SetDirectory(0);
   Graph_Graph218->SetStats(0);
   Graph_Graph218->SetLineWidth(2);
   Graph_Graph218->SetMarkerSize(1.2);
   Graph_Graph218->GetXaxis()->SetNdivisions(506);
   Graph_Graph218->GetXaxis()->SetLabelFont(132);
   Graph_Graph218->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph218->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph218->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph218->GetXaxis()->SetTitleOffset(1.3);
   Graph_Graph218->GetXaxis()->SetTitleFont(132);
   Graph_Graph218->GetYaxis()->SetNdivisions(506);
   Graph_Graph218->GetYaxis()->SetLabelFont(132);
   Graph_Graph218->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph218->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph218->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph218->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph218->GetYaxis()->SetTitleFont(132);
   Graph_Graph218->GetZaxis()->SetLabelFont(132);
   Graph_Graph218->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph218->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph218->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph218->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph218->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph218);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#83ba5b");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#83ba5b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,9,0.93607);
   gre->SetPointError(0,0,0.00161);
   gre->SetPoint(1,25,0.93446);
   gre->SetPointError(1,0,0.0018);
   gre->SetPoint(2,49,0.92923);
   gre->SetPointError(2,0,0.00267);
   gre->SetPoint(3,100,0.91594);
   gre->SetPointError(3,0,0.00198);
   gre->SetPoint(4,225,0.8927);
   gre->SetPointError(4,0,0.00309);
   gre->SetPoint(5,400,0.85026);
   gre->SetPointError(5,0,0.00309);
   
   TH1F *Graph_Graph219 = new TH1F("Graph_Graph219","Graph",100,0,439.1);
   Graph_Graph219->SetMinimum(0.838119);
   Graph_Graph219->SetMaximum(0.946731);
   Graph_Graph219->SetDirectory(0);
   Graph_Graph219->SetStats(0);
   Graph_Graph219->SetLineWidth(2);
   Graph_Graph219->SetMarkerSize(1.2);
   Graph_Graph219->GetXaxis()->SetNdivisions(506);
   Graph_Graph219->GetXaxis()->SetLabelFont(132);
   Graph_Graph219->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph219->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph219->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph219->GetXaxis()->SetTitleOffset(1.3);
   Graph_Graph219->GetXaxis()->SetTitleFont(132);
   Graph_Graph219->GetYaxis()->SetNdivisions(506);
   Graph_Graph219->GetYaxis()->SetLabelFont(132);
   Graph_Graph219->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph219->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph219->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph219->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph219->GetYaxis()->SetTitleFont(132);
   Graph_Graph219->GetZaxis()->SetLabelFont(132);
   Graph_Graph219->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph219->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph219->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph219->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph219->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph219);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#d35e60");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#d35e60");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,9,0.90343);
   gre->SetPointError(0,0,0.0042);
   gre->SetPoint(1,25,0.89175);
   gre->SetPointError(1,0,0.00561);
   gre->SetPoint(2,49,0.90193);
   gre->SetPointError(2,0,0.00487);
   gre->SetPoint(3,100,0.87815);
   gre->SetPointError(3,0,0.00409);
   gre->SetPoint(4,225,0.86408);
   gre->SetPointError(4,0,0.00707);
   gre->SetPoint(5,400,0.82152);
   gre->SetPointError(5,0,0.00252);
   
   TH1F *Graph_Graph220 = new TH1F("Graph_Graph220","Graph",100,0,439.1);
   Graph_Graph220->SetMinimum(0.810137);
   Graph_Graph220->SetMaximum(0.916493);
   Graph_Graph220->SetDirectory(0);
   Graph_Graph220->SetStats(0);
   Graph_Graph220->SetLineWidth(2);
   Graph_Graph220->SetMarkerSize(1.2);
   Graph_Graph220->GetXaxis()->SetNdivisions(506);
   Graph_Graph220->GetXaxis()->SetLabelFont(132);
   Graph_Graph220->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph220->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph220->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph220->GetXaxis()->SetTitleOffset(1.3);
   Graph_Graph220->GetXaxis()->SetTitleFont(132);
   Graph_Graph220->GetYaxis()->SetNdivisions(506);
   Graph_Graph220->GetYaxis()->SetLabelFont(132);
   Graph_Graph220->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph220->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph220->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph220->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph220->GetYaxis()->SetTitleFont(132);
   Graph_Graph220->GetZaxis()->SetLabelFont(132);
   Graph_Graph220->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph220->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph220->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph220->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph220->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph220);
   
   multigraph->Add(gre,"");
   multigraph->Draw("APl");
   multigraph->GetXaxis()->SetTitle("ECAL cell size / mm^{2}");
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleOffset(1.3);
   multigraph->GetXaxis()->SetTitleFont(132);
   multigraph->GetYaxis()->SetTitle("#tau^{-}#rightarrow #pi^{-} #nu_{#tau} efficiency");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelOffset(0.015);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(1.5);
   multigraph->GetYaxis()->SetTitleFont(132);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#7293cb");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#7293cb");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,9,0.94367);
   gre->SetPointError(0,0,0.00113);
   gre->SetPoint(1,25,0.94022);
   gre->SetPointError(1,0,0.00127);
   gre->SetPoint(2,49,0.93897);
   gre->SetPointError(2,0,0.00106);
   gre->SetPoint(3,100,0.93617);
   gre->SetPointError(3,0,0.00147);
   gre->SetPoint(4,225,0.93049);
   gre->SetPointError(4,0,0.00135);
   gre->SetPoint(5,400,0.92193);
   gre->SetPointError(5,0,0.0016);
   
   TH1F *Graph_Graph_Graph217221 = new TH1F("Graph_Graph_Graph217221","Graph",100,0,439.1);
   Graph_Graph_Graph217221->SetMinimum(0.917883);
   Graph_Graph_Graph217221->SetMaximum(0.947247);
   Graph_Graph_Graph217221->SetDirectory(0);
   Graph_Graph_Graph217221->SetStats(0);
   Graph_Graph_Graph217221->SetLineWidth(2);
   Graph_Graph_Graph217221->SetMarkerSize(1.2);
   Graph_Graph_Graph217221->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph217221->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph217221->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph217221->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph217221->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph217221->GetXaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph217221->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph217221->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph217221->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph217221->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph217221->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph217221->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph217221->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph_Graph217221->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph217221->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph217221->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph217221->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph217221->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph217221->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph217221->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph217221);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e1974c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#e1974c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,9,0.94824);
   gre->SetPointError(0,0,0.00114);
   gre->SetPoint(1,25,0.94617);
   gre->SetPointError(1,0,0.00115);
   gre->SetPoint(2,49,0.94297);
   gre->SetPointError(2,0,0.00174);
   gre->SetPoint(3,100,0.93816);
   gre->SetPointError(3,0,0.00223);
   gre->SetPoint(4,225,0.92514);
   gre->SetPointError(4,0,0.00246);
   gre->SetPoint(5,400,0.89845);
   gre->SetPointError(5,0,0.00171);
   
   TH1F *Graph_Graph_Graph218222 = new TH1F("Graph_Graph_Graph218222","Graph",100,0,439.1);
   Graph_Graph_Graph218222->SetMinimum(0.891476);
   Graph_Graph_Graph218222->SetMaximum(0.954644);
   Graph_Graph_Graph218222->SetDirectory(0);
   Graph_Graph_Graph218222->SetStats(0);
   Graph_Graph_Graph218222->SetLineWidth(2);
   Graph_Graph_Graph218222->SetMarkerSize(1.2);
   Graph_Graph_Graph218222->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph218222->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph218222->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph218222->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph218222->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph218222->GetXaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph218222->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph218222->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph218222->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph218222->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph218222->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph218222->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph218222->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph_Graph218222->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph218222->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph218222->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph218222->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph218222->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph218222->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph218222->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph218222);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#83ba5b");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#83ba5b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,9,0.93607);
   gre->SetPointError(0,0,0.00161);
   gre->SetPoint(1,25,0.93446);
   gre->SetPointError(1,0,0.0018);
   gre->SetPoint(2,49,0.92923);
   gre->SetPointError(2,0,0.00267);
   gre->SetPoint(3,100,0.91594);
   gre->SetPointError(3,0,0.00198);
   gre->SetPoint(4,225,0.8927);
   gre->SetPointError(4,0,0.00309);
   gre->SetPoint(5,400,0.85026);
   gre->SetPointError(5,0,0.00309);
   
   TH1F *Graph_Graph_Graph219223 = new TH1F("Graph_Graph_Graph219223","Graph",100,0,439.1);
   Graph_Graph_Graph219223->SetMinimum(0.838119);
   Graph_Graph_Graph219223->SetMaximum(0.946731);
   Graph_Graph_Graph219223->SetDirectory(0);
   Graph_Graph_Graph219223->SetStats(0);
   Graph_Graph_Graph219223->SetLineWidth(2);
   Graph_Graph_Graph219223->SetMarkerSize(1.2);
   Graph_Graph_Graph219223->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph219223->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph219223->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph219223->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph219223->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph219223->GetXaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph219223->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph219223->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph219223->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph219223->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph219223->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph219223->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph219223->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph_Graph219223->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph219223->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph219223->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph219223->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph219223->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph219223->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph219223->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph219223);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#d35e60");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#d35e60");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,9,0.90343);
   gre->SetPointError(0,0,0.0042);
   gre->SetPoint(1,25,0.89175);
   gre->SetPointError(1,0,0.00561);
   gre->SetPoint(2,49,0.90193);
   gre->SetPointError(2,0,0.00487);
   gre->SetPoint(3,100,0.87815);
   gre->SetPointError(3,0,0.00409);
   gre->SetPoint(4,225,0.86408);
   gre->SetPointError(4,0,0.00707);
   gre->SetPoint(5,400,0.82152);
   gre->SetPointError(5,0,0.00252);
   
   TH1F *Graph_Graph_Graph220224 = new TH1F("Graph_Graph_Graph220224","Graph",100,0,439.1);
   Graph_Graph_Graph220224->SetMinimum(0.810137);
   Graph_Graph_Graph220224->SetMaximum(0.916493);
   Graph_Graph_Graph220224->SetDirectory(0);
   Graph_Graph_Graph220224->SetStats(0);
   Graph_Graph_Graph220224->SetLineWidth(2);
   Graph_Graph_Graph220224->SetMarkerSize(1.2);
   Graph_Graph_Graph220224->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph220224->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph220224->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph220224->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph220224->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph220224->GetXaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph220224->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph220224->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph220224->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph220224->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph220224->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph220224->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph220224->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph_Graph220224->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph220224->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph220224->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph220224->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph220224->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph220224->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph220224->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph220224);
   
   multigraph->Add(gre,"");
   multigraph->Draw("");
   multigraph->GetXaxis()->SetTitle("ECAL cell size / mm^{2}");
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleOffset(1.3);
   multigraph->GetXaxis()->SetTitleFont(132);
   multigraph->GetYaxis()->SetTitle("#tau^{-}#rightarrow #pi^{-} #nu_{#tau} efficiency");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelOffset(0.015);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(1.5);
   multigraph->GetYaxis()->SetTitleFont(132);
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
