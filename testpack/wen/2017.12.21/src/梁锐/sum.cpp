#include <ctime>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
#define in freopen ("sum.in","r",stdin)
#define out freopen ("sum.out","w",stdout)
#define INF 2147483647
#define UNINF -2147483648ll
#define ch char
#define bo bool
#define ui unsigned int
#define ll long long
using namespace std;
ll t,n,ans,suml[100005],sumr[100005],a[100005];
inline void work();
int main(){
    in;out;
    work();
}
inline void work(){
    scanf ("%lld",&t);
    while (t--){
        ans=INF*1000ll;
        memset(sumr,0,sizeof(sumr));
        memset(suml,0,sizeof(suml));
        scanf ("%lld",&n);
        for (int i=1;i<=n;i++){
            scanf ("%lld",&a[i]);
        }
        for (int i=1;i<=n;i++){
            suml[i]=suml[i-1]+a[i];
        }
        for (int i=n;i>=1;i--){
            sumr[i]=sumr[i+1]+a[i];
        }
        for (int i=1;i<=n;i++){
            ans=min(ans,sumr[i]+suml[i]);
        }
        printf ("%lld\n",ans);
    }
}
