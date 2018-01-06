#include<cstdio>
#include<iostream>
using namespace std;
typedef long long ll;
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		ll sum=0,mn=1<<30,a;
		int n;
		scanf("%d",&n);
		while(n--){
			scanf("%lld",&a);
			sum+=a;
			if(a<mn) mn=a;
		}
		cout<<sum+mn<<endl;
	}
	return 0;
}
