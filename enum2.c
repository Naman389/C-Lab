#include <stdio.h>

enum Result
{
    pass = 40,
    fail = 30,
    first = 7,
    second
};

int main()
{
    enum Result p = pass, f = fail;
    int choice;
    printf("%d\n",p);

    printf("Enter choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 'p':
        printf("pass");
        break;
    case 'f':
        printf("Fail");
        break;
    default:
        break;
    }
}