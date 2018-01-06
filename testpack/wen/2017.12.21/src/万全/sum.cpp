//#include<iostream>
//#include<algorithm>
//#include<cmath>
#include<cstdio>
//#include<cstring>
//#include<cstdlib>
//#include<iomanip>//fixed<<
//#include<bits/stdc++.h>
//using namespace std;
long long minn,ans,x,n,t;
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);minn=1<<30;ans=0;
		for(int i=1;i<=n;i++){
			scanf("%lld",&x);
			ans+=x;
			if(x<minn)minn=x;
		}
		ans+=minn;
		printf("%lld\n",ans);
	}
	return 0;
}

