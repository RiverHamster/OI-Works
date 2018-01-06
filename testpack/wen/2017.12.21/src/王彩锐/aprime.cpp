#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
bool f[10005],v[10005],ok;
int n,m,d,ans[10005],t,sum[10005];
bool check (int k,int i){
	if (i==1)
		return 1;
	if (i<d)
		return f[ans[i-1]+k];
	return (f[sum[i-1]-sum[i-d+1]+k] && f[ans[i-1]+k]);
}
void print (){
	for (int i=1;i<=m-n+1;i++)
		printf ("%d ",ans[i]);
	printf ("\n");
}
void dfs(int i){
	if (i>m-n+1){
		print();
		ok=1;
		return;
	}
	if (ok)
		return;
	for (int k=n;k<=m;k++){
		if (!v[k] && check(k,i)){
			v[k]=1;
			ans[i]=k;
			sum[i]=sum[i-1]+k;
			dfs(i+1);
			v[k]=0;
		}
	}
}
int main (){
	scanf ("%d",&t);
	for (int i=2;i<=1000;i++)
		if (!f[i])
			for (int j=i*i;j<=1000;j+=i)
				f[j]=1;
	while (t--){
		ok=0;
		scanf ("%d%d%d",&n,&m,&d);
		dfs(1);
		if (!ok)
			printf ("none\n");
	}
}