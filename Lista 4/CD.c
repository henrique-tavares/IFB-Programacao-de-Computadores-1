#include <stdio.h>

int main()
{
    char wally[101];
    int n, m, i0, j0;

    scanf("%i %i", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", wally);

        for (int j = 0; j < m; j++)
        {
            if (wally[j] == 'W')
            {
                i0 = i;
                j0 = j;
            }
        }
    }

    printf("%i %i\n", i0 + 1, j0 + 1);

    return 0;
}