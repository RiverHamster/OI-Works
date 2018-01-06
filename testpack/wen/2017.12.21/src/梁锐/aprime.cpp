#include <ctime>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
#define in freopen ("aprime.in","r",stdin)
#define out freopen ("aprime.out","w",stdout)
#define INF 2147483647
#define UNINF -2147483648ll
#define ch char
#define bo bool
#define ui unsigned int
#define ll long long
using namespace std;
int t,n,m,d,ans[1005];
bo s[1005],w[1005];
inline int dfs(int x,int y);
inline void sur();
inline void work();
int main(){
    in;out;
    work();
}
inline void sur(){
    for (int i=2;i<=1000;i++){
        if (!s[i]){
            for (int j=i*i;j<=1000;j+=i){
                s[j]=1;
            }
        }
    }
}
inline int dfs(int x,int y){
    ans[y]=x;
    int tmp=x;
    for (int i=y-1;i>y-d;i--){
        if (i<1)break;
        tmp+=ans[i];
        if (!s[tmp])return 1;
    }
    if (y==m-n+1)return 0;
    w[x]=1;
    for (int i=n;i<=m;i++){
        if (!w[i])if (!dfs(i,y+1))return 0;
    }
    w[x]=0;
    return 1;
}
inline void work(){
    sur();
    s[1]=1;
    scanf ("%d",&t);
    while (t--){
        memset(w,0,sizeof(w));
        memset(ans,0,sizeof(ans));
        scanf ("%d %d %d",&n,&m,&d);
        if (!dfs(n,1)){
            for (int i=1;i<=m-n+1;i++){
                printf ("%d ",ans[i]);
            }
        }
        else printf ("None");
        printf ("\n");
    }
}
