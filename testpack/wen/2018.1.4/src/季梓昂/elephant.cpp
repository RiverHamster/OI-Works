#include <iostream>
using namespace std;
int main()
{
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdin);
	int t,n,s=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		while(1)
		{
			if(n-10>=0)
			{
				n-=10;
				s++;
			}
			else if(n-5>=0)
			{
				n-=5;
				s++;
			}
			else 
			{
				n-=1;
				s++;
			}
			if(n==0)
			{
				break;
			}
		}
		cout<<s;
		cout<<endl;
		s=0;
	}
}
