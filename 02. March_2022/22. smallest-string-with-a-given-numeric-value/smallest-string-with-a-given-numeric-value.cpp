class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans(n,'a');
        k-=n;
        int i=n-1;
        while(k>0){
            int tmp=min(25,k);
            ans[i]+=tmp;
            k-=tmp;
            i--;
        }
        return ans;
    }
};