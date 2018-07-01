1. [problem description](https://leetcode.com/problems/minimum-swaps-to-make-sequences-increasing/description/)

2. [video explanation](https://www.youtube.com/watch?v=__yxFFRQAl8)

3. 这个dp要记录两个状态，这个我还是第一次遇到，所以卡了。之后要多练。

4. 推荐121，309，790，818

5. **Intuition**

   The cost of making both sequences increasing up to the first `i` columns can be expressed in terms of the cost of making both sequences increasing up to the first `i-1` columns. This is because the only thing that matters to the `i`th column is whether the previous column was swapped or not. This makes dynamic programming an ideal choice.

   Let's remember `n1` (`natural1`), the cost of making the first `i-1` columns increasing and not swapping the `i-1`th column; and `s1` (`swapped1`), the cost of making the first `i-1` columns increasing and swapping the `i-1`th column.

   Now we want candidates `n2` (and `s2`), the costs of making the first `i` columns increasing if we do not swap (or swap, respectively) the `i`th column.

   **Algorithm**

   For convenience, say `a1 = A[i-1], b1 = B[i-1]` and `a2 = A[i], b2 = B[i]`.

   Now, if `a1 < a2` and `b1 < b2`, then it is allowed to have both of these columns natural (unswapped), or both of these columns swapped. This possibility leads to `n2 = min(n2, n1)` and `s2 = min(s2, s1 + 1)`.

   Another, (not exclusive) possibility is that `a1 < b2` and `b1 < a2`. This means that it is allowed to have exactly one of these columns swapped. This possibility leads to `n2 = min(n2, s1)` or `s2 = min(s2, n1 + 1)`.

   Note that it is important to use two if statements separately, because both of the above possibilities might be possible.

   At the end, the optimal solution must leave the last column either natural or swapped, so we take the minimum number of swaps between the two possibilities.



