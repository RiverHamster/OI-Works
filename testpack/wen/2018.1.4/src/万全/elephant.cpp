#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iomanip>//fixed<<
//#include<bits/stdc++.h>
using namespace std;
int t,x,ans;
int main(){
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&x);ans=0;
		if(x>=10){ans+=x/10;x%=10;}
		if(x>=5){ans++;x-=5;}
		ans+=x;
		printf("%d\n",ans);
	}
	return 0;
}

