/*
 * @lc app=leetcode id=201 lang=c
 *
 * [201] Bitwise AND of Numbers Range
 *
 * https://leetcode.com/problems/bitwise-and-of-numbers-range/description/
 *
 * algorithms
 * Medium (35.61%)
 * Total Accepted:    79.2K
 * Total Submissions: 222K
 * Testcase Example:  '5\n7'
 *
 * Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND
 * of all numbers in this range, inclusive.
 * 
 * Example 1:
 * 
 * 
 * Input: [5,7]
 * Output: 4
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [0,1]
 * Output: 0
 */ 
#include <limits.h>
unsigned int rangeBitwiseAnd(int m, int n) {
    unsigned int d = INT_MAX;
    while ((m&d) != (n&d)) {
        d <<= 1;
    }
    return d;
}

