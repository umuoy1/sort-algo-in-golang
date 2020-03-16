package main
import (
	"fmt"
)
func BubbleSort(a []int,n int){
	for i:=0;i<n;i++{
		for j:=0;j<n-i-1;j++{
			if(a[j]>a[j+1]){
				a[j],a[j+1] = a[j+1],a[j]
			}
		}
	}
}
func main(){
	var n,x int
	var a []int
	fmt.Scanln(&n)
	for i:=0;i<n;i++{
		fmt.Scanf("%d",&x);
		a = append(a,x)
	}
	BubbleSort(a,n)
	fmt.Println(a)
}