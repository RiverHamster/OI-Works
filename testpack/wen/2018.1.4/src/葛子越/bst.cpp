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
	open("bst.in","bst.out");
	int t,n;
	Int(t);
	while(t--){
		Int(n);
		printf("%d %d\n",(n&(n-1))+1,n|(n-1));
	}
	return 0;
}

