#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int t,k,a,sum;
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		scanf ("%d",&k);
		sum=0;
		for (int i=1;i<=k;i++){
			scanf ("%d",&a);
			sum+=a;
		}
		printf ("%d\n",sum-k+1);
	}
	return 0;
}
