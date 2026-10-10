#include<stdio.h> 
#include<limits.h>
int main()
{
     int arr[10]={3,7,5,9,2,5,6,7,9,3};
     int n=10,key=2,found=0;

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
          {
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
          }
        }
    }
  
    
     for(int j=0; j<=n-2; j++)
        {        
           if(arr[j]!=arr[j+1])
           {
            printf("%d ",arr[j]);
           }
        }
      printf("%d ",arr[n-1]);
     return 0;
}
