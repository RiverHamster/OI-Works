#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
typedef long long ll;
int main(){
    freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t,k,a[12],ans;
	scanf("%d\n",&t);
	while(t--){
		ans=0;
		scanf("%d",&k);
		for(int i=1;i<=k;i++){
			scanf("%d",&a[i]);
			ans+=a[i];
			ans--;
		}
		ans++;
		printf("%d\n",ans);
	}
    return 0;
}

