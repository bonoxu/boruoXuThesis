{
//=========Macro generated from canvas: c1/
//=========  (Wed Oct 21 09:31:07 2015) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "",12,51,1600,900);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(0.2682051,100.7774,1.39641,171.8597);
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
   gre->SetPoint(0,0.5,122.6831);
   gre->SetPointError(0,0,0.3460347);
   gre->SetPoint(1,0.6,125.6451);
   gre->SetPointError(1,0,0.3729782);
   gre->SetPoint(2,0.7,128.9199);
   gre->SetPointError(2,0,0.4225299);
   gre->SetPoint(3,0.8,132.0647);
   gre->SetPointError(3,0,0.5035367);
   gre->SetPoint(4,0.9,136.5154);
   gre->SetPointError(4,0,0.6462014);
   gre->SetPoint(5,1,141.4514);
   gre->SetPointError(5,0,0.7666756);
   gre->SetPoint(6,1.1,148.1169);
   gre->SetPointError(6,0,0.9136538);
   gre->SetPoint(7,1.2,154.6372);
   gre->SetPointError(7,0,1.104134);
   gre->SetPoint(8,1.3,162.3421);
   gre->SetPointError(8,0,1.440014);
   
   TH1F *Graph_Graph28 = new TH1F("Graph_Graph28","Graph",100,0.42,1.38);
   Graph_Graph28->SetMinimum(118.1926);
   Graph_Graph28->SetMaximum(167.9267);
   Graph_Graph28->SetDirectory(0);
   Graph_Graph28->SetStats(0);
   Graph_Graph28->SetLineWidth(2);
   Graph_Graph28->SetMarkerSize(1.2);
   Graph_Graph28->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph28->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph28->GetXaxis()->SetLabelColor(ci);
   Graph_Graph28->GetXaxis()->SetLabelFont(42);
   Graph_Graph28->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph28->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph28->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph28->GetXaxis()->SetTitleColor(ci);
   Graph_Graph28->GetXaxis()->SetTitleFont(42);
   Graph_Graph28->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph28->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph28->GetYaxis()->SetLabelColor(ci);
   Graph_Graph28->GetYaxis()->SetLabelFont(42);
   Graph_Graph28->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph28->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph28->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph28->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph28->GetYaxis()->SetTitleColor(ci);
   Graph_Graph28->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph28->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph28->GetZaxis()->SetLabelColor(ci);
   Graph_Graph28->GetZaxis()->SetLabelFont(42);
   Graph_Graph28->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph28->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph28->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph28->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph28->GetZaxis()->SetTitleColor(ci);
   Graph_Graph28->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph28);
   
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
   gre->SetPoint(0,0.5,120.2277);
   gre->SetPointError(0,0,0.3258759);
   gre->SetPoint(1,0.6,122.61);
   gre->SetPointError(1,0,0.3182963);
   gre->SetPoint(2,0.7,125.0372);
   gre->SetPointError(2,0,0.333467);
   gre->SetPoint(3,0.8,126.8569);
   gre->SetPointError(3,0,0.3645557);
   gre->SetPoint(4,0.9,129.2987);
   gre->SetPointError(4,0,0.4233449);
   gre->SetPoint(5,1,132.645);
   gre->SetPointError(5,0,0.4893976);
   gre->SetPoint(6,1.1,135.6144);
   gre->SetPointError(6,0,0.5651511);
   gre->SetPoint(7,1.2,140.1408);
   gre->SetPointError(7,0,0.6618055);
   gre->SetPoint(8,1.3,143.8039);
   gre->SetPointError(8,0,0.7093347);
   
   TH1F *Graph_Graph29 = new TH1F("Graph_Graph29","Graph",100,0.42,1.38);
   Graph_Graph29->SetMinimum(117.4406);
   Graph_Graph29->SetMaximum(146.9744);
   Graph_Graph29->SetDirectory(0);
   Graph_Graph29->SetStats(0);
   Graph_Graph29->SetLineWidth(2);
   Graph_Graph29->SetMarkerSize(1.2);
   Graph_Graph29->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph29->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph29->GetXaxis()->SetLabelColor(ci);
   Graph_Graph29->GetXaxis()->SetLabelFont(42);
   Graph_Graph29->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph29->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph29->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph29->GetXaxis()->SetTitleColor(ci);
   Graph_Graph29->GetXaxis()->SetTitleFont(42);
   Graph_Graph29->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph29->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph29->GetYaxis()->SetLabelColor(ci);
   Graph_Graph29->GetYaxis()->SetLabelFont(42);
   Graph_Graph29->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph29->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph29->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph29->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph29->GetYaxis()->SetTitleColor(ci);
   Graph_Graph29->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph29->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph29->GetZaxis()->SetLabelColor(ci);
   Graph_Graph29->GetZaxis()->SetLabelFont(42);
   Graph_Graph29->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph29->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph29->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph29->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph29->GetZaxis()->SetTitleColor(ci);
   Graph_Graph29->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph29);
   
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
   gre->SetPoint(0,0.5,116.2904);
   gre->SetPointError(0,0,0.3271668);
   gre->SetPoint(1,0.6,117.6102);
   gre->SetPointError(1,0,0.3261499);
   gre->SetPoint(2,0.7,119.1301);
   gre->SetPointError(2,0,0.2951972);
   gre->SetPoint(3,0.8,120.1261);
   gre->SetPointError(3,0,0.3000722);
   gre->SetPoint(4,0.9,120.9908);
   gre->SetPointError(4,0,0.3058616);
   gre->SetPoint(5,1,122.5097);
   gre->SetPointError(5,0,0.3145653);
   gre->SetPoint(6,1.1,123.9003);
   gre->SetPointError(6,0,0.3373589);
   gre->SetPoint(7,1.2,124.8633);
   gre->SetPointError(7,0,0.3634452);
   gre->SetPoint(8,1.3,126.4843);
   gre->SetPointError(8,0,0.3881449);
   
   TH1F *Graph_Graph30 = new TH1F("Graph_Graph30","Graph",100,0.42,1.38);
   Graph_Graph30->SetMinimum(114.8723);
   Graph_Graph30->SetMaximum(127.9634);
   Graph_Graph30->SetDirectory(0);
   Graph_Graph30->SetStats(0);
   Graph_Graph30->SetLineWidth(2);
   Graph_Graph30->SetMarkerSize(1.2);
   Graph_Graph30->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph30->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph30->GetXaxis()->SetLabelColor(ci);
   Graph_Graph30->GetXaxis()->SetLabelFont(42);
   Graph_Graph30->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph30->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph30->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph30->GetXaxis()->SetTitleColor(ci);
   Graph_Graph30->GetXaxis()->SetTitleFont(42);
   Graph_Graph30->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph30->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph30->GetYaxis()->SetLabelColor(ci);
   Graph_Graph30->GetYaxis()->SetLabelFont(42);
   Graph_Graph30->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph30->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph30->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph30->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph30->GetYaxis()->SetTitleColor(ci);
   Graph_Graph30->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph30->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph30->GetZaxis()->SetLabelColor(ci);
   Graph_Graph30->GetZaxis()->SetLabelFont(42);
   Graph_Graph30->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph30->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph30->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph30->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph30->GetZaxis()->SetTitleColor(ci);
   Graph_Graph30->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph30);
   
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
   multigraph->GetYaxis()->SetTitle("M");
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
