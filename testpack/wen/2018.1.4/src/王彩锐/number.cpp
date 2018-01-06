#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int t,k,len,ans;
char s[100005];
bool cmp(char x,char y){
	return x<y;
}
int main (){
	freopen ("number.in","r",stdin);
	freopen ("number.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		ans=0;
		scanf ("%d%s",&k,s);
		len=strlen(s);
		for (int i=0;i<len;++i)
			k-=(s[i]-48);
		if (k>0){
			sort(s,s+len,cmp);
			for (int i=0;i<len;++i){
				if (k<=0)
					break;
				else
					++ans,k-=57-s[i];
			}
		}
		printf ("%d\n",ans);
	}
}