#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int t;
long long a,b,n;
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		cin>>n;
		a=n*n;
		b=(long long)((1+n)*n/2*3);
		cout<<a<<' '<<b<<endl;
	}
	return 0;
}
