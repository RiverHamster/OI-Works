#include<iostream>
#include<cstdio>
using namespace std;
int t,n;
int a[100005];
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(int i=1; i<=n; i++)
		    scanf("%d", &a[i]);
		int ans=1<<30;
		long long sum=0;
		for(int i=1; i<=n; i++){
			if(a[i]<ans) ans=a[i];
			sum+=a[i];
		}
		cout<<ans+sum<<endl;
	}
	return 0;
}
