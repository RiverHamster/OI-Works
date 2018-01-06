#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iomanip>
using namespace std;
int main(){
	freopen ("energy.in","r",stdin);
	freopen ("energy.out","w",stdout);
	int t;
	scanf ("%d",&t);
	long long a[t+1];
	for (int i=1;i<=t;i++)
		scanf ("%lld",&a[i]);
	for (int i=1;i<=t;i++){
		cout<<a[i]*a[i]<<" "<<(1+a[i])*a[i]/2*3<<endl;
	}
	return 0;
}
