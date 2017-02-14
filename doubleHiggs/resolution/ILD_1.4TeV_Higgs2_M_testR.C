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
   gre->SetPoint(0,0.5,123.7104);
   gre->SetPointError(0,0,0.3284895);
   gre->SetPoint(1,0.6,127.4441);
   gre->SetPointError(1,0,0.3105568);
   gre->SetPoint(2,0.7,131.3919);
   gre->SetPointError(2,0,0.3135687);
   gre->SetPoint(3,0.8,134.418);
   gre->SetPointError(3,0,0.3341011);
   gre->SetPoint(4,0.9,138.3665);
   gre->SetPointError(4,0,0.3656739);
   gre->SetPoint(5,1,142.4165);
   gre->SetPointError(5,0,0.4151075);
   gre->SetPoint(6,1.1,146.2417);
   gre->SetPointError(6,0,0.4683251);
   gre->SetPoint(7,1.2,150.0338);
   gre->SetPointError(7,0,0.5216768);
   gre->SetPoint(8,1.3,153.9634);
   gre->SetPointError(8,0,0.6055736);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.42,1.38);
   Graph_Graph4->SetMinimum(120.2632);
   Graph_Graph4->SetMaximum(157.6876);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   Graph_Graph4->SetLineWidth(2);
   Graph_Graph4->SetMarkerSize(1.2);
   Graph_Graph4->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph4->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph4->GetXaxis()->SetLabelColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph4->GetXaxis()->SetTitleColor(ci);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph4->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph4->GetYaxis()->SetLabelColor(ci);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph4->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph4->GetYaxis()->SetTitleColor(ci);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph4->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph4->GetZaxis()->SetLabelColor(ci);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph4->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph4->GetZaxis()->SetTitleColor(ci);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph4);
   
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
   gre->SetPoint(0,0.5,119.8645);
   gre->SetPointError(0,0,0.31828);
   gre->SetPoint(1,0.6,123.3787);
   gre->SetPointError(1,0,0.2612717);
   gre->SetPoint(2,0.7,125.6684);
   gre->SetPointError(2,0,0.2423158);
   gre->SetPoint(3,0.8,128.5075);
   gre->SetPointError(3,0,0.2491131);
   gre->SetPoint(4,0.9,130.0249);
   gre->SetPointError(4,0,0.2757825);
   gre->SetPoint(5,1,132.025);
   gre->SetPointError(5,0,0.2857394);
   gre->SetPoint(6,1.1,134.2345);
   gre->SetPointError(6,0,0.3178926);
   gre->SetPoint(7,1.2,136.6158);
   gre->SetPointError(7,0,0.3436817);
   gre->SetPoint(8,1.3,138.0648);
   gre->SetPointError(8,0,0.3736401);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,0.42,1.38);
   Graph_Graph5->SetMinimum(117.657);
   Graph_Graph5->SetMaximum(140.3277);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);
   Graph_Graph5->SetLineWidth(2);
   Graph_Graph5->SetMarkerSize(1.2);
   Graph_Graph5->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph5->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph5->GetXaxis()->SetLabelColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph5->GetXaxis()->SetTitleColor(ci);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph5->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph5->GetYaxis()->SetLabelColor(ci);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph5->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph5->GetYaxis()->SetTitleColor(ci);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph5->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph5->GetZaxis()->SetLabelColor(ci);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph5->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph5->GetZaxis()->SetTitleColor(ci);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph5);
   
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
   gre->SetPoint(0,0.5,115.8222);
   gre->SetPointError(0,0,0.4070591);
   gre->SetPoint(1,0.6,119.472);
   gre->SetPointError(1,0,0.2429212);
   gre->SetPoint(2,0.7,121.0627);
   gre->SetPointError(2,0,0.2310987);
   gre->SetPoint(3,0.8,122.2042);
   gre->SetPointError(3,0,0.2221857);
   gre->SetPoint(4,0.9,123.0563);
   gre->SetPointError(4,0,0.2221235);
   gre->SetPoint(5,1,124.0097);
   gre->SetPointError(5,0,0.2195783);
   gre->SetPoint(6,1.1,124.5242);
   gre->SetPointError(6,0,0.2227386);
   gre->SetPoint(7,1.2,125.0903);
   gre->SetPointError(7,0,0.226755);
   gre->SetPoint(8,1.3,125.7318);
   gre->SetPointError(8,0,0.2310831);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,0.42,1.38);
   Graph_Graph6->SetMinimum(114.3604);
   Graph_Graph6->SetMaximum(127.0177);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);
   Graph_Graph6->SetLineWidth(2);
   Graph_Graph6->SetMarkerSize(1.2);
   Graph_Graph6->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph6->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph6->GetXaxis()->SetLabelColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph6->GetXaxis()->SetTitleColor(ci);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph6->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph6->GetYaxis()->SetLabelColor(ci);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph6->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph6->GetYaxis()->SetTitleColor(ci);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph6->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph6->GetZaxis()->SetLabelColor(ci);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph6->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph6->GetZaxis()->SetTitleColor(ci);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph6);
   
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
   multigraph->GetYaxis()->SetTitle("M_{H_{WW*}} / GeV");
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
