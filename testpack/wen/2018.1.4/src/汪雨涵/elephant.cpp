#include<cstdio>
using namespace std;
int main(){
	freopen("elephant.in","r",stdin);
    freopen("elephant.out","w",stdout);
    int t,x;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int min=0;
		scanf("%d",&x);
		min+=x/10;
		x-=x/10*10;
		min+=x/5;
		x-=x/5*5;
		min+=x;
		printf("%d\n",min);
	}
	return 0;
}
