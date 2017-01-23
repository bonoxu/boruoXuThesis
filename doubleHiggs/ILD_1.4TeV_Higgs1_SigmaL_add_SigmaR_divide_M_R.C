{
//=========Macro generated from canvas: c1/
//=========  (Sun Jan 22 16:16:08 2017) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "",12,51,1600,900);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(0.2682051,0.1505328,1.39641,0.2834414);
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
   gre->SetPoint(0,0.5,0.1941264);
   gre->SetPointError(0,0,0.002607406);
   gre->SetPoint(1,0.6,0.1916728);
   gre->SetPointError(1,0,0.002414769);
   gre->SetPoint(2,0.7,0.1950109);
   gre->SetPointError(2,0,0.002358571);
   gre->SetPoint(3,0.8,0.2036602);
   gre->SetPointError(3,0,0.002536701);
   gre->SetPoint(4,0.9,0.2124743);
   gre->SetPointError(4,0,0.002777144);
   gre->SetPoint(5,1,0.2236032);
   gre->SetPointError(5,0,0.00309662);
   gre->SetPoint(6,1.1,0.2360707);
   gre->SetPointError(6,0,0.003515785);
   gre->SetPoint(7,1.2,0.2507803);
   gre->SetPointError(7,0,0.004165812);
   gre->SetPoint(8,1.3,0.2633436);
   gre->SetPointError(8,0,0.004994588);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.42,1.38);
   Graph_Graph1->SetMinimum(0.18135);
   Graph_Graph1->SetMaximum(0.2762462);
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
   gre->SetPoint(0,0.5,0.1903241);
   gre->SetPointError(0,0,0.002464866);
   gre->SetPoint(1,0.6,0.1853017);
   gre->SetPointError(1,0,0.002338252);
   gre->SetPoint(2,0.7,0.1863226);
   gre->SetPointError(2,0,0.002245598);
   gre->SetPoint(3,0.8,0.1890215);
   gre->SetPointError(3,0,0.002266706);
   gre->SetPoint(4,0.9,0.1926028);
   gre->SetPointError(4,0,0.002308457);
   gre->SetPoint(5,1,0.2027329);
   gre->SetPointError(5,0,0.002429142);
   gre->SetPoint(6,1.1,0.2086599);
   gre->SetPointError(6,0,0.002602574);
   gre->SetPoint(7,1.2,0.2165683);
   gre->SetPointError(7,0,0.002797101);
   gre->SetPoint(8,1.3,0.220641);
   gre->SetPointError(8,0,0.003011401);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.42,1.38);
   Graph_Graph2->SetMinimum(0.1788946);
   Graph_Graph2->SetMaximum(0.2277213);
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
   gre->SetPoint(0,0.5,0.1952966);
   gre->SetPointError(0,0,0.002807863);
   gre->SetPoint(1,0.6,0.1875154);
   gre->SetPointError(1,0,0.002326579);
   gre->SetPoint(2,0.7,0.1836711);
   gre->SetPointError(2,0,0.00221128);
   gre->SetPoint(3,0.8,0.1810937);
   gre->SetPointError(3,0,0.002166798);
   gre->SetPoint(4,0.9,0.1815226);
   gre->SetPointError(4,0,0.002150437);
   gre->SetPoint(5,1,0.1826358);
   gre->SetPointError(5,0,0.002168466);
   gre->SetPoint(6,1.1,0.1870482);
   gre->SetPointError(6,0,0.002190472);
   gre->SetPoint(7,1.2,0.1897077);
   gre->SetPointError(7,0,0.002223016);
   gre->SetPoint(8,1.3,0.1939604);
   gre->SetPointError(8,0,0.002297535);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.42,1.38);
   Graph_Graph3->SetMinimum(0.1770092);
   Graph_Graph3->SetMaximum(0.2000222);
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
