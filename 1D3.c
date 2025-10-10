#include <stdio.h>

int main() {
    int n, i, num, count = 0;
    int arr[20]; 
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find frequency: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    printf("Frequency of %d = %d\n", num, count);

    return 0;
}