{
//=========Macro generated from canvas: c1/
//=========  (Tue Mar 21 13:57:29 2017) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   c1->Range(-27.50513,2.398145,549.2897,3.993042);
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
   multigraph->SetTitle("AAAA");
   
   TGraphErrors *gre = new TGraphErrors(4);
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
   gre->SetPoint(0,91,3.76354);
   gre->SetPointError(0,0,0.0482638);
   gre->SetPoint(1,200,2.8844);
   gre->SetPointError(1,0,0.0371727);
   gre->SetPoint(2,360,2.77463);
   gre->SetPointError(2,0,0.0357569);
   gre->SetPoint(3,500,2.89704);
   gre->SetPointError(3,0,0.03669);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","Graph",100,50.1,540.9);
   Graph_Graph15->SetMinimum(2.63158);
   Graph_Graph15->SetMaximum(3.919097);
   Graph_Graph15->SetDirectory(0);
   Graph_Graph15->SetStats(0);
   Graph_Graph15->SetLineWidth(2);
   Graph_Graph15->SetMarkerSize(1.2);
   Graph_Graph15->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph15->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph15->GetXaxis()->SetLabelColor(ci);
   Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph15->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph15->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph15->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph15->GetXaxis()->SetTitleColor(ci);
   Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph15->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph15->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph15->GetYaxis()->SetLabelColor(ci);
   Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph15->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph15->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph15->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph15->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph15->GetYaxis()->SetTitleColor(ci);
   Graph_Graph15->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph15->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph15->GetZaxis()->SetLabelColor(ci);
   Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph15->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph15->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph15->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph15->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph15->GetZaxis()->SetTitleColor(ci);
   Graph_Graph15->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph15);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(4);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e1974c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#e1974c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,91,3.72372);
   gre->SetPointError(0,0,0.0478542);
   gre->SetPoint(1,200,2.88907);
   gre->SetPointError(1,0,0.0370302);
   gre->SetPoint(2,360,2.82596);
   gre->SetPointError(2,0,0.0365165);
   gre->SetPoint(3,500,2.92161);
   gre->SetPointError(3,0,0.037331);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","Graph",100,50.1,540.9);
   Graph_Graph16->SetMinimum(2.69123);
   Graph_Graph16->SetMaximum(3.869787);
   Graph_Graph16->SetDirectory(0);
   Graph_Graph16->SetStats(0);
   Graph_Graph16->SetLineWidth(2);
   Graph_Graph16->SetMarkerSize(1.2);
   Graph_Graph16->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph16->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph16->GetXaxis()->SetLabelColor(ci);
   Graph_Graph16->GetXaxis()->SetLabelFont(42);
   Graph_Graph16->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph16->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph16->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph16->GetXaxis()->SetTitleColor(ci);
   Graph_Graph16->GetXaxis()->SetTitleFont(42);
   Graph_Graph16->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph16->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph16->GetYaxis()->SetLabelColor(ci);
   Graph_Graph16->GetYaxis()->SetLabelFont(42);
   Graph_Graph16->GetYaxis()->SetLabelOffset(0.02);
   Graph_Graph16->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph16->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph16->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph16->GetYaxis()->SetTitleColor(ci);
   Graph_Graph16->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph16->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph16->GetZaxis()->SetLabelColor(ci);
   Graph_Graph16->GetZaxis()->SetLabelFont(42);
   Graph_Graph16->GetZaxis()->SetLabelOffset(0.02);
   Graph_Graph16->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph16->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph16->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph16->GetZaxis()->SetTitleColor(ci);
   Graph_Graph16->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph16);
   
   multigraph->Add(gre,"");
   multigraph->Draw("APl");
   multigraph->GetXaxis()->SetTitle("E_{jj} / GeV");
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
   multigraph->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) / %");
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
   
   TLegend *leg = new TLegend(0.4974874,0.797619,0.9974874,0.8973214,NULL,"brNDC");
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
   TLegendEntry *entry=leg->AddEntry("Graph","Pandora v1","lep");

   ci = TColor::GetColor("#e1974c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#e1974c");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph","Pandora v3","lep");

   ci = TColor::GetColor("#7293cb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#7293cb");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
