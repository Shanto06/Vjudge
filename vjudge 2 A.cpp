#include <bits/stdc++.h>
using namespace std;


int gcd(long long n,long long m)
{
    long long  a=n,b=m;
    return b==0?a:gcd(b,a%b);
}

bool isdiv(long long s,long long w)
{
    if(w==1)
    return 1;
    int p=gcd(s,w);
    if(p==1)
        return 0;
    return isdiv(s,w/p);
}

int main()
{
    long long x,y;
    int T;
    cin>>T;
    while(T--)
    {
        cin>>x>>y;
    if(isdiv(x,y))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
}
