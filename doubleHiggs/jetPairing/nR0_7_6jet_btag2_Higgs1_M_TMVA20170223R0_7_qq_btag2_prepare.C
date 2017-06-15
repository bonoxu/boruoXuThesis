{
//=========Macro generated from canvas: canvas1/
//=========  (Thu Jun 15 10:28:44 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-43.58975,-0.02432433,212.8205,0.1108108);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetTickx(1);
   canvas1->SetTicky(1);
   canvas1->SetLeftMargin(0.17);
   canvas1->SetRightMargin(0.05);
   canvas1->SetTopMargin(0.08);
   canvas1->SetBottomMargin(0.18);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,200);
   0->SetBinContent(1,0.0109206);
   0->SetBinContent(2,3.402055e-05);
   0->SetBinContent(3,0.0005103083);
   0->SetBinContent(4,0.001530925);
   0->SetBinContent(5,0.00187113);
   0->SetBinContent(6,0.002653603);
   0->SetBinContent(7,0.004456692);
   0->SetBinContent(8,0.004728856);
   0->SetBinContent(9,0.005885555);
   0->SetBinContent(10,0.006634007);
   0->SetBinContent(11,0.006395863);
   0->SetBinContent(12,0.007620603);
   0->SetBinContent(13,0.008403076);
   0->SetBinContent(14,0.00864122);
   0->SetBinContent(15,0.01027421);
   0->SetBinContent(16,0.01173709);
   0->SetBinContent(17,0.01319997);
   0->SetBinContent(18,0.0147309);
   0->SetBinContent(19,0.01779275);
   0->SetBinContent(20,0.02167109);
   0->SetBinContent(21,0.02684221);
   0->SetBinContent(22,0.03017623);
   0->SetBinContent(23,0.03565354);
   0->SetBinContent(24,0.04381847);
   0->SetBinContent(25,0.04932979);
   0->SetBinContent(26,0.05756277);
   0->SetBinContent(27,0.06385657);
   0->SetBinContent(28,0.069538);
   0->SetBinContent(29,0.07967612);
   0->SetBinContent(30,0.08273797);
   0->SetBinContent(31,0.08705858);
   0->SetBinContent(32,0.0768184);
   0->SetBinContent(33,0.05154113);
   0->SetBinContent(34,0.02983602);
   0->SetBinContent(35,0.01752058);
   0->SetBinContent(36,0.01030823);
   0->SetBinContent(37,0.006736069);
   0->SetBinContent(38,0.004558754);
   0->SetBinContent(39,0.003368034);
   0->SetBinContent(40,0.002653603);
   0->SetBinContent(41,0.001803089);
   0->SetBinContent(42,0.00183711);
   0->SetBinContent(43,0.00122474);
   0->SetBinContent(44,0.001190719);
   0->SetBinContent(45,0.001020617);
   0->SetBinContent(46,0.0009525754);
   0->SetBinContent(47,0.0008505137);
   0->SetBinContent(48,0.0007484521);
   0->SetBinContent(49,0.0005443288);
   0->SetBinContent(50,0.0005443288);
   0->SetBinContent(51,0.009865959);
   0->SetMinimum(0);
   0->SetMaximum(0.1);
   0->SetEntries(29684);
   0->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#68bae7");
   0->SetFillColor(ci);
   0->SetFillStyle(0);

   ci = TColor::GetColor("#68bae7");
   0->SetLineColor(ci);
   0->SetLineWidth(5);
   0->GetXaxis()->SetTitle("M_{H#rightarrowbb} / GeV");
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
   0->GetYaxis()->SetTitle("Normalisecd entries");
   0->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   0->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   0->GetYaxis()->SetLabelColor(ci);
   0->GetYaxis()->SetLabelFont(42);
   0->GetYaxis()->SetLabelOffset(0.02);
   0->GetYaxis()->SetLabelSize(0.06);
   0->GetYaxis()->SetTitleSize(0.07);
   0->GetYaxis()->SetTitleOffset(1.3);

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
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
