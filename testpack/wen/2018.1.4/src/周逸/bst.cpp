#include<cstdio>
int a[40];
int main(){
	freopen("bst.in","r",stdin);
	freopen("bst.out","w",stdout);
	int t,x;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&x);
		int i,top=0;
	    for(top;x;x/=2,top++)a[top]=x%2;
		for(i=0;!a[i]&&i<top;i++);
		a[i]=0;a[0]=1;
		int sa=0,sb=0;
		for(int j=top-1;j>=0;j--)sa=sa*2+a[j];
		a[i]=1;
		for(int j=i-1;j>=0;j--)a[j]=1;
		for(int j=top-1;j>=0;j--)sb=sb*2+a[j];
		printf("%d %d\n",sa,sb);
	}
	return 0;
}
