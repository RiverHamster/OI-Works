#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int f[10005],prime[10005],sum,n,t,s,ans;
int main (){
	freopen ("prime.in","r",stdin);
	freopen ("prime.out","w",stdout);
	scanf ("%d",&t);
	for (int i=2;i<=10000;i++){
		if (!f[i]){
			prime[++sum]=i;
			for (int j=i*i;j<=10000;j+=i)
				f[j]=1;
		}
	}
	while (t--){
		ans=0;
		scanf ("%d",&n);
		for (int i=sum;i>=1;i--){
			s=n;
			for (int j=i;j>=1;j--){
				s-=prime[j];
				if (s==0){
					ans++;
					break;
				}
				if (s<0)
					break;
			}
		}printf ("%d\n",ans);
	}
}