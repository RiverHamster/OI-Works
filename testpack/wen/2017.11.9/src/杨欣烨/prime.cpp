#include <stdio.h>
bool np[100005];
int a[100005];
int f[100005];
int ac=0;
void pm(){
	for(int i=2;i<=10000;i++){
		if(!np[i]){
			for(int j=i*i;j<=10000;j+=i) np[j]=true;
		}
	}
	for(int i=2;i<=10000;i++){
		if(!np[i]) a[++ac]=i;
	}
}
void pre(){
	int s;
	for(int i=1;i<=ac;i++){
		s=0;
		for(int j=i;j<=ac;j++){
			s+=a[j];
			if(s>10000) break;
			f[s]++;
		}
	}
}
int main(){
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	pm();
	pre();
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",f[n]);
	}
	return 0;
}