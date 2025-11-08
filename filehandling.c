#include<stdio.h>
int main(){
    char text[100];
    FILE *fp;
    fp=fopen("test.txt","r");
    if(fp==NULL){
        printf("File is empty");
        return 0;
    }else{
        fgets(text,50,fp);
        printf("%s",text);
        fclose(fp);

    }
    return 0;
}