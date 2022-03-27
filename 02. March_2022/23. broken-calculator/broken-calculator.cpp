class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int result=0;
        while(target>startValue){
            result++;
            if(target%2==1){
                target++;
            }
            else{
                target/=2;
            }
        }
        return result+startValue-target;
    }
};