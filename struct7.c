//2.	Write a C program to compute the monthly pay of 100 employees using each employee‗s name, basic pay. 
//The DA is computed as 52% of the basic pay. Gross-salary (basic pay + DA). Print the employees name and gross salary. 

#include <stdio.h>

struct Employee{
    char name[50];      
    float basic_pay;         
    float da;           
    float gross_salary;         
};  
    int main(){
        struct Employee emp[100];
        int i,n=100;
    for (i=0;i<n;i++){
    printf("Enter Name:");
    scanf("%s",emp[i].name);

    printf("Enter basic pay:");
    scanf("%f",&emp[i].basic_pay);

    emp[i].da=0.52*emp[i].basic_pay;
    emp[i].gross_salary=emp[i].basic_pay+emp[i].da;
    }
    for(i=0;i<n;i++){
        printf("Employee name:%s\n",emp[i].name);
        printf("Gross Salary=%.2f\n",emp[i].gross_salary);
    }
    return 0;
}
