package main
import (
	"fmt"
)
func InsertionSort(a []int,n int){
	for i,val := range a{
		t := val
		for j:=i-1;j>=0;j--{
			if a[j]>t{
				a[j+1]=a[j]
				a[j]=t
			}
		}
	}
}
func main(){
	var a []int
	var n,x int
	fmt.Scanln(&n)
	for i:=0;i<n;i++{
		fmt.Scan(&x)
		a = append(a,x)
	}
	InsertionSort(a,n)
	fmt.Println(a)
	//
}