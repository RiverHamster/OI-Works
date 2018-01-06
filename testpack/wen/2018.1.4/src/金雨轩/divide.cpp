#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
int n,i,v,ans,sum,t;
int w[1005],f[1000005];
int main(){
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
	scanf("%d",&t);
	while(t--){
    scanf("%d",&n);
		ans=sum=0;
		memset(f,0,sizeof(f));
    for (i=1; i<=n;i++){
        scanf("%d",&w[i]);
		sum+=w[i];
	}
	ans=sum;
	sum/=2;
    for(i=1;i<=n;i++){
    for(v=sum;v>=w[i];v--){
		f[v]=max(f[v],f[v-w[i]]+w[i]);
	}
}
    ans=ans-f[sum];
	printf("%d\n",abs(ans-f[sum]));
}
return 0;
}
