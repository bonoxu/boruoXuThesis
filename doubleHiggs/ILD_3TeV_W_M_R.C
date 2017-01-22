{
//=========Macro generated from canvas: c1/
//=========  (Wed Oct 21 09:31:09 2015) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "",12,51,1600,900);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(0.2682051,62.66266,1.39641,116.1224);
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
   gre->SetPoint(0,0.5,80.29265);
   gre->SetPointError(0,0,0.2877321);
   gre->SetPoint(1,0.6,85.29378);
   gre->SetPointError(1,0,0.3353574);
   gre->SetPoint(2,0.7,88.35031);
   gre->SetPointError(2,0,0.4015871);
   gre->SetPoint(3,0.8,90.32455);
   gre->SetPointError(3,0,0.5019054);
   gre->SetPoint(4,0.9,93.27167);
   gre->SetPointError(4,0,0.5210278);
   gre->SetPoint(5,1,98.20168);
   gre->SetPointError(5,0,0.656898);
   gre->SetPoint(6,1.1,106.6956);
   gre->SetPointError(6,0,0.4865778);
   gre->SetPoint(7,1.2,109.4606);
   gre->SetPointError(7,0,0.5868367);
   gre->SetPoint(8,1.3,108.342);
   gre->SetPointError(8,0,0.6847808);
   
   TH1F *Graph_Graph46 = new TH1F("Graph_Graph46","Graph",100,0.42,1.38);
   Graph_Graph46->SetMinimum(77.00066);
   Graph_Graph46->SetMaximum(113.0517);
   Graph_Graph46->SetDirectory(0);
   Graph_Graph46->SetStats(0);
   Graph_Graph46->SetLineWidth(2);
   Graph_Graph46->SetMarkerSize(1.2);
   Graph_Graph46->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph46->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph46->GetXaxis()->SetLabelColor(ci);
   Graph_Graph46->GetXaxis()->SetLabelFont(42);
   Graph_Graph46->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph46->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph46->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph46->GetXaxis()->SetTitleColor(ci);
   Graph_Graph46->GetXaxis()->SetTitleFont(42);
   Graph_Graph46->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph46->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph46->GetYaxis()->SetLabelColor(ci);
   Graph_Graph46->GetYaxis()->SetLabelFont(42);
   Graph_Graph46->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph46->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph46->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph46->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph46->GetYaxis()->SetTitleColor(ci);
   Graph_Graph46->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph46->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph46->GetZaxis()->SetLabelColor(ci);
   Graph_Graph46->GetZaxis()->SetLabelFont(42);
   Graph_Graph46->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph46->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph46->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph46->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph46->GetZaxis()->SetTitleColor(ci);
   Graph_Graph46->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph46);
   
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
   gre->SetPoint(0,0.5,78.04195);
   gre->SetPointError(0,0,0.2625452);
   gre->SetPoint(1,0.6,81.33743);
   gre->SetPointError(1,0,0.2780881);
   gre->SetPoint(2,0.7,84.76925);
   gre->SetPointError(2,0,0.3192374);
   gre->SetPoint(3,0.8,88.13623);
   gre->SetPointError(3,0,0.3802138);
   gre->SetPoint(4,0.9,90.80553);
   gre->SetPointError(4,0,0.4618346);
   gre->SetPoint(5,1,90.81186);
   gre->SetPointError(5,0,0.5069385);
   gre->SetPoint(6,1.1,93.91334);
   gre->SetPointError(6,0,0.4727207);
   gre->SetPoint(7,1.2,98.50736);
   gre->SetPointError(7,0,0.552775);
   gre->SetPoint(8,1.3,103.1028);
   gre->SetPointError(8,0,0.6376144);
   
   TH1F *Graph_Graph47 = new TH1F("Graph_Graph47","Graph",100,0.42,1.38);
   Graph_Graph47->SetMinimum(75.18331);
   Graph_Graph47->SetMaximum(106.3365);
   Graph_Graph47->SetDirectory(0);
   Graph_Graph47->SetStats(0);
   Graph_Graph47->SetLineWidth(2);
   Graph_Graph47->SetMarkerSize(1.2);
   Graph_Graph47->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph47->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph47->GetXaxis()->SetLabelColor(ci);
   Graph_Graph47->GetXaxis()->SetLabelFont(42);
   Graph_Graph47->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph47->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph47->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph47->GetXaxis()->SetTitleColor(ci);
   Graph_Graph47->GetXaxis()->SetTitleFont(42);
   Graph_Graph47->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph47->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph47->GetYaxis()->SetLabelColor(ci);
   Graph_Graph47->GetYaxis()->SetLabelFont(42);
   Graph_Graph47->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph47->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph47->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph47->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph47->GetYaxis()->SetTitleColor(ci);
   Graph_Graph47->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph47->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph47->GetZaxis()->SetLabelColor(ci);
   Graph_Graph47->GetZaxis()->SetLabelFont(42);
   Graph_Graph47->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph47->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph47->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph47->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph47->GetZaxis()->SetTitleColor(ci);
   Graph_Graph47->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph47);
   
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
   gre->SetPoint(0,0.5,74.32848);
   gre->SetPointError(0,0,0.2448758);
   gre->SetPoint(1,0.6,76.2857);
   gre->SetPointError(1,0,0.241668);
   gre->SetPoint(2,0.7,78.10712);
   gre->SetPointError(2,0,0.2531404);
   gre->SetPoint(3,0.8,80.22078);
   gre->SetPointError(3,0,0.2799413);
   gre->SetPoint(4,0.9,82.1201);
   gre->SetPointError(4,0,0.3189752);
   gre->SetPoint(5,1,84.26294);
   gre->SetPointError(5,0,0.3472936);
   gre->SetPoint(6,1.1,85.44629);
   gre->SetPointError(6,0,0.359986);
   gre->SetPoint(7,1.2,86.50309);
   gre->SetPointError(7,0,0.4134275);
   gre->SetPoint(8,1.3,87.18692);
   gre->SetPointError(8,0,0.436289);
   
   TH1F *Graph_Graph48 = new TH1F("Graph_Graph48","Graph",100,0.42,1.38);
   Graph_Graph48->SetMinimum(72.72964);
   Graph_Graph48->SetMaximum(88.97717);
   Graph_Graph48->SetDirectory(0);
   Graph_Graph48->SetStats(0);
   Graph_Graph48->SetLineWidth(2);
   Graph_Graph48->SetMarkerSize(1.2);
   Graph_Graph48->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph48->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph48->GetXaxis()->SetLabelColor(ci);
   Graph_Graph48->GetXaxis()->SetLabelFont(42);
   Graph_Graph48->GetXaxis()->SetLabelOffset(0.0015);
   Graph_Graph48->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph48->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   Graph_Graph48->GetXaxis()->SetTitleColor(ci);
   Graph_Graph48->GetXaxis()->SetTitleFont(42);
   Graph_Graph48->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   Graph_Graph48->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph48->GetYaxis()->SetLabelColor(ci);
   Graph_Graph48->GetYaxis()->SetLabelFont(42);
   Graph_Graph48->GetYaxis()->SetLabelOffset(0.0015);
   Graph_Graph48->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph48->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph48->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph48->GetYaxis()->SetTitleColor(ci);
   Graph_Graph48->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   Graph_Graph48->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   Graph_Graph48->GetZaxis()->SetLabelColor(ci);
   Graph_Graph48->GetZaxis()->SetLabelFont(42);
   Graph_Graph48->GetZaxis()->SetLabelOffset(0.0015);
   Graph_Graph48->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph48->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph48->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   Graph_Graph48->GetZaxis()->SetTitleColor(ci);
   Graph_Graph48->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph48);
   
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
