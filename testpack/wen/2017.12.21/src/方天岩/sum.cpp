#include<iostream>
#include<cstdio>
using namespace std;
long long t,n;
long long a[100005];
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1; i<=n; i++)
		    cin>>a[i];
		int ans=1<<30;
		long long sum=0;
		for(int i=1; i<=n; i++){
			if(a[i]<ans) ans=a[i];
			sum+=a[i];
		}
		printf("%lld\n", sum+ans);
	}
	return 0;
}
