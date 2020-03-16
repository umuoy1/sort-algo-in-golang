#include<iostream>
using namespace std;
void SelectSort(int *a,int n){
    for(int i=1;i<=n;i++){
        int pos=i;
        for(int j=i;j<=n;j++){
            if(a[j]<a[pos]){
                pos=j;
            }
        }
        if(a[pos]<a[i])
            swap(a[pos],a[i]);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    SelectSort(a,n);
    for(int i=1;i<=n;i++)
        cout<<a[i]<<' ';
    return 0;
}