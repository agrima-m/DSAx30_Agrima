#include <stdio.h>
#include <math.h>
int main(){
    int n,b,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    while (n!=1 && n!=4){
        sum=0;
        while(n>0){
            b=n%10;
            sum=sum+b*b;
            n=n/10;
        }
        n=sum;

    }
    if (n==1){
        printf("true");
    } else if (n==4){
        printf("false");
    };
    return 0;
}