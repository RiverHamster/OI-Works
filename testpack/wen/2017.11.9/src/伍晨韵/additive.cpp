#include <iostream>
#include <cstdio>
using namespace std;
int t,n,a[105],ans;
bool b[1005];
void input (){
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]=1;
	}
	return;
}
void dfs (int now,int sum,int ok){
    if (b[sum] && ok>1) {ans++;return;}
    for (int i=now;i<n;i++){
		sum+=a[i]; 
		dfs (i+1,sum,ok+1);
		//cout<<"sum="<<sum<<endl;
		sum-=a[i];
	}
	return;
}
int main ()
{
	freopen ("additive.in","r",stdin);
	freopen ("additive.out","w",stdout);
	int t;
	cin>>t;
	while (t--){
	    input ();
	    dfs (0,0,0);
	    cout<<ans<<endl;}
	return 0;
}