#include <stdio.h>
int main(){
    int t,temp;
    scanf("%d",&t);
    int value[t];
    for(int i=1;i<=t;i++){
        scanf("%d",&temp);
        value[temp]=i;
    }
    for(int i=1;i<=t;i++)printf("%d ",value[i]);
    return 0;
}
