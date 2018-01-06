#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int a[55],f[50005];
int main(){
    freopen("divide.in","r",stdin);
    freopen("divide.out","w",stdout);
    int t,n,tp,k,sum;
	cin>>t;
	while(t--){
		sum=0;
		memset(f,0,sizeof(f));
		cin>>n;
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		tp=sum;
		sum/=2;
		for(int i=1;i<=n;i++)
            for(int j=sum;j>=a[i];j--)
				f[j]=max(f[j],f[j-a[i]]+a[i]);
        k=tp-f[sum];
        cout<<abs(f[sum]-k)<<endl;
    }
    return 0;
}
