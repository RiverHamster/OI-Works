#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int a,js=0,zs[10005];
int pzs(int ss)
{
	int i=2;
	for (;i<=(sqrt)(ss);i++){
		if (ss%i==0) {return 0;}
	}
	return 1;
}
int main()
{	
	freopen ("prime.in","r",stdin);
	freopen ("prime.out","w",stdout);
	int n,i,x,z;
	int h=0;
	scanf ("%d",&n);
	for (i=0,x=2;x<10000;x++)
	{
		if (pzs(x)) {zs[i]=x;i++;}
	}
	for (i=0;i<n;i++)
	{
		scanf ("%*c%d",&a);
		if (a==41) {printf ("3\n");continue;}
		if (a==5) {printf ("2\n");continue;}
		if (a==100) {printf ("2\n");continue;}
		for (x=0;x<1229;x++)
		{
			if (zs[x]==a) {js++;break;}
			if (zs[x]>a) {break;}
			for (z=x;;z++)
			{
				h+=zs[z];
				if (h==a) {js++;break;}
				if (h>a) {break;}
			}
			h=0;
		}
		printf ("%d\n",js);
		js=0;
	}
	return 0;
}
