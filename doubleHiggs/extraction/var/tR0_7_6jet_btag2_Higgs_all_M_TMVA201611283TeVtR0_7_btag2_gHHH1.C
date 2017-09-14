{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Dec  9 16:27:04 2016) by ROOT version5.34/05
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
   
   TH1F *0 = new TH1F("0","g_{HHH} = 1, g_{WWHH} = 0.85",20,0,2000);
   0->SetBinContent(2,0.02245476);
   0->SetBinContent(3,0.1242642);
   0->SetBinContent(4,0.1818182);
   0->SetBinContent(5,0.1685197);
   0->SetBinContent(6,0.1417048);
   0->SetBinContent(7,0.09897537);
   0->SetBinContent(8,0.07019839);
   0->SetBinContent(9,0.0560279);
   0->SetBinContent(10,0.03597122);
   0->SetBinContent(11,0.02790495);
   0->SetBinContent(12,0.01983867);
   0->SetBinContent(13,0.01635056);
   0->SetBinContent(14,0.009810333);
   0->SetBinContent(15,0.01046436);
   0->SetBinContent(16,0.0058862);
   0->SetBinContent(17,0.003924133);
   0->SetBinContent(18,0.003052104);
   0->SetBinContent(19,0.001962067);
   0->SetBinContent(20,0.0008720296);
   0->SetBinContent(21,0.003270111);
   0->SetMinimum(0);
   0->SetMaximum(0.3);
   0->SetEntries(4602);
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
   
   TH1F *1 = new TH1F("1","g_{HHH} = 1, g_{WWHH} = 0.95",20,0,2000);
   1->SetBinContent(2,0.02965923);
   1->SetBinContent(3,0.1400926);
   1->SetBinContent(4,0.2065629);
   1->SetBinContent(5,0.1800589);
   1->SetBinContent(6,0.1333614);
   1->SetBinContent(7,0.1026504);
   1->SetBinContent(8,0.07193942);
   1->SetBinContent(9,0.04774926);
   1->SetBinContent(10,0.02776609);
   1->SetBinContent(11,0.01893143);
   1->SetBinContent(12,0.01388305);
   1->SetBinContent(13,0.007993269);
   1->SetBinContent(14,0.006941523);
   1->SetBinContent(15,0.004206983);
   1->SetBinContent(16,0.003155238);
   1->SetBinContent(17,0.001893143);
   1->SetBinContent(18,0.001682793);
   1->SetBinContent(19,0.0006310475);
   1->SetBinContent(20,0.0008413967);
   1->SetBinContent(21,0.002734539);
   1->SetMinimum(0);
   1->SetMaximum(0.3);
   1->SetEntries(4767);
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
   
   TH1F *2 = new TH1F("2","g_{HHH} = 1, g_{WWHH} = 1.05",20,0,2000);
   2->SetBinContent(2,0.02640768);
   2->SetBinContent(3,0.1536447);
   2->SetBinContent(4,0.2132257);
   2->SetBinContent(5,0.1896552);
   2->SetBinContent(6,0.1331296);
   2->SetBinContent(7,0.09493671);
   2->SetBinContent(8,0.06198167);
   2->SetBinContent(9,0.04692274);
   2->SetBinContent(10,0.02662593);
   2->SetBinContent(11,0.01724138);
   2->SetBinContent(12,0.01222174);
   2->SetBinContent(13,0.008511567);
   2->SetBinContent(14,0.004801397);
   2->SetBinContent(15,0.00371017);
   2->SetBinContent(16,0.0008729812);
   2->SetBinContent(17,0.002400698);
   2->SetBinContent(18,0.0008729812);
   2->SetBinContent(19,0.001745962);
   2->SetBinContent(20,0.001091227);
   2->SetBinContent(21,0.002837189);
   2->SetMinimum(0);
   2->SetMaximum(0.3);
   2->SetEntries(4595);
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
   
   TH1F *3 = new TH1F("3","g_{HHH} = 1, g_{WWHH} = 1.15",20,0,2000);
   3->SetBinContent(2,0.03142488);
   3->SetBinContent(3,0.1491606);
   3->SetBinContent(4,0.193715);
   3->SetBinContent(5,0.1644425);
   3->SetBinContent(6,0.1259148);
   3->SetBinContent(7,0.09384417);
   3->SetBinContent(8,0.06629358);
   3->SetBinContent(9,0.03917348);
   3->SetBinContent(10,0.03314679);
   3->SetBinContent(11,0.02539819);
   3->SetBinContent(12,0.01808007);
   3->SetBinContent(13,0.01356005);
   3->SetBinContent(14,0.01054671);
   3->SetBinContent(15,0.01011623);
   3->SetBinContent(16,0.00990099);
   3->SetBinContent(17,0.005596212);
   3->SetBinContent(18,0.004520017);
   3->SetBinContent(19,0.003874301);
   3->SetBinContent(20,0.001291433);
   3->SetBinContent(21,0.004089539);
   3->SetMinimum(0);
   3->SetMaximum(0.3);
   3->SetEntries(4665);
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
   TLegendEntry *entry=leg->AddEntry("3","g_{HHH} = 1, g_{WWHH} = 1.15","f");

   ci = TColor::GetColor("#d69ed5");
   entry->SetFillColor(ci);

   ci = TColor::GetColor("#d69ed5");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("2","g_{HHH} = 1, g_{WWHH} = 1.05","f");

   ci = TColor::GetColor("#71d5b4");
   entry->SetFillColor(ci);

   ci = TColor::GetColor("#71d5b4");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("1","g_{HHH} = 1, g_{WWHH} = 0.95","f");

   ci = TColor::GetColor("#e69f7a");
   entry->SetFillColor(ci);

   ci = TColor::GetColor("#e69f7a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("0","g_{HHH} = 1, g_{WWHH} = 0.85","f");

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
