class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int count[10001]={0};
        for(auto x:nums){
            count[x]++;
        }
        int included=10000*count[10000];
        int excluded=0;
        for(int i=9999;i>=0;i--){
            int current=max(included,excluded+i*count[i]);
            excluded=included;
            included=current;
        }
        return included;
    }
};