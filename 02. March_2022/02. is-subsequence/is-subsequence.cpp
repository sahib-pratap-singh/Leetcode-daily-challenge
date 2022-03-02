//Recursive method
//Time complexity: O(N)
//Space complexity: O(N)

class Solution {
public:
    bool solve(string s, string t, int n, int m){
        //base case
        if(n==0){
            return true;
        }
        if(m==0){
            return false;
        }
        //if last elements are same
        if(s[n-1]==t[m-1])
            return solve(s,t,n-1,m-1);
        //if last elements are not same
        return solve(s,t,n,m-1);
    }
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        return solve(s,t,n,m);
    }
};


//Memorization
//Time complexity: O(N)
//Space complexity: O(N)

class Solution {
public:
    bool solve(string s, string t, int n, int m, vector<vector<int>> &dp){
        //base case
        if(n==0)
            return true;
        
        if(m==0)
            return false;
        
        //memorization
        if(dp[n-1][m-1]!=-1)
            return dp[n-1][m-1];
        
        //if last elements are same
        if(s[n-1]==t[m-1])
            return dp[n-1][m-1]= solve(s,t,n-1,m-1, dp);
        //if last elements are not same
        return dp[n-1][m-1]= solve(s,t,n,m-1, dp);
        
    }
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(s,t,n,m, dp);
    }
};


//Iterative method
//Time complexity: O(N)
//Space complexity: O(1)

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int cnt=0;
        for(int j=0;j<t.length();j++){
            if(t[j]==s[i]){
                i++;
                cnt++;
            }
            if(t.length()-j<s.length()-cnt){
                return false;
            }
        }
        return cnt==s.length();
    }
};