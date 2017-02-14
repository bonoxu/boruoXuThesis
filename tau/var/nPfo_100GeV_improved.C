{
//=========Macro generated from canvas: canvas1/
//=========  (Wed Oct 19 17:10:19 2016) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
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
   0->SetBinContent(2,0.4190207);
   0->SetBinContent(3,0.4177117);
   0->SetBinContent(4,0.1337972);
   0->SetBinContent(5,0.02450281);
   0->SetBinContent(6,0.004223277);
   0->SetBinContent(7,0.0007442611);
   0->SetBinContent(8,0.0002206825);
   0->SetMinimum(0);
   0->SetMaximum(1);
   0->SetEntries(231351);
   0->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#7293cb");
   0->SetFillColor(ci);
   0->SetFillStyle(3001);

   ci = TColor::GetColor("#7293cb");
   0->SetLineColor(ci);
   0->GetXaxis()->SetTitle("N_{pfo}");
   0->GetXaxis()->SetNdivisions(506);
   0->GetXaxis()->SetLabelFont(132);
   0->GetXaxis()->SetLabelOffset(0.0015);
   0->GetXaxis()->SetLabelSize(0.05);
   0->GetXaxis()->SetTitleSize(0.05);
   0->GetXaxis()->SetTitleFont(132);
   0->GetYaxis()->SetTitle("Normalised entries");
   0->GetYaxis()->SetNdivisions(506);
   0->GetYaxis()->SetLabelFont(132);
   0->GetYaxis()->SetLabelOffset(0.0015);
   0->GetYaxis()->SetLabelSize(0.05);
   0->GetYaxis()->SetTitleSize(0.05);
   0->GetYaxis()->SetTitleOffset(1.3);
   0->GetYaxis()->SetTitleFont(132);
   0->GetZaxis()->SetLabelFont(132);
   0->GetZaxis()->SetLabelOffset(0.0015);
   0->GetZaxis()->SetLabelSize(0.05);
   0->GetZaxis()->SetTitleSize(0.05);
   0->GetZaxis()->SetTitleOffset(1.1);
   0->GetZaxis()->SetTitleFont(132);
   0->Draw("");
   
   TH1F *1 = new TH1F("1","",7,-0.5,6.5);
   1->SetBinContent(2,0.8392373);
   1->SetBinContent(3,0.1448441);
   1->SetBinContent(4,0.01376505);
   1->SetBinContent(5,0.001696449);
   1->SetBinContent(6,0.000377965);
   1->SetBinContent(7,7.910896e-05);
   1->SetBinContent(8,1.757976e-05);
   1->SetMinimum(0);
   1->SetMaximum(1);
   1->SetEntries(227791);
   1->SetStats(0);

   ci = TColor::GetColor("#e1974c");
   1->SetFillColor(ci);
   1->SetFillStyle(3002);

   ci = TColor::GetColor("#e1974c");
   1->SetLineColor(ci);
   1->GetXaxis()->SetTitle("N_{pfo}");
   1->GetXaxis()->SetNdivisions(506);
   1->GetXaxis()->SetLabelFont(132);
   1->GetXaxis()->SetLabelOffset(0.0015);
   1->GetXaxis()->SetLabelSize(0.05);
   1->GetXaxis()->SetTitleSize(0.05);
   1->GetXaxis()->SetTitleFont(132);
   1->GetYaxis()->SetTitle("Normalised entries");
   1->GetYaxis()->SetNdivisions(506);
   1->GetYaxis()->SetLabelFont(132);
   1->GetYaxis()->SetLabelOffset(0.0015);
   1->GetYaxis()->SetLabelSize(0.05);
   1->GetYaxis()->SetTitleSize(0.05);
   1->GetYaxis()->SetTitleOffset(1.3);
   1->GetYaxis()->SetTitleFont(132);
   1->GetZaxis()->SetLabelFont(132);
   1->GetZaxis()->SetLabelOffset(0.0015);
   1->GetZaxis()->SetLabelSize(0.05);
   1->GetZaxis()->SetTitleSize(0.05);
   1->GetZaxis()->SetTitleOffset(1.1);
   1->GetZaxis()->SetTitleFont(132);
   1->Draw("same");
   
   TH1F *2 = new TH1F("2","",7,-0.5,6.5);
   2->SetBinContent(2,0.7586944);
   2->SetBinContent(3,0.1868539);
   2->SetBinContent(4,0.03499054);
   2->SetBinContent(5,0.01021605);
   2->SetBinContent(6,0.005246321);
   2->SetBinContent(7,0.00399883);
   2->SetBinContent(8,0.01597474);
   2->SetMinimum(0);
   2->SetMaximum(1);
   2->SetEntries(150777);
   2->SetStats(0);

   ci = TColor::GetColor("#83ba5b");
   2->SetFillColor(ci);
   2->SetFillStyle(3003);

   ci = TColor::GetColor("#83ba5b");
   2->SetLineColor(ci);
   2->GetXaxis()->SetTitle("N_{pfo}");
   2->GetXaxis()->SetNdivisions(506);
   2->GetXaxis()->SetLabelFont(132);
   2->GetXaxis()->SetLabelOffset(0.0015);
   2->GetXaxis()->SetLabelSize(0.05);
   2->GetXaxis()->SetTitleSize(0.05);
   2->GetXaxis()->SetTitleFont(132);
   2->GetYaxis()->SetTitle("Normalised entries");
   2->GetYaxis()->SetNdivisions(506);
   2->GetYaxis()->SetLabelFont(132);
   2->GetYaxis()->SetLabelOffset(0.0015);
   2->GetYaxis()->SetLabelSize(0.05);
   2->GetYaxis()->SetTitleSize(0.05);
   2->GetYaxis()->SetTitleOffset(1.3);
   2->GetYaxis()->SetTitleFont(132);
   2->GetZaxis()->SetLabelFont(132);
   2->GetZaxis()->SetLabelOffset(0.0015);
   2->GetZaxis()->SetLabelSize(0.05);
   2->GetZaxis()->SetTitleSize(0.05);
   2->GetZaxis()->SetTitleOffset(1.1);
   2->GetZaxis()->SetTitleFont(132);
   2->Draw("same");
   
   TH1F *3 = new TH1F("3","",7,-0.5,6.5);
   3->SetBinContent(2,0.000301749);
   3->SetBinContent(3,0.1099415);
   3->SetBinContent(4,0.6968387);
   3->SetBinContent(5,0.1565525);
   3->SetBinContent(6,0.02808742);
   3->SetBinContent(7,0.008278175);
   3->SetBinContent(8,0.01592961);
   3->SetMinimum(0);
   3->SetMaximum(1);
   3->SetEntries(309811);
   3->SetStats(0);

   ci = TColor::GetColor("#d35e60");
   3->SetFillColor(ci);
   3->SetFillStyle(3004);

   ci = TColor::GetColor("#d35e60");
   3->SetLineColor(ci);
   3->GetXaxis()->SetTitle("N_{pfo}");
   3->GetXaxis()->SetNdivisions(506);
   3->GetXaxis()->SetLabelFont(132);
   3->GetXaxis()->SetLabelOffset(0.0015);
   3->GetXaxis()->SetLabelSize(0.05);
   3->GetXaxis()->SetTitleSize(0.05);
   3->GetXaxis()->SetTitleFont(132);
   3->GetYaxis()->SetTitle("Normalised entries");
   3->GetYaxis()->SetNdivisions(506);
   3->GetYaxis()->SetLabelFont(132);
   3->GetYaxis()->SetLabelOffset(0.0015);
   3->GetYaxis()->SetLabelSize(0.05);
   3->GetYaxis()->SetTitleSize(0.05);
   3->GetYaxis()->SetTitleOffset(1.3);
   3->GetYaxis()->SetTitleFont(132);
   3->GetZaxis()->SetLabelFont(132);
   3->GetZaxis()->SetLabelOffset(0.0015);
   3->GetZaxis()->SetLabelSize(0.05);
   3->GetZaxis()->SetTitleSize(0.05);
   3->GetZaxis()->SetTitleOffset(1.1);
   3->GetZaxis()->SetTitleFont(132);
   3->Draw("same");
   
   TH1F *4 = new TH1F("4","",7,-0.5,6.5);
   4->SetBinContent(2,0.0001631202);
   4->SetBinContent(3,0.0258201);
   4->SetBinContent(4,0.04506965);
   4->SetBinContent(5,0.1975534);
   4->SetBinContent(6,0.6027868);
   4->SetBinContent(7,0.128607);
   4->SetBinContent(8,0.04385782);
   4->SetMinimum(0);
   4->SetMaximum(1);
   4->SetEntries(89589);
   4->SetStats(0);

   ci = TColor::GetColor("#808585");
   4->SetFillColor(ci);
   4->SetFillStyle(3005);

   ci = TColor::GetColor("#808585");
   4->SetLineColor(ci);
   4->GetXaxis()->SetTitle("N_{pfo}");
   4->GetXaxis()->SetNdivisions(506);
   4->GetXaxis()->SetLabelFont(132);
   4->GetXaxis()->SetLabelOffset(0.0015);
   4->GetXaxis()->SetLabelSize(0.05);
   4->GetXaxis()->SetTitleSize(0.05);
   4->GetXaxis()->SetTitleFont(132);
   4->GetYaxis()->SetTitle("Normalised entries");
   4->GetYaxis()->SetNdivisions(506);
   4->GetYaxis()->SetLabelFont(132);
   4->GetYaxis()->SetLabelOffset(0.0015);
   4->GetYaxis()->SetLabelSize(0.05);
   4->GetYaxis()->SetTitleSize(0.05);
   4->GetYaxis()->SetTitleOffset(1.3);
   4->GetYaxis()->SetTitleFont(132);
   4->GetZaxis()->SetLabelFont(132);
   4->GetZaxis()->SetLabelOffset(0.0015);
   4->GetZaxis()->SetLabelSize(0.05);
   4->GetZaxis()->SetTitleSize(0.05);
   4->GetZaxis()->SetTitleOffset(1.1);
   4->GetZaxis()->SetTitleFont(132);
   4->Draw("same");
   
   TH1F *5 = new TH1F("5","",7,-0.5,6.5);
   5->SetBinContent(2,0.0002973132);
   5->SetBinContent(3,0.001661909);
   5->SetBinContent(4,0.6307148);
   5->SetBinContent(5,0.2607101);
   5->SetBinContent(6,0.07735027);
   5->SetBinContent(7,0.02926568);
   5->SetBinContent(8,0.05859984);
   5->SetMinimum(0);
   5->SetMaximum(1);
   5->SetEntries(138860);
   5->SetStats(0);

   ci = TColor::GetColor("#9067a7");
   5->SetFillColor(ci);
   5->SetFillStyle(3006);

   ci = TColor::GetColor("#9067a7");
   5->SetLineColor(ci);
   5->GetXaxis()->SetTitle("N_{pfo}");
   5->GetXaxis()->SetNdivisions(506);
   5->GetXaxis()->SetLabelFont(132);
   5->GetXaxis()->SetLabelOffset(0.0015);
   5->GetXaxis()->SetLabelSize(0.05);
   5->GetXaxis()->SetTitleSize(0.05);
   5->GetXaxis()->SetTitleFont(132);
   5->GetYaxis()->SetTitle("Normalised entries");
   5->GetYaxis()->SetNdivisions(506);
   5->GetYaxis()->SetLabelFont(132);
   5->GetYaxis()->SetLabelOffset(0.0015);
   5->GetYaxis()->SetLabelSize(0.05);
   5->GetYaxis()->SetTitleSize(0.05);
   5->GetYaxis()->SetTitleOffset(1.3);
   5->GetYaxis()->SetTitleFont(132);
   5->GetZaxis()->SetLabelFont(132);
   5->GetZaxis()->SetLabelOffset(0.0015);
   5->GetZaxis()->SetLabelSize(0.05);
   5->GetZaxis()->SetTitleSize(0.05);
   5->GetZaxis()->SetTitleOffset(1.1);
   5->GetZaxis()->SetTitleFont(132);
   5->Draw("same");
   
   TH1F *6 = new TH1F("6","",7,-0.5,6.5);
   6->SetBinContent(2,0.0001982512);
   6->SetBinContent(3,0.0002863628);
   6->SetBinContent(4,0.0004625861);
   6->SetBinContent(5,0.08156765);
   6->SetBinContent(6,0.6559371);
   6->SetBinContent(7,0.261548);
   6->SetBinContent(8,0.1493219);
   6->SetMinimum(0);
   6->SetMaximum(1);
   6->SetEntries(52165);
   6->SetStats(0);

   ci = TColor::GetColor("#ab6857");
   6->SetFillColor(ci);
   6->SetFillStyle(3007);

   ci = TColor::GetColor("#ab6857");
   6->SetLineColor(ci);
   6->GetXaxis()->SetTitle("N_{pfo}");
   6->GetXaxis()->SetNdivisions(506);
   6->GetXaxis()->SetLabelFont(132);
   6->GetXaxis()->SetLabelOffset(0.0015);
   6->GetXaxis()->SetLabelSize(0.05);
   6->GetXaxis()->SetTitleSize(0.05);
   6->GetXaxis()->SetTitleFont(132);
   6->GetYaxis()->SetTitle("Normalised entries");
   6->GetYaxis()->SetNdivisions(506);
   6->GetYaxis()->SetLabelFont(132);
   6->GetYaxis()->SetLabelOffset(0.0015);
   6->GetYaxis()->SetLabelSize(0.05);
   6->GetYaxis()->SetTitleSize(0.05);
   6->GetYaxis()->SetTitleOffset(1.3);
   6->GetYaxis()->SetTitleFont(132);
   6->GetZaxis()->SetLabelFont(132);
   6->GetZaxis()->SetLabelOffset(0.0015);
   6->GetZaxis()->SetLabelSize(0.05);
   6->GetZaxis()->SetTitleSize(0.05);
   6->GetZaxis()->SetTitleOffset(1.1);
   6->GetZaxis()->SetTitleFont(132);
   6->Draw("same");
   
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
   TLegendEntry *entry=leg->AddEntry("0","e^{-}","f");

   ci = TColor::GetColor("#7293cb");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#7293cb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("1","#mu^{-}","f");

   ci = TColor::GetColor("#e1974c");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);

   ci = TColor::GetColor("#e1974c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("2","#pi^{-}","f");

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
   entry=leg->AddEntry("3","#pi^{-}#pi^{0}","f");

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
   entry=leg->AddEntry("4","#pi^{-}#pi^{0}#pi^{0}","f");

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
   entry=leg->AddEntry("5","#pi^{-}#pi^{+}#pi^{-}","f");

   ci = TColor::GetColor("#9067a7");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3006);

   ci = TColor::GetColor("#9067a7");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("6","#pi^{-}#pi^{+}#pi^{-}#pi^{0}","f");

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
