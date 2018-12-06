#include <iostream> 

using std::cin;
using std::endl;
using std::cout;

struct myStruct{
	int number;
	int *numPointer;
};

int main(){
	int n = 500; 
	int* iPointer;

	iPointer = &n;
	
	cout << "Value of n: " << n << endl;
	cout << "Address of n: " << &n << endl;
	cout << endl;
	cout << "Memory Address of *where* the pointer is pointing to  " << iPointer << endl; 
	cout << "The *VALUE* of what the pointer is pointing to? " << *iPointer << endl; 

	cout << "Memory address of iPointer: " << &iPointer << endl; 
	
	myStruct customStruct;
	customStruct.number = 600; 
	customStruct.numPointer = &n;

	myStruct* pointerToStructure;
	
	pointerToStructure = &customStruct;
	cout << "Value of pointerStruct pointing to number;" << (*pointerToStructure).number << endl;
	cout << "can also be written as " << pointerToStructure->number << endl; 

}
