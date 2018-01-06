#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
freopen("elephant.in","r",stdin);
freopen("elephant.out","w",stdout);
 int t;
 cin>>t;
 int b;
 while(t){
          int s=0;
          cin>>b;
          int x;
        
                  if(b>=10) {x=b/10;s+=x;b-=x*10;}
                  if(b>=5) {x=b/5;s+=x;b-=x*5;}
                  if(b>=1) {x=b/1;s+=x;b-=x*1;}     
                 cout<<s<<endl;      
          t--;
          }
return 0;
}
