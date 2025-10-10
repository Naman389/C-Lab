//Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function.
#include <stdio.h>

void change(int *temp,int *x, int *y) {
    *temp=*x;  
    *x = *y;
    *y=*temp; 
}

int main() {
    int temp=0, a = 10, b = 20;

    printf("original values:\n");
    printf("a = %d, b = %d\n", a, b);

    change(&temp, &a, &b);  

    printf("After modifying:\n");
    printf("a = %d, b = %d", a, b);

    return 0;
}
