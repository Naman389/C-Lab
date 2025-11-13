//2.	Open an existing file and read its content character by character, and then close the file.
#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    char str[200];
    fp=fopen("lab.txt","r");
    if(fp==NULL){
        printf("NO file found.\n");
        return 0;
    }else{
        // while((ch=fgetc(fp))!=EOF)
        while(fgets(str,200,fp)){
        // printf("%c",ch);
        printf("%s",str);
        fclose(fp);
        }
    }
    return 0;
}