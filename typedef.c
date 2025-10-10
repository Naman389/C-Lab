#include<stdio.h>

typedef struct{
    int rollno;
    int marks;
}Student;

void main(){
    Student S1;
    S1.rollno=1000;
    S1.marks=97;
    Student *p;
    p=&S1;
    printf("%d",p->rollno);
    printf("%d",p->marks);

}