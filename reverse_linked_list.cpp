#include <bits/stdc++.h>
using namespace std;

class Node {

    public:
    Node *next;
    int data;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* CreateLL() {

    Node *head, *temp;
    for(int i=0; i<7; i++){
        if(i==0) {
            head = new Node(i+1);
            temp = head;
        }
        else {
            temp->next = new Node(i+1);
            temp = temp->next;
        }
    }

    return head;
}

void PrintLL(Node* head) {
    while(head!=NULL) {
        cout<<head->data<<" ";
        head = head->next; 
    }
}

Node* ReverseLL(Node *head) {
    Node *prev, *curr;
    prev = NULL;
    curr = head;
    while (curr != NULL) {
        Node *nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }

    return prev;
}



int main()
{
    Node *head;
    head = CreateLL();

    PrintLL(head);
    cout<<"\n";

    head = ReverseLL(head);

    PrintLL(head);
    cout<<"\n";

    return 0;
}
