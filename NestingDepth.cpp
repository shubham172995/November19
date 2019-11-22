#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main() {
    
    FASTER;
    
    vector <int> arr;
    int n,t;
    cin >> n;
    for(int i = 0 ; i < n ; ++i) {
        cin >> t;
        arr.push_back(t);
    }
    int dep = 0,maxDep = 0,maxDepPos,eleCount=0,maxeleCount=0,elePos,maxelePos;
    
    for(int cur = 0 ; cur < n ; ++cur) {
        if(arr[cur] == 1) {
            ++dep;
            if(dep > maxDep) {
                maxDep = dep;
                maxDepPos = cur + 1;
            }
            if(dep > 0) {
                ++eleCount;
                if(dep == 1) {
                    elePos = cur+1;
                }
            }
        }
        else {
            
            if(dep > 0) {
                ++eleCount;
            }
            --dep;
            if(dep == 0) {
                if(eleCount >maxeleCount) {
                    maxeleCount = eleCount;
                    maxelePos = elePos;
                }
                eleCount = 0;
            }
            
        }
    }
    
    cout << maxDep << " " << maxDepPos << " " << maxeleCount << " " << maxelePos;
    
    return 0;
}