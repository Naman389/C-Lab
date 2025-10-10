#include <stdio.h>

int globalVar = 10;

void Function() {
    int localVar = 20;

    printf("Inside Function:\n");
    printf("Global variable = %d\n", globalVar); 
    printf("Local variable  = %d\n", localVar);  
}

int main() {
    printf("Inside main:\n");
    printf("Global variable = %d\n", globalVar);

    printf("Local variable = %d\n", localVar); 

    Function();

    return 0;
}