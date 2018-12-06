#include<iostream>
#include<random>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

vector<float> makeVector(int size, float value)
{
	vector <float> x(size,value);
	return x; 
}

int printVector(vector<float> Vector1)
{
	for (auto i: Vector1)
	{	
		cout << i << " | "; 
	}
	cout << endl;
	cout << "Vector size: " << Vector1.size() << endl;
	return 0; 
}	

int resetVectorToZero(vector<float> &Vector2) 
{
	for (auto &i : Vector2)
	{
		i  =  0; 
	}
	return 0; 
		
}

vector<float> combineVector(vector<float> vector1, vector<float> vector2)
{
	vector<float> vector3; 
	for (auto i : vector1)
	{
		vector3.push_back(i);
	}
	for (auto i : vector2)
	{
		vector3.push_back(i);
	}
	return vector3;
}

vector<float> combineVectorAndEmpty(vector<float> &vector1, vector<float> &vector2)
{
	vector<float> vector3; 
	while(!vector1.empty())
	{
		vector3.push_back(vector1.back()); 
		vector1.pop_back();
	}	
	while(!vector2.empty())
	{
		vector3.push_back(vector2.back());
		vector2.pop_back(); 
	}
	return vector3;
}


int main() {
	vector<float> myVector = makeVector(10,1.5);
	vector<float> test = makeVector(10,0);  
	vector<float> vectorc = combineVector(myVector, test); 
	vector<float> vector4 = combineVectorAndEmpty(myVector, test);
	printVector(vector4);
	printVector(myVector);	
	printVector(test);
}
