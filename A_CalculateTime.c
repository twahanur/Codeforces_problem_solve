#include <stdio.h>
int main(){
    int hour,min,totalMin;
    scanf("%d %d",&hour,&min);
    totalMin = (hour*60)+min;
    printf("%d\n",totalMin);
    return 0;
}