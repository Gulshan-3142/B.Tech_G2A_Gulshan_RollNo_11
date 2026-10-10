#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int n;
    
  
    printf("Enter size of array: ");
   scanf("%d",&n);
 
   int arr[n];
   printf("\nEnter element: ");
   for(int i=0; i<n; i++)
   {
       scanf("%d",&arr[i]);
   }
   

    int i=0;
   while(i<n){
      
       int temp = arr[i];
       bool yes=true;
       for(int j=i+1; j<n; j++)
       {
           if(temp<arr[j])
           {
              yes=false;
              break;
           }
           
       }
       if(yes == 1)
       {
           printf("%d is leader element\n",temp);
       }
       
       i++;
   }
   return 0;
}


