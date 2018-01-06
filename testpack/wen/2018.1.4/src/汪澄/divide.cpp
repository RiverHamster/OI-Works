#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int a[55];
bool f[50005];
int main(){
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	while(t--){
		int s=0,i;
		memset(f,0,sizeof(f));
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		    s+=a[i];
		}
		f[0]=1;
		for(i=0;i<n;i++)
			for(int j=s;j>=a[i];j--)
				f[j]=f[j]||f[j-a[i]];
		for(i=s/2;!f[i];i--);
		printf("%d\n",s-i-i);
	}
	return 0;
}
