#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
char s[10005];
int right,left,len,a[10005],ok,t,k;
int main (){
	freopen ("escapein","r",stdin);
	freopen ("escape.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		memset(a,0,sizeof(a));memset(s,0,sizeof(s));
		scanf ("%s",s);
		len=strlen(s);
		for (int i=0;i<len;++i)
			if (s[i]=='r')
				printf ("%d ",i+1);
		for (int i=len-1;i>=0;--i)
			if (s[i]=='l')
				printf ("%d ",i+1);
		printf ("\n");
	}
}