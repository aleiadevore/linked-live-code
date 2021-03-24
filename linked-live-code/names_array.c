#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char names[3][50];
    int i = 0;

    while (i < 3)
    {
        printf("What is your name?\n");
        scanf("%s", names[i]);

        printf("Your name is %s\n", names[i]);
        i++;
    }
    printf("__________\n");
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", names[i]);
    }
    return (0);
}