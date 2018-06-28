#include <iostream>

using namespace std;

class monster{

public: 
        int x_coordinate;
	int y_coordinate;
        void initialize(int, int);
	void moveme(int, int);
};

void monster::initialize(int init_x, int init_y){

        x_coordinate = init_x;
	y_coordinate = init_y;
}

void monster::moveme(int new_x, int new_y){

	x_coordinate = x_coordinate + new_x;
	y_coordinate = y_coordinate + new_y;
}

//================== main ================

int main(){

 monster zombie;
 zombie.initialize(12,15);
 cout <<"\n"; 
 cout << " Coordinate X object zombie = " << 
         zombie.x_coordinate << endl;
 
 cout << " Coordinate Y object zombie = " << 
         zombie.y_coordinate << endl;

 cout << "\nFor move monster push ENTER" << endl;
 getchar();

 zombie.moveme(34,9);
 cout << " New coordinate X object zombie = " << 
         zombie.x_coordinate << endl;
 
 cout << " New coordinate Y object zombie = " << 
         zombie.y_coordinate << endl;
 cout << "\nFor exit push ENTER" << endl;
 getchar();
 return 0;
}