#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t,n,x;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		int ans=0;
		for(int j=1;j<=n;j++){
			scanf("%d",&x);
			x--;
			ans+=x;
		}
		ans++;
		printf("%d\n",ans);
	}
	return 0;
}
