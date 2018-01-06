#include<cstdio>
#include<iostream>
using namespace std;
int t,n,x,minn;
long long ans;
int main (){
    freopen("sum.in","r",stdin);
    freopen("sum.out","w",stdout);
	scanf("%d",&t);
	while (t--){
		minn=100000000,ans=0;
		scanf("%d",&n);
		for (int i=1;i<=n;i++){
			scanf("%d",&x);
			ans+=x;
			if (x<minn)minn=x;
		}
		cout<<ans+minn<<endl;
	}
    return 0;
}
