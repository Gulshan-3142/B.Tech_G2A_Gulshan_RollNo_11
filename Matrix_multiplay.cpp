#include <bits/stdc++.h>
using namespace std;

int main() {
// your code goes here

int arr1[3][3]={1,2,3,4,5,6,7,8,9};
int arr2[3][3]={9,8,7,6,5,4,3,2,1};
int sum[3][3];
int r=3,sum1=0,sum2=0;

for(int i=0; i<r; i++)
{
for(int j=0; j<r; j++)
{
sum[i][j]=0;
for(int k=0; k<r; k++)
{
sum[i][j]= sum[i][j] + arr1[i][k] * arr2[k][j];
}
}
}

//sum of given matrix
for(int i=0; i<r; i++)
{
for(int j=0; j<r; j++)
{
cout<<" "<<sum[i][j];
}

cout<<endl;

}

cout<<endl;
//for diagonal element
for(int i=0; i<r; i++){

cout<<" "<<arr1[i][i];  
   sum1+=arr1[i][i];

}

cout<<endl;
cout<<"sum of diagonal element: "<<sum1<<endl;

//for second diagonal element
for(int i=0; i<r; i++){

cout<<" "<<arr1[i][r-i-1];  
   sum2+=arr1[i][r-i-1];

}

cout<<endl;
cout<<"sum of second diagonal element: "<<sum2<<endl;

return 0;
}
