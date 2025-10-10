#include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j, k;
    int A[10][10], B[10][10], C[10][10];


    printf("Enter rows and columns of Matrix A (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of Matrix B (p q): ");
    scanf("%d %d", &p, &q);


    if (n != p) {
        printf("Matrix multiplication not possible! Columns of A must equal rows of B.\n");
        return 0;
    }

    printf("Enter elements of Matrix A (%dx%d) in row-major order:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B (%dx%d) in row-major order:\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            C[i][j] = 0;

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    printf("Resultant Matrix (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}