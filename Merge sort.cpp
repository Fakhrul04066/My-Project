#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long

void merge(int a[],int l,int mid,int h){
    int i=l;
    int j=mid+1;
    int k=0;
    int *b=new int[h-l+1];
    while(i<=mid && j<=h){
        if(a[i]<a[j]){
           b[k]=a[i];
              i++;  
        }else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=h){
            b[k]=a[j];
            j++;
            k++;
        }

    } else{
        while(i<=mid){
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(int i=l;i<=h;i++){
        a[i]=b[i-l];
    }
}

void me_sort(int a[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        me_sort(a,l,mid);
        me_sort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}
int main(){
    int i;
    cin>>i;
    int* a= new int [i];
    for(int j=0;j<i;j++){
        cin>>a[j];
    }
    me_sort(a,0,i-1);
    for(int j=0;j<i;j++){
        cout<<a[j]<<" ";
    }
}