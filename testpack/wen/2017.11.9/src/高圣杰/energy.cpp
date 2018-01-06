#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
inline long long read(){
    int x=0,f=1;char ch=getchar();
    while('0'>ch||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while('0'<=ch&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}

int main(){
	freopen("energy.in", "r", stdin);
    freopen("energy.out", "w", stdout);
    long long m=read(),n;
    for(int i=1;i<=m;i++){
    	n=read();
    	long long f, g;
    	f=n*n; g=n*(n+1)/2*3;
    	cout<<f<<" "<<g<<endl; 
	}
	return 0;
}

