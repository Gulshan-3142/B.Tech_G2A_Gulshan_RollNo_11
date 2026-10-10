#include <stdio.h>

int main() {
	// your code goes here
    
    int arr[100]={1,2,3,4,5,6,7,8,9,10};
    
    int target = 9,n=10;
    
    int low=0, high = n-1;
    while(low<=high){
            
            int mid=(low+high)/2;
            
        if(target==arr[mid]){
            printf("%d",mid);
            return 0;
        }
        else if(target < arr[mid]){
           high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    
   }

return 0;
}

