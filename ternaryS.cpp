#include <bits/stdc++.h>
using namespace std;
void TS(int a[],int l,int h,int key) {
        while(l<=h){
            int mid1=l+(h-l)/3;
        int mid2=h-(h-l)/3;
            if(a[mid1]==key){
                cout<<"LOC= "<<mid1+1;
                return;
            }
            else if(key==a[mid2]){
                 cout<<"LOC= "<<mid1+1;
                return;
            }
            else if(key<a[mid1]){
                h=mid1-1;

            }
            else if(key>a[mid2]){
                l=mid2+1;
            }
            else{
                l=mid1+1;
                h=mid2-1;
            }
        }
        cout<<"NOT FOUND";
        return;
}
int main() {
    int i;
    cin >> i;
    int* a = new int[i];
    for (int j = 0; j < i; j++) {
        cin >> a[j];
    }
    int key;
    cin >> key;
    TS(a, 0, i - 1, key);
    return 0;
}