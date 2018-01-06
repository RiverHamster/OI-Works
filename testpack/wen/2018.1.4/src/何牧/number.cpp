#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int t,k,numn,tong[10];
char s[100005];

int main()
{
    freopen("number.in","r",stdin);
    freopen("number.out","w",stdout);
    cin>>t;
    while(t--)
    {
        scanf("%d",&k);
        scanf("%s",s);
        memset(tong,0,sizeof(tong));
        numn=0;
        int len=strlen(s);
        for(int i=0;i<len;i++)
        {
            numn+=s[i]-'0';
            tong[s[i]-'0']++;
        }
        int ans=0;
        while(numn<k)
        {
            ans++;
            for(int i=0;i<10;i++)
            {
                if(tong[i]>0)
                {
                    tong[i]--;
                    tong[9]++;
                    numn+=9-i;
                    break;
                }
            }
        }
        printf("%d\n",ans);
    }
    
    return 0;
}
