#include<stdio.h>
#include<math.h>
int main()
{
    // double R,VOLUME;
    // scanf("%lf", &R);

    // VOLUME = (4*3.14159*pow(R,3)/3);

    // printf("VOLUME = %.3lf\n", VOLUME);
    int x[100],*p;
    x[4]=6;
    p=x[4];
    printf("VOLUME = %d\n",x);
    printf("LOCATION = %p\n",p);
    return 0;
}