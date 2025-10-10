#include <stdio.h>
#include <string.h>

struct Student {
    int SAP;
    char name[50];
    float marks;
};

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student S[n];  // Array of students

    // Input loop
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("SAP ID: ");
        scanf("%d", &S[i].SAP);

        printf("Name: ");
        scanf("%s", S[i].name);  // Reads only one word (use fgets for full name)

        printf("Marks: ");
        scanf("%f", &S[i].marks);
    }

    // Output loop
    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("SAP: %d\n", S[i].SAP);
        printf("Name: %s\n", S[i].name);
        printf("Marks: %.2f\n", S[i].marks);
    }

    return 0;
}
