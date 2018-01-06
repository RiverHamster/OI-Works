#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    freopen("energy.in","r",stdin);
    freopen("energy.out","w",stdout);
	long long t,n[105];
	scanf("%d\n",&t);
	for(int i=1;i<t;i++)
		scanf("%d\n",&n[i]);
	scanf("%d",&n[t]);
	for(int i=1;i<=t;i++)
		cout<<n[i]*n[i]<<' '<<(1+n[i])*n[i]/2*3<<endl;
	return 0;
}
