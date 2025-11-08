#include<stdio.h>

int main(){
    int x;
    x=10;
    int *p=&x;
    int **q=&p;
    printf("%p\n",&q);
    printf("%p\n",&x);
    printf("%d\n",x);
    printf("%p\n",p);
    printf("%p\n",*q);
    printf("%d\n",*p);
    printf("%d\n",**q);
    printf("%p",q);
    return 0;
}
