{
//=========Macro generated from canvas: c1/
//=========  (Tue Feb 14 14:23:31 2017) by ROOT version5.34/18
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
   gre->SetPoint(0,0.5,0.2729275);
   gre->SetPointError(0,0,0.005465641);
   gre->SetPoint(1,0.6,0.3502142);
   gre->SetPointError(1,0,0.00715854);
   gre->SetPoint(2,0.7,0.3975341);
   gre->SetPointError(2,0,0.00812297);
   gre->SetPoint(3,0.8,0.454293);
   gre->SetPointError(3,0,0.009466006);
   gre->SetPoint(4,0.9,0.507089);
   gre->SetPointError(4,0,0.009972948);
   gre->SetPoint(5,1,0.5747359);
   gre->SetPointError(5,0,0.01358694);
   gre->SetPoint(6,1.1,0.6539934);
   gre->SetPointError(6,0,0.00601277);
   gre->SetPoint(7,1.2,0.6248214);
   gre->SetPointError(7,0,0.00250191);
   gre->SetPoint(8,1.3,0.6372596);
   gre->SetPointError(8,0,0.00277385);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","Graph",100,0.42,1.38);
   Graph_Graph16->SetMinimum(0.2282074);
   Graph_Graph16->SetMaximum(0.6992606);
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
   Graph_Graph16->GetYaxis()->SetLabelOffset(0.0015);
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
   Graph_Graph16->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph16->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph16->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph16->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph16->GetZaxis()->SetTitleColor(ci);
   Graph_Graph16->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph16);
   
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
   gre->SetPoint(0,0.5,0.2469779);
   gre->SetPointError(0,0,0.004978569);
   gre->SetPoint(1,0.6,0.2983536);
   gre->SetPointError(1,0,0.005837029);
   gre->SetPoint(2,0.7,0.3481301);
   gre->SetPointError(2,0,0.006835682);
   gre->SetPoint(3,0.8,0.3959478);
   gre->SetPointError(3,0,0.007978953);
   gre->SetPoint(4,0.9,0.4294187);
   gre->SetPointError(4,0,0.008955536);
   gre->SetPoint(5,1,0.4811509);
   gre->SetPointError(5,0,0.009574083);
   gre->SetPoint(6,1.1,0.5146292);
   gre->SetPointError(6,0,0.009241816);
   gre->SetPoint(7,1.2,0.5566031);
   gre->SetPointError(7,0,0.01140737);
   gre->SetPoint(8,1.3,0.6041974);
   gre->SetPointError(8,0,0.0147091);
   
   TH1F *Graph_Graph17 = new TH1F("Graph_Graph17","Graph",100,0.42,1.38);
   Graph_Graph17->SetMinimum(0.2043087);
   Graph_Graph17->SetMaximum(0.6565972);
   Graph_Graph17->SetDirectory(0);
   Graph_Graph17->SetStats(0);
   Graph_Graph17->SetLineWidth(2);
   Graph_Graph17->SetMarkerSize(1.2);
   Graph_Graph17->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph17->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph17->GetXaxis()->SetLabelColor(ci);
   Graph_Graph17->GetXaxis()->SetLabelFont(42);
   Graph_Graph17->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph17->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph17->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph17->GetXaxis()->SetTitleColor(ci);
   Graph_Graph17->GetXaxis()->SetTitleFont(42);
   Graph_Graph17->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph17->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph17->GetYaxis()->SetLabelColor(ci);
   Graph_Graph17->GetYaxis()->SetLabelFont(42);
   Graph_Graph17->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph17->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph17->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph17->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph17->GetYaxis()->SetTitleColor(ci);
   Graph_Graph17->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph17->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph17->GetZaxis()->SetLabelColor(ci);
   Graph_Graph17->GetZaxis()->SetLabelFont(42);
   Graph_Graph17->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph17->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph17->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph17->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph17->GetZaxis()->SetTitleColor(ci);
   Graph_Graph17->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph17);
   
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
   gre->SetPoint(0,0.5,0.2294102);
   gre->SetPointError(0,0,0.004791721);
   gre->SetPoint(1,0.6,0.252996);
   gre->SetPointError(1,0,0.005085852);
   gre->SetPoint(2,0.7,0.288556);
   gre->SetPointError(2,0,0.005564916);
   gre->SetPoint(3,0.8,0.3417678);
   gre->SetPointError(3,0,0.00663704);
   gre->SetPoint(4,0.9,0.384285);
   gre->SetPointError(4,0,0.00746459);
   gre->SetPoint(5,1,0.3996488);
   gre->SetPointError(5,0,0.007762288);
   gre->SetPoint(6,1.1,0.4098973);
   gre->SetPointError(6,0,0.007631513);
   gre->SetPoint(7,1.2,0.4277026);
   gre->SetPointError(7,0,0.008268482);
   gre->SetPoint(8,1.3,0.453514);
   gre->SetPointError(8,0,0.008544895);
   
   TH1F *Graph_Graph18 = new TH1F("Graph_Graph18","Graph",100,0.42,1.38);
   Graph_Graph18->SetMinimum(0.2008745);
   Graph_Graph18->SetMaximum(0.485803);
   Graph_Graph18->SetDirectory(0);
   Graph_Graph18->SetStats(0);
   Graph_Graph18->SetLineWidth(2);
   Graph_Graph18->SetMarkerSize(1.2);
   Graph_Graph18->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph18->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph18->GetXaxis()->SetLabelColor(ci);
   Graph_Graph18->GetXaxis()->SetLabelFont(42);
   Graph_Graph18->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph18->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph18->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph18->GetXaxis()->SetTitleColor(ci);
   Graph_Graph18->GetXaxis()->SetTitleFont(42);
   Graph_Graph18->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph18->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph18->GetYaxis()->SetLabelColor(ci);
   Graph_Graph18->GetYaxis()->SetLabelFont(42);
   Graph_Graph18->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph18->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph18->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph18->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph18->GetYaxis()->SetTitleColor(ci);
   Graph_Graph18->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph18->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph18->GetZaxis()->SetLabelColor(ci);
   Graph_Graph18->GetZaxis()->SetLabelFont(42);
   Graph_Graph18->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph18->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph18->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph18->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph18->GetZaxis()->SetTitleColor(ci);
   Graph_Graph18->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph18);
   
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
