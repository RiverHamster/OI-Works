#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
char a[100005];
int main(){
    freopen("escape.in","r",stdin);
    freopen("escape.out","w",stdout);
    int t,len;
	cin>>t;
	while(t--){
		scanf("%s",a+1);
		len=strlen(a+1);
		for(int i=1;i<=len;i++)
			if(a[i]=='r')
				printf("%d ",i);
		for(int i=len;i>0;i--)
			if(a[i]=='l')
				printf("%d ",i);
		cout<<endl;
	}
    return 0;
}
