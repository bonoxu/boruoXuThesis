{
//=========Macro generated from canvas: c1/
//=========  (Mon May 15 12:18:11 2017) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   c1->Range(-0.2466667,-0.1453884,1.086667,0.6623247);
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
   
   TH1F *0 = new TH1F("0","",52,-0.02,1.02);
   0->SetBinContent(2,9.4e-05);
   0->SetBinContent(3,0.001222);
   0->SetBinContent(4,0.00188);
   0->SetBinContent(5,0.002444);
   0->SetBinContent(6,0.003196);
   0->SetBinContent(7,0.003572);
   0->SetBinContent(8,0.004417999);
   0->SetBinContent(9,0.003196);
   0->SetBinContent(10,0.004042);
   0->SetBinContent(11,0.003572);
   0->SetBinContent(12,0.004605999);
   0->SetBinContent(13,0.004136);
   0->SetBinContent(14,0.004042);
   0->SetBinContent(15,0.003666);
   0->SetBinContent(16,0.00376);
   0->SetBinContent(17,0.004605999);
   0->SetBinContent(18,0.003572);
   0->SetBinContent(19,0.003008);
   0->SetBinContent(20,0.003572);
   0->SetBinContent(21,0.005357997);
   0->SetBinContent(22,0.003478);
   0->SetBinContent(23,0.004042);
   0->SetBinContent(24,0.004605999);
   0->SetBinContent(25,0.003948);
   0->SetBinContent(26,0.004042);
   0->SetBinContent(27,0.004136);
   0->SetBinContent(28,0.004042);
   0->SetBinContent(29,0.003948);
   0->SetBinContent(30,0.00423);
   0->SetBinContent(31,0.004981998);
   0->SetBinContent(32,0.005075998);
   0->SetBinContent(33,0.004605999);
   0->SetBinContent(34,0.004699999);
   0->SetBinContent(35,0.004981998);
   0->SetBinContent(36,0.004511999);
   0->SetBinContent(37,0.004605999);
   0->SetBinContent(38,0.006015996);
   0->SetBinContent(39,0.006203995);
   0->SetBinContent(40,0.007143993);
   0->SetBinContent(41,0.006579994);
   0->SetBinContent(42,0.008835994);
   0->SetBinContent(43,0.010152);
   0->SetBinContent(44,0.012126);
   0->SetBinContent(45,0.01457001);
   0->SetBinContent(46,0.02039802);
   0->SetBinContent(47,0.02547404);
   0->SetBinContent(48,0.03271206);
   0->SetBinContent(49,0.0484101);
   0->SetBinContent(50,0.06260413);
   0->SetBinContent(51,0.03449806);
   0->SetBinContent(52,0.5692454);
   0->SetEntries(10669);
   0->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#7293cb");
   0->SetLineColor(ci);
   0->SetLineWidth(2);
   0->SetMarkerSize(1.2);
   0->GetXaxis()->SetTitle("#deltaE_{cluster}");
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
   
   TH1F *1 = new TH1F("1","",52,-0.02,1.02);
   1->SetBinContent(3,0.002217);
   1->SetBinContent(4,0.012563);
   1->SetBinContent(5,0.016258);
   1->SetBinContent(6,0.011824);
   1->SetBinContent(7,0.008867999);
   1->SetBinContent(8,0.011824);
   1->SetBinContent(9,0.017736);
   1->SetBinContent(10,0.02217);
   1->SetBinContent(11,0.015519);
   1->SetBinContent(12,0.013302);
   1->SetBinContent(13,0.01478);
   1->SetBinContent(14,0.015519);
   1->SetBinContent(15,0.016258);
   1->SetBinContent(16,0.014041);
   1->SetBinContent(17,0.019953);
   1->SetBinContent(18,0.019214);
   1->SetBinContent(19,0.017736);
   1->SetBinContent(20,0.010346);
   1->SetBinContent(21,0.013302);
   1->SetBinContent(22,0.019953);
   1->SetBinContent(23,0.019214);
   1->SetBinContent(24,0.015519);
   1->SetBinContent(25,0.012563);
   1->SetBinContent(26,0.012563);
   1->SetBinContent(27,0.01478);
   1->SetBinContent(28,0.016258);
   1->SetBinContent(29,0.018475);
   1->SetBinContent(30,0.01478);
   1->SetBinContent(31,0.009606998);
   1->SetBinContent(32,0.019953);
   1->SetBinContent(33,0.01478);
   1->SetBinContent(34,0.019214);
   1->SetBinContent(35,0.01478);
   1->SetBinContent(36,0.015519);
   1->SetBinContent(37,0.018475);
   1->SetBinContent(38,0.016258);
   1->SetBinContent(39,0.011824);
   1->SetBinContent(40,0.021431);
   1->SetBinContent(41,0.014041);
   1->SetBinContent(42,0.016997);
   1->SetBinContent(43,0.012563);
   1->SetBinContent(44,0.018475);
   1->SetBinContent(45,0.014041);
   1->SetBinContent(46,0.02586501);
   1->SetBinContent(47,0.02586501);
   1->SetBinContent(48,0.03177701);
   1->SetBinContent(49,0.02956001);
   1->SetBinContent(50,0.02734301);
   1->SetBinContent(51,0.009606998);
   1->SetBinContent(52,0.1943565);
   1->SetEntries(1353);
   1->SetStats(0);

   ci = TColor::GetColor("#e1974c");
   1->SetLineColor(ci);
   1->SetLineWidth(2);
   1->SetMarkerSize(1.2);
   1->GetXaxis()->SetTitle("#deltaE_{cluster}");
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
