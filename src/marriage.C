#include <iostream>
#include <string>

#include <TCanvas.h>
#include <TLegend.h>
#include <TMarker.h>
#include <TStyle.h>
#include <TLatex.h>
#include <TLine.h>
#include <TH2.h>

void marriage(){

gStyle->SetOptStat(0) ;
gStyle->SetPadTickX(1) ;
gStyle->SetPadTickY(1) ;
TCanvas* canvas = new TCanvas("canvas","",100,100,1200,1200) ;
canvas->SetGridx() ;
canvas->SetGridy() ;

const int n = 88 ;
std::string names[n] ;
float women[n] ;
float men[n] ;

{
names[0] = "Cameroon" ;
women[0] = 25 ;
men[0] = 12.1 ;

names[1] = "Chad" ;
women[1] = 24.1 ;
men[1] = 18.0 ;

names[2] = "Egypt" ;
women[2] = 23.9 ;
men[2] = 24.2 ;

names[3] = "Kenya" ;
women[3] = 26.3 ;
men[3] = 21.6 ;

names[4] = "Libya" ;
women[4] = 32.0 ;
men[4] = 29.2 ;

names[5] = "Mozambique" ;
women[5] = 22.6 ;
men[5] = 18.0 ;

names[6] = "Niger" ;
women[6] = 23.9 ;
men[6] = 13.6 ;

names[7] = "South Africa" ;
women[7] = 28.9 ;
men[7] = 27.1 ;

names[8] = "Togo" ;
women[8] = 27.0 ;
men[8] = 21.3 ;

names[9] = "Nigeria" ;
women[9] = 19 ;
men[9] = 20.2 ;

names[10] = "Argentina" ;
women[10] = 25.6 ;
men[10] = 23.3 ;

names[11] = "Brazil" ;
women[11] = 28 ;
men[11] = 26 ;

names[12] = "Canada" ;
women[12] = 31.1 ;
men[12] = 29.1 ;

names[13] = "Guatemala" ;
women[13] = 27.5 ;
men[13] = 24 ;

names[14] = "Mexico" ;
women[14] = 29 ;
men[14] = 26 ;

names[15] = "Peru" ;
women[15] = 25.7 ;
men[15] = 31.2 ;

names[16] = "United States" ;
women[16] = 28.9 ;
men[16] = 26.9 ;

names[17] = "Armenia" ;
women[17] = 28.4 ;
men[17] = 24.5 ;

names[18] = "Azerbaijan" ;
women[18] = 27.3 ;
men[18] = 23.1 ;

names[19] = "Bangladesh" ;
women[19] = 19.9 ;
men[19] = 25.1 ;

names[20] = "Pakistan" ;
women[20] = 26.3 ;
men[20] = 22.8 ;

names[21] = "China" ;
women[21] = 24 ;
men[21] = 22 ;

names[22] = "Georgia" ;
women[22] = 28.8 ;
men[22] = 25.1 ;

names[23] = "Hong Kong" ;
women[23] = 31.2 ;
men[23] = 28.9 ;

names[24] = "India" ;
women[24] = 26 ;
men[24] = 22.2 ;

names[25] = "Indonesia" ;
women[25] = 25.2 ;
men[25] = 24.6 ;

names[26] = "Iran" ;
women[26] = 29.8 ;
men[26] = 26.8 ;

names[27] = "Iraq" ;
women[27] = 24.5 ;
men[27] = 24.0 ;

names[28] = "Israel" ;
women[28] = 31.5 ;
men[28] = 24.8 ;

names[29] = "Japan" ;
women[29] = 30.5 ;
men[29] = 28.8 ;

names[30] = "Lebanon" ;
women[30] = 32.8 ;
men[30] = 28.8 ;

names[31] = "Philippines" ;
women[31] = 25.8 ;
men[31] = 19.3 ;

names[32] = "Singapore" ;
women[32] = 30.0 ;
men[32] = 28.5 ;

names[33] = "South Korea" ;
women[33] = 32.1 ;
men[33] = 29.4 ;

names[34] = "Taiwan" ;
women[34] = 31.6 ;
men[34] = 28.9 ;

names[35] = "Tajikistan" ;
women[35] = 26.2 ;
men[35] = 22.4 ;

names[36] = "Kazakhstan" ;
women[36] = 26.8 ;
men[36] = 24.1 ;

names[37] = "Kyrgyzstan" ;
women[37] = 26.7 ;
men[37] = 23.4 ;

names[38] = "Kuwait" ;
women[38] = 27 ;
men[38] = 27 ;

names[39] = "Malaysia" ;
women[39] = 28.0 ;
men[39] = 25.7 ;

names[40] = "Mongolia" ;
women[40] = 26.2 ;
men[40] = 24.2 ;

names[41] = "Myanmar" ;
women[41] = 27.5 ;
men[41] = 26.4 ;

names[42] = "Nepal" ;
women[42] = 22.0 ;
men[42] = 18.8 ;

names[43] = "Saudi Arabia" ;
women[43] = 28.0 ;
men[43] = 14.0 ;

names[44] = "Vietnam" ;
women[44] = 26.2 ;
men[44] = 22.8 ;

names[45] = "Uzbekistan" ;
women[45] = 25.2 ;
men[45] = 22.4 ;

names[46] = "Yemen" ;
women[46] = 28.0 ;
men[46] = 11.5 ;

names[47] = "Albania" ;
women[47] = 27.7 ;
men[47] = 22.4 ;

names[48] = "Austria" ;
women[48] = 31.7 ;
men[48] = 28.9 ;

names[49] = "Belarus" ;
women[49] = 26.0 ;
men[49] = 23.9 ;

names[50] = "Belgium" ;
women[50] = 30.7 ;
men[50] = 28.5 ;

names[51] = "Bosnia and Herzegovina" ;
women[51] = 28.3 ;
men[51] = 24.9 ;

names[52] = "Bulgaria" ;
women[52] = 30.0 ;
men[52] = 26.9 ;

names[53] = "Croatia" ;
women[53] = 29.7 ;
men[53] = 26.8 ;

names[54] = "Czech Republic" ;
women[54] = 32.4 ;
men[54] = 29.6 ;

names[55] = "Denmark" ;
women[55] = 34.8 ;
men[55] = 32.4 ;

names[56] = "Estonia" ;
women[56] = 29.6 ;
men[56] = 27.2 ;

names[57] = "Finland" ;
women[57] = 32.5 ;
men[57] = 30.2 ;

names[58] = "France" ;
women[58] = 31.6 ;
men[58] = 29.6 ;

names[59] = "Germany" ;
women[59] = 33.0 ;
men[59] = 30.0 ;

names[60] = "Greece" ;
women[60] = 31.8 ;
men[60] = 28.9 ;

names[61] = "Hungary" ;
women[61] = 30.4 ;
men[61] = 27.9 ;

names[62] = "Iceland" ;
women[62] = 34.3 ;
men[62] = 32.1 ;

names[63] = "Ireland" ;
women[63] = 34.1 ;
men[63] = 32.0 ;

names[64] = "Italy" ;
women[64] = 32.8 ;
men[64] = 29.7 ;

names[65] = "Latvia" ;
women[65] = 28.8 ;
men[65] = 26.7 ;

names[66] = "Lithuania" ;
women[66] = 28.0 ;
men[66] = 25.7 ;

names[67] = "Macedonia" ;
women[67] = 27.7 ;
men[67] = 24.7 ;

names[68] = "Malta" ;
women[68] = 29.6 ;
men[68] = 27.5 ;

names[69] = "Moldova" ;
women[69] = 25.8 ;
men[69] = 23.0 ;

names[70] = "Montenegro" ;
women[70] = 30.0 ;
men[70] = 25.9 ;

names[71] = "Netherlands" ;
women[71] = 33.1 ;
men[71] = 30.4 ;

names[72] = "Norway" ;
women[72] = 33.4 ;
men[72] = 31.1 ;

names[73] = "Poland" ;
women[73] = 27.5 ;
men[73] = 25.6 ;

names[74] = "Portugal" ;
women[74] = 31 ;
men[74] = 29.5 ;

names[75] = "Romania" ;
women[75] = 30.9 ;
men[75] = 27.5 ;

names[76] = "Russia" ;
women[76] = 26.1 ;
men[76] = 23.3 ;

names[77] = "Serbia" ;
women[77] = 29.8 ;
men[77] = 26.6 ;

names[78] = "Slovakia" ;
women[78] = 31.9 ;
men[78] = 28.8 ;

names[79] = "Slovenia" ;
women[79] = 30.9 ;
men[79] = 28.4 ;

names[80] = "Spain" ;
women[80] = 32 ;
men[80] = 29.8 ;

names[81] = "Sweden" ;
women[81] = 35.1 ;
men[81] = 32.5 ;

names[82] = "Switzerland" ;
women[82] = 31.4 ;
men[82] = 29.1 ;

names[83] = "Turkey" ;
women[83] = 26.7 ;
men[83] = 23.4 ;

names[84] = "Ukraine" ;
women[84] = 25.9 ;
men[84] = 23.1 ;

names[85] = "United Kingdom" ;
women[85] = 30.7 ;
men[85] = 28.5 ;

names[86] = "Australia" ;
women[86] = 29.6 ;
men[86] = 27.7 ;

names[87] = "New Zealand" ;
women[87] = 29.2 ;
men[87] = 27.3 ;
}

float women_min = 1e6 ;
float women_max = 0 ;

float men_min = 1e6 ;
float men_max = 0 ;

for(int i=0 ; i<n ; i++){
  if(women[i] < women_min) women_min = women[i] ;
  if(women[i] > women_max) women_max = women[i] ;
  if(  men[i] < men_min  )   men_min =   men[i] ;
  if(  men[i] > men_max  )   men_max =   men[i] ;
}
women_min -=  2 ;
women_max +=  2 ;
men_min   -=  2 ;
men_max   +=  2 ;

float overall_min = std::min(men_min, women_min) ;
float overall_max = std::max(men_max, women_max) ;

int nBins = 1000 ;
TH2I* h_nations = new TH2I("nations", "", nBins, overall_min, overall_max, nBins, overall_min, overall_max) ;
h_nations->GetXaxis()->SetTitle("Women's average age at first marriage (years)") ;
h_nations->GetYaxis()->SetTitle(  "Men's average age at first marriage (years)") ;
h_nations->Draw() ;

TLine* equal_line = new TLine(overall_min, overall_min, overall_max, overall_max) ;
equal_line->SetLineColor(kGreen+3) ;
equal_line->SetLineStyle(kSolid  ) ;

float sx  = 0 ;
float sy  = 0 ;
float sxx = 0 ;
float syy = 0 ;
float sxy = 0 ;

for(int i=0 ; i<n ; i++){
  sx  += women[i] ;
  sy  +=   men[i] ;
  sxx += women[i]*women[i] ;
  syy +=   men[i]*men[i] ;
  sxy += women[i]*men[i] ;
}
float mx = sx/n ;
float my = sy/n ;
float SSxx = sxx - n*mx*mx ;
float SSyy = syy - n*my*my ;
float SSxy = sxy - n*mx*my ;

float b = SSxy/SSxx ;
float a = my - b*mx ;

float low  = a + b*overall_min ;
float high = a + b*overall_max ;

TLine* bestFit_line = new TLine(overall_min, a+b*overall_min, high, overall_max) ;
bestFit_line->SetLineColor(kRed   ) ;
bestFit_line->SetLineStyle(kDotted) ;

low  = 7 + 0.5*overall_min ;
high = 7 + 0.5*overall_max ;
TLine* halfHisAgePlus7_line = new TLine(low, overall_min, high, overall_max) ;
halfHisAgePlus7_line->SetLineColor(kBlue  ) ;
halfHisAgePlus7_line->SetLineStyle(kDashed) ;

TLine* halfHerAgePlus7_line = new TLine(overall_min, low, overall_max, high) ;
halfHerAgePlus7_line->SetLineColor(kMagenta) ;
halfHerAgePlus7_line->SetLineStyle(kDashed ) ;

TLegend* legend = new TLegend(0.5, 0.3, 0.8, 0.2) ;
legend->SetFillColor(0) ;
legend->SetBorderSize(0) ;
legend->SetShadowColor(0) ;
legend->AddEntry(equal_line          , "Line of equality", "l") ;
legend->AddEntry(bestFit_line        , "Line of best fit", "l") ;
legend->AddEntry(halfHisAgePlus7_line, "Half his age + 7", "l") ;
legend->AddEntry(halfHerAgePlus7_line, "Half her age + 7", "l") ;

TLatex* latex[n] ;
TMarker* markers[n] ;
for(int i=0 ; i<n ; i++){
  markers[i] = new TMarker(men[i],women[i],20) ;
  std::string name = names[i] ;
  latex[i] = new TLatex(men[i]+0.2,women[i],Form("%s",name.c_str())) ;
  latex[i]->SetTextSize(0.008) ;
  latex[i]->SetTextAngle(-30) ;
  
  markers[i]->Draw() ;
  latex[i]->Draw() ;
}
equal_line->Draw() ;
bestFit_line->Draw() ;
halfHisAgePlus7_line->Draw() ;
halfHerAgePlus7_line->Draw() ;
legend->Draw() ;
canvas->Print("marriage.eps") ;
canvas->Print("marriage.png") ;

}