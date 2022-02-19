class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> pq;
        int mn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                nums[i]=nums[i]*2;
            }
            pq.push(nums[i]);
            mn=min(mn,nums[i]);
        }
        int min_deviation=pq.top()-mn;
        while(pq.size()>0 and pq.top()%2==0){
            int top=pq.top();
            pq.pop();
            min_deviation=min(min_deviation,top-mn);
            top=top/2;
            mn=min(mn,top);
            pq.push(top);
        }
        min_deviation=min(min_deviation,pq.top()-mn);
        return min_deviation;
    }
};