#include<stdio.h>

// struct Student{
//     int rollno;
//     int marks;
// };

void main(){
    // struct Student S1;
    // S1.rollno=1001;
    // S1.marks=97;
    int *p;
    int a=10;
    p=&a;
   // printf("%d\n",(*p).rollno);
    printf("Marks=%d",p->a);

}