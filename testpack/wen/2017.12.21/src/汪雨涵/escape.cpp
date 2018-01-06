#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    freopen("escape.in","r",stdin);
    freopen("escape.out","w",stdout);
	int t;
	char a[100001];
	scanf("%d\n",&t);
	for(int i=1;i<=t;i++){
		gets(a);
		for(int j=0;a[j]!='\0';j++)
			if(a[j]=='r') printf("%d ",j+1);
		for(int j=strlen(a)-1;j>=0;j--)
			if(a[j]=='l') printf("%d ",j+1);
		printf("\n");
	}
	return 0;
}
