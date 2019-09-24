unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    btSendIt: TButton;
    btClear: TButton;
    Button3: TButton;
    edQIt: TEdit;
    edNIt: TEdit;
    edQMIt: TEdit;
    edNMIt: TEdit;
    Label1: TLabel;
    Quantidade: TLabel;
    lbIt: TListBox;
    procedure btClearClick(Sender: TObject);
    procedure btSendItClick(Sender: TObject);
    procedure Button3Click(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;
  counter: Integer = 0;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.btSendItClick(Sender: TObject);
begin
     counter:=counter+1;
     lbIt.Items.Add(IntToStr(counter)+'            '+edQIt.Text+'      '+edNIt.Text);
     if counter = 1 then edQMIt.Text:='0';
     if StrToInt(edQIt.Text) > StrToInt(edQMIt.Text) then
        begin
        edQMIt.Text:=edQIt.Text;
        edNMIt.Text:=edNIt.Text;
        end;
     edQIt.SetFocus;
end;

procedure TForm1.btClearClick(Sender: TObject);
begin
  lbIt.Items.Text:='Num.It  Quant.It Nome.It';
  counter:=0;
  edQMIt.Text:='';
  edNMIt.Text:='';
  edQIt.Text:='';
  edNIt.Text:='';
  edQIt.SetFocus;
end;

procedure TForm1.Button3Click(Sender: TObject);
begin
  Close;
end;

end.

