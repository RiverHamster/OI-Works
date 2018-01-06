#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<iomanip>//fixed<<
//#include<bits/stdc++.h>
using namespace std;
long long t,n;
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		printf("%lld %lld\n",n*n,(1+n)*n/2*3);
	}
	return 0;
}
