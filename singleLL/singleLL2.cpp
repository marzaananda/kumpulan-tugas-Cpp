#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    
};

void traverse(Node *head); 

int main(){
    
    Node *node1 = new Node;
    Node *node2 = new Node;
    Node *node3 = new Node;
    Node *node4 = new Node;
    Node *node5 = new Node;
    
    node1->data = 10;
    node1->next = node2;
    
    
    node2->data = 20;
    node2->next = node3;
    
    
    node3->data = 30;
    node3->next = node4;
    
    
    node4->data = 40;
    node4->next = node5;
    
    
    node5->data = 50;
    node5->next = node1;
    
    
    cout << "Forward:\n";
    traverse(node1);

    return 0;
}

void traverse(Node *head){
    Node *temp = head;
    int i = 1;
    int max = head->data;

    do{
        cout << "Data ke " << i << ": " << temp->data << endl;
        if(temp->data > max){
            max = temp->data;
        }
        temp = temp->next;
        i++;
    }while(temp != head);

    cout << "Data terbesar adalah " << max << endl;
}
