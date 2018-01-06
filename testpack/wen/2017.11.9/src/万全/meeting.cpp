#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<iomanip>//fixed<<
//#include<bits/stdc++.h>
using namespace std;
int t,nw[1005],ans,minn,minid,x,y;bool ok1;
struct cl{
	int a;
	int b;
}c[1005];
bool cmp(cl x,cl y){
	return x.a<y.a;
}
int main(){
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d%d",&c[i].a,&c[i].b);
	}
	sort(c,c+t,cmp);
	for(int j=0;j<t;j++){
		ok1=0;x=c[j].a;y=c[j].b;
		for(int i=0;i<ans;i++){
			if(x>=nw[i]){
				if(x==nw[i]){ok1=1;nw[i]=y;minid=i;minn=nw[i];break;}
				else{
					if(minn>nw[i]){minn=nw[i];ok1=1;minid=i;break;}
				}
			}
		}
		if(ok1){nw[minid]=minn;continue;}
		nw[ans++]=y;
	}
	printf("%d",ans);
	return 0;
}
