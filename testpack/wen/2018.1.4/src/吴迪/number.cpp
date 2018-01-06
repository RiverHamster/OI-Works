#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char s[100005];
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int t,k;
	scanf("%d",&t);
	int ans;
	int sum;
	int len;
	while(t--){
		memset(s,'\0',sizeof(s));
		scanf("%d",&k);
		scanf("%s",s+1);
		sum=0;
		for(len=1;s[len]!='\0';len++){
			sum+=s[len]-'0';
		}
		len--;
		if(sum>=k){
			puts("0");
		}
		else{
			k-=sum;
			sort(s+1,s+1+len);
			ans=0;
			for(int i=1;k>0;i++){
				ans++;
				k-='9'-s[i];
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
