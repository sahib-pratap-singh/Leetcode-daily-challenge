// Time complexity: O(N)
// Space complexity: O(N)
class Solution {
public:
    int scoreOfParentheses(string s) {
        int cur=0;
        stack<int> sp;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                sp.push(cur);
                cur=0;
            }
            else{
                cur=sp.top()+max(2*cur,1);
                sp.pop();
            }
        }
        return cur;
    }
};

// Time complexity: O(N)
// Space complexity: O(1)
class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans=0;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                cnt++;
            else{
                cnt--;
                if(s[i-1]=='(')
                    ans+=1<<cnt;
            }
        }
        return ans;
    }
};