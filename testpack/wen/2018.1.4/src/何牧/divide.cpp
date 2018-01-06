#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int n,t,a[55],f[50005];

int main()
{
    freopen("divide.in","r",stdin);
    freopen("divide.out","w",stdout);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int sum=0,ans=0;
        memset(f,0,sizeof(f));
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=sum/2;j>=a[i];j--)
            {
                f[j]=max(f[j],f[j-a[i]]+a[i]);
            }
        }
        ans=sum-f[sum/2];
        printf("%d\n",ans-f[sum/2]);
    }
    return 0;
}
