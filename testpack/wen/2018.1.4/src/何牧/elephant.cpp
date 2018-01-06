#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int t,x;

int main()
{
    freopen("elephant.in","r",stdin);
    freopen("elephant.out","w",stdout);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        int ans=0;
        ans+=x/10;
        x%=10;
        ans+=x/5;
        x%=5;
        ans+=x;
        printf("%d\n",ans);
    }
    return 0;
}
