#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
char s[100005];
int main()
{
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int t,len,k,ans;
	scanf("%d\n",&t);
	while(t--)
	{
		scanf("%d\n",&k);
		scanf("%s",s+1);
		ans=0;
		len=strlen(s+1);
		for(int i=1;i<=len;i++)
			ans+=(s[i]-'0');
		if(ans>=k)
			printf("0\n");
		else
		{
			sort(s+1,s+1+len);
			int i=1,tmp=0;
			for(;i<=len && ans<k;i++)
				ans+=('9'-s[i]),tmp++;
			printf("%d\n",tmp);
		}
	}
	return 0;
}
