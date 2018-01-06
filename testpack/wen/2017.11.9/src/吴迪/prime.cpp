#include <cstdio>
int f[10005];
bool np[10005];
int a[10005];
int main(){
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	np[0]=np[1]=1;
	int len=0;
	for(int i=2;i<=10000;i++){
		if(!np[i]){
			a[++len]=i;
			for(int j=i*i;j<=10000;j+=i){
				np[j]=1;
			}
		}
	}
	int sum;
	for(int i=1;i<=len;i++){
		sum=0;
		for(int j=i;j<=len&&(sum+=a[j])<=10000;j++){
			f[sum]++;
		}
	}
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",f[n]);
	}
	return 0;
}
