#include <cstdio>
#include <cstring>
bool np[500005];
int n,m,d,k;
bool use[1005];
int a[1005];
bool getans;
void dfs(int now){
	if(now==k){
		getans=1;
		for(int i=1;i<=k;i++){
			printf("%d ",a[i]);
		}
		puts("");
		return;
	}
	if(getans){
		return;
	}
	int x=now<d?now:d;
	int sum;
	bool yes;
	for(int i=n;i<=m;i++){
		if(use[i]){
			continue;
		}
		yes=1;
		sum=i;
		for(int j=now;j>=now-x+1;j--){
			sum+=a[j];
			if(!np[sum]){
				yes=0;
				break;
			}
		}
		if(yes){
			use[i]=1;
			a[now+1]=i;
			dfs(now+1);
			use[i]=0;
		}
	}
}
int main(){
	freopen("aprime.in","r",stdin);
	freopen("aprime.out","w",stdout);
	for(int i=2;i<=500000;i++){
		if(!np[i]){
			for(int j=i*i;j<=500000&&j>0;j+=i){
				np[j]=1;
			}
		}
	}
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&n,&m,&d);
		k=m-n+1;
		memset(use,0,sizeof(use));
		getans=0;
		dfs(0);
		if(!getans){
			puts("None");
		}
	}
	return 0;
}
