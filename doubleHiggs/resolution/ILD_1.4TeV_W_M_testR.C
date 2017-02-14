{
//=========Macro generated from canvas: c1/
//=========  (Tue Feb 14 14:19:42 2017) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(0.2682051,60.27027,1.39641,114.3243);
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
   gre->SetPoint(0,0.5,79.26725);
   gre->SetPointError(0,0,0.2150106);
   gre->SetPoint(1,0.6,81.784);
   gre->SetPointError(1,0,0.2109467);
   gre->SetPoint(2,0.7,84.40255);
   gre->SetPointError(2,0,0.2486043);
   gre->SetPoint(3,0.8,86.10942);
   gre->SetPointError(3,0,0.2749976);
   gre->SetPoint(4,0.9,88.27622);
   gre->SetPointError(4,0,0.318573);
   gre->SetPoint(5,1,90.17753);
   gre->SetPointError(5,0,0.3705339);
   gre->SetPoint(6,1.1,91.65435);
   gre->SetPointError(6,0,0.4228865);
   gre->SetPoint(7,1.2,92.49352);
   gre->SetPointError(7,0,0.480789);
   gre->SetPoint(8,1.3,95.5383);
   gre->SetPointError(8,0,0.424621);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,0.42,1.38);
   Graph_Graph7->SetMinimum(77.36117);
   Graph_Graph7->SetMaximum(97.65399);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);
   Graph_Graph7->SetLineWidth(2);
   Graph_Graph7->SetMarkerSize(1.2);
   Graph_Graph7->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph7->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph7->GetXaxis()->SetLabelColor(ci);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph7->GetXaxis()->SetTitleColor(ci);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph7->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph7->GetYaxis()->SetLabelColor(ci);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph7->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph7->GetYaxis()->SetTitleColor(ci);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph7->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph7->GetZaxis()->SetLabelColor(ci);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph7->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph7->GetZaxis()->SetTitleColor(ci);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph7);
   
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
   gre->SetPoint(0,0.5,76.73759);
   gre->SetPointError(0,0,0.2004371);
   gre->SetPoint(1,0.6,78.71901);
   gre->SetPointError(1,0,0.2093878);
   gre->SetPoint(2,0.7,80.5375);
   gre->SetPointError(2,0,0.2135425);
   gre->SetPoint(3,0.8,81.87287);
   gre->SetPointError(3,0,0.2179301);
   gre->SetPoint(4,0.9,83.57568);
   gre->SetPointError(4,0,0.2568323);
   gre->SetPoint(5,1,84.95813);
   gre->SetPointError(5,0,0.2800235);
   gre->SetPoint(6,1.1,86.32229);
   gre->SetPointError(6,0,0.3060185);
   gre->SetPoint(7,1.2,87.28859);
   gre->SetPointError(7,0,0.3360063);
   gre->SetPoint(8,1.3,88.4052);
   gre->SetPointError(8,0,0.3608333);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,0.42,1.38);
   Graph_Graph8->SetMinimum(75.31427);
   Graph_Graph8->SetMaximum(89.98892);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);
   Graph_Graph8->SetLineWidth(2);
   Graph_Graph8->SetMarkerSize(1.2);
   Graph_Graph8->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph8->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph8->GetXaxis()->SetLabelColor(ci);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph8->GetXaxis()->SetTitleColor(ci);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph8->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph8->GetYaxis()->SetLabelColor(ci);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph8->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph8->GetYaxis()->SetTitleColor(ci);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph8->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph8->GetZaxis()->SetLabelColor(ci);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph8->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph8->GetZaxis()->SetTitleColor(ci);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph8);
   
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
   gre->SetPoint(0,0.5,74.34127);
   gre->SetPointError(0,0,0.2007595);
   gre->SetPoint(1,0.6,75.43735);
   gre->SetPointError(1,0,0.1993967);
   gre->SetPoint(2,0.7,76.70292);
   gre->SetPointError(2,0,0.1949612);
   gre->SetPoint(3,0.8,77.19076);
   gre->SetPointError(3,0,0.1962089);
   gre->SetPoint(4,0.9,77.9773);
   gre->SetPointError(4,0,0.2019448);
   gre->SetPoint(5,1,79.00432);
   gre->SetPointError(5,0,0.227059);
   gre->SetPoint(6,1.1,79.87402);
   gre->SetPointError(6,0,0.2373349);
   gre->SetPoint(7,1.2,80.72049);
   gre->SetPointError(7,0,0.2459177);
   gre->SetPoint(8,1.3,81.35993);
   gre->SetPointError(8,0,0.2500009);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Graph",100,0.42,1.38);
   Graph_Graph9->SetMinimum(73.39357);
   Graph_Graph9->SetMaximum(82.35687);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);
   Graph_Graph9->SetLineWidth(2);
   Graph_Graph9->SetMarkerSize(1.2);
   Graph_Graph9->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph9->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph9->GetXaxis()->SetLabelColor(ci);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph9->GetXaxis()->SetTitleColor(ci);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph9->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph9->GetYaxis()->SetLabelColor(ci);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph9->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph9->GetYaxis()->SetTitleColor(ci);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph9->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph9->GetZaxis()->SetLabelColor(ci);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph9->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph9->GetZaxis()->SetTitleColor(ci);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph9);
   
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
   multigraph->GetYaxis()->SetTitle("M_{W} / GeV");
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
   
   TLegend *leg = new TLegend(0.17,0.75,0.98,0.9,NULL,"brNDC");
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
