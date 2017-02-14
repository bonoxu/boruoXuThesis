{
//=========Macro generated from canvas: canvas1/
//=========  (Tue Nov  1 12:05:57 2016) by ROOT version5.34/05
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
   0->SetBinContent(1,0.4324889);
   0->SetBinContent(2,0.4209175);
   0->SetBinContent(3,0.1257324);
   0->SetBinContent(4,0.01883212);
   0->SetBinContent(5,0.001886275);
   0->SetBinContent(6,0.0001038315);
   0->SetBinContent(7,3.89368e-05);
   0->SetBinContent(8,8.652622e-06);
   0->SetMinimum(0);
   0->SetMaximum(0);
   0->SetEntries(231351);
   0->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#7293cb");
   0->SetFillColor(ci);
   0->SetFillStyle(3001);

   ci = TColor::GetColor("#7293cb");
   0->SetLineColor(ci);
   0->GetXaxis()->SetTitle("Number of photons");
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
   1->SetBinContent(1,0.8881291);
   1->SetBinContent(2,0.1050364);
   1->SetBinContent(3,0.006447786);
   1->SetBinContent(4,0.0003516156);
   1->SetBinContent(5,3.516155e-05);
   1->SetMinimum(0);
   1->SetMaximum(0);
   1->SetEntries(227791);
   1->SetStats(0);

   ci = TColor::GetColor("#e1974c");
   1->SetFillColor(ci);
   1->SetFillStyle(3002);

   ci = TColor::GetColor("#e1974c");
   1->SetLineColor(ci);
   1->GetXaxis()->SetTitle("Number of photons");
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
   2->SetBinContent(1,0.8580649);
   2->SetBinContent(2,0.1098823);
   2->SetBinContent(3,0.01583591);
   2->SetBinContent(4,0.005870916);
   2->SetBinContent(5,0.00450841);
   2->SetBinContent(6,0.003433088);
   2->SetBinContent(7,0.002404495);
   2->SetBinContent(8,0.005857558);
   2->SetMinimum(0);
   2->SetMaximum(0);
   2->SetEntries(150777);
   2->SetStats(0);

   ci = TColor::GetColor("#83ba5b");
   2->SetFillColor(ci);
   2->SetFillStyle(3003);

   ci = TColor::GetColor("#83ba5b");
   2->SetLineColor(ci);
   2->GetXaxis()->SetTitle("Number of photons");
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
   
   TH1F *3 = new TH1F("3","",7,-0.5,6.5);
   3->SetBinContent(1,0.0009390852);
   3->SetBinContent(2,0.1324015);
   3->SetBinContent(3,0.7450749);
   3->SetBinContent(4,0.09965485);
   3->SetBinContent(5,0.01411807);
   3->SetBinContent(6,0.004883863);
   3->SetBinContent(7,0.002927746);
   3->SetBinContent(8,0.006151048);
   3->SetMinimum(0);
   3->SetMaximum(0);
   3->SetEntries(309811);
   3->SetStats(0);

   ci = TColor::GetColor("#d35e60");
   3->SetFillColor(ci);
   3->SetFillStyle(3004);

   ci = TColor::GetColor("#d35e60");
   3->SetLineColor(ci);
   3->GetXaxis()->SetTitle("Number of photons");
   3->GetXaxis()->SetNdivisions(506);
   3->GetXaxis()->SetLabelFont(132);
   3->GetXaxis()->SetLabelOffset(0.015);
   3->GetXaxis()->SetLabelSize(0.05);
   3->GetXaxis()->SetTitleSize(0.05);
   3->GetXaxis()->SetTitleFont(132);
   3->GetYaxis()->SetTitle("Normalised entries");
   3->GetYaxis()->SetNdivisions(506);
   3->GetYaxis()->SetLabelFont(132);
   3->GetYaxis()->SetLabelOffset(0.015);
   3->GetYaxis()->SetLabelSize(0.05);
   3->GetYaxis()->SetTitleSize(0.05);
   3->GetYaxis()->SetTitleOffset(1.3);
   3->GetYaxis()->SetTitleFont(132);
   3->GetZaxis()->SetLabelFont(132);
   3->GetZaxis()->SetLabelOffset(0.015);
   3->GetZaxis()->SetLabelSize(0.05);
   3->GetZaxis()->SetTitleSize(0.05);
   3->GetZaxis()->SetTitleOffset(1.1);
   3->GetZaxis()->SetTitleFont(132);
   3->Draw("same");
   
   TH1F *4 = new TH1F("4","",7,-0.5,6.5);
   4->SetBinContent(1,0.0001354372);
   4->SetBinContent(2,0.02837482);
   4->SetBinContent(3,0.05171682);
   4->SetBinContent(4,0.2235561);
   4->SetBinContent(5,0.6082846);
   4->SetBinContent(6,0.07733437);
   4->SetBinContent(7,0.01059788);
   4->SetBinContent(8,0.01121863);
   4->SetMinimum(0);
   4->SetMaximum(0);
   4->SetEntries(89589);
   4->SetStats(0);

   ci = TColor::GetColor("#808585");
   4->SetFillColor(ci);
   4->SetFillStyle(3005);

   ci = TColor::GetColor("#808585");
   4->SetLineColor(ci);
   4->GetXaxis()->SetTitle("Number of photons");
   4->GetXaxis()->SetNdivisions(506);
   4->GetXaxis()->SetLabelFont(132);
   4->GetXaxis()->SetLabelOffset(0.015);
   4->GetXaxis()->SetLabelSize(0.05);
   4->GetXaxis()->SetTitleSize(0.05);
   4->GetXaxis()->SetTitleFont(132);
   4->GetYaxis()->SetTitle("Normalised entries");
   4->GetYaxis()->SetNdivisions(506);
   4->GetYaxis()->SetLabelFont(132);
   4->GetYaxis()->SetLabelOffset(0.015);
   4->GetYaxis()->SetLabelSize(0.05);
   4->GetYaxis()->SetTitleSize(0.05);
   4->GetYaxis()->SetTitleOffset(1.3);
   4->GetYaxis()->SetTitleFont(132);
   4->GetZaxis()->SetLabelFont(132);
   4->GetZaxis()->SetLabelOffset(0.015);
   4->GetZaxis()->SetLabelSize(0.05);
   4->GetZaxis()->SetTitleSize(0.05);
   4->GetZaxis()->SetTitleOffset(1.1);
   4->GetZaxis()->SetTitleFont(132);
   4->Draw("same");
   
   TH1F *5 = new TH1F("5","",7,-0.5,6.5);
   5->SetBinContent(1,0.7728474);
   5->SetBinContent(2,0.1510938);
   5->SetBinContent(3,0.03780752);
   5->SetBinContent(4,0.01623652);
   5->SetBinContent(5,0.0104077);
   5->SetBinContent(6,0.007100822);
   5->SetBinContent(7,0.004506198);
   5->SetBinContent(8,0.008554393);
   5->SetMinimum(0);
   5->SetMaximum(0);
   5->SetEntries(138860);
   5->SetStats(0);

   ci = TColor::GetColor("#9067a7");
   5->SetFillColor(ci);
   5->SetFillStyle(3006);

   ci = TColor::GetColor("#9067a7");
   5->SetLineColor(ci);
   5->GetXaxis()->SetTitle("Number of photons");
   5->GetXaxis()->SetNdivisions(506);
   5->GetXaxis()->SetLabelFont(132);
   5->GetXaxis()->SetLabelOffset(0.015);
   5->GetXaxis()->SetLabelSize(0.05);
   5->GetXaxis()->SetTitleSize(0.05);
   5->GetXaxis()->SetTitleFont(132);
   5->GetYaxis()->SetTitle("Normalised entries");
   5->GetYaxis()->SetNdivisions(506);
   5->GetYaxis()->SetLabelFont(132);
   5->GetYaxis()->SetLabelOffset(0.015);
   5->GetYaxis()->SetLabelSize(0.05);
   5->GetYaxis()->SetTitleSize(0.05);
   5->GetYaxis()->SetTitleOffset(1.3);
   5->GetYaxis()->SetTitleFont(132);
   5->GetZaxis()->SetLabelFont(132);
   5->GetZaxis()->SetLabelOffset(0.015);
   5->GetZaxis()->SetLabelSize(0.05);
   5->GetZaxis()->SetTitleSize(0.05);
   5->GetZaxis()->SetTitleOffset(1.1);
   5->GetZaxis()->SetTitleFont(132);
   5->Draw("same");
   
   TH1F *6 = new TH1F("6","",7,-0.5,6.5);
   6->SetBinContent(1,0.001165572);
   6->SetBinContent(2,0.1030722);
   6->SetBinContent(3,0.7052543);
   6->SetBinContent(4,0.1384842);
   6->SetBinContent(5,0.03084938);
   6->SetBinContent(6,0.01328746);
   6->SetBinContent(7,0.007887005);
   6->SetBinContent(8,0.01367598);
   6->SetMinimum(0);
   6->SetMaximum(0);
   6->SetEntries(52165);
   6->SetStats(0);

   ci = TColor::GetColor("#ab6857");
   6->SetFillColor(ci);
   6->SetFillStyle(3007);

   ci = TColor::GetColor("#ab6857");
   6->SetLineColor(ci);
   6->GetXaxis()->SetTitle("Number of photons");
   6->GetXaxis()->SetNdivisions(506);
   6->GetXaxis()->SetLabelFont(132);
   6->GetXaxis()->SetLabelOffset(0.015);
   6->GetXaxis()->SetLabelSize(0.05);
   6->GetXaxis()->SetTitleSize(0.05);
   6->GetXaxis()->SetTitleFont(132);
   6->GetYaxis()->SetTitle("Normalised entries");
   6->GetYaxis()->SetNdivisions(506);
   6->GetYaxis()->SetLabelFont(132);
   6->GetYaxis()->SetLabelOffset(0.015);
   6->GetYaxis()->SetLabelSize(0.05);
   6->GetYaxis()->SetTitleSize(0.05);
   6->GetYaxis()->SetTitleOffset(1.3);
   6->GetYaxis()->SetTitleFont(132);
   6->GetZaxis()->SetLabelFont(132);
   6->GetZaxis()->SetLabelOffset(0.015);
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
   entry=leg->AddEntry("3","#rho(#pi^{-}#pi^{0})","f");

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
   entry=leg->AddEntry("4","a_{1}(#pi^{-}#pi^{0}#pi^{0})","f");

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
   entry=leg->AddEntry("5","a_{1}(#pi^{-}#pi^{+}#pi^{-})","f");

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
