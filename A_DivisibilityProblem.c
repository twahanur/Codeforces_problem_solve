#include <stdio.h>
#include <math.h>
int main(){
    int a,b,t;
    scanf("%d",&t);
    if (1<=t&&t<=pow(10,4))
    {
        for (int i = 1; i <=t; i++)
        {
            scanf("%d %d",&a,&b);
            if (a%b==0)
            {
                printf("%d",a);
            }
            
        }
        
    }
    
}