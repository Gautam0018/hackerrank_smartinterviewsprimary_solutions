#include <stdio.h>
int main()
{
 int t;
    scanf("%d",&t);
    while(t--){
         int m, n, p, q, i, j, k, sum = 0;
  int first[50][50], second[50][50], multiply[50][50];
  scanf("%d %d", &m, &n);
  for (  i = 0 ; i < m ; i++ ){
    for ( j = 0 ; j < n ; j++ ){
      scanf("%d", &first[i][j]);
        }
     }
     scanf("%d %d", &p, &q);
    for ( i = 0 ; i < p ; i++ ){
          for ( j = 0 ; j < q ; j++ ){
                scanf("%d", &second[i][j]);
          }
    }
 
    for ( i = 0 ; i < m ; i++ ){
      for ( j = 0 ; j < q ; j++ ){
        for ( k = 0 ; k < p ; k++ ){
          sum = sum + first[i][k]*second[k][j];
        }
        multiply[i][j] = sum;
        sum = 0;
      }
    }
 
    for ( i = 0 ; i < m ; i++ ){
      for ( j = 0 ; j < q ; j++ )
        printf("%d ", multiply[i][j]);
 
      printf("\n");
    }
    }
    return 0;
  }
 
 
