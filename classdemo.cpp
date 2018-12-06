#include <iostream> 
#include <random>

using std::cout;
using std::endl;

class Point {
	private: 
		double px, py; 
	public:
		Point() { // default constructor 
			px = 1; py = 1; 
		};
		Point( double x, double y) { // secondary constructor 
			px = x; py = y;
		};
		double getx() { // accessor 
			return px;
		};
		double gety() {
			return py; 
		};
		void setx(double x) {
			px = x;
		};
		void sety(double y) {
			py = y; 
		};	
		void printPoint() {
			cout <<  px << ", py: " << py << endl; 
		};
		double distance(Point point2) {
			return sqrt(pow(px-point2.getx(),2) + pow(py-point2.gety(),2));
		};
		Point factorPoint(double f) {
			Point p3(px * f, py * f);
			return p3;
		};
};

int main() {
	Point p1; // instantiating (instance) 
	p1.printPoint(); 

	Point p2(3.5,7.8);
	p2.printPoint();

	Point newpoint = p1.factorPoint(2); 
	newpoint.printPoint();

	cout << "distance between p1 and p2: " << p1.distance(p2) << endl;
}
