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
	
 int n,i,j;
 printf("Enter value of n: ");
 scanf("%d",&n);
 for(int i=1; i<=n; i++)
 {
     j = fibe(i);
     printf("%d ",j);
 }

 return 0;
}

