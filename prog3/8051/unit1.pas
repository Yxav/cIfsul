unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    btEnviar: TButton;
    CaixaTexto: TEdit;
    edSobrenome: TEdit;
    lbInput: TLabel;
    lbName: TLabel;
    lbSobrenome: TLabel;
    procedure btEnviarClick(Sender: TObject);
    procedure lbNameClick(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.lbNameClick(Sender: TObject);
begin

end;

procedure TForm1.btEnviarClick(Sender: TObject);
begin
  lbInput.Caption:=CaixaTexto.Text + ' ' + edSobrenome.Text;
  if CaixaTexto.Text = 'Sandro' then;
     begin
     ShowMessage('ALERTA DE CORNO!!! CHAMANDO TODOS OS CORNOS!!! O CORNO MESTRE FOI ENCONTRADO');
     end;
end;



end.

