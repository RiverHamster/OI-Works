#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
using namespace std;
long long ll=1;
int t,n;
int main (){
	freopen ("energy.in","r",stdin);
	freopen ("energy.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		scanf ("%d",&n);
		printf ("%I64d %I64d\n",ll*n*n,ll*(1+n)*n/2*3);
	}
}