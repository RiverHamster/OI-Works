#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
inline int read(){
    int x=0,f=1;char ch=getchar();
    while('0'>ch||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while('0'<=ch&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}

int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int n,a,ans,b;
	n=read();
	for(int i=1;i<=n;i++){
		ans=0;
		a=read();
		for(int j=1;j<=a;j++){
			b=read();
			ans+=b;
		}
		printf("%d\n",ans-a+1);
	}
	return 0;
}
