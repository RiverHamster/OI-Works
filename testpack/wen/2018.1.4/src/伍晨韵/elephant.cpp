#include<iostream>
#include<cstdio>
using namespace std;
int t,n;
int main(){
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int x,y,z;
		x=n/10; n%=10;
		y=n/5; n%=5;
		z=n;
		printf("%d\n", x+y+z);
	}
	return 0;
}
