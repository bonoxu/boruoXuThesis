{
//=========Macro generated from canvas: c1/
//=========  (Tue Feb 14 14:17:27 2017) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(0.2682051,90.54054,1.39641,198.6486);
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
   gre->SetPoint(0,0.5,121.7164);
   gre->SetPointError(0,0,0.2638046);
   gre->SetPoint(1,0.6,123.7316);
   gre->SetPointError(1,0,0.2487797);
   gre->SetPoint(2,0.7,125.9111);
   gre->SetPointError(2,0,0.2487756);
   gre->SetPoint(3,0.8,128.1352);
   gre->SetPointError(3,0,0.2726539);
   gre->SetPoint(4,0.9,130.3387);
   gre->SetPointError(4,0,0.3016643);
   gre->SetPoint(5,1,132.6995);
   gre->SetPointError(5,0,0.3290262);
   gre->SetPoint(6,1.1,135.2303);
   gre->SetPointError(6,0,0.3694115);
   gre->SetPoint(7,1.2,137.5918);
   gre->SetPointError(7,0,0.4103386);
   gre->SetPoint(8,1.3,140.536);
   gre->SetPointError(8,0,0.4656059);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.42,1.38);
   Graph_Graph1->SetMinimum(119.4977);
   Graph_Graph1->SetMaximum(142.9565);
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
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.0015);
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
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph1->GetZaxis()->SetTitleColor(ci);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
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
   gre->SetPoint(0,0.5,119.5265);
   gre->SetPointError(0,0,0.2303259);
   gre->SetPoint(1,0.6,121.0728);
   gre->SetPointError(1,0,0.2302319);
   gre->SetPoint(2,0.7,122.3224);
   gre->SetPointError(2,0,0.2254343);
   gre->SetPoint(3,0.8,123.6935);
   gre->SetPointError(3,0,0.2326718);
   gre->SetPoint(4,0.9,124.7641);
   gre->SetPointError(4,0,0.2379069);
   gre->SetPoint(5,1,126.2834);
   gre->SetPointError(5,0,0.2536789);
   gre->SetPoint(6,1.1,127.5479);
   gre->SetPointError(6,0,0.2745666);
   gre->SetPoint(7,1.2,128.9625);
   gre->SetPointError(7,0,0.2944698);
   gre->SetPoint(8,1.3,130.671);
   gre->SetPointError(8,0,0.3155447);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.42,1.38);
   Graph_Graph2->SetMinimum(118.1271);
   Graph_Graph2->SetMaximum(132.1556);
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
   Graph_Graph2->GetYaxis()->SetLabelOffset(0.0015);
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
   Graph_Graph2->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph2->GetZaxis()->SetTitleColor(ci);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph2);
   
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
   gre->SetPoint(0,0.5,117.0827);
   gre->SetPointError(0,0,0.2721587);
   gre->SetPoint(1,0.6,118.0082);
   gre->SetPointError(1,0,0.2189093);
   gre->SetPoint(2,0.7,118.733);
   gre->SetPointError(2,0,0.2086312);
   gre->SetPoint(3,0.8,119.1779);
   gre->SetPointError(3,0,0.209944);
   gre->SetPoint(4,0.9,119.6358);
   gre->SetPointError(4,0,0.2106328);
   gre->SetPoint(5,1,120.0978);
   gre->SetPointError(5,0,0.2162979);
   gre->SetPoint(6,1.1,120.5679);
   gre->SetPointError(6,0,0.2204498);
   gre->SetPoint(7,1.2,120.938);
   gre->SetPointError(7,0,0.2262439);
   gre->SetPoint(8,1.3,121.1711);
   gre->SetPointError(8,0,0.2328653);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.42,1.38);
   Graph_Graph3->SetMinimum(116.3512);
   Graph_Graph3->SetMaximum(121.8633);
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
   Graph_Graph3->GetYaxis()->SetLabelOffset(0.0015);
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
   Graph_Graph3->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph3->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph3->GetZaxis()->SetTitleColor(ci);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph3);
   
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
   multigraph->GetYaxis()->SetTitle("M_{H_{bb}} / GeV");
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
