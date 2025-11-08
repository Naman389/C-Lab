//Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. 
//Write a C program to display your present address.
#include<stdio.h>
#include<string.h>


union Details{
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[25];
    char zip[50];
};

    int main(){
        union  Details P;
        printf("Enter name:");
       scanf("%s",P.name);
       printf("Enter home address:");
       scanf("%s",P.home_address);
       printf("Enter hostel address:");
       scanf("%s",P.hostel_address);
       printf("Enter city:");
       scanf("%s",P.city);
       printf("Enter state:");
       scanf("%s",P.state);
       printf("Enter zip code:");
       scanf("%s",P.zip);


         
        return 0;
    }