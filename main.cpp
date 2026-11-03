//learning linked lists
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

void addOne(int* p) 
{
    *p = *p + 1;
}



int main() {
    int x = 5;
    //addOne(&x);
    //cout << x << endl;

    Node* a = new Node{x, nullptr};
    addOne(&x);
    Node* b = new Node{x, nullptr};
    addOne(&x);
    Node* c = new Node{x, nullptr};
    //cin >> a->value;

    a->next = b;
    b->next = c;
    Node* head = a;

    Node* current = head;
    while (current != nullptr) {
        cout << current->value << endl;
        current = current->next;
    }

    delete a;
    delete b;
    delete c;
    return 0;
}