#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        if(i%2!=0){
            printf("I hate ");
        }
        else printf("I love ");
        if(i!=x)printf("that ");
    }
    printf("it\n");
}