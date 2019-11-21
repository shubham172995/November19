#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll a, b;
		ll ans=0;
		cin>>a>>b;
		/*while(a!=b){
			if(abs(a-b)>=5){
				if(a>b){
					a-=5;
					++ans;
				}
				else{
					++ans;
					a+=5;
				}
			}
			else if(abs(a-b)>=2&&abs(a-b)<5){
				if(a>b){
					a-=2;
					++ans;
				}
				else{
					++ans;
					a+=2;
				}
			}
			else if(abs(a-b)==1){
				if(a>b){
					a-=1;
					++ans;
				}
				else{
					++ans;
					a+=1;
				}
			}
		}*/
		ll diff=abs(a-b);
		ans+=diff/5;
		diff%=5;
		ans+=diff/2;
		diff%=2;
		ans+=diff;
		cout<<ans<<endl;
	}
	return 0;
}