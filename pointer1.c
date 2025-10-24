//2.	Perform pointer arithmetic (increment and decrement) on pointers of different data types. 
//Observe how the memory addresses change and the effects on data access.
#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'X';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;
    
    printf("Original addresses:\n");
    printf("*pint = %p\n", p1);
    printf("*pfloat = %p\n",p2);
    printf("*pchar = %p\n", p3);

    p1++;
    p2++;
    p3++;

    printf("After incrementing pointers:\n");
    printf("*pint = %p\n", p1);
    printf("*pfloat = %p \n", p2);
    printf("*pchar = %p \n\n", p3);

    p1--;
    p2--;
    p3--;

    printf("After decrementing pointers:\n");
    printf("*pint = %p\n",p1);
    printf("*pfloat = %p\n", p2);
    printf("*pchar = %p\n",p3);

    return 0;
}

