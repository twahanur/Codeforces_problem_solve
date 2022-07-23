#include <stdio.h>
int main()
{
    int numberOfGroups, ak = 0, dui = 0, tin = 0, car = 0, st,taxi;
    scanf("%d", &numberOfGroups);
    while (numberOfGroups--)
    {
        scanf("%d", &st);
        if (st == 1)
            ak++;
        else if (st == 2)
            dui++;
        else if (st == 3)
            tin++;
        else
            car++;
    }
    taxi=car;
    taxi+=dui/2;
    if(dui%2==1)dui=1;
    else dui=0;
    if (tin>=ak)
    {
        taxi +=tin;
        ak=0;
    }
    else{
        taxi+=tin;
        ak-=tin;
    }
    if (dui==1)
    {
        taxi++;
        ak-=2;
    }
    if (ak>0)
    {
        taxi +=ak/4;
        ak=ak%4;
    }
    if(ak>0)taxi++;
    printf("%d\n",taxi);
    return 0;
}