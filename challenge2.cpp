#include <iostream>
using std::cout;
using std::endl;
#include <time.h>
int main () {
	int counth = 0;
	int countt = 0;
	for ( int i = 0; i < 1000000; i++) {
		srand (time(NULL));
		int rand();
		int random_number = rand();
		if (random_number%2 == 0) {
		counth++; //count heads
		}
		else {
		countt++; //count tails 
		}
	}
	cout << "Total number of Heads is: " << counth << endl;
	cout << "Total number of Tails is: " << countt << endl;
}
