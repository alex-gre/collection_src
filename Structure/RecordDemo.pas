//RecordDemo.pas
{======type record pascal = struct c_lang=====}

program TypeRecord;
type goods = record
	name:    string[45];
	price:   real;
	percent: real;
        vol:     integer;
	date:    string[25];
    end;

var coat: goods;
    f: text;
begin
  writeln('������� ������������ : ');
  readln(coat.name);
  writeln('������� ������� ���� : ');
  readln(coat.price);
  writeln('������� �������: ');
  readln(coat.percent);
  writeln('������� ����� ������ ����: ');
  readln(coat.vol);
  writeln('������� ���� ��������: ');
  readln(coat.date);

  assign(f,'my.dat');
  rewrite(f);

   writeln(f,'����� ������ �� �����...');
   writeln(f,'������������ ������ ',coat.name);
   writeln(f,'������� ���� ������ ',coat.price:3:2);
   writeln(f,'������� ������ ',coat.percent:3:2);
   writeln(f,'����� ������ ���� ������ ',coat.percent:3:2);
   writeln(f,'���� �������� ������ ',coat.date);

   close(f);
end.

