#include<ctime>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;

int pr[5005],t,n;
bool k[10005];

void nearly_useless_shaifa_prime_biao()
{
    int s=0;
    for(int i=2;i<=10000;i++)
    {
        if(!k[i])
        {
            pr[++s]=i;
            for(int j=i*i;j<=10000;j+=i)
                k[j]=true;
        }
    }
}

int main()
{
    freopen("prime.in","r",stdin);
    freopen("prime.out","w",stdout);
    scanf("%d",&t);
    nearly_useless_shaifa_prime_biao();
    while(t--)
    {
        scanf("%d",&n);
        int s=0;
        for(int i=1;pr[i]<=n;i++)
        {
            int ans=0;
            for(int j=i;ans<n;j++)
            {
                ans+=pr[j];
            }
            if(ans==n)
                s++;
        }
        printf("%d\n",s);
    }
    return 0;
}
