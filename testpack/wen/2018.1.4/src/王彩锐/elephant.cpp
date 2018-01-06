#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int t,n,ans;
int main (){
	freopen ("elephant.in","r",stdin);
	freopen ("elephant.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		scanf("%d",&n);
		ans=n/10;
		if (n%10>=5)
			printf ("%d\n",ans+(n%10-5)+1);
		else
			printf ("%d\n",ans+(n%10));
	}
}