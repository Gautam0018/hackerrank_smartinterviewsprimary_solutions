#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   int t;
    scanf("%d",&t);
    while(t--){
   long long int n;
     long long  int x,count=0;
    scanf("%lld",&n);
        while(n>0){
        x=n/5;
       count+=x;
       n=n/5;
        }
        printf("%lld\n",count);
    }
    
    return 0;
}
