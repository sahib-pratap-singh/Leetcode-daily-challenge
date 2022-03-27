<h1>:heavy_check_mark: 881. Boats to Save People</h1>
<blockquote>
You are given an array people where people[i] is the weight of the ith person, and an infinite number of boats where each boat can carry a maximum weight of limit. Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most limit.

Return the minimum number of boats to carry every given person.
 
</blockquote><br>

* **Example 1**:<br>

        Input: people = [1,2], limit = 3
        Output: 1
        Explanation: 1 boat (1, 2)
      
* **Example 2**:<br>

        Input: people = [3,2,2,1], limit = 3
        Output: 3
        Explanation: 3 boats (1, 2), (2) and (3)


### **Constraints**

        1 <= people.length <= 5 * 10^4
        1 <= people[i] <= limit <= 3 * 10^4