package main
import (
	"fmt"
)
func QuickSort(a []int,l int,r int){
	if l>=r{
		return
	}
	i,j,pivot := l,r,a[l]
	for ;i<j;{
		for ;i<j&&a[j]>=pivot;{
			j--
		}
		for ;i<j&&a[i]<=pivot;{
			i++
		}
		if i<j {
			a[i],a[j] = a[j],a[i]
		}
	}
	a[l]=a[i]
	a[i]=pivot
	QuickSort(a,l,i-1)
	QuickSort(a,i+1,r)
}
func main(){
	var a []int
	var n,x int
	fmt.Scanln(&n)
	for i:=0;i<n;i++{
		fmt.Scan(&x)
		a=append(a,x)
	}
	QuickSort(a,0,n-1)
	fmt.Println(a)
}