{
//=========Macro generated from canvas: c1/
//=========  (Tue Oct 11 17:15:22 2016) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-2.088667,0.8791434,22.84467,0.9445191);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.17);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.18);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraphErrors *gre = new TGraphErrors(6);
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
   gre->SetPoint(0,3,0.92719);
   gre->SetPointError(0,0,0.00088);
   gre->SetPoint(1,5,0.93296);
   gre->SetPointError(1,0,0.00064);
   gre->SetPoint(2,7,0.93027);
   gre->SetPointError(2,0,0.00066);
   gre->SetPoint(3,10,0.92968);
   gre->SetPointError(3,0,0.00084);
   gre->SetPoint(4,15,0.92835);
   gre->SetPointError(4,0,0.00067);
   gre->SetPoint(5,20,0.91995);
   gre->SetPointError(5,0,0.00085);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","Graph",100,1.3,21.7);
   Graph_Graph_Graph15->SetMinimum(0.91765);
   Graph_Graph_Graph15->SetMaximum(0.93505);
   Graph_Graph_Graph15->SetDirectory(0);
   Graph_Graph_Graph15->SetStats(0);
   Graph_Graph_Graph15->SetLineWidth(2);
   Graph_Graph_Graph15->SetMarkerSize(1.2);
   Graph_Graph_Graph15->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph15->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph15->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph15->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph15->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph15->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph15->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph15->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph15->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph15->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph15->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph15->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph15->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph15->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph15->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph15->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph15->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph15->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph15);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e1974c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#e1974c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,3,0.92799);
   gre->SetPointError(0,0,0.00066);
   gre->SetPoint(1,5,0.93647);
   gre->SetPointError(1,0,0.00062);
   gre->SetPoint(2,7,0.9301);
   gre->SetPointError(2,0,0.0012);
   gre->SetPoint(3,10,0.92719);
   gre->SetPointError(3,0,0.00066);
   gre->SetPoint(4,15,0.9155);
   gre->SetPointError(4,0,0.00131);
   gre->SetPoint(5,20,0.90866);
   gre->SetPointError(5,0,0.00086);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,1.3,21.7);
   Graph_Graph_Graph26->SetMinimum(0.904871);
   Graph_Graph_Graph26->SetMaximum(0.940019);
   Graph_Graph_Graph26->SetDirectory(0);
   Graph_Graph_Graph26->SetStats(0);
   Graph_Graph_Graph26->SetLineWidth(2);
   Graph_Graph_Graph26->SetMarkerSize(1.2);
   Graph_Graph_Graph26->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph26->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph26->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph26->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph26->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph26->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph26->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph26->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph26->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph26->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph26->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph26->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph26->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph26->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph26->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph26->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph26->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph26->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph26);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#83ba5b");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#83ba5b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,3,0.92429);
   gre->SetPointError(0,0,0.00068);
   gre->SetPoint(1,5,0.92124);
   gre->SetPointError(1,0,0.0007);
   gre->SetPoint(2,7,0.91514);
   gre->SetPointError(2,0,0.00108);
   gre->SetPoint(3,10,0.90848);
   gre->SetPointError(3,0,0.00074);
   gre->SetPoint(4,15,0.90028);
   gre->SetPointError(4,0,0.00147);
   gre->SetPoint(5,20,0.90982);
   gre->SetPointError(5,0,0.00087);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,1.3,21.7);
   Graph_Graph_Graph37->SetMinimum(0.896194);
   Graph_Graph_Graph37->SetMaximum(0.927586);
   Graph_Graph_Graph37->SetDirectory(0);
   Graph_Graph_Graph37->SetStats(0);
   Graph_Graph_Graph37->SetLineWidth(2);
   Graph_Graph_Graph37->SetMarkerSize(1.2);
   Graph_Graph_Graph37->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph37->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph37->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph37->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph37->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph37->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph37->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph37->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph37->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph37->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph37->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph37->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph37->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph37->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph37->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph37->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph37->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph37->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph37);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#d35e60");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#d35e60");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,3,0.90083);
   gre->SetPointError(0,0,0.00078);
   gre->SetPoint(1,5,0.89972);
   gre->SetPointError(1,0,0.00077);
   gre->SetPoint(2,7,0.89488);
   gre->SetPointError(2,0,0.00177);
   gre->SetPoint(3,10,0.9049);
   gre->SetPointError(3,0,0.00109);
   gre->SetPoint(4,15,0.90806);
   gre->SetPointError(4,0,0.00132);
   gre->SetPoint(5,20,0.91621);
   gre->SetPointError(5,0,0.0009);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","Graph",100,1.3,21.7);
   Graph_Graph_Graph48->SetMinimum(0.89071);
   Graph_Graph_Graph48->SetMaximum(0.91951);
   Graph_Graph_Graph48->SetDirectory(0);
   Graph_Graph_Graph48->SetStats(0);
   Graph_Graph_Graph48->SetLineWidth(2);
   Graph_Graph_Graph48->SetMarkerSize(1.2);
   Graph_Graph_Graph48->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph48->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph48->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph48->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph48->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph48->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph48->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph48->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph48->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph48->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph48->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph48->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph48->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph48->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph48->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph48->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph48->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph48->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph48);
   
   multigraph->Add(gre,"");
   multigraph->Draw("APl");
   multigraph->GetXaxis()->SetTitle("ECal Cell Size /mm");
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(132);
   multigraph->GetYaxis()->SetTitle("#tau^{-}#rightarrow #pi^{-} 2#gamma #nu_{#tau} selection efficiency");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(1.2);
   multigraph->GetYaxis()->SetTitleFont(132);
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
