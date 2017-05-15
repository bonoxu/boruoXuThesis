{
//=========Macro generated from canvas: c1/
//=========  (Mon May 15 12:16:55 2017) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   c1->Range(-0.2030769,-0.01992662,0.8738462,0.09077681);
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
   
   TH1F *0 = new TH1F("0","",42,-0.02,0.82);
   0->SetBinContent(5,9.4e-05);
   0->SetBinContent(6,0.00047);
   0->SetBinContent(7,0.001598);
   0->SetBinContent(8,0.005733996);
   0->SetBinContent(9,0.011374);
   0->SetBinContent(10,0.02030402);
   0->SetBinContent(11,0.03308806);
   0->SetBinContent(12,0.04267608);
   0->SetBinContent(13,0.05922013);
   0->SetBinContent(14,0.0687139);
   0->SetBinContent(15,0.06974787);
   0->SetBinContent(16,0.07801956);
   0->SetBinContent(17,0.07623363);
   0->SetBinContent(18,0.07566965);
   0->SetBinContent(19,0.06974787);
   0->SetBinContent(20,0.06561202);
   0->SetBinContent(21,0.05470812);
   0->SetBinContent(22,0.05207611);
   0->SetBinContent(23,0.04643609);
   0->SetBinContent(24,0.03487406);
   0->SetBinContent(25,0.02961005);
   0->SetBinContent(26,0.02124403);
   0->SetBinContent(27,0.01804802);
   0->SetBinContent(28,0.01372401);
   0->SetBinContent(29,0.01316001);
   0->SetBinContent(30,0.009681996);
   0->SetBinContent(31,0.006673994);
   0->SetBinContent(32,0.007519992);
   0->SetBinContent(33,0.00376);
   0->SetBinContent(34,0.002538);
   0->SetBinContent(35,0.002632);
   0->SetBinContent(36,0.001974);
   0->SetBinContent(37,0.001786);
   0->SetBinContent(38,0.001598);
   0->SetBinContent(39,0.001598);
   0->SetBinContent(40,0.0008460001);
   0->SetBinContent(41,9.4e-05);
   0->SetEntries(10669);
   0->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#7293cb");
   0->SetLineColor(ci);
   0->SetLineWidth(2);
   0->SetMarkerSize(1.2);
   0->GetXaxis()->SetTitle("#deltal");
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
   
   TH1F *1 = new TH1F("1","",42,-0.02,0.82);
   1->SetBinContent(6,0.000739);
   1->SetBinContent(7,0.000739);
   1->SetBinContent(8,0.001478);
   1->SetBinContent(9,0.005173);
   1->SetBinContent(10,0.008128999);
   1->SetBinContent(11,0.011824);
   1->SetBinContent(12,0.019214);
   1->SetBinContent(13,0.017736);
   1->SetBinContent(14,0.03103801);
   1->SetBinContent(15,0.03399402);
   1->SetBinContent(16,0.03473302);
   1->SetBinContent(17,0.04286202);
   1->SetBinContent(18,0.04877403);
   1->SetBinContent(19,0.04951303);
   1->SetBinContent(20,0.04360102);
   1->SetBinContent(21,0.04803503);
   1->SetBinContent(22,0.04581803);
   1->SetBinContent(23,0.05542504);
   1->SetBinContent(24,0.05025203);
   1->SetBinContent(25,0.04212302);
   1->SetBinContent(26,0.04212302);
   1->SetBinContent(27,0.02660401);
   1->SetBinContent(28,0.03103801);
   1->SetBinContent(29,0.03251601);
   1->SetBinContent(30,0.02808201);
   1->SetBinContent(31,0.02512601);
   1->SetBinContent(32,0.02660401);
   1->SetBinContent(33,0.02660401);
   1->SetBinContent(34,0.02586501);
   1->SetBinContent(35,0.019953);
   1->SetBinContent(36,0.02586501);
   1->SetBinContent(37,0.02217);
   1->SetBinContent(38,0.016258);
   1->SetBinContent(39,0.02660401);
   1->SetBinContent(40,0.016258);
   1->SetBinContent(41,0.016997);
   1->SetEntries(1353);
   1->SetStats(0);

   ci = TColor::GetColor("#e1974c");
   1->SetLineColor(ci);
   1->SetLineWidth(2);
   1->SetMarkerSize(1.2);
   1->GetXaxis()->SetTitle("#deltal");
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
