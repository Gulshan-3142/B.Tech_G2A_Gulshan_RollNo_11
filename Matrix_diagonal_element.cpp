#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   
   int arr[3][3]={1,2,3,4,5,6,7,8,9},r=3,sum1=0,sum2=0;
   
   //for diagonal element 
   for(int i=0; i<r; i++){
       
       cout<<" "<<arr[i][i];
       sum1+=arr[i][i];
   }
   
   cout<<endl;
   cout<<"sum of diagonal element: "<<sum1<<endl;
   
   //for second diagonal element
   for(int i=0; i<r; i++){
       
       cout<<" "<<arr[i][r-i-1];
       sum2+=arr[i][r-i-1];
   }
   
   cout<<endl;
   cout<<"sum of second diagonal element: "<<sum2<<endl;
   
   return 0;
}
