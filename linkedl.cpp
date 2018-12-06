#include<iostream>
#include<stdlib.h>
using std::endl;
using std::cout;

struct node {
	int val;
	struct node *next;
};

int main(){
	node* head = NULL;
	node* second = NULL;
	node* third = NULL;

	head = (node *)malloc(sizeof(node));
	// allocate 3 nodes in the heap
	second = (node *)malloc(sizeof(node));
	third = (node *)malloc(sizeof(node));

	//(*head).val = 1; 
	head->val = 1; // setup 1st node 
	head->next = second; 
			// note: pointer assignment value 
	second->val = 2;
	second->next = third;	

	third->val = 3; //setup 3rd link 
	third->next = NULL;

	node* cur; 

	cur = head;
	cout << &head << endl;
	cout << head->next << endl;
	cout << &second << endl; 

	//cur = cur->next; //moves onto the next one, again. 
	while(cur->next != NULL){
		cout << cur->val << endl;
		cur = cur->next; 
	}
	return 0;
}
