//number
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
char n[100005];
bool cmp(char a,char b){
	return (a-'0')<(b-'0');
}
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int t,k,len;
	scanf("%d",&t);
	while (t--){
		int ans=0,top=0;
		scanf("%d",&k);
		scanf("%s",n);
		len=strlen(n);
		for (int i=0;i<len;i++)
			ans+=n[i]-'0';
		sort(n,n+len,cmp);
		if (ans>=k){printf("%d\n",0); continue;}
		else{
			k-=ans;
			for (int i=0;i<len;i++){
				if (k<=0) break;
				k-=(9-(n[i]-'0')); top++;
			}
		}
		printf("%d\n",top);
	}
    return 0;
}
