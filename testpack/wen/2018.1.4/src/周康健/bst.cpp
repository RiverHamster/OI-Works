#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	freopen("bst.in","r",stdin);
    freopen("bst.out","w",stdout);
	int t,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		cout<<(n&(n-1))+1<<" "<<(n|(n-1))<<endl;
	}
	return 0;
}
