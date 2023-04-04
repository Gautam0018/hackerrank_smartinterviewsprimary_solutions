#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        printf("Case #%d:\n",i);
        int n;
        scanf("%d",&n);
        for(int i=0; i<n;i++){
            for(int j=0; j<n;j++){
                if(j+i==n/2 || i+j==n-1+(n/2) || j==i+(n/2) || i==j+(n/2))
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
