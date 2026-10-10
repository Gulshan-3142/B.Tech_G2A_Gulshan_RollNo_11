#include<stdio.h>

int main(){
    int arr[100],n,temp;

    //Take size of array 
    printf("Enter size of array : ");
      scanf("%d",&n);

    //Take array value
      printf("\nEnter value: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    //sorting value of array by using bubble sort
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
              temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    //printf array after sorting
     for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
