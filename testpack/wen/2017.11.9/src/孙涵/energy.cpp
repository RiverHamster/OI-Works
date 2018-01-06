#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int a,k;
long long b;
int main(){
	freopen("energy.in","r",stdin);
    freopen("energy.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&a);
		b=(long long)(1+a)*a/2*3;
		printf("%d ",a*a);
		cout<<b<<endl;
		}
	return 0;
	}
