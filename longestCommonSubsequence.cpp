int longestCommonSubsequence(string &s1,string &s2){
    // Returns the length of Longest Common Subsequence of the two strings.
    const int n = s1.length(), m = s2.length();
    vector<vector<int>> dp = vector<vector<int>>(n+1,vector<int>(m+1,0));
    
    int ans = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dp[i][j] = s1[i-1]==s2[j-1] ? 1+dp[i-1][j-1] : max(dp[i-1][j],dp[i][j-1]);
            ans = max(ans,dp[i][j]);
        }
    }
    
    return ans;
}
