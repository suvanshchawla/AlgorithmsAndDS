// A simple C++ program for traversal of a linked list 
#include <bits/stdc++.h> 
using namespace std; 
  
class Node { 
public: 
    int data; 
    Node* next; 
}; 
  

void insertNode(Node* node, Node* head){
    if(head == NULL){
        head = node;
    }
    else{
        node->next = head;
        head = node;
    }
} 

int countLinkListDigits(Node* head){
    int num = 0;
    while(head != NULL){
        num++;
        head = head->next;
    }

    return num - 1;
}

int returnLLSum(Node* head){
    Node* p;
    int listSum = 0;
    p = head;
    int power = countLinkListDigits(p);

    while (p != NULL){
        cout<<"Power Data: "<<(p->data)*pow(10, power)<<endl;
        cout<<"ListSum Initial "<<listSum<<endl;
        listSum = listSum + (p->data)*pow(10, power);
        cout<<"ListSum before: "<<listSum<<endl;
        cout<<listSum<<endl;
        p = p->next;
        power--;
    }
    return listSum+1;
}

void printList(Node* n) { 
    while (n != NULL) {
        cout<<endl<<"The sum is"<<endl; 
        cout << n->data << " "; 
        n = n->next; 
    } 
} 

void returnSumLL(int sum){
    int rem;
    rem = sum;
    Node* head;
    head = NULL;
    while(rem/10!=0){
        Node* ptr = new Node();
        ptr->data = rem%10;
        cout<<ptr->data<<endl;
        insertNode(ptr, head);
        rem=rem/10;
    }

    printList(head);
}

  
// Driver code 
int main() 
{ 
    Node* head1 = NULL; 
    Node* second1 = NULL; 
    Node* third1 = NULL; 
  
    Node* head2 = NULL; 
    Node* second2 = NULL; 
    Node* third2 = NULL;


    // allocate 3 nodes in the heap 
    head1 = new Node(); 
    second1 = new Node(); 
    third1 = new Node(); 
  
    head1->data = 1; // assign data in first node 
    head1->next = second1; // Link first node with second1 
  
    second1->data = 2; // assign data to second1 node 
    second1->next = third1; 
  
    third1->data = 3; // assign data to third1 node 
    third1->next = NULL; 
  
    head2 = new Node(); 
    second2 = new Node(); 
    third2 = new Node(); 
  
    head2->data = 4; // assign data in first node 
    head2->next = second2; // Link first node with second2 
  
    second2->data = 5; // assign data to second2 node 
    second2->next = third2; 
  
    third2->data = 6; // assign data to third2 node 
    third2->next = NULL;

    
    int sum1 = 0;
    int sum2 = 0;
    int LinkedListSum = 0;
    
    sum1 = returnLLSum(head1);
    sum2 = returnLLSum(head2);

    LinkedListSum = sum1 + sum2;
    cout<<sum1<<endl;
    cout<<sum2<<endl;
    //cout<<LinkedListSum;
    //returnSumLL(LinkedListSum);
    return 0; 
} 