#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int f[10005],a[10005],n,m,ans,b[10005],ok,t;
int search (int *a,int n,int m){
	memset (f,0,sizeof(f));
	f[0]=1;
	for (int i=1;i<=n;i++){
		for (int j=m;j>=a[i];j--)
			f[j]+=f[j-a[i]];
	}
	return f[m];
}
int main (){
	freopen ("additive.in","r",stdin);
	freopen ("additive.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		ans=0;
		scanf ("%d",&n);
		for (int i=1;i<=n;i++)
			scanf ("%d",a+i);
		for (int i=1;i<=n;i++)
			ans+=search (a,n,a[i])-1;
		printf ("%d\n",ans);
	}
	
}