#include<cstdio>
#include<iostream>
using namespace std;
int min(int a,int b){return a<b?a:b;}
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	while(t--){
		long long sum=0,mn=1<<30,x;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%lld",&x),sum+=x,mn=min(mn,x);
		cout<<mn+sum<<endl;
	}
	return 0;
}