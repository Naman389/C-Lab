#include <stdio.h>

int main() {
    int x = 10; 

    printf("In main block: x = %d\n", x);

    {
        int y = 20;
        printf("Inside inner block: x = %d, y = %d\n", x, y);

        {  
            int z = 30; 
            printf("Inside nested block: x = %d, y = %d, z = %d\n", x, y, z);
        } 

        
         printf(" z: %d\n", z);
    }   

   
    printf(" y: %d\n", y);

    printf("In main block: x = %d\n", x);

    return 0;
}