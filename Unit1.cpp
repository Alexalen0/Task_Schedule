//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::addbtnClick(TObject *Sender)
{
		String tasktxt=taskedit->Text;
		tasklist->Items->Add(tasktxt);
		taskedit->Text="";

}
//---------------------------------------------------------------------------
void __fastcall TForm1::tasklistItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
		int index = Item->Index;
		tasklist->Items->Delete(index);

}
//---------------------------------------------------------------------------
