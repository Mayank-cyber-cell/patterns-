#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter the rows : ");
    scanf("%d", &n);
    int m;
    printf("enter the columns: ");
    scanf("%d", &m);
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < m; j++)
            {
                printf("* ");
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                if (j == 0 || j == m - 1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
                        }
        }
        printf("\n");
    }
    return 0;
}