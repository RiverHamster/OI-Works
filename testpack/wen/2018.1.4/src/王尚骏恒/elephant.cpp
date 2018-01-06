#include <cstdio>
#include <iostream>
using namespace std;
int t,a,b,c;
long long x,s;
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
    freopen("elephant.in","r",stdin);
    freopen("elephant.out","w",stdout);
    t=read();
	while(t--){
		cin>>x;
		s=0;
		if(x>=10){
			s+=x/10;
			x%=10;
		}
		if(x>=5){
			s+=x/5;
			x%=5;
		}
		cout<<s+x<<endl;
	}
    return 0;
}

