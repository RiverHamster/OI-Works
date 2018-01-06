#include<cstdio>
int pm[2005],tot;
bool p[10005];
void prime(){
	for(int i=2;i<=10000;i++){
		if(!p[i]){
			for(int j=i*2;j<=10000;j+=i)
				p[j]=1;
			pm[++tot]=i;
		}
	}
}
int main(){
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	int t,n,ans,sum; 
	scanf("%d",&t);
	prime();
	while(t--){
		ans=0;
		scanf("%d",&n);
		for(int i=1;i<=tot&&pm[i]<=n;i++){
			sum=0;
			for(int j=i;sum<=n&&j<=tot;sum+=pm[j],j++)
				if(sum==n) ans++;
		}
		printf("%d\n",ans);
	}
    return 0;
}
