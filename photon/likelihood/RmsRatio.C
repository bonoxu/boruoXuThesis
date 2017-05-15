{
//=========Macro generated from canvas: c1/
//=========  (Mon May 15 12:13:56 2017) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   c1->Range(0.5641025,-0.06186723,3.128205,0.2818396);
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
   
   TH1F *0 = new TH1F("0","",30,1,3);
   0->SetBinContent(1,0.2422315);
   0->SetBinContent(2,0.202659);
   0->SetBinContent(3,0.1645904);
   0->SetBinContent(4,0.1227619);
   0->SetBinContent(5,0.08159143);
   0->SetBinContent(6,0.05423811);
   0->SetBinContent(7,0.03985608);
   0->SetBinContent(8,0.02707204);
   0->SetBinContent(9,0.02068003);
   0->SetBinContent(10,0.01466401);
   0->SetBinContent(11,0.008741993);
   0->SetBinContent(12,0.006579994);
   0->SetBinContent(13,0.00376);
   0->SetBinContent(14,0.002726);
   0->SetBinContent(15,0.002162);
   0->SetBinContent(16,0.001222);
   0->SetBinContent(17,0.001974);
   0->SetBinContent(18,0.001316);
   0->SetBinContent(19,0.001034);
   0->SetBinContent(20,0.0007520001);
   0->SetBinContent(21,0.0006580001);
   0->SetBinContent(22,0.000282);
   0->SetBinContent(23,0.000282);
   0->SetBinContent(24,0.000282);
   0->SetBinContent(25,0.000188);
   0->SetBinContent(26,9.4e-05);
   0->SetBinContent(27,9.4e-05);
   0->SetBinContent(28,9.4e-05);
   0->SetBinContent(29,0.000188);
   0->SetBinContent(30,9.4e-05);
   0->SetEntries(10669);
   0->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#7293cb");
   0->SetLineColor(ci);
   0->SetLineWidth(2);
   0->SetMarkerSize(1.2);
   0->GetXaxis()->SetTitle("#delta<w_{UV}>");
   0->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   0->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   0->GetXaxis()->SetLabelColor(ci);
   0->GetXaxis()->SetLabelFont(42);
   0->GetXaxis()->SetLabelOffset(0.0015);
   0->GetXaxis()->SetLabelSize(0.06);
   0->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   0->GetXaxis()->SetTitleColor(ci);
   0->GetXaxis()->SetTitleFont(42);
   0->GetYaxis()->SetTitle("Entries");
   0->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   0->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   0->GetYaxis()->SetLabelColor(ci);
   0->GetYaxis()->SetLabelFont(42);
   0->GetYaxis()->SetLabelOffset(0.02);
   0->GetYaxis()->SetLabelSize(0.06);
   0->GetYaxis()->SetTitleSize(0.07);
   0->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   0->GetYaxis()->SetTitleColor(ci);
   0->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   0->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   0->GetZaxis()->SetLabelColor(ci);
   0->GetZaxis()->SetLabelFont(42);
   0->GetZaxis()->SetLabelOffset(0.02);
   0->GetZaxis()->SetLabelSize(0.06);
   0->GetZaxis()->SetTitleSize(0.07);
   0->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   0->GetZaxis()->SetTitleColor(ci);
   0->GetZaxis()->SetTitleFont(42);
   0->Draw("");
   
   TH1F *1 = new TH1F("1","",30,1,3);
   1->SetBinContent(1,0.1965735);
   1->SetBinContent(2,0.1662747);
   1->SetBinContent(3,0.1101111);
   1->SetBinContent(4,0.1064161);
   1->SetBinContent(5,0.08794107);
   1->SetBinContent(6,0.07685605);
   1->SetBinContent(7,0.05173003);
   1->SetBinContent(8,0.03621102);
   1->SetBinContent(9,0.03473302);
   1->SetBinContent(10,0.02217);
   1->SetBinContent(11,0.018475);
   1->SetBinContent(12,0.015519);
   1->SetBinContent(13,0.011824);
   1->SetBinContent(14,0.01478);
   1->SetBinContent(15,0.011085);
   1->SetBinContent(16,0.004434);
   1->SetBinContent(17,0.005911999);
   1->SetBinContent(18,0.005911999);
   1->SetBinContent(19,0.002956);
   1->SetBinContent(20,0.002217);
   1->SetBinContent(21,0.002217);
   1->SetBinContent(22,0.002956);
   1->SetBinContent(23,0.000739);
   1->SetBinContent(24,0.002217);
   1->SetBinContent(25,0.002956);
   1->SetBinContent(27,0.001478);
   1->SetBinContent(28,0.002217);
   1->SetBinContent(29,0.000739);
   1->SetBinContent(30,0.002217);
   1->SetEntries(1353);
   1->SetStats(0);

   ci = TColor::GetColor("#e1974c");
   1->SetLineColor(ci);
   1->SetLineWidth(2);
   1->SetMarkerSize(1.2);
   1->GetXaxis()->SetTitle("#delta<w_{UV}>");
   1->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   1->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   1->GetXaxis()->SetLabelColor(ci);
   1->GetXaxis()->SetLabelFont(42);
   1->GetXaxis()->SetLabelOffset(0.0015);
   1->GetXaxis()->SetLabelSize(0.06);
   1->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   1->GetXaxis()->SetTitleColor(ci);
   1->GetXaxis()->SetTitleFont(42);
   1->GetYaxis()->SetTitle("Entries");
   1->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   1->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   1->GetYaxis()->SetLabelColor(ci);
   1->GetYaxis()->SetLabelFont(42);
   1->GetYaxis()->SetLabelOffset(0.02);
   1->GetYaxis()->SetLabelSize(0.06);
   1->GetYaxis()->SetTitleSize(0.07);
   1->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   1->GetYaxis()->SetTitleColor(ci);
   1->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   1->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   1->GetZaxis()->SetLabelColor(ci);
   1->GetZaxis()->SetLabelFont(42);
   1->GetZaxis()->SetLabelOffset(0.02);
   1->GetZaxis()->SetLabelSize(0.06);
   1->GetZaxis()->SetTitleSize(0.07);
   1->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   1->GetZaxis()->SetTitleColor(ci);
   1->GetZaxis()->SetTitleFont(42);
   1->Draw("same");
   
   TLegend *leg = new TLegend(0.6,0.75,0.98,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);

   ci = TColor::GetColor("#616161");
   leg->SetTextColor(ci);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("0","photon","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#7293cb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("1","non-photon","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#e1974c");
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
