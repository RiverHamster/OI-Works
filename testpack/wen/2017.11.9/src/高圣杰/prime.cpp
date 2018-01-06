#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int n,ans,t,pr[10005];
bool s[10005];
inline int read(){
    int x=0,f=1;char ch=getchar();
    while('0'>ch||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while('0'<=ch&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
int main(){
    freopen ("prime.in","r",stdin);
    freopen ("prime.out","w",stdout);
    int k=0;
    for (int i=2;i<=10000;i++){
        if (!s[i]){
            pr[++k]=i;
            for (int j=i*i;j<=10000;j+=i){
                s[j]=1;
            }
        }
    }
    t=read();
    while (t--){
        n=read();
        ans=0;
        for (int i=1;pr[i]<=n;i++){
            int k=0;
            for (int j=i;k<n;j++){
                k+=pr[j];
            }
            if (k==n)ans++;
        }
        printf ("%d\n",ans);
    }
}

