#include <iostream>
#include <random>
#include <vector>

using std::cout;
using std::endl; 
using std::vector; 

int main()
{
	vector<int> x; // Vector declration
	int r = 0; // Holds random numbers 
	while (r != 42)
	{
		r = 100. * rand()/RAND_MAX; // Generating random numbers
		x.push_back(r);  // size extending 
		cout << r << endl; // values of vector components 
	
	}	
	cout << "The size of vector is: " << x.size() << endl; // size output 
}
