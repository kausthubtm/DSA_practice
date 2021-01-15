#include <bits/stdc++.h>
using namespace std;

int main() {

    int prev1, prev2, n, ans;
    cin>>n;

    prev1 = 0;
    prev2 = 1;

    if(n==0) ans = prev1;
    if(n==1) ans = prev2;

    for(int i=1; i<=n; i++) {
        ans = prev1 + prev2;
        prev1 = prev2;
        prev2 = ans;
    }
    cout<<ans;
}