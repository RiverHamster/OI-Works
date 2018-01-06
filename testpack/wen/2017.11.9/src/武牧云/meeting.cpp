#include<cstdio>
#include<algorithm>
using namespace std;
struct db{
	int x,y;
}a[100005];
bool cmp(db a,db b){
	return a.x<b.x&&a.y<b.y;
}
int main(){
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	int t,s;
	scanf("%d",&t);
	s=t;
	for(int i=0;i<t;i++){
		scanf("%d %d",&a[i].x,&a[i].y);
	}
	sort(a,a+t,cmp);
	//for(int i=0;i<t;i++){
	//	printf("%d %d\n",a[i].x,a[i].y);
	//}
	for(int i=0;i<t;i++){
		int w=a[i].y;
		int x=a[i].x;
		for(int j=i+1;j<t;j++){
			if(w==a[j].x&&w!=-1&&a[j].x!=-1){s--;a[i].y=-1;a[j].x=-1;
				//a[j].x=-1;
				break;}
			else if(x==a[j].y&&x!=-1&&a[i].y!=-1){s--;a[i].x=-1;a[j].x=-1;
				//a[j].y=-1;
				break;}
		}
	}
	printf("%d",s);
	return 0;
}
