/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */int res[100];
 int i=-1;
 void inorder(struct TreeNode* root);

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    if(root==NULL)
    {
        *returnSize=0;
        return res;
    }
    inorder(root);
    *returnSize=i+1;
    i=-1;
    return res;
}
void inorder(struct TreeNode* root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    res[++i]=root->val;
    inorder(root->right);

}
