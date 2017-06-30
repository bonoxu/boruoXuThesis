{
//=========Macro generated from canvas: c1/
//=========  (Fri Jun 30 10:07:09 2017) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   c1->Range(-0.02179487,-7.662162,0.1064103,34.90541);
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
   
   THStack *hs = new THStack();
   hs->SetName("hs");
   hs->SetTitle("");
   
   TH1F *hs_stack_4 = new TH1F("hs_stack_4","",20,0,0.1);
   hs_stack_4->SetMinimum(0);
   hs_stack_4->SetMaximum(31.5);
   hs_stack_4->SetDirectory(0);
   hs_stack_4->SetStats(0);
   hs_stack_4->SetLineWidth(2);
   hs_stack_4->SetMarkerSize(1.2);
   hs_stack_4->GetXaxis()->SetTitle("r_{0} / mm");
   hs_stack_4->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   hs_stack_4->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   hs_stack_4->GetXaxis()->SetLabelColor(ci);
   hs_stack_4->GetXaxis()->SetLabelFont(42);
   hs_stack_4->GetXaxis()->SetLabelOffset(0.0015);
   hs_stack_4->GetXaxis()->SetLabelSize(0.06);
   hs_stack_4->GetXaxis()->SetTitleSize(0.07);

   ci = TColor::GetColor("#212121");
   hs_stack_4->GetXaxis()->SetTitleColor(ci);
   hs_stack_4->GetXaxis()->SetTitleFont(42);
   hs_stack_4->GetYaxis()->SetTitle("Entries");
   hs_stack_4->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   hs_stack_4->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   hs_stack_4->GetYaxis()->SetLabelColor(ci);
   hs_stack_4->GetYaxis()->SetLabelFont(42);
   hs_stack_4->GetYaxis()->SetLabelOffset(0.02);
   hs_stack_4->GetYaxis()->SetLabelSize(0.06);
   hs_stack_4->GetYaxis()->SetTitleSize(0.07);
   hs_stack_4->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   hs_stack_4->GetYaxis()->SetTitleColor(ci);
   hs_stack_4->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   hs_stack_4->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   hs_stack_4->GetZaxis()->SetLabelColor(ci);
   hs_stack_4->GetZaxis()->SetLabelFont(42);
   hs_stack_4->GetZaxis()->SetLabelOffset(0.02);
   hs_stack_4->GetZaxis()->SetLabelSize(0.06);
   hs_stack_4->GetZaxis()->SetTitleSize(0.07);
   hs_stack_4->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   hs_stack_4->GetZaxis()->SetTitleColor(ci);
   hs_stack_4->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_4);
   
   
   TH1F *0 = new TH1F("0","",20,0,0.1);
   0->SetBinContent(1,3);
   0->SetBinContent(2,8);
   0->SetBinContent(5,1);
   0->SetBinContent(7,1);
   0->SetBinContent(8,1);
   0->SetBinContent(14,1);
   0->SetBinContent(21,2);
   0->SetEntries(17);
   0->SetStats(0);

   ci = TColor::GetColor("#396ab1");
   0->SetFillColor(ci);

   ci = TColor::GetColor("#7293cb");
   0->SetLineColor(ci);
   0->SetLineWidth(2);
   0->SetMarkerSize(1.2);
   0->GetXaxis()->SetTitle("r_{0} / mm");
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
   hs->Add(0,"");
   
   TH1F *1 = new TH1F("1","",20,0,0.1);
   1->SetBinContent(1,17);
   1->SetBinContent(2,22);
   1->SetBinContent(3,16);
   1->SetBinContent(4,15);
   1->SetBinContent(5,11);
   1->SetBinContent(6,10);
   1->SetBinContent(7,7);
   1->SetBinContent(8,7);
   1->SetBinContent(9,9);
   1->SetBinContent(10,9);
   1->SetBinContent(11,6);
   1->SetBinContent(12,6);
   1->SetBinContent(13,4);
   1->SetBinContent(14,3);
   1->SetBinContent(15,3);
   1->SetBinContent(16,3);
   1->SetBinContent(17,5);
   1->SetBinContent(18,5);
   1->SetBinContent(19,3);
   1->SetBinContent(20,2);
   1->SetBinContent(21,124);
   1->SetEntries(287);
   1->SetStats(0);

   ci = TColor::GetColor("#da7c30");
   1->SetFillColor(ci);

   ci = TColor::GetColor("#e1974c");
   1->SetLineColor(ci);
   1->SetLineWidth(2);
   1->SetMarkerSize(1.2);
   1->GetXaxis()->SetTitle("r_{0} / mm");
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
   hs->Add(1,"");
   hs->Draw("");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
