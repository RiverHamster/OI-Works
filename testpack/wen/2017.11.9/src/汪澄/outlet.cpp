#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		int k,a,ans=0;
		scanf("%d",&k);
		for(int i=0;i<k;i++){
		    scanf("%d",&a);
			ans+=a;
		}
		printf("%d\n",ans-k+1);
	}
	return 0;
}
