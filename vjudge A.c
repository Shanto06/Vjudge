
///A
#include<stdio.h>
int main()
{
    double a,b,c,d;
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {

    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);


    if(b*log(a) < d*log(c))
        printf("<\n");

    if(b*log(a) > d*log(c))
        printf(">\n");


    }
    return 0;
}


