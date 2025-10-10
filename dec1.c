#include <stdio.h>

int counter = 0; 

void increment() {
    counter++;  
    printf("Counter incremented: %d\n", counter);
}

void decrement() {
    counter--; 
    printf("Counter decremented: %d\n", counter);
}



int main() {
    printf("Initial counter value: %d\n", counter);

    increment();  
    increment();  
    decrement();    

    return 0;
}