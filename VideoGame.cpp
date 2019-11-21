#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	ll n, h;
	scanf("%lld %lld", &n, &h);
	vector<ll> a(n);
	lloop(i, 0, n){
		cin>>a[i];
	}
	ll b=0, pos=0;
	while(1){
		ll t;
		scanf("%lld", &t);
		if(!t)
			break;
		if(t==1){
			if(!pos)
				continue;
			else --pos;
		}
		else if(t==2){
			if(pos==n-1)
				continue;
			else ++pos;
		}
		else if(t==3){
			if(!a[pos])
				continue;
			else if(b==1)
				continue;
			else{
				--a[pos];
				b=1;
			}
		}
		else{
			if(a[pos]==h)
				continue;
			else if(b==0)
				continue;
			else{
				b=0;
				a[pos]+=1;
			}
		}
	}
	lloop(i, 0, n){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}