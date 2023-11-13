//Deletion of Node in Liniked List When it's Position is given
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

void insertAtGivenPosition(Node* &head, int position, int data){
  if(position == 1){
    insertAtHead(head, data);
  }
  Node* temp = head;
  int ctn=1;
  while(ctn<position-1){
    temp = temp -> next;
    ctn++;
  }
  Node* newNode = new Node(data);
  newNode -> next = temp -> next;
  temp -> next = newNode;
}

void deleteNode(Node* &head, int position){
  if(position == 1){
    Node* temp = head;
    head = head->next;
    delete temp;
    return;
  }else{
    Node* temp = head;
    int ctn=1;
    while(ctn<position-1){
      temp = temp -> next;
      ctn++;
    }
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
  }
}

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
  Node* tail = node1; //tail pointed to node1
  insertAtHead(head, 5);
  insertAtTail(tail, 15);
  insertAtGivenPosition(head, 3, 12);
  printLinkedList(head);
  deleteNode(head, 3);
  printLinkedList(head);
  return 0;
}