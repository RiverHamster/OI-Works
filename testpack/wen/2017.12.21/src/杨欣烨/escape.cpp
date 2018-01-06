#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
char s[100005];
int a[100005],l[100005];
bool excmp(int a,int b){
	if(s[a]=='l'&&b>a) return true;
	if(s[b]=='l'&&b<a) return true;
	if(s[a]=='r'&&b>a) return false;
	if(s[b]=='r'&&b<a) return false;
}
int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	int DataC,len;
	scanf("%d",&DataC);
	while(DataC--){
		scanf("%s",s+1);
		len=strlen(s+1);
		int now=-1;
		for(int i=1;i<=len;i++){
			a[i]=i;
			if(s[i]=='l') now=i;
			l[i]=now;
		}
		sort(a+1,a+1+len,excmp);
		for(int i=1;i<=len;i++) printf("%d ",a[i]);
		puts("");
	}
	return 0;
}
