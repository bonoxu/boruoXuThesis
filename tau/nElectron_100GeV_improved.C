{
//=========Macro generated from canvas: canvas1/
//=========  (Tue Aug  1 17:44:37 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-2.086667,-0.2432432,7.246667,1.108108);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetTickx(1);
   canvas1->SetTicky(1);
   canvas1->SetLeftMargin(0.17);
   canvas1->SetRightMargin(0.08);
   canvas1->SetTopMargin(0.08);
   canvas1->SetBottomMargin(0.18);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
   
   TH1F *0 = new TH1F("0","",7,-0.5,6.5);
   0->SetBinContent(1,0.0225617);
   0->SetBinContent(2,0.9666654);
   0->SetBinContent(3,0.00730603);
   0->SetBinContent(4,0.003423613);
   0->SetBinContent(5,3.462553e-05);
   0->SetBinContent(6,8.656381e-06);
   0->SetMinimum(0);
   0->SetMaximum(1);
   0->SetEntries(231351);
   0->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#7293cb");
   0->SetFillColor(ci);
   0->SetFillStyle(3001);

   ci = TColor::GetColor("#7293cb");
   0->SetLineColor(ci);
   0->GetXaxis()->SetTitle("N_{e^{-}}");
   0->GetXaxis()->SetNdivisions(506);
   0->GetXaxis()->SetLabelFont(132);
   0->GetXaxis()->SetLabelOffset(0.015);
   0->GetXaxis()->SetLabelSize(0.05);
   0->GetXaxis()->SetTitleSize(0.05);
   0->GetXaxis()->SetTitleFont(132);
   0->GetYaxis()->SetTitle("Normalised entries");
   0->GetYaxis()->SetNdivisions(506);
   0->GetYaxis()->SetLabelFont(132);
   0->GetYaxis()->SetLabelOffset(0.015);
   0->GetYaxis()->SetLabelSize(0.05);
   0->GetYaxis()->SetTitleSize(0.05);
   0->GetYaxis()->SetTitleOffset(1.3);
   0->GetYaxis()->SetTitleFont(132);
   0->GetZaxis()->SetLabelFont(132);
   0->GetZaxis()->SetLabelOffset(0.015);
   0->GetZaxis()->SetLabelSize(0.05);
   0->GetZaxis()->SetTitleSize(0.05);
   0->GetZaxis()->SetTitleOffset(1.1);
   0->GetZaxis()->SetTitleFont(132);
   0->Draw("");
   
   TH1F *1 = new TH1F("1","",7,-0.5,6.5);
   1->SetBinContent(1,0.9965096);
   1->SetBinContent(2,0.002338691);
   1->SetBinContent(3,0.001142963);
   1->SetBinContent(4,8.79205e-06);
   1->SetMinimum(0);
   1->SetMaximum(1);
   1->SetEntries(227791);
   1->SetStats(0);

   ci = TColor::GetColor("#e1974c");
   1->SetFillColor(ci);
   1->SetFillStyle(3002);

   ci = TColor::GetColor("#e1974c");
   1->SetLineColor(ci);
   1->GetXaxis()->SetTitle("N_{e^{-}}");
   1->GetXaxis()->SetNdivisions(506);
   1->GetXaxis()->SetLabelFont(132);
   1->GetXaxis()->SetLabelOffset(0.015);
   1->GetXaxis()->SetLabelSize(0.05);
   1->GetXaxis()->SetTitleSize(0.05);
   1->GetXaxis()->SetTitleFont(132);
   1->GetYaxis()->SetTitle("Normalised entries");
   1->GetYaxis()->SetNdivisions(506);
   1->GetYaxis()->SetLabelFont(132);
   1->GetYaxis()->SetLabelOffset(0.015);
   1->GetYaxis()->SetLabelSize(0.05);
   1->GetYaxis()->SetTitleSize(0.05);
   1->GetYaxis()->SetTitleOffset(1.3);
   1->GetYaxis()->SetTitleFont(132);
   1->GetZaxis()->SetLabelFont(132);
   1->GetZaxis()->SetLabelOffset(0.015);
   1->GetZaxis()->SetLabelSize(0.05);
   1->GetZaxis()->SetTitleSize(0.05);
   1->GetZaxis()->SetTitleOffset(1.1);
   1->GetZaxis()->SetTitleFont(132);
   1->Draw("same");
   
   TH1F *2 = new TH1F("2","",7,-0.5,6.5);
   2->SetBinContent(1,0.9820344);
   2->SetBinContent(2,0.01639149);
   2->SetBinContent(3,0.001494393);
   2->SetBinContent(4,5.313384e-05);
   2->SetBinContent(5,1.992519e-05);
   2->SetBinContent(7,6.641731e-06);
   2->SetMinimum(0);
   2->SetMaximum(1);
   2->SetEntries(150777);
   2->SetStats(0);

   ci = TColor::GetColor("#83ba5b");
   2->SetFillColor(ci);
   2->SetFillStyle(3003);

   ci = TColor::GetColor("#83ba5b");
   2->SetLineColor(ci);
   2->GetXaxis()->SetTitle("N_{e^{-}}");
   2->GetXaxis()->SetNdivisions(506);
   2->GetXaxis()->SetLabelFont(132);
   2->GetXaxis()->SetLabelOffset(0.015);
   2->GetXaxis()->SetLabelSize(0.05);
   2->GetXaxis()->SetTitleSize(0.05);
   2->GetXaxis()->SetTitleFont(132);
   2->GetYaxis()->SetTitle("Normalised entries");
   2->GetYaxis()->SetNdivisions(506);
   2->GetYaxis()->SetLabelFont(132);
   2->GetYaxis()->SetLabelOffset(0.015);
   2->GetYaxis()->SetLabelSize(0.05);
   2->GetYaxis()->SetTitleSize(0.05);
   2->GetYaxis()->SetTitleOffset(1.3);
   2->GetYaxis()->SetTitleFont(132);
   2->GetZaxis()->SetLabelFont(132);
   2->GetZaxis()->SetLabelOffset(0.015);
   2->GetZaxis()->SetLabelSize(0.05);
   2->GetZaxis()->SetTitleSize(0.05);
   2->GetZaxis()->SetTitleOffset(1.1);
   2->GetZaxis()->SetTitleFont(132);
   2->Draw("same");
   
   TH1F *3 = new TH1F("3","",7,-0.5,6.5);
   3->SetBinContent(1,0.9159048);
   3->SetBinContent(2,0.08012893);
   3->SetBinContent(3,0.003717209);
   3->SetBinContent(4,0.0002490917);
   3->SetMinimum(0);
   3->SetMaximum(1);
   3->SetEntries(52165);
   3->SetStats(0);

   ci = TColor::GetColor("#ab6857");
   3->SetFillColor(ci);
   3->SetFillStyle(3007);

   ci = TColor::GetColor("#ab6857");
   3->SetLineColor(ci);
   3->GetXaxis()->SetTitle("N_{e^{-}}");
   3->GetXaxis()->SetNdivisions(506);
   3->GetXaxis()->SetLabelFont(132);
   3->GetXaxis()->SetLabelOffset(0.015);
   3->GetXaxis()->SetLabelSize(0.05);
   3->GetXaxis()->SetTitleSize(0.05);
   3->GetXaxis()->SetTitleFont(132);
   3->GetYaxis()->SetTitle("Normalised entries");
   3->GetYaxis()->SetNdivisions(506);
   3->GetYaxis()->SetLabelFont(132);
   3->GetYaxis()->SetLabelOffset(0.015);
   3->GetYaxis()->SetLabelSize(0.05);
   3->GetYaxis()->SetTitleSize(0.05);
   3->GetYaxis()->SetTitleOffset(1.3);
   3->GetYaxis()->SetTitleFont(132);
   3->GetZaxis()->SetLabelFont(132);
   3->GetZaxis()->SetLabelOffset(0.015);
   3->GetZaxis()->SetLabelSize(0.05);
   3->GetZaxis()->SetTitleSize(0.05);
   3->GetZaxis()->SetTitleOffset(1.1);
   3->GetZaxis()->SetTitleFont(132);
   3->Draw("same");
   
   TLegend *leg = new TLegend(0.65,0.6,0.98,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);

   ci = TColor::GetColor("#616161");
   leg->SetTextColor(ci);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(10);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("0","e^{-}","f");

   ci = TColor::GetColor("#7293cb");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#7293cb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("1","#mu^{-}","f");

   ci = TColor::GetColor("#e1974c");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);

   ci = TColor::GetColor("#e1974c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("2","#pi^{-}","f");

   ci = TColor::GetColor("#83ba5b");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3003);

   ci = TColor::GetColor("#83ba5b");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("3","#pi^{-}#pi^{+}#pi^{-}#pi^{0}","f");

   ci = TColor::GetColor("#ab6857");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3007);

   ci = TColor::GetColor("#ab6857");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
