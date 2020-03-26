#include<bits/stdc++.h>
using namespace std;

void fib(int f[],int n)
{
   int f[1]=1;
   int f[2]=2;

    for(int i=3;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }

}
void fibsum(int N)
{
    int f[N+1];
    fib(f,N);
    for(int i=0;i<N;i++)
    {

        if(f[i]%2==0)
        {
            sum+=f[i];
        }
    }
    cout<<sum<<endl;
}
int main()
{
    int n;
    cin>>n;
    fibsum(n);






}
