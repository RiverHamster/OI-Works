#include<algorithm>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<queue>
#include<string>
#include<ctime>
#include<map>
#define f(i,j,n) for(i=j;i<=n;i++)
#define p(i,j,n) for(i=j;i>=n;i--)
#define ll long long
#define ld long double
using namespace std;

char c[100005];
int a[15];

inline bool cmp(char x,char y)
{
	return (x-'0')<(y-'0');
}

int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int k,ans=0,tp,i;
		bool p=1;
		scanf("%d\n%s\n",&k,c);
		int l=strlen(c);
		int s=0;
		f(i,0,l-1)
		{
			s+=c[i]-'0';
			a[c[i]-'0']++;
			if(s>=k){
				printf("0\n");
				p=0;
				break;
			}
		}
		if(p)
		{
			sort(c,c+l,cmp);
			f(i,0,l-1)
			{
				s+=9-(c[i]-'0');
				ans++;
				if(s>=k)
				{
					printf("%d\n",ans);
					break;
				}
			}
		}
	}
	return 0;
}
