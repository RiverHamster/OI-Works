#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int t,n,a[55],i,j,f[55][55];
int read(){
    int a=0;
    char c=getchar();
    while(c<'0'||c>'9') c=getchar();
    a=c-'0';c=getchar();
    while(c>='0'&&c<='9'){
        a=a*10+c-'0';
        c=getchar();
    }
    return a;
}
int main()
{
    freopen("divide.in","r",stdin);
    freopen("divide.out","w",stdout);
	t=read();
	while(t--){
		n=read();
		for(i=1;i<=n;i++)
			a[i]=read();
		for(i=2;i<=n;i++)
			for(j=1;j<=n;j++){
				f[i][j]=f[i-1][j];
				if(j>a[j]) f[i][j]=max(f[i-1][j],f[i-1][j-a[j]])+abs(a[i]-a[j]);
			}
		printf("%d\n",f[n][n]);
	}
    return 0;
}

