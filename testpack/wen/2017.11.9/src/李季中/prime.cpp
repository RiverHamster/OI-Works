#include<cstdio>
const int N=10000;
bool f[20000];
int a[20000];
int main(){freopen("prime.in","r",stdin);
	           freopen("prime.out","w",stdout);
	int top=0;
	for(int i=2;i<=N;i++){
		if(!f[i])a[++top]=i;
		for(int j=1;j<=top;j++)
			{  if(i*a[j]>N)break;
			    f[i*a[j]]=1;
			    if (!(i%a[j]))break; 	
	        }
	}
	int t;
	scanf("%d",&t);
	while(t--){
		int ans=0,n;
		scanf("%d",&n);
		int l=1,r=1,sum=0;
		while(r<=top&&l<=r){
			while(sum<n)sum+=a[r++];
			if(sum==n)ans++;
			sum-=a[l++];
		}
		printf("%d\n",ans);
	}
	return 0;
}