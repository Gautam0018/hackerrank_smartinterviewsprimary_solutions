#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        printf("Case #%d:\n",i);
            int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    }
    return 0;
}
