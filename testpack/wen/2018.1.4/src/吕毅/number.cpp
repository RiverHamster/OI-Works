#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;
int t,k;
string s;
bool cmp(string a,string b)
{
	return a>b;
}
int main()
{
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	scanf("%d",&t);
	while(t--)
	{
		ll ans=0,q=-1;
		int len;
		scanf("%d",&k);
		cin>>s;
		len=s.size();
		//sort(s,s+len,cmp);
		for(int i=0;i<len;i++)
			ans+=s[i]-'0';
		if(ans>=k){printf("0\n");break;}
		for(int i=0;i<len;i++)
		{if(ans>=k)break;
			ans=ans-s[i]-'0'+9;
			
			q++;
		}
		cout<<q<<endl;
	}
}