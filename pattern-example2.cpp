#include <stdio.h>
//triangle pattern with while loop
int main()
{
    int rows, i, j;
    i = 1;

    printf("Please Enter the Number of Rows:  ");
    scanf("%d", &rows);

    while (i <= rows)
    {
        j = 1;
        while (j <= i)
        {
            printf(" %d", i);
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}