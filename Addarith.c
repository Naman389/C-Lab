#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int *p=&arr[2];
    int *q=&arr[4];
    //int sum=0;
    //p=arr;
    printf("%d",*p);
    q-p;
    printf("%d",q-p);
    // for(int i=0;i<5;i++){
    //     sum+=*(p++);
    // }
    // printf("sum=%d",sum);
    return 0;
}