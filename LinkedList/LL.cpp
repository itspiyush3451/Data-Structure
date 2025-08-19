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

// Function to convert an array to a linked list
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

int length(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp){
        len++;
        temp = temp->next;
    }
    return len;
}

int checkIfValExists(Node* head, int val){
  Node* temp = head;
  while (temp)
  {
    if (temp->data == val)
      return 1; // Value found
    temp = temp->next;
  }
  return 0; // Value not found
}

void printLL(Node* head)
{
    Node* temp = head;
    while(temp){
        cout<<temp->data <<" ";
        temp= temp->next;
    }
    cout<<endl;
}
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    Node* head = arrToLL(v);    
    cout<< "Length of linked list: " << length(head) << endl;
    cout<< "Check if value 3 exists: " << (checkIfValExists(head, 98) ? "Yes" : "No") << endl;
    printLL(head);
}