#include<stdio.h>

void add(int,int);
void main(){
    int n1,n2;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
    
    add(n1,n2);
} 
void add(int x,int y){
    int sum;
    sum=x+y;
    printf("%d",sum);
}