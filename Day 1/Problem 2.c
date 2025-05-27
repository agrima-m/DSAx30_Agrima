#include <stdio.h>

int main() {
    int i,j, n,space;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (space = 0; space <n - i; space++) {
           printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%c", 'A' + j); 
        }

        
        for (j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n"); 
    }

    return 0;
}