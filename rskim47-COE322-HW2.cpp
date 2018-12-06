//Program Author: Sungsoo Kim (EID: sk38224)
//Program Name: HW2, K-shift decoder / encoder 
//Program Function: Encodes and decodes string of text based on a given key of K 
//Creation Date: 30/Sept/2018
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline; // enables reading spaces 

// Encoding Function 

string encode(int shift, string input){
	int length = input.length(); // measuring length of string
	string output = input; // initializing output 
	for (int i = 0; i < length; i++) { 
		for (int j = 0; j < shift; j++){
			if (output[i] == 'z'){ // handling exceptions (when letter reaches z)
				output[i] = 'a';
			} 
			else if (output[i] == 'Z'){ // handling expcetion for captialized letters 
				output[i] = 'A';
			}
			else{ // shifting other letters 
				output[i]++; 
			} 
		}
	}
	return output; // returning encoded message 
 }  

// Decoding Function 

string decode(int shift,string input){
	int length = input.length(); // measuring length of string 
	string output = input; // initializing output
	for (int i = 0; i < length; i++){
		for (int j = 0; j < shift; j++){
			if (output[i] == 'a'){ // handling exceptions (when letter reaches a)
				output[i] = 'z'; 
			}
			else if (output[i] == 'A'){ // handling exceptions for capitalized letters 
				output[i] = 'Z';
			}
			else { // shifting other letters 
				output[i]--; 
			}
		}
	}
	return output; // returning decoded message 
}

// Main Function 

int main () {
	char func; // operation 	
	int shift; //shift value 
	string input = ""; //input string 
	string output =  ""; // output string 

 	// Function Selection 
	cout << "Would you like to Encrypt(e) or Decrypt(d)?: " << endl;
	cin >> func; 
	while (func != 'e' && func != 'd') { // error catch for function selection 
		cout << "Error! Please re-enter your function: Encrypt(e) or Decrypt(d): " << endl;
		cin >> func;
	} 
	// Message Input
	cout << "Enter the message: "; // text input 
	cin.get();
	getline(cin,input);
	cout << input << endl;
	// Shift Value
	cout << "Please enter the shift value: "; // shift ("K") value 
	cin >> shift;
	// Shift Adjustment
	if (shift >= input.length()){ // converting shift > string length
		shift = shift % input.length();
	} 
	// Encoding / Decoding 
	if (func == 'e'){ 
		output = encode(shift,input); // calling Encoding Function 
		cout << "Output is: " << output << endl;
	}
	else{
		output = decode(shift,input); // calling Decoding Function 
		cout << "Decoded message is: " << output << endl;
	}
}

