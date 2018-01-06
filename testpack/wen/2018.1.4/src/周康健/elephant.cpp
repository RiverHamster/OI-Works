#include<cstdio>
using namespace std;
int x;
int ans;
int main(){
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t;
	scanf ("%d",&t);
	while(t--){
		scanf ("%d",&x);
		ans=x/10;
		x%=10;
		ans+=x/5;
		x%=5;
		ans+=x;
		printf("%d\n",ans);
	}
	return 0;
}

