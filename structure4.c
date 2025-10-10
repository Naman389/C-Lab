#include <stdio.h>
#include <string.h>


struct Student {
    int Rollno;
    char name[50];
   
}S1;

void Display (struct Student );

void Display (struct Student S1){
    printf("Rollno=%d\n",S1.Rollno);
    printf("Name:%s",S1.name);

}
void main(){
    S1.Rollno=12;
    strcpy(S1.name,"Naman");
    Display(S1);
}

