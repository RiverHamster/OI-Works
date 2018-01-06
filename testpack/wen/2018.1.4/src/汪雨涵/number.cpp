#include<cstdio>
using namespace std;
int main(){
    freopen("number.in","r",stdin);
    freopen("number.out","w",stdout);
    int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int k;
		char n[100000];
		scanf("%d\n",&k);
		gets(n);
		for(int i=0;n[i]!='\0';i++)
			k-=n[i]-'0';
		if(k<=0) printf("0\n");
		else printf("%d\n",k);
	}
	return 0;
}
