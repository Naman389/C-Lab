#include<stdio.h>

int factorial(int n) {
    static int callCount = 0;  
    callCount++;

    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

      printf("factorial(%d) = %d (function called %d times)\n", n, fact, callCount);
    return 0;
}

void main() {
    factorial(3);
    factorial(4); 
    factorial(5);  
    factorial(3); 

}