#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct coord {
	float x;
	float y; // global variable 
}

int main(){
	int food; 
	coord point1; 
	point1.x = 2.0;
	point1.y = 4.0;
	cout << point1 << endl;
}
