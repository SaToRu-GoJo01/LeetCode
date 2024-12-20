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
    private void traverse(TreeNode root, int level, Map<Integer, List<TreeNode>> levelMap) {
        if (root == null) {
            return;
        }

        if (level % 2 == 1) {
            levelMap.putIfAbsent(level, new ArrayList<>());
            levelMap.get(level).add(root);
        }

        traverse(root.left, level + 1, levelMap);
        traverse(root.right, level + 1, levelMap);
    }

    public TreeNode reverseOddLevels(TreeNode root) {
        Map<Integer, List<TreeNode>> levelMap = new HashMap<>();
        traverse(root, 0, levelMap);

        for (List<TreeNode> nodes : levelMap.values()) {
            int n = nodes.size();
            for (int i = 0; i < n / 2; i++) {
                int temp = nodes.get(n - i - 1).val;
                nodes.get(n - i - 1).val = nodes.get(i).val;
                nodes.get(i).val = temp;
            }
        }

        return root;
    }
}