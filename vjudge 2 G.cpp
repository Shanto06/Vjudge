#include<bits/stdc++.h>
using namespace std;
int p(int n,int a,int b,int c)
{
    int sum=0;
    if(n<=2)
        return 0;
    sum+=a*p(n-1)+b*p(n-3)+c;
    n--;
    return sum;
}
int main()

{
    int a,b,c,d,n,m;
    cin>>n>>a>>b>>c;
    m=p(n,a,b,c);
    cout<<m<<endl;
}
