#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n>81)
		printf("No\n");
	else{
		int temp=0;
		for(int i=9;i>0;i--){
			if(n%i==0){
				temp=n/i;
				break;
			}
		}
		if(temp<10)
			printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}