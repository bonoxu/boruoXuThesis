{
//=========Macro generated from canvas: c1/
//=========  (Tue Oct 11 17:18:19 2016) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-2.088667,-0.2253793,22.84467,1.026728);
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
   gre->SetPoint(0,3,0.78035);
   gre->SetPointError(0,0,0.0026);
   gre->SetPoint(1,5,0.85018);
   gre->SetPointError(1,0,0.00169);
   gre->SetPoint(2,7,0.87512);
   gre->SetPointError(2,0,0.00159);
   gre->SetPoint(3,10,0.88209);
   gre->SetPointError(3,0,0.00196);
   gre->SetPoint(4,15,0.8595);
   gre->SetPointError(4,0,0.00167);
   gre->SetPoint(5,20,0.81587);
   gre->SetPointError(5,0,0.00224);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Graph",100,1.3,21.7);
   Graph_Graph13->SetMinimum(0.76712);
   Graph_Graph13->SetMaximum(0.89468);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);
   Graph_Graph13->SetLineWidth(2);
   Graph_Graph13->SetMarkerSize(1.2);
   Graph_Graph13->GetXaxis()->SetNdivisions(506);
   Graph_Graph13->GetXaxis()->SetLabelFont(132);
   Graph_Graph13->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph13->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph13->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph13->GetXaxis()->SetTitleFont(132);
   Graph_Graph13->GetYaxis()->SetNdivisions(506);
   Graph_Graph13->GetYaxis()->SetLabelFont(132);
   Graph_Graph13->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph13->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph13->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph13->GetYaxis()->SetTitleFont(132);
   Graph_Graph13->GetZaxis()->SetLabelFont(132);
   Graph_Graph13->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph13->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph13->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph13->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph13->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph13);
   
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
   gre->SetPoint(0,3,0.73554);
   gre->SetPointError(0,0,0.00209);
   gre->SetPoint(1,5,0.83951);
   gre->SetPointError(1,0,0.00174);
   gre->SetPoint(2,7,0.84621);
   gre->SetPointError(2,0,0.00313);
   gre->SetPoint(3,10,0.82439);
   gre->SetPointError(3,0,0.0018);
   gre->SetPoint(4,15,0.75243);
   gre->SetPointError(4,0,0.00376);
   gre->SetPoint(5,20,0.5693);
   gre->SetPointError(5,0,0.00277);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","Graph",100,1.3,21.7);
   Graph_Graph14->SetMinimum(0.538249);
   Graph_Graph14->SetMaximum(0.877621);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);
   Graph_Graph14->SetLineWidth(2);
   Graph_Graph14->SetMarkerSize(1.2);
   Graph_Graph14->GetXaxis()->SetNdivisions(506);
   Graph_Graph14->GetXaxis()->SetLabelFont(132);
   Graph_Graph14->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph14->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph14->GetXaxis()->SetTitleFont(132);
   Graph_Graph14->GetYaxis()->SetNdivisions(506);
   Graph_Graph14->GetYaxis()->SetLabelFont(132);
   Graph_Graph14->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph14->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph14->GetYaxis()->SetTitleFont(132);
   Graph_Graph14->GetZaxis()->SetLabelFont(132);
   Graph_Graph14->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph14->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph14->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph14->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph14);
   
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
   gre->SetPoint(0,3,0.76135);
   gre->SetPointError(0,0,0.00204);
   gre->SetPoint(1,5,0.73227);
   gre->SetPointError(1,0,0.00213);
   gre->SetPoint(2,7,0.65247);
   gre->SetPointError(2,0,0.00343);
   gre->SetPoint(3,10,0.50038);
   gre->SetPointError(3,0,0.00237);
   gre->SetPoint(4,15,0.30627);
   gre->SetPointError(4,0,0.00419);
   gre->SetPoint(5,20,0.15072);
   gre->SetPointError(5,0,0.00201);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","Graph",100,1.3,21.7);
   Graph_Graph15->SetMinimum(0.087242);
   Graph_Graph15->SetMaximum(0.824858);
   Graph_Graph15->SetDirectory(0);
   Graph_Graph15->SetStats(0);
   Graph_Graph15->SetLineWidth(2);
   Graph_Graph15->SetMarkerSize(1.2);
   Graph_Graph15->GetXaxis()->SetNdivisions(506);
   Graph_Graph15->GetXaxis()->SetLabelFont(132);
   Graph_Graph15->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph15->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph15->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph15->GetXaxis()->SetTitleFont(132);
   Graph_Graph15->GetYaxis()->SetNdivisions(506);
   Graph_Graph15->GetYaxis()->SetLabelFont(132);
   Graph_Graph15->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph15->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph15->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph15->GetYaxis()->SetTitleFont(132);
   Graph_Graph15->GetZaxis()->SetLabelFont(132);
   Graph_Graph15->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph15->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph15->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph15->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph15->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph15);
   
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
   gre->SetPoint(0,3,0.58604);
   gre->SetPointError(0,0,0.00237);
   gre->SetPoint(1,5,0.413);
   gre->SetPointError(1,0,0.00235);
   gre->SetPoint(2,7,0.27749);
   gre->SetPointError(2,0,0.00478);
   gre->SetPoint(3,10,0.13913);
   gre->SetPointError(3,0,0.00239);
   gre->SetPoint(4,15,0.0636);
   gre->SetPointError(4,0,0.00207);
   gre->SetPoint(5,20,0.03496);
   gre->SetPointError(5,0,0.0011);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","Graph",100,1.3,21.7);
   Graph_Graph16->SetMinimum(0);
   Graph_Graph16->SetMaximum(0.643865);
   Graph_Graph16->SetDirectory(0);
   Graph_Graph16->SetStats(0);
   Graph_Graph16->SetLineWidth(2);
   Graph_Graph16->SetMarkerSize(1.2);
   Graph_Graph16->GetXaxis()->SetNdivisions(506);
   Graph_Graph16->GetXaxis()->SetLabelFont(132);
   Graph_Graph16->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph16->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph16->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph16->GetXaxis()->SetTitleFont(132);
   Graph_Graph16->GetYaxis()->SetNdivisions(506);
   Graph_Graph16->GetYaxis()->SetLabelFont(132);
   Graph_Graph16->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph16->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph16->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph16->GetYaxis()->SetTitleFont(132);
   Graph_Graph16->GetZaxis()->SetLabelFont(132);
   Graph_Graph16->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph16->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph16->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph16->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph16->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph16);
   
   multigraph->Add(gre,"");
   multigraph->Draw("APl");
   multigraph->GetXaxis()->SetTitle("ECal Cell Size /mm");
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(132);
   multigraph->GetYaxis()->SetTitle("#tau^{-}#rightarrow #pi^{-} 4#gamma #nu_{#tau} selection efficiency");
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
