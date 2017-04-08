{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:45:12 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-26.98413,-3.247869,131.746,5.93663);
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
   
   TH1F *THStack_stack_25 = new TH1F("THStack_stack_25","",50,0,100);
   THStack_stack_25->SetMinimum(0.02542971);
   THStack_stack_25->SetMaximum(159173.4);
   THStack_stack_25->SetDirectory(0);
   THStack_stack_25->SetStats(0);
   THStack_stack_25->SetLineWidth(2);
   THStack_stack_25->SetMarkerSize(1.2);
   THStack_stack_25->GetXaxis()->SetTitle("N_{PFO,H#rightarrowbb}");
   THStack_stack_25->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_25->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_25->GetXaxis()->SetLabelColor(ci);
   THStack_stack_25->GetXaxis()->SetLabelFont(42);
   THStack_stack_25->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_25->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_25->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_25->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_25->GetXaxis()->SetTitleColor(ci);
   THStack_stack_25->GetXaxis()->SetTitleFont(42);
   THStack_stack_25->GetYaxis()->SetTitle("Number of events");
   THStack_stack_25->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_25->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_25->GetYaxis()->SetLabelColor(ci);
   THStack_stack_25->GetYaxis()->SetLabelFont(42);
   THStack_stack_25->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_25->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_25->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_25->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_25->GetYaxis()->SetTitleColor(ci);
   THStack_stack_25->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_25->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_25->GetZaxis()->SetLabelColor(ci);
   THStack_stack_25->GetZaxis()->SetLabelFont(42);
   THStack_stack_25->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_25->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_25->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_25->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_25->GetZaxis()->SetTitleColor(ci);
   THStack_stack_25->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_25);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,100);
   0->SetBinContent(3,0.009899);
   0->SetBinContent(4,0.05939399);
   0->SetBinContent(5,0.168283);
   0->SetBinContent(6,0.257374);
   0->SetBinContent(7,0.6236371);
   0->SetBinContent(8,0.8909106);
   0->SetBinContent(9,1.692731);
   0->SetBinContent(10,2.266871);
   0->SetBinContent(11,2.959794);
   0->SetBinContent(12,4.207061);
   0->SetBinContent(13,5.167277);
   0->SetBinContent(14,5.790923);
   0->SetBinContent(15,6.186889);
   0->SetBinContent(16,7.137206);
   0->SetBinContent(17,7.394584);
   0->SetBinContent(18,7.176803);
   0->SetBinContent(19,6.681846);
   0->SetBinContent(20,6.186889);
   0->SetBinContent(21,5.107882);
   0->SetBinContent(22,4.424842);
   0->SetBinContent(23,3.44484);
   0->SetBinContent(24,3.187469);
   0->SetBinContent(25,2.058994);
   0->SetBinContent(26,1.762024);
   0->SetBinContent(27,1.40566);
   0->SetBinContent(28,1.128487);
   0->SetBinContent(29,0.7721224);
   0->SetBinContent(30,0.6632332);
   0->SetBinContent(31,0.4751518);
   0->SetBinContent(32,0.227677);
   0->SetBinContent(33,0.168283);
   0->SetBinContent(34,0.07919199);
   0->SetBinContent(35,0.049495);
   0->SetBinContent(36,0.06929299);
   0->SetBinContent(37,0.009899);
   0->SetBinContent(38,0.039596);
   0->SetBinContent(39,0.049495);
   0->SetBinContent(40,0.019798);
   0->SetBinContent(41,0.05939399);
   0->SetBinContent(43,0.009899);
   0->SetEntries(9099);
   0->SetStats(0);

   ci = TColor::GetColor("#63c1e5");
   0->SetFillColor(ci);

   ci = TColor::GetColor("#63c1e5");
   0->SetLineColor(ci);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,100);
   1->SetBinContent(2,0.009898);
   1->SetBinContent(3,0.039592);
   1->SetBinContent(4,0.09898002);
   1->SetBinContent(5,0.2771441);
   1->SetBinContent(6,0.3662262);
   1->SetBinContent(7,0.6978083);
   1->SetBinContent(8,1.306532);
   1->SetBinContent(9,1.920205);
   1->SetBinContent(10,2.731854);
   1->SetBinContent(11,3.221814);
   1->SetBinContent(12,4.251225);
   1->SetBinContent(13,4.370004);
   1->SetBinContent(14,5.364771);
   1->SetBinContent(15,5.310331);
   1->SetBinContent(16,5.196502);
   1->SetBinContent(17,5.26579);
   1->SetBinContent(18,4.869862);
   1->SetBinContent(19,4.1176);
   1->SetBinContent(20,3.89984);
   1->SetBinContent(21,3.187171);
   1->SetBinContent(22,2.53389);
   1->SetBinContent(23,2.103319);
   1->SetBinContent(24,1.504491);
   1->SetBinContent(25,1.192706);
   1->SetBinContent(26,0.7868898);
   1->SetBinContent(27,0.6780124);
   1->SetBinContent(28,0.4107672);
   1->SetBinContent(29,0.3464302);
   1->SetBinContent(30,0.1732151);
   1->SetBinContent(31,0.118776);
   1->SetBinContent(32,0.059388);
   1->SetBinContent(33,0.09898002);
   1->SetBinContent(34,0.029694);
   1->SetBinContent(35,0.024745);
   1->SetBinContent(36,0.014847);
   1->SetBinContent(37,0.014847);
   1->SetBinContent(38,0.014847);
   1->SetBinContent(39,0.004949);
   1->SetBinContent(40,0.014847);
   1->SetBinContent(41,0.004949);
   1->SetEntries(13464);
   1->SetStats(0);

   ci = TColor::GetColor("#f0916e");
   1->SetFillColor(ci);

   ci = TColor::GetColor("#f0916e");
   1->SetLineColor(ci);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,100);
   2->SetBinContent(2,0.08908202);
   2->SetBinContent(3,0.4256142);
   2->SetBinContent(4,0.7868898);
   2->SetBinContent(5,1.019492);
   2->SetBinContent(6,1.247144);
   2->SetBinContent(7,1.865766);
   2->SetBinContent(8,2.662567);
   2->SetBinContent(9,3.637538);
   2->SetBinContent(10,4.899557);
   2->SetBinContent(11,5.542939);
   2->SetBinContent(12,6.933634);
   2->SetBinContent(13,8.358938);
   2->SetBinContent(14,9.338764);
   2->SetBinContent(15,10.03652);
   2->SetBinContent(16,10.04642);
   2->SetBinContent(17,10.34828);
   2->SetBinContent(18,9.828677);
   2->SetBinContent(19,8.428219);
   2->SetBinContent(20,7.948198);
   2->SetBinContent(21,6.57235);
   2->SetBinContent(22,5.740902);
   2->SetBinContent(23,4.859964);
   2->SetBinContent(24,3.62764);
   2->SetBinContent(25,2.964461);
   2->SetBinContent(26,2.09837);
   2->SetBinContent(27,1.553981);
   2->SetBinContent(28,1.237246);
   2->SetBinContent(29,0.742349);
   2->SetBinContent(30,0.6037778);
   2->SetBinContent(31,0.3810732);
   2->SetBinContent(32,0.2771441);
   2->SetBinContent(33,0.1534191);
   2->SetBinContent(34,0.1583681);
   2->SetBinContent(35,0.09898002);
   2->SetBinContent(36,0.08413301);
   2->SetBinContent(37,0.034643);
   2->SetBinContent(38,0.034643);
   2->SetBinContent(39,0.014847);
   2->SetBinContent(40,0.009898);
   2->SetBinContent(41,0.014847);
   2->SetBinContent(44,0.004949);
   2->SetBinContent(45,0.009898);
   2->SetBinContent(51,0.004949);
   2->SetEntries(27223);
   2->SetStats(0);

   ci = TColor::GetColor("#62eee3");
   2->SetFillColor(ci);

   ci = TColor::GetColor("#62eee3");
   2->SetLineColor(ci);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,100);
   3->SetBinContent(2,0.06753);
   3->SetBinContent(3,0.7765951);
   3->SetBinContent(4,1.586954);
   3->SetBinContent(5,2.127194);
   3->SetBinContent(6,3.984273);
   3->SetBinContent(7,7.462052);
   3->SetBinContent(8,8.745116);
   3->SetBinContent(9,14.07996);
   3->SetBinContent(10,19.75256);
   3->SetBinContent(11,27.61999);
   3->SetBinContent(12,31.53682);
   3->SetBinContent(13,39.06619);
   3->SetBinContent(14,43.65808);
   3->SetBinContent(15,44.73853);
   3->SetBinContent(16,44.97487);
   3->SetBinContent(17,46.22414);
   3->SetBinContent(18,41.0245);
   3->SetBinContent(19,38.49221);
   3->SetBinContent(20,33.69773);
   3->SetBinContent(21,29.07192);
   3->SetBinContent(22,22.1837);
   3->SetBinContent(23,17.76038);
   3->SetBinContent(24,12.25666);
   3->SetBinContent(25,10.06194);
   3->SetBinContent(26,7.86723);
   3->SetBinContent(27,5.199808);
   3->SetBinContent(28,4.153098);
   3->SetBinContent(29,3.106381);
   3->SetBinContent(30,1.958369);
   3->SetBinContent(31,1.519425);
   3->SetBinContent(32,0.9791852);
   3->SetBinContent(33,0.371415);
   3->SetBinContent(34,0.4051799);
   3->SetBinContent(35,0.371415);
   3->SetBinContent(36,0.236355);
   3->SetBinContent(37,0.168825);
   3->SetBinContent(38,0.13506);
   3->SetBinContent(39,0.033765);
   3->SetBinContent(40,0.06753);
   3->SetBinContent(43,0.033765);
   3->SetBinContent(46,0.033765);
   3->SetEntries(16810);
   3->SetStats(0);

   ci = TColor::GetColor("#f67ea6");
   3->SetFillColor(ci);

   ci = TColor::GetColor("#f67ea6");
   3->SetLineColor(ci);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,100);
   4->SetBinContent(2,0.087464);
   4->SetBinContent(3,0.5029179);
   4->SetBinContent(4,1.377558);
   4->SetBinContent(5,2.90818);
   4->SetBinContent(6,5.051045);
   4->SetBinContent(7,8.39652);
   4->SetBinContent(8,11.76386);
   4->SetBinContent(9,16.9242);
   4->SetBinContent(10,21.4067);
   4->SetBinContent(11,28.60056);
   4->SetBinContent(12,37.4125);
   4->SetBinContent(13,42.31045);
   4->SetBinContent(14,45.13114);
   4->SetBinContent(15,48.67341);
   4->SetBinContent(16,49.8323);
   4->SetBinContent(17,44.03785);
   4->SetBinContent(18,43.42561);
   4->SetBinContent(19,38.74632);
   4->SetBinContent(20,32.71134);
   4->SetBinContent(21,25.84546);
   4->SetBinContent(22,22.54372);
   4->SetBinContent(23,16.59621);
   4->SetBinContent(24,12.98835);
   4->SetBinContent(25,9.8178);
   4->SetBinContent(26,7.587483);
   4->SetBinContent(27,5.313435);
   4->SetBinContent(28,3.760957);
   4->SetBinContent(29,2.274064);
   4->SetBinContent(30,2.011671);
   4->SetBinContent(31,1.20263);
   4->SetBinContent(32,0.7434441);
   4->SetBinContent(33,0.6997121);
   4->SetBinContent(34,0.4591859);
   4->SetBinContent(35,0.3498559);
   4->SetBinContent(36,0.21866);
   4->SetBinContent(37,0.10933);
   4->SetBinContent(38,0.043732);
   4->SetBinContent(39,0.021866);
   4->SetBinContent(40,0.087464);
   4->SetBinContent(41,0.043732);
   4->SetEntries(27075);
   4->SetStats(0);

   ci = TColor::GetColor("#48c9a8");
   4->SetFillColor(ci);

   ci = TColor::GetColor("#48c9a8");
   4->SetLineColor(ci);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,100);
   5->SetBinContent(2,0.058154);
   5->SetBinContent(3,1.337542);
   5->SetBinContent(4,2.558777);
   5->SetBinContent(5,6.57141);
   5->SetBinContent(6,11.80528);
   5->SetBinContent(7,23.49413);
   5->SetBinContent(8,36.86951);
   5->SetBinContent(9,51.35012);
   5->SetBinContent(10,69.84305);
   5->SetBinContent(11,90.60304);
   5->SetBinContent(12,111.6538);
   5->SetBinContent(13,134.5072);
   5->SetBinContent(14,153.4064);
   5->SetBinContent(15,165.7345);
   5->SetBinContent(16,173.7593);
   5->SetBinContent(17,175.7365);
   5->SetBinContent(18,167.5953);
   5->SetBinContent(19,154.5113);
   5->SetBinContent(20,135.205);
   5->SetBinContent(21,115.7244);
   5->SetBinContent(22,100.0235);
   5->SetBinContent(23,79.49615);
   5->SetBinContent(24,63.27191);
   5->SetBinContent(25,47.27927);
   5->SetBinContent(26,35.70641);
   5->SetBinContent(27,24.48273);
   5->SetBinContent(28,20.41201);
   5->SetBinContent(29,15.23637);
   5->SetBinContent(30,9.653577);
   5->SetBinContent(31,7.501875);
   5->SetBinContent(32,4.652324);
   5->SetBinContent(33,3.489242);
   5->SetBinContent(34,2.32616);
   5->SetBinContent(35,1.860928);
   5->SetBinContent(36,0.7560019);
   5->SetBinContent(37,0.7560019);
   5->SetBinContent(38,0.5233859);
   5->SetBinContent(39,0.348924);
   5->SetBinContent(40,0.174462);
   5->SetBinContent(41,0.232616);
   5->SetBinContent(42,0.116308);
   5->SetBinContent(43,0.058154);
   5->SetBinContent(47,0.058154);
   5->SetBinContent(51,0.058154);
   5->SetEntries(37845);
   5->SetStats(0);

   ci = TColor::GetColor("#e2a0e3");
   5->SetFillColor(ci);

   ci = TColor::GetColor("#e2a0e3");
   5->SetLineColor(ci);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,100);
   6->SetBinContent(2,13.156);
   6->SetBinContent(3,76.30486);
   6->SetBinContent(4,163.1342);
   6->SetBinContent(5,377.139);
   6->SetBinContent(6,683.2382);
   6->SetBinContent(7,1082.307);
   6->SetBinContent(8,1583.117);
   6->SetBinContent(9,2195.295);
   6->SetBinContent(10,2824.948);
   6->SetBinContent(11,3562.465);
   6->SetBinContent(12,4135.116);
   6->SetBinContent(13,4648.133);
   6->SetBinContent(14,5008.561);
   6->SetBinContent(15,4961.206);
   6->SetBinContent(16,5077.84);
   6->SetBinContent(17,4765.645);
   6->SetBinContent(18,4419.249);
   6->SetBinContent(19,3840.459);
   6->SetBinContent(20,3210.807);
   6->SetBinContent(21,2676.743);
   6->SetBinContent(22,2061.122);
   6->SetBinContent(23,1605.044);
   6->SetBinContent(24,1197.204);
   6->SetBinContent(25,892.8592);
   6->SetBinContent(26,647.2781);
   6->SetBinContent(27,456.0757);
   6->SetBinContent(28,315.7437);
   6->SetBinContent(29,214.0037);
   6->SetBinContent(30,135.9454);
   6->SetBinContent(31,92.96915);
   6->SetBinContent(32,71.04246);
   6->SetBinContent(33,50.8699);
   6->SetBinContent(34,22.80374);
   6->SetBinContent(35,21.92668);
   6->SetBinContent(36,8.77067);
   6->SetBinContent(37,5.262402);
   6->SetBinContent(38,10.5248);
   6->SetBinContent(40,2.631201);
   6->SetBinContent(41,1.754134);
   6->SetBinContent(42,0.877067);
   6->SetBinContent(44,0.877067);
   6->SetEntries(71971);
   6->SetStats(0);

   ci = TColor::GetColor("#a6c973");
   6->SetFillColor(ci);

   ci = TColor::GetColor("#a6c973");
   6->SetLineColor(ci);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,100);
   7->SetBinContent(2,0.55246);
   7->SetBinContent(3,5.800828);
   7->SetBinContent(4,16.71191);
   7->SetBinContent(5,43.78244);
   7->SetBinContent(6,78.31117);
   7->SetBinContent(7,136.1818);
   7->SetBinContent(8,232.8676);
   7->SetBinContent(9,350.9623);
   7->SetBinContent(10,488.2562);
   7->SetBinContent(11,648.8927);
   7->SetBinContent(12,805.3856);
   7->SetBinContent(13,935.7733);
   7->SetBinContent(14,1010.774);
   7->SetBinContent(15,1065.452);
   7->SetBinContent(16,1060.068);
   7->SetBinContent(17,1029.418);
   7->SetBinContent(18,943.7844);
   7->SetBinContent(19,820.1647);
   7->SetBinContent(20,707.5948);
   7->SetBinContent(21,575.8259);
   7->SetBinContent(22,468.2284);
   7->SetBinContent(23,368.642);
   7->SetBinContent(24,290.1884);
   7->SetBinContent(25,217.1216);
   7->SetBinContent(26,154.5521);
   7->SetBinContent(27,109.9395);
   7->SetBinContent(28,85.76938);
   7->SetBinContent(29,60.90869);
   7->SetBinContent(30,42.26317);
   7->SetBinContent(31,28.17545);
   7->SetBinContent(32,19.75044);
   7->SetBinContent(33,14.7783);
   7->SetBinContent(34,10.63485);
   7->SetBinContent(35,4.972139);
   7->SetBinContent(36,3.59099);
   7->SetBinContent(37,2.900415);
   7->SetBinContent(38,1.243035);
   7->SetBinContent(39,1.10492);
   7->SetBinContent(40,0.82869);
   7->SetBinContent(41,0.690575);
   7->SetBinContent(42,0.27623);
   7->SetBinContent(43,0.138115);
   7->SetBinContent(44,0.138115);
   7->SetBinContent(47,0.138115);
   7->SetEntries(92988);
   7->SetStats(0);

   ci = TColor::GetColor("#b196e4");
   7->SetFillColor(ci);

   ci = TColor::GetColor("#b196e4");
   7->SetLineColor(ci);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,100);
   8->SetBinContent(2,1.84776);
   8->SetBinContent(3,10.16268);
   8->SetBinContent(4,18.4776);
   8->SetBinContent(5,24.94475);
   8->SetBinContent(6,37.87908);
   8->SetBinContent(7,48.96566);
   8->SetBinContent(8,43.42237);
   8->SetBinContent(9,69.29105);
   8->SetBinContent(10,104.3986);
   8->SetBinContent(11,115.4851);
   8->SetBinContent(12,138.5821);
   8->SetBinContent(13,158.9073);
   8->SetBinContent(14,158.9073);
   8->SetBinContent(15,150.5924);
   8->SetBinContent(16,163.5267);
   8->SetBinContent(17,120.1045);
   8->SetBinContent(18,137.6582);
   8->SetBinContent(19,117.3329);
   8->SetBinContent(20,115.4851);
   8->SetBinContent(21,77.60599);
   8->SetBinContent(22,60.97612);
   8->SetBinContent(23,47.1179);
   8->SetBinContent(24,36.03132);
   8->SetBinContent(25,29.56415);
   8->SetBinContent(26,20.32536);
   8->SetBinContent(27,18.4776);
   8->SetBinContent(28,11.08656);
   8->SetBinContent(29,8.31492);
   8->SetBinContent(30,4.6194);
   8->SetBinContent(31,2.77164);
   8->SetBinContent(32,0.92388);
   8->SetBinContent(33,0.92388);
   8->SetBinContent(34,1.84776);
   8->SetBinContent(35,0.92388);
   8->SetBinContent(36,1.84776);
   8->SetBinContent(37,0.92388);
   8->SetEntries(2230);
   8->SetStats(0);

   ci = TColor::GetColor("#77bd7d");
   8->SetFillColor(ci);

   ci = TColor::GetColor("#77bd7d");
   8->SetLineColor(ci);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,100);
   9->SetBinContent(2,19.34081);
   9->SetBinContent(3,57.14329);
   9->SetBinContent(4,88.7921);
   9->SetBinContent(5,142.4191);
   9->SetBinContent(6,210.9904);
   9->SetBinContent(7,288.7937);
   9->SetBinContent(8,379.7858);
   9->SetBinContent(9,520.0103);
   9->SetBinContent(10,605.2878);
   9->SetBinContent(11,740.677);
   9->SetBinContent(12,843.9772);
   9->SetBinContent(13,944.2003);
   9->SetBinContent(14,984.2017);
   9->SetBinContent(15,1005.741);
   9->SetBinContent(16,991.2349);
   9->SetBinContent(17,948.1565);
   9->SetBinContent(18,904.199);
   9->SetBinContent(19,783.7554);
   9->SetBinContent(20,760.8975);
   9->SetBinContent(21,628.5853);
   9->SetBinContent(22,559.1324);
   9->SetBinContent(23,508.1417);
   9->SetBinContent(24,396.9292);
   9->SetBinContent(25,358.6862);
   9->SetBinContent(26,288.3541);
   9->SetBinContent(27,247.4739);
   9->SetBinContent(28,227.6937);
   9->SetBinContent(29,174.9465);
   9->SetBinContent(30,147.2543);
   9->SetBinContent(31,130.1114);
   9->SetBinContent(32,116.9244);
   9->SetBinContent(33,84.39642);
   9->SetBinContent(34,56.26416);
   9->SetBinContent(35,50.9894);
   9->SetBinContent(36,53.18722);
   9->SetBinContent(37,40.87943);
   9->SetBinContent(38,33.84641);
   9->SetBinContent(39,25.93427);
   9->SetBinContent(40,31.64859);
   9->SetBinContent(41,21.53863);
   9->SetBinContent(42,9.670405);
   9->SetBinContent(43,10.10997);
   9->SetBinContent(44,13.18692);
   9->SetBinContent(45,3.076948);
   9->SetBinContent(46,4.39564);
   9->SetBinContent(47,7.033023);
   9->SetBinContent(48,2.637384);
   9->SetBinContent(49,3.516512);
   9->SetBinContent(50,2.19782);
   9->SetBinContent(51,9.670405);
   9->SetEntries(35189);
   9->SetStats(0);

   ci = TColor::GetColor("#e798b9");
   9->SetFillColor(ci);

   ci = TColor::GetColor("#e798b9");
   9->SetLineColor(ci);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,100);
   10->SetBinContent(2,28.53204);
   10->SetBinContent(3,141.7868);
   10->SetBinContent(4,328.1149);
   10->SetBinContent(5,674.8599);
   10->SetBinContent(6,1301.971);
   10->SetBinContent(7,2229.32);
   10->SetBinContent(8,3511.154);
   10->SetBinContent(9,5070.906);
   10->SetBinContent(10,7158.361);
   10->SetBinContent(11,9129.119);
   10->SetBinContent(12,11050.99);
   10->SetBinContent(13,12299.73);
   10->SetBinContent(14,13137.57);
   10->SetBinContent(15,13332.84);
   10->SetBinContent(16,12832.88);
   10->SetBinContent(17,11805.01);
   10->SetBinContent(18,10219.55);
   10->SetBinContent(19,8728.1);
   10->SetBinContent(20,7140.318);
   10->SetBinContent(21,5636.932);
   10->SetBinContent(22,4371.305);
   10->SetBinContent(23,3287.176);
   10->SetBinContent(24,2438.736);
   10->SetBinContent(25,1746.538);
   10->SetBinContent(26,1265.287);
   10->SetBinContent(27,887.9727);
   10->SetBinContent(28,621.2906);
   10->SetBinContent(29,415.4562);
   10->SetBinContent(30,296.3809);
   10->SetBinContent(31,199.7232);
   10->SetBinContent(32,139.1665);
   10->SetBinContent(33,90.54556);
   10->SetBinContent(34,67.83622);
   10->SetBinContent(35,50.65882);
   10->SetBinContent(36,25.62061);
   10->SetBinContent(37,17.46859);
   10->SetBinContent(38,10.48115);
   10->SetBinContent(39,9.316577);
   10->SetBinContent(40,8.152003);
   10->SetBinContent(41,4.367145);
   10->SetBinContent(42,2.329144);
   10->SetBinContent(43,1.164572);
   10->SetBinContent(44,0.582286);
   10->SetBinContent(45,0.873429);
   10->SetBinContent(46,1.455715);
   10->SetBinContent(47,0.582286);
   10->SetBinContent(48,1.164572);
   10->SetBinContent(49,0.582286);
   10->SetBinContent(51,0.291143);
   10->SetEntries(521191);
   10->SetStats(0);

   ci = TColor::GetColor("#9aebb2");
   10->SetFillColor(ci);

   ci = TColor::GetColor("#9aebb2");
   10->SetLineColor(ci);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,100);
   11->SetBinContent(2,152.6042);
   11->SetBinContent(3,122.0833);
   11->SetBinContent(4,305.2083);
   11->SetBinContent(5,640.9374);
   11->SetBinContent(6,915.6248);
   11->SetBinContent(7,1068.229);
   11->SetBinContent(8,1465);
   11->SetBinContent(9,2136.459);
   11->SetBinContent(10,2472.188);
   11->SetBinContent(11,2563.75);
   11->SetBinContent(12,2624.791);
   11->SetBinContent(13,2838.437);
   11->SetBinContent(14,2594.271);
   11->SetBinContent(15,2258.542);
   11->SetBinContent(16,2350.104);
   11->SetBinContent(17,1983.855);
   11->SetBinContent(18,1312.396);
   11->SetBinContent(19,1190.312);
   11->SetBinContent(20,824.0623);
   11->SetBinContent(21,549.375);
   11->SetBinContent(22,610.4166);
   11->SetBinContent(23,213.6458);
   11->SetBinContent(24,213.6458);
   11->SetBinContent(25,335.7292);
   11->SetBinContent(26,91.5625);
   11->SetBinContent(27,183.125);
   11->SetBinContent(28,61.04166);
   11->SetBinContent(29,61.04166);
   11->SetEntries(1053);
   11->SetStats(0);

   ci = TColor::GetColor("#ea908f");
   11->SetFillColor(ci);

   ci = TColor::GetColor("#ea908f");
   11->SetLineColor(ci);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,100);
   12->SetBinContent(2,9.307426);
   12->SetBinContent(3,60.85632);
   12->SetBinContent(4,158.9425);
   12->SetBinContent(5,267.0519);
   12->SetBinContent(6,417.3998);
   12->SetBinContent(7,612.8521);
   12->SetBinContent(8,777.5188);
   12->SetBinContent(9,907.1044);
   12->SetBinContent(10,972.2551);
   12->SetBinContent(11,1022.371);
   12->SetBinContent(12,1008.052);
   12->SetBinContent(13,1069.623);
   12->SetBinContent(14,1032.394);
   12->SetBinContent(15,972.2551);
   12->SetBinContent(16,944.3334);
   12->SetBinContent(17,828.3507);
   12->SetBinContent(18,756.7565);
   12->SetBinContent(19,639.3419);
   12->SetBinContent(20,536.9622);
   12->SetBinContent(21,472.5273);
   12->SetBinContent(22,388.0461);
   12->SetBinContent(23,345.0896);
   12->SetBinContent(24,244.1415);
   12->SetBinContent(25,233.4021);
   12->SetBinContent(26,179.7053);
   12->SetBinContent(27,135.3159);
   12->SetBinContent(28,110.9734);
   12->SetBinContent(29,95.93824);
   12->SetBinContent(30,77.32334);
   12->SetBinContent(31,62.28823);
   12->SetBinContent(32,53.69674);
   12->SetBinContent(33,38.66163);
   12->SetBinContent(34,30.7861);
   12->SetBinContent(35,22.19463);
   12->SetBinContent(36,24.3425);
   12->SetBinContent(37,15.75103);
   12->SetBinContent(38,7.875515);
   12->SetBinContent(39,6.443604);
   12->SetBinContent(40,10.02338);
   12->SetBinContent(41,4.295736);
   12->SetBinContent(42,4.295736);
   12->SetBinContent(43,5.011692);
   12->SetBinContent(44,4.295736);
   12->SetBinContent(45,2.147868);
   12->SetBinContent(46,2.863824);
   12->SetBinContent(47,1.431912);
   12->SetBinContent(48,0.715956);
   12->SetBinContent(49,2.147868);
   12->SetBinContent(50,0.715956);
   12->SetBinContent(51,4.295736);
   12->SetEntries(21762);
   12->SetStats(0);

   ci = TColor::GetColor("#4ac7d0");
   12->SetFillColor(ci);

   ci = TColor::GetColor("#4ac7d0");
   12->SetLineColor(ci);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,100);
   13->SetBinContent(2,104.0221);
   13->SetBinContent(3,988.2097);
   13->SetBinContent(4,2028.429);
   13->SetBinContent(5,4628.981);
   13->SetBinContent(6,7437.588);
   13->SetBinContent(7,12586.66);
   13->SetBinContent(8,17423.68);
   13->SetBinContent(9,23925.14);
   13->SetBinContent(10,29594.42);
   13->SetBinContent(11,28658.21);
   13->SetBinContent(12,36043.87);
   13->SetBinContent(13,33651.33);
   13->SetBinContent(14,33443.29);
   13->SetBinContent(15,28554.18);
   13->SetBinContent(16,26785.79);
   13->SetBinContent(17,23092.95);
   13->SetBinContent(18,17839.77);
   13->SetBinContent(19,13990.95);
   13->SetBinContent(20,10766.28);
   13->SetBinContent(21,6501.386);
   13->SetBinContent(22,6085.296);
   13->SetBinContent(23,4160.88);
   13->SetBinContent(24,3276.693);
   13->SetBinContent(25,1768.375);
   13->SetBinContent(26,1248.265);
   13->SetBinContent(27,884.1876);
   13->SetBinContent(28,572.1213);
   13->SetBinContent(29,572.1213);
   13->SetBinContent(30,312.0662);
   13->SetBinContent(31,260.0551);
   13->SetBinContent(32,52.01103);
   13->SetBinContent(33,156.0331);
   13->SetBinContent(34,104.0221);
   13->SetBinContent(35,52.01103);
   13->SetBinContent(40,52.01103);
   13->SetEntries(7260);
   13->SetStats(0);

   ci = TColor::GetColor("#ccac60");
   13->SetFillColor(ci);

   ci = TColor::GetColor("#ccac60");
   13->SetLineColor(ci);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,100);
   14->SetBinContent(2,138.8186);
   14->SetBinContent(3,638.5658);
   14->SetBinContent(4,1193.839);
   14->SetBinContent(5,1961.964);
   14->SetBinContent(6,2952.209);
   14->SetBinContent(7,4238.601);
   14->SetBinContent(8,5080.75);
   14->SetBinContent(9,5524.961);
   14->SetBinContent(10,7024.173);
   14->SetBinContent(11,7329.568);
   14->SetBinContent(12,7385.095);
   14->SetBinContent(13,7274.042);
   14->SetBinContent(14,7005.665);
   14->SetBinContent(15,5506.453);
   14->SetBinContent(16,4941.935);
   14->SetBinContent(17,3655.562);
   14->SetBinContent(18,3239.103);
   14->SetBinContent(19,2184.074);
   14->SetBinContent(20,1721.347);
   14->SetBinContent(21,1230.857);
   14->SetBinContent(22,916.2031);
   14->SetBinContent(23,536.7654);
   14->SetBinContent(24,434.9651);
   14->SetBinContent(25,351.6739);
   14->SetBinContent(26,166.5824);
   14->SetBinContent(27,55.52746);
   14->SetBinContent(28,55.52746);
   14->SetBinContent(29,83.29119);
   14->SetBinContent(30,37.01831);
   14->SetBinContent(31,9.254577);
   14->SetBinContent(32,37.01831);
   14->SetBinContent(33,37.01831);
   14->SetBinContent(34,9.254577);
   14->SetBinContent(35,27.76373);
   14->SetBinContent(38,9.254577);
   14->SetEntries(8968);
   14->SetStats(0);

   ci = TColor::GetColor("#79a9eb");
   14->SetFillColor(ci);

   ci = TColor::GetColor("#79a9eb");
   14->SetLineColor(ci);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,100);
   15->SetBinContent(2,28.04676);
   15->SetBinContent(3,308.5143);
   15->SetBinContent(4,224.374);
   15->SetBinContent(5,420.7013);
   15->SetBinContent(6,841.4026);
   15->SetBinContent(7,1177.964);
   15->SetBinContent(8,1121.87);
   15->SetBinContent(9,1374.291);
   15->SetBinContent(10,1879.133);
   15->SetBinContent(11,2159.601);
   15->SetBinContent(12,2748.585);
   15->SetBinContent(13,1879.133);
   15->SetBinContent(14,2608.351);
   15->SetBinContent(15,1991.32);
   15->SetBinContent(16,1738.899);
   15->SetBinContent(17,2019.366);
   15->SetBinContent(18,1290.151);
   15->SetBinContent(19,1121.87);
   15->SetBinContent(20,785.3091);
   15->SetBinContent(21,645.0754);
   15->SetBinContent(22,308.5143);
   15->SetBinContent(23,168.2805);
   15->SetBinContent(24,168.2805);
   15->SetBinContent(25,196.3273);
   15->SetBinContent(26,84.14027);
   15->SetBinContent(28,56.09351);
   15->SetBinContent(29,28.04676);
   15->SetBinContent(30,56.09351);
   15->SetBinContent(31,28.04676);
   15->SetBinContent(32,28.04676);
   15->SetBinContent(35,28.04676);
   15->SetEntries(981);
   15->SetStats(0);

   ci = TColor::GetColor("#e2d689");
   15->SetFillColor(ci);

   ci = TColor::GetColor("#e2d689");
   15->SetLineColor(ci);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,100);
   16->SetBinContent(2,159.2968);
   16->SetBinContent(3,456.6507);
   16->SetBinContent(4,626.5675);
   16->SetBinContent(5,955.7817);
   16->SetBinContent(6,977.0213);
   16->SetBinContent(7,1019.501);
   16->SetBinContent(8,945.1619);
   16->SetBinContent(9,1040.74);
   16->SetBinContent(10,902.6826);
   16->SetBinContent(11,913.3024);
   16->SetBinContent(12,1040.74);
   16->SetBinContent(13,711.526);
   16->SetBinContent(14,679.6666);
   16->SetBinContent(15,573.4684);
   16->SetBinContent(16,488.51);
   16->SetBinContent(17,424.7914);
   16->SetBinContent(18,276.1144);
   16->SetBinContent(19,201.7759);
   16->SetBinContent(20,223.0155);
   16->SetBinContent(21,127.4375);
   16->SetBinContent(22,95.57809);
   16->SetBinContent(23,63.71873);
   16->SetBinContent(24,53.09894);
   16->SetBinContent(25,31.85936);
   16->SetBinContent(27,10.61979);
   16->SetBinContent(28,10.61979);
   16->SetBinContent(30,10.61979);
   16->SetBinContent(31,10.61979);
   16->SetEntries(1227);
   16->SetStats(0);

   ci = TColor::GetColor("#c2b0e8");
   16->SetFillColor(ci);

   ci = TColor::GetColor("#c2b0e8");
   16->SetLineColor(ci);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,100);
   17->SetBinContent(2,182.4617);
   17->SetBinContent(3,790.6673);
   17->SetBinContent(4,1702.976);
   17->SetBinContent(5,2432.823);
   17->SetBinContent(6,4196.619);
   17->SetBinContent(7,3649.234);
   17->SetBinContent(8,5473.856);
   17->SetBinContent(9,5838.781);
   17->SetBinContent(10,6021.243);
   17->SetBinContent(11,6811.914);
   17->SetBinContent(12,5230.573);
   17->SetBinContent(13,5777.96);
   17->SetBinContent(14,4257.44);
   17->SetBinContent(15,4379.082);
   17->SetBinContent(16,4379.082);
   17->SetBinContent(17,2980.208);
   17->SetBinContent(18,3101.849);
   17->SetBinContent(19,2007.078);
   17->SetBinContent(20,2372.002);
   17->SetBinContent(21,1155.591);
   17->SetBinContent(22,1338.052);
   17->SetBinContent(23,912.3084);
   17->SetBinContent(24,1033.95);
   17->SetBinContent(25,729.8467);
   17->SetBinContent(26,1033.95);
   17->SetBinContent(27,425.7439);
   17->SetBinContent(28,669.0262);
   17->SetBinContent(29,304.1028);
   17->SetBinContent(30,425.7439);
   17->SetBinContent(31,121.6411);
   17->SetBinContent(32,425.7439);
   17->SetBinContent(33,182.4617);
   17->SetBinContent(34,121.6411);
   17->SetBinContent(36,60.82056);
   17->SetBinContent(38,60.82056);
   17->SetBinContent(40,60.82056);
   17->SetBinContent(44,60.82056);
   17->SetEntries(1327);
   17->SetStats(0);

   ci = TColor::GetColor("#aec48b");
   17->SetFillColor(ci);

   ci = TColor::GetColor("#aec48b");
   17->SetLineColor(ci);
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
   
   TLegend *leg = new TLegend(0.8,0.2,0.98,0.95,NULL,"brNDC");
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
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
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
