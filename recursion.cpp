#include <iostream>
using std::cout;
using std::endl;

int recurse_sum(int i){
	if (i == 0)
		return 0;
	else
		return i + recurse_sum(i-1);
}

int main() {
	cout << recurse_sum(100) << endl;
}	
