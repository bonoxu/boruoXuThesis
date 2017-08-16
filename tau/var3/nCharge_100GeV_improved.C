{
//=========Macro generated from canvas: canvas1/
//=========  (Wed Aug 16 17:14:26 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-2.086667,-0.2675676,7.246667,1.218919);
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
   0->SetBinContent(1,0.002147498);
   0->SetBinContent(2,0.9802538);
   0->SetBinContent(3,0.008530017);
   0->SetBinContent(4,0.004388062);
   0->SetBinContent(5,0.002267173);
   0->SetBinContent(6,0.001495933);
   0->SetBinContent(7,0.0009175026);
   0->SetBinContent(8,0.001017232);
   0->SetMinimum(0);
   0->SetMaximum(1.1);
   0->SetEntries(150777);
   0->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#83ba5b");
   0->SetFillColor(ci);
   0->SetFillStyle(3003);

   ci = TColor::GetColor("#83ba5b");
   0->SetLineColor(ci);
   0->GetXaxis()->SetTitle("N_{C}");
   0->GetXaxis()->SetNdivisions(506);
   0->GetXaxis()->SetLabelFont(132);
   0->GetXaxis()->SetLabelOffset(0.015);
   0->GetXaxis()->SetLabelSize(0.05);
   0->GetXaxis()->SetTitleSize(0.05);
   0->GetXaxis()->SetTitleOffset(1.3);
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
   1->SetBinContent(1,0.0002882623);
   1->SetBinContent(2,0.0002882623);
   1->SetBinContent(3,0.01558532);
   1->SetBinContent(4,0.9508801);
   1->SetBinContent(5,0.02042833);
   1->SetBinContent(6,0.008974537);
   1->SetBinContent(7,0.00355523);
   1->SetBinContent(8,0.002978708);
   1->SetMinimum(0);
   1->SetMaximum(1.1);
   1->SetEntries(52165);
   1->SetStats(0);

   ci = TColor::GetColor("#ab6857");
   1->SetFillColor(ci);
   1->SetFillStyle(3007);

   ci = TColor::GetColor("#ab6857");
   1->SetLineColor(ci);
   1->GetXaxis()->SetTitle("N_{C}");
   1->GetXaxis()->SetNdivisions(506);
   1->GetXaxis()->SetLabelFont(132);
   1->GetXaxis()->SetLabelOffset(0.015);
   1->GetXaxis()->SetLabelSize(0.05);
   1->GetXaxis()->SetTitleSize(0.05);
   1->GetXaxis()->SetTitleOffset(1.3);
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
   TLegendEntry *entry=leg->AddEntry("0","#pi^{-}","f");

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
   entry=leg->AddEntry("1","#pi^{-}#pi^{+}#pi^{-}#pi^{0}","f");

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
