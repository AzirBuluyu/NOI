#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

double a,b,l;
double w;
int main()
{
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	
	scanf("%lf%lf%lf",&a,&b,&l);
	if(a>=l&&b>=l){
		w=l;
		printf("%.7lf\n",w);
		return 0;
	}
	if(a<l&&b>=l){
		w=a;
		printf("%.7lf\n",w);
		return 0;
	}
	if(a>=l&&b<l){
		w=b;
		printf("%.7lf\n",w);
		return 0;
	}
	if(a<l&&b<l){
		;
	}
	
	printf("My poor head =(\n");
	return 0;
}
