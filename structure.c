#include<stdio.h>
#include<string.h>
struct Student{
    int SAP;
    char (name[50]);
    float marks;
}S1;

int main(){
    // struct Student S1;
    S1.SAP=100234;
    strcpy(S1.name,"sam");
    S1.marks=90;
    printf("SAP:%d\n",S1.SAP);
    printf("Name:%s\n",S1.name);
    printf("Marks:%.2f",S1.marks);
    return 0;

}