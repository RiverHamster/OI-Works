#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int t,n,a[35],ans,s;
bool b[35];
void dfs(int x,int i,int sum){
	if (sum>=a[x]){
		if (sum==a[x]) ans++;
		return;
	}
	for (int j=i+1;j<=n;j++)
		if (!b[j]){
			b[j]=1;
			dfs(x,j,sum+a[j]);
			b[j]=0;
		}
}
int main(){
	freopen("additive.in","r",stdin);
	freopen("additive.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		scanf ("%d",&n);
		ans=0;s=0;
		for (int i=1;i<=n;i++){
			scanf ("%d",&a[i]);
			s+=a[i];
		}
		for (int i=1;i<=n;i++){
			if (a[i]<=s-a[i]){
				b[i]=1;
				dfs(i,0,0);
				b[i]=0;
			}
		}
		printf ("%d\n",ans);
	}
	return 0;
}
