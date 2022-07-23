#include <stdio.h>
#include <string.h>
int main()
{
    char x[10001];
    scanf("%s", x);
    int len = strlen(x), count = 0;
    for (int i = 1; i < len; i += 2)
    {
        for (int j = i; j < len-1; j += 2)
        {
            if (x[j] < x[i])
            {
                char temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for (int i = 1; i < len; i += 2)
    {
        if (len>2 && x[i] != x[i + 2])
            count++;
    }
    printf("%d\n", count);
}