#include<cstdio>
#include<algorithm>
using namespace std;
int n,m,a[35],ans;
void dfs(int i,int k,int sum){
	if(sum==k) ans++;
	if(sum<k&&i<=m){
		dfs(i+1,k,a[i]+sum);
		dfs(i+1,k,sum);
	}
}
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("additive.in","r",stdin);
	freopen("additive.out","w",stdout);
	scanf("%d",&n);
	while(n--){
		ans=0;
		scanf("%d",&m);
		for(int i=1;i<=m;i++)
			scanf("%d",&a[i]);
		sort(a+1,a+1+m,cmp);
		for(int i=1;i<=m;i++)
			dfs(i+1,a[i],0);
		printf("%d\n",ans);
	}
	return 0;
}
