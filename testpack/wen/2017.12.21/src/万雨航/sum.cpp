#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
freopen("sum.in","r",stdin);
freopen("sum.out","w",stdout);
int t;
cin>>t;
int a[100005];
int n;
long long min,s;
min=s=0;
min=1000000000;
while(t){
      cin>>n;
      for(int i=0;i<n;i++)
      {cin>>a[i];if(a[i]<min)min=a[i];s+=a[i];}
   cout<<s+min<<endl;
   s=0;
   min=100000000;
      t--;
         }
}
