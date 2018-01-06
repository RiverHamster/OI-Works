#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int t,x,s;
int main(){
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&x);
		s=0;
		s+=x/10;
		x%=10;
		s+=x/5;
		x%=5;
		s+=x;
		printf("%d\n",s);
	}
}
