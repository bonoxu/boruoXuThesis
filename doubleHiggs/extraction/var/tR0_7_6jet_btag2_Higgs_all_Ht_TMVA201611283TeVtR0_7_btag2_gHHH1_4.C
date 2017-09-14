{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Dec  9 16:27:06 2016) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,1600,900);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-326.9231,-0.07297298,1596.154,0.3324324);
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
   
   TH1F *0 = new TH1F("0","g_{HHH} = 1.4, g_{WWHH} = 0.85",30,0,1500);
   0->SetBinContent(1,0.01754386);
   0->SetBinContent(2,0.09746589);
   0->SetBinContent(3,0.1791206);
   0->SetBinContent(4,0.1604938);
   0->SetBinContent(5,0.1290881);
   0->SetBinContent(6,0.08815248);
   0->SetBinContent(7,0.06541044);
   0->SetBinContent(8,0.04396794);
   0->SetBinContent(9,0.03660386);
   0->SetBinContent(10,0.02967295);
   0->SetBinContent(11,0.02209227);
   0->SetBinContent(12,0.01841022);
   0->SetBinContent(13,0.01927659);
   0->SetBinContent(14,0.01537795);
   0->SetBinContent(15,0.009529998);
   0->SetBinContent(16,0.008880225);
   0->SetBinContent(17,0.009313407);
   0->SetBinContent(18,0.008013862);
   0->SetBinContent(19,0.005414771);
   0->SetBinContent(20,0.007364089);
   0->SetBinContent(21,0.004764999);
   0->SetBinContent(22,0.002815681);
   0->SetBinContent(23,0.002815681);
   0->SetBinContent(24,0.00259909);
   0->SetBinContent(25,0.003248863);
   0->SetBinContent(26,0.00259909);
   0->SetBinContent(27,0.002382499);
   0->SetBinContent(28,0.003682045);
   0->SetBinContent(29,0.002165909);
   0->SetBinContent(30,0.001732727);
   0->SetBinContent(31,0.00758068);
   0->SetMinimum(0);
   0->SetMaximum(0.3);
   0->SetEntries(4652);
   0->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#68bae7");
   0->SetFillColor(ci);
   0->SetFillStyle(0);

   ci = TColor::GetColor("#68bae7");
   0->SetLineColor(ci);
   0->SetLineWidth(5);
   0->GetXaxis()->SetTitle("H_{T} / GeV");
   0->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   0->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   0->GetXaxis()->SetLabelColor(ci);
   0->GetXaxis()->SetLabelFont(42);
   0->GetXaxis()->SetLabelOffset(0.0015);
   0->GetXaxis()->SetLabelSize(0.06);
   0->GetXaxis()->SetTitleSize(0.07);
   0->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   0->GetXaxis()->SetTitleColor(ci);
   0->GetXaxis()->SetTitleFont(42);
   0->GetYaxis()->SetTitle("Number of events");
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
   
   TH1F *1 = new TH1F("1","g_{HHH} = 1.4, g_{WWHH} = 0.95",30,0,1500);
   1->SetBinContent(1,0.01769911);
   1->SetBinContent(2,0.1396503);
   1->SetBinContent(3,0.2102309);
   1->SetBinContent(4,0.1873516);
   1->SetBinContent(5,0.1398662);
   1->SetBinContent(6,0.09238075);
   1->SetBinContent(7,0.06281027);
   1->SetBinContent(8,0.03949925);
   1->SetBinContent(9,0.0256853);
   1->SetBinContent(10,0.0211526);
   1->SetBinContent(11,0.01338226);
   1->SetBinContent(12,0.01316641);
   1->SetBinContent(13,0.005396072);
   1->SetBinContent(14,0.006691129);
   1->SetBinContent(15,0.005827758);
   1->SetBinContent(16,0.002590114);
   1->SetBinContent(17,0.001942586);
   1->SetBinContent(18,0.003237643);
   1->SetBinContent(19,0.001942586);
   1->SetBinContent(20,0.001295057);
   1->SetBinContent(21,0.001079214);
   1->SetBinContent(22,0.001079214);
   1->SetBinContent(23,0.0008633715);
   1->SetBinContent(24,0.001079214);
   1->SetBinContent(25,0.001079214);
   1->SetBinContent(26,0.0008633715);
   1->SetBinContent(27,0.0002158429);
   1->SetBinContent(28,0.0008633715);
   1->SetBinContent(29,0.0004316857);
   1->SetBinContent(30,0.0006475286);
   1->SetBinContent(31,0.005396072);
   1->SetMinimum(0);
   1->SetMaximum(0.3);
   1->SetEntries(4658);
   1->SetStats(0);

   ci = TColor::GetColor("#e69f7a");
   1->SetFillColor(ci);
   1->SetFillStyle(0);

   ci = TColor::GetColor("#e69f7a");
   1->SetLineColor(ci);
   1->SetLineWidth(5);
   1->GetXaxis()->SetTitle("H_{T} / GeV");
   1->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   1->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   1->GetXaxis()->SetLabelColor(ci);
   1->GetXaxis()->SetLabelFont(42);
   1->GetXaxis()->SetLabelOffset(0.0015);
   1->GetXaxis()->SetLabelSize(0.06);
   1->GetXaxis()->SetTitleSize(0.07);
   1->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   1->GetXaxis()->SetTitleColor(ci);
   1->GetXaxis()->SetTitleFont(42);
   1->GetYaxis()->SetTitle("Number of events");
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
   
   TH1F *2 = new TH1F("2","g_{HHH} = 1.4, g_{WWHH} = 1.05",30,0,1500);
   2->SetBinContent(1,0.01939655);
   2->SetBinContent(2,0.143319);
   2->SetBinContent(3,0.2338362);
   2->SetBinContent(4,0.2010776);
   2->SetBinContent(5,0.1364224);
   2->SetBinContent(6,0.08297414);
   2->SetBinContent(7,0.0549569);
   2->SetBinContent(8,0.03383621);
   2->SetBinContent(9,0.02306034);
   2->SetBinContent(10,0.01594828);
   2->SetBinContent(11,0.008189655);
   2->SetBinContent(12,0.007327586);
   2->SetBinContent(13,0.00625);
   2->SetBinContent(14,0.006681034);
   2->SetBinContent(15,0.004310345);
   2->SetBinContent(16,0.003017241);
   2->SetBinContent(17,0.00237069);
   2->SetBinContent(18,0.00237069);
   2->SetBinContent(19,0.002586207);
   2->SetBinContent(20,0.002155172);
   2->SetBinContent(21,0.001508621);
   2->SetBinContent(22,0.001508621);
   2->SetBinContent(23,0.001508621);
   2->SetBinContent(24,0.001293103);
   2->SetBinContent(25,0.0006465517);
   2->SetBinContent(26,0.001077586);
   2->SetBinContent(27,0.0004310345);
   2->SetBinContent(28,0.0004310345);
   2->SetBinContent(29,0.001077586);
   2->SetBinContent(30,0.0004310345);
   2->SetBinContent(31,0.003232759);
   2->SetMinimum(0);
   2->SetMaximum(0.3);
   2->SetEntries(4655);
   2->SetStats(0);

   ci = TColor::GetColor("#71d5b4");
   2->SetFillColor(ci);
   2->SetFillStyle(0);

   ci = TColor::GetColor("#71d5b4");
   2->SetLineColor(ci);
   2->SetLineWidth(5);
   2->GetXaxis()->SetTitle("H_{T} / GeV");
   2->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   2->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   2->GetXaxis()->SetLabelColor(ci);
   2->GetXaxis()->SetLabelFont(42);
   2->GetXaxis()->SetLabelOffset(0.0015);
   2->GetXaxis()->SetLabelSize(0.06);
   2->GetXaxis()->SetTitleSize(0.07);
   2->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   2->GetXaxis()->SetTitleColor(ci);
   2->GetXaxis()->SetTitleFont(42);
   2->GetYaxis()->SetTitle("Number of events");
   2->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   2->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   2->GetYaxis()->SetLabelColor(ci);
   2->GetYaxis()->SetLabelFont(42);
   2->GetYaxis()->SetLabelOffset(0.02);
   2->GetYaxis()->SetLabelSize(0.06);
   2->GetYaxis()->SetTitleSize(0.07);
   2->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   2->GetYaxis()->SetTitleColor(ci);
   2->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   2->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   2->GetZaxis()->SetLabelColor(ci);
   2->GetZaxis()->SetLabelFont(42);
   2->GetZaxis()->SetLabelOffset(0.02);
   2->GetZaxis()->SetLabelSize(0.06);
   2->GetZaxis()->SetTitleSize(0.07);
   2->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   2->GetZaxis()->SetTitleColor(ci);
   2->GetZaxis()->SetTitleFont(42);
   2->Draw("same");
   
   TH1F *3 = new TH1F("3","g_{HHH} = 1.4, g_{WWHH} = 1.15",30,0,1500);
   3->SetBinContent(1,0.01585821);
   3->SetBinContent(2,0.1277985);
   3->SetBinContent(3,0.1870336);
   3->SetBinContent(4,0.1520522);
   3->SetBinContent(5,0.1112407);
   3->SetBinContent(6,0.07462686);
   3->SetBinContent(7,0.04827425);
   3->SetBinContent(8,0.03568097);
   3->SetBinContent(9,0.03031716);
   3->SetBinContent(10,0.02658582);
   3->SetBinContent(11,0.02308769);
   3->SetBinContent(12,0.01982276);
   3->SetBinContent(13,0.01515858);
   3->SetBinContent(14,0.01725746);
   3->SetBinContent(15,0.01445896);
   3->SetBinContent(16,0.01352612);
   3->SetBinContent(17,0.01072761);
   3->SetBinContent(18,0.01166045);
   3->SetBinContent(19,0.007462686);
   3->SetBinContent(20,0.01026119);
   3->SetBinContent(21,0.005830224);
   3->SetBinContent(22,0.005130597);
   3->SetBinContent(23,0.007229478);
   3->SetBinContent(24,0.006529851);
   3->SetBinContent(25,0.005830224);
   3->SetBinContent(26,0.003498134);
   3->SetBinContent(27,0.003264925);
   3->SetBinContent(28,0.003731343);
   3->SetBinContent(29,0.003264925);
   3->SetBinContent(30,0.002798507);
   3->SetBinContent(31,0.01282649);
   3->SetMinimum(0);
   3->SetMaximum(0.3);
   3->SetEntries(4343);
   3->SetStats(0);

   ci = TColor::GetColor("#d69ed5");
   3->SetFillColor(ci);
   3->SetFillStyle(0);

   ci = TColor::GetColor("#d69ed5");
   3->SetLineColor(ci);
   3->SetLineWidth(5);
   3->GetXaxis()->SetTitle("H_{T} / GeV");
   3->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   3->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   3->GetXaxis()->SetLabelColor(ci);
   3->GetXaxis()->SetLabelFont(42);
   3->GetXaxis()->SetLabelOffset(0.0015);
   3->GetXaxis()->SetLabelSize(0.06);
   3->GetXaxis()->SetTitleSize(0.07);
   3->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   3->GetXaxis()->SetTitleColor(ci);
   3->GetXaxis()->SetTitleFont(42);
   3->GetYaxis()->SetTitle("Number of events");
   3->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   3->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   3->GetYaxis()->SetLabelColor(ci);
   3->GetYaxis()->SetLabelFont(42);
   3->GetYaxis()->SetLabelOffset(0.02);
   3->GetYaxis()->SetLabelSize(0.06);
   3->GetYaxis()->SetTitleSize(0.07);
   3->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   3->GetYaxis()->SetTitleColor(ci);
   3->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   3->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   3->GetZaxis()->SetLabelColor(ci);
   3->GetZaxis()->SetLabelFont(42);
   3->GetZaxis()->SetLabelOffset(0.02);
   3->GetZaxis()->SetLabelSize(0.06);
   3->GetZaxis()->SetTitleSize(0.07);
   3->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   3->GetZaxis()->SetTitleColor(ci);
   3->GetZaxis()->SetTitleFont(42);
   3->Draw("same");
   
   TLegend *leg = new TLegend(0.65,0.35,0.98,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);

   ci = TColor::GetColor("#616161");
   leg->SetTextColor(ci);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(10);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("3","g_{HHH} = 1.4, g_{WWHH} = 1.15","f");

   ci = TColor::GetColor("#d69ed5");
   entry->SetFillColor(ci);

   ci = TColor::GetColor("#d69ed5");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("2","g_{HHH} = 1.4, g_{WWHH} = 1.05","f");

   ci = TColor::GetColor("#71d5b4");
   entry->SetFillColor(ci);

   ci = TColor::GetColor("#71d5b4");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("1","g_{HHH} = 1.4, g_{WWHH} = 0.95","f");

   ci = TColor::GetColor("#e69f7a");
   entry->SetFillColor(ci);

   ci = TColor::GetColor("#e69f7a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("0","g_{HHH} = 1.4, g_{WWHH} = 0.85","f");

   ci = TColor::GetColor("#68bae7");
   entry->SetFillColor(ci);

   ci = TColor::GetColor("#68bae7");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
