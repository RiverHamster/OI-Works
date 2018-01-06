#include<cstdio>
int main(){
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	while(t--)
		scanf("%d",&n),
		printf("%d\n",n/10+(n%10)/5+n%5);
	return 0;
}