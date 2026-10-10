#include<stdio.h>

int main(){
    int arr[100],n,temp,j;
    
    //take size of array
    printf("Enter size of array: ");
    scanf("%d",&n);

    //take value of array
    printf("\nEnter value of array: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    // sorting array by using of insetion sort
    for(int i=1; i<n; i++){
        temp=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
   
    // print output
     printf("\nValues after sorting: \n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
