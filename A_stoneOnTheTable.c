#include<stdio.h>
int main(){
    int t,i,count=0;
    char x[51];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",&x[i]);
    }
    for ( i = 0; i < t; i++)
    {
        if(x[i] == x[i+1])count++;
    }
    printf("%d\n",count);
}