#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int n,a[100005],t,b[100005];
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		long long ans=0;
		int min=921122;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
			for(int i=0;i<n;i++)
				if(a[i]<min) min=a[i];
			for(int i=0;i<n;i++)
			ans+=a[i];
		ans+=min;
		printf("%lld\n",ans);
	}
}
			