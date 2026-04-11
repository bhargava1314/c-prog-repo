#include <stdio.h>

int factorial()
{
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative number
    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d is %lld\n", n, factorial);
    }

return 0;
}
