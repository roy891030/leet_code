# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
def invertTree(root):
    if root == None:
        return None
    root.left, root.right = root.right, root.left
    invertTree(root.right)
    invertTree(root.left)
    return root


class Solution:
    def invertTree(self, root: TreeNode) -> TreeNode:  # 表示給定一個樹根root且是一個數的節點的結構
        # 須回傳另一個節點
        return(invertTree(root))
