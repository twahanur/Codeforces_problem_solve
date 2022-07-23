#include<stdio.h>
int main(){
    int x,y,count=0;
    scanf("%d",&x);
    while(x--){
        scanf("%d",&y);
        if(y>0){
            count++;
        }
    }
    if(count>0) printf("HARD\n");`12
    else printf("EASY\n");
    return 0;
}