#include<cstdio>
#include<cstring>
char a[100010];
int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	int t,len;
	scanf("%d\n",&t);
	while(t--){
		scanf("%s",a);
		len=strlen(a);
		for(int i=0;i<len;i++)
			if(a[i]=='r') printf("%d ",i+1);
		for(int i=len-1;i>=0;i--)
			if(a[i]=='l') printf("%d ",i+1);
		printf("\n");
	}
	return 0;
}
