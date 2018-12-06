//Name: Sungsoo Kim(sk388224)
//Program: In class challenge 6
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int recurse(int i){
	if (i < 2)
	{
		return 1;
	}
	return recurse(i-1) + recurse(i-2);
}

int main(){
	int fibo = 0; //fibonacci number
	int n;  // n for the number
	cout << "Enter the n for fibonacci number: "; // user input for n 
	cin >> n;  // input
	fibo = recurse(n); // calling fibonacci (recursion) function
	cout << fibo << endl; // output
}
