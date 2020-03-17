#include<iostream>
using namespace std;
void QuickSort(int *a,int l,int r){
    if(l>=r)
        return ;
    int i=l,j=r;
    int pivot=a[l];
    while(i<j){
        while(i<j && a[j]>=pivot) j--;
        while(i<j && a[i]<=pivot) i++;
        if(i<j) swap(a[i],a[j]);
    }
    a[l]=a[i];
    a[i]=pivot;
    QuickSort(a,l,i-1);
    QuickSort(a,i+1,r);
}
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    QuickSort(a,1,n);
    for(int i=1;i<=n;i++)
        cout<<a[i]<<' ';
    return 0;
}