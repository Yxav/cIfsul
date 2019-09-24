unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    edN3: TEdit;
    edN1: TEdit;
    edN2: TEdit;
    Label1: TLabel;
    lbResult: TLabel;
    procedure Button1Click(Sender: TObject);
    procedure edN1Change(Sender: TObject);
    procedure edN3Change(Sender: TObject);
    procedure Label1Click(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.edN1Change(Sender: TObject);
begin

end;

procedure TForm1.edN3Change(Sender: TObject);
begin

end;

procedure TForm1.Label1Click(Sender: TObject);
begin

end;

procedure TForm1.Button1Click(Sender: TObject);
begin
   if edN3.Text = '+' then
   begin
    lbResult.Caption:= IntToStr(StrToInt(edN1.Text)+StrToInt(edN2.Text));
   end;
   if edN3.Text = '-' then
   begin
    lbResult.Caption:= IntToStr(StrToInt(edN1.Text)-StrToInt(edN2.Text));
   end;
   if edN3.Text = '/' then
   begin
    lbResult.Caption:= (StrToInt(edN1.Text)/StrToInt(edN2.Text)).ToString();
   end;
   if edN3.Text = '*' then
   begin
    lbResult.Caption:= IntToStr(StrToInt(edN1.Text)*StrToInt(edN2.Text));
   end;

end;

end.

