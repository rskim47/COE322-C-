#include <iostream>
#include <random>
#include <vector> 

using std::cout;
using std::endl;
using std::vector;

// Random Number / Vector  Function 

vector<float> random_vector(int size)
{
	int r = 0; // Holds random variables 
	vector<float> myVector(size); 
	for (auto &i : myVector) // Pass by reference
	{
		r = 100. * rand()/RAND_MAX; // Generating random numbers; 
		i = r; 
	}
	return myVector;	
}

// Sorting Function 

vector<float> sort(vector<float> myVector)
{
	vector<float> vector2 = myVector;
	int swap ; // holds swap values
	for (auto &i : myVector)
	{
		for (auto &j : myVector)
		{
			if( i < j)
			{
				swap = i; 
				i = j;
				j  = swap; 
			}
		}
	}
	return myVector;
}

// Display Function

void display_vector(vector<float> myVector)
{
	for (auto i : myVector)
	{
		cout << i << endl;
	}
}
	
int main() { 
	int length = 10; 
	vector<float> values = random_vector(length);
	cout << " The Original Numbers Are: " << endl;
	display_vector(values);
	values= sort(values); 
	cout << " The Sorted Values Are: " << endl;
	display_vector(values);
}
