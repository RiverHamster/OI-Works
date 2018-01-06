#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int t,n,a[55],f[10000000];
int main(){
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		scanf ("%d",&n);
		memset(f,0,sizeof(f));
		memset(a,0,sizeof(a));
		int sum=0;
		for (int i=1;i<=n;i++){
			scanf ("%d",&a[i]);
			sum+=a[i];
		}
		int tp=sum;
		sum/=2;
		for (int i=1;i<=n;i++){
			for (int j=sum;j>=a[i];j--){
				f[j]=max(f[j],f[j-a[i]]+a[i]);
			}
		}
		int key=tp-f[sum];
		printf ("%d\n",abs(f[sum]-key));
	}
	return 0;
}
