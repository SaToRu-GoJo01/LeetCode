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
class FindElements {
    HashSet<Integer> set = null;
    public void traverse(TreeNode root, int val){
        root.val = val;
        set.add(val);
        if(root.left != null){
            traverse(root.left,2 * val + 1);
        }
        if(root.right != null){
            traverse(root.right,2 * val + 2);
        }
    }
    public FindElements(TreeNode root) {
        set = new HashSet<>();
        traverse(root,0);
    }
    
    public boolean find(int target) {
        if(set.contains(target)){
            return true;
        }
        return false;
    }
}

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements obj = new FindElements(root);
 * boolean param_1 = obj.find(target);
 */