//Develop a function REVERSE (str) that accepts a string argument.
// Write a C program that invokes this function to find the reverse of a given string.

#include <stdio.h>
#include <string.h>

void REVERSE(char str[]) {
    int i, j;
    char temp;

    i = 0;
    j = strlen(str) - 1;  

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[50];

    printf("Enter a string: ");
    fgets(str, 50, stdin);


    REVERSE(str);

    printf("Reversed string: %s\n", str);

    return 0;
}