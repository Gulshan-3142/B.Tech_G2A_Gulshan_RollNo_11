#include<stdio.h>

int main(){
    int n;
    printf("Enter Size of Array: ");
    scanf("%d",&n);

    //take input in array
    int arr[n];
    printf("\nEnter value: \n");
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }

    //output print
    printf("\nRevers of array: \n");
    for(int i=n; i>0; i--){
       printf("%d ",arr[i]);
    }

    return 0;
}
