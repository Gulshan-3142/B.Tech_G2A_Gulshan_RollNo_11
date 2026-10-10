#include <stdio.h>

int main() {
	// your code goes here
  int arr[5]={2,1,3,2,1};
  int uniq=0;
  for(int i=0; i<5; i++){
      
      uniq= uniq^arr[i];
      
  }
   printf("%d",uniq);
   return 0;
}

