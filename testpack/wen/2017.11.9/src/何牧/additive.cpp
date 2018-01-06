#include<ctime>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;

int t,m,s[105];
int k1[300005],k2[300005];

void DFS(int a,int b,int c,int d)
{
    if(b>c)
        return;
    if(a>m)
        return;
    if(d>=2)
        k2[b]++;
    for(int i=a+1;i<=m;i++)
        DFS(i,b+s[i],c,d+1);
}

int main()
{
    freopen("additive.in","r",stdin);
    freopen("additive.out","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int Max=-2147483647;
        scanf("%d",&m);
        memset(k1,0,sizeof(k1));
        memset(k2,0,sizeof(k2));
        for(int i=1;i<=m;i++)
        {   scanf("%d",&s[i]);
            k1[s[i]]=1;
            Max=max(s[i],Max);
        }
        DFS(0,0,Max,0);
        int ans=0;
        for(int i=1;i<=300000;i++)
        {
            if(k1[i]==1&&k2[i]>=1)
                ans+=k2[i];
        }
        printf("%d\n",ans);
    }
    
    return 0;
}
