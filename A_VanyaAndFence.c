#include<stdio.h>
int main(){
    int n,h,x,i,count=0;
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x>h)count+=2;
        else count++;
    }
    printf("%d\n",count);
    return 0;
}