#include <stdio.h>
#include <conio.h>

int main()
{
    int a, j, i;

    printf("Enter No : ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*",j);
        }

        printf("\n");
    }

    return 0;
}