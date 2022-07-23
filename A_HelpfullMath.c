#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i += 2)
    {
        for (int j = i + 2; j < len; j += 2)
        {
            if (s[j] < s[i])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("%s\n", s);
}