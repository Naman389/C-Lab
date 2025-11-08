#include<stdio.h>

struct flagged{
     int flag:2;
    
};

int main(){
    struct flagged e1;
    int n;
    printf("enter number:");
    scanf("%d",&n);

    if(n%2==0){
        e1.flag=0;
        printf("%d",e1.flag);
    }else{
        e1.flag=1;
        printf("%d",e1.flag);
    }
   // printf("%d",sizeof(e1.flagged));
    // printf("%d",sizeof(e1.error));
    return 0;

}