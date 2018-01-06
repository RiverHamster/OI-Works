#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int t,n,ans1,ans2,k;
int main (){
	freopen ("bst.in","r",stdin);
	freopen ("bst.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		scanf ("%d",&n);
		ans2=n;
		ans1=n;
		for (int k=n,i=1;k;k>>=1,i<<=1)
			if(k&1){
				ans1-=i;
				break;
			}
			else
				ans2+=i;
		printf ("%d %d\n",ans1+1,ans2);
	}
}