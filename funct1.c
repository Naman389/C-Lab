//Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0.
// Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. 
//Tabulate the results for different values of n and r with suitable messages.
#include <stdio.h>

int fact_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact_recursive(n - 1);
}

int fact_non_recursive(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

int binomial_recursive(int n, int r) {
    return fact_recursive(n) / (fact_recursive(r) * fact_recursive(n - r));
}

int binomial_non_recursive(int n, int r) {
    return fact_non_recursive(n) / (fact_non_recursive(r) * fact_non_recursive(n - r));
}

int main() {
    int n, r;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);



    printf("   n    r   nCr (Recursive)   nCr (Non-Recursive)\n");

    for (int i = 0; i <= n; i++) {
        printf("%d %d %d\n", n, i,
               binomial_recursive(n, i), binomial_non_recursive(n, i));
    }

    return 0;
}
