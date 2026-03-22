#include<stdio.h>

int main(){
    int arr[100],n;

    //take size of array 
    printf("Enter size of array: ");
    scanf("%d",&n);

    // take input value
    printf("\nEnter value: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    //swap alternate elemant
    for(int i=0; i<n-1; i+=2){
        
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;

    }
   
    printf("\nAfter swaping elemant:");
    for(int i=0; i<n; i++){
       printf("%d ",arr[i]) ;
    }

    return 0;
}
