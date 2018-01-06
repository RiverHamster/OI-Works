#include <stdio.h>
#include <ctype.h>
#include <iostream>
using namespace std;
#define min(a,b) (a<b?a:b)
typedef long long ll;
inline int rd(){
	register int r=0;
	register char ch;
	while(isspace(ch=getchar()));
	do r=r*10+ch-'0'; while(isdigit(ch=getchar()));
	return r;
}
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int DataC=rd();
	register int n,mn,tmp;
	ll sum;
	while(DataC--){
		n=rd();
		sum=0;mn=0x7fffffff;
		for(register int i=1;i<=n;i++) tmp=rd(),sum+=tmp,mn=min(mn,tmp);
		cout<<sum+mn<<endl;
	}
	return 0;
}
