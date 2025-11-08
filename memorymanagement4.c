#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    int *p=&x;
    p=(int*)malloc(3*sizeof(int));
    if(p==NULL){
        printf("Allocation failed.");
    }
    printf("%d\n",sizeof(*p));
    for(int i=0;i<3;i++){
        p[i]=i+2;
        printf("%d\n",p[i]);
    }
    p=(int*)realloc(p,2*sizeof(int));
    if(p==NULL){
        printf("Allocation failed.");
    }
     for(int i=0;i<8;i++){
        p[i]=i+2;
        printf("%d\n",p[i]);
     }
    free(p);
    p=NULL;
    return 0;
}