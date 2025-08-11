#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteByValue(Node*& head, int value) {
    if (!head) return;
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head, *prev = nullptr;
    while (temp && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if (!temp) return;
    prev->next = temp->next;
    delete temp;
}

void traverse(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, nullptr}}};
    deleteByValue(head, 20);
    traverse(head);
    return 0;
}