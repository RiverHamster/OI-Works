#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

long long n,t,a[100005],f[100005],g[100005];

int main()
{
    freopen("sum.in","r",stdin);
    freopen("sum.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long ans=99999999999999999ll;
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        for(int i=1;i<=n;i++)
            f[i]=f[i-1]+a[i];
        for(int i=n;i>=1;i--)
            g[i]=g[i+1]+a[i];
        for(int i=1;i<=n;i++)
            ans=min((long long)(f[i]+g[i]),ans);
        cout<<ans<<endl;
    }
    
    return 0;
}
