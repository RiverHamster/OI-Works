#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
#define ll long long
using namespace std;
char a[100005];
bool wmp(char a,char b)
{
	return a<b;
}
int main()
{
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int k;
		scanf("%d%s",&k,a);
		int len=strlen(a);
		sort(a,a+len,wmp);
		ll sum=0;
		for(int i=0;i<len;i++)
		{
			sum+=a[i]-'0';
		}
		if(sum>=k){printf("0\n");continue;}
		for(int i=0;i<len;i++)
		{
			k+='9'-a[i];
			if(k>=sum)
			{
				printf("%d\n",i+1);break;
			}	
		}
	}
	return 0;
}
	
