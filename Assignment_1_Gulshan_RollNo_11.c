#include <stdio.h>

int main() {
  int n,MaxMark;
  
  printf("Enter number of subject: ");
  scanf("%d",&n);
  printf("Enter Maximum marks: ");
  scanf("%d",&MaxMark);
  
  float marks[n],sum=0,per;
  char subj[20];
  for(int i=0;i<n;i++){
      printf("Enter the subject name: ");
      scanf("%s",subj);
      printf("Enter the obtain marks: ");
      scanf("%f",&marks[i]);
      sum +=marks[i];
  }
  printf("Total obtained marks: %0.2f",sum);
  per = (sum*100)/(n*MaxMark);
  printf("percentage: %0.2f%%",per);
  
  return 0;
}

