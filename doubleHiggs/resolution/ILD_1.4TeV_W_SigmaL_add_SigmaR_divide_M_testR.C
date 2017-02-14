{
//=========Macro generated from canvas: c1/
//=========  (Tue Feb 14 14:23:30 2017) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(0.2682051,-0.04594595,1.39641,0.7648649);
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
   gre->SetPoint(0,0.5,0.2774247);
   gre->SetPointError(0,0,0.004421964);
   gre->SetPoint(1,0.6,0.3138314);
   gre->SetPointError(1,0,0.004568967);
   gre->SetPoint(2,0.7,0.343481);
   gre->SetPointError(2,0,0.005019372);
   gre->SetPoint(3,0.8,0.3500921);
   gre->SetPointError(3,0,0.004957833);
   gre->SetPoint(4,0.9,0.3730481);
   gre->SetPointError(4,0,0.005456663);
   gre->SetPoint(5,1,0.396561);
   gre->SetPointError(5,0,0.006047971);
   gre->SetPoint(6,1.1,0.4292317);
   gre->SetPointError(6,0,0.006872107);
   gre->SetPoint(7,1.2,0.4676207);
   gre->SetPointError(7,0,0.007811649);
   gre->SetPoint(8,1.3,0.4730252);
   gre->SetPointError(8,0,0.006670513);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,0.42,1.38);
   Graph_Graph7->SetMinimum(0.2523335);
   Graph_Graph7->SetMaximum(0.500365);
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
   gre->SetPoint(0,0.5,0.2624862);
   gre->SetPointError(0,0,0.004119362);
   gre->SetPoint(1,0.6,0.2908748);
   gre->SetPointError(1,0,0.004364078);
   gre->SetPoint(2,0.7,0.3136575);
   gre->SetPointError(2,0,0.004459522);
   gre->SetPoint(3,0.8,0.3270173);
   gre->SetPointError(3,0,0.004427262);
   gre->SetPoint(4,0.9,0.3482653);
   gre->SetPointError(4,0,0.004801775);
   gre->SetPoint(5,1,0.3638706);
   gre->SetPointError(5,0,0.005025932);
   gre->SetPoint(6,1.1,0.3666557);
   gre->SetPointError(6,0,0.005225887);
   gre->SetPoint(7,1.2,0.386114);
   gre->SetPointError(7,0,0.005627338);
   gre->SetPoint(8,1.3,0.3937101);
   gre->SetPointError(8,0,0.005953696);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,0.42,1.38);
   Graph_Graph8->SetMinimum(0.2442371);
   Graph_Graph8->SetMaximum(0.4137935);
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
   gre->SetPoint(0,0.5,0.2548038);
   gre->SetPointError(0,0,0.004103);
   gre->SetPoint(1,0.6,0.2750038);
   gre->SetPointError(1,0,0.004156181);
   gre->SetPoint(2,0.7,0.2944527);
   gre->SetPointError(2,0,0.004195552);
   gre->SetPoint(3,0.8,0.3068935);
   gre->SetPointError(3,0,0.004161476);
   gre->SetPoint(4,0.9,0.3152458);
   gre->SetPointError(4,0,0.004188427);
   gre->SetPoint(5,1,0.3302807);
   gre->SetPointError(5,0,0.004484278);
   gre->SetPoint(6,1.1,0.3433387);
   gre->SetPointError(6,0,0.00456404);
   gre->SetPoint(7,1.2,0.3520524);
   gre->SetPointError(7,0,0.004636025);
   gre->SetPoint(8,1.3,0.351309);
   gre->SetPointError(8,0,0.004641018);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Graph",100,0.42,1.38);
   Graph_Graph9->SetMinimum(0.240102);
   Graph_Graph9->SetMaximum(0.3672872);
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
   multigraph->GetYaxis()->SetTitle("(#sigma_{L} + #sigma_{R}) / M");
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
