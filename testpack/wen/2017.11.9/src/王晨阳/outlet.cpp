#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    freopen("outlet.in","r",stdin);
    freopen("outlet.out","w",stdout);
    int n,n1,q;
	cin>>n;
	while(n--){
	scanf("%d",&n1);
	int ans=0;
	int s=n1;
    while(n1--){
	scanf("%d",&q);
	ans+=q;
	}
	printf("%d\n",ans-s+1);
}
    return 0;
}