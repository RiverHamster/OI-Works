#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int t,n,a[1005],f[10000005],sum,tp,key;
int main (){
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
	scanf("%d",&t);
	while (t--){
		memset(a,0,sizeof(a));
		memset(f,0,sizeof(f));
		scanf("%d",&n);sum=0;
		for (int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		tp=sum,sum/=2;
		for (int i=1;i<=n;i++)
			for (int j=sum;j>=a[i];j--)
				f[j]=max(f[j],f[j-a[i]]+a[i]);
			key=tp-f[sum];
		printf("%d\n",abs(f[sum]-key));
	}
	return 0;
}
