#include <iostream>
using namespace std;

struct Node{
	int data ;
	struct Node *next;
};
void traverse(struct Node *temp){
	int i=1;
	while(temp != NULL){
		cout<<"data ke-"<<i<<":";
		cout<<temp->data<<" ";
		temp= temp->next;
		cout<<endl;
		i++;
	}
};
int main (){
	Node *node1 = NULL;
	Node *node2 = NULL;
	Node *node3 = NULL;
	Node *node4 = NULL;
	Node *node5 = NULL;
	
		
	node1= new Node;
	node2= new Node;
	node3= new Node;
	node4= new Node;
	node5= new Node;
	
	node1->data=10;
	node1->next=node2;
	
	node2->data=20;
	node2->next=node3;
	
	node3->data=15;
	node3->next=node4;
	
	node4->data=30;
	node4->next=node5;
	
	node5->data=40;
	node5->next=NULL;
	
	cout<<"data linkedlist"<<endl;
	traverse(node1);
	cin.get();	
//	cout<<"data "<<node1->data<<endl;
//	cout<<"data "<<node2-> next ->data<<endl;
//	cout<<"data "<<node3-> next ->data<<endl;
//	cout<<"data "<<node4-> next ->data<<endl;
//	cout<<"data "<<node5-> next ->data<<endl;
	
	
	return 0;
}
