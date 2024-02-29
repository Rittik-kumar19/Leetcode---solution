class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);
        queue<TreeNode*>q;
        q.push(root);
        int a=INT_MAX,n=0,flag=0,b;
        TreeNode*ptr;
        while(!q.empty())
        {
            n=q.size();

            if(flag==0)
            {
                a=INT_MIN;
            }
            for(int i=0;i<n;i++)
            {
                ptr=q.front();
                b=ptr->val;
                q.pop();
                if(ptr->left)
                q.push(ptr->left);
                if(ptr->right)
                q.push(ptr->right);
                if(flag==0)
                {
                    
                    if(b<=a||b%2==0)
                    return 0;
                }
                else
                {
                    if(b>=a||b%2!=0)
                    return 0;
                }
                a=b;
            }
             flag=!flag;
                  a=INT_MAX;
        }
        return 1;

    }
};