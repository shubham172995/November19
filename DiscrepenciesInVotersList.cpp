#include<bits/stdc++.h>
using namespace std;
int main(){
int n1,n2,n3;
cin>>n1>>n2>>n3;
int i;set<int> a;
set<int> b;
set<int> c;int n;
for(i=0;i<n1;i++){cin>>n;a.insert(n);}
for(i=0;i<n2;i++){cin>>n;b.insert(n);}
for(i=0;i<n3;i++){cin>>n;c.insert(n);}
set<int>::iterator it;
set<int>  res;
set_intersection(a.begin(),a.end(),b.begin(),b.end(),std::inserter(res,res.begin()));
set_intersection(b.begin(),b.end(),c.begin(),c.end(),std::inserter(res,res.begin()));
set_intersection(a.begin(),a.end(),c.begin(),c.end(),std::inserter(res,res.begin()));
cout<<res.size()<<endl;
for(it=res.begin();it!=res.end();it++)cout<<*it<<endl;
return 0;}
