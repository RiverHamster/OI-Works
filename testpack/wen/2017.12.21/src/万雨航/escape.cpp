#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
freopen("escape.in","r",stdin);
freopen("escape.out","w",stdout);
int t;
cin>>t;
int a[100005];
char s[100005];
int n;
int i,j;
while(t){
         cin>>s;
         n=strlen(s);
         memset(a,0,sizeof(a));
         i=0;j=n-1;
         for(int x=0;x<n;x++){
                 if(s[x]=='l') {a[j]=x+1;j--;}
                 else {a[i]=x+1;i++;}
                 }
         for(int x=0;x<n;x++)
         cout<<a[x]<<" ";
         cout<<endl;
         t--;
}

}
