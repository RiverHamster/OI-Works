#include<cstdio>
int a[1500];
int db(int a){
	if(a==2)return 1;
	for(int i=2;i*i<=a;i++){
		if(a%i==0)return 0;
	}
	return 1;
}
int main(){
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	int t=0;
	for(int i=2;i<=10000;i++){
		if(db(i)){a[t]=i;t++;}
		//printf("%d ",a[t-1]);
		//if(t%10==0){printf("\n");s1++;} 
	}
	//printf("%d %d %d",t,s1,s2);
	int n,s,x;
	scanf("%d",&n);
	while(n--){
		s=0;
		scanf("%d",&x);
		int k=x;
		for(int i=0;i<1230;i++){
			k=x;
			for(int j=i;j<1230;j++){
				k-=a[j];
				if(k==0){s++;break;}
			}
		}
		printf("%d\n",s);
	}
	return 0;
}
