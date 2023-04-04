#include <stdio.h>
 
int main()
{ 
 int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Test Case #%d:\n",i);
     int n;
     scanf("%d",&n);
     int matrix[n][n];
 int i,j;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&matrix[i][j]);
  }
 }
 
 for(i=0;i<n;i++)
 {
  for(j=n-1;j>=0;j--)
  {
   printf("%d ",matrix[j][i]);
  }
  printf("\n");
 }
 
}


 }
