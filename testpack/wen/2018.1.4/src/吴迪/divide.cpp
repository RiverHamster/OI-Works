#include <cstdio>
#include <cstring>
bool f[50005];
int a[55];
int ab(int a){
	return a<0?-a:a;
}
int main(){
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	int sum;
	int ans;
	while(t--){
		sum=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		memset(f,0,sizeof(f));
		f[0]=1;
		for(int i=1;i<=n;i++){
			for(int j=sum;j>=a[i];j--){
				if(f[j-a[i]]){
					f[j]=1;
				}
			}
		}
		ans=sum>>1;
		while(!f[ans]){
			ans--;
		}
		printf("%d\n",ab((sum-ans)-ans));
	}
	return 0;
}
