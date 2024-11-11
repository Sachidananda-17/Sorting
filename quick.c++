#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int new_data)
    {
        data = new_data;
        next = nullptr;
    }
};

Node* insertatfront(Node* head ,int new_data)
{
    Node* new_node = new Node(new_data);

    new_node->next = head;

    return new_node;
}

void printlist(Node* head)
{
    Node* curr = head;

    while(curr != nullptr)
    {
        cout<<curr->data << " ";

        curr = curr->next;
    }
    // return 0 ;
}


int main()
{
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    int data = 1 ;
    head = insertatfront(head , data);
    printlist(head);
}