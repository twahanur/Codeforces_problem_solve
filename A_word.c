#include <stdio.h>
int main()
{
    char s[101],y[101];
    int up, low, i,t=4;
    up = low = i = 0;   
    scanf("%s",s);
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            up++;
        else
            low++;
        i++;
    }
    i=0;
    while (s[i] != '\0')
    {
        if (up > low)
        {   
            if(s[i] >= 91)s[i]=s[i]-32;
        }
        else   
            if(s[i] <=91)s[i]=s[i]+32;
        i++;
    }
    printf("%s\n",s);
}