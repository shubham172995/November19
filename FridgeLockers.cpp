#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);
		ll res=0;
		vector<pair<ll, int> > a(n), ans(m);
		loop(i, 0, n){
			ll temp;
			cin>>temp;
			a[i].first=temp;
			a[i].second=i+1;
		}
		if(m<n||n<=2){
			cout<<"-1\n";
			continue;
		}
		sort(a.begin(), a.end());
		/*loop(i, 0, n){
			cout<<a[i].first<<" "<<a[i].second<<endl;
		}*/
		res+=a[0].first;
		res+=a[1].first;
		//res+=a[2].first;
		ans[0]=make_pair(a[0].second, a[1].second);
		int temp=m;
		//ans[1]=make_pair(a[0].second, a[2].second);
		m-=1;
		loop(i, 1, n){
			if(!m)
				break;
			if(i<n-1){
				ans[i]=make_pair(a[i].second, a[i+1].second);
				res+=a[i].first;
				res+=a[i+1].first;
				--m;
			}
			else if(i==n-1){
				ans[i]=make_pair(a[i].second, a[0].second);
				res+=a[i].first;
				res+=a[0].first;
				--m;
			}
		}
		loop(i, 0, m){
			res+=a[0].first;
			res+=a[1].first;
			ans[n+i]=make_pair(a[0].second, a[1].second);
		}
		cout<<res<<endl;
		loop(i, 0, temp){
			cout<<ans[i].first<<" "<<ans[i].second<<endl;
		}
	}
	return 0;
}