#include<bits/stdc++.h>

using namespace std;

bool L(int n)
{
    while(n!=0)
    {
        if(n%10!=4 && n%10!=7)
            return 0;
        n/=10;
    }
    return 1;
}

bool AL(int m)
{
    if(L(m))
        return 1;
    for(int i=2;i*i<=m;i++)
    {
        if(m%i==0 && (L(i) || L(m/i)))
            return 1;
    }
    return 0;
}
int main()
{
    int p;
    cin>>p;
    if(AL(p))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
