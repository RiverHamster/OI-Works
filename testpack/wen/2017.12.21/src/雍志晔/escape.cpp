//escape
#include <cstdio>
#include <cstring>
using namespace std;
char a[100005];
int main(){
    freopen("escape.in","r",stdin);
    freopen("escape.out","w",stdout);
	int t;
	scanf("%d",&t);
	while (t--){
		scanf("%s",a);
		int k=strlen(a);
		for (int i=0;i<k;i++){
			if (a[i]=='r') printf("%d ",i+1);
		}
		for (int i=k-1;i>=0;i--){
			if (a[i]=='l') printf("%d ",i+1);
		}
		printf("\n");
		memset(a,0,sizeof(a));
	}
    return 0;
}