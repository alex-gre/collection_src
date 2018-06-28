type Monster = object

public
    x_coordinate: integer;
    y_coordinate: integer;
    procedure init(init_x,init_y: integer);
    procedure moveme(new_x, new_y: integer);

end;


var zombie: monster;
procedure monster.init( init_x,init_y: integer);

begin
  x_coordinate := init_x;
  y_coordinate := init_y;
end;
procedure monster.moveme(new_x,new_y: integer);
begin
  x_coordinate := x_coordinate + new_x;
  y_coordinate := y_coordinate + new_y;
end;

begin
  writeln('For init zombie push ENTER');
  readln;
  zombie.init(15,20); 
  writeln('Coordinate zombie.x = ',zombie.x_coordinate);
  writeln('Coordinate zombie.y = ',zombie.y_coordinate);
  writeln('For move zombie push ENTER');
  readln;
  zombie.moveme(12,45);
  writeln('New coordinate zombie.x = ',zombie.x_coordinate);
  writeln('New coordinate zombie.y = ',zombie.y_coordinate);
 readln;
end.
