#include<cstdio>
int main(){
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		int s=0,n;
		scanf("%d",&n);
		int w=n/10;
		if(w>0){s+=w;n-=w*10;}
		//printf("%d %d\n",s,n);
		w=n/5;
		if(w>0){s+=w;n-=w*5;}
		//printf("%d %d\n",s,n);
		s+=n;
		printf("%d\n",s);
	}
	return 0;
}
