#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int t,n,i,a[100005],s[100005],s1[100005],min1;
int read(){
    int a=0;
    char c=getchar();
    while(c<'0'||c>'9') c=getchar();
    a=c-'0';c=getchar();
    while(c>='0'&&c<='9'){a=a*10+c-'0';c=getchar();}
    return a;
}
int main()
{
    freopen("sum.in","r",stdin);
    freopen("sum.out","w",stdout);
    t=read();
	while(t--){
		n=read();min1=1<<30;
		memset(s,0,sizeof(s));memset(s1,0,sizeof(s1));
		for(i=1;i<=n;i++) a[i]=read();
		for(i=1;i<=n;i++){s[i]=s[i-1]+a[i];s1[n-i+1]=s1[n-i+2]+a[n-i+1];}
		for(i=1;i<=n;i++) if(s[i]+s1[i]<min1) min1=s[i]+s1[i];
		printf("%d\n",min1);
	}
    return 0;
}

