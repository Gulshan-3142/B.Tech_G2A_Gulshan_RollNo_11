#include<stdio.h>


int main(){
   char convt;
   float temp,centi,fabre;

   printf("Convert temprature  Centigrade OR Fahrenheit ");
   printf("\nChoose C for Centigrade OR F for Fahrenheit ");
    scanf(" %c",&convt);
    printf("\nEnter Tempratur: ");
    scanf(" %f",&temp);
    
   if(convt == 'F' || convt == 'f'){
      centi = (5.0/9.0)*(temp - 32);
      printf("Temprature in Centigrade: %0.2f",centi);
    }
    else{

         fabre= (9.0/5.0)*temp + 32;
         printf("Temprature in Fahrenheit: %0.2f",fabre);
    }
    
   return 0;
}
