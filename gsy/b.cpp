#include<iostream>
#include<cstdio>
#include<ctime>
#define size 7000000
using namespace std;

struct NUM{
	long long place;
	long long len;
};
long long T,x;
NUM place[size+1];
long long now;
long long nownum=4;
long long mod=1e9+7;


int main()
{
	freopen("b.in","r",stdin);
	freopen("b.out","w",stdout);
	scanf("%lld",&T);
	place[1].len=place[1].place=1;
	place[2].len=2;place[2].place=3;
	place[3].len=2;place[3].place=5;
	now=5;
	for(long long i=3;i<=size;i++){
		for(long long j=1;j<=place[i].len;j++){
			now+=i;
			now%=mod;
			place[nownum].len=i;
			place[nownum].place=now%mod;
			nownum++;
			if(nownum==size){
				while(T--)
				{
					scanf("%lld",&x);
					long long temp=place[x].place%mod;
					long long ans=place[temp].place%mod;
					printf("%lld\n",ans);
				}//printf("time:%d",clock());
				return 0;
			}
		}
	}

	return 0;
}
