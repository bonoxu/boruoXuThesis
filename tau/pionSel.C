{
//=========Macro generated from canvas: c1/
//=========  (Tue Oct 11 17:16:01 2016) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-2.088667,0.7841616,22.84467,0.9628224);
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
   multigraph->SetName("");
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
   gre->SetPoint(0,3,0.93473);
   gre->SetPointError(0,0,0.0012);
   gre->SetPoint(1,5,0.93602);
   gre->SetPointError(1,0,0.00089);
   gre->SetPoint(2,7,0.93188);
   gre->SetPointError(2,0,0.00093);
   gre->SetPoint(3,10,0.93235);
   gre->SetPointError(3,0,0.00118);
   gre->SetPoint(4,15,0.93029);
   gre->SetPointError(4,0,0.00094);
   gre->SetPoint(5,20,0.91978);
   gre->SetPointError(5,0,0.00122);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Graph",100,1.3,21.7);
   Graph_Graph9->SetMinimum(0.916725);
   Graph_Graph9->SetMaximum(0.938745);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);
   Graph_Graph9->SetLineWidth(2);
   Graph_Graph9->SetMarkerSize(1.2);
   Graph_Graph9->GetXaxis()->SetNdivisions(506);
   Graph_Graph9->GetXaxis()->SetLabelFont(132);
   Graph_Graph9->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph9->GetXaxis()->SetTitleFont(132);
   Graph_Graph9->GetYaxis()->SetNdivisions(506);
   Graph_Graph9->GetYaxis()->SetLabelFont(132);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph9->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph9->GetYaxis()->SetTitleFont(132);
   Graph_Graph9->GetZaxis()->SetLabelFont(132);
   Graph_Graph9->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph9->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph9->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph9);
   
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
   gre->SetPoint(0,3,0.94017);
   gre->SetPointError(0,0,0.00083);
   gre->SetPoint(1,5,0.9417);
   gre->SetPointError(1,0,0.00082);
   gre->SetPoint(2,7,0.93537);
   gre->SetPointError(2,0,0.00158);
   gre->SetPoint(3,10,0.9339);
   gre->SetPointError(3,0,0.00087);
   gre->SetPoint(4,15,0.92362);
   gre->SetPointError(4,0,0.00172);
   gre->SetPoint(5,20,0.89322);
   gre->SetPointError(5,0,0.00127);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Graph",100,1.3,21.7);
   Graph_Graph10->SetMinimum(0.886893);
   Graph_Graph10->SetMaximum(0.947577);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);
   Graph_Graph10->SetLineWidth(2);
   Graph_Graph10->SetMarkerSize(1.2);
   Graph_Graph10->GetXaxis()->SetNdivisions(506);
   Graph_Graph10->GetXaxis()->SetLabelFont(132);
   Graph_Graph10->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph10->GetXaxis()->SetTitleFont(132);
   Graph_Graph10->GetYaxis()->SetNdivisions(506);
   Graph_Graph10->GetYaxis()->SetLabelFont(132);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph10->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph10->GetYaxis()->SetTitleFont(132);
   Graph_Graph10->GetZaxis()->SetLabelFont(132);
   Graph_Graph10->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph10->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph10->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph10);
   
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
   gre->SetPoint(0,3,0.92691);
   gre->SetPointError(0,0,0.00091);
   gre->SetPoint(1,5,0.92862);
   gre->SetPointError(1,0,0.0009);
   gre->SetPoint(2,7,0.91887);
   gre->SetPointError(2,0,0.00143);
   gre->SetPoint(3,10,0.90745);
   gre->SetPointError(3,0,0.001);
   gre->SetPoint(4,15,0.88248);
   gre->SetPointError(4,0,0.00214);
   gre->SetPoint(5,20,0.83692);
   gre->SetPointError(5,0,0.00152);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,1.3,21.7);
   Graph_Graph11->SetMinimum(0.825988);
   Graph_Graph11->SetMaximum(0.938932);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);
   Graph_Graph11->SetLineWidth(2);
   Graph_Graph11->SetMarkerSize(1.2);
   Graph_Graph11->GetXaxis()->SetNdivisions(506);
   Graph_Graph11->GetXaxis()->SetLabelFont(132);
   Graph_Graph11->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph11->GetXaxis()->SetTitleFont(132);
   Graph_Graph11->GetYaxis()->SetNdivisions(506);
   Graph_Graph11->GetYaxis()->SetLabelFont(132);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph11->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph11->GetYaxis()->SetTitleFont(132);
   Graph_Graph11->GetZaxis()->SetLabelFont(132);
   Graph_Graph11->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph11->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph11->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph11);
   
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
   gre->SetPoint(0,3,0.90367);
   gre->SetPointError(0,0,0.00103);
   gre->SetPoint(1,5,0.89864);
   gre->SetPointError(1,0,0.00104);
   gre->SetPoint(2,7,0.88461);
   gre->SetPointError(2,0,0.00246);
   gre->SetPoint(3,10,0.8782);
   gre->SetPointError(3,0,0.00163);
   gre->SetPoint(4,15,0.86036);
   gre->SetPointError(4,0,0.00213);
   gre->SetPoint(5,20,0.82399);
   gre->SetPointError(5,0,0.00166);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",100,1.3,21.7);
   Graph_Graph12->SetMinimum(0.814093);
   Graph_Graph12->SetMaximum(0.912937);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);
   Graph_Graph12->SetLineWidth(2);
   Graph_Graph12->SetMarkerSize(1.2);
   Graph_Graph12->GetXaxis()->SetNdivisions(506);
   Graph_Graph12->GetXaxis()->SetLabelFont(132);
   Graph_Graph12->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph12->GetXaxis()->SetTitleFont(132);
   Graph_Graph12->GetYaxis()->SetNdivisions(506);
   Graph_Graph12->GetYaxis()->SetLabelFont(132);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph12->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph12->GetYaxis()->SetTitleFont(132);
   Graph_Graph12->GetZaxis()->SetLabelFont(132);
   Graph_Graph12->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph12->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph12->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph12);
   
   multigraph->Add(gre,"");
   multigraph->Draw("APl");
   multigraph->GetXaxis()->SetTitle("ECal Cell Size /mm");
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(132);
   multigraph->GetYaxis()->SetTitle("#tau^{-}#rightarrow #pi^{-} #nu_{#tau} selection efficiency");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(1.2);
   multigraph->GetYaxis()->SetTitleFont(132);
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
