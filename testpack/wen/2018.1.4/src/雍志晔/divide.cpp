//divide
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
int a[55];
int f[10000005];
int main(){
    freopen("divide.in","r",stdin);
    freopen("divide.out","w",stdout);
	int t,n;
	int tp,key;
	scanf("%d",&t);
	while (t--){
		memset(a,0,sizeof(a));
		memset(f,0,sizeof(f));
		int sum=0;
		scanf("%d",&n);
		for (int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		tp=sum;
		sum/=2;
		for (int i=1;i<=n;i++){
			for (int j=sum;j>=a[i];j--){
				f[j]=max(f[j],f[j-a[i]]+a[i]);
			}
		}
		key=tp-f[sum];
		printf("%d\n",abs(f[sum]-key));
	}
    return 0;
}