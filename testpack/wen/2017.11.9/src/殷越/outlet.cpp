#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int t,k,a,ans;
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&k);
		for(int j=0;j<k;j++){
			scanf("%d",&a);
			ans+=a;
		}
		ans-=(k-1);
		printf("%d\n",ans);
		ans=0;
	}
	return 0;
}
