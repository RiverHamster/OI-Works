#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<iomanip>//fixed<<
//#include<bits/stdc++.h>
using namespace std;
int t,k,a,s;
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&k);s=0;
		for(int i=1;i<=k;i++){scanf("%d",&a);s+=a;}
		printf("%d\n",s-(k-1));
	}
	return 0;
}
