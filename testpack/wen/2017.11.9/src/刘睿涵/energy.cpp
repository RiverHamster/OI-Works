#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
long long a[45086],b[45086],n,m,ans,ask,t;
inline void dd(){
       a[1]=1;
       b[1]=3;
       for(int i=2;i<=45001;i++){
         a[i]=a[i-1]*3+1;
         b[i]=a[i]*3;
         }
}
int main(){
    freopen("energy.in","r",stdin);
    freopen("energy.out","w",stdout);
    cin>>t;
    while(t--){
      cin>>n;
      cout<<n*n<<" "<<(n+1)*n/2*3<<endl;
      }
    return 0;
}
      
      
    
