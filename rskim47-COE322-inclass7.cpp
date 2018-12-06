#include <iostream>
#include <math.h> 

using std::endl;
using std::cout; 

struct triangle {
	float side1; // 1st side
	float side2; // 2nd side
	float hside; // hypotenuse
	float angle1; // 1st angle
	float angle2; // 2nd angle
	float rangle; // right angle 
};


int main() {
	triangle c, c2;
	c.side1 = 3.;
	c.side2 = 4.;
	c2.side1 = 5.;
	c2.side2 = 12.;
	c.rangle = 90.; 
	c2.rangle = 90; 
	
	c.hside = sqrt(pow(c.side1,2) + pow(c.side2,2));
	c2.hside = sqrt(pow(c2.side1,2) + pow(c2.side2,2));  
	
	c.angle1 = asin(c.side1 / c.side2) * 180 / M_PI;
	c2.angle1 = asin(c2.side1 / c2.side2) * 180 / M_PI; 

	c.angle2 = 90 - c.angle1;
 	c2.angle2 = 90 - c2.angle1; 

	cout << "--- Triangle 1 ---" << endl;
	cout << "Theta 1    : " << c.angle1 << " Degrees" << endl;
        cout << "Theta 2    : " << c.angle2 << " Degrees" << endl;
        cout << "Right angle: " << c.rangle << " Degrees" << endl;
        cout << "Hypotenuse : " << c.hside << endl;

	cout << "--- Triangle 2 ---" << endl;
	cout << "Theta 1    : " << c2.angle1 << " Degrees" << endl;
	cout << "Theta 2    : " << c2.angle2 << " Degrees" << endl;
	cout << "Right angle: " << c2.rangle << " Degrees" << endl;
	cout << "Hypotenuse : " << c2.hside << endl; 
}
