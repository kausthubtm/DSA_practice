#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node() {
        next = NULL;
    }
};

Node* createLL() {
    int n;
    Node *head, *temp;
    cin>>n;
    for(int i=0; i<n; i++){
        if(i==0) {
            head = new Node();
            temp = head;
        }
        else {
            temp->next = new Node();
            temp = temp->next;
        }
        cin>>temp->data;
    }
    return head;
}

int middleNode(Node *head) {
    Node *temp;
    temp = head;
    while(temp!=NULL) {
        if(temp->next==NULL) break;
        else {
            temp = temp->next->next;
            head = head->next;
        }
    }
    return head->data;
}

int main() {
    Node *head;
    head = createLL();
    cout<<middleNode(head)<<"\n";
    return 0;
}