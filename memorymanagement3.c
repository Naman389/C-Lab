#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    int *p=&x;
    p=(int*)calloc(3,sizeof(int));
    if(p==NULL){
        printf("Allocation failed.");
    }
    printf("%d\n",sizeof(*p));
    for(int i=0;i<3;i++){
        printf("%d\n",p[i]);
    }
    printf("%d",sizeof(p));
    free(p);
    return 0;
}