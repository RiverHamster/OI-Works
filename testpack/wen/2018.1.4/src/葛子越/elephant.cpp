#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
#define Int(a) scanf("%d",&a)
#define open(a,b) freopen(a,"r",stdin),freopen(b,"w",stdout)
int main(){
	open("elephant.in","elephant.out");
	int t,n;
	Int(t);
	while(t--){
		Int(n);
		printf("%d\n",n/10+n%10/5+n%5);
	}
	return 0;
}

