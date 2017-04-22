{
//=========Macro generated from canvas: canvas1/
//=========  (Thu Feb 23 19:16:14 2017) by ROOT version5.34/30
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
   0->SetBinContent(1,0.8580649);
   0->SetBinContent(2,0.1098823);
   0->SetBinContent(3,0.01583591);
   0->SetBinContent(4,0.005870916);
   0->SetBinContent(5,0.00450841);
   0->SetBinContent(6,0.003433088);
   0->SetBinContent(7,0.002404495);
   0->SetBinContent(8,0.005857558);
   0->SetMinimum(0);
   0->SetMaximum(0);
   0->SetEntries(150777);
   0->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#83ba5b");
   0->SetFillColor(ci);
   0->SetFillStyle(3003);

   ci = TColor::GetColor("#83ba5b");
   0->SetLineColor(ci);
   0->GetXaxis()->SetTitle("N_{#gamma}");
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
   1->SetBinContent(1,0.0009390852);
   1->SetBinContent(2,0.1324015);
   1->SetBinContent(3,0.7450749);
   1->SetBinContent(4,0.09965485);
   1->SetBinContent(5,0.01411807);
   1->SetBinContent(6,0.004883863);
   1->SetBinContent(7,0.002927746);
   1->SetBinContent(8,0.006151048);
   1->SetMinimum(0);
   1->SetMaximum(0);
   1->SetEntries(309811);
   1->SetStats(0);

   ci = TColor::GetColor("#d35e60");
   1->SetFillColor(ci);
   1->SetFillStyle(3004);

   ci = TColor::GetColor("#d35e60");
   1->SetLineColor(ci);
   1->GetXaxis()->SetTitle("N_{#gamma}");
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
   2->SetBinContent(1,0.0001354372);
   2->SetBinContent(2,0.02837482);
   2->SetBinContent(3,0.05171682);
   2->SetBinContent(4,0.2235561);
   2->SetBinContent(5,0.6082846);
   2->SetBinContent(6,0.07733437);
   2->SetBinContent(7,0.01059788);
   2->SetBinContent(8,0.01121863);
   2->SetMinimum(0);
   2->SetMaximum(0);
   2->SetEntries(89589);
   2->SetStats(0);

   ci = TColor::GetColor("#808585");
   2->SetFillColor(ci);
   2->SetFillStyle(3005);

   ci = TColor::GetColor("#808585");
   2->SetLineColor(ci);
   2->GetXaxis()->SetTitle("N_{#gamma}");
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
   
   TLegend *leg = new TLegend(0.65,0.6,0.98,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);

   ci = TColor::GetColor("#616161");
   leg->SetTextColor(ci);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
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
   entry->SetTextFont(132);
   entry=leg->AddEntry("1","#rho(#pi^{-}#pi^{0})","f");

   ci = TColor::GetColor("#d35e60");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#d35e60");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("2","a_{1}(#pi^{-}#pi^{0}#pi^{0})","f");

   ci = TColor::GetColor("#808585");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3005);

   ci = TColor::GetColor("#808585");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
