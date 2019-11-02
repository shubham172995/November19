#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)
#define mod 1000000007

int main(){
	string s;
	cin>>s;
	bool flag=false;
	loop(i, 0, s.length()){
		if(s[i]=='m'||s[i]=='w'){
			cout<<"0\n";
			flag=true;
			break;
		}
	}
	if(!flag){
		ll ans=1;
		vector<ll> fib(100005);
		fib[0]=fib[1]=1;
		loop(i, 2, 100005){
			fib[i]=(fib[i-2]+fib[i-1])%mod;
		}
		loop(i, 0, s.length()){
			int c=0;
			if(s[i]=='n'){
				int j=i+1;
				while(s[j]=='n'&&j<s.length()){
					++j;
				}
				--j;
				c=j-i+1;
				i=j;
				ans=((ans%mod)*(fib[c]%mod))%mod;
			}
			else if(s[i]=='u'){
				int j=i+1;
				while(s[j]=='u'&&j<s.length()){
					++j;
				}
				--j;
				c=j-i+1;
				i=j;
				ans=((ans%mod)*(fib[c]%mod))%mod;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}