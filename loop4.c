#include <stdio.h>
#include <conio.h>

int main()
{
    int j,i,a;

    printf("Enter No : ");
    scanf("%d" , &a);

    for (i = 1; i <=a; i++)
    {
        for (j = 1; j <=i; j++)
        {
            printf("%d " , j*j,j+j);
        }
        printf("\n");
    }
    
    return 0;
}