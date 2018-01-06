#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int f[500005],a[50],sum,t,n,v;
int main (){
	freopen ("divide.in","r",stdin);
	freopen ("divide.out","w",stdout);
	scanf ("%d",&t);
	while(t--){
		memset(f,0,sizeof(f));
		scanf ("%d",&n);
		sum=0;
		for (int i=1;i<=n;++i)
			scanf ("%d",a+i),sum+=a[i];
		v=sum>>1;
		for (int i=1;i<=n;++i)
			for (int j=sum;j>=a[i];--j)
				f[j]=max(f[j],f[j-a[i]]+a[i]);
		printf ("%d\n",sum-(f[v]<<1));
	}
}