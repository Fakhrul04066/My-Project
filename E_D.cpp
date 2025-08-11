#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct node{
    int info;
    node* link;
};

void insert(node** start,int data){
    node* newnode= new node;
    newnode->info=data;
    newnode ->link=*start;
    *start = newnode;
}
void search(node* start,int key){
    node* temp=start;
    int pos=1;
    while (temp!=nullptr){
        if(temp->info==key){
            cout<<"Element found at:= "<<pos<<endl;
            return;
        }
        temp=temp->link;
        pos++;
    }
        /* code */
    
}
void show(node * ptr){
    while(ptr!=nullptr){
        cout<<ptr->info<<"->";
        ptr=ptr->link;
    }
    if(ptr==nullptr)
    {
        cout<<"null"<<endl;
    }
}
int main() {
    node* start= nullptr;
    insert(&start,40);

    insert(&start,80);
    show(start);
    search(start,80);
    return 0;
}