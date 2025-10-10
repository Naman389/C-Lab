#include<stdio.h>

union student{
    int rollno;
    float marks;
};

int main(){
    union student S;
    S.rollno=1000;
    S.marks=98.00;
     
    union student *p;
    p=&S;
   
    printf("%d\n",p->rollno);
    printf("%.2f\n",p->marks);
    return 0;
}