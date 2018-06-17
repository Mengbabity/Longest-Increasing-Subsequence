# Longest-Increasing-Subsequence

给定一个数组（无序），计算其最长的一个递增序列的长度。

思路：参考discuss中的代码。
     使用到了algorithm库中的函数：lower_bound,其作用是返回给定数组中，大于等于特定值的数组值的下标。参数为（数组.begin(),数组.end(),value）。
                                upper_bound,返回大于特定值的数组值的下标。
     
     将可能的数值放入vector<int> res中，并且将每次返回的下标值赋给auto it。
     若res中存在比 当前遍历的数 更大的数，就将res中的数替换掉（即每次放入res中的数，必须是当前res中最大的数）。
     这样保证了在按照顺序的前提下，其放入的数也是递增的。最大递增数列的长度即为遍历结束后res的长度。
