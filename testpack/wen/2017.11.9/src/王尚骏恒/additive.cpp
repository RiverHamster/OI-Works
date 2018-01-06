#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int t,m,x[35],i,p[1005],ans;
void dfs(int j,int s){
	int i;
	if(j==m||s>x[m]) return;
	if(p[s]) ans++;
	for(i=j+1;i<=m;i++)
		dfs(i,s+x[i]);
}
int read(){
    int a;
    char c=getchar();
    while(c<'0'&&c>'9') c=getchar();
    a=c-'0';c=getchar();
    while(c>='0'&&c<='9'){
        a=a*10+c-'0';
        c=getchar();
    }
    return a;
}
int main()
{
    freopen("additive.in","r",stdin);
    freopen("additive.out","w",stdout);
    t=read();
    while(t--){
        m=read();memset(p,0,sizeof(p));ans=0;
        for(i=1;i<=m;i++){
			x[i]=read();
			p[x[i]]=1;
		}
		sort(x+1,x+m+1);
		dfs(0,0);
        printf("%d\n",ans-m+1);
    }
    return 0;
}

