#include <cstdio>
using namespace std;
bool p[500005],used[1005];
int n,m,d,len,a[1005];
void f(bool flag);
void work()
{
    for (int i=2; i<708; i++)
        if (!p[i])
		{
            for (int j=i*i; j<500000; j+=i)
                p[j]=true;
        }
}
bool check()
{
	for(int i=0;i<len;i++)
	{
		if(p[a[i]+a[i+1]]==0)
			return 0;
	}
	return 1;
}
void output()
{
	for(int i=0;i<len;i++)
		printf("%d ",a[i]);
	printf("\n");
}
inline void dfs(int i)
{
	//bool flag=0;
	if(i==len)
	{
		if(check())
		{
			output();
			//flag=1;
		}
		return;
	}
	for(int j=n;j<=m;j++)
	{
		if(used[j]==0)
		{
			used[j]=1;
			a[i]=j;
			dfs(i+1);
			used[j]=0;
			//break;
		}
	}
}
void f(bool flag)
{
	if(flag==1)
		return;
}
int main()
{
	freopen("aprime.in","r",stdin);
	freopen("aprime.out","w",stdout);
	work();
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&n,&m,&t);
		len=m-n+1;
		dfs(0);
	}
	return 0;
}
