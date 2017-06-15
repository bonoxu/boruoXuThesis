{
//=========Macro generated from canvas: canvas1/
//=========  (Thu Jun 15 10:41:21 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2179487,-0.2432432,1.064103,1.108108);
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
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,1);
   0->SetBinContent(4,3.368818e-05);
   0->SetBinContent(5,0.00037057);
   0->SetBinContent(6,0.0006400755);
   0->SetBinContent(7,0.001886538);
   0->SetBinContent(8,0.00185285);
   0->SetBinContent(9,0.002459237);
   0->SetBinContent(10,0.003570947);
   0->SetBinContent(11,0.00259399);
   0->SetBinContent(12,0.005086916);
   0->SetBinContent(13,0.003503571);
   0->SetBinContent(14,0.004042582);
   0->SetBinContent(15,0.003570947);
   0->SetBinContent(16,0.003267754);
   0->SetBinContent(17,0.004109958);
   0->SetBinContent(18,0.003941517);
   0->SetBinContent(19,0.003907829);
   0->SetBinContent(20,0.003234066);
   0->SetBinContent(21,0.003301442);
   0->SetBinContent(22,0.003200377);
   0->SetBinContent(23,0.004413152);
   0->SetBinContent(24,0.004547905);
   0->SetBinContent(25,0.004008894);
   0->SetBinContent(26,0.003301442);
   0->SetBinContent(27,0.003975206);
   0->SetBinContent(28,0.003537259);
   0->SetBinContent(29,0.0037057);
   0->SetBinContent(30,0.004345776);
   0->SetBinContent(31,0.004278399);
   0->SetBinContent(32,0.004615281);
   0->SetBinContent(33,0.004312087);
   0->SetBinContent(34,0.003638324);
   0->SetBinContent(35,0.004682657);
   0->SetBinContent(36,0.005053227);
   0->SetBinContent(37,0.004750034);
   0->SetBinContent(38,0.005086916);
   0->SetBinContent(39,0.005289045);
   0->SetBinContent(40,0.00555855);
   0->SetBinContent(41,0.006131249);
   0->SetBinContent(42,0.007276647);
   0->SetBinContent(43,0.007714594);
   0->SetBinContent(44,0.009466379);
   0->SetBinContent(45,0.01239725);
   0->SetBinContent(46,0.01579976);
   0->SetBinContent(47,0.02300903);
   0->SetBinContent(48,0.03732651);
   0->SetBinContent(49,0.08317612);
   0->SetBinContent(50,0.6640278);
   0->SetMinimum(0);
   0->SetMaximum(1);
   0->SetEntries(29684);
   0->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#68bae7");
   0->SetFillColor(ci);
   0->SetFillStyle(0);

   ci = TColor::GetColor("#68bae7");
   0->SetLineColor(ci);
   0->SetLineWidth(5);
   0->GetXaxis()->SetTitle("Highest B tag");
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
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
