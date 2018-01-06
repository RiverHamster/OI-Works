#include<ctime>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;

int t,k[10005];

struct P
{
    int s;
    int e;
}p[1005];

bool cmp(P x,P y)
{
    if(x.s==y.s)
        return x.e<y.e;
    return x.s<y.s;
}

int main()
{
    freopen("meeting.in","r",stdin);
    freopen("meeting.out","w",stdout);
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
        scanf("%d %d",&p[i].s,&p[i].e);
    sort(p+1,p+1+t,cmp);
    int ans=1;
    for(int i=1;i<=t;i++)
    {
        bool flag=false;
        for(int j=1;j<=ans;j++)
        {
            if(k[j]<=p[i].s)
            {
                flag=true;
                k[j]=p[i].e;
                break;
            }
        }
        if(flag==false)
        {
            ans++;
            k[ans]=p[i].e;
        }
    }
    printf("%d",ans);
    return 0;
}
