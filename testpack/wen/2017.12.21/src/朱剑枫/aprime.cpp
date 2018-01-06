#include<iostream>
#include<cstdio>
using namespace std;
bool ok,f[1000001];
int t,n,m,d,a[1000001];
void dfs(int i){
	if(i>m-n+1){
		ok=1;
		for(int i=1;i<=m-n+1;i++) printf("%d ",a[i]);
		printf("\n");
	}
	if(ok==0){
		if(1){
			bool c=1;
			for(int w=n+1;w<=m&&ok==0;w++){
				if(f[w]==0){
					f[w]=1;
					int sum=0;
					c=0;
					bool ko=1;
					for(int q=2;q<i&&q<=d&&c==0;q++){
						sum=0;
						for(int j=i-q+1;j<i;j++) sum+=a[j];
						sum+=w;
						ko=1;
						for(int j=2;j*j<=sum&&c;j++) if(sum%j==0) ko=0;
						if(ko) c=1;
					}
					if(c==0){
						if(i<m-n+1){
							a[i]=w;
							dfs(i+1);
						}
						else{
							c=0;
							for(int q=1;q<d&&c==0;q++){
								sum=0;
								for(int y=1,v=1;v<=q;v++,y++) sum+=a[y];
								sum+=w;
								bool ko=1;
								for(int y=2;y*y<=sum&&ko;y++) if(sum%y==0) ko=0;
								if(ko) c=1;
							}
							if(c==0){
								a[i]=w;
								dfs(i+1);
							}
						}
					}
					f[w]=0;
				}
			}
		}
	}
}
int main(){
	freopen("aprime.in","r",stdin);
	freopen("aprime.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&n,&m,&d);
		f[n]=1;
		ok=0;
		a[1]=n;
		dfs(2);
		if(ok==0) printf("None\n");
	}
}
