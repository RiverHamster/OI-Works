#include<cstdio>
#include<cstring>
using namespace std;
char a[100005];
int main(){
freopen ("escape.in","r",stdin);
freopen ("escape.out","w",stdout);
int t,n;
	scanf ("%d\n",&t);
	while (t--){
		scanf ("%s\n",a);
		n=strlen (a);
		for (int i=0;i<n;++i){
			if (a[i]=='r') printf ("%d ",i+1);
			}
		for (int i=n-1;i>=0;--i){
			if (a[i]=='l') printf ("%d ",i+1);
			}
		printf ("\n");
	}
return 0;
}