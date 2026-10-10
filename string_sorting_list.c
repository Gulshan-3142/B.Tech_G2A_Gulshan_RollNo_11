#include<stdio.h>
#include<string.h>

int main(){
    char arr[100][20],temp[20];
    int n;

    //take number of list 
    printf("Enter number of list: ");
    scanf("%d",&n);

    //take name list
    printf("Enter list: ");
    for(int i=0; i<n; i++){
        scanf("%s",arr[i]);
    }

    //Before sorting 
    printf("\nBefore sorting:");
   for(int i=0; i<n; i++){
        printf(" %s",arr[i]);
    }

    // sort list by using bubble sorting algoritham
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            
            if(strcmp(arr[j],arr[j+1]) > 0){

                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],temp);
            }
        }
    }
   
    //Aftar sorting 
    printf("\nAfter sorting:");
     for(int i=0; i<n; i++){
        printf(" %s",arr[i]);
    }

    return 0;
}
