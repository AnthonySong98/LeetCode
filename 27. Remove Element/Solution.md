## Solution

------

#### Approach 1: Two Pointers

**Intuition**

Since question asked us to remove all elements of the given value in-place, we have to handle it with O(1)O(1) extra space. How to solve it? We can keep two pointers ii and jj, where iiis the slow-runner while jj is the fast-runner.

**Algorithm**

When nums[j]nums[j] equals to the given value, skip this element by incrementing jj. As long as nums[j] \neq valnums[j]̸=val, we copy nums[j]nums[j] to nums[i]nums[i] and increment both indexes at the same time. Repeat the process until jj reaches the end of the array and the new length is ii.

This solution is very similar to the solution to [Remove Duplicates from Sorted Array](https://leetcode.com/articles/remove-duplicates-from-sorted-array/).