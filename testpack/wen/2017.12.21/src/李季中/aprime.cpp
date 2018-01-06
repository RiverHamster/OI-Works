#include<cstdio>
#include<cstring>
int max(int a,int b){return a>b?a:b;}
const int M=10001;
bool p[M],c[1005];
int n,m,d,ans[1005],k;
void dfs(int i,int sum){//printf("%d\n",sum);
	//printf("%d",i);
	int ff=1,ansa=sum;
	if(!p[sum])return ;
	if(k)return ;
	for(int c=max(1,i-d);c<=i-3;c++){
				   ansa-=ans[c];
				   if(!p[ansa]){ff=0;break;}
	}
	if(!ff)return ;
	if(i==m-n+2&&!k){
		for(int j=1;j<i;j++)printf("%d ",ans[j]);
		printf("\n");
		k=1;
	}
	for(int j=n+1;j<=m;j++)
	   if(!c[j]){
		   c[j]=1;
		   ans[i]=j;
			int ansa=sum+j;
		   /*if(i>d)ansa-=ans[i-d];
		      if(!p[ansa])continue;
		       //for(int c=max(1,i-d);c<=i-2;c++){
				   //ansa-=ans[c];
				   //if(!p[ansa]){ff=0;break;}
				//}
				if(!ff)continue;*/
			  if(i<=d)dfs(i+1,ansa);
				  else dfs(i+1,ansa-ans[i-d]);
			  c[j]=0;
		}
}
int main(){
	freopen("aprime.in","r",stdin);
	freopen("aprime.out","w",stdout);
	for(int i=2;i<=M;i++)
		if(!p[i])
			 for(int j=i*2;j<=M;j+=i)
				p[j]=1;
	int t;
	scanf("%d",&t);
    p[1]=1;
	while(t--){
		memset(c,0,sizeof(c));
		k=0;
		scanf("%d%d%d",&n,&m,&d);
		ans[1]=n;
		c[n]=1;
		dfs(2,n);
		if(!k)printf("None\n");
		}
	return 0;
	}