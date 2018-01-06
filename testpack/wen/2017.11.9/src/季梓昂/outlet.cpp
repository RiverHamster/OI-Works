#include <iostream>
using namespace std;
int main()
{
    freopen("outlet.in","r",stdin);
    freopen("outlet.out","w",stdout);
	int n,s=0;
	cin>>n;
	int a[n],b[n];
	for(int i=1;i<=n;i++)
	{
        cin>>a[0];
        for(int j=1;j<=a[0];j++)
        {
        	cin>>a[j];
        	s+=a[j];
        }
        b[i-1]=s-a[0]+1;
        s=0;
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<endl;
	}
}
