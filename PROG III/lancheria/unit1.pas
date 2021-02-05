unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, ExtCtrls, StdCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    btPedido: TButton;
    Button2: TButton;
    Button3: TButton;
    cbFideli: TCheckBox;
    cgAddit: TCheckGroup;
    cbSalsicha: TCheckBox;
    edValorT: TEdit;
    edValorP: TEdit;
    Label1: TLabel;
    Label2: TLabel;
    rgLanches: TRadioGroup;
    procedure btPedidoClick(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button3Click(Sender: TObject);

    procedure rgLanchesSelectionChanged(Sender: TObject);

  private

  public

  end;

var
  Form1: TForm1;


implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.Button3Click(Sender: TObject);
begin
  Close;
end;




procedure TForm1.rgLanchesSelectionChanged(Sender: TObject);
begin
  if rgLanches.ItemIndex <> 1 then
     begin
     cbSalsicha.Enabled:=FALSE;
     cbSalsicha.Checked:=FALSE;
  end else
      cbSalsicha.Enabled:=TRUE;

end;


procedure TForm1.Button2Click(Sender: TObject);
begin
  rgLanches.ItemIndex:=-1;
  cgAddit.Checked[0]:=FALSE;
  cgAddit.Checked[1]:=FALSE;
  cbSalsicha.Checked:=FALSE;
  cbFideli.Checked:=FALSE;
  edValorP.Text:='';
  edValorT.Text:='';
  rgLanches.SetFocus;
end;

procedure TForm1.btPedidoClick(Sender: TObject);
var
    precot: Real = 0;
  precor: Real = 0;
begin
     case rgLanches.ItemIndex of
          0: precot:= 12;
          1: precot:= 5;
          2: precot:= 8.5;
     end;
     if cgAddit.Checked[0] then
        precot:= precot + 1.5;
     if cgAddit.Checked[1] then
        precot:= precot + 1.5;
     if cbSalsicha.Checked then
        precot:= precot + 1.5;
     precor:= precot*0.9;
     edValorT.Text:=FloatToStr(precot);
     edvalorP.Text:=FloatToStr(precot);
     if cbFideli.Checked then
        edvalorP.Text:=FloatToStr(precor);
     ShowMessage('Pedido realizado com sucesso! Você deverá desembolsar R$ '+edValorP.Text);

end;

end.

