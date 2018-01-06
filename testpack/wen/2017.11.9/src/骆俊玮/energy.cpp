#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    freopen("energy.in","r",stdin);
    freopen("energy.out","w",stdout);
    int i,n,m;
    long long a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        a=m*m;
        b=(1+m)*m*3/2;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
