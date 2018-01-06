#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
char c[100005];
bool cmp(char x,char y){
	return x<y;
}
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k=0,l;
		scanf("%d %s",&n,c);
		l=strlen(c);
		sort(c,c+l,cmp);
		for(int i=0;i<l;i++)
			k+=c[i]-'0';
		if(k>=n){
			printf("0\n");
			continue;
		}
		for(int i=0;i<l;i++){
			k+='9'-c[i];
			if(k>=n){
				printf("%d\n",i+1);
				break;
			}
		}
	}
	return 0;
}
