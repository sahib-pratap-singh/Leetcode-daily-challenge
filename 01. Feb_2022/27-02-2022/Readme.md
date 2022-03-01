<h1>:heavy_check_mark: 662. Maximum Width of Binary Tree</h1>
<blockquote>Given the root of a binary tree, return the maximum width of the given tree.

The maximum width of a tree is the maximum width among all levels.

The width of one level is defined as the length between the end-nodes (the leftmost and rightmost non-null nodes), where the null nodes between the end-nodes are also counted into the length calculation.

It is guaranteed that the answer will in the range of 32-bit signed integer.
</blockquote><br>

* **Example 1**:<br>

        Input: root = [1,3,2,5,3,null,9]
        Output: 4
        Explanation: The maximum width existing in the third level with the length 4 (5,3,null,9).
      
* **Example 2**:<br>

        Input: root = [1,3,null,5,3]
        Output: 2
        Explanation: The maximum width existing in the third level with the length 2 (5,3).

### **Constraints**

        The number of nodes in the tree is in the range [1, 3000].
        -100 <= Node.val <= 100
