#include<stdio.h>

int fact(int factValue){
   int n=1;
    for(int i=1; i<=factValue; i++){
        n*=i;
    }

    return n;
}
 
int main(){
    int n;
    double sum=0.0;
    printf("Enter n no. of series: ");
    scanf("%d",&n);

    
    for(int i=1; i<=n; i++){
        sum+=(double)i/fact(i);
        if(i<n){ 
        printf("%d/%d! + ",i,fact(i));
        }
        else{
            printf("%d/%d! ",i,fact(i));
        }
    }

    printf("\nSum of : %lf",sum);
    return 0;

}
