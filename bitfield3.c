#include<stdio.h>

struct flagged{

     char flag3:4;
    
};

int main(){
    struct flagged e1;
    int n;
    printf("enter number:");
    scanf("%d",&n);

   
     printf("%d",sizeof(struct flagged));
    return 0;

}
