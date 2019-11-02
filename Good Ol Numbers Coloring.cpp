#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int gcd(int a, int b)
{
    if (b)
        return gcd(b, a % b);
    else
        return a;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		if(gcd(a, b)>1)
			cout<<"Infinite\n";
		else cout<<"Finite\n";
	}
	return 0;
}