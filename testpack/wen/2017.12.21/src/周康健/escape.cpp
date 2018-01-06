#include<cstdio>
#include<cstring>
using namespace std;
char s[100005];
int main(){
	freopen ("escape.in","r",stdin);
	freopen ("escape.out","w",stdout);
	int t;
	int len;
	scanf ("%d",&t);
	while (t--){
		scanf ("%s",&s);
		len=strlen(s);
		for (int i=0;i<len;i++)
		  if (s[i]=='r')
		    printf("%d ",i+1);
		for (int i=len-1;i>=0;i--)
		  if (s[i]=='l')
		    printf("%d ",i+1);
		printf("\n");
	}
	return 0;
}

