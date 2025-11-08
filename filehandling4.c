#include<stdio.h>
int main(){
    char text[100];
    FILE *fp;
    fp=fopen("test1.txt","w+");
    if(fp==NULL){
        printf("File is empty");
        return 0;
    }else{
        fprintf(fp,"My name is Naman!");
        //fgets(text,50,fp);
        //printf("%s",text);
        // fclose(fp);
        //fp-=100;
     
        
    }
     //fp=fopen("test1.txt","");
     fgets(text,-100,fp);
    printf("%s",text);
    fclose(fp);
    return 0;
}