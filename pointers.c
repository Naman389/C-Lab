//1.	Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. 
//Print the values of both the pointers and the variables they point to.

#include<stdio.h>
int main(){
   int a=10;
   float b=1.5;
   char x='c';

   int *p1=&a;
   float *p2=&b;
   char *p3=&x;

   printf("a=%d\n",a);
   printf("b=%.1f\n",b);
   printf("x=%c\n",x);


    printf("*pint = %d\n", *p1);
    printf("*pfloat = %.1f\n", *p2);
    printf("*pchar = %c\n", *p3);

    return 0;
}
