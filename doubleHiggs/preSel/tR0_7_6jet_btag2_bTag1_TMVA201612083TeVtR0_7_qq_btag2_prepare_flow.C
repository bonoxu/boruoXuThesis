{
//=========Macro generated from canvas: canvas1/
//=========  (Wed Apr  5 14:22:54 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.2698413,-3.873089,1.31746,8.239347);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLogy();
   canvas1->SetTickx(1);
   canvas1->SetTicky(1);
   canvas1->SetLeftMargin(0.17);
   canvas1->SetRightMargin(0.2);
   canvas1->SetTopMargin(0.08);
   canvas1->SetBottomMargin(0.18);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
   
   THStack *THStack = new THStack();
   THStack->SetName("THStack");
   THStack->SetTitle("");
   THStack->SetMinimum(0.1);
   
   TH1F *THStack_stack_8 = new TH1F("THStack_stack_8","",40,0,1);
   THStack_stack_8->SetMinimum(0.02028382);
   THStack_stack_8->SetMaximum(1.863596e+07);
   THStack_stack_8->SetDirectory(0);
   THStack_stack_8->SetStats(0);
   THStack_stack_8->SetLineWidth(2);
   THStack_stack_8->SetMarkerSize(1.2);
   THStack_stack_8->GetXaxis()->SetTitle("Highest b-tag");
   THStack_stack_8->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetXaxis()->SetLabelColor(ci);
   THStack_stack_8->GetXaxis()->SetLabelFont(42);
   THStack_stack_8->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_8->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_8->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_8->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_8->GetXaxis()->SetTitleColor(ci);
   THStack_stack_8->GetXaxis()->SetTitleFont(42);
   THStack_stack_8->GetYaxis()->SetTitle("Number of events");
   THStack_stack_8->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetYaxis()->SetLabelColor(ci);
   THStack_stack_8->GetYaxis()->SetLabelFont(42);
   THStack_stack_8->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_8->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_8->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_8->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_8->GetYaxis()->SetTitleColor(ci);
   THStack_stack_8->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_8->GetZaxis()->SetLabelColor(ci);
   THStack_stack_8->GetZaxis()->SetLabelFont(42);
   THStack_stack_8->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_8->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_8->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_8->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_8->GetZaxis()->SetTitleColor(ci);
   THStack_stack_8->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_8);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",40,0,1);
   0->SetBinContent(9,1.217578);
   0->SetBinContent(10,1.375963);
   0->SetBinContent(11,1.366064);
   0->SetBinContent(12,2.039196);
   0->SetBinContent(13,1.544246);
   0->SetBinContent(14,1.653135);
   0->SetBinContent(15,1.554145);
   0->SetBinContent(16,1.474953);
   0->SetBinContent(17,1.375963);
   0->SetBinContent(18,1.395761);
   0->SetBinContent(19,1.40566);
   0->SetBinContent(20,1.375963);
   0->SetBinContent(21,1.19778);
   0->SetBinContent(22,1.653135);
   0->SetBinContent(23,1.455155);
   0->SetBinContent(24,1.494751);
   0->SetBinContent(25,1.672933);
   0->SetBinContent(26,1.524448);
   0->SetBinContent(27,1.435357);
   0->SetBinContent(28,1.583842);
   0->SetBinContent(29,1.781822);
   0->SetBinContent(30,1.742226);
   0->SetBinContent(31,1.950106);
   0->SetBinContent(32,2.138186);
   0->SetBinContent(33,2.613333);
   0->SetBinContent(34,2.623232);
   0->SetBinContent(35,3.227065);
   0->SetBinContent(36,3.90019);
   0->SetBinContent(37,5.71173);
   0->SetBinContent(38,9.790175);
   0->SetBinContent(39,19.33294);
   0->SetBinContent(40,148.6485);
   0->SetEntries(23565);
   0->SetStats(0);

   ci = TColor::GetColor("#63c1e5");
   0->SetFillColor(ci);

   ci = TColor::GetColor("#63c1e5");
   0->SetLineColor(ci);
   0->SetLineWidth(2);
   0->SetMarkerSize(1.2);
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
   THStack->Add(0,"");
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",40,0,1);
   1->SetBinContent(9,0.128687);
   1->SetBinContent(10,0.227677);
   1->SetBinContent(11,0.19798);
   1->SetBinContent(12,0.306869);
   1->SetBinContent(13,0.326667);
   1->SetBinContent(14,0.316768);
   1->SetBinContent(15,0.3662629);
   1->SetBinContent(16,0.4553539);
   1->SetBinContent(17,0.5147479);
   1->SetBinContent(18,0.574142);
   1->SetBinContent(19,0.6731322);
   1->SetBinContent(20,0.6929302);
   1->SetBinContent(21,0.6137381);
   1->SetBinContent(22,0.584041);
   1->SetBinContent(23,0.7523243);
   1->SetBinContent(24,0.8810116);
   1->SetBinContent(25,0.9305067);
   1->SetBinContent(26,0.9800018);
   1->SetBinContent(27,1.09879);
   1->SetBinContent(28,1.138386);
   1->SetBinContent(29,1.29677);
   1->SetBinContent(30,1.286871);
   1->SetBinContent(31,1.494751);
   1->SetBinContent(32,2.148084);
   1->SetBinContent(33,2.039196);
   1->SetBinContent(34,2.662827);
   1->SetBinContent(35,2.761816);
   1->SetBinContent(36,4.395144);
   1->SetBinContent(37,6.780837);
   1->SetBinContent(38,13.65084);
   1->SetBinContent(39,31.80586);
   1->SetBinContent(40,506.264);
   1->SetEntries(59461);
   1->SetStats(0);

   ci = TColor::GetColor("#f0916e");
   1->SetFillColor(ci);

   ci = TColor::GetColor("#f0916e");
   1->SetLineColor(ci);
   1->SetLineWidth(2);
   1->SetMarkerSize(1.2);
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
   THStack->Add(1,"");
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",40,0,1);
   2->SetBinContent(9,12.67083);
   2->SetBinContent(10,14.46257);
   2->SetBinContent(11,11.27505);
   2->SetBinContent(12,18.55091);
   2->SetBinContent(13,12.02738);
   2->SetBinContent(14,7.958835);
   2->SetBinContent(15,6.86003);
   2->SetBinContent(16,6.40467);
   2->SetBinContent(17,6.018603);
   2->SetBinContent(18,5.781024);
   2->SetBinContent(19,5.177176);
   2->SetBinContent(20,5.097983);
   2->SetBinContent(21,4.662421);
   2->SetBinContent(22,4.147666);
   2->SetBinContent(23,4.048675);
   2->SetBinContent(24,3.543829);
   2->SetBinContent(25,3.623021);
   2->SetBinContent(26,3.583425);
   2->SetBinContent(27,3.731909);
   2->SetBinContent(28,3.672515);
   2->SetBinContent(29,3.504234);
   2->SetBinContent(30,3.801201);
   2->SetBinContent(31,4.058574);
   2->SetBinContent(32,4.028876);
   2->SetBinContent(33,4.018977);
   2->SetBinContent(34,4.44464);
   2->SetBinContent(35,5.949309);
   2->SetBinContent(36,7.364886);
   2->SetBinContent(37,10.10695);
   2->SetBinContent(38,15.73956);
   2->SetBinContent(39,32.13253);
   2->SetBinContent(40,244.8557);
   2->SetEntries(48821);
   2->SetStats(0);

   ci = TColor::GetColor("#62eee3");
   2->SetFillColor(ci);

   ci = TColor::GetColor("#62eee3");
   2->SetLineColor(ci);
   2->SetLineWidth(2);
   2->SetMarkerSize(1.2);
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
   THStack->Add(2,"");
   
   TH1F *3 = new TH1F("3","Hbb#nu",40,0,1);
   3->SetBinContent(9,5.301102);
   3->SetBinContent(10,8.373703);
   3->SetBinContent(11,7.326993);
   3->SetBinContent(12,12.05407);
   3->SetBinContent(13,8.947705);
   3->SetBinContent(14,7.529582);
   3->SetBinContent(15,9.015235);
   3->SetBinContent(16,8.306173);
   3->SetBinContent(17,8.542527);
   3->SetBinContent(18,8.643822);
   3->SetBinContent(19,9.521708);
   3->SetBinContent(20,8.103584);
   3->SetBinContent(21,8.711351);
   3->SetBinContent(22,10.39959);
   3->SetBinContent(23,9.386648);
   3->SetBinContent(24,9.994415);
   3->SetBinContent(25,8.474998);
   3->SetBinContent(26,10.23077);
   3->SetBinContent(27,11.24371);
   3->SetBinContent(28,11.58136);
   3->SetBinContent(29,12.72937);
   3->SetBinContent(30,12.72937);
   3->SetBinContent(31,14.55267);
   3->SetBinContent(32,15.46432);
   3->SetBinContent(33,17.55778);
   3->SetBinContent(34,20.46164);
   3->SetBinContent(35,24.17588);
   3->SetBinContent(36,33.7315);
   3->SetBinContent(37,47.43964);
   3->SetBinContent(38,86.30439);
   3->SetBinContent(39,195.8468);
   3->SetBinContent(40,2343.134);
   3->SetEntries(89005);
   3->SetStats(0);

   ci = TColor::GetColor("#f67ea6");
   3->SetFillColor(ci);

   ci = TColor::GetColor("#f67ea6");
   3->SetLineColor(ci);
   3->SetLineWidth(2);
   3->SetMarkerSize(1.2);
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
   THStack->Add(3,"");
   
   TH1F *4 = new TH1F("4","Hcc#nu",40,0,1);
   4->SetBinContent(9,64.26376);
   4->SetBinContent(10,77.47073);
   4->SetBinContent(11,66.88766);
   4->SetBinContent(12,111.1441);
   4->SetBinContent(13,70.97657);
   4->SetBinContent(14,49.87603);
   4->SetBinContent(15,45.85271);
   4->SetBinContent(16,42.00433);
   4->SetBinContent(17,38.59325);
   4->SetBinContent(18,36.40667);
   4->SetBinContent(19,32.93);
   4->SetBinContent(20,30.67782);
   4->SetBinContent(21,29.25654);
   4->SetBinContent(22,27.20115);
   4->SetBinContent(23,24.59911);
   4->SetBinContent(24,23.50582);
   4->SetBinContent(25,23.52769);
   4->SetBinContent(26,21.86588);
   4->SetBinContent(27,20.79445);
   4->SetBinContent(28,20.5102);
   4->SetBinContent(29,20.40087);
   4->SetBinContent(30,20.48833);
   4->SetBinContent(31,19.4825);
   4->SetBinContent(32,20.46647);
   4->SetBinContent(33,24.0306);
   4->SetBinContent(34,26.32651);
   4->SetBinContent(35,29.51893);
   4->SetBinContent(36,38.22153);
   4->SetBinContent(37,53.2871);
   4->SetBinContent(38,84.75205);
   4->SetBinContent(39,164.2125);
   4->SetBinContent(40,1266.996);
   4->SetEntries(120136);
   4->SetStats(0);

   ci = TColor::GetColor("#48c9a8");
   4->SetFillColor(ci);

   ci = TColor::GetColor("#48c9a8");
   4->SetLineColor(ci);
   4->SetLineWidth(2);
   4->SetMarkerSize(1.2);
   4->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   4->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   4->GetXaxis()->SetLabelColor(ci);
   4->GetXaxis()->SetLabelFont(42);
   4->GetXaxis()->SetLabelOffset(0.0015);
   4->GetXaxis()->SetLabelSize(0.06);
   4->GetXaxis()->SetTitleSize(0.07);
   4->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   4->GetXaxis()->SetTitleColor(ci);
   4->GetXaxis()->SetTitleFont(42);
   4->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   4->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   4->GetYaxis()->SetLabelColor(ci);
   4->GetYaxis()->SetLabelFont(42);
   4->GetYaxis()->SetLabelOffset(0.02);
   4->GetYaxis()->SetLabelSize(0.06);
   4->GetYaxis()->SetTitleSize(0.07);
   4->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   4->GetYaxis()->SetTitleColor(ci);
   4->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   4->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   4->GetZaxis()->SetLabelColor(ci);
   4->GetZaxis()->SetLabelFont(42);
   4->GetZaxis()->SetLabelOffset(0.02);
   4->GetZaxis()->SetLabelSize(0.06);
   4->GetZaxis()->SetTitleSize(0.07);
   4->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   4->GetZaxis()->SetTitleColor(ci);
   4->GetZaxis()->SetTitleFont(42);
   THStack->Add(4,"");
   
   TH1F *5 = new TH1F("5","Hqq#nu",40,0,1);
   5->SetBinContent(9,231.2128);
   5->SetBinContent(10,270.1778);
   5->SetBinContent(11,196.2639);
   5->SetBinContent(12,355.6244);
   5->SetBinContent(13,183.3543);
   5->SetBinContent(14,106.9435);
   5->SetBinContent(15,98.51161);
   5->SetBinContent(16,87.81178);
   5->SetBinContent(17,78.74019);
   5->SetBinContent(18,73.50658);
   5->SetBinContent(19,64.20238);
   5->SetBinContent(20,61.12017);
   5->SetBinContent(21,54.66496);
   5->SetBinContent(22,57.86349);
   5->SetBinContent(23,50.59411);
   5->SetBinContent(24,47.51189);
   5->SetBinContent(25,47.80267);
   5->SetBinContent(26,45.12753);
   5->SetBinContent(27,48.84946);
   5->SetBinContent(28,48.32606);
   5->SetBinContent(29,47.39558);
   5->SetBinContent(30,47.57005);
   5->SetBinContent(31,49.19839);
   5->SetBinContent(32,53.50186);
   5->SetBinContent(33,56.06068);
   5->SetBinContent(34,62.28328);
   5->SetBinContent(35,78.50758);
   5->SetBinContent(36,100.7214);
   5->SetBinContent(37,144.7419);
   5->SetBinContent(38,226.8514);
   5->SetBinContent(39,471.3757);
   5->SetBinContent(40,3601.923);
   5->SetEntries(122955);
   5->SetStats(0);

   ci = TColor::GetColor("#e2a0e3");
   5->SetFillColor(ci);

   ci = TColor::GetColor("#e2a0e3");
   5->SetLineColor(ci);
   5->SetLineWidth(2);
   5->SetMarkerSize(1.2);
   5->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   5->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   5->GetXaxis()->SetLabelColor(ci);
   5->GetXaxis()->SetLabelFont(42);
   5->GetXaxis()->SetLabelOffset(0.0015);
   5->GetXaxis()->SetLabelSize(0.06);
   5->GetXaxis()->SetTitleSize(0.07);
   5->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   5->GetXaxis()->SetTitleColor(ci);
   5->GetXaxis()->SetTitleFont(42);
   5->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   5->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   5->GetYaxis()->SetLabelColor(ci);
   5->GetYaxis()->SetLabelFont(42);
   5->GetYaxis()->SetLabelOffset(0.02);
   5->GetYaxis()->SetLabelSize(0.06);
   5->GetYaxis()->SetTitleSize(0.07);
   5->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   5->GetYaxis()->SetTitleColor(ci);
   5->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   5->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   5->GetZaxis()->SetLabelColor(ci);
   5->GetZaxis()->SetLabelFont(42);
   5->GetZaxis()->SetLabelOffset(0.02);
   5->GetZaxis()->SetLabelSize(0.06);
   5->GetZaxis()->SetTitleSize(0.07);
   5->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   5->GetZaxis()->SetTitleColor(ci);
   5->GetZaxis()->SetTitleFont(42);
   THStack->Add(5,"");
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",40,0,1);
   6->SetBinContent(9,7386.294);
   6->SetBinContent(10,9043.735);
   6->SetBinContent(11,6773.304);
   6->SetBinContent(12,12517.35);
   6->SetBinContent(13,6815.398);
   6->SetBinContent(14,4178.4);
   6->SetBinContent(15,3632.935);
   6->SetBinContent(16,3299.693);
   6->SetBinContent(17,3047.131);
   6->SetBinContent(18,2797.199);
   6->SetBinContent(19,2628.824);
   6->SetBinContent(20,2326.275);
   6->SetBinContent(21,2145.623);
   6->SetBinContent(22,2080.728);
   6->SetBinContent(23,1991.287);
   6->SetBinContent(24,1779.094);
   6->SetBinContent(25,1766.818);
   6->SetBinContent(26,1656.338);
   6->SetBinContent(27,1643.185);
   6->SetBinContent(28,1644.062);
   6->SetBinContent(29,1649.323);
   6->SetBinContent(30,1673.874);
   6->SetBinContent(31,1686.15);
   6->SetBinContent(32,1761.557);
   6->SetBinContent(33,1911.495);
   6->SetBinContent(34,2107.037);
   6->SetBinContent(35,2536.744);
   6->SetBinContent(36,3247.953);
   6->SetBinContent(37,4504.626);
   6->SetBinContent(38,7344.201);
   6->SetBinContent(39,14843.03);
   6->SetBinContent(40,112004.5);
   6->SetEntries(267528);
   6->SetStats(0);

   ci = TColor::GetColor("#a6c973");
   6->SetFillColor(ci);

   ci = TColor::GetColor("#a6c973");
   6->SetLineColor(ci);
   6->SetLineWidth(2);
   6->SetMarkerSize(1.2);
   6->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   6->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   6->GetXaxis()->SetLabelColor(ci);
   6->GetXaxis()->SetLabelFont(42);
   6->GetXaxis()->SetLabelOffset(0.0015);
   6->GetXaxis()->SetLabelSize(0.06);
   6->GetXaxis()->SetTitleSize(0.07);
   6->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   6->GetXaxis()->SetTitleColor(ci);
   6->GetXaxis()->SetTitleFont(42);
   6->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   6->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   6->GetYaxis()->SetLabelColor(ci);
   6->GetYaxis()->SetLabelFont(42);
   6->GetYaxis()->SetLabelOffset(0.02);
   6->GetYaxis()->SetLabelSize(0.06);
   6->GetYaxis()->SetTitleSize(0.07);
   6->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   6->GetYaxis()->SetTitleColor(ci);
   6->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   6->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   6->GetZaxis()->SetLabelColor(ci);
   6->GetZaxis()->SetLabelFont(42);
   6->GetZaxis()->SetLabelOffset(0.02);
   6->GetZaxis()->SetLabelSize(0.06);
   6->GetZaxis()->SetTitleSize(0.07);
   6->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   6->GetZaxis()->SetTitleColor(ci);
   6->GetZaxis()->SetTitleFont(42);
   THStack->Add(6,"");
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",40,0,1);
   7->SetBinContent(9,16256.08);
   7->SetBinContent(10,19325.09);
   7->SetBinContent(11,14347.49);
   7->SetBinContent(12,27459.03);
   7->SetBinContent(13,12544.78);
   7->SetBinContent(14,6306.025);
   7->SetBinContent(15,5114.33);
   7->SetBinContent(16,4511.435);
   7->SetBinContent(17,3833.644);
   7->SetBinContent(18,3227.018);
   7->SetBinContent(19,2828.082);
   7->SetBinContent(20,2408.833);
   7->SetBinContent(21,2103.033);
   7->SetBinContent(22,1832.246);
   7->SetBinContent(23,1626.81);
   7->SetBinContent(24,1478.256);
   7->SetBinContent(25,1336.053);
   7->SetBinContent(26,1218.838);
   7->SetBinContent(27,1089.613);
   7->SetBinContent(28,1003.453);
   7->SetBinContent(29,923.4803);
   7->SetBinContent(30,852.3472);
   7->SetBinContent(31,782.181);
   7->SetBinContent(32,768.645);
   7->SetBinContent(33,775.9655);
   7->SetBinContent(34,785.0815);
   7->SetBinContent(35,848.8942);
   7->SetBinContent(36,963.3978);
   7->SetBinContent(37,1242.999);
   7->SetBinContent(38,1699.569);
   7->SetBinContent(39,3079.024);
   7->SetBinContent(40,21279.81);
   7->SetEntries(1186599);
   7->SetStats(0);

   ci = TColor::GetColor("#b196e4");
   7->SetFillColor(ci);

   ci = TColor::GetColor("#b196e4");
   7->SetLineColor(ci);
   7->SetLineWidth(2);
   7->SetMarkerSize(1.2);
   7->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   7->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   7->GetXaxis()->SetLabelColor(ci);
   7->GetXaxis()->SetLabelFont(42);
   7->GetXaxis()->SetLabelOffset(0.0015);
   7->GetXaxis()->SetLabelSize(0.06);
   7->GetXaxis()->SetTitleSize(0.07);
   7->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   7->GetXaxis()->SetTitleColor(ci);
   7->GetXaxis()->SetTitleFont(42);
   7->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   7->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   7->GetYaxis()->SetLabelColor(ci);
   7->GetYaxis()->SetLabelFont(42);
   7->GetYaxis()->SetLabelOffset(0.02);
   7->GetYaxis()->SetLabelSize(0.06);
   7->GetYaxis()->SetTitleSize(0.07);
   7->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   7->GetYaxis()->SetTitleColor(ci);
   7->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   7->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   7->GetZaxis()->SetLabelColor(ci);
   7->GetZaxis()->SetLabelFont(42);
   7->GetZaxis()->SetLabelOffset(0.02);
   7->GetZaxis()->SetLabelSize(0.06);
   7->GetZaxis()->SetTitleSize(0.07);
   7->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   7->GetZaxis()->SetTitleColor(ci);
   7->GetZaxis()->SetTitleFont(42);
   THStack->Add(7,"");
   
   TH1F *8 = new TH1F("8","qqqqll",40,0,1);
   8->SetBinContent(9,11562.7);
   8->SetBinContent(10,14979.94);
   8->SetBinContent(11,9707.65);
   8->SetBinContent(12,18668.78);
   8->SetBinContent(13,8832.785);
   8->SetBinContent(14,4442.754);
   8->SetBinContent(15,3554.955);
   8->SetBinContent(16,3166.023);
   8->SetBinContent(17,2615.422);
   8->SetBinContent(18,2163.67);
   8->SetBinContent(19,1845.873);
   8->SetBinContent(20,1590.896);
   8->SetBinContent(21,1397.816);
   8->SetBinContent(22,1196.422);
   8->SetBinContent(23,1082.791);
   8->SetBinContent(24,957.1459);
   8->SetBinContent(25,878.6154);
   8->SetBinContent(26,757.5859);
   8->SetBinContent(27,699.3809);
   8->SetBinContent(28,606.0681);
   8->SetBinContent(29,498.8969);
   8->SetBinContent(30,487.8102);
   8->SetBinContent(31,406.508);
   8->SetBinContent(32,433.3008);
   8->SetBinContent(33,397.2691);
   8->SetBinContent(34,375.0958);
   8->SetBinContent(35,336.2924);
   8->SetBinContent(36,349.2269);
   8->SetBinContent(37,410.2036);
   8->SetBinContent(38,424.0619);
   8->SetBinContent(39,481.343);
   8->SetBinContent(40,582.0469);
   8->SetEntries(103794);
   8->SetStats(0);

   ci = TColor::GetColor("#77bd7d");
   8->SetFillColor(ci);

   ci = TColor::GetColor("#77bd7d");
   8->SetLineColor(ci);
   8->SetLineWidth(2);
   8->SetMarkerSize(1.2);
   8->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   8->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   8->GetXaxis()->SetLabelColor(ci);
   8->GetXaxis()->SetLabelFont(42);
   8->GetXaxis()->SetLabelOffset(0.0015);
   8->GetXaxis()->SetLabelSize(0.06);
   8->GetXaxis()->SetTitleSize(0.07);
   8->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   8->GetXaxis()->SetTitleColor(ci);
   8->GetXaxis()->SetTitleFont(42);
   8->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   8->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   8->GetYaxis()->SetLabelColor(ci);
   8->GetYaxis()->SetLabelFont(42);
   8->GetYaxis()->SetLabelOffset(0.02);
   8->GetYaxis()->SetLabelSize(0.06);
   8->GetYaxis()->SetTitleSize(0.07);
   8->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   8->GetYaxis()->SetTitleColor(ci);
   8->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   8->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   8->GetZaxis()->SetLabelColor(ci);
   8->GetZaxis()->SetLabelFont(42);
   8->GetZaxis()->SetLabelOffset(0.02);
   8->GetZaxis()->SetLabelSize(0.06);
   8->GetZaxis()->SetTitleSize(0.07);
   8->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   8->GetZaxis()->SetTitleColor(ci);
   8->GetZaxis()->SetTitleFont(42);
   THStack->Add(8,"");
   
   TH1F *9 = new TH1F("9","qqqql#nu",40,0,1);
   9->SetBinContent(9,4453.979);
   9->SetBinContent(10,6216.187);
   9->SetBinContent(11,3703.833);
   9->SetBinContent(12,7008.96);
   9->SetBinContent(13,3519.263);
   9->SetBinContent(14,1916.101);
   9->SetBinContent(15,1640.927);
   9->SetBinContent(16,1423.777);
   9->SetBinContent(17,1300.696);
   9->SetBinContent(18,1152.999);
   9->SetBinContent(19,1014.972);
   9->SetBinContent(20,923.5403);
   9->SetBinContent(21,890.1326);
   9->SetBinContent(22,796.0635);
   9->SetBinContent(23,745.5123);
   9->SetBinContent(24,674.3011);
   9->SetBinContent(25,655.3994);
   9->SetBinContent(26,652.762);
   9->SetBinContent(27,617.5959);
   9->SetBinContent(28,581.5508);
   9->SetBinContent(29,608.3649);
   9->SetBinContent(30,589.9027);
   9->SetBinContent(31,584.6278);
   9->SetBinContent(32,605.7274);
   9->SetBinContent(33,697.1591);
   9->SetBinContent(34,750.7872);
   9->SetBinContent(35,854.0874);
   9->SetBinContent(36,1022.445);
   9->SetBinContent(37,1471.251);
   9->SetBinContent(38,2247.925);
   9->SetBinContent(39,4354.663);
   9->SetBinContent(40,28925.37);
   9->SetEntries(187939);
   9->SetStats(0);

   ci = TColor::GetColor("#e798b9");
   9->SetFillColor(ci);

   ci = TColor::GetColor("#e798b9");
   9->SetLineColor(ci);
   9->SetLineWidth(2);
   9->SetMarkerSize(1.2);
   9->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   9->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   9->GetXaxis()->SetLabelColor(ci);
   9->GetXaxis()->SetLabelFont(42);
   9->GetXaxis()->SetLabelOffset(0.0015);
   9->GetXaxis()->SetLabelSize(0.06);
   9->GetXaxis()->SetTitleSize(0.07);
   9->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   9->GetXaxis()->SetTitleColor(ci);
   9->GetXaxis()->SetTitleFont(42);
   9->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   9->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   9->GetYaxis()->SetLabelColor(ci);
   9->GetYaxis()->SetLabelFont(42);
   9->GetYaxis()->SetLabelOffset(0.02);
   9->GetYaxis()->SetLabelSize(0.06);
   9->GetYaxis()->SetTitleSize(0.07);
   9->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   9->GetYaxis()->SetTitleColor(ci);
   9->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   9->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   9->GetZaxis()->SetLabelColor(ci);
   9->GetZaxis()->SetLabelFont(42);
   9->GetZaxis()->SetLabelOffset(0.02);
   9->GetZaxis()->SetLabelSize(0.06);
   9->GetZaxis()->SetTitleSize(0.07);
   9->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   9->GetZaxis()->SetTitleColor(ci);
   9->GetZaxis()->SetTitleFont(42);
   THStack->Add(9,"");
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",40,0,1);
   10->SetBinContent(9,87872.39);
   10->SetBinContent(10,107428);
   10->SetBinContent(11,78522.38);
   10->SetBinContent(12,153928.3);
   10->SetBinContent(13,70791.69);
   10->SetBinContent(14,35774.43);
   10->SetBinContent(15,29363.39);
   10->SetBinContent(16,26051.63);
   10->SetBinContent(17,22317.61);
   10->SetBinContent(18,19156.89);
   10->SetBinContent(19,17117.45);
   10->SetBinContent(20,15055.53);
   10->SetBinContent(21,13040.49);
   10->SetBinContent(22,11754.85);
   10->SetBinContent(23,10692);
   10->SetBinContent(24,9687.252);
   10->SetBinContent(25,8978.587);
   10->SetBinContent(26,8324.232);
   10->SetBinContent(27,7770.615);
   10->SetBinContent(28,7219.334);
   10->SetBinContent(29,6935.518);
   10->SetBinContent(30,6469.79);
   10->SetBinContent(31,6227.729);
   10->SetBinContent(32,6268.023);
   10->SetBinContent(33,6536.072);
   10->SetBinContent(34,6983.112);
   10->SetBinContent(35,7839.233);
   10->SetBinContent(36,9452.198);
   10->SetBinContent(37,12717.84);
   10->SetBinContent(38,19231.68);
   10->SetBinContent(39,36734.19);
   10->SetBinContent(40,246876.9);
   10->SetEntries(3811711);
   10->SetStats(0);

   ci = TColor::GetColor("#9aebb2");
   10->SetFillColor(ci);

   ci = TColor::GetColor("#9aebb2");
   10->SetLineColor(ci);
   10->SetLineWidth(2);
   10->SetMarkerSize(1.2);
   10->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   10->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   10->GetXaxis()->SetLabelColor(ci);
   10->GetXaxis()->SetLabelFont(42);
   10->GetXaxis()->SetLabelOffset(0.0015);
   10->GetXaxis()->SetLabelSize(0.06);
   10->GetXaxis()->SetTitleSize(0.07);
   10->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   10->GetXaxis()->SetTitleColor(ci);
   10->GetXaxis()->SetTitleFont(42);
   10->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   10->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   10->GetYaxis()->SetLabelColor(ci);
   10->GetYaxis()->SetLabelFont(42);
   10->GetYaxis()->SetLabelOffset(0.02);
   10->GetYaxis()->SetLabelSize(0.06);
   10->GetYaxis()->SetTitleSize(0.07);
   10->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   10->GetYaxis()->SetTitleColor(ci);
   10->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   10->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   10->GetZaxis()->SetLabelColor(ci);
   10->GetZaxis()->SetLabelFont(42);
   10->GetZaxis()->SetLabelOffset(0.02);
   10->GetZaxis()->SetLabelSize(0.06);
   10->GetZaxis()->SetTitleSize(0.07);
   10->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   10->GetZaxis()->SetTitleColor(ci);
   10->GetZaxis()->SetTitleFont(42);
   THStack->Add(10,"");
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",40,0,1);
   11->SetBinContent(9,231110.2);
   11->SetBinContent(10,316864.5);
   11->SetBinContent(11,199659.9);
   11->SetBinContent(12,417732.1);
   11->SetBinContent(13,194764.9);
   11->SetBinContent(14,94916.11);
   11->SetBinContent(15,75432.87);
   11->SetBinContent(16,63198.19);
   11->SetBinContent(17,54755.39);
   11->SetBinContent(18,44354.85);
   11->SetBinContent(19,39185.16);
   11->SetBinContent(20,32149.5);
   11->SetBinContent(21,27285.72);
   11->SetBinContent(22,23247.86);
   11->SetBinContent(23,19362.95);
   11->SetBinContent(24,17711.1);
   11->SetBinContent(25,14070.98);
   11->SetBinContent(26,13826.27);
   11->SetBinContent(27,11562.69);
   11->SetBinContent(28,10277.96);
   11->SetBinContent(29,9176.76);
   11->SetBinContent(30,7463.772);
   11->SetBinContent(31,6087.251);
   11->SetBinContent(32,6699.038);
   11->SetBinContent(33,4955.445);
   11->SetBinContent(34,5567.232);
   11->SetBinContent(35,5047.213);
   11->SetBinContent(36,5659);
   11->SetBinContent(37,4955.445);
   11->SetBinContent(38,6362.555);
   11->SetBinContent(39,6484.913);
   11->SetBinContent(40,8932.049);
   11->SetEntries(64689);
   11->SetStats(0);

   ci = TColor::GetColor("#ea908f");
   11->SetFillColor(ci);

   ci = TColor::GetColor("#ea908f");
   11->SetLineColor(ci);
   11->SetLineWidth(2);
   11->SetMarkerSize(1.2);
   11->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   11->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   11->GetXaxis()->SetLabelColor(ci);
   11->GetXaxis()->SetLabelFont(42);
   11->GetXaxis()->SetLabelOffset(0.0015);
   11->GetXaxis()->SetLabelSize(0.06);
   11->GetXaxis()->SetTitleSize(0.07);
   11->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   11->GetXaxis()->SetTitleColor(ci);
   11->GetXaxis()->SetTitleFont(42);
   11->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   11->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   11->GetYaxis()->SetLabelColor(ci);
   11->GetYaxis()->SetLabelFont(42);
   11->GetYaxis()->SetLabelOffset(0.02);
   11->GetYaxis()->SetLabelSize(0.06);
   11->GetYaxis()->SetTitleSize(0.07);
   11->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   11->GetYaxis()->SetTitleColor(ci);
   11->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   11->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   11->GetZaxis()->SetLabelColor(ci);
   11->GetZaxis()->SetLabelFont(42);
   11->GetZaxis()->SetLabelOffset(0.02);
   11->GetZaxis()->SetLabelSize(0.06);
   11->GetZaxis()->SetTitleSize(0.07);
   11->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   11->GetZaxis()->SetTitleColor(ci);
   11->GetZaxis()->SetTitleFont(42);
   THStack->Add(11,"");
   
   TH1F *12 = new TH1F("12","qqqq",40,0,1);
   12->SetBinContent(9,89183.17);
   12->SetBinContent(10,132607.9);
   12->SetBinContent(11,83768.11);
   12->SetBinContent(12,178378.6);
   12->SetBinContent(13,81174.86);
   12->SetBinContent(14,39398.75);
   12->SetBinContent(15,32041.74);
   12->SetBinContent(16,28400.42);
   12->SetBinContent(17,23550.57);
   12->SetBinContent(18,19648.33);
   12->SetBinContent(19,17202.62);
   12->SetBinContent(20,14212.23);
   12->SetBinContent(21,12154.25);
   12->SetBinContent(22,10487.82);
   12->SetBinContent(23,9037.568);
   12->SetBinContent(24,7951.669);
   12->SetBinContent(25,7065.483);
   12->SetBinContent(26,6203.636);
   12->SetBinContent(27,5595.188);
   12->SetBinContent(28,4988.173);
   12->SetBinContent(29,4427.686);
   12->SetBinContent(30,3992.432);
   12->SetBinContent(31,3562.793);
   12->SetBinContent(32,3494.767);
   12->SetBinContent(33,3289.256);
   12->SetBinContent(34,3260.614);
   12->SetBinContent(35,3290.688);
   12->SetBinContent(36,3521.977);
   12->SetBinContent(37,3988.851);
   12->SetBinContent(38,4856.462);
   12->SetBinContent(39,6769.134);
   12->SetBinContent(40,21457.52);
   12->SetEntries(1212598);
   12->SetStats(0);

   ci = TColor::GetColor("#4ac7d0");
   12->SetFillColor(ci);

   ci = TColor::GetColor("#4ac7d0");
   12->SetLineColor(ci);
   12->SetLineWidth(2);
   12->SetMarkerSize(1.2);
   12->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   12->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   12->GetXaxis()->SetLabelColor(ci);
   12->GetXaxis()->SetLabelFont(42);
   12->GetXaxis()->SetLabelOffset(0.0015);
   12->GetXaxis()->SetLabelSize(0.06);
   12->GetXaxis()->SetTitleSize(0.07);
   12->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   12->GetXaxis()->SetTitleColor(ci);
   12->GetXaxis()->SetTitleFont(42);
   12->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   12->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   12->GetYaxis()->SetLabelColor(ci);
   12->GetYaxis()->SetLabelFont(42);
   12->GetYaxis()->SetLabelOffset(0.02);
   12->GetYaxis()->SetLabelSize(0.06);
   12->GetYaxis()->SetTitleSize(0.07);
   12->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   12->GetYaxis()->SetTitleColor(ci);
   12->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   12->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   12->GetZaxis()->SetLabelColor(ci);
   12->GetZaxis()->SetLabelFont(42);
   12->GetZaxis()->SetLabelOffset(0.02);
   12->GetZaxis()->SetLabelSize(0.06);
   12->GetZaxis()->SetTitleSize(0.07);
   12->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   12->GetZaxis()->SetTitleColor(ci);
   12->GetZaxis()->SetTitleFont(42);
   THStack->Add(12,"");
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",40,0,1);
   13->SetBinContent(9,2599994);
   13->SetBinContent(10,3312862);
   13->SetBinContent(11,2379774);
   13->SetBinContent(12,4993450);
   13->SetBinContent(13,2286798);
   13->SetBinContent(14,1061885);
   13->SetBinContent(15,838044);
   13->SetBinContent(16,755718.4);
   13->SetBinContent(17,625564);
   13->SetBinContent(18,516933.3);
   13->SetBinContent(19,445614.2);
   13->SetBinContent(20,378343.7);
   13->SetBinContent(21,310138.8);
   13->SetBinContent(22,263734.7);
   13->SetBinContent(23,231916.1);
   13->SetBinContent(24,200460.9);
   13->SetBinContent(25,181567.1);
   13->SetBinContent(26,156340.6);
   13->SetBinContent(27,132048.5);
   13->SetBinContent(28,117566.7);
   13->SetBinContent(29,104642);
   13->SetBinContent(30,89641.1);
   13->SetBinContent(31,75107.35);
   13->SetBinContent(32,72096.79);
   13->SetBinContent(33,63480.36);
   13->SetBinContent(34,58964.51);
   13->SetBinContent(35,58030.2);
   13->SetBinContent(36,56421.11);
   13->SetBinContent(37,59691.2);
   13->SetBinContent(38,65037.54);
   13->SetBinContent(39,72771.57);
   13->SetBinContent(40,95454.6);
   13->SetEntries(436487);
   13->SetStats(0);

   ci = TColor::GetColor("#ccac60");
   13->SetFillColor(ci);

   ci = TColor::GetColor("#ccac60");
   13->SetLineColor(ci);
   13->SetLineWidth(2);
   13->SetMarkerSize(1.2);
   13->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   13->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   13->GetXaxis()->SetLabelColor(ci);
   13->GetXaxis()->SetLabelFont(42);
   13->GetXaxis()->SetLabelOffset(0.0015);
   13->GetXaxis()->SetLabelSize(0.06);
   13->GetXaxis()->SetTitleSize(0.07);
   13->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   13->GetXaxis()->SetTitleColor(ci);
   13->GetXaxis()->SetTitleFont(42);
   13->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   13->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   13->GetYaxis()->SetLabelColor(ci);
   13->GetYaxis()->SetLabelFont(42);
   13->GetYaxis()->SetLabelOffset(0.02);
   13->GetYaxis()->SetLabelSize(0.06);
   13->GetYaxis()->SetTitleSize(0.07);
   13->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   13->GetYaxis()->SetTitleColor(ci);
   13->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   13->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   13->GetZaxis()->SetLabelColor(ci);
   13->GetZaxis()->SetLabelFont(42);
   13->GetZaxis()->SetLabelOffset(0.02);
   13->GetZaxis()->SetLabelSize(0.06);
   13->GetZaxis()->SetTitleSize(0.07);
   13->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   13->GetZaxis()->SetTitleColor(ci);
   13->GetZaxis()->SetTitleFont(42);
   THStack->Add(13,"");
   
   TH1F *14 = new TH1F("14","qq#nu#nu",40,0,1);
   14->SetBinContent(9,107558.8);
   14->SetBinContent(10,140462.4);
   14->SetBinContent(11,108873.4);
   14->SetBinContent(12,297111.1);
   14->SetBinContent(13,120362.3);
   14->SetBinContent(14,38766);
   14->SetBinContent(15,26476.81);
   14->SetBinContent(16,24394.68);
   14->SetBinContent(17,21146.56);
   14->SetBinContent(18,16556.62);
   14->SetBinContent(19,15668.17);
   14->SetBinContent(20,13687.63);
   14->SetBinContent(21,10189.28);
   14->SetBinContent(22,8273.521);
   14->SetBinContent(23,8014.394);
   14->SetBinContent(24,6589.217);
   14->SetBinContent(25,6691.015);
   14->SetBinContent(26,5895.137);
   14->SetBinContent(27,5654.523);
   14->SetBinContent(28,5376.891);
   14->SetBinContent(29,5265.838);
   14->SetBinContent(30,4571.759);
   14->SetBinContent(31,4673.557);
   14->SetBinContent(32,4673.557);
   14->SetBinContent(33,4858.645);
   14->SetBinContent(34,5127.022);
   14->SetBinContent(35,5885.883);
   14->SetBinContent(36,7422.112);
   14->SetBinContent(37,9883.87);
   14->SetBinContent(38,15251.7);
   14->SetBinContent(39,28503.42);
   14->SetBinContent(40,185408.1);
   14->SetEntries(137153);
   14->SetStats(0);

   ci = TColor::GetColor("#79a9eb");
   14->SetFillColor(ci);

   ci = TColor::GetColor("#79a9eb");
   14->SetLineColor(ci);
   14->SetLineWidth(2);
   14->SetMarkerSize(1.2);
   14->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   14->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   14->GetXaxis()->SetLabelColor(ci);
   14->GetXaxis()->SetLabelFont(42);
   14->GetXaxis()->SetLabelOffset(0.0015);
   14->GetXaxis()->SetLabelSize(0.06);
   14->GetXaxis()->SetTitleSize(0.07);
   14->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   14->GetXaxis()->SetTitleColor(ci);
   14->GetXaxis()->SetTitleFont(42);
   14->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   14->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   14->GetYaxis()->SetLabelColor(ci);
   14->GetYaxis()->SetLabelFont(42);
   14->GetYaxis()->SetLabelOffset(0.02);
   14->GetYaxis()->SetLabelSize(0.06);
   14->GetYaxis()->SetTitleSize(0.07);
   14->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   14->GetYaxis()->SetTitleColor(ci);
   14->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   14->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   14->GetZaxis()->SetLabelColor(ci);
   14->GetZaxis()->SetLabelFont(42);
   14->GetZaxis()->SetLabelOffset(0.02);
   14->GetZaxis()->SetLabelSize(0.06);
   14->GetZaxis()->SetTitleSize(0.07);
   14->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   14->GetZaxis()->SetTitleColor(ci);
   14->GetZaxis()->SetTitleFont(42);
   THStack->Add(14,"");
   
   TH1F *15 = new TH1F("15","qqll",40,0,1);
   15->SetBinContent(9,26083.58);
   15->SetBinContent(10,42042.25);
   15->SetBinContent(11,30430.85);
   15->SetBinContent(12,80494.52);
   15->SetBinContent(13,36629.21);
   15->SetBinContent(14,13462.49);
   15->SetBinContent(15,9423.741);
   15->SetBinContent(16,9535.929);
   15->SetBinContent(17,8077.491);
   15->SetBinContent(18,6731.241);
   15->SetBinContent(19,6226.397);
   15->SetBinContent(20,4459.444);
   15->SetBinContent(21,4235.069);
   15->SetBinContent(22,3393.663);
   15->SetBinContent(23,2832.726);
   15->SetBinContent(24,2804.679);
   15->SetBinContent(25,2019.366);
   15->SetBinContent(26,2440.069);
   15->SetBinContent(27,1794.992);
   15->SetBinContent(28,1879.133);
   15->SetBinContent(29,1823.039);
   15->SetBinContent(30,1710.852);
   15->SetBinContent(31,1907.179);
   15->SetBinContent(32,1542.572);
   15->SetBinContent(33,1121.87);
   15->SetBinContent(34,1458.431);
   15->SetBinContent(35,1991.32);
   15->SetBinContent(36,2440.069);
   15->SetBinContent(37,2412.022);
   15->SetBinContent(38,4235.069);
   15->SetBinContent(39,8946.944);
   15->SetBinContent(40,62881.08);
   15->SetEntries(13815);
   15->SetStats(0);

   ci = TColor::GetColor("#e2d689");
   15->SetFillColor(ci);

   ci = TColor::GetColor("#e2d689");
   15->SetLineColor(ci);
   15->SetLineWidth(2);
   15->SetMarkerSize(1.2);
   15->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   15->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   15->GetXaxis()->SetLabelColor(ci);
   15->GetXaxis()->SetLabelFont(42);
   15->GetXaxis()->SetLabelOffset(0.0015);
   15->GetXaxis()->SetLabelSize(0.06);
   15->GetXaxis()->SetTitleSize(0.07);
   15->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   15->GetXaxis()->SetTitleColor(ci);
   15->GetXaxis()->SetTitleFont(42);
   15->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   15->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   15->GetYaxis()->SetLabelColor(ci);
   15->GetYaxis()->SetLabelFont(42);
   15->GetYaxis()->SetLabelOffset(0.02);
   15->GetYaxis()->SetLabelSize(0.06);
   15->GetYaxis()->SetTitleSize(0.07);
   15->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   15->GetYaxis()->SetTitleColor(ci);
   15->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   15->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   15->GetZaxis()->SetLabelColor(ci);
   15->GetZaxis()->SetLabelFont(42);
   15->GetZaxis()->SetLabelOffset(0.02);
   15->GetZaxis()->SetLabelSize(0.06);
   15->GetZaxis()->SetTitleSize(0.07);
   15->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   15->GetZaxis()->SetTitleColor(ci);
   15->GetZaxis()->SetTitleFont(42);
   THStack->Add(15,"");
   
   TH1F *16 = new TH1F("16","qql#nu",40,0,1);
   16->SetBinContent(9,276948.5);
   16->SetBinContent(10,445609.7);
   16->SetBinContent(11,274419.7);
   16->SetBinContent(12,719214.1);
   16->SetBinContent(13,310821);
   16->SetBinContent(14,109801);
   16->SetBinContent(15,80423.24);
   16->SetBinContent(16,70432.47);
   16->SetBinContent(17,55054.93);
   16->SetBinContent(18,43839.05);
   16->SetBinContent(19,39282.61);
   16->SetBinContent(20,32124.11);
   16->SetBinContent(21,26495.96);
   16->SetBinContent(22,22789.88);
   16->SetBinContent(23,18213.03);
   16->SetBinContent(24,15770.57);
   16->SetBinContent(25,15218.33);
   16->SetBinContent(26,12690.74);
   16->SetBinContent(27,11257.02);
   16->SetBinContent(28,9579.044);
   16->SetBinContent(29,7582.49);
   16->SetBinContent(30,6563.006);
   16->SetBinContent(31,5416.086);
   16->SetBinContent(32,5076.258);
   16->SetBinContent(33,4109.872);
   16->SetBinContent(34,3600.118);
   16->SetBinContent(35,4237.307);
   16->SetBinContent(36,4237.307);
   16->SetBinContent(37,4311.645);
   16->SetBinContent(38,5246.172);
   16->SetBinContent(39,6201.938);
   16->SetBinContent(40,6138.221);
   16->SetEntries(249732);
   16->SetStats(0);

   ci = TColor::GetColor("#c2b0e8");
   16->SetFillColor(ci);

   ci = TColor::GetColor("#c2b0e8");
   16->SetLineColor(ci);
   16->SetLineWidth(2);
   16->SetMarkerSize(1.2);
   16->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   16->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   16->GetXaxis()->SetLabelColor(ci);
   16->GetXaxis()->SetLabelFont(42);
   16->GetXaxis()->SetLabelOffset(0.0015);
   16->GetXaxis()->SetLabelSize(0.06);
   16->GetXaxis()->SetTitleSize(0.07);
   16->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   16->GetXaxis()->SetTitleColor(ci);
   16->GetXaxis()->SetTitleFont(42);
   16->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   16->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   16->GetYaxis()->SetLabelColor(ci);
   16->GetYaxis()->SetLabelFont(42);
   16->GetYaxis()->SetLabelOffset(0.02);
   16->GetYaxis()->SetLabelSize(0.06);
   16->GetYaxis()->SetTitleSize(0.07);
   16->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   16->GetYaxis()->SetTitleColor(ci);
   16->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   16->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   16->GetZaxis()->SetLabelColor(ci);
   16->GetZaxis()->SetLabelFont(42);
   16->GetZaxis()->SetLabelOffset(0.02);
   16->GetZaxis()->SetLabelSize(0.06);
   16->GetZaxis()->SetTitleSize(0.07);
   16->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   16->GetZaxis()->SetTitleColor(ci);
   16->GetZaxis()->SetTitleFont(42);
   THStack->Add(16,"");
   
   TH1F *17 = new TH1F("17","qq",40,0,1);
   17->SetBinContent(9,140922);
   17->SetBinContent(10,189645.3);
   17->SetBinContent(11,130216.3);
   17->SetBinContent(12,339201.9);
   17->SetBinContent(13,140070.4);
   17->SetBinContent(14,54130.13);
   17->SetBinContent(15,39411.61);
   17->SetBinContent(16,32903.84);
   17->SetBinContent(17,27855.75);
   17->SetBinContent(18,23233.41);
   17->SetBinContent(19,20435.68);
   17->SetBinContent(20,17637.94);
   17->SetBinContent(21,15022.67);
   17->SetBinContent(22,12833.14);
   17->SetBinContent(23,11677.55);
   17->SetBinContent(24,10157.04);
   17->SetBinContent(25,9792.12);
   17->SetBinContent(26,8636.534);
   17->SetBinContent(27,9001.456);
   17->SetBinContent(28,8271.612);
   17->SetBinContent(29,8514.894);
   17->SetBinContent(30,7602.584);
   17->SetBinContent(31,7298.48);
   17->SetBinContent(32,6690.272);
   17->SetBinContent(33,7724.226);
   17->SetBinContent(34,8149.971);
   17->SetBinContent(35,9123.097);
   17->SetBinContent(36,10521.96);
   17->SetBinContent(37,14475.28);
   17->SetBinContent(38,19705.83);
   17->SetBinContent(39,37100.44);
   17->SetBinContent(40,182467.6);
   17->SetEntries(25656);
   17->SetStats(0);

   ci = TColor::GetColor("#aec48b");
   17->SetFillColor(ci);

   ci = TColor::GetColor("#aec48b");
   17->SetLineColor(ci);
   17->SetLineWidth(2);
   17->SetMarkerSize(1.2);
   17->GetXaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   17->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   17->GetXaxis()->SetLabelColor(ci);
   17->GetXaxis()->SetLabelFont(42);
   17->GetXaxis()->SetLabelOffset(0.0015);
   17->GetXaxis()->SetLabelSize(0.06);
   17->GetXaxis()->SetTitleSize(0.07);
   17->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   17->GetXaxis()->SetTitleColor(ci);
   17->GetXaxis()->SetTitleFont(42);
   17->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   17->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   17->GetYaxis()->SetLabelColor(ci);
   17->GetYaxis()->SetLabelFont(42);
   17->GetYaxis()->SetLabelOffset(0.02);
   17->GetYaxis()->SetLabelSize(0.06);
   17->GetYaxis()->SetTitleSize(0.07);
   17->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   17->GetYaxis()->SetTitleColor(ci);
   17->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   17->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   17->GetZaxis()->SetLabelColor(ci);
   17->GetZaxis()->SetLabelFont(42);
   17->GetZaxis()->SetLabelOffset(0.02);
   17->GetZaxis()->SetLabelSize(0.06);
   17->GetZaxis()->SetTitleSize(0.07);
   17->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   17->GetZaxis()->SetTitleColor(ci);
   17->GetZaxis()->SetTitleFont(42);
   THStack->Add(17,"");
   THStack->Draw("");
   
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
   TLegendEntry *entry=leg->AddEntry("17","qq","f");

   ci = TColor::GetColor("#aec48b");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#aec48b");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("16","qql#nu","f");

   ci = TColor::GetColor("#c2b0e8");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#c2b0e8");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("15","qqll","f");

   ci = TColor::GetColor("#e2d689");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#e2d689");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("14","qq#nu#nu","f");

   ci = TColor::GetColor("#79a9eb");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#79a9eb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("13","#gamma#gamma#rightarrowqqqq","f");

   ci = TColor::GetColor("#ccac60");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ccac60");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("12","qqqq","f");

   ci = TColor::GetColor("#4ac7d0");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#4ac7d0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("11","e^{#pm}#gamma#rightarrowqqqqe","f");

   ci = TColor::GetColor("#ea908f");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ea908f");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("10","e^{#pm}#gamma#rightarrowqqqq#nu","f");

   ci = TColor::GetColor("#9aebb2");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#9aebb2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("9","qqqql#nu","f");

   ci = TColor::GetColor("#e798b9");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#e798b9");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("8","qqqqll","f");

   ci = TColor::GetColor("#77bd7d");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#77bd7d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("7","qqqq#nu#nu","f");

   ci = TColor::GetColor("#b196e4");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#b196e4");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("6","e^{#pm}#gamma#rightarrowqqH#nu","f");

   ci = TColor::GetColor("#a6c973");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#a6c973");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("5","Hqq#nu","f");

   ci = TColor::GetColor("#e2a0e3");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#e2a0e3");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("4","Hcc#nu","f");

   ci = TColor::GetColor("#48c9a8");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#48c9a8");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("3","Hbb#nu","f");

   ci = TColor::GetColor("#f67ea6");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#f67ea6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("2","HH#nu#nu#rightarrowother","f");

   ci = TColor::GetColor("#62eee3");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#62eee3");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("1","HH#nu#nu#rightarrowbbbb#nu#nu","f");

   ci = TColor::GetColor("#f0916e");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#f0916e");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}","f");

   ci = TColor::GetColor("#63c1e5");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#63c1e5");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
