#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
int main(){
    freopen("sum.in","r",stdin);
    freopen("sum.out","w",stdout);
    int t,n,a,min;
	long long sum;
	cin>>t;
	while(t--){
		sum=0;
		min=1<<30;
		cin>>n;
		for(int i=1;i<=n;i++){
			scanf("%d",&a);
			sum+=a;
			if(a<min)
				min=a;
		}
		cout<<sum+min<<endl;
	}
    return 0;
}
