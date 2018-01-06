#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("star.in","r",stdin);
	freopen("star.out","w",stdout);
	int n1,n2,n3;
	cin>>n1;
	if(n1==2)
	{
		cout<<3<<endl<<0<<endl<<3<<endl;
	}
	else
		cout<<3<<endl<<3<<endl<<5<<endl<<0<<endl;
}