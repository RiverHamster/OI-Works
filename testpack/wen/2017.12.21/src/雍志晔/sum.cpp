//sum
#include <cstdio>
using namespace std;
int n;
int main(){
    freopen("sum.in","r",stdin);
    freopen("sum.out","w",stdout);
	int t;
	scanf("%d",&t);
	int minn=1000000;
	int num;
	while (t--){
		long long ans=0;
		scanf("%d",&n);
		for (int i=1;i<=n;i++){
			scanf("%d",&num);
			ans+=num;
			if (num<minn) minn=num;
		}
		ans+=minn;
		cout<<ans<<endl;
		minn=1000000;
	}
    return 0;
}