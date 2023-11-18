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

void insertNodeAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertNodeAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void insertNodeAtGivenPosition(Node* &head, int position, int data){
    if(position == 1){
        insertNodeAtHead(head, data);
    }

    Node* temp = head;
    int ctn=1;

    while(ctn<position-1){
        temp = temp -> next;
        ctn++;
    }

    Node* newNode = new Node(data);
    newNode -> next =  temp -> next;
    temp -> next = newNode;
}

void deleteNode(Node* &head, int position){
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        delete temp;
        return;
    }else{
        Node* temp = head;
        int ctn=1;

        while(ctn<position-1){
            temp = temp -> next;
            ctn++;
        }
        Node* nodeToDelete = temp -> next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }
}

void printLinkedList(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node*  node1 = new Node(10);
    cout<<"Printing First Node"<<endl;
    cout<<node1 -> data<<endl;

    Node* head = node1;
    insertNodeAtHead(head, 5);
    cout<<"Printing All Nodes post insertNodeAtHead()"<<endl;
    printLinkedList(head);

    Node* tail = node1;
    insertNodeAtTail(tail, 15);
    cout<<"Printing All Nodes post insertNodeAtTail()"<<endl;
    printLinkedList(head);

    insertNodeAtGivenPosition(head, 3, 12);
    cout<<"Printing All Nodes post insertNodeAtGivenPosition()"<<endl;
    printLinkedList(head);

    deleteNode(head, 3);
    cout<<"Printing All Nodes post deleteNode()"<<endl;
    printLinkedList(head);

    return 0;
}