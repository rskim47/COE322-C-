#include <iostream> 

using std::cout;
using std::endl; 

int main()
{
	int n = 5;
	int &q = n;

	cout << n << endl;
	cout << q << endl;
	
	q = 2000;	

	cout << n << endl;
}
