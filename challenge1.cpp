#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	double side_a;
	double side_b;
	cout << "Enter side a value ";
	cin >> side_a; 
	cout << "Enter side b value ";
	cin >> side_b;
	double side_c = sqrt(pow(side_a,2)+pow(side_b,2));
	cout << "With a side a of " << side_a << " and aside b of " << side_b <<  endl;
	cout << "The hypotenuse is = " << side_c << endl;
	double angle1 = asin(side_a / side_c); 
	double angle2 = asin(side_b / side_c);
	angle1 = (angle1 / M_PI) * 180; 
	angle2 = (angle2 / M_PI) * 180;
	cout << "The angle 1 is = " << angle1 << " degrees" << endl;
	cout << "The angle 2 is = " << angle2 << " degrees" << endl; 
} 
