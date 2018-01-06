#include<cstdio>
using namespace std;
int t,n;
int main (){
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	scanf("%d",&t);
	while (t--){
		scanf("%d",&n);
		printf("%d\n",n/10+(n%10)/5+n%5);
	}
	return 0;
}
