#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int t,n;
long long minx,a[100005],sum;
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		scanf ("%d",&n);
		memset(a,0,sizeof(a));
		sum=0;
		for (int i=1;i<=n;i++){
			scanf ("%lld",&a[i]);
			sum+=a[i];
		}
		minx=sum+a[1];
		for (int i=2;i<=n;i++)
			if (sum+a[i]<minx) minx=sum+a[i];
		cout<<minx<<endl;
	}
	return 0;
}
