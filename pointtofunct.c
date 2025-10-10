#include<stdio.h>
int add(int,int);
int subtract(int,int);
int multiply(int,int);

int add(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}

int main(){
    int sum,diff,product;
    int (*fp)(int,int);
    fp=&add;
    int (*fp2)(int,int);
    fp2=&subtract;
    int (*fp3)(int,int);
    fp3=&multiply;
    sum=fp(10,30);
    diff=fp2(30,10);
    product=fp3(5,4);
    printf("sum=%d\n",sum);
    printf("difference=%d\n",diff);
    printf("product=%d",product);
    return 0;
}