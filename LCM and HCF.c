#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
       long int x,y;
        scanf("%ld %ld\n",&x,&y);
        int a=x,b=y;
        if(a==0 && b==0){
            printf("0 0\n");
        }
        else if(a==0){
            printf("%d %d\n",a,b);
        }
        else if (b==0){
            printf("%d %d\n",b,a);
        }
        else{
        while(b!=0){
            int t=b;
            b=a%b;
            a=t;
        }
        long int hcf=a;
       long int lcm=(x*y)/hcf;
        printf("%ld %ld\n",lcm,hcf);
        }
    }
}
