#include <cstdio>
#include <iostream>
using namespace std;
int t;
long long n;
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
    freopen("bst.in","r",stdin);
    freopen("bst.out","w",stdout);
    t=read();
	while(t--){
		scanf("%lld",&n);
		printf("%lld %lld\n",(n&(n-1))+1,n|(n-1));
	}
    return 0;
}

