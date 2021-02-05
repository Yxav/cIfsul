unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Label1: TLabel;
    procedure Button1Click(Sender: TObject);

    procedure Button1MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure FormCreate(Sender: TObject);
    procedure Label1Click(Sender: TObject);
    procedure Label1MouseEnter(Sender: TObject);
    procedure Label1MouseLeave(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;


implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.FormCreate(Sender: TObject);
begin

end;

procedure TForm1.Label1Click(Sender: TObject);
begin

end;

procedure TForm1.Label1MouseEnter(Sender: TObject);
begin
  Label1.Font.Color:=Random($FFFFFF);
end;

procedure TForm1.Label1MouseLeave(Sender: TObject);
begin
     Label1.Font.Color:=Random($FFFFFF);
end;

procedure TForm1.Button1Click(Sender: TObject);
begin
  Label1.Caption:= 'Me pegou :(';
  ShowMessage('DROGA, ME PEGASTE!');
end;



procedure TForm1.Button1MouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
    Button1.Left:=Random(form1.Width-111);
   Button1.Top:=Random(Form1.Height-31);
   Button1.Caption:='TENTE ME PEGAR';
   Label1.Caption:='HAHAHAHA';
   Label1.Font.Color:=Random($FFFFFF);
end;

end.

