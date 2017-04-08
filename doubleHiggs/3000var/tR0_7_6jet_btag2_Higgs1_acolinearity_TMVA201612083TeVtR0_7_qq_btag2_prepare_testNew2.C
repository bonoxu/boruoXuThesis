{
//=========Macro generated from canvas: canvas1/
//=========  (Fri Apr  7 10:44:36 2017) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.8478413,-3.116919,4.13946,5.467518);
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
   
   TH1F *THStack_stack_22 = new TH1F("THStack_stack_22","",50,0,3.142);
   THStack_stack_22->SetMinimum(0.02680896);
   THStack_stack_22->SetMaximum(60361.91);
   THStack_stack_22->SetDirectory(0);
   THStack_stack_22->SetStats(0);
   THStack_stack_22->SetLineWidth(2);
   THStack_stack_22->SetMarkerSize(1.2);
   THStack_stack_22->GetXaxis()->SetTitle("Acolinearity of H#rightarrowbb sub-jets");
   THStack_stack_22->GetXaxis()->SetNdivisions(506);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#616161");
   THStack_stack_22->GetXaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_22->GetXaxis()->SetLabelColor(ci);
   THStack_stack_22->GetXaxis()->SetLabelFont(42);
   THStack_stack_22->GetXaxis()->SetLabelOffset(0.0015);
   THStack_stack_22->GetXaxis()->SetLabelSize(0.06);
   THStack_stack_22->GetXaxis()->SetTitleSize(0.07);
   THStack_stack_22->GetXaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_22->GetXaxis()->SetTitleColor(ci);
   THStack_stack_22->GetXaxis()->SetTitleFont(42);
   THStack_stack_22->GetYaxis()->SetTitle("Number of events");
   THStack_stack_22->GetYaxis()->SetNdivisions(506);

   ci = TColor::GetColor("#616161");
   THStack_stack_22->GetYaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_22->GetYaxis()->SetLabelColor(ci);
   THStack_stack_22->GetYaxis()->SetLabelFont(42);
   THStack_stack_22->GetYaxis()->SetLabelOffset(0.02);
   THStack_stack_22->GetYaxis()->SetLabelSize(0.06);
   THStack_stack_22->GetYaxis()->SetTitleSize(0.07);
   THStack_stack_22->GetYaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_22->GetYaxis()->SetTitleColor(ci);
   THStack_stack_22->GetYaxis()->SetTitleFont(42);

   ci = TColor::GetColor("#616161");
   THStack_stack_22->GetZaxis()->SetAxisColor(ci);

   ci = TColor::GetColor("#616161");
   THStack_stack_22->GetZaxis()->SetLabelColor(ci);
   THStack_stack_22->GetZaxis()->SetLabelFont(42);
   THStack_stack_22->GetZaxis()->SetLabelOffset(0.02);
   THStack_stack_22->GetZaxis()->SetLabelSize(0.06);
   THStack_stack_22->GetZaxis()->SetTitleSize(0.07);
   THStack_stack_22->GetZaxis()->SetTitleOffset(1.1);

   ci = TColor::GetColor("#212121");
   THStack_stack_22->GetZaxis()->SetTitleColor(ci);
   THStack_stack_22->GetZaxis()->SetTitleFont(42);
   THStack->SetHistogram(THStack_stack_22);
   
   
   TH1F *0 = new TH1F("0","#splitline{HH#nu#nu#rightarrowbbWW*#nu#nu,}{hadronic}",50,0,3.142);
   0->SetBinContent(1,0.049495);
   0->SetBinContent(2,0.158384);
   0->SetBinContent(3,0.29697);
   0->SetBinContent(4,0.356364);
   0->SetBinContent(5,0.4652528);
   0->SetBinContent(6,0.564243);
   0->SetBinContent(7,0.6236371);
   0->SetBinContent(8,0.7127283);
   0->SetBinContent(9,0.8018194);
   0->SetBinContent(10,0.9899008);
   0->SetBinContent(11,0.9107087);
   0->SetBinContent(12,1.069093);
   0->SetBinContent(13,0.9701028);
   0->SetBinContent(14,1.168083);
   0->SetBinContent(15,0.9997998);
   0->SetBinContent(16,1.366064);
   0->SetBinContent(17,1.435357);
   0->SetBinContent(18,1.158184);
   0->SetBinContent(19,1.415559);
   0->SetBinContent(20,1.425458);
   0->SetBinContent(21,1.435357);
   0->SetBinContent(22,1.524448);
   0->SetBinContent(23,1.465054);
   0->SetBinContent(24,1.356165);
   0->SetBinContent(25,1.50465);
   0->SetBinContent(26,1.653135);
   0->SetBinContent(27,1.762024);
   0->SetBinContent(28,1.870914);
   0->SetBinContent(29,1.80162);
   0->SetBinContent(30,2.068893);
   0->SetBinContent(31,2.36586);
   0->SetBinContent(32,2.237175);
   0->SetBinContent(33,2.435153);
   0->SetBinContent(34,2.702423);
   0->SetBinContent(35,2.613333);
   0->SetBinContent(36,2.939996);
   0->SetBinContent(37,3.187469);
   0->SetBinContent(38,3.068682);
   0->SetBinContent(39,3.672515);
   0->SetBinContent(40,3.820999);
   0->SetBinContent(41,3.969482);
   0->SetBinContent(42,3.890291);
   0->SetBinContent(43,4.296153);
   0->SetBinContent(44,4.038775);
   0->SetBinContent(45,3.98928);
   0->SetBinContent(46,3.058783);
   0->SetBinContent(47,1.841217);
   0->SetBinContent(48,0.7325263);
   0->SetBinContent(49,0.7622234);
   0->SetBinContent(50,1.069093);
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
   
   TH1F *1 = new TH1F("1","HH#nu#nu#rightarrowbbbb#nu#nu",50,0,3.142);
   1->SetBinContent(1,0.069286);
   1->SetBinContent(2,0.1831131);
   1->SetBinContent(3,0.2919911);
   1->SetBinContent(4,0.3513792);
   1->SetBinContent(5,0.5839819);
   1->SetBinContent(6,0.6384206);
   1->SetBinContent(7,0.8215326);
   1->SetBinContent(8,0.8314306);
   1->SetBinContent(9,0.8165836);
   1->SetBinContent(10,0.9897977);
   1->SetBinContent(11,1.068981);
   1->SetBinContent(12,0.9848487);
   1->SetBinContent(13,0.9452569);
   1->SetBinContent(14,1.167961);
   1->SetBinContent(15,1.187757);
   1->SetBinContent(16,1.054134);
   1->SetBinContent(17,1.088777);
   1->SetBinContent(18,1.21745);
   1->SetBinContent(19,1.088777);
   1->SetBinContent(20,1.232297);
   1->SetBinContent(21,1.163012);
   1->SetBinContent(22,1.291685);
   1->SetBinContent(23,1.21745);
   1->SetBinContent(24,1.242195);
   1->SetBinContent(25,1.177859);
   1->SetBinContent(26,1.455001);
   1->SetBinContent(27,1.271889);
   1->SetBinContent(28,1.380767);
   1->SetBinContent(29,1.519338);
   1->SetBinContent(30,1.351073);
   1->SetBinContent(31,1.662858);
   1->SetBinContent(32,1.593572);
   1->SetBinContent(33,1.682654);
   1->SetBinContent(34,1.667807);
   1->SetBinContent(35,1.949899);
   1->SetBinContent(36,1.75194);
   1->SetBinContent(37,1.746991);
   1->SetBinContent(38,2.133014);
   1->SetBinContent(39,2.177556);
   1->SetBinContent(40,2.177556);
   1->SetBinContent(41,2.395316);
   1->SetBinContent(42,2.350774);
   1->SetBinContent(43,2.850632);
   1->SetBinContent(44,2.504196);
   1->SetBinContent(45,2.523992);
   1->SetBinContent(46,2.266639);
   1->SetBinContent(47,1.415409);
   1->SetBinContent(48,0.5790329);
   1->SetBinContent(49,0.6829613);
   1->SetBinContent(50,0.8363795);
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
   
   TH1F *2 = new TH1F("2","HH#nu#nu#rightarrowother",50,0,3.142);
   2->SetBinContent(1,0.108878);
   2->SetBinContent(2,0.3909712);
   2->SetBinContent(3,0.5443901);
   2->SetBinContent(4,0.8165836);
   2->SetBinContent(5,0.9601039);
   2->SetBinContent(6,1.21745);
   2->SetBinContent(7,1.326328);
   2->SetBinContent(8,1.514389);
   2->SetBinContent(9,1.563879);
   2->SetBinContent(10,1.89546);
   2->SetBinContent(11,1.940001);
   2->SetBinContent(12,1.801429);
   2->SetBinContent(13,1.890511);
   2->SetBinContent(14,1.935052);
   2->SetBinContent(15,2.281487);
   2->SetBinContent(16,2.103319);
   2->SetBinContent(17,2.058777);
   2->SetBinContent(18,2.202301);
   2->SetBinContent(19,2.103319);
   2->SetBinContent(20,2.123116);
   2->SetBinContent(21,2.504196);
   2->SetBinContent(22,2.330977);
   2->SetBinContent(23,2.172606);
   2->SetBinContent(24,2.459654);
   2->SetBinContent(25,2.266639);
   2->SetBinContent(26,2.69721);
   2->SetBinContent(27,2.47945);
   2->SetBinContent(28,2.880327);
   2->SetBinContent(29,2.870429);
   2->SetBinContent(30,3.058494);
   2->SetBinContent(31,3.053545);
   2->SetBinContent(32,3.494014);
   2->SetBinContent(33,3.276254);
   2->SetBinContent(34,3.602894);
   2->SetBinContent(35,3.513811);
   2->SetBinContent(36,4.018618);
   2->SetBinContent(37,4.459087);
   2->SetBinContent(38,4.473935);
   2->SetBinContent(39,4.904506);
   2->SetBinContent(40,4.944098);
   2->SetBinContent(41,5.127215);
   2->SetBinContent(42,5.37467);
   2->SetBinContent(43,5.577582);
   2->SetBinContent(44,5.627073);
   2->SetBinContent(45,5.552837);
   2->SetBinContent(46,4.473935);
   2->SetBinContent(47,2.672465);
   2->SetBinContent(48,1.148165);
   2->SetBinContent(49,1.296634);
   2->SetBinContent(50,1.638113);
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
   
   TH1F *3 = new TH1F("3","Hbb#nu",50,0,3.142);
   3->SetBinContent(1,0.4051799);
   3->SetBinContent(2,1.55319);
   3->SetBinContent(3,2.36355);
   3->SetBinContent(4,3.005086);
   3->SetBinContent(5,4.592041);
   3->SetBinContent(6,4.929689);
   3->SetBinContent(7,6.347812);
   3->SetBinContent(8,6.550401);
   3->SetBinContent(9,6.786755);
   3->SetBinContent(10,7.765935);
   3->SetBinContent(11,8.171114);
   3->SetBinContent(12,8.204879);
   3->SetBinContent(13,9.487943);
   3->SetBinContent(14,9.217824);
   3->SetBinContent(15,8.745116);
   3->SetBinContent(16,10.197);
   3->SetBinContent(17,9.623002);
   3->SetBinContent(18,9.251589);
   3->SetBinContent(19,9.724297);
   3->SetBinContent(20,10.46712);
   3->SetBinContent(21,10.60218);
   3->SetBinContent(22,10.8723);
   3->SetBinContent(23,13.3709);
   3->SetBinContent(24,10.50089);
   3->SetBinContent(25,11.98654);
   3->SetBinContent(26,11.20995);
   3->SetBinContent(27,11.48007);
   3->SetBinContent(28,13.03325);
   3->SetBinContent(29,11.58136);
   3->SetBinContent(30,13.70855);
   3->SetBinContent(31,13.87737);
   3->SetBinContent(32,13.97867);
   3->SetBinContent(33,14.31631);
   3->SetBinContent(34,15.09291);
   3->SetBinContent(35,15.32926);
   3->SetBinContent(36,15.66691);
   3->SetBinContent(37,17.11883);
   3->SetBinContent(38,17.59155);
   3->SetBinContent(39,19.11101);
   3->SetBinContent(40,17.59155);
   3->SetBinContent(41,20.63047);
   3->SetBinContent(42,21.00189);
   3->SetBinContent(43,19.07724);
   3->SetBinContent(44,21.17072);
   3->SetBinContent(45,21.30579);
   3->SetBinContent(46,18.16557);
   3->SetBinContent(47,13.06702);
   3->SetBinContent(48,6.111458);
   3->SetBinContent(49,4.558276);
   3->SetBinContent(50,7.090639);
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
   
   TH1F *4 = new TH1F("4","Hcc#nu",50,0,3.142);
   4->SetBinContent(1,0.612248);
   4->SetBinContent(2,1.53062);
   4->SetBinContent(3,2.79885);
   4->SetBinContent(4,3.542297);
   4->SetBinContent(5,5.18224);
   4->SetBinContent(6,6.07874);
   4->SetBinContent(7,5.641423);
   4->SetBinContent(8,6.669117);
   4->SetBinContent(9,7.521885);
   4->SetBinContent(10,8.330922);
   4->SetBinContent(11,8.899434);
   4->SetBinContent(12,10.08019);
   4->SetBinContent(13,9.467946);
   4->SetBinContent(14,9.402349);
   4->SetBinContent(15,9.905263);
   4->SetBinContent(16,9.467946);
   4->SetBinContent(17,10.21138);
   4->SetBinContent(18,10.6487);
   4->SetBinContent(19,10.88923);
   4->SetBinContent(20,10.82363);
   4->SetBinContent(21,10.56124);
   4->SetBinContent(22,11.28281);
   4->SetBinContent(23,10.91109);
   4->SetBinContent(24,11.91692);
   4->SetBinContent(25,12.04812);
   4->SetBinContent(26,12.22304);
   4->SetBinContent(27,13.05394);
   4->SetBinContent(28,13.22887);
   4->SetBinContent(29,13.20701);
   4->SetBinContent(30,14.73761);
   4->SetBinContent(31,15.21866);
   4->SetBinContent(32,14.38776);
   4->SetBinContent(33,15.87464);
   4->SetBinContent(34,16.18076);
   4->SetBinContent(35,17.40525);
   4->SetBinContent(36,17.64577);
   4->SetBinContent(37,19.15452);
   4->SetBinContent(38,20.05102);
   4->SetBinContent(39,19.50437);
   4->SetBinContent(40,19.6137);
   4->SetBinContent(41,20.92565);
   4->SetBinContent(42,20.96938);
   4->SetBinContent(43,19.50437);
   4->SetBinContent(44,21.10058);
   4->SetBinContent(45,19.76676);
   4->SetBinContent(46,16.57435);
   4->SetBinContent(47,9.97086);
   4->SetBinContent(48,4.28574);
   4->SetBinContent(49,4.854252);
   4->SetBinContent(50,8.155995);
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
   
   TH1F *5 = new TH1F("5","Hqq#nu",50,0,3.142);
   5->SetBinContent(1,1.337542);
   5->SetBinContent(2,4.477862);
   5->SetBinContent(3,6.048023);
   5->SetBinContent(4,8.839419);
   5->SetBinContent(5,10.29327);
   5->SetBinContent(6,14.71298);
   5->SetBinContent(7,15.41083);
   5->SetBinContent(8,18.95819);
   5->SetBinContent(9,18.26035);
   5->SetBinContent(10,22.73814);
   5->SetBinContent(11,26.40179);
   5->SetBinContent(12,25.7621);
   5->SetBinContent(13,25.99472);
   5->SetBinContent(14,27.09963);
   5->SetBinContent(15,30.47251);
   5->SetBinContent(16,27.39039);
   5->SetBinContent(17,31.11219);
   5->SetBinContent(18,33.72914);
   5->SetBinContent(19,33.43837);
   5->SetBinContent(20,35.24117);
   5->SetBinContent(21,36.98582);
   5->SetBinContent(22,36.28796);
   5->SetBinContent(23,36.17165);
   5->SetBinContent(24,40.82406);
   5->SetBinContent(25,40.47513);
   5->SetBinContent(26,45.76724);
   5->SetBinContent(27,45.65093);
   5->SetBinContent(28,50.71042);
   5->SetBinContent(29,52.1643);
   5->SetBinContent(30,52.92031);
   5->SetBinContent(31,53.79264);
   5->SetBinContent(32,57.10748);
   5->SetBinContent(33,59.43368);
   5->SetBinContent(34,66.29582);
   5->SetBinContent(35,69.9012);
   5->SetBinContent(36,73.39027);
   5->SetBinContent(37,76.99565);
   5->SetBinContent(38,76.06523);
   5->SetBinContent(39,83.9738);
   5->SetBinContent(40,86.59061);
   5->SetBinContent(41,87.23027);
   5->SetBinContent(42,90.83565);
   5->SetBinContent(43,91.30086);
   5->SetBinContent(44,91.64977);
   5->SetBinContent(45,88.6259);
   5->SetBinContent(46,72.86691);
   5->SetBinContent(47,38.67232);
   5->SetBinContent(48,16.69021);
   5->SetBinContent(49,22.79629);
   5->SetBinContent(50,40.94037);
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
   
   TH1F *6 = new TH1F("6","e^{#pm}#gamma#rightarrowqqH#nu",50,0,3.142);
   6->SetBinContent(1,87.70674);
   6->SetBinContent(2,239.4385);
   6->SetBinContent(3,406.0825);
   6->SetBinContent(4,527.1188);
   6->SetBinContent(5,633.2449);
   6->SetBinContent(6,782.3477);
   6->SetBinContent(7,844.6201);
   6->SetBinContent(8,970.0418);
   6->SetBinContent(9,1053.364);
   6->SetBinContent(10,1084.939);
   6->SetBinContent(11,1110.374);
   6->SetBinContent(12,1115.636);
   6->SetBinContent(13,1155.982);
   6->SetBinContent(14,1210.36);
   6->SetBinContent(15,1205.098);
   6->SetBinContent(16,1170.015);
   6->SetBinContent(17,1158.613);
   6->SetBinContent(18,1163.875);
   6->SetBinContent(19,1143.703);
   6->SetBinContent(20,1139.317);
   6->SetBinContent(21,1165.63);
   6->SetBinContent(22,1169.138);
   6->SetBinContent(23,1191.942);
   6->SetBinContent(24,1220.008);
   6->SetBinContent(25,1262.985);
   6->SetBinContent(26,1314.732);
   6->SetBinContent(27,1301.576);
   6->SetBinContent(28,1383.144);
   6->SetBinContent(29,1350.692);
   6->SetBinContent(30,1438.4);
   6->SetBinContent(31,1534.001);
   6->SetBinContent(32,1529.616);
   6->SetBinContent(33,1568.207);
   6->SetBinContent(34,1678.719);
   6->SetBinContent(35,1685.735);
   6->SetBinContent(36,1766.426);
   6->SetBinContent(37,1815.542);
   6->SetBinContent(38,1803.263);
   6->SetBinContent(39,1979.555);
   6->SetBinContent(40,1941.841);
   6->SetBinContent(41,2039.196);
   6->SetBinContent(42,2039.196);
   6->SetBinContent(43,2080.415);
   6->SetBinContent(44,2061.999);
   6->SetBinContent(45,2004.113);
   6->SetBinContent(46,1601.536);
   6->SetBinContent(47,975.3043);
   6->SetBinContent(48,469.2319);
   6->SetBinContent(49,571.8497);
   6->SetBinContent(50,977.9355);
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
   
   TH1F *7 = new TH1F("7","qqqq#nu#nu",50,0,3.142);
   7->SetBinContent(1,7.181978);
   7->SetBinContent(2,28.58979);
   7->SetBinContent(3,42.5394);
   7->SetBinContent(4,56.62712);
   7->SetBinContent(5,68.91936);
   7->SetBinContent(6,84.25011);
   7->SetBinContent(7,96.95669);
   7->SetBinContent(8,106.4866);
   7->SetBinContent(9,116.7071);
   7->SetBinContent(10,124.4416);
   7->SetBinContent(11,137.9774);
   7->SetBinContent(12,150.6846);
   7->SetBinContent(13,152.6184);
   7->SetBinContent(14,160.7676);
   7->SetBinContent(15,169.4693);
   7->SetBinContent(16,171.1268);
   7->SetBinContent(17,177.7567);
   7->SetBinContent(18,182.8672);
   7->SetBinContent(19,181.0716);
   7->SetBinContent(20,183.9722);
   7->SetBinContent(21,198.3369);
   7->SetBinContent(22,207.3149);
   7->SetBinContent(23,202.4806);
   7->SetBinContent(24,224.0277);
   7->SetBinContent(25,213.2542);
   7->SetBinContent(26,234.525);
   7->SetBinContent(27,224.9946);
   7->SetBinContent(28,236.735);
   7->SetBinContent(29,249.5804);
   7->SetBinContent(30,258.2821);
   7->SetBinContent(31,267.6744);
   7->SetBinContent(32,277.8955);
   7->SetBinContent(33,284.8016);
   7->SetBinContent(34,296.1277);
   7->SetBinContent(35,319.8848);
   7->SetBinContent(36,344.8849);
   7->SetBinContent(37,368.9183);
   7->SetBinContent(38,403.0345);
   7->SetBinContent(39,404.5539);
   7->SetBinContent(40,445.8525);
   7->SetBinContent(41,488.3943);
   7->SetBinContent(42,539.0853);
   7->SetBinContent(43,586.5994);
   7->SetBinContent(44,630.2462);
   7->SetBinContent(45,686.3239);
   7->SetBinContent(46,699.3074);
   7->SetBinContent(47,525.1349);
   7->SetBinContent(48,224.0277);
   7->SetBinContent(49,150.2703);
   7->SetBinContent(50,249.8566);
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
   
   TH1F *8 = new TH1F("8","qqqqll",50,0,3.142);
   8->SetBinContent(1,1.84776);
   8->SetBinContent(2,1.84776);
   8->SetBinContent(3,11.08656);
   8->SetBinContent(4,13.8582);
   8->SetBinContent(5,11.08656);
   8->SetBinContent(6,17.55372);
   8->SetBinContent(7,20.32536);
   8->SetBinContent(8,19.40148);
   8->SetBinContent(9,20.32536);
   8->SetBinContent(10,17.55372);
   8->SetBinContent(11,13.8582);
   8->SetBinContent(12,22.17311);
   8->SetBinContent(13,24.94475);
   8->SetBinContent(14,16.62984);
   8->SetBinContent(15,19.40148);
   8->SetBinContent(16,17.55372);
   8->SetBinContent(17,17.55372);
   8->SetBinContent(18,20.32536);
   8->SetBinContent(19,13.8582);
   8->SetBinContent(20,18.4776);
   8->SetBinContent(21,16.62984);
   8->SetBinContent(22,15.70596);
   8->SetBinContent(23,18.4776);
   8->SetBinContent(24,15.70596);
   8->SetBinContent(25,12.93432);
   8->SetBinContent(26,19.40148);
   8->SetBinContent(27,23.09699);
   8->SetBinContent(28,18.4776);
   8->SetBinContent(29,17.55372);
   8->SetBinContent(30,12.93432);
   8->SetBinContent(31,15.70596);
   8->SetBinContent(32,21.24924);
   8->SetBinContent(33,28.64027);
   8->SetBinContent(34,21.24924);
   8->SetBinContent(35,20.32536);
   8->SetBinContent(36,28.64027);
   8->SetBinContent(37,32.33579);
   8->SetBinContent(38,45.27013);
   8->SetBinContent(39,61.9);
   8->SetBinContent(40,57.28059);
   8->SetBinContent(41,77.60599);
   8->SetBinContent(42,97.93138);
   8->SetBinContent(43,106.2463);
   8->SetBinContent(44,142.2776);
   8->SetBinContent(45,171.8415);
   8->SetBinContent(46,234.665);
   8->SetBinContent(47,217.1114);
   8->SetBinContent(48,85.92092);
   8->SetBinContent(49,49.88954);
   8->SetBinContent(50,53.58507);
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
   
   TH1F *9 = new TH1F("9","qqqql#nu",50,0,3.142);
   9->SetBinContent(1,10.10997);
   9->SetBinContent(2,31.64859);
   9->SetBinContent(3,44.83551);
   9->SetBinContent(4,62.41806);
   9->SetBinContent(5,83.07772);
   9->SetBinContent(6,101.1);
   9->SetBinContent(7,99.78129);
   9->SetBinContent(8,136.2653);
   9->SetBinContent(9,138.4631);
   9->SetBinContent(10,159.1224);
   9->SetBinContent(11,152.0894);
   9->SetBinContent(12,169.6718);
   9->SetBinContent(13,164.8367);
   9->SetBinContent(14,178.0235);
   9->SetBinContent(15,155.6059);
   9->SetBinContent(16,170.1114);
   9->SetBinContent(17,171.8696);
   9->SetBinContent(18,168.7927);
   9->SetBinContent(19,197.8036);
   9->SetBinContent(20,163.9575);
   9->SetBinContent(21,189.8916);
   9->SetBinContent(22,198.6828);
   9->SetBinContent(23,191.6498);
   9->SetBinContent(24,200.8806);
   9->SetBinContent(25,205.2762);
   9->SetBinContent(26,199.1223);
   9->SetBinContent(27,233.408);
   9->SetBinContent(28,238.2432);
   9->SetBinContent(29,249.2322);
   9->SetBinContent(30,261.1005);
   9->SetBinContent(31,273.4086);
   9->SetBinContent(32,291.8707);
   9->SetBinContent(33,336.2678);
   9->SetBinContent(34,325.2784);
   9->SetBinContent(35,360.4445);
   9->SetBinContent(36,366.1589);
   9->SetBinContent(37,401.325);
   9->SetBinContent(38,439.568);
   9->SetBinContent(39,493.6357);
   9->SetBinContent(40,505.9438);
   9->SetBinContent(41,563.0886);
   9->SetBinContent(42,639.1351);
   9->SetBinContent(43,691.4446);
   9->SetBinContent(44,827.7129);
   9->SetBinContent(45,961.7833);
   9->SetBinContent(46,1106.843);
   9->SetBinContent(47,989.037);
   9->SetBinContent(48,465.5029);
   9->SetBinContent(49,335.8282);
   9->SetBinContent(50,366.5985);
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
   
   TH1F *10 = new TH1F("10","e^{#pm}#gamma#rightarrowqqqq#nu",50,0,3.142);
   10->SetBinContent(1,161.5841);
   10->SetBinContent(2,458.2534);
   10->SetBinContent(3,722.6065);
   10->SetBinContent(4,1045.769);
   10->SetBinContent(5,1301.097);
   10->SetBinContent(6,1530.805);
   10->SetBinContent(7,1823.689);
   10->SetBinContent(8,2010.6);
   10->SetBinContent(9,2205.437);
   10->SetBinContent(10,2356.309);
   10->SetBinContent(11,2480.386);
   10->SetBinContent(12,2613.492);
   10->SetBinContent(13,2676.695);
   10->SetBinContent(14,2737.568);
   10->SetBinContent(15,2758.539);
   10->SetBinContent(16,2805.432);
   10->SetBinContent(17,2843.878);
   10->SetBinContent(18,2848.538);
   10->SetBinContent(19,2916.984);
   10->SetBinContent(20,2933.004);
   10->SetBinContent(21,2973.198);
   10->SetBinContent(22,3018.343);
   10->SetBinContent(23,3082.42);
   10->SetBinContent(24,3066.983);
   10->SetBinContent(25,3124.944);
   10->SetBinContent(26,3184.361);
   10->SetBinContent(27,3234.166);
   10->SetBinContent(28,3334.36);
   10->SetBinContent(29,3468.63);
   10->SetBinContent(30,3481.737);
   10->SetBinContent(31,3535.038);
   10->SetBinContent(32,3678.046);
   10->SetBinContent(33,3818.433);
   10->SetBinContent(34,3861.54);
   10->SetBinContent(35,4075.616);
   10->SetBinContent(36,4191.457);
   10->SetBinContent(37,4286.619);
   10->SetBinContent(38,4375.379);
   10->SetBinContent(39,4547.66);
   10->SetBinContent(40,4681.818);
   10->SetBinContent(41,4780.764);
   10->SetBinContent(42,4820.342);
   10->SetBinContent(43,4955.373);
   10->SetBinContent(44,4934.711);
   10->SetBinContent(45,4936.457);
   10->SetBinContent(46,4516.23);
   10->SetBinContent(47,3225.72);
   10->SetBinContent(48,1526.729);
   10->SetBinContent(49,1385.527);
   10->SetBinContent(50,2424.464);
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
   
   TH1F *11 = new TH1F("11","e^{#pm}#gamma#rightarrowqqqqe",50,0,3.142);
   11->SetBinContent(1,61.04166);
   11->SetBinContent(2,213.6458);
   11->SetBinContent(3,335.7292);
   11->SetBinContent(4,579.8958);
   11->SetBinContent(5,274.6875);
   11->SetBinContent(6,518.8542);
   11->SetBinContent(7,549.375);
   11->SetBinContent(8,518.8542);
   11->SetBinContent(9,732.4999);
   11->SetBinContent(10,610.4166);
   11->SetBinContent(11,640.9374);
   11->SetBinContent(12,671.4583);
   11->SetBinContent(13,396.7708);
   11->SetBinContent(14,610.4166);
   11->SetBinContent(15,854.5831);
   11->SetBinContent(16,518.8542);
   11->SetBinContent(17,457.8125);
   11->SetBinContent(18,457.8125);
   11->SetBinContent(19,518.8542);
   11->SetBinContent(20,488.3334);
   11->SetBinContent(21,701.9791);
   11->SetBinContent(22,488.3334);
   11->SetBinContent(23,610.4166);
   11->SetBinContent(24,183.125);
   11->SetBinContent(25,610.4166);
   11->SetBinContent(26,610.4166);
   11->SetBinContent(27,366.25);
   11->SetBinContent(28,549.375);
   11->SetBinContent(29,457.8125);
   11->SetBinContent(30,305.2083);
   11->SetBinContent(31,763.0207);
   11->SetBinContent(32,610.4166);
   11->SetBinContent(33,701.9791);
   11->SetBinContent(34,671.4583);
   11->SetBinContent(35,671.4583);
   11->SetBinContent(36,579.8958);
   11->SetBinContent(37,732.4999);
   11->SetBinContent(38,763.0207);
   11->SetBinContent(39,854.5831);
   11->SetBinContent(40,1068.229);
   11->SetBinContent(41,1098.75);
   11->SetBinContent(42,1068.229);
   11->SetBinContent(43,1129.271);
   11->SetBinContent(44,1159.792);
   11->SetBinContent(45,1220.833);
   11->SetBinContent(46,1526.042);
   11->SetBinContent(47,1129.271);
   11->SetBinContent(48,671.4583);
   11->SetBinContent(49,335.7292);
   11->SetBinContent(50,488.3334);
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
   
   TH1F *12 = new TH1F("12","qqqq",50,0,3.142);
   12->SetBinContent(1,59.4244);
   12->SetBinContent(2,146.0553);
   12->SetBinContent(3,215.5032);
   12->SetBinContent(4,290.678);
   12->SetBinContent(5,322.1794);
   12->SetBinContent(6,373.0114);
   12->SetBinContent(7,380.8867);
   12->SetBinContent(8,362.9882);
   12->SetBinContent(9,320.7476);
   12->SetBinContent(10,312.1562);
   12->SetBinContent(11,293.5417);
   12->SetBinContent(12,231.9702);
   12->SetBinContent(13,242.7095);
   12->SetBinContent(14,217.651);
   12->SetBinContent(15,220.5149);
   12->SetBinContent(16,180.4212);
   12->SetBinContent(17,173.9776);
   12->SetBinContent(18,178.9893);
   12->SetBinContent(19,127.4404);
   12->SetBinContent(20,162.5223);
   12->SetBinContent(21,139.6116);
   12->SetBinContent(22,143.1914);
   12->SetBinContent(23,153.9308);
   12->SetBinContent(24,148.9191);
   12->SetBinContent(25,138.8957);
   12->SetBinContent(26,143.9074);
   12->SetBinContent(27,149.6351);
   12->SetBinContent(28,148.2031);
   12->SetBinContent(29,166.818);
   12->SetBinContent(30,186.8649);
   12->SetBinContent(31,196.8883);
   12->SetBinContent(32,207.6276);
   12->SetBinContent(33,206.1957);
   12->SetBinContent(34,219.0829);
   12->SetBinContent(35,239.8457);
   12->SetBinContent(36,262.7562);
   12->SetBinContent(37,283.5186);
   12->SetBinContent(38,315.02);
   12->SetBinContent(39,340.7939);
   12->SetBinContent(40,389.478);
   12->SetBinContent(41,478.2549);
   12->SetBinContent(42,439.594);
   12->SetBinContent(43,567.0317);
   12->SetBinContent(44,603.5448);
   12->SetBinContent(45,729.5507);
   12->SetBinContent(46,804.7246);
   12->SetBinContent(47,847.6812);
   12->SetBinContent(48,877.7507);
   12->SetBinContent(49,675.855);
   12->SetBinContent(50,562.0201);
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
   
   TH1F *13 = new TH1F("13","#gamma#gamma#rightarrowqqqq",50,0,3.142);
   13->SetBinContent(1,676.1434);
   13->SetBinContent(2,2808.594);
   13->SetBinContent(3,3640.77);
   13->SetBinContent(4,5097.083);
   13->SetBinContent(5,6501.386);
   13->SetBinContent(6,7853.678);
   13->SetBinContent(7,8165.745);
   13->SetBinContent(8,7957.7);
   13->SetBinContent(9,8165.745);
   13->SetBinContent(10,8217.756);
   13->SetBinContent(11,8061.723);
   13->SetBinContent(12,7645.633);
   13->SetBinContent(13,6137.307);
   13->SetBinContent(14,7385.577);
   13->SetBinContent(15,7385.577);
   13->SetBinContent(16,6657.419);
   13->SetBinContent(17,6397.363);
   13->SetBinContent(18,5409.15);
   13->SetBinContent(19,5461.161);
   13->SetBinContent(20,6137.307);
   13->SetBinContent(21,5513.172);
   13->SetBinContent(22,6397.363);
   13->SetBinContent(23,5565.184);
   13->SetBinContent(24,4680.993);
   13->SetBinContent(25,6085.296);
   13->SetBinContent(26,5357.139);
   13->SetBinContent(27,6137.307);
   13->SetBinContent(28,6241.33);
   13->SetBinContent(29,6761.442);
   13->SetBinContent(30,6553.397);
   13->SetBinContent(31,5721.217);
   13->SetBinContent(32,6553.397);
   13->SetBinContent(33,6761.442);
   13->SetBinContent(34,7853.678);
   13->SetBinContent(35,7437.588);
   13->SetBinContent(36,8581.831);
   13->SetBinContent(37,8893.896);
   13->SetBinContent(38,9934.11);
   13->SetBinContent(39,9882.1);
   13->SetBinContent(40,11390.41);
   13->SetBinContent(41,12066.55);
   13->SetBinContent(42,10870.3);
   13->SetBinContent(43,12638.67);
   13->SetBinContent(44,13106.77);
   13->SetBinContent(45,15499.26);
   13->SetBinContent(46,14563.07);
   13->SetBinContent(47,11806.5);
   13->SetBinContent(48,6969.487);
   13->SetBinContent(49,4941.049);
   13->SetBinContent(50,7073.509);
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
   
   TH1F *14 = new TH1F("14","qq#nu#nu",50,0,3.142);
   14->SetBinContent(1,277.6373);
   14->SetBinContent(2,1036.513);
   14->SetBinContent(3,1499.238);
   14->SetBinContent(4,2110.037);
   14->SetBinContent(5,2554.26);
   14->SetBinContent(6,3137.302);
   14->SetBinContent(7,3387.177);
   14->SetBinContent(8,3720.344);
   14->SetBinContent(9,3303.886);
   14->SetBinContent(10,3655.562);
   14->SetBinContent(11,3618.543);
   14->SetBinContent(12,3618.543);
   14->SetBinContent(13,3266.867);
   14->SetBinContent(14,3109.538);
   14->SetBinContent(15,2896.682);
   14->SetBinContent(16,2878.172);
   14->SetBinContent(17,2498.732);
   14->SetBinContent(18,2304.385);
   14->SetBinContent(19,2276.621);
   14->SetBinContent(20,1980.473);
   14->SetBinContent(21,1767.619);
   14->SetBinContent(22,1638.056);
   14->SetBinContent(23,1573.275);
   14->SetBinContent(24,1462.22);
   14->SetBinContent(25,1341.912);
   14->SetBinContent(26,1203.094);
   14->SetBinContent(27,1212.348);
   14->SetBinContent(28,1212.348);
   14->SetBinContent(29,1286.385);
   14->SetBinContent(30,1267.875);
   14->SetBinContent(31,990.2397);
   14->SetBinContent(32,1018.003);
   14->SetBinContent(33,962.476);
   14->SetBinContent(34,879.1848);
   14->SetBinContent(35,971.7306);
   14->SetBinContent(36,1166.076);
   14->SetBinContent(37,1138.312);
   14->SetBinContent(38,1138.312);
   14->SetBinContent(39,999.4943);
   14->SetBinContent(40,1082.785);
   14->SetBinContent(41,823.6573);
   14->SetBinContent(42,897.694);
   14->SetBinContent(43,934.7123);
   14->SetBinContent(44,805.1482);
   14->SetBinContent(45,684.8387);
   14->SetBinContent(46,499.7472);
   14->SetBinContent(47,360.9285);
   14->SetBinContent(48,185.0915);
   14->SetBinContent(49,148.0732);
   14->SetBinContent(50,212.8553);
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
   
   TH1F *15 = new TH1F("15","qqll",50,0,3.142);
   15->SetBinContent(1,224.374);
   15->SetBinContent(2,476.7948);
   15->SetBinContent(3,645.0754);
   15->SetBinContent(4,1037.73);
   15->SetBinContent(5,785.3091);
   15->SetBinContent(6,1318.198);
   15->SetBinContent(7,1121.87);
   15->SetBinContent(8,1262.104);
   15->SetBinContent(9,1009.683);
   15->SetBinContent(10,925.5429);
   15->SetBinContent(11,1121.87);
   15->SetBinContent(12,1121.87);
   15->SetBinContent(13,785.3091);
   15->SetBinContent(14,645.0754);
   15->SetBinContent(15,813.3559);
   15->SetBinContent(16,785.3091);
   15->SetBinContent(17,588.9819);
   15->SetBinContent(18,645.0754);
   15->SetBinContent(19,532.8884);
   15->SetBinContent(20,645.0754);
   15->SetBinContent(21,448.7481);
   15->SetBinContent(22,588.9819);
   15->SetBinContent(23,476.7948);
   15->SetBinContent(24,617.0286);
   15->SetBinContent(25,476.7948);
   15->SetBinContent(26,476.7948);
   15->SetBinContent(27,532.8884);
   15->SetBinContent(28,420.7013);
   15->SetBinContent(29,560.9351);
   15->SetBinContent(30,308.5143);
   15->SetBinContent(31,308.5143);
   15->SetBinContent(32,392.6546);
   15->SetBinContent(33,336.5611);
   15->SetBinContent(34,392.6546);
   15->SetBinContent(35,336.5611);
   15->SetBinContent(36,504.8416);
   15->SetBinContent(37,336.5611);
   15->SetBinContent(38,448.7481);
   15->SetBinContent(39,336.5611);
   15->SetBinContent(40,420.7013);
   15->SetBinContent(41,364.6078);
   15->SetBinContent(42,280.4676);
   15->SetBinContent(43,224.374);
   15->SetBinContent(44,392.6546);
   15->SetBinContent(45,252.4208);
   15->SetBinContent(46,168.2805);
   15->SetBinContent(47,196.3273);
   15->SetBinContent(48,84.14027);
   15->SetBinContent(49,56.09351);
   15->SetBinContent(50,280.4676);
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
   
   TH1F *16 = new TH1F("16","qql#nu",50,0,3.142);
   16->SetBinContent(1,31.85936);
   16->SetBinContent(2,159.2968);
   16->SetBinContent(3,244.2551);
   16->SetBinContent(4,339.8331);
   16->SetBinContent(5,329.2133);
   16->SetBinContent(6,424.7914);
   16->SetBinContent(7,456.6507);
   16->SetBinContent(8,594.7081);
   16->SetBinContent(9,435.4111);
   16->SetBinContent(10,361.0727);
   16->SetBinContent(11,488.51);
   16->SetBinContent(12,435.4111);
   16->SetBinContent(13,435.4111);
   16->SetBinContent(14,382.3122);
   16->SetBinContent(15,297.354);
   16->SetBinContent(16,307.9738);
   16->SetBinContent(17,329.2133);
   16->SetBinContent(18,244.2551);
   16->SetBinContent(19,244.2551);
   16->SetBinContent(20,223.0155);
   16->SetBinContent(21,265.4946);
   16->SetBinContent(22,180.5364);
   16->SetBinContent(23,148.677);
   16->SetBinContent(24,191.1562);
   16->SetBinContent(25,201.7759);
   16->SetBinContent(26,169.9166);
   16->SetBinContent(27,180.5364);
   16->SetBinContent(28,169.9166);
   16->SetBinContent(29,106.1979);
   16->SetBinContent(30,191.1562);
   16->SetBinContent(31,148.677);
   16->SetBinContent(32,148.677);
   16->SetBinContent(33,265.4946);
   16->SetBinContent(34,159.2968);
   16->SetBinContent(35,276.1144);
   16->SetBinContent(36,212.3957);
   16->SetBinContent(37,223.0155);
   16->SetBinContent(38,212.3957);
   16->SetBinContent(39,233.6353);
   16->SetBinContent(40,254.8748);
   16->SetBinContent(41,361.0727);
   16->SetBinContent(42,223.0155);
   16->SetBinContent(43,254.8748);
   16->SetBinContent(44,276.1144);
   16->SetBinContent(45,286.7342);
   16->SetBinContent(46,212.3957);
   16->SetBinContent(47,169.9166);
   16->SetBinContent(48,95.57809);
   16->SetBinContent(49,148.677);
   16->SetBinContent(50,297.354);
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
   
   TH1F *17 = new TH1F("17","qq",50,0,3.142);
   17->SetBinContent(1,729.8467);
   17->SetBinContent(2,1702.976);
   17->SetBinContent(3,2372.002);
   17->SetBinContent(4,2676.105);
   17->SetBinContent(5,4196.619);
   17->SetBinContent(6,4014.157);
   17->SetBinContent(7,4865.648);
   17->SetBinContent(8,4804.827);
   17->SetBinContent(9,3649.234);
   17->SetBinContent(10,3284.31);
   17->SetBinContent(11,3101.849);
   17->SetBinContent(12,1581.335);
   17->SetBinContent(13,2007.078);
   17->SetBinContent(14,2250.361);
   17->SetBinContent(15,1824.617);
   17->SetBinContent(16,1338.052);
   17->SetBinContent(17,1642.155);
   17->SetBinContent(18,1094.77);
   17->SetBinContent(19,1155.591);
   17->SetBinContent(20,1094.77);
   17->SetBinContent(21,729.8467);
   17->SetBinContent(22,669.0262);
   17->SetBinContent(23,1459.693);
   17->SetBinContent(24,973.129);
   17->SetBinContent(25,912.3084);
   17->SetBinContent(26,669.0262);
   17->SetBinContent(27,912.3084);
   17->SetBinContent(28,1216.411);
   17->SetBinContent(29,1094.77);
   17->SetBinContent(30,608.2056);
   17->SetBinContent(31,851.4879);
   17->SetBinContent(32,1277.232);
   17->SetBinContent(33,1033.95);
   17->SetBinContent(34,973.129);
   17->SetBinContent(35,912.3084);
   17->SetBinContent(36,912.3084);
   17->SetBinContent(37,790.6673);
   17->SetBinContent(38,1520.514);
   17->SetBinContent(39,973.129);
   17->SetBinContent(40,1824.617);
   17->SetBinContent(41,1459.693);
   17->SetBinContent(42,790.6673);
   17->SetBinContent(43,912.3084);
   17->SetBinContent(44,973.129);
   17->SetBinContent(45,1277.232);
   17->SetBinContent(46,1398.873);
   17->SetBinContent(47,1277.232);
   17->SetBinContent(48,729.8467);
   17->SetBinContent(49,669.0262);
   17->SetBinContent(50,1520.514);
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
