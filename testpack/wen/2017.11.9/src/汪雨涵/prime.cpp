#include<cstdio>
using namespace std;
int main(){
    freopen("prime.in","r",stdin);
    freopen("prime.out","w",stdout);
	int t,a[15];
	scanf("%d\n",&t);
	for(int i=1;i<t;i++)
		scanf("%d\n",&a[i]);
	scanf("%d",&a[t]);
    return 0;
}
