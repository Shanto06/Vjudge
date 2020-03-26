

///B
#include<stdio.h>
int main()
{
    long long int a,b,dif;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {


    dif=a-b;
    if(dif<0)

         dif= -dif;


    printf("%lld\n",dif);
    }
    return 0;
}
