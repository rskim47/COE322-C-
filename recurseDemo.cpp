//Name: Sungsoo Kim (sk38224)
//Program: In class challenge 5a 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int recurse(int i) 
{
	if (i == 0)
	{
		return 0; 
	}
	return i + recurse(i-1); // recursion
}
int main()
{
	int sum = 0; // initializing sum
	sum = recurse(100); // calling recursion function
	cout << sum << endl; // output result
}
