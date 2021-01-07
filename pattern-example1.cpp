#include <stdio.h>
//triangle pattern with for loop
int main()
{
    int rows, i, j;

    printf(" \n Please Enter the Number of Rows:  ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d", i);
        }
        printf("\n");
    }
    return 0;
}