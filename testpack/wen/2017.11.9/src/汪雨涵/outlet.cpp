#include<cstdio>
using namespace std;
int main(){
    freopen("outlet.in","r",stdin);
    freopen("outlet.out","w",stdout);
	int t,k[105],a[105][11],ans;
	scanf("%d\n",&t);
	for(int i=1;i<t;i++){
		scanf("%d",&k[i]);
		for(int p=1;p<=k[i];p++)
			scanf("%d",&a[i][p]);
		scanf("\n");
	}
	scanf("%d",&k[t]);
	for(int p=1;p<=k[t];p++)
		scanf("%d",&a[t][p]);
	for(int i=1;i<=t;i++){
		ans=0;
		for(int p=1;p<=k[i];p++)
			ans+=a[i][p];
		printf("%d\n",ans-k[i]+1);
	}   
    return 0;
}
