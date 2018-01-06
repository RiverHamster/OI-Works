#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
bool f[15005],v[1005],ok;
int a[1005],s[1005][15];
int n,m,d;
void prime(){
	f[0]=f[1]=1;
	for(int i=2;i*i<=15005;i++)
		if(!f[i])
			for(int j=i*i;j<=15005;j+=i)
				f[j]=1;
}
bool check(int x,int i){
	for(int j=max(0,x-d+1);j<=min(m-n+1,x+d-1);j++)
		for(int z=2;z<=d;z++)
			if(!f[s[j][z]+i])
				return 0;
    return 1;
}
void plus(int x,int i){
	for(int j=max(0,x-d+1);j<=x;j++)
		for(int z=2;z<=d;z++)
			s[j][z]+=i;
}
void mis(int x,int i){
	for(int j=max(0,x-d+1);j<=x;j++)
		for(int z=2;z<=d;z++)
			s[j][z]-=i;
}
void dfs(int x){
	if(x>m-n+1){
		for(int i=0;i<=m-n+1;i++)
			printf("%d ",a[i]);
		printf("\n");
		ok=1;
		return;
	}
	if(ok) return;
	for(int i=n;i<=m;i++)
		if(!v[i]&&check(x,i)){
			plus(x,i);
			a[x]=i;
			v[i]=1;
			dfs(x+1);
			a[x]=0;
			v[i]=0;
			mis(x,i);
		}
}
int main(){
	freopen("aprime.in","r",stdin);
	freopen("aprime.out","w",stdout);
	int t;
	scanf("%d",&t);
	prime();
	while(t--){
	    scanf("%d %d %d",&n,&m,&d);
	    ok=0;
	    //dfs(0);
		if(!ok)
			printf("None\n");
	}
	return 0;
}
