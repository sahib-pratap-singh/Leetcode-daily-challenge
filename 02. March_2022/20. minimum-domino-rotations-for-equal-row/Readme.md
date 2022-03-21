<h1>:heavy_check_mark: 1007. Minimum Domino Rotations For Equal Row</h1>
<blockquote>
In a row of dominoes, tops[i] and bottoms[i] represent the top and bottom halves of the ith domino. (A domino is a tile with two numbers from 1 to 6 - one on each half of the tile.)

We may rotate the ith domino, so that tops[i] and bottoms[i] swap values.

Return the minimum number of rotations so that all the values in tops are the same, or all the values in bottoms are the same.

If it cannot be done, return -1.
</blockquote><br>

* **Example 1**:<br>
![Dice](https://assets.leetcode.com/uploads/2021/05/14/domino.png)

        Input: tops = [2,1,2,4,2,2], bottoms = [5,2,6,2,3,2]
        Output: 2
        Explanation: 
        The first figure represents the dominoes as given by tops and bottoms: before we do any rotations.
        If we rotate the second and fourth dominoes, we can make every value in the top row equal to 2, as indicated by the second figure.
      
* **Example 2**:<br>

        Input: tops = [3,5,1,2,3], bottoms = [3,6,3,3,4]
        Output: -1
        Explanation: 
        In this case, it is not possible to rotate the dominoes to make one row of values equal.


### **Constraints**

        2 <= tops.length <= 2 * 10^4
        bottoms.length == tops.length
        1 <= tops[i], bottoms[i] <= 6

# Notes

[Check out my blog](https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/discuss/1865375/C%2B%2B-or-2-Solutions-or-Simple-solution-with-explanation-or-O(N))

![Notes](https://assets.leetcode.com/users/images/dbba83a4-e9f7-47cd-b5e5-a6022c4c639e_1647741033.2557464.jpeg)

![Notes](https://assets.leetcode.com/users/images/b691fac8-0b0b-459a-937b-9cf48eb9c481_1647741054.8790216.jpeg)