#include <stdio.h>
#include <string.h>
int main(){
    int t;
    char x[101];
    scanf("%d",&t);
    while(t--){
        scanf("%s",x);
        int l = strlen(x);
        if (l>10)
        {
            printf("%c%d%c\n",x[0],l-2,x[l-1]);
        }
        else printf("%s\n",x);
        
    }
    return 0;
}

