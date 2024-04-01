#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head,Node* &tail, int data)
{
     //coneect with head node
    if(head == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        head = newNode;
    }
    else{
            Node* newNode = new Node(data);
            newNode->next = head;
            head = newNode;
    }
}
void insertAtEnd(Node* &head,Node* &tail, int data)
{
    //coneect with tail node
    if(head == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        head = newNode;
    }
   else{
     //create a node
    Node* newNode = new Node(data);
    //connect with tail node
    tail -> next = newNode;
    //update tail
    tail = newNode;

   }
}
void printLL(Node* &head) 
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}
int main()
{
    // Create a new linked list
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,70);
    insertAtEnd(head,tail,50);
    insertAtEnd(head,tail,60);

    printLL(head);

    return 0;
}