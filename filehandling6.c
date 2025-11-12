//1.	Write a program to create a new file and write text into it.
#include<stdio.h>
int main(){
    FILE *fp;
    char str[100];
    fp=fopen("lab.txt","w");
    if(fp==NULL){
        printf("Cannot create file.\n");
        return 0;
    }else{
        printf("Enter text to add:");
        fgets(str,100,stdin);
        fprintf(fp,str);
        fclose(fp);
    }
    return 0;
}