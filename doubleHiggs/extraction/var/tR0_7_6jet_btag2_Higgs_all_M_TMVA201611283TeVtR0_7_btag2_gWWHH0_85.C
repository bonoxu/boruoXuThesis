{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Dec  9 16:27:07 2016) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,1600,900);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-435.8975,-0.07297298,2128.205,0.3324324);
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
   
   TH1F *0 = new TH1F("0","g_{WWHH} = 0.85, g_{HHH} = 0.4",20,0,2000);
   0->SetBinContent(2,0.03001277);
   0->SetBinContent(3,0.1875266);
   0->SetBinContent(4,0.2068966);
   0->SetBinContent(5,0.1560238);
   0->SetBinContent(6,0.1234568);
   0->SetBinContent(7,0.08301405);
   0->SetBinContent(8,0.06555981);
   0->SetBinContent(9,0.0440613);
   0->SetBinContent(10,0.03171562);
   0->SetBinContent(11,0.02128565);
   0->SetBinContent(12,0.01234568);
   0->SetBinContent(13,0.01213282);
   0->SetBinContent(14,0.007662835);
   0->SetBinContent(15,0.006598553);
   0->SetBinContent(16,0.004044274);
   0->SetBinContent(17,0.002767135);
   0->SetBinContent(18,0.001915709);
   0->SetBinContent(19,0.002128565);
   0->SetBinContent(20,0.0008514262);
   0->SetBinContent(21,0.002341422);
   0->SetMinimum(0);
   0->SetMaximum(0.3);
   0->SetEntries(4709);
   0->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#68bae7");
   0->SetFillColor(ci);
   0->SetFillStyle(0);

   ci = TColor::GetColor("#68bae7");
   0->SetLineColor(ci);
   0->SetLineWidth(5);
   0->GetXaxis()->SetTitle("M_{HH} / GeV");
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
   
   TH1F *1 = new TH1F("1","g_{WWHH} = 0.85, g_{HHH} = 0.8",20,0,2000);
   1->SetBinContent(2,0.02340563);
   1->SetBinContent(3,0.1430105);
   1->SetBinContent(4,0.1885334);
   1->SetBinContent(5,0.1672751);
   1->SetBinContent(6,0.1329182);
   1->SetBinContent(7,0.09233412);
   1->SetBinContent(8,0.07279365);
   1->SetBinContent(9,0.0478849);
   1->SetBinContent(10,0.03865149);
   1->SetBinContent(11,0.02727078);
   1->SetBinContent(12,0.0203994);
   1->SetBinContent(13,0.01653425);
   1->SetBinContent(14,0.009448143);
   1->SetBinContent(15,0.006012454);
   1->SetBinContent(16,0.004938802);
   1->SetBinContent(17,0.002791497);
   1->SetBinContent(18,0.003006227);
   1->SetBinContent(19,0.001503114);
   1->SetBinContent(20,0.001288383);
   1->SetBinContent(21,0.002576766);
   1->SetMinimum(0);
   1->SetMaximum(0.3);
   1->SetEntries(4669);
   1->SetStats(0);

   ci = TColor::GetColor("#e69f7a");
   1->SetFillColor(ci);
   1->SetFillStyle(0);

   ci = TColor::GetColor("#e69f7a");
   1->SetLineColor(ci);
   1->SetLineWidth(5);
   1->GetXaxis()->SetTitle("M_{HH} / GeV");
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
   
   TH1F *2 = new TH1F("2","g_{WWHH} = 0.85, g_{HHH} = 1.2",20,0,2000);
   2->SetBinContent(2,0.02011246);
   2->SetBinContent(3,0.1107266);
   2->SetBinContent(4,0.1803633);
   2->SetBinContent(5,0.1747405);
   2->SetBinContent(6,0.1392734);
   2->SetBinContent(7,0.09796713);
   2->SetBinContent(8,0.07915225);
   2->SetBinContent(9,0.05493079);
   2->SetBinContent(10,0.04325259);
   2->SetBinContent(11,0.03049308);
   2->SetBinContent(12,0.02097751);
   2->SetBinContent(13,0.01427336);
   2->SetBinContent(14,0.009731834);
   2->SetBinContent(15,0.006704152);
   2->SetBinContent(16,0.005406574);
   2->SetBinContent(17,0.004325259);
   2->SetBinContent(18,0.003027682);
   2->SetBinContent(19,0.003243945);
   2->SetBinContent(20,0.001297578);
   2->SetBinContent(21,0.003243945);
   2->SetMinimum(0);
   2->SetMaximum(0.3);
   2->SetEntries(4639);
   2->SetStats(0);

   ci = TColor::GetColor("#71d5b4");
   2->SetFillColor(ci);
   2->SetFillStyle(0);

   ci = TColor::GetColor("#71d5b4");
   2->SetLineColor(ci);
   2->SetLineWidth(5);
   2->GetXaxis()->SetTitle("M_{HH} / GeV");
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
   
   TH1F *3 = new TH1F("3","g_{WWHH} = 0.85, g_{HHH} = 1.6",20,0,2000);
   3->SetBinContent(2,0.01860986);
   3->SetBinContent(3,0.1013453);
   3->SetBinContent(4,0.1616592);
   3->SetBinContent(5,0.1632287);
   3->SetBinContent(6,0.1381166);
   3->SetBinContent(7,0.1011211);
   3->SetBinContent(8,0.08206278);
   3->SetBinContent(9,0.06771301);
   3->SetBinContent(10,0.0470852);
   3->SetBinContent(11,0.03206278);
   3->SetBinContent(12,0.02286996);
   3->SetBinContent(13,0.0206278);
   3->SetBinContent(14,0.01434978);
   3->SetBinContent(15,0.009641255);
   3->SetBinContent(16,0.005829596);
   3->SetBinContent(17,0.003811659);
   3->SetBinContent(18,0.005381166);
   3->SetBinContent(19,0.002690583);
   3->SetBinContent(20,0.001793722);
   3->SetBinContent(21,0.002242153);
   3->SetMinimum(0);
   3->SetMaximum(0.3);
   3->SetEntries(4470);
   3->SetStats(0);

   ci = TColor::GetColor("#d69ed5");
   3->SetFillColor(ci);
   3->SetFillStyle(0);

   ci = TColor::GetColor("#d69ed5");
   3->SetLineColor(ci);
   3->SetLineWidth(5);
   3->GetXaxis()->SetTitle("M_{HH} / GeV");
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
   TLegendEntry *entry=leg->AddEntry("3","g_{WWHH} = 0.85, g_{HHH} = 1.6","f");

   ci = TColor::GetColor("#d69ed5");
   entry->SetFillColor(ci);

   ci = TColor::GetColor("#d69ed5");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("2","g_{WWHH} = 0.85, g_{HHH} = 1.2","f");

   ci = TColor::GetColor("#71d5b4");
   entry->SetFillColor(ci);

   ci = TColor::GetColor("#71d5b4");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("1","g_{WWHH} = 0.85, g_{HHH} = 0.8","f");

   ci = TColor::GetColor("#e69f7a");
   entry->SetFillColor(ci);

   ci = TColor::GetColor("#e69f7a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("0","g_{WWHH} = 0.85, g_{HHH} = 0.4","f");

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
