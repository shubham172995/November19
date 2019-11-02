#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a, b, c;
		scanf("%d\n%d %d %d", &n, &a, &b, &c);
		getc(stdin);
		string str;
		cin>>str;
		int r, p, s;r=p=s=0;
		for(int i=0;i<str.length();i++){
			if(str[i]=='R')
				++r;
			else if(str[i]=='P')
				++p;
			else ++s;
		}
		int sum=a>s?s:a;
		sum+=b>r?r:b;
		sum+=c>p?p:c;
		//cout<<sum<<endl;
		int temp=0;
		temp=n/2;
		if(n%2)++temp;
		if(sum<temp)
			cout<<"NO\n";
		else{
			int ro, pa, sc;ro=pa=sc=0;
			ro=a-s;
			pa=b-r;
			sc=c-p;
			cout<<"YES\n";
			string sol="";
			loop(i, 0, str.length()){
				if(str[i]=='R'){
					if(b){
						--b;
						sol+='P';
					}
					else if(ro>0){
						--ro;
						sol+='R';
					}
					else if(sc>0){
						--sc;
						sol+='S';
					}
				}
				else if(str[i]=='P'){
					if(c){
						--c;
						sol+='S';
					}
					else if(pa>0){
						--pa;
						sol+='P';
					}
					else if(ro>0){
						--ro;
						sol+='R';
					}
				}
				else{
					if(a){
						--a;
						sol+='R';
					}
					else if(sc>0){
						--sc;
						sol+='S';
					}
					else if(pa>0){
						--pa;
						sol+='P';
					}
				}
			}
			cout<<sol<<endl;
		}
	}
	return 0;
}