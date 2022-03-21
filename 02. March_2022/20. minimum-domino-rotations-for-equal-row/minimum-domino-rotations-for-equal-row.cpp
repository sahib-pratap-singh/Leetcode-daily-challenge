class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n=tops.size();
        //Count the occurence of each number in tops row
        vector<int> countA(7,0);
        //Count the occurence of each number in bottom row
        vector<int> countB(7,0);
        //Count the occurence of numbers which are same in tops and bottom at same index
        vector<int> same(7,0);
        
        //Iterate from 0 to n
        for(int i=0;i<n;i++){
            //Increment the count of tops[i]
            countA[tops[i]]++;
            //Increment the count of bottoms[i]
            countB[bottoms[i]]++;
            //Increment the count if both are same
            if(tops[i]==bottoms[i])
                same[tops[i]]++;
        }
        
        for(int i=0;i<7;i++){
            if((countA[i]+countB[i]-same[i])==n){
                return n-max(countA[i],countB[i]);
            }
        }
        return -1;
    }
};

class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n=tops.size();
        //Count no of elements which are not equal to first element in tops
        int countA=0;
        //Count no of elements which are not equal to first element in bottoms
        int countB=0;
        //Iterate from 0 to n
        for(int i=0;i<n;i++){
            //If any of tops[i] or bottoms[i] are equal to tops[0]
            if(tops[i]==tops[0] || bottoms[i]==tops[0]){
                //Increment when not same in tops
                if(tops[i]!=tops[0])
                    countA++;
                //Increment when not same in bottoms
                if(bottoms[i]!=tops[0])
                    countB++;
                //If we reah last element means we can create the tops with same elements
                if(i==n-1)
                    return min(countA,countB);
            }else{
                break;
            }
        }
        countA=0;
        countB=0;
        for(int i=0;i<n;i++){
            //If any of tops[i] or bottoms[i] are equal to bottoms[0]
            if(tops[i]==bottoms[0] || bottoms[i]==bottoms[0]){
                //Increment when not same in tops
                if(tops[i]!=bottoms[0])
                    countA++;
                //Increment when not same in bottoms
                if(bottoms[i]!=bottoms[0])
                    countB++;
                //If we reah last element means we can create the bottoms with same elements
                if(i==n-1)
                    return min(countA,countB);
            }else{
                break;
            }
        }
        return -1;
    }
};