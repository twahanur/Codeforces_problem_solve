#include <stdio.h>
int main(){
    int g,i=0,a=0,d=0;
    char s[1000001];
    scanf("%d",&g);
    scanf("%s",s);
    while(i<g){
        if(s[i]=='A')a++;
        else d++;
        i++;
    }
    if(a>d)printf("Anton\n");
    else if(a<d)printf("Danik\n");
    else printf("Friendship\n");
    return 0;
}