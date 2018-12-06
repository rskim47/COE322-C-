#include <iostream>
#include <cmath>
#include <time.h>
using std::cout;
using std::endl;
int main () {
	srand(time(NULL));
	int rand();
	int random_number = rand();
	cout << "The random number is " << random_number << endl;
	if (random_number % 2 == 0)
	{
		cout << " Heads! " << endl;
	}
	else 
	{
		cout << " Tails! " << endl;
	}
}

