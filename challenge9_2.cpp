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
		cout << "x: " << x << " y: " << y << endl; 
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
	float getx(){
		return x; 
	}
	float gety(){
		return y; 
	}		 
};

class Line{
	private:
	Point p1,p2;
	public:
	Line(){ // default constructor
		Point p1(0.0,0.0); 
		Point p2(0.0,0.0);
	}
	Line(Point fp,Point sp){ // constructor 
		p1 = fp;
		p2 = sp;
	}
	void printout(){ // Print function 
		cout << "<1st Point>" << endl; 
		p1.printout();
		cout << "<2nd Point>" << endl;
		p2.printout();
	}
	Point midpoint(){ // returns a midpoint point object
		Point mid((p1.getx()+p2.getx())/2.0,(p1.gety()+p2.gety())/2.0);
		
		return mid; 
	}
};


int main(){
	Point p1(10.0,1.0); // setting varialbles for p1, p2 
	Point p2(5.0,1.0);	
	Line line(p1,p2);  // creating line object
	line.printout();   // line output 
	Point mid = line.midpoint();  // calling midpoint function 
	cout << "<Mid Point>" << endl; 
	mid.printout(); // printing midpoint 
}
	
