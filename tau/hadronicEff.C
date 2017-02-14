{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jan  9 15:10:09 2017) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "c1",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-2.088667,0.627027,22.84467,1.032432);
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
   multigraph->SetName("mg");
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
   gre->SetPoint(0,3,0.916375);
   gre->SetPointError(0,0,0.000593951);
   gre->SetPoint(1,5,0.9263503);
   gre->SetPointError(1,0,0.000426937);
   gre->SetPoint(2,7,0.9273369);
   gre->SetPointError(2,0,0.000431842);
   gre->SetPoint(3,10,0.9287477);
   gre->SetPointError(3,0,0.0005424177);
   gre->SetPoint(4,15,0.9237173);
   gre->SetPointError(4,0,0.0004411901);
   gre->SetPoint(5,20,0.9065891);
   gre->SetPointError(5,0,0.0005826676);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,1.3,21.7);
   Graph_Graph1->SetMinimum(0.9036781);
   Graph_Graph1->SetMaximum(0.9316185);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineWidth(2);
   Graph_Graph1->SetMarkerSize(1.2);
   Graph_Graph1->GetXaxis()->SetNdivisions(506);
   Graph_Graph1->GetXaxis()->SetLabelFont(132);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleFont(132);
   Graph_Graph1->GetYaxis()->SetNdivisions(506);
   Graph_Graph1->GetYaxis()->SetLabelFont(132);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph1->GetYaxis()->SetTitleFont(132);
   Graph_Graph1->GetZaxis()->SetLabelFont(132);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph1);
   
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
   gre->SetPoint(0,3,0.914365);
   gre->SetPointError(0,0,0.0004431057);
   gre->SetPoint(1,5,0.930639);
   gre->SetPointError(1,0,0.0004093459);
   gre->SetPoint(2,7,0.9240668);
   gre->SetPointError(2,0,0.0007888545);
   gre->SetPoint(3,10,0.9195861);
   gre->SetPointError(3,0,0.0004380412);
   gre->SetPoint(4,15,0.8983388);
   gre->SetPointError(4,0,0.0008925017);
   gre->SetPoint(5,20,0.8576167);
   gre->SetPointError(5,0,0.0006348);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,1.3,21.7);
   Graph_Graph2->SetMinimum(0.8495752);
   Graph_Graph2->SetMaximum(0.938455);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineWidth(2);
   Graph_Graph2->SetMarkerSize(1.2);
   Graph_Graph2->GetXaxis()->SetNdivisions(506);
   Graph_Graph2->GetXaxis()->SetLabelFont(132);
   Graph_Graph2->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleFont(132);
   Graph_Graph2->GetYaxis()->SetNdivisions(506);
   Graph_Graph2->GetYaxis()->SetLabelFont(132);
   Graph_Graph2->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph2->GetYaxis()->SetTitleFont(132);
   Graph_Graph2->GetZaxis()->SetLabelFont(132);
   Graph_Graph2->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph2);
   
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
   gre->SetPoint(0,3,0.9067476);
   gre->SetPointError(0,0,0.0004693158);
   gre->SetPoint(1,5,0.9029736);
   gre->SetPointError(1,0,0.0004774053);
   gre->SetPoint(2,7,0.8839562);
   gre->SetPointError(2,0,0.0007621666);
   gre->SetPoint(3,10,0.8526342);
   gre->SetPointError(3,0,0.0005347236);
   gre->SetPoint(4,15,0.8103029);
   gre->SetPointError(4,0,0.001066737);
   gre->SetPoint(5,20,0.773917);
   gre->SetPointError(5,0,0.0006586121);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,1.3,21.7);
   Graph_Graph3->SetMinimum(0.7598626);
   Graph_Graph3->SetMaximum(0.9206128);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   Graph_Graph3->SetLineWidth(2);
   Graph_Graph3->SetMarkerSize(1.2);
   Graph_Graph3->GetXaxis()->SetNdivisions(506);
   Graph_Graph3->GetXaxis()->SetLabelFont(132);
   Graph_Graph3->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3->GetXaxis()->SetTitleFont(132);
   Graph_Graph3->GetYaxis()->SetNdivisions(506);
   Graph_Graph3->GetYaxis()->SetLabelFont(132);
   Graph_Graph3->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph3->GetYaxis()->SetTitleFont(132);
   Graph_Graph3->GetZaxis()->SetLabelFont(132);
   Graph_Graph3->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph3->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph3);
   
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
   gre->SetPoint(0,3,0.8587844);
   gre->SetPointError(0,0,0.0005493921);
   gre->SetPoint(1,5,0.8344634);
   gre->SetPointError(1,0,0.000547877);
   gre->SetPoint(2,7,0.8073553);
   gre->SetPointError(2,0,0.001242029);
   gre->SetPoint(3,10,0.7900986);
   gre->SetPointError(3,0,0.0007678078);
   gre->SetPoint(4,15,0.7717381);
   gre->SetPointError(4,0,0.0009296473);
   gre->SetPoint(5,20,0.7513728);
   gre->SetPointError(5,0,0.0006744765);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,1.3,21.7);
   Graph_Graph4->SetMinimum(0.7398347);
   Graph_Graph4->SetMaximum(0.8701974);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   Graph_Graph4->SetLineWidth(2);
   Graph_Graph4->SetMarkerSize(1.2);
   Graph_Graph4->GetXaxis()->SetNdivisions(506);
   Graph_Graph4->GetXaxis()->SetLabelFont(132);
   Graph_Graph4->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph4->GetXaxis()->SetTitleFont(132);
   Graph_Graph4->GetYaxis()->SetNdivisions(506);
   Graph_Graph4->GetYaxis()->SetLabelFont(132);
   Graph_Graph4->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph4->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph4->GetYaxis()->SetTitleFont(132);
   Graph_Graph4->GetZaxis()->SetLabelFont(132);
   Graph_Graph4->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph4->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph4->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph4);
   
   multigraph->Add(gre,"");
   multigraph->Draw("APl");
   multigraph->GetXaxis()->SetTitle("ECal Cell Size /mm");
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(132);
   multigraph->GetYaxis()->SetTitle("#tau^{-}->hadronic decays efficiency");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelOffset(0.015);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(1.5);
   multigraph->GetYaxis()->SetTitleFont(132);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#7293cb");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#7293cb");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,3,0.916375);
   gre->SetPointError(0,0,0.000593951);
   gre->SetPoint(1,5,0.9263503);
   gre->SetPointError(1,0,0.000426937);
   gre->SetPoint(2,7,0.9273369);
   gre->SetPointError(2,0,0.000431842);
   gre->SetPoint(3,10,0.9287477);
   gre->SetPointError(3,0,0.0005424177);
   gre->SetPoint(4,15,0.9237173);
   gre->SetPointError(4,0,0.0004411901);
   gre->SetPoint(5,20,0.9065891);
   gre->SetPointError(5,0,0.0005826676);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","Graph",100,1.3,21.7);
   Graph_Graph_Graph15->SetMinimum(0.9036781);
   Graph_Graph_Graph15->SetMaximum(0.9316185);
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
   Graph_Graph_Graph15->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph15->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph15->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph15->GetYaxis()->SetTitleOffset(1.5);
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
   gre->SetPoint(0,3,0.914365);
   gre->SetPointError(0,0,0.0004431057);
   gre->SetPoint(1,5,0.930639);
   gre->SetPointError(1,0,0.0004093459);
   gre->SetPoint(2,7,0.9240668);
   gre->SetPointError(2,0,0.0007888545);
   gre->SetPoint(3,10,0.9195861);
   gre->SetPointError(3,0,0.0004380412);
   gre->SetPoint(4,15,0.8983388);
   gre->SetPointError(4,0,0.0008925017);
   gre->SetPoint(5,20,0.8576167);
   gre->SetPointError(5,0,0.0006348);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,1.3,21.7);
   Graph_Graph_Graph26->SetMinimum(0.8495752);
   Graph_Graph_Graph26->SetMaximum(0.938455);
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
   Graph_Graph_Graph26->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph26->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph26->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph26->GetYaxis()->SetTitleOffset(1.5);
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
   gre->SetPoint(0,3,0.9067476);
   gre->SetPointError(0,0,0.0004693158);
   gre->SetPoint(1,5,0.9029736);
   gre->SetPointError(1,0,0.0004774053);
   gre->SetPoint(2,7,0.8839562);
   gre->SetPointError(2,0,0.0007621666);
   gre->SetPoint(3,10,0.8526342);
   gre->SetPointError(3,0,0.0005347236);
   gre->SetPoint(4,15,0.8103029);
   gre->SetPointError(4,0,0.001066737);
   gre->SetPoint(5,20,0.773917);
   gre->SetPointError(5,0,0.0006586121);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,1.3,21.7);
   Graph_Graph_Graph37->SetMinimum(0.7598626);
   Graph_Graph_Graph37->SetMaximum(0.9206128);
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
   Graph_Graph_Graph37->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph37->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph37->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph37->GetYaxis()->SetTitleOffset(1.5);
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
   gre->SetPoint(0,3,0.8587844);
   gre->SetPointError(0,0,0.0005493921);
   gre->SetPoint(1,5,0.8344634);
   gre->SetPointError(1,0,0.000547877);
   gre->SetPoint(2,7,0.8073553);
   gre->SetPointError(2,0,0.001242029);
   gre->SetPoint(3,10,0.7900986);
   gre->SetPointError(3,0,0.0007678078);
   gre->SetPoint(4,15,0.7717381);
   gre->SetPointError(4,0,0.0009296473);
   gre->SetPoint(5,20,0.7513728);
   gre->SetPointError(5,0,0.0006744765);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","Graph",100,1.3,21.7);
   Graph_Graph_Graph48->SetMinimum(0.7398347);
   Graph_Graph_Graph48->SetMaximum(0.8701974);
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
   Graph_Graph_Graph48->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph48->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph48->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph48->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph_Graph48->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph48->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph48->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph48->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph48->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph48->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph48->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph48);
   
   multigraph->Add(gre,"");
   multigraph->Draw("");
   multigraph->GetXaxis()->SetTitle("ECal Cell Size /mm");
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(132);
   multigraph->GetYaxis()->SetTitle("#tau^{-}->hadronic decays efficiency");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelOffset(0.015);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(1.5);
   multigraph->GetYaxis()->SetTitleFont(132);
   
   TLegend *leg = new TLegend(0.2,0.2,0.7,0.3,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(10);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph","100 GeV","lep");

   ci = TColor::GetColor("#7293cb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#7293cb");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph","200 GeV","lep");

   ci = TColor::GetColor("#e1974c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#e1974c");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph","500 GeV","lep");

   ci = TColor::GetColor("#83ba5b");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#83ba5b");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph","1000 GeV","lep");

   ci = TColor::GetColor("#d35e60");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#d35e60");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
