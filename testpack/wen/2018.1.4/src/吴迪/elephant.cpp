#include <cstdio>
int main(){
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t;
	int x;
	scanf("%d",&t);
	int ans10,ans5,ans1;
	while(t--){
		scanf("%d",&x);
		ans10=x/10;
		x-=ans10*10;
		ans5=x/5;
		x-=ans5*5;
		ans1=x;
		x-=ans1;
		printf("%d\n",ans10+ans5+ans1);
	}
	return 0;
}
