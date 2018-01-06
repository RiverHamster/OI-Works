#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
struct Node{
	int x,y;
}a[1005];	
bool cmp(Node a,Node b){
	return a.x<b.x;
}
int main(){
   freopen("meeting.in","r",stdin);
   freopen("meeting.out","w",stdout);
   int t,ans=0;
   scanf("%d",&t);
   for(int i=1;i<=t;i++)
		scanf("%d %d",&a[i].x,&a[i].y);
	sort(a+1,a+t+1,cmp);
	ans=t;
	for(int i=2;i<=t;i++){
	int p=a[i].x;
	for(int j=i;j>0;j--)
	if(p<=a[j].y) {ans--; break;}
	}
	cout<<ans;
}
