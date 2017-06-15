{
//=========Macro generated from canvas: canvas1/
//=========  (Thu Jun 15 10:28:19 2017) by ROOT version5.34/05
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
   
   TH1F *0 = new TH1F("0","background",50,0,200);
   0->SetBinContent(1,0.3214936);
   0->SetBinContent(2,0.003874106);
   0->SetBinContent(3,0.01294783);
   0->SetBinContent(4,0.01711116);
   0->SetBinContent(5,0.01725738);
   0->SetBinContent(6,0.01679515);
   0->SetBinContent(7,0.01660288);
   0->SetBinContent(8,0.01668178);
   0->SetBinContent(9,0.01684797);
   0->SetBinContent(10,0.01691652);
   0->SetBinContent(11,0.01726127);
   0->SetBinContent(12,0.01764168);
   0->SetBinContent(13,0.01833987);
   0->SetBinContent(14,0.01937294);
   0->SetBinContent(15,0.02065456);
   0->SetBinContent(16,0.02207495);
   0->SetBinContent(17,0.02362553);
   0->SetBinContent(18,0.02530403);
   0->SetBinContent(19,0.02722166);
   0->SetBinContent(20,0.02876149);
   0->SetBinContent(21,0.02856877);
   0->SetBinContent(22,0.02678814);
   0->SetBinContent(23,0.02473993);
   0->SetBinContent(24,0.02233375);
   0->SetBinContent(25,0.02028437);
   0->SetBinContent(26,0.01914659);
   0->SetBinContent(27,0.01877472);
   0->SetBinContent(28,0.01846927);
   0->SetBinContent(29,0.01819685);
   0->SetBinContent(30,0.01762476);
   0->SetBinContent(31,0.01665348);
   0->SetBinContent(32,0.01523481);
   0->SetBinContent(33,0.01319366);
   0->SetBinContent(34,0.01104026);
   0->SetBinContent(35,0.009102866);
   0->SetBinContent(36,0.007382795);
   0->SetBinContent(37,0.00596413);
   0->SetBinContent(38,0.004810726);
   0->SetBinContent(39,0.003917749);
   0->SetBinContent(40,0.003283965);
   0->SetBinContent(41,0.00280705);
   0->SetBinContent(42,0.002439661);
   0->SetBinContent(43,0.002161431);
   0->SetBinContent(44,0.001922308);
   0->SetBinContent(45,0.001732893);
   0->SetBinContent(46,0.001556349);
   0->SetBinContent(47,0.001435332);
   0->SetBinContent(48,0.00130608);
   0->SetBinContent(49,0.001218252);
   0->SetBinContent(50,0.001122682);
   0->SetBinContent(51,0.02044602);
   0->SetMinimum(0);
   0->SetMaximum(0.1);
   0->SetEntries(2.069284e+07);
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
