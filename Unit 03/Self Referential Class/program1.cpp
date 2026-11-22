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
    Node n1(10);
    Node n2(20);
    n1.next = &n2;
    cout << "First Node: " << n1.data << endl;
    cout << "Second Node: " << n1.next->data << endl;
    return 0;
}
