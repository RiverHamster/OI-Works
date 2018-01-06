#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct node {
	int t1,t2;
}a[1005];
int b[1005];
bool cmp (node x,node y){
	if (x.t1!=y.t1)return x.t1<y.t1;
    else return x.t2<y.t2;
}
int main ()
{
	freopen ("meeting.in","r",stdin);
	freopen ("meeting.out","w",stdout);
	int t;
	cin>>t;
	for (int i=1;i<=t;i++)
		cin>>a[i].t1>>a[i].t2;
	sort (a+1,a+t+1,cmp);
	int ans=1;
	for (int i=1;i<=t;i++){
        bool ok=0;
        for (int j=1;j<=ans;j++){
            if (b[j]<=a[i].t1){
                ok=1;
                b[j]=a[i].t2;
                break;
            }
        }
        if (!ok){
            ans++;
            b[ans]=a[i].t2;
        }
    }
	cout<<ans<<endl;
	return 0;
}