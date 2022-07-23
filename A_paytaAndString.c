#include <stdio.h>
int main()
{
    int i = 0, la, lb;
     int isZero=0;
    la = lb = 0;
    char a[101], b[101];
    scanf("%s %s", a, b);
    while (a[i] != '\0')
    {
        if (a[i] <= 91)
            a[i] = a[i] + 32;
        if (b[i] <= 91)
            b[i] = b[i] + 32;

        la += a[i];
        lb += b[i];
        if (la > lb)
        {
            printf("1\n");
            isZero=0;
            break;
        }
        else if (la == lb)
            isZero=1;
        else
        {
            printf("-1\n");
            isZero=0;
            break;
        }
        i++;
    }
    if (isZero)printf("0\n");
    return 0;
}