#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int t,n,a,i;
long long minn,sum;
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		sum=0;minn=1000000009;
		for(i=1;i<=n;i++){
			scanf("%d",&a);
			sum+=a;
			if(a<minn)
				minn=a;
			}
		cout<<minn+sum<<endl;
		}
	return 0;
	}
