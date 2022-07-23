#include<stdio.h>
int main(){
    char x[1001];
    scanf("%s",x);
    if(x[0]>'Z')x[0]=x[0]+'A'-'a';
    printf("%s\n",x);
    return 0;
}