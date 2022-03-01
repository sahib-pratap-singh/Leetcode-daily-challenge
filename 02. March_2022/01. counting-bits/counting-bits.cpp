class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        result.push_back(0);
        if(n==0){
            return result;
        }
        result.push_back(1);
        for(int i=2;i<=n;i++){
            if(i%2==0){
                result.push_back(result[i/2]);
            }
            else{
                result.push_back(result[i-1]+result[1]);
            }
        }
        return result;
    }
};