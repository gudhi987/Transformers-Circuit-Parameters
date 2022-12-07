//---------------------------------------------------------------------------

#include <fmx.h>
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <math.h>
#pragma hdrstop

#include "TransformerCircuitParameters.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
using namespace std;
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EnterButtonClick(TObject *Sender)
{
	std::string temp1=AnsiString(OpenCircuitVoltage->Text).c_str();
	std::string temp2=AnsiString(OpenCircuitCurrent->Text).c_str();
	std::string temp3=AnsiString(OpenCircuitPower->Text).c_str();
	std::string temp4=AnsiString(ShortCircuitVoltage->Text).c_str();
	std::string temp5=AnsiString(ShortCircuitCurrent->Text).c_str();
	std::string temp6=AnsiString(ShortCircuitPower->Text).c_str();
//	std::string temp7=AnsiString(TurnsRatio->Text).c_str();
//	int ans=stoi(temp7)*stoi(temp7);
	double powerfactor=stod(temp3)/(stod(temp1)*stod(temp2));
	Edit1->Text=to_string(stof(temp1)/(stof(temp2)*powerfactor)).c_str();
	Edit2->Text=to_string(stof(temp1)/(stof(temp2)*(sqrt(1-pow(powerfactor,2))))).c_str();
	Edit3->Text=to_string(stof(temp6)/pow(stod(temp5),2)).c_str();
	double req1=stof(temp6)/pow(stod(temp5),2);
	double req2=stof(temp4)/stof(temp5);
    Edit4->Text=to_string(sqrt(pow(req2,2)-pow(req1,2))).c_str();
}
//---------------------------------------------------------------------------
