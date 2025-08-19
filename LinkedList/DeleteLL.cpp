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
        next = next;
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
Node* deleteHead(Node* head)
{
    if (head == NULL) {
        return NULL; 
    }
    Node *temp = head;
    head = head-> next;
    delete temp;
    return head;
}

//delete at last
Node* deleteTail(Node* head)
{
    if( head == NULL || head->next == NULL){
            delete head;
            return NULL;
    }
    Node* temp = head;
    while(temp->next->next){
        temp = temp-> next;
        
    }
    delete temp->next;
    temp->next = NULL;
    return head;
   
}

//delete at any given position
Node* deleteKth(Node* head, int k)
{
    if(head == NULL || k <= 0) {
        return head; 
    }
    if( k == 1){
        Node* temp1 = head;
        head = head->next;
        delete temp1;
    }
    int cnt =0; Node* temp = head; Node* prev = NULL;
    while(temp){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp=temp->next;

    }
    return head;

}

//delete any given value
Node* deleteValue(Node* head, int val)
{
    if(head == NULL) {
        return head; 
    }
    if( head->data == val){
        Node* temp1 = head;
        head = head->next;
        delete temp1;
    }
     Node* temp = head; Node* prev = NULL;
    while(temp){
        if(temp->data == val){
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp=temp->next;

    }
    return head;

}
int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6,7, 8, 9, 10};
    Node* head = arrToLL(v);
    printLL(head);

    head = deleteHead(head);
    cout << "After deleting head: ";
    printLL(head);
    head = deleteTail(head);
    cout << "After deleting tail: ";
    printLL(head);
    head = deleteKth(head, 5);
    cout << "After deleting 5th element: ";
    printLL(head);
    head = deleteValue(head, 3);
    printLL(head);
}