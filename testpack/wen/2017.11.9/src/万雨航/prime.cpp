#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
long long zs[10005];
bool pzs(long long n){
     for(int i=2;i*i<=n;i++)
     if(n%i==0) return 0;
     return 1;
     }
void zsb(){
     int j=0;
     for(long long i=2;j<2000;i++){
              if(pzs(i)) {zs[j]=i;j++;}
              }
     }
int main(){
freopen("prime.in","r",stdin);
freopen("prime.out","w",stdout);
zsb();
int t;
cin>>t;
int x,s=0,xs=0;
while(t){
         cin>>x;
         for(int i=0;zs[i]<=x;i++){
                 for(int j=i;xs<x;j++){
                         xs+=zs[j];
                         if(xs==x) {s++;break;}
                         }
					xs=0;	 
                 }
                 cout<<s<<endl;
                 s=xs=0;
         t--;
         }
return 0;
}
