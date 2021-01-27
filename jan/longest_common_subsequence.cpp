#include <bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string text1, string text2) {
    int n = text1.length();
    int m = text2.length();
    int L[n+1][m+1];
    for (int i=0; i<=n; i++) {
        for(int j=0; j<=m; j++) {
            if(i==0 || j==0) L[i][j] = 0;
            else if(text1[i-1] == text2[j-1]) L[i][j] = 1 + L[i-1][j-1];
            else L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    return L[n][m];
}

int main() {
    string text1, text2;
    cin>>text1>>text2;
    cout<<longestCommonSubsequence(text1, text2);
    return 0;
}