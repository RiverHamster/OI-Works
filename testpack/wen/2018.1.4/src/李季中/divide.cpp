#include<cstdio>
#include<cstring>
int dp[50001],a[51];
int max(int a,int b){return a<b?b:a;}
int main(){
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	while(t--){
		memset(dp,0,sizeof(dp));
		int ans=0,v;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]),ans+=a[i];
		v=ans/2;
		for(int i=0;i<n;i++)
			for(int j=v;j>=a[i];j--)
				dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
		printf("%d\n",ans-dp[v]*2);
	}
	return 0;
}