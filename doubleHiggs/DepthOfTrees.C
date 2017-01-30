{
//=========Macro generated from canvas: canvas1/
//=========  (Tue Nov  8 10:48:39 2016) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0.204,0.2391892,9.004,0.577027);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetTickx(1);
   canvas1->SetTicky(1);
   canvas1->SetLeftMargin(0.17);
   canvas1->SetRightMargin(0.08);
   canvas1->SetTopMargin(0.08);
   canvas1->SetBottomMargin(0.18);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraphErrors *gre = new TGraphErrors(7);
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
   gre->SetPoint(0,2,0.422);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,3,0.443);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,4,0.454);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,5,0.468);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,6,0.475);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,7,0.487);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,8,0.485);
   gre->SetPointError(6,0,0);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,1.4,8.6);
   Graph_Graph3->SetMinimum(0.4155);
   Graph_Graph3->SetMaximum(0.4935);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   Graph_Graph3->SetLineWidth(2);
   Graph_Graph3->SetMarkerSize(1.2);
   Graph_Graph3->GetXaxis()->SetNdivisions(506);
   Graph_Graph3->GetXaxis()->SetLabelFont(132);
   Graph_Graph3->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3->GetXaxis()->SetTitleFont(132);
   Graph_Graph3->GetYaxis()->SetNdivisions(506);
   Graph_Graph3->GetYaxis()->SetLabelFont(132);
   Graph_Graph3->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph3->GetYaxis()->SetTitleFont(132);
   Graph_Graph3->GetZaxis()->SetLabelFont(132);
   Graph_Graph3->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph3->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph3);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(7);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e1974c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#e1974c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,2,0.415);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,3,0.436);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,4,0.437);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,5,0.445);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,6,0.452);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,7,0.446);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,8,0.435);
   gre->SetPointError(6,0,0);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,1.4,8.6);
   Graph_Graph4->SetMinimum(0.4113);
   Graph_Graph4->SetMaximum(0.4557);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   Graph_Graph4->SetLineWidth(2);
   Graph_Graph4->SetMarkerSize(1.2);
   Graph_Graph4->GetXaxis()->SetNdivisions(506);
   Graph_Graph4->GetXaxis()->SetLabelFont(132);
   Graph_Graph4->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph4->GetXaxis()->SetTitleFont(132);
   Graph_Graph4->GetYaxis()->SetNdivisions(506);
   Graph_Graph4->GetYaxis()->SetLabelFont(132);
   Graph_Graph4->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph4->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph4->GetYaxis()->SetTitleFont(132);
   Graph_Graph4->GetZaxis()->SetLabelFont(132);
   Graph_Graph4->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph4->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph4->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph4);
   
   multigraph->Add(gre,"");
   multigraph->Draw("APl");
   multigraph->GetXaxis()->SetTitle("Depth of trees");
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(132);
   multigraph->GetYaxis()->SetTitle("Signal efficiency @B = 0.01");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelOffset(0.015);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(1.3);
   multigraph->GetYaxis()->SetTitleFont(132);
   
   TLegend *leg = new TLegend(0.65,0.2,0.98,0.4,NULL,"brNDC");
   leg->SetBorderSize(0);

   ci = TColor::GetColor("#616161");
   leg->SetTextColor(ci);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(10);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph","Training","l");

   ci = TColor::GetColor("#7293cb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph","Testing","l");

   ci = TColor::GetColor("#e1974c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
