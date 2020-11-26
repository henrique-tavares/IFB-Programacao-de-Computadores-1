#include <stdio.h>

int main()
{
    int n, num[100000];

    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%i", &num[i]);
    }

    for (int i = n; i > 0; i--)
    {
        printf("%i ", num[i - 1]);
    }
    putchar('\n');
    return 0;
}