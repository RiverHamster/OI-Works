#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
bool f[10005];
int np[5005],sp,x[10005],s[5005],sn;
void get(){
	f[0]=f[1]=1;
	s[sn++]=0;
	for(int i=2;i<10001;i++)
		if(!f[i]){
			for(int j=i*i;j<10001;j+=i)
				f[j]=1;
			np[sp++]=i;
			//printf("%d\n",sn);
			s[sn]=s[sn-1]+i;
			sn++;
		}
}
void make(){
	for(int i=0;i<sn;i++)
		for(int j=i;j<sn;j++){
			if(s[j]-s[i]>10000) break;
			x[s[j]-s[i]]++;
		}
}
int main(){
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	int t;
	scanf("%d",&t);
	get(); make();
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d\n",x[n]);
	}
	return 0;
}
