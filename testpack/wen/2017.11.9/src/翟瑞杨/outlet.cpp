#include<cstdio>
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t,k,i;
	int ans=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&k);
		int a[k];
		for(i=0;i<k;i++){
				scanf("%d",&a[i]);
				ans+=a[i];
			}
			printf("%d\n",ans-k+1);
			ans=0;
		}
	return 0;
}
