#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int t;
long long tri,x,n;
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		scanf ("%lld",&n);
		tri=n*n;
		x=3*(1+n)*n/2;
		cout<<tri<<' '<<x<<endl;
	}
	return 0;
}
