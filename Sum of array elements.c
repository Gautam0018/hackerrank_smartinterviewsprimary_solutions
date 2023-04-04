#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d\n",&t);
    while(t--){
      long int n,sum=0;
        scanf("%ld\n",&n);
         long long int a[n];
        for(int i=0; i<n; i++){
            scanf("%lld",&a[i]);
            sum=sum+a[i];
        }
        printf("%ld\n",sum);
    }
    return 0;
}
