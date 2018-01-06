#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
freopen("outlet.in","r",stdin);
freopen("outlet.out","w",stdout);
int t;
cin>>t;
int a[15];
int s=0;
int k;
while(t){
      cin>>k;
      for(int i=1;i<=k;i++){
              cin>>a[i];
              if(i<k) s+=a[i]-1;
              if(i==k) s+=a[i];
              }   
             cout<<s<<endl;
             s=0; 
         t--;
}
return 0;
}
