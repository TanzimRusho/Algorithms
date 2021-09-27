/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std; 

struct Node
{
    int data;
    
    Node *next;
    
    Node(int d=10)
    {
        data = d;
        next = NULL;
    }
};

int main()
{
    // Node h = Node(20);
    
    // printf("%d\n", h.data);
    
    // Node *h = new Node(20);
    
    // cout << h->data << '\n'; // (*h).data 
    
    //Node *h = (Node *) malloc(sizeof(Node));
    
    Node *head = new Node(10);
    head->next = new Node(30);
    head->next->next = new Node(50);
    
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    
    return 0;
}
