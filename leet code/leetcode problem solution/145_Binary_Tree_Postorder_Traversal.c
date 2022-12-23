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
 */
 int res[100];
 int i=-1;
 void postorder(struct TreeNode* root);
int* postorderTraversal(struct TreeNode* root, int* returnSize){
    if(root==NULL)
    {
    *returnSize=0;
    return res;
    }
    postorder(root);
    *returnSize=i+1;
    i=-1;
    return res;

}
void postorder(struct TreeNode* root)
{
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    res[++i]=root->val;
}
