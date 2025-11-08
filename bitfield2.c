#include<stdio.h>

struct flagged{
     //int flag:2;
     //int flag1:3;
     char flag3:4;
    
};

int main(){
    struct flagged e1;
    int n;
    printf("enter number:");
    scanf("%d",&n);

    // if(n%2==0){
    //     e1.flag=0.0;
    //     printf("%d\n",e1.flag);
    // }else{
    //     e1.flag=1;
    //     printf("%d\n",e1.flag);
    // }
     //printf("%d\n",sizeof(e1.flag));
    // printf("%d",sizeof(e1.error));
     printf("%d",sizeof(struct flagged));
    return 0;

}