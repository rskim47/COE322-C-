#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct roomTemp{
	float x = 0;
	float y = 0; 
	float z = 0;
	float temp = 0;
};
int main() {
	int t = 100; 
	roomTemp* rt; 
	for (i = 0; i <t; i++){
		rt = (roomTemp*)malloc(sizeof(roomTEmp));
		cout << rt << endl;
	}
}	
