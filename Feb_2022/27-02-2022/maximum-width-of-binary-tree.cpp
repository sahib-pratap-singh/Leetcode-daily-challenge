class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});
        int ans = 0;
        
        while(!q.empty())
        {
            int sz = q.size();
            
            int left = 0, right = 0;
            
            int mini = q.front().second;
            
            for(int i=0; i<sz; i++)
            {
                pair<TreeNode*, int> front = q.front(); q.pop();
                
                TreeNode* curr = front.first;
                int val = (front.second - mini);
                
                
                if(curr->left)
                    q.push({curr->left, (long long)val * 2 * 1LL + 1});
                
                if(curr->right)
                    q.push({curr->right, (long long) val * 2 * 1LL + 2});
                
                if(i == 0)
                    left = val;
                
                if(i == sz - 1)
                    right = val;
            }
            
            ans = max(ans, right - left + 1);
        }
        
        return ans;
    }
};