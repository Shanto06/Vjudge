#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main()
{
    int ar[100000],i=0,n,cnt=1;
    int ar1[100000]={0};
    while(scanf("%d",&n)!=EOF)
        ar[i++]=n;
        n=i;
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(ar[j]==ar[k])
                {
                    cnt++;
                    ar1[k]=1;
                }
            }
            if(ar1[j]==0)
                cout<<ar[j]<<" "<<cnt<<endl;
            cnt=1;
        }






}
