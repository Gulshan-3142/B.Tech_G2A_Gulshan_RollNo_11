#include<stdio.h> 
#include<limits.h>
int main()
{
     int arr[10]={1,2,3,4,5,6,7,8,9,10};
     int n=10,i,j,key,temp;

    printf("Enter no. of rotation: ");
    scanf("%d",&key);

    if(key>n)
    {
      key=key%n;
    }
      
    for(i=0; i<key; i++)
    {  
        temp = arr[0];
      for(j=0; j<n-1; j++)
      {
        arr[j] = arr[j+1];
      }
      arr[n-1] = temp;
    }

       
     for(int i=0; i<n; i++)
     {
        printf("%d ",arr[i]);
     }
     return 0;
}
