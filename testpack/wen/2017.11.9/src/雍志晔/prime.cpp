//prime
#include <cstdio>
using namespace std;
int a[10010];
int zs(int num){
	if (num==2) return 1;
	for (int i=2;i*i<=num;i++){
		if (num%i==0) return 0;
	}
	return 1;
}
int main(){
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	int t;
	scanf("%d",&t);
	int miao=1;
	int n;
	int ans=0;
	for (int i=2;i<=10000;i++){
		if (zs(i)) {a[miao]=i; miao++;}
	}
	int tmp=0;
	for (int i=1;i<=t;i++){
		scanf("%d",&n);
		for (int j=1;j<=1230;j++){
			for (int wu=j;wu<=1230;wu++){
				ans+=a[wu];
				if (ans==n) {tmp++; break;}
				if (ans>n) break;
			}
			ans=0;
		}
		printf("%d\n",tmp);
		tmp=0;
		ans=0;
	}
	return 0;
}