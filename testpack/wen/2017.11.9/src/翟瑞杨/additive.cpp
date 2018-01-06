#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	freopen("additive.in","r",stdin);
	freopen("additive.out","w",stdout);
	int t,m,a[30];
	int j,k,l,ans=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&m);
		for(j=0;j<m;j++){
			scanf("%d",&a[j]);
			sort(a,a+m);
			for(k=m-3;k>=0;k--){
				for(l=m-1;l>=0;l--){
					if(a[l]+a[l-1]==k){
						ans++;
						break;
					}
				}
			}
			printf("%d",ans);
			ans=0;
		}
	}
	return 0;
}
