#include <stdio.h>
int main()
{
    int t, x, y, z, r = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &x, &y, &z);
        if (x + y + z > 1)
            r++;
    }
    printf("%d\n", r);
}