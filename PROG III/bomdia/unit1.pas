unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls, ExtCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    cebola: TImage;
    Label1: TLabel;
    procedure btBomduaClick(Sender: TObject);
    procedure cebolaClick(Sender: TObject);
    procedure TextoBomDiaClick(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.btBomduaClick(Sender: TObject);
begin

end;

procedure TForm1.cebolaClick(Sender: TObject);
begin
      ShowMessage('bom diA');
end;

procedure TForm1.TextoBomDiaClick(Sender: TObject);
begin

end;

end.

