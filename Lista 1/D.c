#include <stdio.h>

int main()
{
    int n;
    scanf ("%i", &n);

    n = (n/2)+1;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            putchar ('*');
        }
        putchar ('\n');
    }
    for (int i=(n-1); i>0; i--)
    {
        for (int j=1; j<=i; j++)
        {
            putchar ('*');
        }
        putchar ('\n');
    }
    printf ("\n");
    return 0;
}