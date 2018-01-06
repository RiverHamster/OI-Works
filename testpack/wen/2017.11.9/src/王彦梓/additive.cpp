#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int t,m,ans;
int a[35],s;
bool b[35];
void dfs(int i,int j,int c){
	if(c>=a[i]){
		if(c==a[i])ans++;
		return;
	}
	for(int x=j+1;x<=m;x++){
		if(!b[x]){
			b[x]=1;
			dfs(i,x,c+a[x]);
			b[x]=0;
		}
	}
}
int main(){
	int i;
	freopen("additive.in","r",stdin);
	freopen("additive.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&m);
		ans=0;s=0;
		for(i=1;i<=m;i++){
			scanf("%d",&a[i]);
			s+=a[i];
		}
		for(i=1;i<=m;i++){
			if(a[i]<=s-a[i]){
				b[i]=1;
				dfs(i,0,0);
				b[i]=0;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
