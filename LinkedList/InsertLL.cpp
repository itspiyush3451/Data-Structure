#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    public:
    // Constructor to initialize a node with a value and a pointer to the next node
    Node(int val, Node* next){
        data = val;
        this->next = next;
    }
    // Overloaded constructor to initialize a node with a value and no next node
    Node(int val){
        data = val;
        next = NULL;
    }

};

Node* arrToLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* current = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        current->next = temp;
        // current->next = new Node(arr[i]); --> This is also a valid way to create a new node and link it.
        current = current->next;
    } 
    return head;
    
}
void printLL(Node* head)
{
    Node* temp = head;
    while(temp){
        cout<<temp->data <<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}

//delete at head
Node* insertAtHead(Node* head, int val)
{
     Node* temp = new Node(val, head);
    return temp;
}


Node* insertAtTail(Node* head, int val)
{
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next= new Node(val);
    return head;
   
}


//insert at any given position
Node* insertAtKth(Node* head, int k, int val)
{
    if (k == 0) {
        return new Node(val, head);
    }
    Node* temp = head;
    int cnt = 0;
    while (temp->next ) {
        cnt++;
        if(cnt == (k - 1)){
        Node* newNode = new Node(val, temp->next);
        temp->next = newNode;
        break;
        }
        temp = temp->next;
    }
    // If k is out of bounds, do nothing
    return head;
}

Node* insertBeforeVal(Node* head, int val, int newVal)
{
    if(head == NULL)
    {
        return new Node(newVal);
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp->next)
    {
        if(temp->data == val){
            prev->next= new Node(newVal, temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}


int main(){
    vector<int> v = {1, 2, 3, 4, 5, 0,7, 8, 9, 10};
    Node* head = arrToLL(v);
    // printLL(head);
    int val;
    cin>> val;
    // head = insertAtHead(head,val);
    // cout << "After inserting at head: ";
    // printLL(head);
    // head = insertAtTail(head, val);
    // cout << "After inserting at tail: ";
    // printLL(head);
    // head = insertAtKth(head, 5, val);
    // cout << "After inserting at 5th element: ";
    // printLL(head);
    head = insertBeforeVal(head, 18, val);
    cout << "After inserting " << val << " before 5: ";
    printLL(head);
}