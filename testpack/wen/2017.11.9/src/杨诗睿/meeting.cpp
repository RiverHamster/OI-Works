#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int n;
int a[10000001],b[10000001];
void yangshirui(int x,int y){ 
    int i,j,mid,t;
    i=x;j=y;mid=b[(x+y)/2];
    while(i<=j){ 
       while(b[i]<mid) ++i;
       while(b[j]>mid) --j;
	   if(i<=j){ 
        t=b[j];b[j]=b[i];b[i]=t;
        t=a[j];a[j]=a[i];a[i]=t;
          ++i;j; 
        }
    }
    if(x<j) yangshirui(x,j);
    if(i<y) yangshirui(i,y);
}
void hahaha(){ 
    int ans=0;
    for(int i=1,t=-1;i<=n;++i)			
     if(a[i]>=t) {++ans;t=b[i];}
    printf("%d\n",ans);
}
int main(){
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ 
      scanf("%d %d",&a[i],&b[i]);
	}
    yangshirui(1,n);
    hahaha();
    return 0;
}