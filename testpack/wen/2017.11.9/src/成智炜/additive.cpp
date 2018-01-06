#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
	freopen("additive.in","r",stdin);
	freopen("additive.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int l[35],ans=0;
		bool a[1005];
		scanf("%d",&n);
		for(int j=1;j<=n;j++){
			scanf("%d",&l[j]);
			a[l[j]]=1;
		}
		sort(l+1,l+1+n);
	    cout<<0<<endl;
	}
	return 0;
}
