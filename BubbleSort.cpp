#include<iostream>
using namespace std;
void BubbleSort(int *a,int n){
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n-i;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
            
}
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    BubbleSort(a,n);
    for(int i=1;i<=n;i++)
        cout<<a[i]<<' ';
    return 0;
}