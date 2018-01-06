#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int n,t;
int main (){
	freopen ("sum.in","r",stdin);
	freopen ("sum.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		int x,minn=2147483647;
		long long sum=0;
		scanf ("%d",&n);
		for (int i=1;i<=n;++i){
			scanf ("%d",&x);
			sum+=x;
			minn=min(minn,x);
		}
		printf ("%I64d\n",sum+minn);
	}
}