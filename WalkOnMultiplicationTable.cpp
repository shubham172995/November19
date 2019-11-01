#include<bits/stdc++.h>
#define ll long long
int main(){
	ll n;
	std::cin>>n;
	ll ans=1000000000005;
	for(ll i=1;i<=sqrt(n);i++){
		if(n%i==0){
			ll temp=i-1;
			temp+=(n/i)-1;
			ans=ans<temp?ans:temp;
		}
	}
	std::cout<<ans<<std::endl;
	return 0;
}