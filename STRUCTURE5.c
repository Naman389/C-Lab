#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char name[50];
};

void Display(struct student);
struct student insert(int,char[]);

void display(struct student S){
    printf("%d",S.rollno);
    printf("%s",S.name);
    
}

struct student insert(int x,char y[]){
    struct student S1;
    S1.rollno=x;
    strcpy(S1.name,y);
    return S1;
    }

int main(){
        char name[50];
        int rollno;
        struct  student S2;
        printf("Enter Name:");
        fgets(name,50,stdin);
        printf("Enter Roll no.:");
        scanf("%d",&rollno);
        S2=insert(rollno,name);
        display(S2);
        

    }

    
