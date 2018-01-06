#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char a[100005];
struct db{
	double data;
	int s;
}b[100005];
bool cmp(db a,db b){
	return a.data<b.data;
}
int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	int t,len;
	double s1=0,s2=1;
	scanf("%d",&t);
	while(t--){
		scanf("%s",a);
		len=strlen(a);
		for(int i=0;i<len;i++){
			b[i].data=(s1+s2)/2;
			b[i].s=i+1;
			if(a[i]=='l'){
				s2=(s1+s2)/2;
			}
			else {
				s1=(s1+s2)/2;
			}
		}
		sort(b,b+len,cmp);
		for(int i=0;i<len;i++){
			printf("%d ",b[i].s);
		}
		printf("\n");
	}
	return 0;
}
