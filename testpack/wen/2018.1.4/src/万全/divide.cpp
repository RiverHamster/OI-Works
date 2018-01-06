#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iomanip>//fixed<<
//#include<bits/stdc++.h>
using namespace std;
int t,n,a[55],ans;bool v[55];
void dfs(int a1,int a2,int i){
	if(i>n){ans=min(ans,abs(a1-a2);)return ;}
	for(int i=)
}
int main(){
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);ans=1<<30;
		for(int i=1;i<=n;i++){scanf("%d",&a[i]);}
		dfs(0,0,1);
		printf("%d\n",ans);
	}
	return 0;
}

