#include <stdio.h>
int main()
{
    int a,i=1;

    scanf("%d", &a);

    for (i; i <= a; i++)
    {
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
}
