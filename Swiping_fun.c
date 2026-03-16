#include<stdio.h>


int main(){
   int a,b,temp;
   printf("Enter value of a & b : ");
   scanf("%d %d",&a,&b);

   printf("\nEnter value of a : %d",a);
   printf("\nEnter value of b : %d",b);
   temp=a;
   a=b;
   b=temp;
   printf("\nAfter swiping a : %d",a);
   printf("\nAfter swiping b : %d",b);
    
   return 0;
}
