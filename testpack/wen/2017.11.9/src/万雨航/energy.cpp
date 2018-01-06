#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
freopen("energy.in","r",stdin);
freopen("energy.out","w",stdout);
int t;
cin>>t;
int x;
long long s1,s2,s3=0;
while(t){
         cin>>x;
         s1=x*x;
         for(int i=1;i<=x;i++)
         s3+=i;
         s2=s3*3;
         cout<<s1<<" "<<s2<<endl;
         s1=s2=s3=0;
         t--;
         }
return 0;
}
