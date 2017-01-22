{
//=========Macro generated from canvas: c1/
//=========  (Sun Jan 22 16:16:12 2017) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "",12,51,1600,900);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(0.2682051,0.2750993,1.39641,0.5344352);
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
   gre->SetPoint(0,0.5,0.4163785);
   gre->SetPointError(0,0,0.006642575);
   gre->SetPoint(1,0.6,0.3966543);
   gre->SetPointError(1,0,0.006242302);
   gre->SetPoint(2,0.7,0.400708);
   gre->SetPointError(2,0,0.006591863);
   gre->SetPoint(3,0.8,0.4004565);
   gre->SetPointError(3,0,0.007610149);
   gre->SetPoint(4,0.9,0.3930598);
   gre->SetPointError(4,0,0.009500122);
   gre->SetPoint(5,1,0.3880313);
   gre->SetPointError(5,0,0.01389755);
   gre->SetPoint(6,1.1,0.3979729);
   gre->SetPointError(6,0,0.01196396);
   gre->SetPoint(7,1.2,0.4100032);
   gre->SetPointError(7,0,0.0190327);
   gre->SetPoint(8,1.3,0.471623);
   gre->SetPointError(8,0,0.03334228);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Graph",100,0.42,1.38);
   Graph_Graph13->SetMinimum(0.3610506);
   Graph_Graph13->SetMaximum(0.5180484);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);
   Graph_Graph13->SetLineWidth(2);
   Graph_Graph13->SetMarkerSize(1.2);
   Graph_Graph13->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph13->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph13->GetXaxis()->SetLabelColor(ci);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph13->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph13->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph13->GetXaxis()->SetTitleColor(ci);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph13->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph13->GetYaxis()->SetLabelColor(ci);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph13->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph13->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph13->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph13->GetYaxis()->SetTitleColor(ci);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph13->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph13->GetZaxis()->SetLabelColor(ci);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph13->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph13->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph13->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph13->GetZaxis()->SetTitleColor(ci);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph13);
   
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
   gre->SetPoint(0,0.5,0.4132515);
   gre->SetPointError(0,0,0.006290914);
   gre->SetPoint(1,0.6,0.3773279);
   gre->SetPointError(1,0,0.005528582);
   gre->SetPoint(2,0.7,0.3656475);
   gre->SetPointError(2,0,0.005365865);
   gre->SetPoint(3,0.8,0.3625479);
   gre->SetPointError(3,0,0.005586186);
   gre->SetPoint(4,0.9,0.3541551);
   gre->SetPointError(4,0,0.005662298);
   gre->SetPoint(5,1,0.3570142);
   gre->SetPointError(5,0,0.006608253);
   gre->SetPoint(6,1.1,0.3632642);
   gre->SetPointError(6,0,0.007730007);
   gre->SetPoint(7,1.2,0.3561504);
   gre->SetPointError(7,0,0.009383624);
   gre->SetPoint(8,1.3,0.3577055);
   gre->SetPointError(8,0,0.01188464);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","Graph",100,0.42,1.38);
   Graph_Graph14->SetMinimum(0.3384487);
   Graph_Graph14->SetMaximum(0.4269145);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);
   Graph_Graph14->SetLineWidth(2);
   Graph_Graph14->SetMarkerSize(1.2);
   Graph_Graph14->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph14->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph14->GetXaxis()->SetLabelColor(ci);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph14->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph14->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph14->GetXaxis()->SetTitleColor(ci);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph14->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph14->GetYaxis()->SetLabelColor(ci);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph14->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph14->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph14->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph14->GetYaxis()->SetTitleColor(ci);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph14->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph14->GetZaxis()->SetLabelColor(ci);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph14->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph14->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph14->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph14->GetZaxis()->SetTitleColor(ci);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph14);
   
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
   gre->SetPoint(0,0.5,0.4239635);
   gre->SetPointError(0,0,0.007370029);
   gre->SetPoint(1,0.6,0.383173);
   gre->SetPointError(1,0,0.005636907);
   gre->SetPoint(2,0.7,0.3600193);
   gre->SetPointError(2,0,0.004954175);
   gre->SetPoint(3,0.8,0.3462372);
   gre->SetPointError(3,0,0.004698042);
   gre->SetPoint(4,0.9,0.3398805);
   gre->SetPointError(4,0,0.004676944);
   gre->SetPoint(5,1,0.335945);
   gre->SetPointError(5,0,0.004624887);
   gre->SetPoint(6,1.1,0.3353929);
   gre->SetPointError(6,0,0.004889978);
   gre->SetPoint(7,1.2,0.3359753);
   gre->SetPointError(7,0,0.005043129);
   gre->SetPoint(8,1.3,0.3393552);
   gre->SetPointError(8,0,0.005327571);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","Graph",100,0.42,1.38);
   Graph_Graph15->SetMinimum(0.3204198);
   Graph_Graph15->SetMaximum(0.4414166);
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
   Graph_Graph15->GetYaxis()->SetLabelOffset(0.0015);
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
   Graph_Graph15->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph15->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph15->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph15->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph15->GetZaxis()->SetTitleColor(ci);
   Graph_Graph15->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph15);
   
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
