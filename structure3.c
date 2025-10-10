#include <stdio.h>
#include <string.h>

struct Student {
    int SAP;
    char name[50];
    float marks;
};

int main() {
    struct Student S1;

    printf("Enter SAP ID: ");
    scanf("%d", &S1.SAP);

    printf("Enter Name: ");
    scanf("%s", S1.name);  
    printf("Enter Marks: ");
    scanf("%f", &S1.marks);

    printf("Student Details ---\n");
    printf("SAP: %d\n", S1.SAP);
    printf("Name: %s\n", S1.name);
    printf("Marks: %.2f\n", S1.marks);

    return 0;
}




