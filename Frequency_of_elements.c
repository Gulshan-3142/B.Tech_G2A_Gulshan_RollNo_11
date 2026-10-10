 #include <stdio.h>

int main() {
	// your code goes here
	int n;
    
  
    printf("Enter size of array: ");
   scanf("%d",&n);
 
   int arr[n];
   printf("\nEnter element: ");
   for(int i=0; i<n; i++)
   {
       scanf("%d",&arr[i]);
   }
   
   //sort array in ascending order using insurcan sorting algorithm 
   for(int i=1; i<n; i++)
   {
        int temp=arr[i];
        int j= i-1;
       
       while(j>=0 && arr[j] > temp)
       {
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1]=temp;
   }
   
   for(int j=0; j<n; j++)
   {
       printf("%d ",arr[j]);
   }
   
    int i=0;
   while(i<n){
       int count=1;
       int temp = arr[i];
       for(int j=i+1; j<n; j++)
       {
           if(temp==arr[j])
           {
               count++;
           }
           else{
               break;
           }
       }
       printf("\n%d is %d time",arr[i],count);
       i+=count;
   }
   return 0;
}
