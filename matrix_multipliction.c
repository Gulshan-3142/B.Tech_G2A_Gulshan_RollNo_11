#include<stdio.h>
#include<stdlib.h>

int main(){

    int r1,c1,r2,c2;
    
    printf("Enter row and colun of first matrix: ");
    scanf("%d %d",&r1,&c1);
    
    //take first matrix
    int arr1[r1][c1];
    printf("\nEnter value: \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    //take secand matrix
    printf("Enter row and colun of second matrix: ");
    scanf("%d %d",&r2,&c2);
    int arr2[r2][c2];
    printf("\nEnter value: \n");
     for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            scanf("%d",&arr2[i][j]);
        }
    }

   if(c1 != r2)
    {
        printf("\nInvalid");
        exit(0);
    }

    //calculate product
    int arr3[r1][c2];
    printf("\nProduct of the matrix: \n");
     for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
           arr3[i][j]=0;
           for(int k=0; k<r1; k++){
            arr3[i][j]+=arr1[i][k]*arr2[k][j];
           }
        }
    }

    //print product
     for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
           printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
