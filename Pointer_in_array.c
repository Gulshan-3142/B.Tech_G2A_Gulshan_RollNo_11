#include <stdio.h>

int main() {
	
	int arr[100]={1,2,3,4,5,6,7,89};
	int n;
	
	//take size of array 
	printf("enter size of array: ");
	scanf("%d",&n);
	
	// array held address of first element 
	// printf array by using pointer 
	// first approach 
	/*
	for(int i=0; i<n; i++){
	    printf("%d ",*(arr+i));
	}
	*/
	
	// second approach 
	/*
	
	int *p;
	p = arr;
	for(int i=0; i<n; i++){
	    printf("%d ",*(p+i));
	}
	*/
	
	// third approach 
	int *p;
	p = arr;
	
	for(int i=0; i<n; i++){
	    printf("%d ",*p);
	    p++;
	}
	
 return 0;
}

