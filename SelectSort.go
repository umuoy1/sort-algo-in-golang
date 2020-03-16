package main
import (
	"fmt"
)
func SelectSort(a []int,n int){
	for i:=0;i<n;i++{
		pos := i
		for j:=i;j<n;j++{
			if a[pos]>a[j] {
				pos=j
			}
		}
		if a[pos]<a[i]{
			a[i] , a[pos] = a[pos] , a[i]
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
	SelectSort(a,n)
	fmt.Println(a)
}