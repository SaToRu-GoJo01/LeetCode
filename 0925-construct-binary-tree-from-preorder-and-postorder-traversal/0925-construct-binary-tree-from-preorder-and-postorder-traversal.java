/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode construct(int preStart,int posStart,int preEnd,int[] preorder,int[] postorder){
        if(preStart > preEnd){
            return null;
        }
        TreeNode root = new TreeNode(preorder[preStart]);
        if(preStart == preEnd){
            return root;
        }
        int nextNode = preorder[preStart+1];
        int j = posStart;
        while(nextNode != postorder[j]){
            j++;
        }
        int num = j - posStart + 1;
        root.left = construct(preStart+1, posStart, preStart + num, preorder,postorder);
        root.right = construct(preStart + num + 1, j + 1, preEnd, preorder,postorder);
        return root;
    }
    public TreeNode constructFromPrePost(int[] preorder, int[] postorder) {
        int n = preorder.length;
        return construct(0,0,n-1,preorder,postorder);
    }
}