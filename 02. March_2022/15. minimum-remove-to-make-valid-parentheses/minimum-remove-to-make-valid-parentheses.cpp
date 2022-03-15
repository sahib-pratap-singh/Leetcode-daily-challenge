// Time complexity: O(N)
// Space complexity: O(N)

class Solution {
public:
    unordered_map<int,char> mp;
    void isValid(string s) {
        stack<pair<char,int>> st;
        int i=-1;
        for(auto x:s){
            i++;
            if(x=='(')
                st.push({x,i});
            
            else if(x==')'){
                if(st.empty())
                    continue;
                
                if(st.top().first=='(' and x!=')')
                    continue;
                
                else{
                    mp[st.top().second]=st.top().first;
                    mp[i]=x;
                    st.pop();
                }
            }
        }
    }
    string minRemoveToMakeValid(string s) {
        string ans="";
        isValid(s);
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]==')'){
                if(mp.count(i))
                    ans+=s[i];
            }
            else
                ans+=s[i];
        }
        return ans;
    }
};

// Time complexity: O(N)
// Space complexity: O(N)
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                st.push(i);
            else if(s[i]==')'){
                if(st.empty())
                    s[i]='#';
                else
                    st.pop();
            }
        }
        while(!st.empty()){
            s[st.top()]='#';
            st.pop();
        }
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='#')
                ans+=s[i];
        }
        return ans;
    }
};

// Time complexity: O(N)
// Space complexity: O(1)
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                cnt++;
            else if(s[i]==')'){
                if(cnt==0){
                    s[i]='$';
                }
                else{
                    cnt--;
                }
            }
        }
        
        cnt=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==')')
                cnt++;
            else if(s[i]=='('){
                if(cnt==0){
                    s[i]='$';
                }
                else{
                    cnt--;
                }
            }
        }
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='$')
                ans+=s[i];
        }
        return ans;
    }
};