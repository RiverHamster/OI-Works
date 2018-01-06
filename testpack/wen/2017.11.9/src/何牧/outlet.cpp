#include<ctime>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;

int t;

int main()
{
    freopen("outlet.in","r",stdin);
    freopen("outlet.out","w",stdout);
    scanf("%d",&t);
    while(t--)
    {
        int n,a[11],ans=0;
        scanf("%d",&n);
        for(int i=1;i<n;i++)
        {
            scanf("%d",&a[i]);
            ans+=a[i]-1;
        }
        scanf("%d",&a[n]);
        ans+=a[n];
        printf("%d\n",ans);
    }
    
    return 0;
}
