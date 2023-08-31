#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_recursivly(Node* n)
{
    // base case
    if(n==NULL)
    return;
    print_recursivly(n->next);
    cout<<n->val<<" ";
    
}
int main()
{
     Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40);
    Node* d= new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d; 
    print_recursivly(head);
    return 0;
}