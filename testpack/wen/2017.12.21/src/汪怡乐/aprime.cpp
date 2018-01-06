#include<cstdio>
using namespace std;
int t,n,m,k,K,s,a[100005];
bool b[100005];
bool pd(int x){
	for (int i=2;i*i<=x;i++)
		if (x%i==0) return 1;
	return 0;
}
void out(){
	for (int j=1;j<=n;j++)
		printf ("%d ",a[j]);
	printf ("\n");
}
bool dfs(int t,int m){
	for (int i=2;i<=n;i++){
		if (!b[i]&&pd(i+a[t-1])){
			a[t]=i,b[i]=1;
			if (t==n){if (pd(i+a[1])){s++;if (s<=k) out();}}
			else dfs(t+1);
			b[i]=0;
		}
	}
}
int main (){
    freopen("aprime.in","r",stdin);
    freopen("aprime.out","w",stdout);
	scanf("%d",&t);
	while (t--){
		scanf("%d%d%d",&n,&m,&K);
		a[1]=1;
		dfs(2);
		//else printf("None\n");
	}
    return 0;
}
