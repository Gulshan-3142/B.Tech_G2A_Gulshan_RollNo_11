#include<stdio.h>
#define pi 3.14

int main(){
   float r,area,circ;

   printf("Enter you find area  Or Volume: ");
   printf("\nPlease enter the radius of circle: ");
   scanf("%f",&r);

   area = pi*r*r;
   printf("\nArea of circle: %0.2f",area);
   circ= 2*pi*r;
   printf("\nCircumference of circle: %0.2f",circ);

   return 0;
}
