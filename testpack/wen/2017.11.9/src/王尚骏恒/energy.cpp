#include <cstdio>
#include <iostream>
using namespace std;
int t,i;
long long n,f[45005]={0,3};
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
    freopen("energy.in","r",stdin);
    freopen("energy.out","w",stdout);
    t=read();
	for(i=2;i<=45000;i++) f[i]=f[i-1]+i*3;
	while(t--){
		n=read();
		cout<<n*n<<' '<<f[n]<<endl;
	}
    return 0;
}
