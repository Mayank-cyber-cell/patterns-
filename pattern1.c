#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, a = 1;
    printf("enter the number n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if ((n / 2) != i)
        {
            for (int j = 0; j < n; j++)
            {
                if ((n/2)==j)
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
                
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                printf("* ");
            }
            
        }
        
        printf("\n");
    }
    return 0;
}