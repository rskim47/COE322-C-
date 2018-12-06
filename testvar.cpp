#include <iostream> 
using std::cout;
using std::endl;

int main(){
	int variable = 1100;
	cout << "variable = " << variable << endl;
	cout << "variable memory reference address = " << &variable << endl;
	char letter = 'J';
	char &newletter = letter;
	newletter = 'Z';
	cout << letter << endl;
}
