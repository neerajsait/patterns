#include <stdio.h>
int main() {
    int i, j, n;
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 1;  
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
                printf("*");
        }
        printf("\n");  
    }
    return 0;
}
