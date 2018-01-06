#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	freopen ("sum.in","r",stdin);
	freopen ("sum.out","w",stdout);
	int t;
	scanf ("%d",&t);
	while (t--){
		int n;
		scanf ("%d",&n);
		long long ans=0;
		int minn=2147483646;
		int b;
		for (int i=1;i<=n;i++){
			scanf ("%d",&b);
			ans+=b;
			if (b<minn)
			  minn=b;
		}
		ans+=minn;
		cout<<ans<<endl;
	}
	return 0;
}

