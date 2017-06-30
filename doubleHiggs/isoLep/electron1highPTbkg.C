{
//=========Macro generated from canvas: c1/
//=========  (Fri Jun 30 09:23:40 2017) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   c1->Range(-43.58975,-47.99879,212.8205,246.9945);
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
   
   TH1F *0 = new TH1F("0","",20,0,200);
   0->SetBinContent(1,106);
   0->SetBinContent(2,213);
   0->SetBinContent(3,138);
   0->SetBinContent(4,114);
   0->SetBinContent(5,100);
   0->SetBinContent(6,91);
   0->SetBinContent(7,73);
   0->SetBinContent(8,49);
   0->SetBinContent(9,65);
   0->SetBinContent(10,58);
   0->SetBinContent(11,50);
   0->SetBinContent(12,44);
   0->SetBinContent(13,41);
   0->SetBinContent(14,28);
   0->SetBinContent(15,19);
   0->SetBinContent(16,34);
   0->SetBinContent(17,31);
   0->SetBinContent(18,22);
   0->SetBinContent(19,22);
   0->SetBinContent(20,15);
   0->SetBinContent(21,151);
   0->SetEntries(1464);
   0->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#396ab1");
   0->SetFillColor(ci);

   ci = TColor::GetColor("#7293cb");
   0->SetLineColor(ci);
   0->SetLineWidth(2);
   0->SetMarkerSize(1.2);
   0->GetXaxis()->SetTitle("p_{T} / GeV");
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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
