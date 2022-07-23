#include <stdio.h>
int main(){
    int t,count=1;
    scanf("%d",&t);
    int x[t];
    for(int i=0;i<t;i++){
        scanf("%d",&x[i]);
    }
    for (int i = 0; i < t-1; i++)
    {
        if(x[i] != x[i+1])count++;
    }
    printf("%d\n",count);
}