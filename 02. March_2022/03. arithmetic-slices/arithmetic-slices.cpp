class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3){
            return 0;
        }
        int count=0;
        int ans=0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i+1]-nums[i]==nums[i+2]-nums[i+1]){
                count++;
                ans+=count;
            }
            else{
                count=0;
            }
        }
        return ans;
    }
};