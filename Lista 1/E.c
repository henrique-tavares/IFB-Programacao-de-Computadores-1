#include <stdio.h>

int main()
{
    int n;
    scanf ("%i", &n);

    for (int i=1; i<=n; i++)
    {
        for (int j=(n-1); j>=i; j--)
        {
            putchar (' ');
        }
        for (int k=1; k<=i; k++)
        {
            putchar ('*');
        }
        for (int l=1; l<i; l++)
        {
            putchar ('*');
        }
        putchar ('\n');
    }
    putchar ('\n');

    return 0;
}