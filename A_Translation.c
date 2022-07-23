#include <stdio.h>
#include <string.h>
int main()
{
    int i=0, lenT, res = 0;
    char s[101], t[101];
    scanf("%s", s);
    scanf("%s", t);
    while (s[i] != '\0')
    {
        lenT = strlen(t);
        if (s[i] == t[lenT - 1 - i])
        {
            res++;
        }
        else
        {
            printf("NO");
            break;
        }
        i++;
    }
    if (res ==strlen(t) && res ==strlen(s))
        printf("YES");
    return 0;
}