//outlet
#include <cstdio>
using namespace std;
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int d,s;
	scanf("%d",&d);
	int ans=0,miao;
	int t;
	while (d--){
		scanf("%d",&miao);
		t=miao;
		while (t--){
			scanf("%d",&s);
			ans+=s;
		}
		ans=ans-miao+1;
		printf("%d\n",ans);
		ans=0;
		miao=0;
		s=0;
	}
	return 0;
}