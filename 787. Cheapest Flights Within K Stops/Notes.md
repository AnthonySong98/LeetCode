1. [problem description](https://leetcode.com/problems/cheapest-flights-within-k-stops/description/)
2. 第一次做的时候先写了一个类似Bellman-Ford的算法，时间复杂度为O(n^4),算出了任意两点之间的最有解，然而这是没有必要的，可以只考虑从源点出发的最优解，并且只更新flights里的边。具体操作如下：构造一个k行（表示更新的次数），n列（n个节点）的dp数组，按照B-F的算法更新。初始化的时候，先将所有的格子都填无穷大。
3. 还是要注意special case，比如啥时候要返回-1。
4. 还是要一点点地进步啊，慢慢来，一切都会好起来的！