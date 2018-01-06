#include<cstdio>
int main(){
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t,x;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&x);
		printf("%d\n",x/10+(x%10)/5+x%5);
	}
	return 0;
}
