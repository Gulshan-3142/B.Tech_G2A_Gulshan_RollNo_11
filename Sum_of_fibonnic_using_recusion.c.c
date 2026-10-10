#include <stdio.h>

int fibe(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fibe(n-1)+fibe(n-2);
    }
}

int main() {
	// your code goes here
 int n,i,j=0;
 printf("Enter value of n: ");
 scanf("%d",&n);
 for(int i=1; i<=n; i++)
 {
     j = j+fibe(i);
 }
 printf("%d ",j);
 
 return 0;
}
