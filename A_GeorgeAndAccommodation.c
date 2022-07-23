#include<stdio.h>
int main(){
    int r,x,y,count=0;
    scanf("%d",&r);
    while(r--){
        scanf("%d%d",&x,&y);
        if(x+1<y)count++;
    }
    printf("%d\n",count);
    return 0;
}