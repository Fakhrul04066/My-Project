#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int countCriticalPoints(Node* head) {
    if (!head || !head->next || !head->next->next) 
        return 0; 
    int criticalCount = 0;
    Node* prev = head;
    Node* curr = head->next;
    Node* next = curr->next;
    while (next) {
        if ((prev->data < curr->data && curr->data > next->data) || 
            (prev->data > curr->data && curr->data < next->data)) {
            criticalCount++;
        }
        prev = curr;
        curr = next;
        next = next->next;
    }
    return criticalCount;
}
Node* createLinkedList(vector<int>& values) {
    if (values.empty()) return nullptr;

    Node* head = new Node{values[0], nullptr};
    Node* temp = head;

    for (size_t i = 1; i < values.size(); i++) {
        temp->next = new Node{values[i], nullptr};
        temp = temp->next;
    }
    return head;
}
void freeList(Node* head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
int main() {
    int n;
    cin >> n;
   vector<int> values(n);
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    Node* head = createLinkedList(values);
    cout << countCriticalPoints(head) << endl;

    freeList(head);
    return 0;
}
