#include <iostream> 
#include <random> 

using std::cout;
using std::endl; 

class Rectangle {
	 private: // This is only viewable within the object!
	 double l,h;
	 public: // This is available to public - anything outside of this class!
	 Rectangle(){ //default constructor
		 }
	 Rectangle( double l,double h ) { //secondary constructor
		 l = length; 
		 h = height;
	 }
 	 double getlength() { return l; }; // accessor
	 double getheight() { return h; };
	 void setlength(double length) { l = length; }
	 void setheight(double height) { h = height; }

	 double area() { return l*h;}
 	 double perimeter { return 2*(l+h); }
	 int Scale(double factor){
		l = l*factor;
		h = h*factor; 
	}

	 void printSummary(){
		cout << "Rectangle Summary: " << endl; 
		cout << "Length:" << l << endl; 
		cout << "Width: " << w << endl;
		cout << "Height: " << h << endl;
		cout << "Area: " << area() << endl; 
		cout << "Perimeter" << perimeter() << endl;
	}
};

class Square : Rectangle{
	public:
		Square(){
		}
		Square(double side) : Rectangle(side,side){};
		void setlength(double side){
			l = side;
			h = side; 
		}	
};

int main() {
	Rectangle myR = Rectangle(100, 50);
	cout << myR.printSummary << endl; 

	Rectangle mySquare = Rectangle(100,100);
	cout << mySquare.printSummary() << endl;
}
