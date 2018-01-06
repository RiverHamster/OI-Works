#include <iostream>
using namespace std;
int main()
{
    freopen("energy.in","r",stdin);
    freopen("energy.out","w",stdout);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]*a[i];
	}
}
