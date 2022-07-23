#include <stdio.h>
int main(){
    int a,i,x=0;
    char s[4];
    scanf("%d",&a);
    while(a--){
        scanf("%s",s);
        if(s[1]=='+')x++;
        else x--;
    }
    printf("%d\n",x);
    return 0;
}