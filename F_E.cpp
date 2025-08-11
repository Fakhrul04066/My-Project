#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;    
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
struct Stack {
    Node* top;
    
    Stack() {
        top = nullptr;
    }
        void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }
    
  void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
        bool isEmpty() {
        return top == nullptr;
    }
    void traverse() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << "-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << "Stack before pop:- ";
    s.traverse();
    cout << "Stack after pop:- ";
    s.pop();
    s.traverse();
    return 0;
}
