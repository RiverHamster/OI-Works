#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<fstream>
using namespace std;
ifstream in("energy.in");
ofstream out("energy.out");
typedef long long int ll;
void read(ll &a);
int main(){
    ll t,n,a,b;
    read(t);
    while(t--){
        read(n);
        a=n*n;
        b=n*(n+1)/2*3;
        out<<a<<' '<<b<<endl;
    }
    in.close();
    out.close();
    return 0;
}
void read(ll &a){
    ll k=0;
    bool flag=0;
    char s;
    while(1){
        s=in.get();
        if(s=='-'){
            flag=1;
        }
        if(s>='0'&&s<='9'){
            k=s-'0';
            break;
        }
    }
    while(1){
        s=in.get();
        if(s<'0'||s>'9'){
            break;
        }
        k=(k<<1)+(k<<3)+s-'0';
    }
    if(flag){
        a=-k;
    }else{
        a=k;
    }
}
