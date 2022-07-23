#include <stdio.h>
int main(){
    int i,test;
    scanf("%d",&test);
    int d[test+1];
    double total = 0.0,ans = 0.0;
    for(i=0;i<test;i++){
        scanf("%d",&d[i]);
        total += d[i];
    }
    ans = total/test;
    printf("%.12lf\n",ans);
    return 0;
}