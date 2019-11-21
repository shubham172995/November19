#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int n;
	scanf("%d", &n);
	vector<ll> s(n), t(n);
	loop(i, 0, n){
		int a, b;
		scanf("%d %d", &a, &b);
		if(!i){
			s[i]=a;
			t[i]=b;
		}
		else{
			s[i]=s[i-1]+a;
			t[i]=t[i-1]+b;
		}
	}
	int lead=0, winner=-1;
	loop(i, 0, n){
		if(abs(s[i]-t[i])>lead){
			lead=abs(s[i]-t[i]);
			if(s[i]>t[i])
				winner=0;
			else winner=1;
		}
	}
	cout<<(winner+1)<<" "<<lead<<endl;
	return 0;
}