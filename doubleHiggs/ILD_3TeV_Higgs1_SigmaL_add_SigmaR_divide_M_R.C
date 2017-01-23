{
//=========Macro generated from canvas: c1/
//=========  (Sun Jan 22 16:16:11 2017) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "",12,51,1600,900);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(0.2682051,0.126446,1.39641,0.4364628);
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
   
   TGraphErrors *gre = new TGraphErrors(9);
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
   gre->SetPoint(0,0.5,0.2057583);
   gre->SetPointError(0,0,0.003346498);
   gre->SetPoint(1,0.6,0.2184294);
   gre->SetPointError(1,0,0.003610673);
   gre->SetPoint(2,0.7,0.2394801);
   gre->SetPointError(2,0,0.0041469);
   gre->SetPoint(3,0.8,0.2613398);
   gre->SetPointError(3,0,0.005108003);
   gre->SetPoint(4,0.9,0.2858384);
   gre->SetPointError(4,0,0.006998309);
   gre->SetPoint(5,1,0.3168623);
   gre->SetPointError(5,0,0.009479996);
   gre->SetPoint(6,1.1,0.3467942);
   gre->SetPointError(6,0,0.01313477);
   gre->SetPoint(7,1.2,0.3730055);
   gre->SetPointError(7,0,0.01941389);
   gre->SetPoint(8,1.3,0.371752);
   gre->SetPointError(8,0,0.02948167);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Graph",100,0.42,1.38);
   Graph_Graph10->SetMinimum(0.1825296);
   Graph_Graph10->SetMaximum(0.4211158);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);
   Graph_Graph10->SetLineWidth(2);
   Graph_Graph10->SetMarkerSize(1.2);
   Graph_Graph10->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph10->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph10->GetXaxis()->SetLabelColor(ci);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph10->GetXaxis()->SetTitleColor(ci);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph10->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph10->GetYaxis()->SetLabelColor(ci);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph10->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph10->GetYaxis()->SetTitleColor(ci);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph10->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph10->GetZaxis()->SetLabelColor(ci);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph10->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph10->GetZaxis()->SetTitleColor(ci);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph10);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(9);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e1974c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#e1974c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0.5,0.1973797);
   gre->SetPointError(0,0,0.003245463);
   gre->SetPoint(1,0.6,0.1978988);
   gre->SetPointError(1,0,0.003114032);
   gre->SetPoint(2,0.7,0.2048034);
   gre->SetPointError(2,0,0.003222441);
   gre->SetPoint(3,0.8,0.2189637);
   gre->SetPointError(3,0,0.003512847);
   gre->SetPoint(4,0.9,0.2381887);
   gre->SetPointError(4,0,0.004129427);
   gre->SetPoint(5,1,0.2568325);
   gre->SetPointError(5,0,0.00492335);
   gre->SetPoint(6,1.1,0.2725213);
   gre->SetPointError(6,0,0.005949266);
   gre->SetPoint(7,1.2,0.2899279);
   gre->SetPointError(7,0,0.007316094);
   gre->SetPoint(8,1.3,0.3060297);
   gre->SetPointError(8,0,0.008660513);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,0.42,1.38);
   Graph_Graph11->SetMinimum(0.1820787);
   Graph_Graph11->SetMaximum(0.3267459);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);
   Graph_Graph11->SetLineWidth(2);
   Graph_Graph11->SetMarkerSize(1.2);
   Graph_Graph11->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph11->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph11->GetXaxis()->SetLabelColor(ci);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph11->GetXaxis()->SetTitleColor(ci);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph11->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph11->GetYaxis()->SetLabelColor(ci);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph11->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph11->GetYaxis()->SetTitleColor(ci);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph11->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph11->GetZaxis()->SetLabelColor(ci);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph11->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph11->GetZaxis()->SetTitleColor(ci);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(9);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#83ba5b");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#83ba5b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0.5,0.2000461);
   gre->SetPointError(0,0,0.003458432);
   gre->SetPoint(1,0.6,0.1959388);
   gre->SetPointError(1,0,0.003261956);
   gre->SetPoint(2,0.7,0.1966713);
   gre->SetPointError(2,0,0.003003594);
   gre->SetPoint(3,0.8,0.1999345);
   gre->SetPointError(3,0,0.003016512);
   gre->SetPoint(4,0.9,0.2052769);
   gre->SetPointError(4,0,0.003074421);
   gre->SetPoint(5,1,0.2133933);
   gre->SetPointError(5,0,0.00320737);
   gre->SetPoint(6,1.1,0.2207731);
   gre->SetPointError(6,0,0.003414466);
   gre->SetPoint(7,1.2,0.2320789);
   gre->SetPointError(7,0,0.003678992);
   gre->SetPoint(8,1.3,0.2425493);
   gre->SetPointError(8,0,0.003965413);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",100,0.42,1.38);
   Graph_Graph12->SetMinimum(0.1872931);
   Graph_Graph12->SetMaximum(0.2518985);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);
   Graph_Graph12->SetLineWidth(2);
   Graph_Graph12->SetMarkerSize(1.2);
   Graph_Graph12->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph12->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph12->GetXaxis()->SetLabelColor(ci);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph12->GetXaxis()->SetTitleColor(ci);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph12->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph12->GetYaxis()->SetLabelColor(ci);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph12->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph12->GetYaxis()->SetTitleColor(ci);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph12->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph12->GetZaxis()->SetLabelColor(ci);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph12->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph12->GetZaxis()->SetTitleColor(ci);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph12);
   
   multigraph->Add(gre,"");
   multigraph->Draw("APl");
   multigraph->GetXaxis()->SetTitle("R");
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
   multigraph->GetYaxis()->SetTitle("SigmaL_SigmaR_divide_M");
   multigraph->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   multigraph->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   multigraph->GetYaxis()->SetLabelColor(ci);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.0015);
   multigraph->GetYaxis()->SetLabelSize(0.06);
   multigraph->GetYaxis()->SetTitleSize(0.07);
   multigraph->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   multigraph->GetYaxis()->SetTitleColor(ci);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.6,0.75,0.98,0.9,NULL,"brNDC");
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
   TLegendEntry *entry=leg->AddEntry("Graph","loose","l");

   ci = TColor::GetColor("#7293cb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph","normal","l");

   ci = TColor::GetColor("#e1974c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph","tight","l");

   ci = TColor::GetColor("#83ba5b");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
