#include<cstdio>
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int n, s=0;
	scanf("%d",&n);
	while(n--){
		int t,x,max=-100000;
		s=0;
		scanf("%d",&t);
		while(t--){
			scanf("%d",&x);
			s+=x-1;
		}
		s++;
		printf("%d\n",s);
	}
	return 0;
}
