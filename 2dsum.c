#include<stdio.h>
int main (){
    int rows,cols;
    printf("Enter rows:");
    scanf("%d",&rows);
    printf("Enter columns:");
    scanf("%d",&cols);

    int a[rows][cols],b[rows][cols],sum[rows][cols];
    int i,j;
    printf("Element of matrix A:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Element of[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }printf("Elements of matrix B:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Element of[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<rows;i++){
      for(j=0;j<cols;j++){
        sum[i][j]=a[i][j] + b[i][j];
        }
    }
    printf("Sum of matrix is:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
        printf(" %d\t",sum[i][j]);
    }
    printf("\n");
    } 
    return 0;
}