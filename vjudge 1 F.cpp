#include<bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
vector<int>in;

int main(){

    int fin,sin;
    int n,a,m;
    while(scanf("%d",&n) != EOF){
        int minDes = 1000001,fVal,sVal;
        for(int i = 0; i < n; i++){
            scanf("%d",&a);
            in.push_back(a);
        }
        scanf("%d\n",&m);
        sort(in.begin(),in.end());
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(in[i]+in[j] == m && abs(in[i] - in[j]) < minDes){
                    fVal = in[i];
                    sVal = in[j];
                    minDes = abs(in[i] - in[j]);
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",fVal,sVal);
        in.clear();
    }
    return 0;
}
