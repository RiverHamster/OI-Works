#include<cstdio>

using namespace std;

int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int n;
	scanf("%d",&n );
	int x,y,minn=100000,sum=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		sum=0;
		for(int j=1;j<=x;j++){
			scanf("%d",&y);
			if(y<minn) minn=y;
			sum+=y;
		}
		sum+=minn;
		printf("%d\n",sum);
		
	}
	
	return 0;
}