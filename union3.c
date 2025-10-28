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
        strcpy(P.name,"Naman");
         printf("Name:%s\n",P.name);
        strcpy(P.home_address,"jaunpur");
         printf("Home address:%s\n",P.home_address);
        strcpy(P.hostel_address,"Bidholi");
         printf("Hostel address:%s\n",P.hostel_address);
        strcpy(P.city,"dehradun");
        printf("City:%s\n",P.city);
        strcpy(P.state,"uttarakhand");
         printf("State:%s\n",P.state);
        strcpy(P.zip,"248007");
         printf("Zip-%s\n",P.zip);

        printf("Present address-Bidholi,dehradun,uttarakhand,248007");
        return 0;
    }