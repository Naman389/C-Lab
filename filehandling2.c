#include<stdio.h>
int main(){
    char text[100];
    FILE *fp;
    fp=fopen("test.txt","w");
    if(fp==NULL){
        printf("File is empty");
        return 0;
    }else{
        fprintf(fp,"hello!how are you?");
        //fgets(text,50,fp);
        //printf("%s",text);
        fclose(fp);

    }
    fp=fopen("test.txt","r");
    fgets(text,100,fp);
    printf("%s",text);
    fclose(fp);
    return 0;
}