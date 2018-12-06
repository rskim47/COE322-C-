//Email: rickkim95@utexas.edu
//EID: sk38224
#include <iostream>
#include <iostream>
#include <cmath> 
using std::cout;
using std::endl;
using std::string;
using std::cin;

double hypotenuse(double side_1,double side_2); 
double angle1(double side_1,double side_2); 

int main(){
	double side_a;
        double side_b;
        cout << "Enter side a value: ";
        cin >> side_a; // 1st side input
        cout << "Enter side b value: ";
        cin >> side_b; // 2nd side input
	cout << "With a side a of " << side_a << " and a side b of " << side_b << endl;
	double side_c = hypotenuse(side_a,side_b); //calling hypotenuse() function
	double anglea = angle1(side_a,side_b); // calling angle1() function
	double angleb = angle1(side_a,side_c); // calling angle1() function 
	cout << "The hypotenuse is = " << side_c << endl;
	cout << "The 1st  angle is = " << anglea << " degrees" <<  endl;
	cout << "The 2nd  angle is = " << angleb << " degrees" << endl;
}


double hypotenuse(double side_1,double side_2){
        double side_3 = sqrt(pow(side_1,2)+pow(side_2,2)); // calc. hypotenuse
	return side_3;
}	
double angle1(double side_1,double side_2){	
        double angle1 = asin(side_1 / side_2); // angle in radians
        angle1 = (angle1 / M_PI) * 180; // angle in degrees 
	return angle1; 
}

