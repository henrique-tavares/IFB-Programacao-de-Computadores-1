#include <stdio.h>

int main()
{
    int n;
    scanf ("%i", &n);

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (j==n)
            {
                printf ("(%i,%i)", i, j);
            }
            else
            {
                printf ("(%i,%i), ", i, j);
            }
        }
        putchar ('\n');
    }
    return 0;
}