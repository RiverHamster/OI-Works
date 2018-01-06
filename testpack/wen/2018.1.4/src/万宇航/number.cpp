#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;char a[100005];
 int b[100005];
int main(){
freopen("number.in","r",stdin);
freopen("number.out","w",stdout);
 int t;
 cin>>t;
 int k;
 
for(int zxc=1;zxc<=t;zxc++){
          cin>>k;
          scanf("%s",a);
          int s=0;
          int l=strlen(a);
          for(int i=0;i<l;i++)
          {b[i]=a[i]-'0';s+=b[i];}
          if(s>=k) {cout<<0<<endl;continue;}
          sort(b,b+l);
          int o=0;
          for(int i=0;i<l;i++){
                  s+=9-b[i];
                  o++;
                  if(s>=k) {cout<<o<<endl;break;}
                  }
          }
return 0;
}
