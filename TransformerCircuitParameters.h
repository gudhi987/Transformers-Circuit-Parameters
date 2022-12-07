//---------------------------------------------------------------------------

#ifndef TransformerCircuitParametersH
#define TransformerCircuitParametersH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <math.h>
using namespace std;
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *OpenCircuitVoltage;
	TEdit *OpenCircuitCurrent;
	TEdit *OpenCircuitPower;
	TEdit *ShortCircuitVoltage;
	TEdit *ShortCircuitCurrent;
	TEdit *ShortCircuitPower;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TButton *EnterButton;
	TLabel *Label7;
	TEdit *Edit1;
	TLabel *Label8;
	TEdit *Edit2;
	TLabel *Label9;
	TEdit *Edit3;
	TLabel *Label10;
	TEdit *Edit4;
	TLabel *Label11;
	void __fastcall EnterButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
