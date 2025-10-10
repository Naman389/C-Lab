#include<stdio.h>

enum days{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday
};
void main(){
    enum days now;
   // printf("%d\n",days.tuesday);
    now=wednesday;
    printf("%d",now);

}