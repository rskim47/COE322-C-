#include <iostream>
using std::cout;
using std::endl;

int main() {
	int s = 1;
	int count = 0; 
	for (int i = 2; i < 100; i++)
	{
		s = i^2 + s; 
		count++;
		cout << s << endl; 
	}
	cout << count << endl;
	cout << s;

}
