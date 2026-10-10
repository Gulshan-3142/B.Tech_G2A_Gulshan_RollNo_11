#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter Size of Array: ");
    scanf("%d",&n);

    //take input in array
    int arr[n];
    printf("\nEnter value: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
         sum+=arr[i];
    }

    //printf sum of array
     printf("Sum of array: %d",sum);

     return 0;
}
   
