// Title: Binary Number with Alternating Bits
            // Difficulty: Easy
            // Language: Java
            // Link: https://leetcode.com/problems/binary-number-with-alternating-bits/

class Solution {
    public boolean hasAlternatingBits(int n) {
        int x = n>>1;
        while (x > 0){
            if ((n&1) == (x&1))
                return false;
        }
        return true;
    }
            x = x>>1;
            n = n>>1;
}
