#include <stdio.h>
//inverted half pyramid pattern
int main()
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}