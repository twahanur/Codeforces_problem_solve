#include <stdio.h>
#include <string.h>
int main()
{
    char x[10001];
    gets(x);
    int len = strlen(x), count = 0;
    for (int i = 1; i < len-2; i += 3)
    {
        for (int j = i; j < len-1; j += 3)
        {
            if (x[j] < x[i])
            {
                char temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for (int i = 1; i < len-1; i+=3)
    {
        if (len>2 && x[i] != x[i + 3])
            count++;
    }
    printf("%d\n", count);
}