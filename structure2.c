#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
      float marks[5];  
    float percentage;
};

int main() {
    int  i;

    struct Student S[20];
       

    for (i = 0; i <3; i++) {
        printf("Enter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", S[i].name);  
          
        float sum = 0;
        for (int j = 0; j < 5; j++) {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%f", &S[i].marks[j]);
            sum += S[i].marks[j];
        }

        S[i].percentage = sum / 5.0; 
    }

    printf(" Student Reportcard :-\n");
    for (i = 0; i <3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", S[i].name);
        printf("Percentage: %.2f%%\n", S[i].percentage);
    }
    

    return 0;
}