#include <cstdio>
#include <cstring>
char s[100005];
int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	int n,t;
	scanf("%d",&t);
	while(t--){
		memset(s,'\0',sizeof(s));
		scanf("%s",s+1);
		n=0;
		while(s[++n]!='\0');
		n--;
		for(int i=1;i<=n;i++){
			if(s[i]=='r'){
				printf("%d ",i);
			}
		}
		for(int i=n;i>0;i--){
			if(s[i]=='l'){
				printf("%d ",i);
			}
		}
		puts("");
	}
	return 0;
}
