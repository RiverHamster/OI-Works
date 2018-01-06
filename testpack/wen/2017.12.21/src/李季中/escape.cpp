#include<cstdio>
#include<cstring>
char s[100001];
int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%s",s);
		int n=strlen(s);
		for(int i=0;i<n;i++)
			if(s[i]=='r')printf("%d ",i+1);
		for(int i=n-1;i>=0;i--)
			if(s[i]=='l')printf("%d ",i+1);
		printf("\n");
	}
	return 0;
	}