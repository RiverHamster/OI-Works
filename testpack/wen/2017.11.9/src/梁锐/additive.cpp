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

int n,t,ans,a[35];
int s[300005],sm[300005];
inline void work();
inline void dfs(int dep,int num,int mxa,int cs);

int main(){
    freopen ("additive.in","r",stdin);
    freopen ("additive.out","w",stdout);
    work();
}

void dfs(int dep,int num,int mxa,int cs){
	if (num>mxa)return;
	if (dep>n)return;
	if (cs>=2)sm[num]++;
	for (int i=dep+1;i<=n;i++){
		dfs(i,num+a[i],mxa,cs+1);
	}
}

inline void work(){
    scanf ("%d",&t);
    while (t--){
        scanf ("%d",&n);
        ans=0;
        int kkksc03=0;
        memset (s,0,sizeof(s));
        memset (sm,0,sizeof(sm));
        for (int i=1;i<=n;i++){
            scanf ("%d",&a[i]);
            s[a[i]]=1;
            kkksc03=max(a[i],kkksc03);
        }
        dfs(0,0,kkksc03,0);
        for (int i=0;i<=300000;i++){
            if (s[i]==1&&sm[i]>=1)ans+=sm[i];
        }
        printf ("%d\n",ans);
    }
}
