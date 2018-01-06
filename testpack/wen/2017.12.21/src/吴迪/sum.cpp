#include <cstdio>
#include <iostream>
using namespace std;
int mn(int a,int b){
	return a<b?a:b;
}
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	long long sum;
	int ans;
	int a;
	while(t--){
		scanf("%d",&n);
		sum=0;
		scanf("%d",&ans);
		sum+=ans;
		while(--n){
			scanf("%d",&a);
			sum+=a;
			ans=mn(ans,a);
		}
		cout<<sum+ans<<endl;
	}
	return 0;
}
