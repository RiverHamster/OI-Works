#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
#include<cstdlib>
#include<queue>
#define ll long long
const int inf=2147483647;
const int ine=-2147483647;
using namespace std;
int t,n;
int main(){
    freopen("elephant.in","r",stdin);
    freopen("elephant.out","w",stdout);
	scanf("%d",&t);
	for(register int i=1;i<=t;++i){
		scanf("%d",&n);
		if(n<5){
			printf("%d\n",n);
			continue;
		}
		int j=(n-4)/10+1,k=((n-5)%10)%5+1;
		j+=k-1;
		if((n-4)%10==0)
			--j;
		printf("%d\n",j);
	}
	return 0;
}
