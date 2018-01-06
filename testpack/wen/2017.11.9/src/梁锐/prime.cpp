#include <cmath>
#include <ctime>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int n,ans,t,pr[10005];
bool s[10005];
inline void work();
inline void prime();

int main(){
    freopen ("prime.in","r",stdin);
    freopen ("prime.out","w",stdout);
    prime();
    work();
}

inline void prime(){
    int k=0;
    for (int i=2;i<=10000;i++){
        if (!s[i]){
            pr[++k]=i;
            for (int j=i*i;j<=10000;j+=i){
                s[j]=1;
            }
        }
    }
}

inline void work(){
    scanf ("%d",&t);
    while (t--){
        scanf ("%d",&n);
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
