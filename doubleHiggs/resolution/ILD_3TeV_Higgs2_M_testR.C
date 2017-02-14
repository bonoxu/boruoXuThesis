{
//=========Macro generated from canvas: c1/
//=========  (Tue Feb 14 14:19:43 2017) by ROOT version5.34/18
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
   gre->SetPoint(0,0.5,126.1052);
   gre->SetPointError(0,0,0.4790854);
   gre->SetPoint(1,0.6,132.0908);
   gre->SetPointError(1,0,0.5139761);
   gre->SetPoint(2,0.7,137.9419);
   gre->SetPointError(2,0,0.5737206);
   gre->SetPoint(3,0.8,145.5931);
   gre->SetPointError(3,0,0.697738);
   gre->SetPoint(4,0.9,154.3095);
   gre->SetPointError(4,0,0.8699555);
   gre->SetPoint(5,1,160.9174);
   gre->SetPointError(5,0,1.151316);
   gre->SetPoint(6,1.1,167.3239);
   gre->SetPointError(6,0,1.196847);
   gre->SetPoint(7,1.2,177.4323);
   gre->SetPointError(7,0,1.597773);
   gre->SetPoint(8,1.3,180);
   gre->SetPointError(8,0,0.3165766);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Graph",100,0.42,1.38);
   Graph_Graph13->SetMinimum(120.157);
   Graph_Graph13->SetMaximum(185.7856);
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
   gre->SetPoint(0,0.5,122.8285);
   gre->SetPointError(0,0,0.400879);
   gre->SetPoint(1,0.6,127.0187);
   gre->SetPointError(1,0,0.3986217);
   gre->SetPoint(2,0.7,131.3966);
   gre->SetPointError(2,0,0.4252276);
   gre->SetPoint(3,0.8,135.8331);
   gre->SetPointError(3,0,0.4907251);
   gre->SetPoint(4,0.9,141.373);
   gre->SetPointError(4,0,0.5164035);
   gre->SetPoint(5,1,146.0615);
   gre->SetPointError(5,0,0.6252454);
   gre->SetPoint(6,1.1,151.3139);
   gre->SetPointError(6,0,0.7206764);
   gre->SetPoint(7,1.2,158.1731);
   gre->SetPointError(7,0,0.8953618);
   gre->SetPoint(8,1.3,163.7516);
   gre->SetPointError(8,0,1.07318);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","Graph",100,0.42,1.38);
   Graph_Graph14->SetMinimum(118.1878);
   Graph_Graph14->SetMaximum(169.0646);
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
   gre->SetPoint(0,0.5,116.0512);
   gre->SetPointError(0,0,0.4731192);
   gre->SetPoint(1,0.6,120.7213);
   gre->SetPointError(1,0,0.358467);
   gre->SetPoint(2,0.7,122.9692);
   gre->SetPointError(2,0,0.3302842);
   gre->SetPoint(3,0.8,124.8046);
   gre->SetPointError(3,0,0.3268245);
   gre->SetPoint(4,0.9,127.2662);
   gre->SetPointError(4,0,0.3522546);
   gre->SetPoint(5,1,129.4646);
   gre->SetPointError(5,0,0.3683577);
   gre->SetPoint(6,1.1,131.36);
   gre->SetPointError(6,0,0.413572);
   gre->SetPoint(7,1.2,133.6738);
   gre->SetPointError(7,0,0.4372394);
   gre->SetPoint(8,1.3,135.9797);
   gre->SetPointError(8,0,0.4797838);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","Graph",100,0.42,1.38);
   Graph_Graph15->SetMinimum(113.49);
   Graph_Graph15->SetMaximum(138.5476);
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
