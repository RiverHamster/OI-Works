#include<cstdio>
#include<cstring>
using namespace std;
int t,n,k;
char s[100005];
int main (){
    freopen("escape.in","r",stdin);
    freopen("escape.out","w",stdout);
	scanf("%d",&t);
	while (t--){
		memset(s,0,sizeof(s));
		scanf("%s",s);
		n=strlen(s);k=0;
		for (int i=0;i<n;i++)
			if (s[i]=='r')printf("%d ",i+1);
		for (int i=n-1;i>=0;i--)
			if (s[i]=='l')printf("%d ",i+1);
		printf("\n");
	}
    return 0;
}
