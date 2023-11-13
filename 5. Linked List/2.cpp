//Insert Node at Tail & Printing a Linked List
#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this -> data = data;
    this -> next = NULL;
  }
};

void insertAtHead(Node* &head, int data){
  Node* temp = new Node(data);
  temp -> next = head;
  head = temp;
}

void insertAtTail(Node* &tail, int data){
  Node* temp = new Node(data);
  tail -> next = temp;
  tail = temp;
}

//How to Traverse a Linked List
void printLinkedList(Node* &head){
  Node* temp = head;
  while(temp != NULL){
    cout<<temp -> data <<" ";
    temp = temp -> next;
  }
  cout<<endl;
}


int main(){
  Node* node1 = new Node(10);
  cout<<node1 -> data <<endl;
  cout<<node1 -> next <<endl;

  Node* head = node1; //head pointed to node1
  Node* tail = node1; //head pointed to node1
  insertAtHead(head, 5);
  insertAtTail(tail, 15);
  printLinkedList(head);

  return 0;
}