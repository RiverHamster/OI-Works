#include<ctime>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;

int t,n;

int main()
{
    freopen("energy.in","r",stdin);
    freopen("energy.out","w",stdout);
    scanf("%d",&t);
    while(t--)
    {
        long long ans1,ans2;
        scanf("%d",&n);
        ans1=1ll*n*n;
        ans2=3ll*n*(n+1)/2;
        cout<<ans1<<' '<<ans2<<endl;
    }
    return 0;
}
