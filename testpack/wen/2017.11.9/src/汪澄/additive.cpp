#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int f[30005],a[35];
int t,n;
int main(){
	freopen("additive.in","r",stdin);
	freopen("additive.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		memset(f,0,sizeof(f));
		memset(a,0,sizeof(a));
		int ans=0,s=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			s+=a[i];
		}
		f[0]=1;
		for(int i=0;i<n;i++)
			for(int j=s;j>=a[i];j--)
				f[j]+=f[j-a[i]];
		for(int i=0;i<n;i++)
			ans+=f[a[i]]-1;
		printf("%d\n",ans);
	}
	return 0;
}
