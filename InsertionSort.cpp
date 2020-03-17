#include<iostream>
using namespace std;
void InsertionSort(int *a,int n){
    for(int i=1;i<=n;i++){
        int t=a[i];
        for(int j=i-1;j>=1;j--){
            if(a[j]>t){
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    InsertionSort(a,n);
    for(int i=1;i<=n;i++)
        cout<<a[i]<<' ';
    return 0;
    // 
}
