#include <cstdio>
#include <iostream>
using namespace std;
int t,n,i,j,s,x;
bool a[10005];
void sf(){
	int i,j;
	for(i=2;i<=10000;i++)
		if(a[i]==0)
			for(j=i*2;j<=10000;j+=i) a[j]=1;
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
    freopen("prime.in","r",stdin);
    freopen("prime.out","w",stdout);
    t=read();
	sf();
	while(t--){
		n=read();x=0;
		for(i=2;i<=n;i++)
			if(a[i]==0){
				s=0;
				for(j=i;j<=n;j++)
					if(a[j]==0){
					    s+=j;
					    if(s==n) x++;
					    if(s>n) break;
					}
			}
		printf("%d\n",x);
	}
    return 0;
}

