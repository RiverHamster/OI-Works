#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int a,s=0,i,k;
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		s=0;
		scanf("%d",&k);
		for(i=0;i<k;i++){
			scanf("%d",&a);
			s+=a;
			}
		printf("%d\n",s-k+1);
		}
	return 0;
	}
