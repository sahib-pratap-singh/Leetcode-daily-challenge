class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map<char,int> mp; 
        int n=s.length();
        for(int i=0;i<n;i++){
            mp[s[i]]=i;
        }
        int i=0;
        while(i<n){
            int previ=i;
            int ind=mp[s[i]];
            int mx=i;
            for(int x=i;x<=ind;x++){
                if(mp[s[x]]>mx){
                    mx=mp[s[x]];
                }
                if(mx>ind){
                    ind=mx;
                }
                //cout<<mx<<endl;
            }
            i=mx+1;
            ans.push_back(i-previ);
        }
        return ans;
    }
};