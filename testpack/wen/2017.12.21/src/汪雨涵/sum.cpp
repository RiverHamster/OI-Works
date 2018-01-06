#include<cstdio>
using namespace std;
int main(){
    freopen("sum.in","r",stdin);
    freopen("sum.out","w",stdout);
	int t,a[100001];
	scanf("%d\n",&t);
	for(int i=1;i<=t;i++){
		int n,min=100005,h,ans=0;
		scanf("%d\n",&n);
		for(int j=1;j<=n;j++){
			scanf("%d",&a[j]);
			if(a[j]<min) {min=a[j];h=j;}
		}
		for(int j=1;j<=n;j++)
			ans+=a[j];
		ans+=a[h];
		printf("%d\n",ans);
	}
    return 0;
}
