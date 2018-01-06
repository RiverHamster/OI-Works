#include<cstdio>
#include<iostream>
using namespace std;
int main(){
freopen ("energy.in","r",stdin);
freopen ("energy.out","w",stdout);
	int s;
	scanf ("%d",&s);
	while (s--){
unsigned long long n;
	unsigned long long pf=0,gs=0;
	cin>>n;
	pf=(unsigned long long) n*n;
	cout<<pf<<' ';
	for (int i=1;i<=n;i++){
		gs+=3*i;
	}
	cout<<gs<<endl;
}
return 0;
}