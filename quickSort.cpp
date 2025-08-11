#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int partition(int a[],int l,int h){
    int pivot=a[h];
    int i=l-1;
    for(int j=l;j<h;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}
void quickSort(int a[],int l,int h){
    if(l<h){
        int pIN=partition(a,l,h);
        quickSort(a,l,pIN-1);
        quickSort(a,pIN+1,h);
    }
}
int main(){
    int i;
    cin >> i;
    int* a = new int[i];
    for (int j = 0; j < i; j++) {
        cin >> a[j];
    }
    quickSort(a, 0, i - 1);
    for (int j = 0; j < i; j++) {
        cout << a[j] << " ";
    }
    
}