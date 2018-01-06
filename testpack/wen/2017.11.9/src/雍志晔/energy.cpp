//energy
#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int t;
	long long n;
	scanf("%d",&t);
	long long energy,tmp;
	for (int i=1;i<=t;i++){
		scanf("%lld",&n);
		energy=(1+n)*n/2*3;
		tmp=n*n;
		cout<<tmp<<" "<<energy<<endl;
	}
	return 0;
}
