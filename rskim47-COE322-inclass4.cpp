#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::string;
using std::cin;

bool function(double &side_1,double &side_2,double &side_3,double &angle1, double &angle2);
// declaring function 
int main(){
        double side_a; // declaring variables 
        double side_b;
	double side_c; 
	double anglea;
	double angleb;
        cout << "Enter side a value: ";
        cin >> side_a; // 1st side input
        cout << "Enter side b value: ";
        cin >> side_b; // 2nd side input
        cout << "With a side a of " << side_a << " and a side b of " << side_b << endl;
	bool check = function(side_a, side_b, side_c, anglea, angleb); //calling pass by reference function  
        cout << "The hypotenuse is = " << side_c << endl;
        cout << "The 1st  angle is = " << anglea << " degrees" <<  endl;
        cout << "The 2nd  angle is = " << angleb << " degrees" << endl;
}

bool function(double &side_1,double &side_2,double &side_3,double &angle1, double &angle2){
        side_3 = sqrt(pow(side_1,2)+pow(side_2,2)); // calc. hypotenuse
	angle1 = asin(side_1 / side_2) * 180 / M_PI; // calc. 1st angle
	angle2 = 90 - angle1; // calc. 2nd angle 
        return true;
}

