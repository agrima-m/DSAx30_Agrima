#include <stdio.h>
int main(){
    int n,i,fact=1;
    printf("Enter a number between 2 and 5 (both inclusive):");
    scanf("%d",&n);
    if (n>=2 && n<=5){
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
        
        printf("Total number of combinations: %d",fact);

    } else {
        printf("Not a valid number");
    }
       return 0;
}