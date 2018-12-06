#include <iostream>
#include <math.h> 

using std::endl;
using std::cout; 

class Triangle{
	private:
	float side1, side2, hside, angle1, angle2, rangle;
	public:
	Triangle(){ // default constructor 
		float side1, side2, hside, angle1, angle2, rangle; 
		side1 = 0;
		side2 = 0;
		hside = 0;
		angle1 = 0; 
		angle2 = 0;
		rangle = 0; 
	}
	Triangle(float s1, float s2){ // constructor with two length input 
		side1 = s1;
		side2 = s2; 
		hside = 0;
		angle1 = 0; 
		angle2 = 0; 
		rangle = 90; 
	}
	void output(){ // outputs all variables of the object
		cout << "CURRENTLY  : the traingle of length: " << side1 << " and " << side2 << endl;
		cout << "Theta 1    : " << angle1 << endl;
		cout << "Theta 2    : " << angle2 << endl;
		cout << "Right angle: " << rangle << endl; 
		cout << "Hypotenuse : " << hside << endl;
		cout << endl;
	}		
	void hypotenuse(){ // sets the hypotenuse of the triangle
		hside = sqrt(pow(side1,2)+pow(side2,2));
	}
	void angle(){ // calculates the two unknown angles 
		angle1 = asin(side1/hside) * 180 / M_PI;
		angle2 = 90 - angle1;
	}
};

int main(){
	Triangle t1(3.0,4.0); // creating Triangle object
	t1.hypotenuse();      // calling hypotenuse function
	t1.angle();	      // calling angle function
	t1.output();	      // outputting different variables 
}
	 
