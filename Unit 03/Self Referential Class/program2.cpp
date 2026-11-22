#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int value);     
};
Node::Node(int value)
{
    data = value;
    next = nullptr;
}

int main()
{
    // Create three nodes
    Node n1(10);
    Node n2(20);
    Node n3(30);
    // Link the nodes
    n1.next = &n2;
    n2.next = &n3;
    // Traverse the linked list
    Node* temp = &n1;
    while(temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}