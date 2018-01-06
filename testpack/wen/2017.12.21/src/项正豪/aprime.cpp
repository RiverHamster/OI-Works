#include<cstdio>
#include<cstring>
bool p[10010],c[1005];
int n,m,t,d,k,ans[1500],ok;
inline bool check(){
	for(int i=2;i<d;i++){
		for(int j=1;j+i-1<=k;j++){
			int sum=0;
			for(int ii=j;ii<=j+i-1;ii++)
				sum+=ans[ii];
			if(p[sum]==0) return 0;
		}
	}
	return 1;
}
inline void dfs(int i,int sum){
	if(ok==1) return;
	if(i>k){
		if(check()==1){
		    ok=1;
		    for(int j=1;j<=k;j++)
			    printf("%d ",ans[j]);
		    printf("\n");
	    }
	    return;
	}
	for(int j=n+1;j<=m;j++){
		if(c[j]==0){
			if(i>d){
				c[j]=1;ans[i]=j;
			    if(p[sum+j-ans[i-d]]==1)
					dfs(i+1,sum+j-ans[i-d]);
				c[j]=0;ans[i]=0;
		    }
			else{
				c[j]=1;ans[i]=j;
				if(p[sum+j]==1) dfs(i+1,sum+j);
			    c[j]=0;ans[i]=0;
			}
		}
	}
}
int main(){
	freopen("aprime.in","r",stdin);
	freopen("aprime.out","w",stdout);
	for(int i=2;i<=10000;i++)
		if(!p[i])
			for(int j=i*2;j<=10000;j+=i)
				p[j]=1;
	scanf("%d",&t);
	while(t--){
		memset(c,0,sizeof(c));
		memset(ans,0,sizeof(ans));
		scanf("%d %d %d",&n,&m,&d);
		ans[1]=n;c[n]=1;ok=0;
		k=m-n+1;
		dfs(2,n);
		if(ok==0) printf("None\n");
	}
	return 0;
}
