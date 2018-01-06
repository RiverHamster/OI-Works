#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int n,x,t,ans;
int main (){
	freopen ("outlet.in","r",stdin);
	freopen ("outlet.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		ans=0;
		scanf ("%d",&n);
		for (int i=1;i<=n;i++){
			scanf ("%d",&x);
			ans+=x;
		}
		printf ("%d\n",ans-n+1);
	}
}