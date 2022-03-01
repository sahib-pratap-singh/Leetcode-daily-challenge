class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.length();
        int ans=0;
        int i=0;
        while(i<n){
            ans+=pow(26,i)*(columnTitle[n-i-1]-'A'+1);
            i++;
        }
        return ans;
    }
};