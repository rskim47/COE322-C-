#include <iostream>
#include <cmath>  

using std::cout; 
using std::endl;

class Point{
	private: 
	float x,y; 
	public:
	Point(){ // default constructor 
		float x,y;
		x = 0; 
		y = 0;
	}
	Point(float xcoord, float ycoord) {
		x = xcoord; 
		y = ycoord; 
	}	
	float distance_to_origin(){ // calculates the distance of point from origin
		float dist;
		dist = sqrt(pow(x,2) + pow(y,2)); 
		return dist; 
	}
	void printout(){ // outputs the coordinates 
		cout << "x coordinate: " << x << " y coordinate: " << y << endl; 
	} 
	float distance(Point point2){ // calculates distance between a point and p2 
		float dist;
		dist = sqrt(pow(x-point2.x,2) + pow(y-point2.y,2)); 
		return dist;
	} 
	void setx(float newx){ // x setter
		x = newx; 
	}
	void sety(float newy){ // y setter 
		y  = newy;
	}		 
};

int main(){
	Point p1(10.0,1.0); // setting varialbles for p1, p2 
	Point p2(5.0,1.0);	
 	p1.printout(); // calling object methods
	p2.printout();
	float dist;
	cout << "The distance of p1 from origin is: " << p1.distance_to_origin() << endl; 
	cout << "The distance between p1 and p2 is: " << p1.distance(p2) << endl;
}
	
